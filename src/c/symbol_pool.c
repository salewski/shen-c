#include "symbol_pool.h"

KLObject* if_symbol_object;
KLObject* and_symbol_object;
KLObject* or_symbol_object;
KLObject* cond_symbol_object;
KLObject* intern_symbol_object;
KLObject* pos_symbol_object;
KLObject* tlstr_symbol_object;
KLObject* cn_symbol_object;
KLObject* str_symbol_object;
KLObject* is_string_symbol_object;
KLObject* n_to_string_symbol_object;
KLObject* string_to_n_symbol_object;
KLObject* set_symbol_object;
KLObject* value_symbol_object;
KLObject* simple_error_symbol_object;
KLObject* trap_error_symbol_object;
KLObject* error_to_string_symbol_object;
KLObject* cons_symbol_object;
KLObject* hd_symbol_object;
KLObject* tl_symbol_object;
KLObject* is_cons_symbol_object;
KLObject* defun_symbol_object;
KLObject* lambda_symbol_object;
KLObject* let_symbol_object;
KLObject* is_equal_symbol_object;
KLObject* eval_kl_symbol_object;
KLObject* freeze_symbol_object;
KLObject* type_symbol_object;
KLObject* absvector_symbol_object;
KLObject* set_absvector_element_symbol_object;
KLObject* get_absvector_element_symbol_object;
KLObject* is_absvector_symbol_object;
KLObject* write_byte_symbol_object;
KLObject* read_byte_symbol_object;
KLObject* open_symbol_object;
KLObject* close_symbol_object;
KLObject* get_time_symbol_object;
KLObject* add_symbol_object;
KLObject* subtract_symbol_object;
KLObject* multiply_symbol_object;
KLObject* divide_symbol_object;
KLObject* is_greater_symbol_object;
KLObject* is_less_symbol_object;
KLObject* is_greater_or_equal_symbol_object;
KLObject* is_less_or_equal_symbol_object;
KLObject* is_number_symbol_object;

KLObject* in_symbol_object;
KLObject* out_symbol_object;

KLObject* unix_symbol_object;
KLObject* run_symbol_object;

KLObject* exit_symbol_object;
KLObject* slash_dot_symbol_object;
KLObject* shen_ebr_symbol_object;
KLObject* hash_symbol_object;
KLObject* is_symbol_symbol_object;
KLObject* is_integer_symbol_object;
KLObject* is_boolean_symbol_object;
KLObject* is_variable_symbol_object;
KLObject* not_symbol_object;
KLObject* value_slash_or_symbol_object;
KLObject* get_absvector_element_slash_or_symbol_object;
KLObject* map_symbol_object;
KLObject* reverse_symbol_object;
KLObject* append_symbol_object;
KLObject* is_element_symbol_object;
KLObject* assoc_symbol_object;
KLObject* occurrences_symbol_object;
KLObject* nth_symbol_object;
KLObject* limit_symbol_object;
KLObject* dict_symbol_object;
KLObject* is_dict_symbol_object;
KLObject* dict_count_symbol_object;
KLObject* get_dict_value_symbol_object;
KLObject* get_dict_value_slash_or_symbol_object;
KLObject* set_dict_value_symbol_object;
KLObject* dict_rm_symbol_object;
KLObject* dict_keys_symbol_object;
KLObject* dict_values_symbol_object;
KLObject* dict_fold_symbol_object;
KLObject* length_symbol_object;
KLObject* shen_fail_exclamation_symbol_object;
KLObject* shen_hdtl_symbol_object;
KLObject* shen_is_numbyte_symbol_object;
KLObject* shen_byte_to_digit_symbol_object;
KLObject* read_file_as_charlist_symbol_object;
KLObject* shen_pvar_symbol_object;
KLObject* shen_is_pvar_symbol_object;
KLObject* shen_earmuff_prologvectors_symbol_object;
KLObject* shen_earmuff_varcounter_symbol_object;
KLObject* shen_valvector_symbol_object;
KLObject* shen_dash_null_symbol_object;
KLObject* shen_lazyderef_symbol_object;
KLObject* shen_deref_symbol_object;
KLObject* shen_is_occurs_symbol_object;
KLObject* shen_bindv_symbol_object;
KLObject* shen_unbindv_symbol_object;
KLObject* bind_symbol_object;
KLObject* shen_lzy_equal_exclamation_symbol_object;
KLObject* shen_mk_pvar_symbol_object;
KLObject* shen_copy_vector_symbol_object;
KLObject* shen_resize_vector_symbol_object;
KLObject* shen_resizeprocessvector_symbol_object;
KLObject* shen_newpv_symbol_object;
KLObject* shen_list_to_str_symbol_object;
KLObject* shen_str_to_str_symbol_object;
KLObject* shen_vector_to_str_symbol_object;
KLObject* shen_atom_to_str_symbol_object;
KLObject* shen_arg_to_str_symbol_object;
KLObject* shen_compose_symbol_object;

KLObject* c_loop_symbol_object;
KLObject* c_recur_symbol_object;
KLObject* c_quote_symbol_object;
KLObject* c_mcons_symbol_object;
KLObject* c_ocons_symbol_object;
KLObject* c_nth_hd_symbol_object;
KLObject* c_nth_tl_symbol_object;
KLObject* c_flush_symbol_object;

