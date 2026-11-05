#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265F70
// Address: 0x265f70 - 0x266250
void sub_00265F70_0x265f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265F70_0x265f70");
#endif

    switch (ctx->pc) {
        case 0x265f70u: goto label_265f70;
        case 0x265f74u: goto label_265f74;
        case 0x265f78u: goto label_265f78;
        case 0x265f7cu: goto label_265f7c;
        case 0x265f80u: goto label_265f80;
        case 0x265f84u: goto label_265f84;
        case 0x265f88u: goto label_265f88;
        case 0x265f8cu: goto label_265f8c;
        case 0x265f90u: goto label_265f90;
        case 0x265f94u: goto label_265f94;
        case 0x265f98u: goto label_265f98;
        case 0x265f9cu: goto label_265f9c;
        case 0x265fa0u: goto label_265fa0;
        case 0x265fa4u: goto label_265fa4;
        case 0x265fa8u: goto label_265fa8;
        case 0x265facu: goto label_265fac;
        case 0x265fb0u: goto label_265fb0;
        case 0x265fb4u: goto label_265fb4;
        case 0x265fb8u: goto label_265fb8;
        case 0x265fbcu: goto label_265fbc;
        case 0x265fc0u: goto label_265fc0;
        case 0x265fc4u: goto label_265fc4;
        case 0x265fc8u: goto label_265fc8;
        case 0x265fccu: goto label_265fcc;
        case 0x265fd0u: goto label_265fd0;
        case 0x265fd4u: goto label_265fd4;
        case 0x265fd8u: goto label_265fd8;
        case 0x265fdcu: goto label_265fdc;
        case 0x265fe0u: goto label_265fe0;
        case 0x265fe4u: goto label_265fe4;
        case 0x265fe8u: goto label_265fe8;
        case 0x265fecu: goto label_265fec;
        case 0x265ff0u: goto label_265ff0;
        case 0x265ff4u: goto label_265ff4;
        case 0x265ff8u: goto label_265ff8;
        case 0x265ffcu: goto label_265ffc;
        case 0x266000u: goto label_266000;
        case 0x266004u: goto label_266004;
        case 0x266008u: goto label_266008;
        case 0x26600cu: goto label_26600c;
        case 0x266010u: goto label_266010;
        case 0x266014u: goto label_266014;
        case 0x266018u: goto label_266018;
        case 0x26601cu: goto label_26601c;
        case 0x266020u: goto label_266020;
        case 0x266024u: goto label_266024;
        case 0x266028u: goto label_266028;
        case 0x26602cu: goto label_26602c;
        case 0x266030u: goto label_266030;
        case 0x266034u: goto label_266034;
        case 0x266038u: goto label_266038;
        case 0x26603cu: goto label_26603c;
        case 0x266040u: goto label_266040;
        case 0x266044u: goto label_266044;
        case 0x266048u: goto label_266048;
        case 0x26604cu: goto label_26604c;
        case 0x266050u: goto label_266050;
        case 0x266054u: goto label_266054;
        case 0x266058u: goto label_266058;
        case 0x26605cu: goto label_26605c;
        case 0x266060u: goto label_266060;
        case 0x266064u: goto label_266064;
        case 0x266068u: goto label_266068;
        case 0x26606cu: goto label_26606c;
        case 0x266070u: goto label_266070;
        case 0x266074u: goto label_266074;
        case 0x266078u: goto label_266078;
        case 0x26607cu: goto label_26607c;
        case 0x266080u: goto label_266080;
        case 0x266084u: goto label_266084;
        case 0x266088u: goto label_266088;
        case 0x26608cu: goto label_26608c;
        case 0x266090u: goto label_266090;
        case 0x266094u: goto label_266094;
        case 0x266098u: goto label_266098;
        case 0x26609cu: goto label_26609c;
        case 0x2660a0u: goto label_2660a0;
        case 0x2660a4u: goto label_2660a4;
        case 0x2660a8u: goto label_2660a8;
        case 0x2660acu: goto label_2660ac;
        case 0x2660b0u: goto label_2660b0;
        case 0x2660b4u: goto label_2660b4;
        case 0x2660b8u: goto label_2660b8;
        case 0x2660bcu: goto label_2660bc;
        case 0x2660c0u: goto label_2660c0;
        case 0x2660c4u: goto label_2660c4;
        case 0x2660c8u: goto label_2660c8;
        case 0x2660ccu: goto label_2660cc;
        case 0x2660d0u: goto label_2660d0;
        case 0x2660d4u: goto label_2660d4;
        case 0x2660d8u: goto label_2660d8;
        case 0x2660dcu: goto label_2660dc;
        case 0x2660e0u: goto label_2660e0;
        case 0x2660e4u: goto label_2660e4;
        case 0x2660e8u: goto label_2660e8;
        case 0x2660ecu: goto label_2660ec;
        case 0x2660f0u: goto label_2660f0;
        case 0x2660f4u: goto label_2660f4;
        case 0x2660f8u: goto label_2660f8;
        case 0x2660fcu: goto label_2660fc;
        case 0x266100u: goto label_266100;
        case 0x266104u: goto label_266104;
        case 0x266108u: goto label_266108;
        case 0x26610cu: goto label_26610c;
        case 0x266110u: goto label_266110;
        case 0x266114u: goto label_266114;
        case 0x266118u: goto label_266118;
        case 0x26611cu: goto label_26611c;
        case 0x266120u: goto label_266120;
        case 0x266124u: goto label_266124;
        case 0x266128u: goto label_266128;
        case 0x26612cu: goto label_26612c;
        case 0x266130u: goto label_266130;
        case 0x266134u: goto label_266134;
        case 0x266138u: goto label_266138;
        case 0x26613cu: goto label_26613c;
        case 0x266140u: goto label_266140;
        case 0x266144u: goto label_266144;
        case 0x266148u: goto label_266148;
        case 0x26614cu: goto label_26614c;
        case 0x266150u: goto label_266150;
        case 0x266154u: goto label_266154;
        case 0x266158u: goto label_266158;
        case 0x26615cu: goto label_26615c;
        case 0x266160u: goto label_266160;
        case 0x266164u: goto label_266164;
        case 0x266168u: goto label_266168;
        case 0x26616cu: goto label_26616c;
        case 0x266170u: goto label_266170;
        case 0x266174u: goto label_266174;
        case 0x266178u: goto label_266178;
        case 0x26617cu: goto label_26617c;
        case 0x266180u: goto label_266180;
        case 0x266184u: goto label_266184;
        case 0x266188u: goto label_266188;
        case 0x26618cu: goto label_26618c;
        case 0x266190u: goto label_266190;
        case 0x266194u: goto label_266194;
        case 0x266198u: goto label_266198;
        case 0x26619cu: goto label_26619c;
        case 0x2661a0u: goto label_2661a0;
        case 0x2661a4u: goto label_2661a4;
        case 0x2661a8u: goto label_2661a8;
        case 0x2661acu: goto label_2661ac;
        case 0x2661b0u: goto label_2661b0;
        case 0x2661b4u: goto label_2661b4;
        case 0x2661b8u: goto label_2661b8;
        case 0x2661bcu: goto label_2661bc;
        case 0x2661c0u: goto label_2661c0;
        case 0x2661c4u: goto label_2661c4;
        case 0x2661c8u: goto label_2661c8;
        case 0x2661ccu: goto label_2661cc;
        case 0x2661d0u: goto label_2661d0;
        case 0x2661d4u: goto label_2661d4;
        case 0x2661d8u: goto label_2661d8;
        case 0x2661dcu: goto label_2661dc;
        case 0x2661e0u: goto label_2661e0;
        case 0x2661e4u: goto label_2661e4;
        case 0x2661e8u: goto label_2661e8;
        case 0x2661ecu: goto label_2661ec;
        case 0x2661f0u: goto label_2661f0;
        case 0x2661f4u: goto label_2661f4;
        case 0x2661f8u: goto label_2661f8;
        case 0x2661fcu: goto label_2661fc;
        case 0x266200u: goto label_266200;
        case 0x266204u: goto label_266204;
        case 0x266208u: goto label_266208;
        case 0x26620cu: goto label_26620c;
        case 0x266210u: goto label_266210;
        case 0x266214u: goto label_266214;
        case 0x266218u: goto label_266218;
        case 0x26621cu: goto label_26621c;
        case 0x266220u: goto label_266220;
        case 0x266224u: goto label_266224;
        case 0x266228u: goto label_266228;
        case 0x26622cu: goto label_26622c;
        case 0x266230u: goto label_266230;
        case 0x266234u: goto label_266234;
        case 0x266238u: goto label_266238;
        case 0x26623cu: goto label_26623c;
        case 0x266240u: goto label_266240;
        case 0x266244u: goto label_266244;
        case 0x266248u: goto label_266248;
        case 0x26624cu: goto label_26624c;
        default: break;
    }

    ctx->pc = 0x265f70u;

