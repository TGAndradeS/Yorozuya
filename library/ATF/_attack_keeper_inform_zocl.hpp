// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_attack_gen_result_zocl.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _attack_keeper_inform_zocl
    {
        unsigned int dwAtterSerial;
        bool bCritical;
        char byListNum;
        _attack_gen_result_zocl::_dam_list DamList[32];
    public:
        _attack_keeper_inform_zocl();
        void ctor__attack_keeper_inform_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_attack_keeper_inform_zocl, 326>(), "_attack_keeper_inform_zocl");
END_ATF_NAMESPACE
