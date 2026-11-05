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

// Function: sub_003D73C8
// Address: 0x3d73c8 - 0x3d75a0
void sub_003D73C8_0x3d73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D73C8_0x3d73c8");
#endif

    switch (ctx->pc) {
        case 0x3d73c8u: goto label_3d73c8;
        case 0x3d73ccu: goto label_3d73cc;
        case 0x3d73d0u: goto label_3d73d0;
        case 0x3d73d4u: goto label_3d73d4;
        case 0x3d73d8u: goto label_3d73d8;
        case 0x3d73dcu: goto label_3d73dc;
        case 0x3d73e0u: goto label_3d73e0;
        case 0x3d73e4u: goto label_3d73e4;
        case 0x3d73e8u: goto label_3d73e8;
        case 0x3d73ecu: goto label_3d73ec;
        case 0x3d73f0u: goto label_3d73f0;
        case 0x3d73f4u: goto label_3d73f4;
        case 0x3d73f8u: goto label_3d73f8;
        case 0x3d73fcu: goto label_3d73fc;
        case 0x3d7400u: goto label_3d7400;
        case 0x3d7404u: goto label_3d7404;
        case 0x3d7408u: goto label_3d7408;
        case 0x3d740cu: goto label_3d740c;
        case 0x3d7410u: goto label_3d7410;
        case 0x3d7414u: goto label_3d7414;
        case 0x3d7418u: goto label_3d7418;
        case 0x3d741cu: goto label_3d741c;
        case 0x3d7420u: goto label_3d7420;
        case 0x3d7424u: goto label_3d7424;
        case 0x3d7428u: goto label_3d7428;
        case 0x3d742cu: goto label_3d742c;
        case 0x3d7430u: goto label_3d7430;
        case 0x3d7434u: goto label_3d7434;
        case 0x3d7438u: goto label_3d7438;
        case 0x3d743cu: goto label_3d743c;
        case 0x3d7440u: goto label_3d7440;
        case 0x3d7444u: goto label_3d7444;
        case 0x3d7448u: goto label_3d7448;
        case 0x3d744cu: goto label_3d744c;
        case 0x3d7450u: goto label_3d7450;
        case 0x3d7454u: goto label_3d7454;
        case 0x3d7458u: goto label_3d7458;
        case 0x3d745cu: goto label_3d745c;
        case 0x3d7460u: goto label_3d7460;
        case 0x3d7464u: goto label_3d7464;
        case 0x3d7468u: goto label_3d7468;
        case 0x3d746cu: goto label_3d746c;
        case 0x3d7470u: goto label_3d7470;
        case 0x3d7474u: goto label_3d7474;
        case 0x3d7478u: goto label_3d7478;
        case 0x3d747cu: goto label_3d747c;
        case 0x3d7480u: goto label_3d7480;
        case 0x3d7484u: goto label_3d7484;
        case 0x3d7488u: goto label_3d7488;
        case 0x3d748cu: goto label_3d748c;
        case 0x3d7490u: goto label_3d7490;
        case 0x3d7494u: goto label_3d7494;
        case 0x3d7498u: goto label_3d7498;
        case 0x3d749cu: goto label_3d749c;
        case 0x3d74a0u: goto label_3d74a0;
        case 0x3d74a4u: goto label_3d74a4;
        case 0x3d74a8u: goto label_3d74a8;
        case 0x3d74acu: goto label_3d74ac;
        case 0x3d74b0u: goto label_3d74b0;
        case 0x3d74b4u: goto label_3d74b4;
        case 0x3d74b8u: goto label_3d74b8;
        case 0x3d74bcu: goto label_3d74bc;
        case 0x3d74c0u: goto label_3d74c0;
        case 0x3d74c4u: goto label_3d74c4;
        case 0x3d74c8u: goto label_3d74c8;
        case 0x3d74ccu: goto label_3d74cc;
        case 0x3d74d0u: goto label_3d74d0;
        case 0x3d74d4u: goto label_3d74d4;
        case 0x3d74d8u: goto label_3d74d8;
        case 0x3d74dcu: goto label_3d74dc;
        case 0x3d74e0u: goto label_3d74e0;
        case 0x3d74e4u: goto label_3d74e4;
        case 0x3d74e8u: goto label_3d74e8;
        case 0x3d74ecu: goto label_3d74ec;
        case 0x3d74f0u: goto label_3d74f0;
        case 0x3d74f4u: goto label_3d74f4;
        case 0x3d74f8u: goto label_3d74f8;
        case 0x3d74fcu: goto label_3d74fc;
        case 0x3d7500u: goto label_3d7500;
        case 0x3d7504u: goto label_3d7504;
        case 0x3d7508u: goto label_3d7508;
        case 0x3d750cu: goto label_3d750c;
        case 0x3d7510u: goto label_3d7510;
        case 0x3d7514u: goto label_3d7514;
        case 0x3d7518u: goto label_3d7518;
        case 0x3d751cu: goto label_3d751c;
        case 0x3d7520u: goto label_3d7520;
        case 0x3d7524u: goto label_3d7524;
        case 0x3d7528u: goto label_3d7528;
        case 0x3d752cu: goto label_3d752c;
        case 0x3d7530u: goto label_3d7530;
        case 0x3d7534u: goto label_3d7534;
        case 0x3d7538u: goto label_3d7538;
        case 0x3d753cu: goto label_3d753c;
        case 0x3d7540u: goto label_3d7540;
        case 0x3d7544u: goto label_3d7544;
        case 0x3d7548u: goto label_3d7548;
        case 0x3d754cu: goto label_3d754c;
        case 0x3d7550u: goto label_3d7550;
        case 0x3d7554u: goto label_3d7554;
        case 0x3d7558u: goto label_3d7558;
        case 0x3d755cu: goto label_3d755c;
        case 0x3d7560u: goto label_3d7560;
        case 0x3d7564u: goto label_3d7564;
        case 0x3d7568u: goto label_3d7568;
        case 0x3d756cu: goto label_3d756c;
        case 0x3d7570u: goto label_3d7570;
        case 0x3d7574u: goto label_3d7574;
        case 0x3d7578u: goto label_3d7578;
        case 0x3d757cu: goto label_3d757c;
        case 0x3d7580u: goto label_3d7580;
        case 0x3d7584u: goto label_3d7584;
        case 0x3d7588u: goto label_3d7588;
        case 0x3d758cu: goto label_3d758c;
        case 0x3d7590u: goto label_3d7590;
        case 0x3d7594u: goto label_3d7594;
        case 0x3d7598u: goto label_3d7598;
        case 0x3d759cu: goto label_3d759c;
        default: break;
    }

    ctx->pc = 0x3d73c8u;