label_265f70:
    // 0x265f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_265f74:
    // 0x265f74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x265f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_265f78:
    // 0x265f78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x265f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_265f7c:
    // 0x265f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_265f80:
    // 0x265f80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x265f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_265f84:
    // 0x265f84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x265f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_265f88:
    // 0x265f88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x265f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_265f8c:
    // 0x265f8c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x265f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_265f90:
    // 0x265f90: 0xc0b8530  jal         func_2E14C0
label_265f94:
    if (ctx->pc == 0x265F94u) {
        ctx->pc = 0x265F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F90u;
        // 0x265f94: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265F98u;
        goto label_265f98;
    }
    ctx->pc = 0x265F90u;
    SET_GPR_U32(ctx, 31, 0x265F98u);
    ctx->pc = 0x265F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265F90u;
    // 0x265f94: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E14C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E14C0u, 0x265F90u, 0x265F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F98u;
label_265f98:
    // 0x265f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_265f9c:
    if (ctx->pc == 0x265F9Cu) {
        ctx->pc = 0x265F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F98u;
        // 0x265f9c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265FA0u;
        goto label_265fa0;
    }
    ctx->pc = 0x265F98u;
    {
        const bool branch_taken_0x265f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F98u;
        // 0x265f9c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f98) {
            ctx->pc = 0x265FA8u;
            goto label_265fa8;
        }
    }
    ctx->pc = 0x265FA0u;
