#ifndef OLD_LOAD_PARAMETERS_H
#define OLD_LOAD_PARAMETERS_H

#include "parameters_type.h"

#ifdef __cplusplus
extern "C"
{
#endif

void load_parameters_from_file(input_parameters_t *in_param,
		const char *conf_file_name);
void deAllocateload_parameters(input_parameters_t *param);

#ifdef __cplusplus
}
#endif

#endif
