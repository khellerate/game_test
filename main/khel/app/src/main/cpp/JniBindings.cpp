#include <jni.h>

extern "C" JNIEXPORT jstring JNICALL
Java_khel_main_MainActivity_stringFromJNI(
	JNIEnv* env,
	jobject thiz) {
	return env->NewStringUTF("Hello from Visual Studio C++");
}