label_265fa0:
    // 0x265fa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_265fa4:
    // 0x265fa4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x265fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_265fa8:
    // 0x265fa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_265fac:
    // 0x265fac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_265fb0:
    if (ctx->pc == 0x265FB0u) {
        ctx->pc = 0x265FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FACu;
        // 0x265fb0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265FB4u;
        goto label_265fb4;
    }
    ctx->pc = 0x265FACu;
    {
        const bool branch_taken_0x265fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FACu;
        // 0x265fb0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fac) {
            ctx->pc = 0x265FF0u;
            goto label_265ff0;
        }
    }
    ctx->pc = 0x265FB4u;
label_265fb4:
    // 0x265fb4: 0xc076430  jal         func_1D90C0
label_265fb8:
    if (ctx->pc == 0x265FB8u) {
        ctx->pc = 0x265FBCu;
        goto label_265fbc;
    }
    ctx->pc = 0x265FB4u;
    SET_GPR_U32(ctx, 31, 0x265FBCu);
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x265FB4u, 0x265FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FBCu;
label_265fbc:
    // 0x265fbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_265fc0:
    if (ctx->pc == 0x265FC0u) {
        ctx->pc = 0x265FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FBCu;
        // 0x265fc0: 0x8e4391f0  lw          $v1, -0x6E10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265FC4u;
        goto label_265fc4;
    }
    ctx->pc = 0x265FBCu;
    {
        const bool branch_taken_0x265fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FBCu;
        // 0x265fc0: 0x8e4391f0  lw          $v1, -0x6E10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fbc) {
            ctx->pc = 0x265FF4u;
            goto label_265ff4;
        }
    }
    ctx->pc = 0x265FC4u;
label_265fc4:
    // 0x265fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265fc8:
    // 0x265fc8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_265fcc:
    if (ctx->pc == 0x265FCCu) {
        ctx->pc = 0x265FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FC8u;
        // 0x265fcc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x265FD0u;
        goto label_265fd0;
    }
    ctx->pc = 0x265FC8u;
    {
        const bool branch_taken_0x265fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265fc8) {
            ctx->pc = 0x265FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FC8u;
            // 0x265fcc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x265FE8u;
            goto label_265fe8;
        }
    }
    ctx->pc = 0x265FD0u;