label_3d73c8:
    // 0x3d73c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d73cc:
    // 0x3d73cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3d73ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_3d73d0:
    // 0x3d73d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3d73d4:
    // 0x3d73d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d73d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d73d8:
    // 0x3d73d8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3d73d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_3d73dc:
    // 0x3d73dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d73dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d73e0:
    // 0x3d73e0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x3d73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_3d73e4:
    // 0x3d73e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3d73e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d73e8:
    // 0x3d73e8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3d73e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_3d73ec:
    // 0x3d73ec: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3d73ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d73f0:
    // 0x3d73f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3d73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3d73f4:
    // 0x3d73f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3d73f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d73f8:
    // 0x3d73f8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3d73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_3d73fc:
    // 0x3d73fc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3d73fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_3d7400:
    // 0x3d7400: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d7400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3d7404:
    // 0x3d7404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3d7408:
    // 0x3d7408: 0xc0f5c96  jal         func_3D7258
label_3d740c:
    if (ctx->pc == 0x3D740Cu) {
        ctx->pc = 0x3D740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7408u;
        // 0x3d740c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7410u;
        goto label_3d7410;
    }
    ctx->pc = 0x3D7408u;
    SET_GPR_U32(ctx, 31, 0x3D7410u);
    ctx->pc = 0x3D740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7408u;
    // 0x3d740c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7408u, 0x3D7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7410u;
label_3d7410:
    // 0x3d7410: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_3d7414:
    if (ctx->pc == 0x3D7414u) {
        ctx->pc = 0x3D7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7410u;
        // 0x3d7414: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7418u;
        goto label_3d7418;
    }
    ctx->pc = 0x3D7410u;
    {
        const bool branch_taken_0x3d7410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7410u;
        // 0x3d7414: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7410) {
            ctx->pc = 0x3D7570u;
            goto label_3d7570;
        }
    }
    ctx->pc = 0x3D7418u;