extern KLObject* get_if_symbol_object (void);
extern KLObject* get_and_symbol_object (void);
extern KLObject* get_or_symbol_object (void);
extern KLObject* get_cond_symbol_object (void);
extern KLObject* get_intern_symbol_object (void);
extern KLObject* get_pos_symbol_object (void);
extern KLObject* get_tlstr_symbol_object (void);
extern KLObject* get_cn_symbol_object (void);
extern KLObject* get_str_symbol_object (void);
extern KLObject* get_is_string_symbol_object (void);
extern KLObject* get_n_to_string_symbol_object (void);
extern KLObject* get_string_to_n_symbol_object (void);
extern KLObject* get_set_symbol_object (void);
extern KLObject* get_value_symbol_object (void);
extern KLObject* get_simple_error_symbol_object (void);
extern KLObject* get_trap_error_symbol_object (void);
extern KLObject* get_error_to_string_symbol_object (void);
extern KLObject* get_cons_symbol_object (void);
extern KLObject* get_hd_symbol_object (void);
extern KLObject* get_tl_symbol_object (void);
extern KLObject* get_is_cons_symbol_object (void);
extern KLObject* get_defun_symbol_object (void);
extern KLObject* get_lambda_symbol_object (void);
extern KLObject* get_let_symbol_object (void);
extern KLObject* get_is_equal_symbol_object (void);
extern KLObject* get_eval_kl_symbol_object (void);
extern KLObject* get_freeze_symbol_object (void);
extern KLObject* get_type_symbol_object (void);
extern KLObject* get_absvector_symbol_object (void);
extern KLObject* get_set_absvector_element_symbol_object (void);
extern KLObject* get_get_absvector_element_symbol_object (void);
extern KLObject* get_is_absvector_symbol_object (void);
extern KLObject* get_write_byte_symbol_object (void);
extern KLObject* get_read_byte_symbol_object (void);
extern KLObject* get_open_symbol_object (void);
extern KLObject* get_close_symbol_object (void);
extern KLObject* get_get_time_symbol_object (void);
extern KLObject* get_add_symbol_object (void);
extern KLObject* get_subtract_symbol_object (void);
extern KLObject* get_multiply_symbol_object (void);
extern KLObject* get_divide_symbol_object (void);
extern KLObject* get_is_greater_symbol_object (void);
extern KLObject* get_is_less_symbol_object (void);
extern KLObject* get_is_greater_or_equal_symbol_object (void);
extern KLObject* get_is_less_or_equal_symbol_object (void);
extern KLObject* get_is_number_symbol_object (void);

extern KLObject* get_in_symbol_object (void);
extern KLObject* get_out_symbol_object (void);

extern KLObject* get_unix_symbol_object (void);
extern KLObject* get_run_symbol_object (void);

extern KLObject* get_exit_symbol_object (void);
extern KLObject* get_slash_dot_symbol_object (void);
extern KLObject* get_shen_ebr_symbol_object (void);
extern KLObject* get_hash_symbol_object (void);
extern KLObject* get_is_symbol_symbol_object (void);
extern KLObject* get_is_integer_symbol_object (void);
extern KLObject* get_is_boolean_symbol_object (void);
extern KLObject* get_is_variable_symbol_object (void);
extern KLObject* get_not_symbol_object (void);
extern KLObject* get_value_slash_or_symbol_object (void);
extern KLObject* get_get_absvector_element_slash_or_symbol_object (void);
extern KLObject* get_map_symbol_object (void);
extern KLObject* get_reverse_symbol_object (void);
extern KLObject* get_append_symbol_object (void);
extern KLObject* get_is_element_symbol_object (void);
extern KLObject* get_assoc_symbol_object (void);
extern KLObject* get_occurrences_symbol_object (void);
extern KLObject* get_nth_symbol_object (void);
extern KLObject* get_limit_symbol_object (void);
extern KLObject* get_dict_symbol_object (void);
extern KLObject* get_is_dict_symbol_object (void);
extern KLObject* get_dict_count_symbol_object (void);
extern KLObject* get_get_dict_value_symbol_object (void);
extern KLObject* get_get_dict_value_slash_or_symbol_object (void);
extern KLObject* get_set_dict_value_symbol_object (void);
extern KLObject* get_dict_rm_symbol_object (void);
extern KLObject* get_dict_keys_symbol_object (void);
extern KLObject* get_dict_values_symbol_object (void);
extern KLObject* get_dict_fold_symbol_object (void);
extern KLObject* get_length_symbol_object (void);
extern KLObject* get_shen_fail_exclamation_symbol_object (void);
extern KLObject* get_shen_hdtl_symbol_object (void);
extern KLObject* get_shen_is_numbyte_symbol_object (void);
extern KLObject* get_shen_byte_to_digit_symbol_object (void);
extern KLObject* get_read_file_as_charlist_symbol_object (void);
extern KLObject* get_shen_pvar_symbol_object (void);
extern KLObject* get_shen_is_pvar_symbol_object (void);
extern KLObject* get_shen_earmuff_prologvectors_symbol_object (void);
extern KLObject* get_shen_earmuff_varcounter_symbol_object (void);
extern KLObject* get_shen_valvector_symbol_object (void);
extern KLObject* get_shen_dash_null_symbol_object (void);
extern KLObject* get_shen_lazyderef_symbol_object (void);
extern KLObject* get_shen_deref_symbol_object (void);
extern KLObject* get_shen_is_occurs_symbol_object (void);
extern KLObject* get_shen_bindv_symbol_object (void);
extern KLObject* get_shen_unbindv_symbol_object (void);
extern KLObject* get_bind_symbol_object (void);
extern KLObject* get_shen_lzy_equal_exclamation_symbol_object (void);
extern KLObject* get_shen_mk_pvar_symbol_object (void);
extern KLObject* get_shen_copy_vector_symbol_object (void);
extern KLObject* get_shen_resize_vector_symbol_object (void);
extern KLObject* get_shen_resizeprocessvector_symbol_object (void);
extern KLObject* get_shen_newpv_symbol_object (void);
extern KLObject* get_shen_list_to_str_symbol_object (void);
extern KLObject* get_shen_str_to_str_symbol_object (void);
extern KLObject* get_shen_vector_to_str_symbol_object (void);
extern KLObject* get_shen_atom_to_str_symbol_object (void);
extern KLObject* get_shen_arg_to_str_symbol_object (void);
extern KLObject* get_shen_compose_symbol_object (void);