label_265fd0:
    // 0x265fd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x265fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_265fd4:
    // 0x265fd4: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x265fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_265fd8:
    // 0x265fd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x265fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265fdc:
    // 0x265fdc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x265fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_265fe0:
    // 0x265fe0: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x265fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_265fe4:
    // 0x265fe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x265fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_265fe8:
    // 0x265fe8: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_265fec:
    if (ctx->pc == 0x265FECu) {
        ctx->pc = 0x265FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FE8u;
        // 0x265fec: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265FF0u;
        goto label_265ff0;
    }
    ctx->pc = 0x265FE8u;
    {
        const bool branch_taken_0x265fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265fe8) {
            ctx->pc = 0x265FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FE8u;
            // 0x265fec: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266204u;
            goto label_266204;
        }
    }
    ctx->pc = 0x265FF0u;
label_265ff0:
    // 0x265ff0: 0x8e4391f0  lw          $v1, -0x6E10($s2)
    ctx->pc = 0x265ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
label_265ff4:
    // 0x265ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265ff8:
    // 0x265ff8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_265ffc:
    if (ctx->pc == 0x265FFCu) {
        ctx->pc = 0x265FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FF8u;
        // 0x265ffc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266000u;
        goto label_266000;
    }
    ctx->pc = 0x265FF8u;
    {
        const bool branch_taken_0x265ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265ff8) {
            ctx->pc = 0x265FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FF8u;
            // 0x265ffc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266018u;
            goto label_266018;
        }
    }
    ctx->pc = 0x266000u;
label_266000:
    // 0x266000: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x266000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_266004:
    // 0x266004: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x266004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_266008:
    // 0x266008: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26600c:
    // 0x26600c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_266010:
    // 0x266010: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x266010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_266014:
    // 0x266014: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_266018:
    // 0x266018: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_26601c:
    if (ctx->pc == 0x26601Cu) {
        ctx->pc = 0x26601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266018u;
        // 0x26601c: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266020u;
        goto label_266020;
    }
    ctx->pc = 0x266018u;
    {
        const bool branch_taken_0x266018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266018u;
        // 0x26601c: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266018) {
            ctx->pc = 0x2661A4u;
            goto label_2661a4;
        }
    }
    ctx->pc = 0x266020u;
label_266020:
    // 0x266020: 0x8e4291f0  lw          $v0, -0x6E10($s2)
    ctx->pc = 0x266020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939120)));
label_266024:
    // 0x266024: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_266028:
    if (ctx->pc == 0x266028u) {
        ctx->pc = 0x266028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266024u;
        // 0x266028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26602Cu;
        goto label_26602c;
    }
    ctx->pc = 0x266024u;
    {
        const bool branch_taken_0x266024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266024u;
        // 0x266028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266024) {
            ctx->pc = 0x2661A4u;
            goto label_2661a4;
        }
    }
    ctx->pc = 0x26602Cu;
label_26602c:
    // 0x26602c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_266030:
    // 0x266030: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x266030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_266034:
    // 0x266034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x266034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_266038:
    // 0x266038: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x266038u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26603c:
    // 0x26603c: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x26603cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
label_266040:
    // 0x266040: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x266040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_266044:
    // 0x266044: 0x3c09bfff  lui         $t1, 0xBFFF
    ctx->pc = 0x266044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49151 << 16));
label_266048:
    // 0x266048: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x266048u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_26604c:
    // 0x26604c: 0x94af8  dsll        $t1, $t1, 11
    ctx->pc = 0x26604cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 11);
label_266050:
    // 0x266050: 0x352907ff  ori         $t1, $t1, 0x7FF
    ctx->pc = 0x266050u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2047);
