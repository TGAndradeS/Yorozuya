#include <CMgrGuildHistoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMgrGuildHistoryctor_CMgrGuildHistory2_ptr CMgrGuildHistoryctor_CMgrGuildHistory2_next(nullptr);
        Info::CMgrGuildHistoryctor_CMgrGuildHistory2_clbk CMgrGuildHistoryctor_CMgrGuildHistory2_user(nullptr);
        
        Info::CMgrGuildHistoryGetNewFileName4_ptr CMgrGuildHistoryGetNewFileName4_next(nullptr);
        Info::CMgrGuildHistoryGetNewFileName4_clbk CMgrGuildHistoryGetNewFileName4_user(nullptr);
        
        Info::CMgrGuildHistoryGetTotalWaitSize6_ptr CMgrGuildHistoryGetTotalWaitSize6_next(nullptr);
        Info::CMgrGuildHistoryGetTotalWaitSize6_clbk CMgrGuildHistoryGetTotalWaitSize6_user(nullptr);
        
        Info::CMgrGuildHistoryIOThread8_ptr CMgrGuildHistoryIOThread8_next(nullptr);
        Info::CMgrGuildHistoryIOThread8_clbk CMgrGuildHistoryIOThread8_user(nullptr);
        
        Info::CMgrGuildHistoryOnLoop10_ptr CMgrGuildHistoryOnLoop10_next(nullptr);
        Info::CMgrGuildHistoryOnLoop10_clbk CMgrGuildHistoryOnLoop10_user(nullptr);
        
        Info::CMgrGuildHistoryWriteFile12_ptr CMgrGuildHistoryWriteFile12_next(nullptr);
        Info::CMgrGuildHistoryWriteFile12_clbk CMgrGuildHistoryWriteFile12_user(nullptr);
        
        Info::CMgrGuildHistorychange_atrade_taxrate14_ptr CMgrGuildHistorychange_atrade_taxrate14_next(nullptr);
        Info::CMgrGuildHistorychange_atrade_taxrate14_clbk CMgrGuildHistorychange_atrade_taxrate14_user(nullptr);
        
        Info::CMgrGuildHistoryjoin_member16_ptr CMgrGuildHistoryjoin_member16_next(nullptr);
        Info::CMgrGuildHistoryjoin_member16_clbk CMgrGuildHistoryjoin_member16_user(nullptr);
        
        Info::CMgrGuildHistoryleave_member18_ptr CMgrGuildHistoryleave_member18_next(nullptr);
        Info::CMgrGuildHistoryleave_member18_clbk CMgrGuildHistoryleave_member18_user(nullptr);
        
        Info::CMgrGuildHistoryload_guild20_ptr CMgrGuildHistoryload_guild20_next(nullptr);
        Info::CMgrGuildHistoryload_guild20_clbk CMgrGuildHistoryload_guild20_user(nullptr);
        
        Info::CMgrGuildHistorypop_money22_ptr CMgrGuildHistorypop_money22_next(nullptr);
        Info::CMgrGuildHistorypop_money22_clbk CMgrGuildHistorypop_money22_user(nullptr);
        
        Info::CMgrGuildHistorypush_money24_ptr CMgrGuildHistorypush_money24_next(nullptr);
        Info::CMgrGuildHistorypush_money24_clbk CMgrGuildHistorypush_money24_user(nullptr);
        
        Info::CMgrGuildHistorystart_guild26_ptr CMgrGuildHistorystart_guild26_next(nullptr);
        Info::CMgrGuildHistorystart_guild26_clbk CMgrGuildHistorystart_guild26_user(nullptr);
        
        Info::CMgrGuildHistorysuggest_cancel28_ptr CMgrGuildHistorysuggest_cancel28_next(nullptr);
        Info::CMgrGuildHistorysuggest_cancel28_clbk CMgrGuildHistorysuggest_cancel28_user(nullptr);
        
        Info::CMgrGuildHistorysuggest_complete30_ptr CMgrGuildHistorysuggest_complete30_next(nullptr);
        Info::CMgrGuildHistorysuggest_complete30_clbk CMgrGuildHistorysuggest_complete30_user(nullptr);
        
        Info::CMgrGuildHistorysuggest_vote32_ptr CMgrGuildHistorysuggest_vote32_next(nullptr);
        Info::CMgrGuildHistorysuggest_vote32_clbk CMgrGuildHistorysuggest_vote32_user(nullptr);
        
        
        Info::CMgrGuildHistorydtor_CMgrGuildHistory34_ptr CMgrGuildHistorydtor_CMgrGuildHistory34_next(nullptr);
        Info::CMgrGuildHistorydtor_CMgrGuildHistory34_clbk CMgrGuildHistorydtor_CMgrGuildHistory34_user(nullptr);
        
        
        void CMgrGuildHistoryctor_CMgrGuildHistory2_wrapper(struct CMgrGuildHistory* _this)
        {
           CMgrGuildHistoryctor_CMgrGuildHistory2_user(_this, CMgrGuildHistoryctor_CMgrGuildHistory2_next);
        };
        void CMgrGuildHistoryGetNewFileName4_wrapper(struct CMgrGuildHistory* _this, unsigned int dwGuildSerial, char* pszFileName)
        {
           CMgrGuildHistoryGetNewFileName4_user(_this, dwGuildSerial, pszFileName, CMgrGuildHistoryGetNewFileName4_next);
        };
        int CMgrGuildHistoryGetTotalWaitSize6_wrapper(struct CMgrGuildHistory* _this)
        {
           return CMgrGuildHistoryGetTotalWaitSize6_user(_this, CMgrGuildHistoryGetTotalWaitSize6_next);
        };
        void CMgrGuildHistoryIOThread8_wrapper(void* pv)
        {
           CMgrGuildHistoryIOThread8_user(pv, CMgrGuildHistoryIOThread8_next);
        };
        void CMgrGuildHistoryOnLoop10_wrapper(struct CMgrGuildHistory* _this)
        {
           CMgrGuildHistoryOnLoop10_user(_this, CMgrGuildHistoryOnLoop10_next);
        };
        void CMgrGuildHistoryWriteFile12_wrapper(struct CMgrGuildHistory* _this, char* pszFileName, char* pszLog)
        {
           CMgrGuildHistoryWriteFile12_user(_this, pszFileName, pszLog, CMgrGuildHistoryWriteFile12_next);
        };
        void CMgrGuildHistorychange_atrade_taxrate14_wrapper(struct CMgrGuildHistory* _this, char* pszSugerName, unsigned int dwSugerSerial, char byCurTax, char byNextTax, char* pszFileName)
        {
           CMgrGuildHistorychange_atrade_taxrate14_user(_this, pszSugerName, dwSugerSerial, byCurTax, byNextTax, pszFileName, CMgrGuildHistorychange_atrade_taxrate14_next);
        };
        void CMgrGuildHistoryjoin_member16_wrapper(struct CMgrGuildHistory* _this, char* pszJoinerName, unsigned int dwJoinerSerial, char* pszOKerName, unsigned int dwOKSerial, int nMemNum, char* pszFileName)
        {
           CMgrGuildHistoryjoin_member16_user(_this, pszJoinerName, dwJoinerSerial, pszOKerName, dwOKSerial, nMemNum, pszFileName, CMgrGuildHistoryjoin_member16_next);
        };
        void CMgrGuildHistoryleave_member18_wrapper(struct CMgrGuildHistory* _this, char* pszLeaverName, unsigned int dwLeaverSerial, bool bSelf, int nMemNum, char* pszFileName, bool bPunish)
        {
           CMgrGuildHistoryleave_member18_user(_this, pszLeaverName, dwLeaverSerial, bSelf, nMemNum, pszFileName, bPunish, CMgrGuildHistoryleave_member18_next);
        };
        void CMgrGuildHistoryload_guild20_wrapper(struct CMgrGuildHistory* _this, struct CGuild* pGuild, char* pszFileName)
        {
           CMgrGuildHistoryload_guild20_user(_this, pGuild, pszFileName, CMgrGuildHistoryload_guild20_next);
        };
        void CMgrGuildHistorypop_money22_wrapper(struct CMgrGuildHistory* _this, char* pszIOerName, unsigned int dwIOerSerial, int nPopDalant, int nPopGold, long double dTotalDalant, long double dTotalGold, char* pszFileName)
        {
           CMgrGuildHistorypop_money22_user(_this, pszIOerName, dwIOerSerial, nPopDalant, nPopGold, dTotalDalant, dTotalGold, pszFileName, CMgrGuildHistorypop_money22_next);
        };
        void CMgrGuildHistorypush_money24_wrapper(struct CMgrGuildHistory* _this, char* pszIOerName, unsigned int dwIOerSerial, int nPushDalant, int nPushGold, long double dTotalDalant, long double dTotalGold, char* pszFileName)
        {
           CMgrGuildHistorypush_money24_user(_this, pszIOerName, dwIOerSerial, nPushDalant, nPushGold, dTotalDalant, dTotalGold, pszFileName, CMgrGuildHistorypush_money24_next);
        };
        void CMgrGuildHistorystart_guild26_wrapper(struct CMgrGuildHistory* _this, struct CGuild* pGuild, char* pszFileName)
        {
           CMgrGuildHistorystart_guild26_user(_this, pGuild, pszFileName, CMgrGuildHistorystart_guild26_next);
        };
        void CMgrGuildHistorysuggest_cancel28_wrapper(struct CMgrGuildHistory* _this, char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, char* pszFileName)
        {
           CMgrGuildHistorysuggest_cancel28_user(_this, pszSugerName, dwSugerSerial, pMatter, pszFileName, CMgrGuildHistorysuggest_cancel28_next);
        };
        void CMgrGuildHistorysuggest_complete30_wrapper(struct CMgrGuildHistory* _this, char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, bool bPass, char* pszFileName)
        {
           CMgrGuildHistorysuggest_complete30_user(_this, pszSugerName, dwSugerSerial, pMatter, bPass, pszFileName, CMgrGuildHistorysuggest_complete30_next);
        };
        void CMgrGuildHistorysuggest_vote32_wrapper(struct CMgrGuildHistory* _this, char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, char* pszFileName)
        {
           CMgrGuildHistorysuggest_vote32_user(_this, pszSugerName, dwSugerSerial, pMatter, pszFileName, CMgrGuildHistorysuggest_vote32_next);
        };
        
        void CMgrGuildHistorydtor_CMgrGuildHistory34_wrapper(struct CMgrGuildHistory* _this)
        {
           CMgrGuildHistorydtor_CMgrGuildHistory34_user(_this, CMgrGuildHistorydtor_CMgrGuildHistory34_next);
        };
        
        ::std::array<hook_record, 17> CMgrGuildHistory_functions = 
        {
            _hook_record {
                (LPVOID)0x140248460L,
                (LPVOID *)&CMgrGuildHistoryctor_CMgrGuildHistory2_user,
                (LPVOID *)&CMgrGuildHistoryctor_CMgrGuildHistory2_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryctor_CMgrGuildHistory2_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)())&CMgrGuildHistory::ctor_CMgrGuildHistory)
            },
            _hook_record {
                (LPVOID)0x1402488a0L,
                (LPVOID *)&CMgrGuildHistoryGetNewFileName4_user,
                (LPVOID *)&CMgrGuildHistoryGetNewFileName4_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryGetNewFileName4_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(unsigned int, char*))&CMgrGuildHistory::GetNewFileName)
            },
            _hook_record {
                (LPVOID)0x140249a70L,
                (LPVOID *)&CMgrGuildHistoryGetTotalWaitSize6_user,
                (LPVOID *)&CMgrGuildHistoryGetTotalWaitSize6_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryGetTotalWaitSize6_wrapper),
                (LPVOID)cast_pointer_function((int(CMgrGuildHistory::*)())&CMgrGuildHistory::GetTotalWaitSize)
            },
            _hook_record {
                (LPVOID)0x140249890L,
                (LPVOID *)&CMgrGuildHistoryIOThread8_user,
                (LPVOID *)&CMgrGuildHistoryIOThread8_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryIOThread8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CMgrGuildHistory::IOThread)
            },
            _hook_record {
                (LPVOID)0x140248900L,
                (LPVOID *)&CMgrGuildHistoryOnLoop10_user,
                (LPVOID *)&CMgrGuildHistoryOnLoop10_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryOnLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)())&CMgrGuildHistory::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140249760L,
                (LPVOID *)&CMgrGuildHistoryWriteFile12_user,
                (LPVOID *)&CMgrGuildHistoryWriteFile12_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryWriteFile12_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, char*))&CMgrGuildHistory::WriteFile)
            },
            _hook_record {
                (LPVOID)0x1402496b0L,
                (LPVOID *)&CMgrGuildHistorychange_atrade_taxrate14_user,
                (LPVOID *)&CMgrGuildHistorychange_atrade_taxrate14_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorychange_atrade_taxrate14_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, char, char, char*))&CMgrGuildHistory::change_atrade_taxrate)
            },
            _hook_record {
                (LPVOID)0x140248e30L,
                (LPVOID *)&CMgrGuildHistoryjoin_member16_user,
                (LPVOID *)&CMgrGuildHistoryjoin_member16_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryjoin_member16_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, char*, unsigned int, int, char*))&CMgrGuildHistory::join_member)
            },
            _hook_record {
                (LPVOID)0x140248ee0L,
                (LPVOID *)&CMgrGuildHistoryleave_member18_user,
                (LPVOID *)&CMgrGuildHistoryleave_member18_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryleave_member18_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, bool, int, char*, bool))&CMgrGuildHistory::leave_member)
            },
            _hook_record {
                (LPVOID)0x1402489f0L,
                (LPVOID *)&CMgrGuildHistoryload_guild20_user,
                (LPVOID *)&CMgrGuildHistoryload_guild20_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistoryload_guild20_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(struct CGuild*, char*))&CMgrGuildHistory::load_guild)
            },
            _hook_record {
                (LPVOID)0x1402495e0L,
                (LPVOID *)&CMgrGuildHistorypop_money22_user,
                (LPVOID *)&CMgrGuildHistorypop_money22_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorypop_money22_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, int, int, long double, long double, char*))&CMgrGuildHistory::pop_money)
            },
            _hook_record {
                (LPVOID)0x140249510L,
                (LPVOID *)&CMgrGuildHistorypush_money24_user,
                (LPVOID *)&CMgrGuildHistorypush_money24_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorypush_money24_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, int, int, long double, long double, char*))&CMgrGuildHistory::push_money)
            },
            _hook_record {
                (LPVOID)0x140248c10L,
                (LPVOID *)&CMgrGuildHistorystart_guild26_user,
                (LPVOID *)&CMgrGuildHistorystart_guild26_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorystart_guild26_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(struct CGuild*, char*))&CMgrGuildHistory::start_guild)
            },
            _hook_record {
                (LPVOID)0x140249480L,
                (LPVOID *)&CMgrGuildHistorysuggest_cancel28_user,
                (LPVOID *)&CMgrGuildHistorysuggest_cancel28_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorysuggest_cancel28_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, struct _suggested_matter*, char*))&CMgrGuildHistory::suggest_cancel)
            },
            _hook_record {
                (LPVOID)0x140249380L,
                (LPVOID *)&CMgrGuildHistorysuggest_complete30_user,
                (LPVOID *)&CMgrGuildHistorysuggest_complete30_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorysuggest_complete30_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, struct _suggested_matter*, bool, char*))&CMgrGuildHistory::suggest_complete)
            },
            _hook_record {
                (LPVOID)0x140249000L,
                (LPVOID *)&CMgrGuildHistorysuggest_vote32_user,
                (LPVOID *)&CMgrGuildHistorysuggest_vote32_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorysuggest_vote32_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)(char*, unsigned int, struct _suggested_matter*, char*))&CMgrGuildHistory::suggest_vote)
            },
            _hook_record {
                (LPVOID)0x1402487c0L,
                (LPVOID *)&CMgrGuildHistorydtor_CMgrGuildHistory34_user,
                (LPVOID *)&CMgrGuildHistorydtor_CMgrGuildHistory34_next,
                (LPVOID)cast_pointer_function(CMgrGuildHistorydtor_CMgrGuildHistory34_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrGuildHistory::*)())&CMgrGuildHistory::dtor_CMgrGuildHistory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
