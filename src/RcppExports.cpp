// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cpprvMF
SEXP cpprvMF(const int& size, const arma::vec& theta);
RcppExport SEXP _vMF_cpprvMF(SEXP sizeSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpprvMF(size, theta));
    return rcpp_result_gen;
END_RCPP
}
// cppCpvMF
double cppCpvMF(const int& p, const double& k);
RcppExport SEXP _vMF_cppCpvMF(SEXP pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(cppCpvMF(p, k));
    return rcpp_result_gen;
END_RCPP
}
// cppdvMF
SEXP cppdvMF(arma::mat& z, arma::vec& theta);
RcppExport SEXP _vMF_cppdvMF(SEXP zSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(cppdvMF(z, theta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vMF_cpprvMF", (DL_FUNC) &_vMF_cpprvMF, 2},
    {"_vMF_cppCpvMF", (DL_FUNC) &_vMF_cppCpvMF, 2},
    {"_vMF_cppdvMF", (DL_FUNC) &_vMF_cppdvMF, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_vMF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
