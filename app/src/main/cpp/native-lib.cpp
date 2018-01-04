#include <jni.h>
#include <string>

extern "C"{
#include "sampledata/module.h"
}

extern "C"
JNIEXPORT jstring

JNICALL
Java_orbbec_com_cplustest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    cfunc(5);
    return env->NewStringUTF(hello.c_str());
}
