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

// Function: sub_0020AC28
// Address: 0x20ac28 - 0x20ac58
void sub_0020AC28_0x20ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC28_0x20ac28");
#endif

    ctx->pc = 0x20ac28u;

    // 0x20ac28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20ac2c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x20ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x20ac30: 0x24420e30  addiu       $v0, $v0, 0xE30
    ctx->pc = 0x20ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
    // 0x20ac34: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x20ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x20ac38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20ac3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20ac3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac40: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20ac44: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x20ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x20ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC48u;
        // 0x20ac4c: 0xa0800048  sb          $zero, 0x48($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC50u;
    // 0x20ac50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20ac54: 0x0  nop
    ctx->pc = 0x20ac54u;
    // NOP
    ctx->pc = 0x20ac58u;
}
