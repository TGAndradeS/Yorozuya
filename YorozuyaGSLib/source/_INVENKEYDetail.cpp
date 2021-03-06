#include <_INVENKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_INVENKEYCovDBKey2_ptr _INVENKEYCovDBKey2_next(nullptr);
        Info::_INVENKEYCovDBKey2_clbk _INVENKEYCovDBKey2_user(nullptr);
        
        Info::_INVENKEYIsFilled4_ptr _INVENKEYIsFilled4_next(nullptr);
        Info::_INVENKEYIsFilled4_clbk _INVENKEYIsFilled4_user(nullptr);
        
        Info::_INVENKEYIsOverlapItem6_ptr _INVENKEYIsOverlapItem6_next(nullptr);
        Info::_INVENKEYIsOverlapItem6_clbk _INVENKEYIsOverlapItem6_user(nullptr);
        
        Info::_INVENKEYLoadDBKey8_ptr _INVENKEYLoadDBKey8_next(nullptr);
        Info::_INVENKEYLoadDBKey8_clbk _INVENKEYLoadDBKey8_user(nullptr);
        
        Info::_INVENKEYSetRelease10_ptr _INVENKEYSetRelease10_next(nullptr);
        Info::_INVENKEYSetRelease10_clbk _INVENKEYSetRelease10_user(nullptr);
        
        
        Info::_INVENKEYctor__INVENKEY12_ptr _INVENKEYctor__INVENKEY12_next(nullptr);
        Info::_INVENKEYctor__INVENKEY12_clbk _INVENKEYctor__INVENKEY12_user(nullptr);
        
        
        Info::_INVENKEYctor__INVENKEY14_ptr _INVENKEYctor__INVENKEY14_next(nullptr);
        Info::_INVENKEYctor__INVENKEY14_clbk _INVENKEYctor__INVENKEY14_user(nullptr);
        
        int _INVENKEYCovDBKey2_wrapper(struct _INVENKEY* _this)
        {
           return _INVENKEYCovDBKey2_user(_this, _INVENKEYCovDBKey2_next);
        };
        bool _INVENKEYIsFilled4_wrapper(struct _INVENKEY* _this)
        {
           return _INVENKEYIsFilled4_user(_this, _INVENKEYIsFilled4_next);
        };
        int _INVENKEYIsOverlapItem6_wrapper(struct _INVENKEY* _this)
        {
           return _INVENKEYIsOverlapItem6_user(_this, _INVENKEYIsOverlapItem6_next);
        };
        void _INVENKEYLoadDBKey8_wrapper(struct _INVENKEY* _this, int pl_nKey)
        {
           _INVENKEYLoadDBKey8_user(_this, pl_nKey, _INVENKEYLoadDBKey8_next);
        };
        void _INVENKEYSetRelease10_wrapper(struct _INVENKEY* _this)
        {
           _INVENKEYSetRelease10_user(_this, _INVENKEYSetRelease10_next);
        };
        
        void _INVENKEYctor__INVENKEY12_wrapper(struct _INVENKEY* _this, char byInSlotIndex, char byInTableCode, uint16_t wInItemIndex)
        {
           _INVENKEYctor__INVENKEY12_user(_this, byInSlotIndex, byInTableCode, wInItemIndex, _INVENKEYctor__INVENKEY12_next);
        };
        
        void _INVENKEYctor__INVENKEY14_wrapper(struct _INVENKEY* _this)
        {
           _INVENKEYctor__INVENKEY14_user(_this, _INVENKEYctor__INVENKEY14_next);
        };
        
        ::std::array<hook_record, 7> _INVENKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ca7b0L,
                (LPVOID *)&_INVENKEYCovDBKey2_user,
                (LPVOID *)&_INVENKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_INVENKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((int(_INVENKEY::*)())&_INVENKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x1400ca790L,
                (LPVOID *)&_INVENKEYIsFilled4_user,
                (LPVOID *)&_INVENKEYIsFilled4_next,
                (LPVOID)cast_pointer_function(_INVENKEYIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_INVENKEY::*)())&_INVENKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x1402d4bf0L,
                (LPVOID *)&_INVENKEYIsOverlapItem6_user,
                (LPVOID *)&_INVENKEYIsOverlapItem6_next,
                (LPVOID)cast_pointer_function(_INVENKEYIsOverlapItem6_wrapper),
                (LPVOID)cast_pointer_function((int(_INVENKEY::*)())&_INVENKEY::IsOverlapItem)
            },
            _hook_record {
                (LPVOID)0x1401bf0b0L,
                (LPVOID *)&_INVENKEYLoadDBKey8_user,
                (LPVOID *)&_INVENKEYLoadDBKey8_next,
                (LPVOID)cast_pointer_function(_INVENKEYLoadDBKey8_wrapper),
                (LPVOID)cast_pointer_function((void(_INVENKEY::*)(int))&_INVENKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x140075da0L,
                (LPVOID *)&_INVENKEYSetRelease10_user,
                (LPVOID *)&_INVENKEYSetRelease10_next,
                (LPVOID)cast_pointer_function(_INVENKEYSetRelease10_wrapper),
                (LPVOID)cast_pointer_function((void(_INVENKEY::*)())&_INVENKEY::SetRelease)
            },
            _hook_record {
                (LPVOID)0x140304bc0L,
                (LPVOID *)&_INVENKEYctor__INVENKEY12_user,
                (LPVOID *)&_INVENKEYctor__INVENKEY12_next,
                (LPVOID)cast_pointer_function(_INVENKEYctor__INVENKEY12_wrapper),
                (LPVOID)cast_pointer_function((void(_INVENKEY::*)(char, char, uint16_t))&_INVENKEY::ctor__INVENKEY)
            },
            _hook_record {
                (LPVOID)0x140075ce0L,
                (LPVOID *)&_INVENKEYctor__INVENKEY14_user,
                (LPVOID *)&_INVENKEYctor__INVENKEY14_next,
                (LPVOID)cast_pointer_function(_INVENKEYctor__INVENKEY14_wrapper),
                (LPVOID)cast_pointer_function((void(_INVENKEY::*)())&_INVENKEY::ctor__INVENKEY)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
