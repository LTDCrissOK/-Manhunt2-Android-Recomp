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

// Function: sub_0039A800
// Address: 0x39a800 - 0x39a820
void sub_0039A800_0x39a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A800_0x39a800");
#endif

    ctx->pc = 0x39a800u;

    // 0x39a800: 0x3e00008  jr          $ra
    ctx->pc = 0x39A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A800u;
        // 0x39a804: 0xdc820010  ld          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A808u;
    // 0x39a808: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39a80c: 0x0  nop
    ctx->pc = 0x39a80cu;
    // NOP
    // 0x39a810: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39a814: 0x0  nop
    ctx->pc = 0x39a814u;
    // NOP
    // 0x39a818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39a81c: 0x0  nop
    ctx->pc = 0x39a81cu;
    // NOP
    ctx->pc = 0x39a820u;
}
