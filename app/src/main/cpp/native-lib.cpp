#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndkstudy_MainActivity_getNativeText(JNIEnv *env, jobject thiz) {
    return (*env).NewStringUTF("네이티브 함수 호출!");
}