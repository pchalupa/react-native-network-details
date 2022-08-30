#include <jni.h>
#include "react-native-network-info.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_reactnativenetworkinfo_NetworkInfoModule_nativeMultiply(JNIEnv *env, jclass type, jint a, jint b) {
    return example::multiply(a, b);
}
