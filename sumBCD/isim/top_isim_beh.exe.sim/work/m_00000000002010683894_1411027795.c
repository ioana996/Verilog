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
static const char *ng0 = "C:/Users/student/Downloads/BCD/display.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {11U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {14U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {159U, 0U};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {153U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {72U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {65U, 0U};
static unsigned int ng18[] = {27U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {255U, 0U};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2336);
    *((int *)t2) = 1;
    t3 = (t0 + 2168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 2, t5, 32);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB16:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t12, 4, t10, 4);
    t11 = (t0 + 1288);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 4);
    t13 = (t0 + 1380);
    xsi_vlogvar_assign_value(t13, t9, 4, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t5, 4, t3, 4);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 4);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t9, 4, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t5, 4, t3, 4);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 4);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t9, 4, 0, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t5, 4, t3, 4);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 4);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t9, 4, 0, 4);
    goto LAB15;

LAB17:    xsi_set_current_line(47, ng0);
    t7 = ((char*)((ng7)));
    t10 = (t0 + 1196);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 8);
    goto LAB39;

LAB19:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB21:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB23:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB25:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB27:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB29:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB31:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB33:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

LAB35:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB39;

}


extern void work_m_00000000002010683894_1411027795_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000002010683894_1411027795", "isim/top_isim_beh.exe.sim/work/m_00000000002010683894_1411027795.didat");
	xsi_register_executes(pe);
}
