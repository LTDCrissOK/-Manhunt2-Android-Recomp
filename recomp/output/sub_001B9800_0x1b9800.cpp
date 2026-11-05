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

// Function: sub_001B9800
// Address: 0x1b9800 - 0x1b9898
void sub_001B9800_0x1b9800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9800_0x1b9800");
#endif

    switch (ctx->pc) {
        case 0x1b9818u: goto label_1b9818;
        case 0x1b9848u: goto label_1b9848;
        default: break;
    }

    ctx->pc = 0x1b9800u;

    // 0x1b9800: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1b9800u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9808: 0xad800408  sw          $zero, 0x408($t4)
    ctx->pc = 0x1b9808u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 1032), GPR_U32(ctx, 0));
    // 0x1b980c: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x1b980cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b9810: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9814: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x1b9814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b9818:
    // 0x1b9818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b9818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b981c: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x1b981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1b9820: 0x8c820190  lw          $v0, 0x190($a0)
    ctx->pc = 0x1b9820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x1b9824: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9824u;
    {
        const bool branch_taken_0x1b9824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x1B9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9824u;
        // 0x1b9828: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9824) {
            ctx->pc = 0x1B9838u;
            goto label_1b9838;
        }
    }
    ctx->pc = 0x1B982Cu;
    // 0x1b982c: 0xac820194  sw          $v0, 0x194($a0)
    ctx->pc = 0x1b982cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 2));
    // 0x1b9830: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B9830u;
    {
        const bool branch_taken_0x1b9830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9830u;
        // 0x1b9834: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9830) {
            ctx->pc = 0x1B987Cu;
            goto label_1b987c;
        }
    }
    ctx->pc = 0x1B9838u;
label_1b9838:
    // 0x1b9838: 0x10c50009  beq         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9838u;
    {
        const bool branch_taken_0x1b9838 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9838u;
        // 0x1b983c: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9838) {
            ctx->pc = 0x1B9860u;
            goto label_1b9860;
        }
    }
    ctx->pc = 0x1B9840u;
    // 0x1b9840: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b9844: 0x0  nop
    ctx->pc = 0x1b9844u;
    // NOP
label_1b9848:
    // 0x1b9848: 0x645818  mult        $t3, $v1, $a0
    ctx->pc = 0x1b9848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1b984c: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x1b984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1b9850: 0x8c430190  lw          $v1, 0x190($v0)
    ctx->pc = 0x1b9850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x1b9854: 0x0  nop
    ctx->pc = 0x1b9854u;
    // NOP
    // 0x1b9858: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B9858u;
    {
        const bool branch_taken_0x1b9858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9858u;
        // 0x1b985c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9858) {
            ctx->pc = 0x1B9848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9848;
        }
    }
    ctx->pc = 0x1B9860u;
label_1b9860:
    // 0x1b9860: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x1b9860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9864: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1b9868: 0xac670194  sw          $a3, 0x194($v1)
    ctx->pc = 0x1b9868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 7));
    // 0x1b986c: 0x8d820408  lw          $v0, 0x408($t4)
    ctx->pc = 0x1b986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1032)));
    // 0x1b9870: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b9870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b9874: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9874u;
    {
        const bool branch_taken_0x1b9874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9874) {
            ctx->pc = 0x1B9878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9874u;
            // 0x1b9878: 0xad870408  sw          $a3, 0x408($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 1032), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B987Cu;
            goto label_1b987c;
        }
    }
    ctx->pc = 0x1B987Cu;
label_1b987c:
    // 0x1b987c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b987cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9880: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1b9880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b9884: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1B9884u;
    {
        const bool branch_taken_0x1b9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9884u;
        // 0x1b9888: 0xc91018  mult        $v0, $a2, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9884) {
            ctx->pc = 0x1B9818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9818;
        }
    }
    ctx->pc = 0x1B988Cu;
    // 0x1b988c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9894u;
    // 0x1b9894: 0x0  nop
    ctx->pc = 0x1b9894u;
    // NOP
    ctx->pc = 0x1b9898u;
}
