// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct tagI_RpcProxyCallbackInterface
    {
        int (WINAPIV *IsValidMachineFn)(char *, char *, unsigned int);
        int (WINAPIV *GetClientAddressFn)(void *, char *, unsigned int *);
        int (WINAPIV *GetConnectionTimeoutFn)(unsigned int *);
        int (WINAPIV *PerformCalloutFn)(void *, _RDR_CALLOUT_STATE *, _RPC_HTTP_REDIRECTOR_STAGE);
        void (WINAPIV *FreeCalloutStateFn)(_RDR_CALLOUT_STATE *);
    };
END_ATF_NAMESPACE
