#include <CPotionMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPotionMgrApplyPotion2_ptr CPotionMgrApplyPotion2_next(nullptr);
        Info::CPotionMgrApplyPotion2_clbk CPotionMgrApplyPotion2_user(nullptr);
        
        
        Info::CPotionMgrctor_CPotionMgr4_ptr CPotionMgrctor_CPotionMgr4_next(nullptr);
        Info::CPotionMgrctor_CPotionMgr4_clbk CPotionMgrctor_CPotionMgr4_user(nullptr);
        
        Info::CPotionMgrCheckPotionUsableMap6_ptr CPotionMgrCheckPotionUsableMap6_next(nullptr);
        Info::CPotionMgrCheckPotionUsableMap6_clbk CPotionMgrCheckPotionUsableMap6_user(nullptr);
        
        Info::CPotionMgrComplete_RenameChar_DB_Select8_ptr CPotionMgrComplete_RenameChar_DB_Select8_next(nullptr);
        Info::CPotionMgrComplete_RenameChar_DB_Select8_clbk CPotionMgrComplete_RenameChar_DB_Select8_user(nullptr);
        
        Info::CPotionMgrComplete_RenameChar_DB_Update10_ptr CPotionMgrComplete_RenameChar_DB_Update10_next(nullptr);
        Info::CPotionMgrComplete_RenameChar_DB_Update10_clbk CPotionMgrComplete_RenameChar_DB_Update10_user(nullptr);
        
        Info::CPotionMgrDatafileInit12_ptr CPotionMgrDatafileInit12_next(nullptr);
        Info::CPotionMgrDatafileInit12_clbk CPotionMgrDatafileInit12_user(nullptr);
        
        Info::CPotionMgrInsertMovePotionStoneEffect14_ptr CPotionMgrInsertMovePotionStoneEffect14_next(nullptr);
        Info::CPotionMgrInsertMovePotionStoneEffect14_clbk CPotionMgrInsertMovePotionStoneEffect14_user(nullptr);
        
        Info::CPotionMgrInsertPotionContEffect16_ptr CPotionMgrInsertPotionContEffect16_next(nullptr);
        Info::CPotionMgrInsertPotionContEffect16_clbk CPotionMgrInsertPotionContEffect16_user(nullptr);
        
        Info::CPotionMgrInsertRenamePotion18_ptr CPotionMgrInsertRenamePotion18_next(nullptr);
        Info::CPotionMgrInsertRenamePotion18_clbk CPotionMgrInsertRenamePotion18_user(nullptr);
        
        Info::CPotionMgrIsPotionDelayUseIndex20_ptr CPotionMgrIsPotionDelayUseIndex20_next(nullptr);
        Info::CPotionMgrIsPotionDelayUseIndex20_clbk CPotionMgrIsPotionDelayUseIndex20_user(nullptr);
        
        Info::CPotionMgrPreCheckPotion22_ptr CPotionMgrPreCheckPotion22_next(nullptr);
        Info::CPotionMgrPreCheckPotion22_clbk CPotionMgrPreCheckPotion22_user(nullptr);
        
        Info::CPotionMgrPushRenamePotionDBLog24_ptr CPotionMgrPushRenamePotionDBLog24_next(nullptr);
        Info::CPotionMgrPushRenamePotionDBLog24_clbk CPotionMgrPushRenamePotionDBLog24_user(nullptr);
        
        Info::CPotionMgrRemovePotionContEffect26_ptr CPotionMgrRemovePotionContEffect26_next(nullptr);
        Info::CPotionMgrRemovePotionContEffect26_clbk CPotionMgrRemovePotionContEffect26_user(nullptr);
        
        Info::CPotionMgrSelectDeleteBuf28_ptr CPotionMgrSelectDeleteBuf28_next(nullptr);
        Info::CPotionMgrSelectDeleteBuf28_clbk CPotionMgrSelectDeleteBuf28_user(nullptr);
        
        Info::CPotionMgrSetPotionDataName30_ptr CPotionMgrSetPotionDataName30_next(nullptr);
        Info::CPotionMgrSetPotionDataName30_clbk CPotionMgrSetPotionDataName30_user(nullptr);
        
        Info::CPotionMgrUpdatePotionContEffect32_ptr CPotionMgrUpdatePotionContEffect32_next(nullptr);
        Info::CPotionMgrUpdatePotionContEffect32_clbk CPotionMgrUpdatePotionContEffect32_user(nullptr);
        
        Info::CPotionMgrUsePotion34_ptr CPotionMgrUsePotion34_next(nullptr);
        Info::CPotionMgrUsePotion34_clbk CPotionMgrUsePotion34_user(nullptr);
        
        
        Info::CPotionMgrdtor_CPotionMgr36_ptr CPotionMgrdtor_CPotionMgr36_next(nullptr);
        Info::CPotionMgrdtor_CPotionMgr36_clbk CPotionMgrdtor_CPotionMgr36_user(nullptr);
        
        int CPotionMgrApplyPotion2_wrapper(struct CPotionMgr* _this, struct CPlayer* pUsePlayer, struct CPlayer* pApplyPlayer, struct _skill_fld* pEffecFld, struct _CheckPotion_fld* pCheckFld, struct _PotionItem_fld* pfB, bool bCommonPotion)
        {
           return CPotionMgrApplyPotion2_user(_this, pUsePlayer, pApplyPlayer, pEffecFld, pCheckFld, pfB, bCommonPotion, CPotionMgrApplyPotion2_next);
        };
        
        void CPotionMgrctor_CPotionMgr4_wrapper(struct CPotionMgr* _this)
        {
           CPotionMgrctor_CPotionMgr4_user(_this, CPotionMgrctor_CPotionMgr4_next);
        };
        bool CPotionMgrCheckPotionUsableMap6_wrapper(struct CPotionMgr* _this, struct _PotionItem_fld* pPotionFld, struct CMapData* pMap)
        {
           return CPotionMgrCheckPotionUsableMap6_user(_this, pPotionFld, pMap, CPotionMgrCheckPotionUsableMap6_next);
        };
        void CPotionMgrComplete_RenameChar_DB_Select8_wrapper(struct CPotionMgr* _this, char byRet, char* p)
        {
           CPotionMgrComplete_RenameChar_DB_Select8_user(_this, byRet, p, CPotionMgrComplete_RenameChar_DB_Select8_next);
        };
        void CPotionMgrComplete_RenameChar_DB_Update10_wrapper(struct CPotionMgr* _this, char byRet, char* p)
        {
           CPotionMgrComplete_RenameChar_DB_Update10_user(_this, byRet, p, CPotionMgrComplete_RenameChar_DB_Update10_next);
        };
        bool CPotionMgrDatafileInit12_wrapper(struct CPotionMgr* _this)
        {
           return CPotionMgrDatafileInit12_user(_this, CPotionMgrDatafileInit12_next);
        };
        void CPotionMgrInsertMovePotionStoneEffect14_wrapper(struct CPotionMgr* _this, struct CPlayer* pApplyPlayer)
        {
           CPotionMgrInsertMovePotionStoneEffect14_user(_this, pApplyPlayer, CPotionMgrInsertMovePotionStoneEffect14_next);
        };
        int CPotionMgrInsertPotionContEffect16_wrapper(struct CPotionMgr* _this, struct CPlayer* pApplyPlayer, struct _ContPotionData* ContPotionData, struct _skill_fld* pEffecFld, unsigned int dwDurTime)
        {
           return CPotionMgrInsertPotionContEffect16_user(_this, pApplyPlayer, ContPotionData, pEffecFld, dwDurTime, CPotionMgrInsertPotionContEffect16_next);
        };
        bool CPotionMgrInsertRenamePotion18_wrapper(struct CPotionMgr* _this, struct CRFWorldDatabase* pkWorldDB, char* pData)
        {
           return CPotionMgrInsertRenamePotion18_user(_this, pkWorldDB, pData, CPotionMgrInsertRenamePotion18_next);
        };
        bool CPotionMgrIsPotionDelayUseIndex20_wrapper(struct CPotionMgr* _this, int nIndex)
        {
           return CPotionMgrIsPotionDelayUseIndex20_user(_this, nIndex, CPotionMgrIsPotionDelayUseIndex20_next);
        };
        int CPotionMgrPreCheckPotion22_wrapper(struct CPotionMgr* _this, struct CPlayer* pUsePlayer, struct CCharacter** pTargetCharacter, struct _PotionItem_fld* pfB, unsigned int nCurTime, struct _skill_fld* pFld, bool bCheckDist)
        {
           return CPotionMgrPreCheckPotion22_user(_this, pUsePlayer, pTargetCharacter, pfB, nCurTime, pFld, bCheckDist, CPotionMgrPreCheckPotion22_next);
        };
        void CPotionMgrPushRenamePotionDBLog24_wrapper(struct CPotionMgr* _this, char* pInfo)
        {
           CPotionMgrPushRenamePotionDBLog24_user(_this, pInfo, CPotionMgrPushRenamePotionDBLog24_next);
        };
        int CPotionMgrRemovePotionContEffect26_wrapper(struct CPotionMgr* _this, struct CPlayer* pApplyPlayer, struct _ContPotionData* ContPotionData)
        {
           return CPotionMgrRemovePotionContEffect26_user(_this, pApplyPlayer, ContPotionData, CPotionMgrRemovePotionContEffect26_next);
        };
        int CPotionMgrSelectDeleteBuf28_wrapper(struct CPotionMgr* _this, struct CPlayer* pOne, bool bUse, bool bRemove)
        {
           return CPotionMgrSelectDeleteBuf28_user(_this, pOne, bUse, bRemove, CPotionMgrSelectDeleteBuf28_next);
        };
        bool CPotionMgrSetPotionDataName30_wrapper(struct CPotionMgr* _this)
        {
           return CPotionMgrSetPotionDataName30_user(_this, CPotionMgrSetPotionDataName30_next);
        };
        void CPotionMgrUpdatePotionContEffect32_wrapper(struct CPotionMgr* _this, struct CPlayer* pPlayer)
        {
           CPotionMgrUpdatePotionContEffect32_user(_this, pPlayer, CPotionMgrUpdatePotionContEffect32_next);
        };
        int CPotionMgrUsePotion34_wrapper(struct CPotionMgr* _this, struct CPlayer* pUsePlayer, struct CCharacter* pTargetCharacter, struct _PotionItem_fld* pfB, unsigned int nCurTime)
        {
           return CPotionMgrUsePotion34_user(_this, pUsePlayer, pTargetCharacter, pfB, nCurTime, CPotionMgrUsePotion34_next);
        };
        
        void CPotionMgrdtor_CPotionMgr36_wrapper(struct CPotionMgr* _this)
        {
           CPotionMgrdtor_CPotionMgr36_user(_this, CPotionMgrdtor_CPotionMgr36_next);
        };
        
        ::std::array<hook_record, 18> CPotionMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14039e6d0L,
                (LPVOID *)&CPotionMgrApplyPotion2_user,
                (LPVOID *)&CPotionMgrApplyPotion2_next,
                (LPVOID)cast_pointer_function(CPotionMgrApplyPotion2_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, struct CPlayer*, struct _skill_fld*, struct _CheckPotion_fld*, struct _PotionItem_fld*, bool))&CPotionMgr::ApplyPotion)
            },
            _hook_record {
                (LPVOID)0x1403a1120L,
                (LPVOID *)&CPotionMgrctor_CPotionMgr4_user,
                (LPVOID *)&CPotionMgrctor_CPotionMgr4_next,
                (LPVOID)cast_pointer_function(CPotionMgrctor_CPotionMgr4_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)())&CPotionMgr::ctor_CPotionMgr)
            },
            _hook_record {
                (LPVOID)0x14039f880L,
                (LPVOID *)&CPotionMgrCheckPotionUsableMap6_user,
                (LPVOID *)&CPotionMgrCheckPotionUsableMap6_next,
                (LPVOID)cast_pointer_function(CPotionMgrCheckPotionUsableMap6_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionMgr::*)(struct _PotionItem_fld*, struct CMapData*))&CPotionMgr::CheckPotionUsableMap)
            },
            _hook_record {
                (LPVOID)0x14039f190L,
                (LPVOID *)&CPotionMgrComplete_RenameChar_DB_Select8_user,
                (LPVOID *)&CPotionMgrComplete_RenameChar_DB_Select8_next,
                (LPVOID)cast_pointer_function(CPotionMgrComplete_RenameChar_DB_Select8_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)(char, char*))&CPotionMgr::Complete_RenameChar_DB_Select)
            },
            _hook_record {
                (LPVOID)0x14039f2a0L,
                (LPVOID *)&CPotionMgrComplete_RenameChar_DB_Update10_user,
                (LPVOID *)&CPotionMgrComplete_RenameChar_DB_Update10_next,
                (LPVOID)cast_pointer_function(CPotionMgrComplete_RenameChar_DB_Update10_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)(char, char*))&CPotionMgr::Complete_RenameChar_DB_Update)
            },
            _hook_record {
                (LPVOID)0x14039c7b0L,
                (LPVOID *)&CPotionMgrDatafileInit12_user,
                (LPVOID *)&CPotionMgrDatafileInit12_next,
                (LPVOID)cast_pointer_function(CPotionMgrDatafileInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionMgr::*)())&CPotionMgr::DatafileInit)
            },
            _hook_record {
                (LPVOID)0x14039edf0L,
                (LPVOID *)&CPotionMgrInsertMovePotionStoneEffect14_user,
                (LPVOID *)&CPotionMgrInsertMovePotionStoneEffect14_next,
                (LPVOID)cast_pointer_function(CPotionMgrInsertMovePotionStoneEffect14_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)(struct CPlayer*))&CPotionMgr::InsertMovePotionStoneEffect)
            },
            _hook_record {
                (LPVOID)0x14039ec60L,
                (LPVOID *)&CPotionMgrInsertPotionContEffect16_user,
                (LPVOID *)&CPotionMgrInsertPotionContEffect16_next,
                (LPVOID)cast_pointer_function(CPotionMgrInsertPotionContEffect16_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, struct _ContPotionData*, struct _skill_fld*, unsigned int))&CPotionMgr::InsertPotionContEffect)
            },
            _hook_record {
                (LPVOID)0x14039f6f0L,
                (LPVOID *)&CPotionMgrInsertRenamePotion18_user,
                (LPVOID *)&CPotionMgrInsertRenamePotion18_next,
                (LPVOID)cast_pointer_function(CPotionMgrInsertRenamePotion18_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionMgr::*)(struct CRFWorldDatabase*, char*))&CPotionMgr::InsertRenamePotion)
            },
            _hook_record {
                (LPVOID)0x14039f9e0L,
                (LPVOID *)&CPotionMgrIsPotionDelayUseIndex20_user,
                (LPVOID *)&CPotionMgrIsPotionDelayUseIndex20_next,
                (LPVOID)cast_pointer_function(CPotionMgrIsPotionDelayUseIndex20_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionMgr::*)(int))&CPotionMgr::IsPotionDelayUseIndex)
            },
            _hook_record {
                (LPVOID)0x14039cdd0L,
                (LPVOID *)&CPotionMgrPreCheckPotion22_user,
                (LPVOID *)&CPotionMgrPreCheckPotion22_next,
                (LPVOID)cast_pointer_function(CPotionMgrPreCheckPotion22_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, struct CCharacter**, struct _PotionItem_fld*, unsigned int, struct _skill_fld*, bool))&CPotionMgr::PreCheckPotion)
            },
            _hook_record {
                (LPVOID)0x14039f780L,
                (LPVOID *)&CPotionMgrPushRenamePotionDBLog24_user,
                (LPVOID *)&CPotionMgrPushRenamePotionDBLog24_next,
                (LPVOID)cast_pointer_function(CPotionMgrPushRenamePotionDBLog24_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)(char*))&CPotionMgr::PushRenamePotionDBLog)
            },
            _hook_record {
                (LPVOID)0x14039ee70L,
                (LPVOID *)&CPotionMgrRemovePotionContEffect26_user,
                (LPVOID *)&CPotionMgrRemovePotionContEffect26_next,
                (LPVOID)cast_pointer_function(CPotionMgrRemovePotionContEffect26_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, struct _ContPotionData*))&CPotionMgr::RemovePotionContEffect)
            },
            _hook_record {
                (LPVOID)0x14039fa20L,
                (LPVOID *)&CPotionMgrSelectDeleteBuf28_user,
                (LPVOID *)&CPotionMgrSelectDeleteBuf28_next,
                (LPVOID)cast_pointer_function(CPotionMgrSelectDeleteBuf28_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, bool, bool))&CPotionMgr::SelectDeleteBuf)
            },
            _hook_record {
                (LPVOID)0x14039c8b0L,
                (LPVOID *)&CPotionMgrSetPotionDataName30_user,
                (LPVOID *)&CPotionMgrSetPotionDataName30_next,
                (LPVOID)cast_pointer_function(CPotionMgrSetPotionDataName30_wrapper),
                (LPVOID)cast_pointer_function((bool(CPotionMgr::*)())&CPotionMgr::SetPotionDataName)
            },
            _hook_record {
                (LPVOID)0x14039f030L,
                (LPVOID *)&CPotionMgrUpdatePotionContEffect32_user,
                (LPVOID *)&CPotionMgrUpdatePotionContEffect32_next,
                (LPVOID)cast_pointer_function(CPotionMgrUpdatePotionContEffect32_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)(struct CPlayer*))&CPotionMgr::UpdatePotionContEffect)
            },
            _hook_record {
                (LPVOID)0x14039ddc0L,
                (LPVOID *)&CPotionMgrUsePotion34_user,
                (LPVOID *)&CPotionMgrUsePotion34_next,
                (LPVOID)cast_pointer_function(CPotionMgrUsePotion34_wrapper),
                (LPVOID)cast_pointer_function((int(CPotionMgr::*)(struct CPlayer*, struct CCharacter*, struct _PotionItem_fld*, unsigned int))&CPotionMgr::UsePotion)
            },
            _hook_record {
                (LPVOID)0x1403a1450L,
                (LPVOID *)&CPotionMgrdtor_CPotionMgr36_user,
                (LPVOID *)&CPotionMgrdtor_CPotionMgr36_next,
                (LPVOID)cast_pointer_function(CPotionMgrdtor_CPotionMgr36_wrapper),
                (LPVOID)cast_pointer_function((void(CPotionMgr::*)())&CPotionMgr::dtor_CPotionMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
