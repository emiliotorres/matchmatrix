#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP betweenrangeoo(void *, void *, void *);
extern SEXP cbind_matrix(void *, void *, void *, void *, void *, void *);
extern SEXP convert_vector_Rrows_to_Crows(void *, void *);
extern SEXP get_first_element_of_list_of_integers(void *);
extern SEXP get_list_of_rows_with_same_values_in_this_matrix(void *, void *, void *);
extern SEXP get_number_of_processors_available(void);
extern SEXP get_rescale_matrix(void *, void *, void *);
extern SEXP get_segments_of_points_matrix(void *, void *);
extern SEXP match_matrix(void *, void *, void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"betweenrangeoo",                                   (DL_FUNC) &betweenrangeoo,                                   3},
    {"cbind_matrix",                                     (DL_FUNC) &cbind_matrix,                                     6},
    {"convert_vector_Rrows_to_Crows",                    (DL_FUNC) &convert_vector_Rrows_to_Crows,                    2},
    {"get_first_element_of_list_of_integers",            (DL_FUNC) &get_first_element_of_list_of_integers,            1},
    {"get_list_of_rows_with_same_values_in_this_matrix", (DL_FUNC) &get_list_of_rows_with_same_values_in_this_matrix, 3},
    {"get_number_of_processors_available",               (DL_FUNC) &get_number_of_processors_available,               0},
    {"get_rescale_matrix",                               (DL_FUNC) &get_rescale_matrix,                               3},
    {"get_segments_of_points_matrix",                    (DL_FUNC) &get_segments_of_points_matrix,                    2},
    {"match_matrix",                                     (DL_FUNC) &match_matrix,                                     7},
    {NULL, NULL, 0}
};

void R_init_matchmatrix(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