label_3d7418:
    // 0x3d7418: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3d7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d741c:
    // 0x3d741c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d741cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7420:
    // 0x3d7420: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_3d7424:
    if (ctx->pc == 0x3D7424u) {
        ctx->pc = 0x3D7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7420u;
        // 0x3d7424: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7428u;
        goto label_3d7428;
    }
    ctx->pc = 0x3D7420u;
    {
        const bool branch_taken_0x3d7420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7420u;
        // 0x3d7424: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7420) {
            ctx->pc = 0x3D756Cu;
            goto label_3d756c;
        }
    }
    ctx->pc = 0x3D7428u;
label_3d7428:
    // 0x3d7428: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3d7428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d742c:
    // 0x3d742c: 0x0  nop
    ctx->pc = 0x3d742cu;
    // NOP
label_3d7430:
    // 0x3d7430: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_3d7434:
    if (ctx->pc == 0x3D7434u) {
        ctx->pc = 0x3D7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7430u;
        // 0x3d7434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7438u;
        goto label_3d7438;
    }
    ctx->pc = 0x3D7430u;
    {
        const bool branch_taken_0x3d7430 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7430u;
        // 0x3d7434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7430) {
            ctx->pc = 0x3D7458u;
            goto label_3d7458;
        }
    }
    ctx->pc = 0x3D7438u;
label_3d7438:
    // 0x3d7438: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x3d7438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d743c:
    // 0x3d743c: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x3d743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_3d7440:
    // 0x3d7440: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d7440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d7444:
    // 0x3d7444: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x3d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_3d7448:
    // 0x3d7448: 0x14440043  bne         $v0, $a0, . + 4 + (0x43 << 2)
label_3d744c:
    if (ctx->pc == 0x3D744Cu) {
        ctx->pc = 0x3D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7448u;
        // 0x3d744c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7450u;
        goto label_3d7450;
    }
    ctx->pc = 0x3D7448u;
    {
        const bool branch_taken_0x3d7448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7448u;
        // 0x3d744c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7448) {
            ctx->pc = 0x3D7558u;
            goto label_3d7558;
        }
    }
    ctx->pc = 0x3D7450u;
label_3d7450:
    // 0x3d7450: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d7454:
    if (ctx->pc == 0x3D7454u) {
        ctx->pc = 0x3D7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7450u;
        // 0x3d7454: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7458u;
        goto label_3d7458;
    }
    ctx->pc = 0x3D7450u;
    {
        const bool branch_taken_0x3d7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7450u;
        // 0x3d7454: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7450) {
            ctx->pc = 0x3D7460u;
            goto label_3d7460;
        }
    }
    ctx->pc = 0x3D7458u;
label_3d7458:
    // 0x3d7458: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x3d7458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d745c:
    // 0x3d745c: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x3d745cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_3d7460:
    // 0x3d7460: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x3d7460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_3d7464:
    // 0x3d7464: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x3d7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_3d7468:
    // 0x3d7468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d7468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d746c:
    // 0x3d746c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7470:
    // 0x3d7470: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d7470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d7474:
    // 0x3d7474: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x3d7474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_3d7478:
    // 0x3d7478: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d7478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d747c:
    // 0x3d747c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3d7480:
    if (ctx->pc == 0x3D7480u) {
        ctx->pc = 0x3D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D747Cu;
        // 0x3d7480: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7484u;
        goto label_3d7484;
    }
    ctx->pc = 0x3D747Cu;
    {
        const bool branch_taken_0x3d747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D747Cu;
        // 0x3d7480: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d747c) {
            ctx->pc = 0x3D7488u;
            goto label_3d7488;
        }
    }
    ctx->pc = 0x3D7484u;
label_3d7484:
    // 0x3d7484: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3d7484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7488:
    // 0x3d7488: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x3d7488u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d748c:
    // 0x3d748c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3d748cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7490:
    // 0x3d7490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d7490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7494:
    // 0x3d7494: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3d7494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d7498:
    // 0x3d7498: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x3d7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_3d749c:
    // 0x3d749c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d749cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d74a0:
    // 0x3d74a0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3d74a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d74a4:
    // 0x3d74a4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d74a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d74a8:
    // 0x3d74a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d74ac:
    // 0x3d74ac: 0x40f809  jalr        $v0
label_3d74b0:
    if (ctx->pc == 0x3D74B0u) {
        ctx->pc = 0x3D74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74ACu;
        // 0x3d74b0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74B4u;
        goto label_3d74b4;
    }
    ctx->pc = 0x3D74ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D74B4u);
        ctx->pc = 0x3D74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74ACu;
        // 0x3d74b0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D74ACu, 0x3D74B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D74B4u;
