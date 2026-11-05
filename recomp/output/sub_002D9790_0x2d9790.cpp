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

// Function: sub_002D9790
// Address: 0x2d9790 - 0x2d98c8
void sub_002D9790_0x2d9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9790_0x2d9790");
#endif

    switch (ctx->pc) {
        case 0x2d97c8u: goto label_2d97c8;
        case 0x2d97e0u: goto label_2d97e0;
        case 0x2d97f0u: goto label_2d97f0;
        case 0x2d9850u: goto label_2d9850;
        case 0x2d9868u: goto label_2d9868;
        default: break;
    }

    ctx->pc = 0x2d9790u;

    // 0x2d9790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d9794: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2d9794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2d9798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d979c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d97a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d97a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d97a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d97a8: 0x244434c0  addiu       $a0, $v0, 0x34C0
    ctx->pc = 0x2d97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x2d97ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d97acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d97b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d97b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34C4u));
    // 0x2d97b8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d97b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34CCu, _value); } while (0);
    // 0x2d97bc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D97BCu;
    {
        const bool branch_taken_0x2d97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97BCu;
        // 0x2d97c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97bc) {
            ctx->pc = 0x2D988Cu;
            goto label_2d988c;
        }
    }
    ctx->pc = 0x2D97C4u;
    // 0x2d97c4: 0x0  nop
    ctx->pc = 0x2d97c4u;
    // NOP
label_2d97c8:
    // 0x2d97c8: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x2d97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d97cc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D97CCu;
    {
        const bool branch_taken_0x2d97cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97CCu;
        // 0x2d97d0: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97cc) {
            ctx->pc = 0x2D9814u;
            goto label_2d9814;
        }
    }
    ctx->pc = 0x2D97D4u;
    // 0x2d97d4: 0x249003ec  addiu       $s0, $a0, 0x3EC
    ctx->pc = 0x2d97d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1004));
    // 0x2d97d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d97d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97dc: 0x0  nop
    ctx->pc = 0x2d97dcu;
    // NOP
label_2d97e0:
    // 0x2d97e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d97e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d97e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D97E8u;
    SET_GPR_U32(ctx, 31, 0x2D97F0u);
    ctx->pc = 0x2D97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97E8u;
    // 0x2d97ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D97E8u, 0x2D97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97F0u;
label_2d97f0:
    // 0x2d97f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d97f4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D97F4u;
    {
        const bool branch_taken_0x2d97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97F4u;
        // 0x2d97f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97f4) {
            ctx->pc = 0x2D98ACu;
            goto label_2d98ac;
        }
    }
    ctx->pc = 0x2D97FCu;
    // 0x2d97fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d97fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d9800: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x2d9800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d9804: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D9804u;
    {
        const bool branch_taken_0x2d9804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9804u;
        // 0x2d9808: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9804) {
            ctx->pc = 0x2D97E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d97e0;
        }
    }
    ctx->pc = 0x2D980Cu;
    // 0x2d980c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D980Cu;
    {
        const bool branch_taken_0x2d980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D980Cu;
        // 0x2d9810: 0x266334c0  addiu       $v1, $s3, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d980c) {
            ctx->pc = 0x2D9878u;
            goto label_2d9878;
        }
    }
    ctx->pc = 0x2D9814u;
label_2d9814:
    // 0x2d9814: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2d9814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d9818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9818u;
    {
        const bool branch_taken_0x2d9818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9818u;
        // 0x2d981c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9818) {
            ctx->pc = 0x2D9828u;
            goto label_2d9828;
        }
    }
    ctx->pc = 0x2D9820u;
    // 0x2d9820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9820u;
    {
        const bool branch_taken_0x2d9820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9820u;
        // 0x2d9824: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9820) {
            ctx->pc = 0x2D982Cu;
            goto label_2d982c;
        }
    }
    ctx->pc = 0x2D9828u;
label_2d9828:
    // 0x2d9828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d982c:
    // 0x2d982c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D982Cu;
    {
        const bool branch_taken_0x2d982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D982Cu;
        // 0x2d9830: 0x266334c0  addiu       $v1, $s3, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d982c) {
            ctx->pc = 0x2D9878u;
            goto label_2d9878;
        }
    }
    ctx->pc = 0x2D9834u;
    // 0x2d9834: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x2d9834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d9838: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9838u;
    {
        const bool branch_taken_0x2d9838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9838) {
            ctx->pc = 0x2D983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9838u;
            // 0x2d983c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9844u;
            goto label_2d9844;
        }
    }
    ctx->pc = 0x2D9840u;
    // 0x2d9840: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2d9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2d9844:
    // 0x2d9844: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9848: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2D9848u;
    SET_GPR_U32(ctx, 31, 0x2D9850u);
    ctx->pc = 0x2D984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9848u;
    // 0x2d984c: 0x24a512d0  addiu       $a1, $a1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2D9848u, 0x2D9850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9850u;
label_2d9850:
    // 0x2d9850: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9850u;
    {
        const bool branch_taken_0x2d9850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9850u;
        // 0x2d9854: 0x266334c0  addiu       $v1, $s3, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9850) {
            ctx->pc = 0x2D9878u;
            goto label_2d9878;
        }
    }
    ctx->pc = 0x2D9858u;
    // 0x2d9858: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d985c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9860: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9860u;
    SET_GPR_U32(ctx, 31, 0x2D9868u);
    ctx->pc = 0x2D9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9860u;
    // 0x2d9864: 0x24a512d8  addiu       $a1, $a1, 0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9860u, 0x2D9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9868u;
label_2d9868:
    // 0x2d9868: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d986c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D986Cu;
    {
        const bool branch_taken_0x2d986c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D986Cu;
        // 0x2d9870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d986c) {
            ctx->pc = 0x2D98ACu;
            goto label_2d98ac;
        }
    }
    ctx->pc = 0x2D9874u;
    // 0x2d9874: 0x266334c0  addiu       $v1, $s3, 0x34C0
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
label_2d9878:
    // 0x2d9878: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d987c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D987Cu;
    {
        const bool branch_taken_0x2d987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d987c) {
            ctx->pc = 0x2D9880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D987Cu;
            // 0x2d9880: 0x266234c0  addiu       $v0, $s3, 0x34C0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9890u;
            goto label_2d9890;
        }
    }
    ctx->pc = 0x2D9884u;
    // 0x2d9884: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d9888: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2d9888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2d988c:
    // 0x2d988c: 0x266234c0  addiu       $v0, $s3, 0x34C0
    ctx->pc = 0x2d988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13504));
label_2d9890:
    // 0x2d9890: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d9894: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9894u;
    {
        const bool branch_taken_0x2d9894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9894u;
        // 0x2d9898: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9894) {
            ctx->pc = 0x2D98A0u;
            goto label_2d98a0;
        }
    }
    ctx->pc = 0x2D989Cu;
    // 0x2d989c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d98a0:
    // 0x2d98a0: 0x5480ffc9  bnel        $a0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2D98A0u;
    {
        const bool branch_taken_0x2d98a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d98a0) {
            ctx->pc = 0x2D98A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D98A0u;
            // 0x2d98a4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D97C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d97c8;
        }
    }
    ctx->pc = 0x2D98A8u;
    // 0x2d98a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d98a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d98ac:
    // 0x2d98ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d98acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d98b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d98b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d98b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d98b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d98b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d98b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d98bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d98bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d98c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D98C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98C0u;
        // 0x2d98c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D98C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D98C8u;
}
