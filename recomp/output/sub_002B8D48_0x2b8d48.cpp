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

// Function: sub_002B8D48
// Address: 0x2b8d48 - 0x2b8d80
void sub_002B8D48_0x2b8d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8D48_0x2b8d48");
#endif

    ctx->pc = 0x2b8d48u;

    // 0x2b8d48: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2b8d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d50: 0x24423900  addiu       $v0, $v0, 0x3900
    ctx->pc = 0x2b8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14592));
    // 0x2b8d54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b8d58: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2b8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2b8d5c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2b8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2b8d60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b8d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d64: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b8d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2b8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2b8d6c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2b8d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2b8d70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b8d74: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b8d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D78u;
        // 0x2b8d7c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8D80u;
}
