/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_misc_Version */

#ifndef _Included_sun_misc_Version
#define _Included_sun_misc_Version
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sun_misc_Version
 * Method:    getJvmSpecialVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sun_misc_Version_getJvmSpecialVersion
  (JNIEnv *, jclass);

/*
 * Class:     sun_misc_Version
 * Method:    getJdkSpecialVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sun_misc_Version_getJdkSpecialVersion
  (JNIEnv *, jclass);

/*
 * Class:     sun_misc_Version
 * Method:    getJvmVersionInfo
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_misc_Version_getJvmVersionInfo
  (JNIEnv *, jclass);

/*
 * Class:     sun_misc_Version
 * Method:    getJdkVersionInfo
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_misc_Version_getJdkVersionInfo
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif