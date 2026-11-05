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

// Function: sub_002C1710
// Address: 0x2c1710 - 0x2c1748
void sub_002C1710_0x2c1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1710_0x2c1710");
#endif

    ctx->pc = 0x2c1710u;

    // 0x2c1710: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1714: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1714u;
    {
        const bool branch_taken_0x2c1714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1714) {
            ctx->pc = 0x2C173Cu;
            goto label_2c173c;
        }
    }
    ctx->pc = 0x2C171Cu;
    // 0x2c171c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c1720: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1720u;
    {
        const bool branch_taken_0x2c1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1720u;
        // 0x2c1724: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1720) {
            ctx->pc = 0x2C172Cu;
            goto label_2c172c;
        }
    }
    ctx->pc = 0x2C1728u;
    // 0x2c1728: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c1728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2c172c:
    // 0x2c172c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c1730: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c1734: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1734u;
        // 0x2c1738: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C173Cu;
label_2c173c:
    // 0x2c173c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C173Cu;
        // 0x2c1740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1744u;
    // 0x2c1744: 0x0  nop
    ctx->pc = 0x2c1744u;
    // NOP
    ctx->pc = 0x2c1748u;
}
