/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class reconstructionAPI_ReconstructionAPI */

#ifndef _Included_reconstructionAPI_ReconstructionAPI
#define _Included_reconstructionAPI_ReconstructionAPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    readImage
 * Signature: (Ljava/lang/String;[B)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_readImage
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    cameraInit
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_reconstructionAPI_ReconstructionAPI_cameraInit
  (JNIEnv *, jclass, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    releaseCamera
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_releaseCamera
  (JNIEnv *, jclass, jlong);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    readFromCamera
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_readFromCamera
  (JNIEnv *, jclass, jlong, jbyteArray, jbyteArray);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    partitionImage
 * Signature: ([BIII)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_reconstructionAPI_ReconstructionAPI_partitionImage___3BIII
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    partitionImage
 * Signature: ([BIIII)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_reconstructionAPI_ReconstructionAPI_partitionImage___3BIIII
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    partitionImage
 * Signature: ([BIIIII)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_reconstructionAPI_ReconstructionAPI_partitionImage___3BIIIII
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    mergeImage
 * Signature: ([[BIIIII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_reconstructionAPI_ReconstructionAPI_mergeImage
  (JNIEnv *, jclass, jobjectArray, jint, jint, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    initImageRectification
 * Signature: (Ljava/lang/String;Ljava/lang/String;II)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_reconstructionAPI_ReconstructionAPI_initImageRectification
  (JNIEnv *, jclass, jstring, jstring, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    rectifyStereoImages
 * Signature: ([B[B[B[BII[B[B[B[B)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_rectifyStereoImages
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jint, jint, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    initDisparityCalculation
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_initDisparityCalculation
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    calculateDisparityMap
 * Signature: ([B[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_reconstructionAPI_ReconstructionAPI_calculateDisparityMap
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    calculateDisparityMapGPU
 * Signature: ([B[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_reconstructionAPI_ReconstructionAPI_calculateDisparityMapGPU
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    displayDisparityMap
 * Signature: ([BIIIZ)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_displayDisparityMap
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jboolean);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    reprojectTo3D
 * Signature: ([B[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_reconstructionAPI_ReconstructionAPI_reprojectTo3D
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    queryDepth
 * Signature: ([BIIII)[F
 */
JNIEXPORT jfloatArray JNICALL Java_reconstructionAPI_ReconstructionAPI_queryDepth
  (JNIEnv *, jclass, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    displayImage
 * Signature: (Ljava/lang/String;[BIZ)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_displayImage
  (JNIEnv *, jclass, jstring, jbyteArray, jint, jboolean);

/*
 * Class:     reconstructionAPI_ReconstructionAPI
 * Method:    waitKey
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_reconstructionAPI_ReconstructionAPI_waitKey
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