label_266054:
    // 0x266054: 0x8d4291ec  lw          $v0, -0x6E14($t2)
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939116)));
label_266058:
    // 0x266058: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x266058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_26605c:
    // 0x26605c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266060:
    // 0x266060: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x266060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_266064:
    // 0x266064: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x266064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_266068:
    // 0x266068: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x266068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_26606c:
    // 0x26606c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_266070:
    if (ctx->pc == 0x266070u) {
        ctx->pc = 0x266070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26606Cu;
        // 0x266070: 0x8d6291f0  lw          $v0, -0x6E10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266074u;
        goto label_266074;
    }
    ctx->pc = 0x26606Cu;
    {
        const bool branch_taken_0x26606c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26606Cu;
        // 0x266070: 0x8d6291f0  lw          $v0, -0x6E10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26606c) {
            ctx->pc = 0x266194u;
            goto label_266194;
        }
    }
    ctx->pc = 0x266074u;
label_266074:
    // 0x266074: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_266078:
    // 0x266078: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_26607c:
    if (ctx->pc == 0x26607Cu) {
        ctx->pc = 0x26607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266078u;
        // 0x26607c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266080u;
        goto label_266080;
    }
    ctx->pc = 0x266078u;
    {
        const bool branch_taken_0x266078 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266078u;
        // 0x26607c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266078) {
            ctx->pc = 0x26608Cu;
            goto label_26608c;
        }
    }
    ctx->pc = 0x266080u;
label_266080:
    // 0x266080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_266084:
    // 0x266084: 0x10000042  b           . + 4 + (0x42 << 2)
label_266088:
    if (ctx->pc == 0x266088u) {
        ctx->pc = 0x266088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266084u;
        // 0x266088: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26608Cu;
        goto label_26608c;
    }
    ctx->pc = 0x266084u;
    {
        const bool branch_taken_0x266084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266084u;
        // 0x266088: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266084) {
            ctx->pc = 0x266190u;
            goto label_266190;
        }
    }
    ctx->pc = 0x26608Cu;
label_26608c:
    // 0x26608c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x26608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_266090:
    // 0x266090: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x266090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_266094:
    // 0x266094: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
label_266098:
    if (ctx->pc == 0x266098u) {
        ctx->pc = 0x266098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266094u;
        // 0x266098: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26609Cu;
        goto label_26609c;
    }
    ctx->pc = 0x266094u;
    {
        const bool branch_taken_0x266094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x266098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266094u;
        // 0x266098: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266094) {
            ctx->pc = 0x266188u;
            goto label_266188;
        }
    }
    ctx->pc = 0x26609Cu;
label_26609c:
    // 0x26609c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x26609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2660a0:
    // 0x2660a0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2660a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2660a4:
    // 0x2660a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2660a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2660a8:
    // 0x2660a8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x2660a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_2660ac:
    // 0x2660ac: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_2660b0:
    if (ctx->pc == 0x2660B0u) {
        ctx->pc = 0x2660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660ACu;
        // 0x2660b0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2660B4u;
        goto label_2660b4;
    }
    ctx->pc = 0x2660ACu;
    {
        const bool branch_taken_0x2660ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660ACu;
        // 0x2660b0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660ac) {
            ctx->pc = 0x266188u;
            goto label_266188;
        }
    }
    ctx->pc = 0x2660B4u;
label_2660b4:
    // 0x2660b4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2660b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2660b8:
    // 0x2660b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2660b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2660bc:
    // 0x2660bc: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2660bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2660c0:
    // 0x2660c0: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x2660c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2660c4:
    // 0x2660c4: 0x3063020f  andi        $v1, $v1, 0x20F
    ctx->pc = 0x2660c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)527);
label_2660c8:
    // 0x2660c8: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x2660c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_2660cc:
    // 0x2660cc: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_2660d0:
    if (ctx->pc == 0x2660D0u) {
        ctx->pc = 0x2660D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660CCu;
        // 0x2660d0: 0x8e0302c8  lw          $v1, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2660D4u;
        goto label_2660d4;
    }
    ctx->pc = 0x2660CCu;
    {
        const bool branch_taken_0x2660cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2660cc) {
            ctx->pc = 0x2660D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2660CCu;
            // 0x2660d0: 0x8e0302c8  lw          $v1, 0x2C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266118u;
            goto label_266118;
        }
    }
    ctx->pc = 0x2660D4u;
label_2660d4:
    // 0x2660d4: 0x8d022b00  lw          $v0, 0x2B00($t0)
    ctx->pc = 0x2660d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
