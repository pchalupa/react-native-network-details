#include "react-native-network-info.h"

jsi::Value getHostname (jsi::Runtime &rt, const jsi::Value &thisValue, const jsi::Value *args, size_t count) {
    char hostname[MAX_HOSTNAME_LENGTH];
    jsi::Array result = jsi::Array(rt, sizeof(hostname));
    
    if (gethostname(hostname, sizeof(hostname)) != 0)
        jsi::detail::throwJSError(rt, "Err");
    
    for (int i = 0; i < sizeof(hostname); i++) {
        result.setValueAtIndex(rt, i, jsi::Value(int(hostname[i])));
    }
    
    return result;
};

void installNetworkInfo(jsi::Runtime &rt) {
    jsi::Function jsiGetHostname = jsi::Function::createFromHostFunction(rt,  jsi::PropNameID::forAscii(rt, "getHostname"), 0, getHostname);
    
    rt.global().setProperty(rt, "jsiGetHostname", jsiGetHostname);
}

void cleanUpNetworkInfo() {
    
}
