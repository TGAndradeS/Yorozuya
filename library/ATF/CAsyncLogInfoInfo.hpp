// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAsyncLogInfo.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CAsyncLogInfoctor_CAsyncLogInfo2_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoctor_CAsyncLogInfo2_clbk = void (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoctor_CAsyncLogInfo2_ptr);
        using CAsyncLogInfoGetCount4_ptr = unsigned int (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoGetCount4_clbk = unsigned int (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoGetCount4_ptr);
        using CAsyncLogInfoGetDirPath6_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoGetDirPath6_clbk = char* (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoGetDirPath6_ptr);
        using CAsyncLogInfoGetFileName8_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoGetFileName8_clbk = char* (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoGetFileName8_ptr);
        using CAsyncLogInfoGetTypeName10_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoGetTypeName10_clbk = char* (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoGetTypeName10_ptr);
        using CAsyncLogInfoIncreaseCount12_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoIncreaseCount12_clbk = void (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoIncreaseCount12_ptr);
        using CAsyncLogInfoInit14_ptr = bool (WINAPIV*)(struct CAsyncLogInfo*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int, struct CLogFile*);
        using CAsyncLogInfoInit14_clbk = bool (WINAPIV*)(struct CAsyncLogInfo*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int, struct CLogFile*, CAsyncLogInfoInit14_ptr);
        using CAsyncLogInfoUpdateLogFileName16_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfoUpdateLogFileName16_clbk = void (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfoUpdateLogFileName16_ptr);
        
        using CAsyncLogInfodtor_CAsyncLogInfo20_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        using CAsyncLogInfodtor_CAsyncLogInfo20_clbk = void (WINAPIV*)(struct CAsyncLogInfo*, CAsyncLogInfodtor_CAsyncLogInfo20_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