label_3d74b4:
    // 0x3d74b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d74b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d74b8:
    // 0x3d74b8: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_3d74bc:
    if (ctx->pc == 0x3D74BCu) {
        ctx->pc = 0x3D74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74B8u;
        // 0x3d74bc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74C0u;
        goto label_3d74c0;
    }
    ctx->pc = 0x3D74B8u;
    {
        const bool branch_taken_0x3d74b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d74b8) {
            ctx->pc = 0x3D74BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D74B8u;
            // 0x3d74bc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7554u;
            goto label_3d7554;
        }
    }
    ctx->pc = 0x3D74C0u;
label_3d74c0:
    // 0x3d74c0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_3d74c4:
    if (ctx->pc == 0x3D74C4u) {
        ctx->pc = 0x3D74C8u;
        goto label_3d74c8;
    }
    ctx->pc = 0x3D74C0u;
    {
        const bool branch_taken_0x3d74c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d74c0) {
            ctx->pc = 0x3D74D0u;
            goto label_3d74d0;
        }
    }
    ctx->pc = 0x3D74C8u;
label_3d74c8:
    // 0x3d74c8: 0x10000021  b           . + 4 + (0x21 << 2)
label_3d74cc:
    if (ctx->pc == 0x3D74CCu) {
        ctx->pc = 0x3D74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74C8u;
        // 0x3d74cc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74D0u;
        goto label_3d74d0;
    }
    ctx->pc = 0x3D74C8u;
    {
        const bool branch_taken_0x3d74c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74C8u;
        // 0x3d74cc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d74c8) {
            ctx->pc = 0x3D7550u;
            goto label_3d7550;
        }
    }
    ctx->pc = 0x3D74D0u;
label_3d74d0:
    // 0x3d74d0: 0x52700020  beql        $s3, $s0, . + 4 + (0x20 << 2)
label_3d74d4:
    if (ctx->pc == 0x3D74D4u) {
        ctx->pc = 0x3D74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74D0u;
        // 0x3d74d4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74D8u;
        goto label_3d74d8;
    }
    ctx->pc = 0x3D74D0u;
    {
        const bool branch_taken_0x3d74d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x3d74d0) {
            ctx->pc = 0x3D74D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D74D0u;
            // 0x3d74d4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7554u;
            goto label_3d7554;
        }
    }
    ctx->pc = 0x3D74D8u;
label_3d74d8:
    // 0x3d74d8: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_3d74dc:
    if (ctx->pc == 0x3D74DCu) {
        ctx->pc = 0x3D74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74D8u;
        // 0x3d74dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74E0u;
        goto label_3d74e0;
    }
    ctx->pc = 0x3D74D8u;
    {
        const bool branch_taken_0x3d74d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74D8u;
        // 0x3d74dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d74d8) {
            ctx->pc = 0x3D7548u;
            goto label_3d7548;
        }
    }
    ctx->pc = 0x3D74E0u;
label_3d74e0:
    // 0x3d74e0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3d74e4:
    // 0x3d74e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d74e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d74e8:
    // 0x3d74e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3d74e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d74ec:
    // 0x3d74ec: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d74ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d74f0:
    // 0x3d74f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d74f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d74f4:
    // 0x3d74f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d74f8:
    // 0x3d74f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d74f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d74fc:
    // 0x3d74fc: 0x40f809  jalr        $v0
label_3d7500:
    if (ctx->pc == 0x3D7500u) {
        ctx->pc = 0x3D7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74FCu;
        // 0x3d7500: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7504u;
        goto label_3d7504;
    }
    ctx->pc = 0x3D74FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7504u);
        ctx->pc = 0x3D7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D74FCu;
        // 0x3d7500: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D74FCu, 0x3D7504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7504u;
label_3d7504:
    // 0x3d7504: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d7504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3d7508:
    // 0x3d7508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d7508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d750c:
    // 0x3d750c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d750cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7510:
    // 0x3d7510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7514:
    // 0x3d7514: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d7514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d7518:
    // 0x3d7518: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3d7518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d751c:
    // 0x3d751c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d7520:
    // 0x3d7520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d7520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7524:
    // 0x3d7524: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x3d7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3d7528:
    // 0x3d7528: 0x40f809  jalr        $v0
