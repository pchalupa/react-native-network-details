#include "react-native-network-details.h"

jsi::Value getHostname(jsi::Runtime &rt, const jsi::Value &thisValue, const jsi::Value *args, size_t count) {
    char hostname[MAX_HOSTNAME_LENGTH];

    if (gethostname(hostname, sizeof(hostname)) != 0)
        jsi::detail::throwJSError(rt, "Err");

    return jsi::String::createFromAscii(rt, hostname);
};

void installNetworkInfo(jsi::Runtime &rt) {
    jsi::Function jsiGetHostname = jsi::Function::createFromHostFunction(rt,  jsi::PropNameID::forAscii(rt, "getHostname"), 0, getHostname);

    rt.global().setProperty(rt, "jsiGetHostname", jsiGetHostname);
}

void cleanUpNetworkInfo() {

}
