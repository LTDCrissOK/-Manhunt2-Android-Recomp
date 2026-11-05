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

// Function: sub_001B4D30
// Address: 0x1b4d30 - 0x1b4d60
void sub_001B4D30_0x1b4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D30_0x1b4d30");
#endif

    ctx->pc = 0x1b4d30u;

    // 0x1b4d30: 0x8c85011c  lw          $a1, 0x11C($a0)
    ctx->pc = 0x1b4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x1b4d34: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4D34u;
    {
        const bool branch_taken_0x1b4d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D34u;
        // 0x1b4d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d34) {
            ctx->pc = 0x1B4D50u;
            goto label_1b4d50;
        }
    }
    ctx->pc = 0x1B4D3Cu;
    // 0x1b4d3c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1b4d40: 0x8c440338  lw          $a0, 0x338($v0)
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1b4d44: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x1b4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x1b4d48: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1b4d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1b4d4c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x1b4d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b4d50:
    // 0x1b4d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D58u;
    // 0x1b4d58: 0x0  nop
    ctx->pc = 0x1b4d58u;
    // NOP
    // 0x1b4d5c: 0x0  nop
    ctx->pc = 0x1b4d5cu;
    // NOP
    ctx->pc = 0x1b4d60u;
}
