#ifndef OLD_SOLUTION_H
#define OLD_SOLUTION_H

#include "solution_types.h"
#include "parameters_type.h"

#ifdef __cplusplus
extern "C"
{
#endif

void initialize_solution(solution_t * solution_aux, const int *nbj);
solution_t * allocate_solution(const int *nsol, const int *nbj);
void desallocate_solution(solution_t *sol, const int *nsol);
void copy_solution_objectivies(solution_t *dest, const solution_t *source);
double get_specific_objective(const solution_t *sol, const int *obj);
double get_oposite_specific_objective(const solution_t *sol, const int *obj);
double get_displayed_value_of_objective(const solution_t *sol, 
	const int *index, const int *obj, 
	const type_fitness_energies_t *fitness_energies);
int get_solution_index_by_objective_value(const solution_t *sol, const int *size,
            const int *obj_get_index, const double *value);

#ifdef __cplusplus
}
#endif

#endif