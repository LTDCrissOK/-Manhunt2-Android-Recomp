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

// Function: sub_0035D7A0
// Address: 0x35d7a0 - 0x35d7b8
void sub_0035D7A0_0x35d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D7A0_0x35d7a0");
#endif

    ctx->pc = 0x35d7a0u;

    // 0x35d7a0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x35d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x35d7a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x35d7a8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x35d7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x35d7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7B0u;
        // 0x35d7b4: 0xac83caf4  sw          $v1, -0x350C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294953716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D7B8u;
}
