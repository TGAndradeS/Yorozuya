// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPlex.hpp>
#include <CObject.hpp>
#include <ATL__CStringT.hpp>


START_ATF_NAMESPACE
    struct  CMapStringToOb : CObject
    {
        struct CAssoc
        {
            CAssoc *pNext;
            unsigned int nHashValue;
            ATL::CStringT<char> key;
            CObject *value;
        };
        CAssoc **m_pHashTable;
        unsigned int m_nHashTableSize;
        __int64 m_nCount;
        CAssoc *m_pFreeList;
        CPlex *m_pBlocks;
        __int64 m_nBlockSize;
    };
END_ATF_NAMESPACE
