// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNetTimer.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CNetTimerBeginTimer2_ptr = void (WINAPIV*)(struct CNetTimer*, unsigned int);
        using CNetTimerBeginTimer2_clbk = void (WINAPIV*)(struct CNetTimer*, unsigned int, CNetTimerBeginTimer2_ptr);
        
        using CNetTimerctor_CNetTimer4_ptr = void (WINAPIV*)(struct CNetTimer*);
        using CNetTimerctor_CNetTimer4_clbk = void (WINAPIV*)(struct CNetTimer*, CNetTimerctor_CNetTimer4_ptr);
        using CNetTimerCountingTimer6_ptr = bool (WINAPIV*)(struct CNetTimer*);
        using CNetTimerCountingTimer6_clbk = bool (WINAPIV*)(struct CNetTimer*, CNetTimerCountingTimer6_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
