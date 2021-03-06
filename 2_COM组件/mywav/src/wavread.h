/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 18:30:53 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mywav/src" "-B" "csglcom:mywav,mywav,1.0" "-B" "sgl" "-m"
 * "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W"
 * "mainhg" "libmwsglm.mlib" "-t" "-W" "comhg:mywav,mywav,1.0" "-T" "link:lib"
 * "-h" "libmmfile.mlib" "-i" "-i" "C:/MATLAB6p5/work/fzone.m"
 * "C:/MATLAB6p5/work/myprowav.m" "C:/MATLAB6p5/work/tzone.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __wavread_h
#define __wavread_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_wavread(void);
extern void TerminateModule_wavread(void);
extern _mexLocalFunctionTable _local_function_table_wavread;

extern mxArray * mlfWavread(mxArray * * Fs,
                            mxArray * * bits,
                            mxArray * * opt_ck,
                            mxArray * file,
                            mxArray * ext);
extern void mlxWavread(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