label_2660d8:
    // 0x2660d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2660dc:
    if (ctx->pc == 0x2660DCu) {
        ctx->pc = 0x2660DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660D8u;
        // 0x2660dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2660E0u;
        goto label_2660e0;
    }
    ctx->pc = 0x2660D8u;
    {
        const bool branch_taken_0x2660d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2660DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660D8u;
        // 0x2660dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660d8) {
            ctx->pc = 0x2660F4u;
            goto label_2660f4;
        }
    }
    ctx->pc = 0x2660E0u;
label_2660e0:
    // 0x2660e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2660e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2660e4:
    // 0x2660e4: 0x0  nop
    ctx->pc = 0x2660e4u;
    // NOP
label_2660e8:
    // 0x2660e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2660e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2660ec:
    // 0x2660ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2660f0:
    if (ctx->pc == 0x2660F0u) {
        ctx->pc = 0x2660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660ECu;
        // 0x2660f0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2660F4u;
        goto label_2660f4;
    }
    ctx->pc = 0x2660ECu;
    {
        const bool branch_taken_0x2660ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660ECu;
        // 0x2660f0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660ec) {
            ctx->pc = 0x266110u;
            goto label_266110;
        }
    }
    ctx->pc = 0x2660F4u;
label_2660f4:
    // 0x2660f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2660f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2660f8:
    // 0x2660f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2660f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2660fc:
    // 0x2660fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2660fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266100:
    // 0x266100: 0x0  nop
    ctx->pc = 0x266100u;
    // NOP
label_266104:
    // 0x266104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x266104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_266108:
    // 0x266108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x266108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26610c:
    // 0x26610c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26610cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_266110:
    // 0x266110: 0x1000001c  b           . + 4 + (0x1C << 2)
label_266114:
    if (ctx->pc == 0x266114u) {
        ctx->pc = 0x266114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266110u;
        // 0x266114: 0xe60002d0  swc1        $f0, 0x2D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x266118u;
        goto label_266118;
    }
    ctx->pc = 0x266110u;
    {
        const bool branch_taken_0x266110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266110u;
        // 0x266114: 0xe60002d0  swc1        $f0, 0x2D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266110) {
            ctx->pc = 0x266184u;
            goto label_266184;
        }
    }
    ctx->pc = 0x266118u;
label_266118:
    // 0x266118: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_26611c:
    if (ctx->pc == 0x26611Cu) {
        ctx->pc = 0x26611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266118u;
        // 0x26611c: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266120u;
        goto label_266120;
    }
    ctx->pc = 0x266118u;
    {
        const bool branch_taken_0x266118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x266118) {
            ctx->pc = 0x26611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266118u;
            // 0x26611c: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266130u;
            goto label_266130;
        }
    }
    ctx->pc = 0x266120u;
label_266120:
    // 0x266120: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x266120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_266124:
    // 0x266124: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x266124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_266128:
    // 0x266128: 0xfc621020  sd          $v0, 0x1020($v1)
    ctx->pc = 0x266128u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
label_26612c:
    // 0x26612c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x26612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_266130:
    // 0x266130: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x266130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_266134:
    // 0x266134: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_266138:
    if (ctx->pc == 0x266138u) {
        ctx->pc = 0x266138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266134u;
        // 0x266138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26613Cu;
        goto label_26613c;
    }
    ctx->pc = 0x266134u;
    {
        const bool branch_taken_0x266134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266134u;
        // 0x266138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266134) {
            ctx->pc = 0x266140u;
            goto label_266140;
        }
    }
    ctx->pc = 0x26613Cu;
label_26613c:
    // 0x26613c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x26613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_266140:
    // 0x266140: 0xae0302c8  sw          $v1, 0x2C8($s0)
    ctx->pc = 0x266140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
label_266144:
    // 0x266144: 0x8d022b00  lw          $v0, 0x2B00($t0)
    ctx->pc = 0x266144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
label_266148:
    // 0x266148: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26614c:
    if (ctx->pc == 0x26614Cu) {
        ctx->pc = 0x26614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266148u;
        // 0x26614c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266150u;
        goto label_266150;
    }
    ctx->pc = 0x266148u;
    {
        const bool branch_taken_0x266148 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266148u;
        // 0x26614c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266148) {
            ctx->pc = 0x266164u;
            goto label_266164;
        }
    }
    ctx->pc = 0x266150u;
