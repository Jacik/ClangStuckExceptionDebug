#include <jni.h>
#include <string>
#include <stdexcept>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_clangstuckexceptiondebug_MainActivity_stringFromJNI(
		JNIEnv *env,
		jobject /* this */)
{
	std::string hello = "Hello from C++";

	throw std::runtime_error("error message");

	return env->NewStringUTF(hello.c_str());
}
