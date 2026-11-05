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

// Function: sub_0028AED8
// Address: 0x28aed8 - 0x28aef0
void sub_0028AED8_0x28aed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AED8_0x28aed8");
#endif

    ctx->pc = 0x28aed8u;

    // 0x28aed8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28aedc: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28aee0: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x28aee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADD4u, _value); } while (0);
    // 0x28aee4: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x28aee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BADD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADD0u, _value); } while (0);
    // 0x28aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x28AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEE8u;
        // 0x28aeec: 0xac40016c  sw          $zero, 0x16C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AEF0u;
}
