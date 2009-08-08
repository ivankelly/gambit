#ifdef ___LINKER_INFO
; File: "hello.c", produced by Gambit-C v4.5.1
(
405001
" hello"
(" hello")
(
)
(
)
(
" hello"
)
(
)
(
"display"
"newline"
"read-char"
)
 #f
)
#else
#define ___VERSION 405001
#define ___MODULE_NAME " hello"
#define ___LINKER_ID ____20_hello
#define ___MH_PROC ___H__20_hello
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 4
#define ___SUP_COUNT 1
#define ___SUB_COUNT 2
#define ___LBL_COUNT 9
#include "gambit.h"

___NEED_GLO(___G__20_hello)
___NEED_GLO(___G_display)
___NEED_GLO(___G_newline)
___NEED_GLO(___G_read_2d_char)

___BEGIN_GLO
___DEF_GLO(0," hello")
___DEF_GLO(1,"display")
___DEF_GLO(2,"newline")
___DEF_GLO(3,"read-char")
___END_GLO

___DEF_SUB_STR(___X0,11)
               ___STR8(104,101,108,108,111,32,119,111)
               ___STR3(114,108,100)
___DEF_SUB_STR(___X1,27)
               ___STR8(91,112,114,101,115,115,32,97)
               ___STR8(110,121,32,107,101,121,32,116)
               ___STR8(111,32,99,111,110,116,105,110)
               ___STR3(117,101,93)

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_hello)
___DEF_M_HLBL(___L1__20_hello)
___DEF_M_HLBL(___L2__20_hello)
___DEF_M_HLBL(___L3__20_hello)
___DEF_M_HLBL(___L4__20_hello)
___DEF_M_HLBL(___L5__20_hello)
___DEF_M_HLBL(___L6__20_hello)
___DEF_M_HLBL(___L7__20_hello)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_hello
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_hello)
___DEF_P_HLBL(___L1__20_hello)
___DEF_P_HLBL(___L2__20_hello)
___DEF_P_HLBL(___L3__20_hello)
___DEF_P_HLBL(___L4__20_hello)
___DEF_P_HLBL(___L5__20_hello)
___DEF_P_HLBL(___L6__20_hello)
___DEF_P_HLBL(___L7__20_hello)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_hello)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_hello)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_hello)
   ___JUMPGLOSAFE(___SET_NARGS(0),3,___G_read_2d_char)
___DEF_SLBL(2,___L2__20_hello)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_display)
___DEF_SLBL(3,___L3__20_hello)
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(0),2,___G_newline)
___DEF_SLBL(4,___L4__20_hello)
   ___SET_R1(___SUB(1))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_display)
___DEF_SLBL(5,___L5__20_hello)
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(0),2,___G_newline)
___DEF_SLBL(6,___L6__20_hello)
   ___SET_R0(___STK(-3))
   ___POLL(7)
___DEF_SLBL(7,___L7__20_hello)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(0),3,___G_read_2d_char)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_hello," hello",___REF_FAL,8,0)
,___DEF_LBL_PROC(___H__20_hello,0,0)
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_hello,___IFD(___RETI,4,4,0x3f0L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_hello,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
