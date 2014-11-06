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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/Projects/hazi_uj/cntr.v";
static unsigned int ng1[] = {39U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {10, 0};
static int ng4[] = {7, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};



static void Always_27_0(char *t0)
{
    char t6[8];
    char t39[8];
    char t75[8];
    char t99[8];
    char t118[8];
    char t120[8];
    char t146[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t8);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t7 = (t5 + 4);
    t21 = (t8 + 4);
    t22 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t21);
    t14 = (t12 | t13);
    *((unsigned int *)t22) = t14;
    t15 = *((unsigned int *)t22);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB10;

LAB11:
LAB12:    t40 = *((unsigned int *)t3);
    t41 = *((unsigned int *)t6);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t3 + 4);
    t44 = (t6 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB13;

LAB14:
LAB15:    t67 = (t39 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(35, ng0);

LAB19:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB20;

LAB21:
LAB22:    t22 = (t6 + 4);
    t40 = *((unsigned int *)t22);
    t41 = (~(t40));
    t42 = *((unsigned int *)t6);
    t46 = (t42 & t41);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB18:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t6) = (t17 | t18);
    t23 = (t5 + 4);
    t24 = (t8 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = (t20 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t35 & t33);
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    goto LAB12;

LAB13:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t3 + 4);
    t54 = (t6 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t3);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t6);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB15;

LAB16:    xsi_set_current_line(33, ng0);
    t73 = ((char*)((ng2)));
    t74 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t74, t73, 0, 0, 6, 0LL);
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t17 | t18);
    t8 = (t3 + 4);
    t21 = (t4 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (~(t29));
    t31 = (t20 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);

LAB26:    xsi_set_current_line(38, ng0);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t43 = *((char **)t24);
    t44 = (t0 + 2888);
    t45 = (t44 + 56U);
    t53 = *((char **)t45);
    t54 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t67 = (t53 + 4);
    t73 = (t54 + 4);
    t48 = *((unsigned int *)t53);
    t49 = *((unsigned int *)t54);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t67);
    t52 = *((unsigned int *)t73);
    t55 = (t51 ^ t52);
    t56 = (t50 | t55);
    t57 = *((unsigned int *)t67);
    t59 = *((unsigned int *)t73);
    t60 = (t57 | t59);
    t61 = (~(t60));
    t63 = (t56 & t61);
    if (t63 != 0)
        goto LAB28;

LAB27:    if (t60 != 0)
        goto LAB29;

LAB30:    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t39);
    t66 = (t64 | t65);
    *((unsigned int *)t75) = t66;
    t76 = (t43 + 4);
    t77 = (t39 + 4);
    t78 = (t75 + 4);
    t68 = *((unsigned int *)t76);
    t69 = *((unsigned int *)t77);
    t70 = (t68 | t69);
    *((unsigned int *)t78) = t70;
    t71 = *((unsigned int *)t78);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB31;

LAB32:
LAB33:    t93 = (t75 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t75);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    *((unsigned int *)t39) = 1;
    goto LAB30;

LAB29:    t74 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB30;

LAB31:    t79 = *((unsigned int *)t75);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t75) = (t79 | t80);
    t81 = (t43 + 4);
    t82 = (t39 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t43);
    t58 = (t85 & t84);
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t39);
    t62 = (t88 & t87);
    t89 = (~(t58));
    t90 = (~(t62));
    t91 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t91 & t89);
    t92 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t92 & t90);
    goto LAB33;

LAB34:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(40, ng0);
    t100 = (t0 + 1528U);
    t101 = *((char **)t100);
    memset(t99, 0, 8);
    t100 = (t101 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t100) == 0)
        goto LAB38;

LAB40:    t107 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t107) = 1;

LAB41:    t108 = (t99 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t99);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 6, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 6, 0LL);

LAB44:    goto LAB36;

LAB38:    *((unsigned int *)t99) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(41, ng0);

LAB45:    xsi_set_current_line(42, ng0);
    t114 = (t0 + 2888);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = ((char*)((ng3)));
    memset(t118, 0, 8);
    xsi_vlog_unsigned_mod(t118, 32, t116, 6, t117, 32);
    t119 = ((char*)((ng4)));
    memset(t120, 0, 8);
    t121 = (t118 + 4);
    t122 = (t119 + 4);
    t123 = *((unsigned int *)t118);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t122);
    t128 = (t126 ^ t127);
    t129 = (t125 | t128);
    t130 = *((unsigned int *)t121);
    t131 = *((unsigned int *)t122);
    t132 = (t130 | t131);
    t133 = (~(t132));
    t134 = (t129 & t133);
    if (t134 != 0)
        goto LAB49;

LAB46:    if (t132 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t120) = 1;

LAB49:    t136 = (t120 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t120);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 6, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 6, 0LL);

LAB52:    goto LAB44;

LAB48:    t135 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(43, ng0);
    t142 = (t0 + 2888);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng5)));
    memset(t146, 0, 8);
    xsi_vlog_unsigned_add(t146, 32, t144, 6, t145, 32);
    t147 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t147, t146, 0, 0, 6, 0LL);
    goto LAB52;

}

static void Cont_54_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 4640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_55_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4656);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000447301606_0299926898_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Cont_54_1,(void *)Cont_55_2};
	xsi_register_didat("work_m_00000000000447301606_0299926898", "isim/cntrtest_isim_beh.exe.sim/work/m_00000000000447301606_0299926898.didat");
	xsi_register_executes(pe);
}
