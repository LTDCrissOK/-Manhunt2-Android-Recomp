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

// Function: sub_00109158
// Address: 0x109158 - 0x109190
void sub_00109158_0x109158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109158_0x109158");
#endif

    ctx->pc = 0x109158u;

    // 0x109158: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10915c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10915Cu;
    {
        const bool branch_taken_0x10915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10915c) {
            ctx->pc = 0x109184u;
            goto label_109184;
        }
    }
    ctx->pc = 0x109164u;
    // 0x109164: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x109168: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x109168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x10916c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x10916cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x109170: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x109170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x109174: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x109174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x109178: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x109178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x10917c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x10917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x109180: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x109180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_109184:
    // 0x109184: 0x3e00008  jr          $ra
    ctx->pc = 0x109184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10918Cu;
    // 0x10918c: 0x0  nop
    ctx->pc = 0x10918cu;
    // NOP
    ctx->pc = 0x109190u;
}
