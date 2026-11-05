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

// Function: sub_001046B0
// Address: 0x1046b0 - 0x104870
void sub_001046B0_0x1046b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001046B0_0x1046b0");
#endif

    switch (ctx->pc) {
        case 0x1046f0u: goto label_1046f0;
        case 0x1046f8u: goto label_1046f8;
        case 0x104728u: goto label_104728;
        case 0x104768u: goto label_104768;
        case 0x104780u: goto label_104780;
        case 0x104798u: goto label_104798;
        case 0x1047f8u: goto label_1047f8;
        case 0x104800u: goto label_104800;
        default: break;
    }

    ctx->pc = 0x1046b0u;

    // 0x1046b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1046b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1046b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1046b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1046b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1046b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1046bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1046bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1046c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1046c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1046c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1046c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1046cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1046ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1046d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1046d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1046d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1046d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1046dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1046dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1046e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1046e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1046E4u;
    {
        const bool branch_taken_0x1046e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E4u;
        // 0x1046e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046e4) {
            ctx->pc = 0x104708u;
            goto label_104708;
        }
    }
    ctx->pc = 0x1046ECu;
    // 0x1046ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1046ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1046f0:
    // 0x1046f0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1046F0u;
    SET_GPR_U32(ctx, 31, 0x1046F8u);
    ctx->pc = 0x1046F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046F0u;
    // 0x1046f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1046F0u, 0x1046F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046F8u;
label_1046f8:
    // 0x1046f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1046f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1046fc: 0x0  nop
    ctx->pc = 0x1046fcu;
    // NOP
    // 0x104700: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104700u;
    {
        const bool branch_taken_0x104700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104700) {
            ctx->pc = 0x104704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104700u;
            // 0x104704: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1046F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1046f0;
        }
    }
    ctx->pc = 0x104708u;
label_104708:
    // 0x104708: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x104708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10470c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x104710: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x104710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x104714: 0x16710007  bne         $s3, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x104714u;
    {
        const bool branch_taken_0x104714 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x104718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104714u;
        // 0x104718: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104714) {
            ctx->pc = 0x104734u;
            goto label_104734;
        }
    }
    ctx->pc = 0x10471Cu;
    // 0x10471c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104720: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x104720u;
    SET_GPR_U32(ctx, 31, 0x104728u);
    ctx->pc = 0x104724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104720u;
    // 0x104724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x104720u, 0x104728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104728u;
label_104728:
    // 0x104728: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x104728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10472c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x10472Cu;
    {
        const bool branch_taken_0x10472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10472Cu;
        // 0x104730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10472c) {
            ctx->pc = 0x104850u;
            goto label_104850;
        }
    }
    ctx->pc = 0x104734u;
label_104734:
    // 0x104734: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x104734u;
    {
        const bool branch_taken_0x104734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x104738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104734u;
        // 0x104738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104734) {
            ctx->pc = 0x10474Cu;
            goto label_10474c;
        }
    }
    ctx->pc = 0x10473Cu;
    // 0x10473c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10473cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104740: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x104740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x104744u;
    {
        const bool branch_taken_0x104744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104744u;
        // 0x104748: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104744) {
            ctx->pc = 0x104778u;
            goto label_104778;
        }
    }
    ctx->pc = 0x10474Cu;
label_10474c:
    // 0x10474c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10474cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x104750: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x104750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x104754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10475c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104760: 0xc0406dc  jal         func_101B70
    ctx->pc = 0x104760u;
    SET_GPR_U32(ctx, 31, 0x104768u);
    ctx->pc = 0x104764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104760u;
    // 0x104764: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B70u, 0x104760u, 0x104768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104768u;
label_104768:
    // 0x104768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x104768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10476c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10476cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104770: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x104770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104774: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x104774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_104778:
    // 0x104778: 0xc040708  jal         func_101C20
    ctx->pc = 0x104778u;
    SET_GPR_U32(ctx, 31, 0x104780u);
    ctx->pc = 0x101C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C20u, 0x104778u, 0x104780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104780u;
label_104780:
    // 0x104780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104780u;
    {
        const bool branch_taken_0x104780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104780u;
        // 0x104784: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104780) {
            ctx->pc = 0x104790u;
            goto label_104790;
        }
    }
    ctx->pc = 0x104788u;
    // 0x104788: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x104788u;
    {
        const bool branch_taken_0x104788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104788u;
        // 0x10478c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104788) {
            ctx->pc = 0x104850u;
            goto label_104850;
        }
    }
    ctx->pc = 0x104790u;