extern KLObject* get_c_loop_symbol_object (void);
extern KLObject* get_c_recur_symbol_object (void);
extern KLObject* get_c_quote_symbol_object (void);
extern KLObject* get_c_mcons_symbol_object (void);
extern KLObject* get_c_ocons_symbol_object (void);
extern KLObject* get_c_nth_hd_symbol_object (void);
extern KLObject* get_c_nth_tl_symbol_object (void);
extern KLObject* get_c_flush_symbol_object (void);

static inline void register_if_symbol_object (void)
{
  if_symbol_object = create_kl_symbol("if");
  extend_symbol_name_table("if", if_symbol_object);
}

static inline void register_and_symbol_object (void)
{
  and_symbol_object = create_kl_symbol("and");
  extend_symbol_name_table("and", and_symbol_object);
}

static inline void register_or_symbol_object (void)
{
  or_symbol_object = create_kl_symbol("or");
  extend_symbol_name_table("or", or_symbol_object);
}

static inline void register_cond_symbol_object (void)
{
  cond_symbol_object = create_kl_symbol("cond");
  extend_symbol_name_table("cond", cond_symbol_object);
}

static inline void register_intern_symbol_object (void)
{
  intern_symbol_object = create_kl_symbol("intern");
  extend_symbol_name_table("intern", intern_symbol_object);
}

static inline void register_pos_symbol_object (void)
{
  pos_symbol_object = create_kl_symbol("pos");
  extend_symbol_name_table("pos", pos_symbol_object);
}

static inline void register_tlstr_symbol_object (void)
{
  tlstr_symbol_object = create_kl_symbol("tlstr");
  extend_symbol_name_table("tlstr", tlstr_symbol_object);
}

static inline void register_cn_symbol_object (void)
{
  cn_symbol_object = create_kl_symbol("cn");
  extend_symbol_name_table("cn", cn_symbol_object);
}

static inline void register_str_symbol_object (void)
{
  str_symbol_object = create_kl_symbol("str");
  extend_symbol_name_table("str", str_symbol_object);
}

static inline void register_is_string_symbol_object (void)
{
  is_string_symbol_object = create_kl_symbol("string?");
  extend_symbol_name_table("string?", is_string_symbol_object);
}

static inline void register_n_to_string_symbol_object (void)
{
  n_to_string_symbol_object = create_kl_symbol("n->string");
  extend_symbol_name_table("n->string", n_to_string_symbol_object);
}

static inline void register_string_to_n_symbol_object (void)
{
  string_to_n_symbol_object = create_kl_symbol("string->n");
  extend_symbol_name_table("string->n", string_to_n_symbol_object);
}

static inline void register_set_symbol_object (void)
{
  set_symbol_object = create_kl_symbol("set");
  extend_symbol_name_table("set", set_symbol_object);
}

static inline void register_value_symbol_object (void)
{
  value_symbol_object = create_kl_symbol("value");
  extend_symbol_name_table("value", value_symbol_object);
}

static inline void register_simple_error_symbol_object (void)
{
  simple_error_symbol_object = create_kl_symbol("simple-error");
  extend_symbol_name_table("simple-error", simple_error_symbol_object);
}

static inline void register_trap_error_symbol_object (void)
{
  trap_error_symbol_object = create_kl_symbol("trap-error");
  extend_symbol_name_table("trap-error", trap_error_symbol_object);
}

static inline void register_error_to_string_symbol_object (void)
{
  error_to_string_symbol_object = create_kl_symbol("error-to-string");
  extend_symbol_name_table("error-to-string", error_to_string_symbol_object);
}

static inline void register_cons_symbol_object (void)
{
  cons_symbol_object = create_kl_symbol("cons");
  extend_symbol_name_table("cons", cons_symbol_object);
}

