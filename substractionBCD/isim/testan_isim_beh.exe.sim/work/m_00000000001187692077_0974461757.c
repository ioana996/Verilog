/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/student/subs/subs.v";
static int ng1[] = {3, 0};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static int ng4[] = {4, 0};
static int ng5[] = {11, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {15, 0};
static int ng9[] = {12, 0};
static int ng10[] = {999, 0};
static int ng11[] = {1, 0};
static int ng12[] = {10, 0};
static unsigned int ng13[] = {9U, 0U};
static int ng14[] = {9, 0};
static int ng15[] = {6, 0};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t37[8];
    char t47[8];
    char t50[8];
    char t51[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t0 + 1196);
    t9 = (t0 + 1196);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    t4 = (t0 + 1196);
    t5 = (t4 + 44U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    t4 = (t0 + 1196);
    t5 = (t4 + 44U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng5)));
    t11 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1196);
    t4 = (t0 + 1196);
    t5 = (t4 + 44U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t2, 32, t4, 16);
    t3 = ((char*)((ng11)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t3, 32);
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 16);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 16, t5, 32);
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 16);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t4, 16, t5, 32);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 16);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t9 = (t0 + 1288);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 16, t5, 32);
    t9 = (t0 + 1472);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 16);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t4, 16, t5, 32);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 16);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t9 = (t0 + 1288);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t9 = (t0 + 1288);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1288);
    t4 = (t0 + 1288);
    t5 = (t4 + 44U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng8)));
    t11 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 0);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 0);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 65535U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 65535U);
    t10 = (t0 + 1196);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (t31 >> 0);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t14);
    t34 = (t33 >> 0);
    *((unsigned int *)t13) = t34;
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 15U);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 15U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t6, 16, t7, 16);
    t17 = (t0 + 1288);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t37, 0, 8);
    t39 = (t37 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 15U);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 16, t8, 16, t37, 16);
    t48 = (t0 + 1564);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 16);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 0);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 0);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng14)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB23;

LAB22:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t6) > *((unsigned int *)t10))
        goto LAB24;

LAB25:    t14 = (t7 + 4);
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 4);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 4);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 4095U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 4095U);
    t10 = (t0 + 1196);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (t31 >> 4);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t14);
    t34 = (t33 >> 4);
    *((unsigned int *)t13) = t34;
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 15U);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 15U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 12, t6, 12, t7, 12);
    t17 = (t0 + 1288);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t37, 0, 8);
    t39 = (t37 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 4);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 4);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 15U);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 12, t8, 12, t37, 12);
    t48 = (t0 + 1564);
    t49 = (t0 + 1564);
    t53 = (t49 + 44U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng8)));
    t56 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t50, t51, t52, ((int*)(t54)), 2, t55, 32, 1, t56, 32, 1);
    t57 = (t50 + 4);
    t58 = *((unsigned int *)t57);
    t16 = (!(t58));
    t59 = (t51 + 4);
    t60 = *((unsigned int *)t59);
    t19 = (!(t60));
    t20 = (t16 && t19);
    t61 = (t52 + 4);
    t62 = *((unsigned int *)t61);
    t23 = (!(t62));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 4);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 4);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng14)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB34;

LAB33:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t6) > *((unsigned int *)t10))
        goto LAB35;

LAB36:    t14 = (t7 + 4);
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 255U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 255U);
    t10 = (t0 + 1196);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (t31 >> 8);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t14);
    t34 = (t33 >> 8);
    *((unsigned int *)t13) = t34;
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 15U);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 15U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t6, 8, t7, 8);
    t17 = (t0 + 1288);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t37, 0, 8);
    t39 = (t37 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 8);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 8);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 15U);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 8, t8, 8, t37, 8);
    t48 = (t0 + 1564);
    t49 = (t0 + 1564);
    t53 = (t49 + 44U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng8)));
    t56 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t50, t51, t52, ((int*)(t54)), 2, t55, 32, 1, t56, 32, 1);
    t57 = (t50 + 4);
    t58 = *((unsigned int *)t57);
    t16 = (!(t58));
    t59 = (t51 + 4);
    t60 = *((unsigned int *)t59);
    t19 = (!(t60));
    t20 = (t16 && t19);
    t61 = (t52 + 4);
    t62 = *((unsigned int *)t61);
    t23 = (!(t62));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng14)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB47;

LAB46:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t6) > *((unsigned int *)t10))
        goto LAB48;

