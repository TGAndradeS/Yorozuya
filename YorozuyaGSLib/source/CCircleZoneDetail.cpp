#include <CCircleZoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCircleZonector_CCircleZone2_ptr CCircleZonector_CCircleZone2_next(nullptr);
        Info::CCircleZonector_CCircleZone2_clbk CCircleZonector_CCircleZone2_user(nullptr);
        
        Info::CCircleZoneCreate4_ptr CCircleZoneCreate4_next(nullptr);
        Info::CCircleZoneCreate4_clbk CCircleZoneCreate4_user(nullptr);
        
        Info::CCircleZoneDestroy6_ptr CCircleZoneDestroy6_next(nullptr);
        Info::CCircleZoneDestroy6_clbk CCircleZoneDestroy6_user(nullptr);
        
        Info::CCircleZoneGetColor8_ptr CCircleZoneGetColor8_next(nullptr);
        Info::CCircleZoneGetColor8_clbk CCircleZoneGetColor8_user(nullptr);
        
        Info::CCircleZoneGetPortalInx10_ptr CCircleZoneGetPortalInx10_next(nullptr);
        Info::CCircleZoneGetPortalInx10_clbk CCircleZoneGetPortalInx10_user(nullptr);
        
        Info::CCircleZoneGoal12_ptr CCircleZoneGoal12_next(nullptr);
        Info::CCircleZoneGoal12_clbk CCircleZoneGoal12_user(nullptr);
        
        Info::CCircleZoneInit14_ptr CCircleZoneInit14_next(nullptr);
        Info::CCircleZoneInit14_clbk CCircleZoneInit14_user(nullptr);
        
        Info::CCircleZoneIsNearPosition16_ptr CCircleZoneIsNearPosition16_next(nullptr);
        Info::CCircleZoneIsNearPosition16_clbk CCircleZoneIsNearPosition16_user(nullptr);
        
        Info::CCircleZoneSendMsgCreate18_ptr CCircleZoneSendMsgCreate18_next(nullptr);
        Info::CCircleZoneSendMsgCreate18_clbk CCircleZoneSendMsgCreate18_user(nullptr);
        
        Info::CCircleZoneSendMsgGoal20_ptr CCircleZoneSendMsgGoal20_next(nullptr);
        Info::CCircleZoneSendMsgGoal20_clbk CCircleZoneSendMsgGoal20_user(nullptr);
        
        Info::CCircleZoneSendMsg_FixPosition22_ptr CCircleZoneSendMsg_FixPosition22_next(nullptr);
        Info::CCircleZoneSendMsg_FixPosition22_clbk CCircleZoneSendMsg_FixPosition22_user(nullptr);
        
        
        Info::CCircleZonedtor_CCircleZone28_ptr CCircleZonedtor_CCircleZone28_next(nullptr);
        Info::CCircleZonedtor_CCircleZone28_clbk CCircleZonedtor_CCircleZone28_user(nullptr);
        
        
        void CCircleZonector_CCircleZone2_wrapper(struct CCircleZone* _this)
        {
           CCircleZonector_CCircleZone2_user(_this, CCircleZonector_CCircleZone2_next);
        };
        bool CCircleZoneCreate4_wrapper(struct CCircleZone* _this, struct CMapData* pkMap, char byColor)
        {
           return CCircleZoneCreate4_user(_this, pkMap, byColor, CCircleZoneCreate4_next);
        };
        void CCircleZoneDestroy6_wrapper(struct CCircleZone* _this)
        {
           CCircleZoneDestroy6_user(_this, CCircleZoneDestroy6_next);
        };
        char CCircleZoneGetColor8_wrapper(struct CCircleZone* _this)
        {
           return CCircleZoneGetColor8_user(_this, CCircleZoneGetColor8_next);
        };
        int CCircleZoneGetPortalInx10_wrapper(struct CCircleZone* _this)
        {
           return CCircleZoneGetPortalInx10_user(_this, CCircleZoneGetPortalInx10_next);
        };
        char CCircleZoneGoal12_wrapper(struct CCircleZone* _this, struct CMapData* pkMap, float* pfCurPos)
        {
           return CCircleZoneGoal12_user(_this, pkMap, pfCurPos, CCircleZoneGoal12_next);
        };
        bool CCircleZoneInit14_wrapper(struct CCircleZone* _this, unsigned int uiMapInx, int iPlayerInx, int iNth, uint16_t wInx, struct CMapData* pkMap)
        {
           return CCircleZoneInit14_user(_this, uiMapInx, iPlayerInx, iNth, wInx, pkMap, CCircleZoneInit14_next);
        };
        bool CCircleZoneIsNearPosition16_wrapper(struct CCircleZone* _this, float* pfCurPos)
        {
           return CCircleZoneIsNearPosition16_user(_this, pfCurPos, CCircleZoneIsNearPosition16_next);
        };
        void CCircleZoneSendMsgCreate18_wrapper(struct CCircleZone* _this)
        {
           CCircleZoneSendMsgCreate18_user(_this, CCircleZoneSendMsgCreate18_next);
        };
        void CCircleZoneSendMsgGoal20_wrapper(struct CCircleZone* _this)
        {
           CCircleZoneSendMsgGoal20_user(_this, CCircleZoneSendMsgGoal20_next);
        };
        void CCircleZoneSendMsg_FixPosition22_wrapper(struct CCircleZone* _this, int n)
        {
           CCircleZoneSendMsg_FixPosition22_user(_this, n, CCircleZoneSendMsg_FixPosition22_next);
        };
        
        void CCircleZonedtor_CCircleZone28_wrapper(struct CCircleZone* _this)
        {
           CCircleZonedtor_CCircleZone28_user(_this, CCircleZonedtor_CCircleZone28_next);
        };
        
        ::std::array<hook_record, 12> CCircleZone_functions = 
        {
            _hook_record {
                (LPVOID)0x14012d660L,
                (LPVOID *)&CCircleZonector_CCircleZone2_user,
                (LPVOID *)&CCircleZonector_CCircleZone2_next,
                (LPVOID)cast_pointer_function(CCircleZonector_CCircleZone2_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)())&CCircleZone::ctor_CCircleZone)
            },
            _hook_record {
                (LPVOID)0x14012da60L,
                (LPVOID *)&CCircleZoneCreate4_user,
                (LPVOID *)&CCircleZoneCreate4_next,
                (LPVOID)cast_pointer_function(CCircleZoneCreate4_wrapper),
                (LPVOID)cast_pointer_function((bool(CCircleZone::*)(struct CMapData*, char))&CCircleZone::Create)
            },
            _hook_record {
                (LPVOID)0x14012db70L,
                (LPVOID *)&CCircleZoneDestroy6_user,
                (LPVOID *)&CCircleZoneDestroy6_next,
                (LPVOID)cast_pointer_function(CCircleZoneDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)())&CCircleZone::Destroy)
            },
            _hook_record {
                (LPVOID)0x140034b20L,
                (LPVOID *)&CCircleZoneGetColor8_user,
                (LPVOID *)&CCircleZoneGetColor8_next,
                (LPVOID)cast_pointer_function(CCircleZoneGetColor8_wrapper),
                (LPVOID)cast_pointer_function((char(CCircleZone::*)())&CCircleZone::GetColor)
            },
            _hook_record {
                (LPVOID)0x140034b00L,
                (LPVOID *)&CCircleZoneGetPortalInx10_user,
                (LPVOID *)&CCircleZoneGetPortalInx10_next,
                (LPVOID)cast_pointer_function(CCircleZoneGetPortalInx10_wrapper),
                (LPVOID)cast_pointer_function((int(CCircleZone::*)())&CCircleZone::GetPortalInx)
            },
            _hook_record {
                (LPVOID)0x14012dbe0L,
                (LPVOID *)&CCircleZoneGoal12_user,
                (LPVOID *)&CCircleZoneGoal12_next,
                (LPVOID)cast_pointer_function(CCircleZoneGoal12_wrapper),
                (LPVOID)cast_pointer_function((char(CCircleZone::*)(struct CMapData*, float*))&CCircleZone::Goal)
            },
            _hook_record {
                (LPVOID)0x14012d740L,
                (LPVOID *)&CCircleZoneInit14_user,
                (LPVOID *)&CCircleZoneInit14_next,
                (LPVOID)cast_pointer_function(CCircleZoneInit14_wrapper),
                (LPVOID)cast_pointer_function((bool(CCircleZone::*)(unsigned int, int, int, uint16_t, struct CMapData*))&CCircleZone::Init)
            },
            _hook_record {
                (LPVOID)0x14012de20L,
                (LPVOID *)&CCircleZoneIsNearPosition16_user,
                (LPVOID *)&CCircleZoneIsNearPosition16_next,
                (LPVOID)cast_pointer_function(CCircleZoneIsNearPosition16_wrapper),
                (LPVOID)cast_pointer_function((bool(CCircleZone::*)(float*))&CCircleZone::IsNearPosition)
            },
            _hook_record {
                (LPVOID)0x14012dc60L,
                (LPVOID *)&CCircleZoneSendMsgCreate18_user,
                (LPVOID *)&CCircleZoneSendMsgCreate18_next,
                (LPVOID)cast_pointer_function(CCircleZoneSendMsgCreate18_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)())&CCircleZone::SendMsgCreate)
            },
            _hook_record {
                (LPVOID)0x14012dda0L,
                (LPVOID *)&CCircleZoneSendMsgGoal20_user,
                (LPVOID *)&CCircleZoneSendMsgGoal20_next,
                (LPVOID)cast_pointer_function(CCircleZoneSendMsgGoal20_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)())&CCircleZone::SendMsgGoal)
            },
            _hook_record {
                (LPVOID)0x14012dd00L,
                (LPVOID *)&CCircleZoneSendMsg_FixPosition22_user,
                (LPVOID *)&CCircleZoneSendMsg_FixPosition22_next,
                (LPVOID)cast_pointer_function(CCircleZoneSendMsg_FixPosition22_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)(int))&CCircleZone::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x14012d6f0L,
                (LPVOID *)&CCircleZonedtor_CCircleZone28_user,
                (LPVOID *)&CCircleZonedtor_CCircleZone28_next,
                (LPVOID)cast_pointer_function(CCircleZonedtor_CCircleZone28_wrapper),
                (LPVOID)cast_pointer_function((void(CCircleZone::*)())&CCircleZone::dtor_CCircleZone)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
