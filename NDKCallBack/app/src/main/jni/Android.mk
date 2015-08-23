LOCAL_PATH      := $(call my-dir)

include $(CLEAR_VARS)
#生成库函数名
LOCAL_MODULE    := ndkLib
#源文件名
LOCAL_SRC_FILES := main.c


include $(BUILD_SHARED_LIBRARY)