label_3d752c:
    if (ctx->pc == 0x3D752Cu) {
        ctx->pc = 0x3D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7528u;
        // 0x3d752c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7530u;
        goto label_3d7530;
    }
    ctx->pc = 0x3D7528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7530u);
        ctx->pc = 0x3D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7528u;
        // 0x3d752c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7528u, 0x3D7530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7530u;
label_3d7530:
    // 0x3d7530: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_3d7534:
    if (ctx->pc == 0x3D7534u) {
        ctx->pc = 0x3D7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7530u;
        // 0x3d7534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7538u;
        goto label_3d7538;
    }
    ctx->pc = 0x3D7530u;
    {
        const bool branch_taken_0x3d7530 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7530) {
            ctx->pc = 0x3D7534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7530u;
            // 0x3d7534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7570u;
            goto label_3d7570;
        }
    }
    ctx->pc = 0x3D7538u;
label_3d7538:
    // 0x3d7538: 0x52370006  beql        $s1, $s7, . + 4 + (0x6 << 2)
label_3d753c:
    if (ctx->pc == 0x3D753Cu) {
        ctx->pc = 0x3D753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7538u;
        // 0x3d753c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7540u;
        goto label_3d7540;
    }
    ctx->pc = 0x3D7538u;
    {
        const bool branch_taken_0x3d7538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x3d7538) {
            ctx->pc = 0x3D753Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7538u;
            // 0x3d753c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7554u;
            goto label_3d7554;
        }
    }
    ctx->pc = 0x3D7540u;
label_3d7540:
    // 0x3d7540: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_3d7544:
    if (ctx->pc == 0x3D7544u) {
        ctx->pc = 0x3D7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7540u;
        // 0x3d7544: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7548u;
        goto label_3d7548;
    }
    ctx->pc = 0x3D7540u;
    {
        const bool branch_taken_0x3d7540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x3D7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7540u;
        // 0x3d7544: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7540) {
            ctx->pc = 0x3D7550u;
            goto label_3d7550;
        }
    }
    ctx->pc = 0x3D7548u;
label_3d7548:
    // 0x3d7548: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d754c:
    if (ctx->pc == 0x3D754Cu) {
        ctx->pc = 0x3D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7548u;
        // 0x3d754c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7550u;
        goto label_3d7550;
    }
    ctx->pc = 0x3D7548u;
    {
        const bool branch_taken_0x3d7548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7548u;
        // 0x3d754c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7548) {
            ctx->pc = 0x3D7570u;
            goto label_3d7570;
        }
    }
    ctx->pc = 0x3D7550u;
label_3d7550:
    // 0x3d7550: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3d7550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d7554:
    // 0x3d7554: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d7554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d7558:
    // 0x3d7558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d755c:
    // 0x3d755c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3d7560:
    // 0x3d7560: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d7560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3d7564:
    // 0x3d7564: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_3d7568:
    if (ctx->pc == 0x3D7568u) {
        ctx->pc = 0x3D7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7564u;
        // 0x3d7568: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D756Cu;
        goto label_3d756c;
    }
    ctx->pc = 0x3D7564u;
    {
        const bool branch_taken_0x3d7564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7564u;
        // 0x3d7568: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7564) {
            ctx->pc = 0x3D7430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7430;
        }
    }
    ctx->pc = 0x3D756Cu;
label_3d756c:
    // 0x3d756c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d756cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7570:
    // 0x3d7570: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3d7570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3d7574:
    // 0x3d7574: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x3d7574u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3d7578:
    // 0x3d7578: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x3d7578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d757c:
    // 0x3d757c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3d757cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7580:
    // 0x3d7580: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3d7580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7584:
    // 0x3d7584: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3d7584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7588:
    // 0x3d7588: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3d7588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d758c:
    // 0x3d758c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3d758cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7590:
    // 0x3d7590: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3d7590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7594:
    // 0x3d7594: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d7594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7598:
    // 0x3d7598: 0x3e00008  jr          $ra
label_3d759c:
    if (ctx->pc == 0x3D759Cu) {
        ctx->pc = 0x3D759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7598u;
        // 0x3d759c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D75A0u;
        goto label_fallthrough_0x3d7598;
    }
    ctx->pc = 0x3D7598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7598u;
        // 0x3d759c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7598:
    ctx->pc = 0x3D75A0u;
}