static inline void register_hd_symbol_object (void)
{
  hd_symbol_object = create_kl_symbol("hd");
  extend_symbol_name_table("hd", hd_symbol_object);
}

static inline void register_tl_symbol_object (void)
{
  tl_symbol_object = create_kl_symbol("tl");
  extend_symbol_name_table("tl", tl_symbol_object);
}

static inline void register_is_cons_symbol_object (void)
{
  is_cons_symbol_object = create_kl_symbol("cons?");
  extend_symbol_name_table("cons?", is_cons_symbol_object);
}

static inline void register_defun_symbol_object (void)
{
  defun_symbol_object = create_kl_symbol("defun");
  extend_symbol_name_table("defun", defun_symbol_object);
}

static inline void register_lambda_symbol_object (void)
{
  lambda_symbol_object = create_kl_symbol("lambda");
  extend_symbol_name_table("lambda", lambda_symbol_object);
}

static inline void register_let_symbol_object (void)
{
  let_symbol_object = create_kl_symbol("let");
  extend_symbol_name_table("let", let_symbol_object);
}

static inline void register_is_equal_symbol_object (void)
{
  is_equal_symbol_object = create_kl_symbol("=");
  extend_symbol_name_table("=", is_equal_symbol_object);
}

static inline void register_eval_kl_symbol_object (void)
{
  eval_kl_symbol_object = create_kl_symbol("eval-kl");
  extend_symbol_name_table("eval-kl", eval_kl_symbol_object);
}

static inline void register_freeze_symbol_object (void)
{
  freeze_symbol_object = create_kl_symbol("freeze");
  extend_symbol_name_table("freeze", freeze_symbol_object);
}

static inline void register_type_symbol_object (void)
{
  type_symbol_object = create_kl_symbol("type");
  extend_symbol_name_table("type", type_symbol_object);
}

static inline void register_absvector_symbol_object (void)
{
  absvector_symbol_object = create_kl_symbol("absvector");
  extend_symbol_name_table("absvector", absvector_symbol_object);
}

static inline void register_set_absvector_element_symbol_object (void)
{
  set_absvector_element_symbol_object = create_kl_symbol("address->");
  extend_symbol_name_table("address->", set_absvector_element_symbol_object);
}

static inline void register_get_absvector_element_symbol_object (void)
{
  get_absvector_element_symbol_object = create_kl_symbol("<-address");
  extend_symbol_name_table("<-address", get_absvector_element_symbol_object);
}

static inline void register_is_absvector_symbol_object (void)
{
  is_absvector_symbol_object = create_kl_symbol("absvector?");
  extend_symbol_name_table("absvector?", is_absvector_symbol_object);
}

static inline void register_write_byte_symbol_object (void)
{
  write_byte_symbol_object = create_kl_symbol("write-byte");
  extend_symbol_name_table("write-byte", write_byte_symbol_object);
}

static inline void register_read_byte_symbol_object (void)
{
  read_byte_symbol_object = create_kl_symbol("read-byte");
  extend_symbol_name_table("read-byte", read_byte_symbol_object);
}

static inline void register_open_symbol_object (void)
{
  open_symbol_object = create_kl_symbol("open");
  extend_symbol_name_table("open", open_symbol_object);
}

static inline void register_close_symbol_object (void)
{
  close_symbol_object = create_kl_symbol("close");
  extend_symbol_name_table("close", close_symbol_object);
}

static inline void register_get_time_symbol_object (void)
{
  get_time_symbol_object = create_kl_symbol("get-time");
  extend_symbol_name_table("get-time", get_time_symbol_object);
}

static inline void register_add_symbol_object (void)
{
  add_symbol_object = create_kl_symbol("+");
  extend_symbol_name_table("+", add_symbol_object);
}

static inline void register_subtract_symbol_object (void)
{
  subtract_symbol_object = create_kl_symbol("-");
  extend_symbol_name_table("-", subtract_symbol_object);
}

static inline void register_multiply_symbol_object (void)
{
  multiply_symbol_object = create_kl_symbol("*");
  extend_symbol_name_table("*", multiply_symbol_object);
}

static inline void register_divide_symbol_object (void)
{
  divide_symbol_object = create_kl_symbol("/");
  extend_symbol_name_table("/", divide_symbol_object);
}

static inline void register_is_greater_symbol_object (void)
{
  is_greater_symbol_object = create_kl_symbol(">");
  extend_symbol_name_table(">", is_greater_symbol_object);
}

static inline void register_is_less_symbol_object (void)
{
  is_less_symbol_object = create_kl_symbol("<");
  extend_symbol_name_table("<", is_less_symbol_object);
}

static inline void register_is_greater_or_equal_symbol_object (void)
{
  is_greater_or_equal_symbol_object = create_kl_symbol(">=");
  extend_symbol_name_table(">=", is_greater_or_equal_symbol_object);
}

static inline void register_is_less_or_equal_symbol_object (void)
{
  is_less_or_equal_symbol_object = create_kl_symbol("<=");
  extend_symbol_name_table("<=", is_less_or_equal_symbol_object);
}

static inline void register_is_number_symbol_object (void)
{
  is_number_symbol_object = create_kl_symbol("number?");
  extend_symbol_name_table("number?", is_number_symbol_object);
}

