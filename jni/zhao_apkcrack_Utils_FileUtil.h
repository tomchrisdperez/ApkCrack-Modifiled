/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class zhao_apkcrack_Utils_FileUtil */

#ifndef _Included_zhao_apkcrack_Utils_FileUtil
#define _Included_zhao_apkcrack_Utils_FileUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     zhao_apkcrack_Utils_FileUtil
 * Method:    deodex
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_zhao_apkcrack_Utils_FileUtil_deodex
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     zhao_apkcrack_Utils_FileUtil
 * Method:    oat2dex
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_zhao_apkcrack_Utils_FileUtil_oat2dex
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     zhao_apkcrack_Utils_FileUtil
 * Method:    testExecute
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_zhao_apkcrack_Utils_FileUtil_testExecute
  (JNIEnv *, jclass, jstring);

/*
 * Class:     zhao_apkcrack_Utils_FileUtil
 * Method:    zipalign
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_zhao_apkcrack_Utils_FileUtil_zipalign
  (JNIEnv *, jclass, jstring, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif