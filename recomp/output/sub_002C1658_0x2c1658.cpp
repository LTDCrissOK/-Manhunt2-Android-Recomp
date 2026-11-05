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

// Function: sub_002C1658
// Address: 0x2c1658 - 0x2c1690
void sub_002C1658_0x2c1658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1658_0x2c1658");
#endif

    ctx->pc = 0x2c1658u;

    // 0x2c1658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c165c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c165cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c1660: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2c1660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2c1664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1664u;
    {
        const bool branch_taken_0x2c1664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1664u;
        // 0x2c1668: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1664) {
            ctx->pc = 0x2C1674u;
            goto label_2c1674;
        }
    }
    ctx->pc = 0x2C166Cu;
    // 0x2c166c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C166Cu;
    {
        const bool branch_taken_0x2c166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C166Cu;
        // 0x2c1670: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c166c) {
            ctx->pc = 0x2C1678u;
            goto label_2c1678;
        }
    }
    ctx->pc = 0x2C1674u;
label_2c1674:
    // 0x2c1674: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2c1674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2c1678:
    // 0x2c1678: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c167c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c167cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c1684: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1684u;
        // 0x2c1688: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C168Cu;
    // 0x2c168c: 0x0  nop
    ctx->pc = 0x2c168cu;
    // NOP
    ctx->pc = 0x2c1690u;
}
