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

// Function: sub_00131E50
// Address: 0x131e50 - 0x131e80
void sub_00131E50_0x131e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E50_0x131e50");
#endif

    ctx->pc = 0x131e50u;

    // 0x131e50: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x131e54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x131e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131e58: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x131e5c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x131e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x131e60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x131e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e64: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x131e64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x131e68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x131e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x131e70: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x131e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x131e74: 0x3e00008  jr          $ra
    ctx->pc = 0x131E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E74u;
        // 0x131e78: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E7Cu;
    // 0x131e7c: 0x0  nop
    ctx->pc = 0x131e7cu;
    // NOP
    ctx->pc = 0x131e80u;
}
