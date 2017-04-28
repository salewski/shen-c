#include "symbol_pool.h"

KLObject* exit_symbol_object;
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
KLObject* shen_is_numbyte_symbol_object;
KLObject* shen_byte_to_digit_symbol_object;
KLObject* read_file_as_charlist_symbol_object;
KLObject* shen_pvar_symbol_object;
KLObject* shen_is_pvar_symbol_object;

extern KLObject* get_exit_symbol_object (void);
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
extern KLObject* get_shen_is_numbyte_symbol_object (void);
extern KLObject* get_shen_byte_to_digit_symbol_object (void);
extern KLObject* get_read_file_as_charlist_symbol_object (void);
extern KLObject* get_shen_pvar_symbol_object (void);
extern KLObject* get_shen_is_pvar_symbol_object (void);

static inline void register_exit_symbol_object (void)
{
  exit_symbol_object = create_kl_symbol("exit");
  extend_symbol_name_table("exit", get_exit_symbol_object());
}

static inline void register_hash_symbol_object (void)
{
  hash_symbol_object = create_kl_symbol("hash");
  extend_symbol_name_table("hash", get_hash_symbol_object());
}

static inline void register_is_symbol_symbol_object (void)
{
  is_symbol_symbol_object = create_kl_symbol("symbol?");
  extend_symbol_name_table("symbol?", get_is_symbol_symbol_object());
}

static inline void register_is_boolean_symbol_object (void)
{
  is_boolean_symbol_object = create_kl_symbol("boolean?");
  extend_symbol_name_table("boolean?", get_is_boolean_symbol_object());
}

static inline void register_is_integer_symbol_object (void)
{
  is_integer_symbol_object = create_kl_symbol("integer?");
  extend_symbol_name_table("integer?", get_is_integer_symbol_object());
}

static inline void register_is_variable_symbol_object (void)
{
  is_variable_symbol_object = create_kl_symbol("variable?");
  extend_symbol_name_table("variable?", get_is_variable_symbol_object());
}

static inline void register_not_symbol_object (void)
{
  not_symbol_object = create_kl_symbol("not");
  extend_symbol_name_table("not", get_not_symbol_object());
}

static inline void register_value_slash_or_symbol_object (void)
{
  value_slash_or_symbol_object = create_kl_symbol("value/or");
  extend_symbol_name_table("value/or", get_value_slash_or_symbol_object());
}

static inline void register_get_absvector_element_slash_or_symbol_object (void)
{
  get_absvector_element_slash_or_symbol_object = create_kl_symbol("<-address/or");
  extend_symbol_name_table("<-address/or",
                           get_get_absvector_element_slash_or_symbol_object());
}

static inline void register_map_symbol_object (void)
{
  map_symbol_object = create_kl_symbol("map");
  extend_symbol_name_table("map", get_map_symbol_object());
}

static inline void register_reverse_symbol_object (void)
{
  reverse_symbol_object = create_kl_symbol("reverse");
  extend_symbol_name_table("reverse", get_reverse_symbol_object());
}

static inline void register_append_symbol_object (void)
{
  append_symbol_object = create_kl_symbol("append");
  extend_symbol_name_table("append", get_append_symbol_object());
}

static inline void register_is_element_symbol_object (void)
{
  is_element_symbol_object = create_kl_symbol("element?");
  extend_symbol_name_table("element?", get_is_element_symbol_object());
}

static inline void register_shen_is_numbyte_symbol_object (void)
{
  shen_is_numbyte_symbol_object = create_kl_symbol("shen.numbyte?");
  extend_symbol_name_table("shen.numbyte?", get_shen_is_numbyte_symbol_object());
}

static inline void register_shen_byte_to_digit_symbol_object (void)
{
  shen_byte_to_digit_symbol_object = create_kl_symbol("shen.byte->digit");
  extend_symbol_name_table("shen.byte->digit",
                           get_shen_byte_to_digit_symbol_object());
}

static inline void register_read_file_as_charlist_symbol_object (void)
{
  read_file_as_charlist_symbol_object = create_kl_symbol("read-file-as-charlist");
  extend_symbol_name_table("read-file-as-charlist",
                           get_read_file_as_charlist_symbol_object());
}

static inline void register_shen_pvar_symbol_object (void)
{
  shen_pvar_symbol_object = create_kl_symbol("shen.pvar");
  extend_symbol_name_table("shen.pvar", get_shen_pvar_symbol_object());
}

static inline void register_shen_is_pvar_symbol_object (void)
{
  shen_is_pvar_symbol_object = create_kl_symbol("shen.pvar?");
  extend_symbol_name_table("shen.pvar?", get_shen_is_pvar_symbol_object());
}

void register_overwrite_symbol_objects (void)
{
  register_exit_symbol_object();
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
  register_shen_is_numbyte_symbol_object();
  register_read_file_as_charlist_symbol_object();
  register_shen_byte_to_digit_symbol_object();
  register_shen_pvar_symbol_object();
  register_shen_is_pvar_symbol_object();
}
