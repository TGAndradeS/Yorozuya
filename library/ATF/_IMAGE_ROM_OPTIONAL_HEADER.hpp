// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _IMAGE_ROM_OPTIONAL_HEADER
    {
        unsigned __int16 Magic;
        char MajorLinkerVersion;
        char MinorLinkerVersion;
        unsigned int SizeOfCode;
        unsigned int SizeOfInitializedData;
        unsigned int SizeOfUninitializedData;
        unsigned int AddressOfEntryPoint;
        unsigned int BaseOfCode;
        unsigned int BaseOfData;
        unsigned int BaseOfBss;
        unsigned int GprMask;
        unsigned int CprMask[4];
        unsigned int GpValue;
    };
END_ATF_NAMESPACE
