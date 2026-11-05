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

// Function: sub_002ACA18
// Address: 0x2aca18 - 0x2aca40
void sub_002ACA18_0x2aca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA18_0x2aca18");
#endif

    ctx->pc = 0x2aca18u;

    // 0x2aca18: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x2aca18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2aca1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2aca1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca20: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x2aca20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2aca24: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2aca24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2aca28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2aca2c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2aca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aca30: 0xacc42c18  sw          $a0, 0x2C18($a2)
    ctx->pc = 0x2aca30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11288), GPR_U32(ctx, 4));
    // 0x2aca34: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA34u;
        // 0x2aca38: 0xaca22c14  sw          $v0, 0x2C14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA3Cu;
    // 0x2aca3c: 0x0  nop
    ctx->pc = 0x2aca3cu;
    // NOP
    ctx->pc = 0x2aca40u;
}