LAB49:    t14 = (t7 + 4);
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 12);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 12);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = (t0 + 1196);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t13 = (t7 + 4);
    t14 = (t12 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (t31 >> 12);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t14);
    t34 = (t33 >> 12);
    *((unsigned int *)t13) = t34;
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 15U);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 15U);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t6, 16, t7, 16);
    t17 = (t0 + 1288);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t37, 0, 8);
    t39 = (t37 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 12);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 12);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 15U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 15U);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 16, t8, 16, t37, 16);
    t48 = (t0 + 1564);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 16);
    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB8:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t7), t30);
    goto LAB9;

LAB10:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t7), t30);
    goto LAB11;

LAB12:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB13;

LAB14:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB15;

LAB16:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB17;

LAB18:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB19;

LAB20:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB21;

LAB23:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(55, ng0);

LAB30:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 1564);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t40 = (t38 + 4);
    t36 = *((unsigned int *)t38);
    t41 = (t36 >> 0);
    *((unsigned int *)t8) = t41;
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 0);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t44 & 65535U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 65535U);
    t48 = ((char*)((ng15)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t8, 32, t48, 32);
    t49 = (t0 + 1564);
    xsi_vlogvar_assign_value(t49, t37, 0, 0, 16);
    goto LAB29;

LAB31:    t63 = *((unsigned int *)t52);
    t26 = (t63 + 0);
    t64 = *((unsigned int *)t50);
    t65 = *((unsigned int *)t51);
    t29 = (t64 - t65);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t48, t47, t26, *((unsigned int *)t51), t30);
    goto LAB32;

LAB34:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(62, ng0);

LAB41:    xsi_set_current_line(63, ng0);
    t17 = (t0 + 1564);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t40 = (t38 + 4);
    t36 = *((unsigned int *)t38);
    t41 = (t36 >> 4);
    *((unsigned int *)t8) = t41;
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 4);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t44 & 4095U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4095U);
    t48 = ((char*)((ng15)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t8, 32, t48, 32);
    t49 = (t0 + 1564);
    t53 = (t0 + 1564);
    t54 = (t53 + 44U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng8)));
    t57 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t47, t50, t51, ((int*)(t55)), 2, t56, 32, 1, t57, 32, 1);
    t59 = (t47 + 4);
    t46 = *((unsigned int *)t59);
    t16 = (!(t46));
    t61 = (t50 + 4);
    t58 = *((unsigned int *)t61);
    t19 = (!(t58));
    t20 = (t16 && t19);
    t66 = (t51 + 4);
    t60 = *((unsigned int *)t66);
    t23 = (!(t60));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB42;

LAB43:    goto LAB40;

LAB42:    t62 = *((unsigned int *)t51);
    t26 = (t62 + 0);
    t63 = *((unsigned int *)t47);
    t64 = *((unsigned int *)t50);
    t29 = (t63 - t64);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t49, t37, t26, *((unsigned int *)t50), t30);
    goto LAB43;

LAB44:    t63 = *((unsigned int *)t52);
    t26 = (t63 + 0);
    t64 = *((unsigned int *)t50);
    t65 = *((unsigned int *)t51);
    t29 = (t64 - t65);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t48, t47, t26, *((unsigned int *)t51), t30);
    goto LAB45;

LAB47:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(69, ng0);

LAB54:    xsi_set_current_line(70, ng0);
    t17 = (t0 + 1564);
    t21 = (t17 + 36U);
    t38 = *((char **)t21);
    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t40 = (t38 + 4);
    t36 = *((unsigned int *)t38);
    t41 = (t36 >> 8);
    *((unsigned int *)t8) = t41;
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 8);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t44 & 255U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 255U);
    t48 = ((char*)((ng15)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t8, 32, t48, 32);
    t49 = (t0 + 1564);
    t53 = (t0 + 1564);
    t54 = (t53 + 44U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng8)));
    t57 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t47, t50, t51, ((int*)(t55)), 2, t56, 32, 1, t57, 32, 1);
    t59 = (t47 + 4);
    t46 = *((unsigned int *)t59);
    t16 = (!(t46));
    t61 = (t50 + 4);
    t58 = *((unsigned int *)t61);
    t19 = (!(t58));
    t20 = (t16 && t19);
    t66 = (t51 + 4);
    t60 = *((unsigned int *)t66);
    t23 = (!(t60));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB55;

LAB56:    goto LAB53;

LAB55:    t62 = *((unsigned int *)t51);
    t26 = (t62 + 0);
    t63 = *((unsigned int *)t47);
    t64 = *((unsigned int *)t50);
    t29 = (t63 - t64);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t49, t37, t26, *((unsigned int *)t50), t30);
    goto LAB56;

}


extern void work_m_00000000001187692077_0974461757_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000001187692077_0974461757", "isim/testan_isim_beh.exe.sim/work/m_00000000001187692077_0974461757.didat");
	xsi_register_executes(pe);
}
