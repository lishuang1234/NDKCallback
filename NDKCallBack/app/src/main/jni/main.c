#include<com_ls_ndkcallback_DataCallback.h>

JNIEXPORT void JNICALL Java_com_ls_ndkcallback_DataCallback_method1
  (JNIEnv * env, jobject jobj){

 //获取class对象 jclass      (*FindClass)(JNIEnv*, const char*);
 //获取方法jmethodID     jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
  //调用方法   void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
   jclass clazz= (*env)->FindClass(env,"com/ls/ndkcallback/DataCallback");
   jmethodID mID= (*env)->GetMethodID(env,clazz,"helloFromJava","()V");
   (*env)->CallVoidMethod(env,jobj,mID);

   }