static inline void register_primitive_symbol_objects (void)
{
  register_if_symbol_object();
  register_and_symbol_object();
  register_or_symbol_object();
  register_cond_symbol_object();
  register_intern_symbol_object();
  register_pos_symbol_object();
  register_tlstr_symbol_object();
  register_cn_symbol_object();
  register_str_symbol_object();
  register_is_string_symbol_object();
  register_n_to_string_symbol_object();
  register_string_to_n_symbol_object();
  register_set_symbol_object();
  register_value_symbol_object();
  register_simple_error_symbol_object();
  register_trap_error_symbol_object();
  register_error_to_string_symbol_object();
  register_cons_symbol_object();
  register_hd_symbol_object();
  register_tl_symbol_object();
  register_is_cons_symbol_object();
  register_defun_symbol_object();
  register_lambda_symbol_object();
  register_let_symbol_object();
  register_is_equal_symbol_object();
  register_eval_kl_symbol_object();
  register_freeze_symbol_object();
  register_type_symbol_object();
  register_absvector_symbol_object();
  register_set_absvector_element_symbol_object();
  register_get_absvector_element_symbol_object();
  register_is_absvector_symbol_object();
  register_write_byte_symbol_object();
  register_read_byte_symbol_object();
  register_open_symbol_object();
  register_close_symbol_object();
  register_get_time_symbol_object();
  register_add_symbol_object();
  register_subtract_symbol_object();
  register_multiply_symbol_object();
  register_divide_symbol_object();
  register_is_greater_symbol_object();
  register_is_less_symbol_object();
  register_is_greater_or_equal_symbol_object();
  register_is_less_or_equal_symbol_object();
  register_is_number_symbol_object();
}

static inline void register_in_symbol_object (void)
{
  in_symbol_object = create_kl_symbol("in");
  extend_symbol_name_table("in", in_symbol_object);
}

static inline void register_out_symbol_object (void)
{
  out_symbol_object = create_kl_symbol("out");
  extend_symbol_name_table("out", get_out_symbol_object());
}

static inline void register_stream_symbol_objects (void)
{
  register_in_symbol_object();
  register_out_symbol_object();
}

static inline void register_unix_symbol_object (void)
{
  unix_symbol_object = create_kl_symbol("unix");
  extend_symbol_name_table("unix", unix_symbol_object);
}

static inline void register_run_symbol_object (void)
{
  run_symbol_object = create_kl_symbol("run");
  extend_symbol_name_table("run", run_symbol_object);
}

static inline void register_system_symbol_objects (void)
{
  register_unix_symbol_object();
  register_run_symbol_object();
}

static inline void register_exit_symbol_object (void)
{
  exit_symbol_object = create_kl_symbol("exit");
  extend_symbol_name_table("exit", exit_symbol_object);
}

static inline void register_slash_dot_symbol_object (void)
{
  slash_dot_symbol_object = create_kl_symbol("/.");
  extend_symbol_name_table("/.", slash_dot_symbol_object);
}

static inline void register_shen_ebr_symbol_object (void)
{
  shen_ebr_symbol_object = create_kl_symbol("shen.ebr");
  extend_symbol_name_table("shen.ebr", shen_ebr_symbol_object);
}

static inline void register_hash_symbol_object (void)
{
  hash_symbol_object = create_kl_symbol("hash");
  extend_symbol_name_table("hash", hash_symbol_object);
}

static inline void register_is_symbol_symbol_object (void)
{
  is_symbol_symbol_object = create_kl_symbol("symbol?");
  extend_symbol_name_table("symbol?", is_symbol_symbol_object);
}

static inline void register_is_boolean_symbol_object (void)
{
  is_boolean_symbol_object = create_kl_symbol("boolean?");
  extend_symbol_name_table("boolean?", is_boolean_symbol_object);
}

static inline void register_is_integer_symbol_object (void)
{
  is_integer_symbol_object = create_kl_symbol("integer?");
  extend_symbol_name_table("integer?", is_integer_symbol_object);
}

static inline void register_is_variable_symbol_object (void)
{
  is_variable_symbol_object = create_kl_symbol("variable?");
  extend_symbol_name_table("variable?", is_variable_symbol_object);
}

static inline void register_not_symbol_object (void)
{
  not_symbol_object = create_kl_symbol("not");
  extend_symbol_name_table("not", not_symbol_object);
}

static inline void register_value_slash_or_symbol_object (void)
{
  value_slash_or_symbol_object = create_kl_symbol("value/or");
  extend_symbol_name_table("value/or", value_slash_or_symbol_object);
}

static inline void register_get_absvector_element_slash_or_symbol_object (void)
{
  get_absvector_element_slash_or_symbol_object = create_kl_symbol("<-address/or");
  extend_symbol_name_table("<-address/or",
                           get_absvector_element_slash_or_symbol_object);
}

static inline void register_map_symbol_object (void)
{
  map_symbol_object = create_kl_symbol("map");
  extend_symbol_name_table("map", map_symbol_object);
}

static inline void register_reverse_symbol_object (void)
{
  reverse_symbol_object = create_kl_symbol("reverse");
  extend_symbol_name_table("reverse", reverse_symbol_object);
}

