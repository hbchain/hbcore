#pragma once
#include <graphene/chain/evaluator.hpp>
#include <graphene/chain/coldhot_withdraw.hpp>
#include <graphene/chain/account_object.hpp>
#include <graphene/crosschain/crosschain.hpp>

namespace graphene {
	namespace chain {
		class coldhot_transfer_evaluate : public evaluator<coldhot_transfer_evaluate> {
		public:
			typedef coldhot_transfer_operation operation_type;

			void_result do_evaluate(const coldhot_transfer_operation& o);
			void_result do_apply(const coldhot_transfer_operation& o);

			virtual void pay_fee() override;
		};
		class coldhot_transfer_without_sign_evaluate : public evaluator<coldhot_transfer_without_sign_evaluate> {
		public:
			typedef coldhot_transfer_without_sign_operation operation_type;
			void_result do_evaluate(const coldhot_transfer_without_sign_operation& o);
			void_result do_apply(const coldhot_transfer_without_sign_operation& o);

			virtual void pay_fee() override;
		};
		class coldhot_transfer_with_sign_evaluate : public evaluator<coldhot_transfer_with_sign_evaluate> {
		public:
			typedef coldhot_transfer_with_sign_operation operation_type;
			void_result do_evaluate(const coldhot_transfer_with_sign_operation& o);
			void_result do_apply(const coldhot_transfer_with_sign_operation& o);

			virtual void pay_fee() override;
		};
		class coldhot_transfer_combine_sign_evaluate : public evaluator<coldhot_transfer_combine_sign_evaluate> {
		public:
			typedef coldhot_transfer_combine_sign_operation operation_type;
			void_result do_evaluate(const coldhot_transfer_combine_sign_operation& o);
			void_result do_apply(const coldhot_transfer_combine_sign_operation& o);

			virtual void pay_fee() override;
		};
		class coldhot_transfer_result_evaluate : public evaluator<coldhot_transfer_result_evaluate> {
		public:
			typedef coldhot_transfer_result_operation operation_type;
			void_result do_evaluate(const coldhot_transfer_result_operation& o);
			void_result do_apply(const coldhot_transfer_result_operation& o);
			virtual void pay_fee() override;
		};
		class coldhot_cancel_transafer_transaction_evaluate :public evaluator<coldhot_cancel_transafer_transaction_evaluate> {
		public:
			typedef coldhot_cancel_transafer_transaction_operation operation_type;
			void_result do_evaluate(const coldhot_cancel_transafer_transaction_operation& o);
			void_result do_apply(const coldhot_cancel_transafer_transaction_operation& o);

			virtual void pay_fee() override;
		};
		class coldhot_cancel_uncombined_trx_evaluate :public evaluator<coldhot_cancel_uncombined_trx_evaluate> {
		public:
			typedef coldhot_cancel_uncombined_trx_operaion operation_type;
			void_result do_evaluate(const coldhot_cancel_uncombined_trx_operaion& o);
			void_result do_apply(const coldhot_cancel_uncombined_trx_operaion& o);

			virtual void pay_fee() override;
		};
		class coldhot_cancel_combined_trx_evaluate :public evaluator<coldhot_cancel_combined_trx_evaluate> {
		public:
			typedef coldhot_cancel_combined_trx_operaion operation_type;
			void_result do_evaluate(const coldhot_cancel_combined_trx_operaion& o);
			void_result do_apply(const coldhot_cancel_combined_trx_operaion& o);

			virtual void pay_fee() override;
		};
		class coldhot_pass_combine_trx_evaluate :public evaluator<coldhot_pass_combine_trx_evaluate> {
		public:
			typedef coldhot_pass_combine_trx_operation operation_type;
			void_result do_evaluate(const coldhot_pass_combine_trx_operation& o);
			void_result do_apply(const coldhot_pass_combine_trx_operation& o);

			virtual void pay_fee() override;
		};
		class eth_cancel_coldhot_fail_trx_evaluate :public evaluator<eth_cancel_coldhot_fail_trx_evaluate> {
		public:
			typedef eth_cancel_coldhot_fail_trx_operaion operation_type;
			void_result do_evaluate(const eth_cancel_coldhot_fail_trx_operaion& o);
			void_result do_apply(const eth_cancel_coldhot_fail_trx_operaion& o);

			virtual void pay_fee() override;
		};
	}
}
