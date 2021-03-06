#include <common/ATFCore.hpp>
#include <qry_case_cash_limsaleDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::qry_case_cash_limsalector_qry_case_cash_limsale2_ptr qry_case_cash_limsalector_qry_case_cash_limsale2_next(nullptr);
        Info::qry_case_cash_limsalector_qry_case_cash_limsale2_clbk qry_case_cash_limsalector_qry_case_cash_limsale2_user(nullptr);
        
        Info::qry_case_cash_limsalesize4_ptr qry_case_cash_limsalesize4_next(nullptr);
        Info::qry_case_cash_limsalesize4_clbk qry_case_cash_limsalesize4_user(nullptr);
        
        
        void qry_case_cash_limsalector_qry_case_cash_limsale2_wrapper(struct qry_case_cash_limsale* _this)
        {
           qry_case_cash_limsalector_qry_case_cash_limsale2_user(_this, qry_case_cash_limsalector_qry_case_cash_limsale2_next);
        };
        int qry_case_cash_limsalesize4_wrapper(struct qry_case_cash_limsale* _this)
        {
           return qry_case_cash_limsalesize4_user(_this, qry_case_cash_limsalesize4_next);
        };
        
        ::std::array<hook_record, 2> qry_case_cash_limsale_functions = 
        {
            _hook_record {
                (LPVOID)0x140304c30L,
                (LPVOID *)&qry_case_cash_limsalector_qry_case_cash_limsale2_user,
                (LPVOID *)&qry_case_cash_limsalector_qry_case_cash_limsale2_next,
                (LPVOID)cast_pointer_function(qry_case_cash_limsalector_qry_case_cash_limsale2_wrapper),
                (LPVOID)cast_pointer_function((void(qry_case_cash_limsale::*)())&qry_case_cash_limsale::ctor_qry_case_cash_limsale)
            },
            _hook_record {
                (LPVOID)0x140304c20L,
                (LPVOID *)&qry_case_cash_limsalesize4_user,
                (LPVOID *)&qry_case_cash_limsalesize4_next,
                (LPVOID)cast_pointer_function(qry_case_cash_limsalesize4_wrapper),
                (LPVOID)cast_pointer_function((int(qry_case_cash_limsale::*)())&qry_case_cash_limsale::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