label_104790:
    // 0x104790: 0xc0408e0  jal         func_102380
    ctx->pc = 0x104790u;
    SET_GPR_U32(ctx, 31, 0x104798u);
    ctx->pc = 0x104794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104790u;
    // 0x104794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102380u, 0x104790u, 0x104798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104798u;
label_104798:
    // 0x104798: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x104798u;
    {
        const bool branch_taken_0x104798 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104798u;
        // 0x10479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104798) {
            ctx->pc = 0x1047ACu;
            goto label_1047ac;
        }
    }
    ctx->pc = 0x1047A0u;
    // 0x1047a0: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x1047a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1047a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1047A4u;
    {
        const bool branch_taken_0x1047a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1047a4) {
            ctx->pc = 0x1047A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1047A4u;
            // 0x1047a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1047B4u;
            goto label_1047b4;
        }
    }
    ctx->pc = 0x1047ACu;
label_1047ac:
    // 0x1047ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1047acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1047b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1047b4:
    // 0x1047b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1047B4u;
    {
        const bool branch_taken_0x1047b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047B4u;
        // 0x1047b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047b4) {
            ctx->pc = 0x1047C0u;
            goto label_1047c0;
        }
    }
    ctx->pc = 0x1047BCu;
    // 0x1047bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1047c0:
    // 0x1047c0: 0x14730009  bne         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1047C0u;
    {
        const bool branch_taken_0x1047c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1047c0) {
            ctx->pc = 0x1047E8u;
            goto label_1047e8;
        }
    }
    ctx->pc = 0x1047C8u;
    // 0x1047c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1047cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1047CCu;
    {
        const bool branch_taken_0x1047cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047CCu;
        // 0x1047d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047cc) {
            ctx->pc = 0x1047D8u;
            goto label_1047d8;
        }
    }
    ctx->pc = 0x1047D4u;
    // 0x1047d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1047d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1047d8:
    // 0x1047d8: 0x50910014  beql        $a0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1047D8u;
    {
        const bool branch_taken_0x1047d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x1047d8) {
            ctx->pc = 0x1047DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1047D8u;
            // 0x1047dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10482Cu;
            goto label_10482c;
        }
    }
    ctx->pc = 0x1047E0u;
    // 0x1047e0: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1047E0u;
    {
        const bool branch_taken_0x1047e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1047e0) {
            ctx->pc = 0x1047E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1047E0u;
            // 0x1047e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10482Cu;
            goto label_10482c;
        }
    }
    ctx->pc = 0x1047E8u;
label_1047e8:
    // 0x1047e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1047E8u;
    {
        const bool branch_taken_0x1047e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047E8u;
        // 0x1047ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047e8) {
            ctx->pc = 0x104810u;
            goto label_104810;
        }
    }
    ctx->pc = 0x1047F0u;
    // 0x1047f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1047f4: 0x0  nop
    ctx->pc = 0x1047f4u;
    // NOP
label_1047f8:
    // 0x1047f8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1047F8u;
    SET_GPR_U32(ctx, 31, 0x104800u);
    ctx->pc = 0x1047FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047F8u;
    // 0x1047fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1047F8u, 0x104800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104800u;
label_104800:
    // 0x104800: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104804: 0x0  nop
    ctx->pc = 0x104804u;
    // NOP
    // 0x104808: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104808u;
    {
        const bool branch_taken_0x104808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104808) {
            ctx->pc = 0x10480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104808u;
            // 0x10480c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1047F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1047f8;
        }
    }
    ctx->pc = 0x104810u;
label_104810:
    // 0x104810: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x104810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x104814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104818: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x104818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10481c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x104820: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x104820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x104824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x104824u;
    {
        const bool branch_taken_0x104824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104824u;
        // 0x104828: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104824) {
            ctx->pc = 0x104850u;
            goto label_104850;
        }
    }
    ctx->pc = 0x10482Cu;
label_10482c:
    // 0x10482c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x104830: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x104830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x104834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104838: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104838u;
    {
        const bool branch_taken_0x104838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104838u;
        // 0x10483c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104838) {
            ctx->pc = 0x104844u;
            goto label_104844;
        }
    }
    ctx->pc = 0x104840u;
    // 0x104840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_104844:
    // 0x104844: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x104844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x104848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10484c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x10484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_104850:
    // 0x104850: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x104850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104854: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x104854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104858: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x104858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10485c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x10485cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104860: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104864: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x104864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x104868: 0x3e00008  jr          $ra
    ctx->pc = 0x104868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104868u;
        // 0x10486c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104870u;
}
