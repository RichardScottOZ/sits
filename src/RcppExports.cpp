// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// apply_transition_matrix
NumericMatrix apply_transition_matrix(NumericMatrix data_before, NumericMatrix data, NumericMatrix transition_matrix);
RcppExport SEXP _sits_apply_transition_matrix(SEXP data_beforeSEXP, SEXP dataSEXP, SEXP transition_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data_before(data_beforeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type transition_matrix(transition_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(apply_transition_matrix(data_before, data, transition_matrix));
    return rcpp_result_gen;
END_RCPP
}
// build_neigh
NumericVector build_neigh(const NumericMatrix& data, const NumericMatrix& window, const int& i, const int& j);
RcppExport SEXP _sits_build_neigh(SEXP dataSEXP, SEXP windowSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const int& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int& >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(build_neigh(data, window, i, j));
    return rcpp_result_gen;
END_RCPP
}
// bayes_estimator
NumericVector bayes_estimator(const NumericMatrix& data, const NumericMatrix& window, const double& smoothness, const double& max_prob);
RcppExport SEXP _sits_bayes_estimator(SEXP dataSEXP, SEXP windowSEXP, SEXP smoothnessSEXP, SEXP max_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const double& >::type smoothness(smoothnessSEXP);
    Rcpp::traits::input_parameter< const double& >::type max_prob(max_probSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_estimator(data, window, smoothness, max_prob));
    return rcpp_result_gen;
END_RCPP
}
// median_neigh
IntegerMatrix median_neigh(const IntegerMatrix& data, const int& nrows_window, const int& ncols_window);
RcppExport SEXP _sits_median_neigh(SEXP dataSEXP, SEXP nrows_windowSEXP, SEXP ncols_windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const int& >::type nrows_window(nrows_windowSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncols_window(ncols_windowSEXP);
    rcpp_result_gen = Rcpp::wrap(median_neigh(data, nrows_window, ncols_window));
    return rcpp_result_gen;
END_RCPP
}
// cbers4_cld_detect
IntegerMatrix cbers4_cld_detect(const IntegerMatrix& b13, const IntegerMatrix& b14, const IntegerMatrix& b15, const IntegerMatrix& b16, const double& thres_1, const double& t2, const double& t3, const double& t4, const int& t5, const int& t6, const IntegerVector& values);
RcppExport SEXP _sits_cbers4_cld_detect(SEXP b13SEXP, SEXP b14SEXP, SEXP b15SEXP, SEXP b16SEXP, SEXP thres_1SEXP, SEXP t2SEXP, SEXP t3SEXP, SEXP t4SEXP, SEXP t5SEXP, SEXP t6SEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b13(b13SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b14(b14SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b15(b15SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b16(b16SEXP);
    Rcpp::traits::input_parameter< const double& >::type thres_1(thres_1SEXP);
    Rcpp::traits::input_parameter< const double& >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< const double& >::type t3(t3SEXP);
    Rcpp::traits::input_parameter< const double& >::type t4(t4SEXP);
    Rcpp::traits::input_parameter< const int& >::type t5(t5SEXP);
    Rcpp::traits::input_parameter< const int& >::type t6(t6SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(cbers4_cld_detect(b13, b14, b15, b16, thres_1, t2, t3, t4, t5, t6, values));
    return rcpp_result_gen;
END_RCPP
}
// cbers4_cld_values
IntegerVector cbers4_cld_values(const IntegerMatrix& b13, const IntegerMatrix& b14, const IntegerMatrix& b15, const IntegerMatrix& b16);
RcppExport SEXP _sits_cbers4_cld_values(SEXP b13SEXP, SEXP b14SEXP, SEXP b15SEXP, SEXP b16SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b13(b13SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b14(b14SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b15(b15SEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type b16(b16SEXP);
    rcpp_result_gen = Rcpp::wrap(cbers4_cld_values(b13, b14, b15, b16));
    return rcpp_result_gen;
END_RCPP
}
// kernel_estimator
NumericVector kernel_estimator(const NumericMatrix& data, const NumericMatrix& kernel);
RcppExport SEXP _sits_kernel_estimator(SEXP dataSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_estimator(data, kernel));
    return rcpp_result_gen;
END_RCPP
}
// kernel_estimator_non_linear
NumericVector kernel_estimator_non_linear(const NumericMatrix& data, const NumericMatrix& kernel, const double& tau);
RcppExport SEXP _sits_kernel_estimator_non_linear(SEXP dataSEXP, SEXP kernelSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_estimator_non_linear(data, kernel, tau));
    return rcpp_result_gen;
END_RCPP
}
// linear_interp
IntegerMatrix linear_interp(IntegerMatrix& mtx);
RcppExport SEXP _sits_linear_interp(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(linear_interp(mtx));
    return rcpp_result_gen;
END_RCPP
}
// linear_interp_vec
IntegerVector linear_interp_vec(IntegerVector& vec);
RcppExport SEXP _sits_linear_interp_vec(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(linear_interp_vec(vec));
    return rcpp_result_gen;
END_RCPP
}
// normalize_data
NumericMatrix normalize_data(const NumericMatrix& data, const double& min, const double& max);
RcppExport SEXP _sits_normalize_data(SEXP dataSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type min(minSEXP);
    Rcpp::traits::input_parameter< const double& >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_data(data, min, max));
    return rcpp_result_gen;
END_RCPP
}
// scale_data
NumericMatrix scale_data(NumericMatrix data, const double& scale_factor, const double& adj_val);
RcppExport SEXP _sits_scale_data(SEXP dataSEXP, SEXP scale_factorSEXP, SEXP adj_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< const double& >::type adj_val(adj_valSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_data(data, scale_factor, adj_val));
    return rcpp_result_gen;
END_RCPP
}
// scale_matrix_integer
IntegerMatrix scale_matrix_integer(NumericMatrix& data, const double& scale_factor);
RcppExport SEXP _sits_scale_matrix_integer(SEXP dataSEXP, SEXP scale_factorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type scale_factor(scale_factorSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_matrix_integer(data, scale_factor));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sits_apply_transition_matrix", (DL_FUNC) &_sits_apply_transition_matrix, 3},
    {"_sits_build_neigh", (DL_FUNC) &_sits_build_neigh, 4},
    {"_sits_bayes_estimator", (DL_FUNC) &_sits_bayes_estimator, 4},
    {"_sits_median_neigh", (DL_FUNC) &_sits_median_neigh, 3},
    {"_sits_cbers4_cld_detect", (DL_FUNC) &_sits_cbers4_cld_detect, 11},
    {"_sits_cbers4_cld_values", (DL_FUNC) &_sits_cbers4_cld_values, 4},
    {"_sits_kernel_estimator", (DL_FUNC) &_sits_kernel_estimator, 2},
    {"_sits_kernel_estimator_non_linear", (DL_FUNC) &_sits_kernel_estimator_non_linear, 3},
    {"_sits_linear_interp", (DL_FUNC) &_sits_linear_interp, 1},
    {"_sits_linear_interp_vec", (DL_FUNC) &_sits_linear_interp_vec, 1},
    {"_sits_normalize_data", (DL_FUNC) &_sits_normalize_data, 3},
    {"_sits_scale_data", (DL_FUNC) &_sits_scale_data, 3},
    {"_sits_scale_matrix_integer", (DL_FUNC) &_sits_scale_matrix_integer, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_sits(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