static inline void register_append_symbol_object (void)
{
  append_symbol_object = create_kl_symbol("append");
  extend_symbol_name_table("append", append_symbol_object);
}

static inline void register_is_element_symbol_object (void)
{
  is_element_symbol_object = create_kl_symbol("element?");
  extend_symbol_name_table("element?", is_element_symbol_object);
}

static inline void register_assoc_symbol_object (void)
{
  assoc_symbol_object = create_kl_symbol("assoc");
  extend_symbol_name_table("assoc", assoc_symbol_object);
}

static inline void register_occurrences_symbol_object (void)
{
  occurrences_symbol_object = create_kl_symbol("occurrences");
  extend_symbol_name_table("occurrences", occurrences_symbol_object);
}

static inline void register_nth_symbol_object (void)
{
  nth_symbol_object = create_kl_symbol("nth");
  extend_symbol_name_table("nth", nth_symbol_object);
}

static inline void register_limit_symbol_object (void)
{
  limit_symbol_object = create_kl_symbol("limit");
  extend_symbol_name_table("limit", limit_symbol_object);
}

static inline void register_dict_symbol_object (void)
{
  dict_symbol_object = create_kl_symbol("dict");
  extend_symbol_name_table("dict", dict_symbol_object);
}

static inline void register_is_dict_symbol_object (void)
{
  is_dict_symbol_object = create_kl_symbol("dict?");
  extend_symbol_name_table("dict?", is_dict_symbol_object);
}

static inline void register_dict_count_symbol_object (void)
{
  dict_count_symbol_object = create_kl_symbol("dict-count");
  extend_symbol_name_table("dict-count", dict_count_symbol_object);
}

static inline void register_get_dict_value_symbol_object (void)
{
  get_dict_value_symbol_object = create_kl_symbol("<-dict");
  extend_symbol_name_table("<-dict", get_dict_value_symbol_object);
}

static inline void register_get_dict_value_slash_or_symbol_object (void)
{
  get_dict_value_slash_or_symbol_object = create_kl_symbol("<-dict/or");
  extend_symbol_name_table("<-dict/or", get_dict_value_slash_or_symbol_object);
}

static inline void register_set_dict_value_symbol_object (void)
{
  set_dict_value_symbol_object = create_kl_symbol("dict->");
  extend_symbol_name_table("dict->", set_dict_value_symbol_object);
}

static inline void register_dict_rm_symbol_object (void)
{
  dict_rm_symbol_object = create_kl_symbol("dict-rm");
  extend_symbol_name_table("dict-rm", dict_rm_symbol_object);
}

static inline void register_dict_keys_symbol_object (void)
{
  dict_keys_symbol_object = create_kl_symbol("dict-keys");
  extend_symbol_name_table("dict-keys", dict_keys_symbol_object);
}

static inline void register_dict_values_symbol_object (void)
{
  dict_values_symbol_object = create_kl_symbol("dict-values");
  extend_symbol_name_table("dict-values", dict_values_symbol_object);
}

static inline void register_dict_fold_symbol_object (void)
{
  dict_fold_symbol_object = create_kl_symbol("dict-fold");
  extend_symbol_name_table("dict-fold", dict_fold_symbol_object);
}

static inline void register_length_symbol_object (void)
{
  length_symbol_object = create_kl_symbol("length");
  extend_symbol_name_table("length", length_symbol_object);
}

static inline void register_shen_fail_exclamation_symbol_object (void)
{
  shen_fail_exclamation_symbol_object = create_kl_symbol("shen.fail!");
  extend_symbol_name_table("shen.fail!", shen_fail_exclamation_symbol_object);
}

static inline void register_shen_hdtl_symbol_object (void)
{
  shen_hdtl_symbol_object = create_kl_symbol("shen.hdtl");
  extend_symbol_name_table("shen.hdtl", shen_hdtl_symbol_object);
}

static inline void register_shen_is_numbyte_symbol_object (void)
{
  shen_is_numbyte_symbol_object = create_kl_symbol("shen.numbyte?");
  extend_symbol_name_table("shen.numbyte?", shen_is_numbyte_symbol_object);
}

static inline void register_shen_byte_to_digit_symbol_object (void)
{
  shen_byte_to_digit_symbol_object = create_kl_symbol("shen.byte->digit");
  extend_symbol_name_table("shen.byte->digit", shen_byte_to_digit_symbol_object);
}

static inline void register_read_file_as_charlist_symbol_object (void)
{
  read_file_as_charlist_symbol_object = create_kl_symbol("read-file-as-charlist");
  extend_symbol_name_table("read-file-as-charlist",
                           read_file_as_charlist_symbol_object);
}

static inline void register_shen_pvar_symbol_object (void)
{
  shen_pvar_symbol_object = create_kl_symbol("shen.pvar");
  extend_symbol_name_table("shen.pvar", shen_pvar_symbol_object);
}

static inline void register_shen_is_pvar_symbol_object (void)
{
  shen_is_pvar_symbol_object = create_kl_symbol("shen.pvar?");
  extend_symbol_name_table("shen.pvar?", shen_is_pvar_symbol_object);
}

