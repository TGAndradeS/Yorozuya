#include <CNationSettingDataRUDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataRUctor_CNationSettingDataRU2_ptr CNationSettingDataRUctor_CNationSettingDataRU2_next(nullptr);
        Info::CNationSettingDataRUctor_CNationSettingDataRU2_clbk CNationSettingDataRUctor_CNationSettingDataRU2_user(nullptr);
        
        Info::CNationSettingDataRUCreateBilling4_ptr CNationSettingDataRUCreateBilling4_next(nullptr);
        Info::CNationSettingDataRUCreateBilling4_clbk CNationSettingDataRUCreateBilling4_user(nullptr);
        
        Info::CNationSettingDataRUCreateWorker6_ptr CNationSettingDataRUCreateWorker6_next(nullptr);
        Info::CNationSettingDataRUCreateWorker6_clbk CNationSettingDataRUCreateWorker6_user(nullptr);
        
        Info::CNationSettingDataRUGetCashItemPrice8_ptr CNationSettingDataRUGetCashItemPrice8_next(nullptr);
        Info::CNationSettingDataRUGetCashItemPrice8_clbk CNationSettingDataRUGetCashItemPrice8_user(nullptr);
        
        Info::CNationSettingDataRUGetItemName10_ptr CNationSettingDataRUGetItemName10_next(nullptr);
        Info::CNationSettingDataRUGetItemName10_clbk CNationSettingDataRUGetItemName10_user(nullptr);
        
        Info::CNationSettingDataRUInit12_ptr CNationSettingDataRUInit12_next(nullptr);
        Info::CNationSettingDataRUInit12_clbk CNationSettingDataRUInit12_user(nullptr);
        
        Info::CNationSettingDataRUReadSystemPass14_ptr CNationSettingDataRUReadSystemPass14_next(nullptr);
        Info::CNationSettingDataRUReadSystemPass14_clbk CNationSettingDataRUReadSystemPass14_user(nullptr);
        
        Info::CNationSettingDataRUSendCashDBDSNRequest16_ptr CNationSettingDataRUSendCashDBDSNRequest16_next(nullptr);
        Info::CNationSettingDataRUSendCashDBDSNRequest16_clbk CNationSettingDataRUSendCashDBDSNRequest16_user(nullptr);
        
        
        void CNationSettingDataRUctor_CNationSettingDataRU2_wrapper(struct CNationSettingDataRU* _this)
        {
           CNationSettingDataRUctor_CNationSettingDataRU2_user(_this, CNationSettingDataRUctor_CNationSettingDataRU2_next);
        };
        struct CBilling* CNationSettingDataRUCreateBilling4_wrapper(struct CNationSettingDataRU* _this)
        {
           return CNationSettingDataRUCreateBilling4_user(_this, CNationSettingDataRUCreateBilling4_next);
        };
        struct CashDbWorker* CNationSettingDataRUCreateWorker6_wrapper(struct CNationSettingDataRU* _this)
        {
           return CNationSettingDataRUCreateWorker6_user(_this, CNationSettingDataRUCreateWorker6_next);
        };
        int CNationSettingDataRUGetCashItemPrice8_wrapper(struct CNationSettingDataRU* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataRUGetCashItemPrice8_user(_this, pFld, CNationSettingDataRUGetCashItemPrice8_next);
        };
        char* CNationSettingDataRUGetItemName10_wrapper(struct CNationSettingDataRU* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataRUGetItemName10_user(_this, pFld, CNationSettingDataRUGetItemName10_next);
        };
        int CNationSettingDataRUInit12_wrapper(struct CNationSettingDataRU* _this)
        {
           return CNationSettingDataRUInit12_user(_this, CNationSettingDataRUInit12_next);
        };
        bool CNationSettingDataRUReadSystemPass14_wrapper(struct CNationSettingDataRU* _this)
        {
           return CNationSettingDataRUReadSystemPass14_user(_this, CNationSettingDataRUReadSystemPass14_next);
        };
        void CNationSettingDataRUSendCashDBDSNRequest16_wrapper(struct CNationSettingDataRU* _this)
        {
           CNationSettingDataRUSendCashDBDSNRequest16_user(_this, CNationSettingDataRUSendCashDBDSNRequest16_next);
        };
        
        ::std::array<hook_record, 8> CNationSettingDataRU_functions = 
        {
            _hook_record {
                (LPVOID)0x14022e540L,
                (LPVOID *)&CNationSettingDataRUctor_CNationSettingDataRU2_user,
                (LPVOID *)&CNationSettingDataRUctor_CNationSettingDataRU2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUctor_CNationSettingDataRU2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataRU::*)())&CNationSettingDataRU::ctor_CNationSettingDataRU)
            },
            _hook_record {
                (LPVOID)0x14022e770L,
                (LPVOID *)&CNationSettingDataRUCreateBilling4_user,
                (LPVOID *)&CNationSettingDataRUCreateBilling4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUCreateBilling4_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataRU::*)())&CNationSettingDataRU::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022e6c0L,
                (LPVOID *)&CNationSettingDataRUCreateWorker6_user,
                (LPVOID *)&CNationSettingDataRUCreateWorker6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUCreateWorker6_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataRU::*)())&CNationSettingDataRU::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022e820L,
                (LPVOID *)&CNationSettingDataRUGetCashItemPrice8_user,
                (LPVOID *)&CNationSettingDataRUGetCashItemPrice8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUGetCashItemPrice8_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataRU::*)(struct _CashShop_str_fld*))&CNationSettingDataRU::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022e6a0L,
                (LPVOID *)&CNationSettingDataRUGetItemName10_user,
                (LPVOID *)&CNationSettingDataRUGetItemName10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUGetItemName10_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataRU::*)(struct _NameTxt_fld*))&CNationSettingDataRU::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022e5a0L,
                (LPVOID *)&CNationSettingDataRUInit12_user,
                (LPVOID *)&CNationSettingDataRUInit12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUInit12_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataRU::*)())&CNationSettingDataRU::Init)
            },
            _hook_record {
                (LPVOID)0x14022e850L,
                (LPVOID *)&CNationSettingDataRUReadSystemPass14_user,
                (LPVOID *)&CNationSettingDataRUReadSystemPass14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUReadSystemPass14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataRU::*)())&CNationSettingDataRU::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x14022e840L,
                (LPVOID *)&CNationSettingDataRUSendCashDBDSNRequest16_user,
                (LPVOID *)&CNationSettingDataRUSendCashDBDSNRequest16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataRUSendCashDBDSNRequest16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataRU::*)())&CNationSettingDataRU::SendCashDBDSNRequest)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
