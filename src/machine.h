#ifndef MACHINE_H
#define MACHINE_H

typedef struct {
  size_t size, align;
} machine_type_spec;

typedef struct {
  const char *machine_name;

  bool pcc_bitfield_type_matters;
  machine_type_spec tptr, tfloat, tdouble, tlong_double, tshort, tint,
    tlong, tlong_long;
  size_t int1_align, int2_align, int4_align, int8_align;
  size_t wchar_t_size, size_t_size;
  bool char_signed, wchar_t_signed;

  const char *gcc_compiler;
} machine_spec;

extern machine_spec *target;

bool select_target(const char *targetname);

#endif