static inline void register_shen_earmuff_prologvectors_symbol_object (void)
{
  shen_earmuff_prologvectors_symbol_object =
    create_kl_symbol("shen.*prologvectors*");
  extend_symbol_name_table("shen.*prologvectors*",
                           shen_earmuff_prologvectors_symbol_object);
}

static inline void register_shen_earmuff_varcounter_symbol_object (void)
{
  shen_earmuff_varcounter_symbol_object = create_kl_symbol("shen.*varcounter*");
  extend_symbol_name_table("shen.*varcounter*",
                           shen_earmuff_varcounter_symbol_object);
}

static inline void register_shen_valvector_symbol_object (void)
{
  shen_valvector_symbol_object = create_kl_symbol("shen.valvector");
  extend_symbol_name_table("shen.valvector", shen_valvector_symbol_object);
}

static inline void register_shen_dash_null_symbol_object (void)
{
  shen_dash_null_symbol_object = create_kl_symbol("shen.-null-");
  extend_symbol_name_table("shen.-null-", shen_dash_null_symbol_object);
}

static inline void register_shen_lazyderef_symbol_object (void)
{
  shen_lazyderef_symbol_object = create_kl_symbol("shen.lazyderef");
  extend_symbol_name_table("shen.lazyderef", shen_lazyderef_symbol_object);
}

static inline void register_shen_deref_symbol_object (void)
{
  shen_deref_symbol_object = create_kl_symbol("shen.deref");
  extend_symbol_name_table("shen.deref", shen_deref_symbol_object);
}

static inline void register_shen_is_occurs_symbol_object (void)
{
  shen_is_occurs_symbol_object = create_kl_symbol("shen.occurs?");
  extend_symbol_name_table("shen.occurs?", shen_is_occurs_symbol_object);
}

static inline void register_shen_bindv_symbol_object (void)
{
  shen_bindv_symbol_object = create_kl_symbol("shen.bindv");
  extend_symbol_name_table("shen.bindv", shen_bindv_symbol_object);
}

static inline void register_shen_unbindv_symbol_object (void)
{
  shen_unbindv_symbol_object = create_kl_symbol("shen.unbindv");
  extend_symbol_name_table("shen.unbindv", shen_unbindv_symbol_object);
}

static inline void register_bind_symbol_object (void)
{
  bind_symbol_object = create_kl_symbol("bind");
  extend_symbol_name_table("bind", bind_symbol_object);
}

static inline void register_shen_lzy_equal_exclamation_symbol_object (void)
{
  shen_lzy_equal_exclamation_symbol_object = create_kl_symbol("shen.lzy=!");
  extend_symbol_name_table("shen.lzy=!", shen_lzy_equal_exclamation_symbol_object);
}

static inline void register_shen_mk_pvar_symbol_object (void)
{
  shen_mk_pvar_symbol_object = create_kl_symbol("shen.mk-pvar");
  extend_symbol_name_table("shen.mk-pvar", shen_mk_pvar_symbol_object);
}

static inline void register_shen_copy_vector_symbol_object (void)
{
  shen_copy_vector_symbol_object = create_kl_symbol("shen.copy-vector");
  extend_symbol_name_table("shen.copy-vector", shen_copy_vector_symbol_object);
}

static inline void register_shen_resize_vector_symbol_object (void)
{
  shen_resize_vector_symbol_object = create_kl_symbol("shen.resize-vector");
  extend_symbol_name_table("shen.resize-vector", shen_resize_vector_symbol_object);
}

static inline void register_shen_resizeprocessvector_symbol_object (void)
{
  shen_resizeprocessvector_symbol_object =
    create_kl_symbol("shen.resizeprocessvector");
  extend_symbol_name_table("shen.resizeprocessvector",
                           shen_resizeprocessvector_symbol_object);
}

static inline void register_shen_newpv_symbol_object (void)
{
  shen_newpv_symbol_object = create_kl_symbol("shen.newpv");
  extend_symbol_name_table("shen.newpv", shen_newpv_symbol_object);
}

static inline void register_shen_list_to_str_symbol_object (void)
{
  shen_list_to_str_symbol_object = create_kl_symbol("shen.list->str");
  extend_symbol_name_table("shen.list->str", shen_list_to_str_symbol_object);
}

static inline void register_shen_str_to_str_symbol_object (void)
{
  shen_str_to_str_symbol_object = create_kl_symbol("shen.str->str");
  extend_symbol_name_table("shen.str->str", shen_str_to_str_symbol_object);
}

static inline void register_shen_vector_to_str_symbol_object (void)
{
  shen_vector_to_str_symbol_object = create_kl_symbol("shen.vector->str");
  extend_symbol_name_table("shen.vector->str", shen_vector_to_str_symbol_object);
}

static inline void register_shen_atom_to_str_symbol_object (void)
{
  shen_atom_to_str_symbol_object = create_kl_symbol("shen.atom->str");
  extend_symbol_name_table("shen.atom->str", shen_atom_to_str_symbol_object);
}

static inline void register_shen_arg_to_str_symbol_object (void)
{
  shen_arg_to_str_symbol_object = create_kl_symbol("shen.arg->str");
  extend_symbol_name_table("shen.arg->str", shen_arg_to_str_symbol_object);
}