label_266150:
    // 0x266150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266154:
    // 0x266154: 0x0  nop
    ctx->pc = 0x266154u;
    // NOP
label_266158:
    // 0x266158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x266158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_26615c:
    // 0x26615c: 0x10000008  b           . + 4 + (0x8 << 2)
label_266160:
    if (ctx->pc == 0x266160u) {
        ctx->pc = 0x266160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26615Cu;
        // 0x266160: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x266164u;
        goto label_266164;
    }
    ctx->pc = 0x26615Cu;
    {
        const bool branch_taken_0x26615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26615Cu;
        // 0x266160: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26615c) {
            ctx->pc = 0x266180u;
            goto label_266180;
        }
    }
    ctx->pc = 0x266164u;
label_266164:
    // 0x266164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_266168:
    // 0x266168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x266168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26616c:
    // 0x26616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266170:
    // 0x266170: 0x0  nop
    ctx->pc = 0x266170u;
    // NOP
label_266174:
    // 0x266174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x266174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_266178:
    // 0x266178: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x266178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26617c:
    // 0x26617c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26617cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_266180:
    // 0x266180: 0xe60002cc  swc1        $f0, 0x2CC($s0)
    ctx->pc = 0x266180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
label_266184:
    // 0x266184: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_266188:
    // 0x266188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26618c:
    // 0x26618c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26618cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_266190:
    // 0x266190: 0x8d6291f0  lw          $v0, -0x6E10($t3)
    ctx->pc = 0x266190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294939120)));
label_266194:
    // 0x266194: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x266194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_266198:
    // 0x266198: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x266198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26619c:
    // 0x26619c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_2661a0:
    if (ctx->pc == 0x2661A0u) {
        ctx->pc = 0x2661A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26619Cu;
        // 0x2661a0: 0x8d4291ec  lw          $v0, -0x6E14($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661A4u;
        goto label_2661a4;
    }
    ctx->pc = 0x26619Cu;
    {
        const bool branch_taken_0x26619c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2661A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26619Cu;
        // 0x2661a0: 0x8d4291ec  lw          $v0, -0x6E14($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26619c) {
            ctx->pc = 0x266058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266058;
        }
    }
    ctx->pc = 0x2661A4u;
label_2661a4:
    // 0x2661a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2661a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2661a8:
    // 0x2661a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2661a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2661ac:
    // 0x2661ac: 0xc083df6  jal         func_20F7D8
label_2661b0:
    if (ctx->pc == 0x2661B0u) {
        ctx->pc = 0x2661B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661ACu;
        // 0x2661b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661B4u;
        goto label_2661b4;
    }
    ctx->pc = 0x2661ACu;
    SET_GPR_U32(ctx, 31, 0x2661B4u);
    ctx->pc = 0x2661B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661ACu;
    // 0x2661b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x2661ACu, 0x2661B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661B4u;
label_2661b4:
    // 0x2661b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2661b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2661b8:
    // 0x2661b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2661b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2661bc:
    // 0x2661bc: 0xc083c9e  jal         func_20F278
label_2661c0:
    if (ctx->pc == 0x2661C0u) {
        ctx->pc = 0x2661C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661BCu;
        // 0x2661c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661C4u;
        goto label_2661c4;
    }
    ctx->pc = 0x2661BCu;
    SET_GPR_U32(ctx, 31, 0x2661C4u);
    ctx->pc = 0x2661C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661BCu;
    // 0x2661c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F278u, 0x2661BCu, 0x2661C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661C4u;
label_2661c4:
    // 0x2661c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2661c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2661c8:
    // 0x2661c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2661cc:
    if (ctx->pc == 0x2661CCu) {
        ctx->pc = 0x2661CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661C8u;
        // 0x2661cc: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661D0u;
        goto label_2661d0;
    }
    ctx->pc = 0x2661C8u;
    {
        const bool branch_taken_0x2661c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2661CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661C8u;
        // 0x2661cc: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661c8) {
            ctx->pc = 0x2661DCu;
            goto label_2661dc;
        }
    }
    ctx->pc = 0x2661D0u;