static inline void register_shen_compose_symbol_object (void)
{
  shen_compose_symbol_object = create_kl_symbol("shen.compose");
  extend_symbol_name_table("shen.compose", shen_compose_symbol_object);
}

static inline void register_overwrite_symbol_objects (void)
{
  register_exit_symbol_object();
  register_slash_dot_symbol_object();
  register_shen_ebr_symbol_object();
  register_hash_symbol_object();
  register_is_symbol_symbol_object();
  register_is_boolean_symbol_object();
  register_is_integer_symbol_object();
  register_is_variable_symbol_object();
  register_not_symbol_object();
  register_value_slash_or_symbol_object();
  register_get_absvector_element_slash_or_symbol_object();
  register_map_symbol_object();
  register_reverse_symbol_object();
  register_append_symbol_object();
  register_is_element_symbol_object();
  register_assoc_symbol_object();
  register_occurrences_symbol_object();
  register_nth_symbol_object();
  register_limit_symbol_object();
  register_dict_symbol_object();
  register_is_dict_symbol_object();
  register_dict_count_symbol_object();
  register_get_dict_value_symbol_object();
  register_get_dict_value_slash_or_symbol_object();
  register_set_dict_value_symbol_object();
  register_dict_rm_symbol_object();
  register_dict_keys_symbol_object();
  register_dict_values_symbol_object();
  register_dict_fold_symbol_object();
  register_length_symbol_object();
  register_shen_fail_exclamation_symbol_object();
  register_shen_hdtl_symbol_object();
  register_shen_is_numbyte_symbol_object();
  register_read_file_as_charlist_symbol_object();
  register_shen_byte_to_digit_symbol_object();
  register_shen_pvar_symbol_object();
  register_shen_is_pvar_symbol_object();
  register_shen_earmuff_prologvectors_symbol_object();
  register_shen_earmuff_varcounter_symbol_object();
  register_shen_valvector_symbol_object();
  register_shen_dash_null_symbol_object();
  register_shen_lazyderef_symbol_object();
  register_shen_deref_symbol_object();
  register_shen_is_occurs_symbol_object();
  register_shen_bindv_symbol_object();
  register_shen_unbindv_symbol_object();
  register_bind_symbol_object();
  register_shen_lzy_equal_exclamation_symbol_object();
  register_shen_mk_pvar_symbol_object();
  register_shen_copy_vector_symbol_object();
  register_shen_resize_vector_symbol_object();
  register_shen_resizeprocessvector_symbol_object();
  register_shen_newpv_symbol_object();
  register_shen_list_to_str_symbol_object();
  register_shen_str_to_str_symbol_object();
  register_shen_vector_to_str_symbol_object();
  register_shen_atom_to_str_symbol_object();
  register_shen_arg_to_str_symbol_object();
  register_shen_compose_symbol_object();
}

static inline void register_c_loop_symbol_object (void)
{
  c_loop_symbol_object = create_kl_symbol("c.loop");
  extend_symbol_name_table("c.loop", c_loop_symbol_object);
}

static inline void register_c_recur_symbol_object (void)
{
  c_recur_symbol_object = create_kl_symbol("c.recur");
  extend_symbol_name_table("c_recur", c_recur_symbol_object);
}

static inline void register_c_quote_symbol_object (void)
{
  c_quote_symbol_object = create_kl_symbol("c.quote");
  extend_symbol_name_table("c.quote", c_quote_symbol_object);
}

static inline void register_c_mcons_symbol_object (void)
{
  c_mcons_symbol_object = create_kl_symbol("c.mcons");
  extend_symbol_name_table("c.mcons", c_mcons_symbol_object);
}

static inline void register_c_ocons_symbol_object (void)
{
  c_ocons_symbol_object = create_kl_symbol("c.ocons");
  extend_symbol_name_table("c.ocons", c_ocons_symbol_object);
}

static inline void register_c_nth_hd_symbol_object (void)
{
  c_nth_hd_symbol_object = create_kl_symbol("c.nth-hd");
  extend_symbol_name_table("c.nth-hd", c_nth_hd_symbol_object);
}

static inline void register_c_nth_tl_symbol_object (void)
{
  c_nth_tl_symbol_object = create_kl_symbol("c.nth-tl");
  extend_symbol_name_table("c.nth-tl", c_nth_tl_symbol_object);
}

static inline void register_c_flush_symbol_object (void)
{
  c_flush_symbol_object = create_kl_symbol("c.flush");
  extend_symbol_name_table("c.flush", c_flush_symbol_object);
}

static inline void register_extension_symbol_objects (void)
{
  register_c_loop_symbol_object();
  register_c_recur_symbol_object();
  register_c_quote_symbol_object();
  register_c_mcons_symbol_object();
  register_c_ocons_symbol_object();
  register_c_nth_hd_symbol_object();
  register_c_nth_tl_symbol_object();
  register_c_flush_symbol_object();
}

void register_symbol_objects (void)
{
  register_primitive_symbol_objects();
  register_stream_symbol_objects();
  register_system_symbol_objects();
  register_overwrite_symbol_objects();
  register_extension_symbol_objects();
}