label_2661d0:
    // 0x2661d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2661d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2661d4:
    // 0x2661d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2661d8:
    if (ctx->pc == 0x2661D8u) {
        ctx->pc = 0x2661DCu;
        goto label_2661dc;
    }
    ctx->pc = 0x2661D4u;
    {
        const bool branch_taken_0x2661d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2661d4) {
            ctx->pc = 0x266204u;
            goto label_266204;
        }
    }
    ctx->pc = 0x2661DCu;
label_2661dc:
    // 0x2661dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2661dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2661e0:
    // 0x2661e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2661e4:
    // 0x2661e4: 0x40f809  jalr        $v0
label_2661e8:
    if (ctx->pc == 0x2661E8u) {
        ctx->pc = 0x2661ECu;
        goto label_2661ec;
    }
    ctx->pc = 0x2661E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2661ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2661E4u, 0x2661ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2661ECu;
label_2661ec:
    // 0x2661ec: 0xc076e00  jal         func_1DB800
label_2661f0:
    if (ctx->pc == 0x2661F0u) {
        ctx->pc = 0x2661F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661ECu;
        // 0x2661f0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661F4u;
        goto label_2661f4;
    }
    ctx->pc = 0x2661ECu;
    SET_GPR_U32(ctx, 31, 0x2661F4u);
    ctx->pc = 0x2661F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661ECu;
    // 0x2661f0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x2661ECu, 0x2661F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661F4u;
label_2661f4:
    // 0x2661f4: 0xc083f5e  jal         func_20FD78
label_2661f8:
    if (ctx->pc == 0x2661F8u) {
        ctx->pc = 0x2661F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661F4u;
        // 0x2661f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2661FCu;
        goto label_2661fc;
    }
    ctx->pc = 0x2661F4u;
    SET_GPR_U32(ctx, 31, 0x2661FCu);
    ctx->pc = 0x2661F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661F4u;
    // 0x2661f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD78u, 0x2661F4u, 0x2661FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661FCu;
label_2661fc:
    // 0x2661fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_266200:
    if (ctx->pc == 0x266200u) {
        ctx->pc = 0x266200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661FCu;
        // 0x266200: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266204u;
        goto label_266204;
    }
    ctx->pc = 0x2661FCu;
    {
        const bool branch_taken_0x2661fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661FCu;
        // 0x266200: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661fc) {
            ctx->pc = 0x266238u;
            goto label_266238;
        }
    }
    ctx->pc = 0x266204u;
label_266204:
    // 0x266204: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x266204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_266208:
    // 0x266208: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_26620c:
    // 0x26620c: 0x40f809  jalr        $v0
label_266210:
    if (ctx->pc == 0x266210u) {
        ctx->pc = 0x266214u;
        goto label_266214;
    }
    ctx->pc = 0x26620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x266214u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26620Cu, 0x266214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266214u;
label_266214:
    // 0x266214: 0xc076de4  jal         func_1DB790
label_266218:
    if (ctx->pc == 0x266218u) {
        ctx->pc = 0x266218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266214u;
        // 0x266218: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26621Cu;
        goto label_26621c;
    }
    ctx->pc = 0x266214u;
    SET_GPR_U32(ctx, 31, 0x26621Cu);
    ctx->pc = 0x266218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266214u;
    // 0x266218: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x266214u, 0x26621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26621Cu;
label_26621c:
    // 0x26621c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_266220:
    // 0x266220: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_266224:
    // 0x266224: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x266224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
label_266228:
    // 0x266228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26622c:
    // 0x26622c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_266230:
    // 0x266230: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x266230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_266234:
    // 0x266234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x266234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_266238:
    // 0x266238: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x266238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26623c:
    // 0x26623c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26623cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_266240:
    // 0x266240: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x266240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_266244:
    // 0x266244: 0x3e00008  jr          $ra
label_266248:
    if (ctx->pc == 0x266248u) {
        ctx->pc = 0x266248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266244u;
        // 0x266248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26624Cu;
        goto label_26624c;
    }
    ctx->pc = 0x266244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266244u;
        // 0x266248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26624Cu;
label_26624c:
    // 0x26624c: 0x0  nop
    ctx->pc = 0x26624cu;
    // NOP
    ctx->pc = 0x266250u;
}
