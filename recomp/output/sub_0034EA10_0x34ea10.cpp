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

// Function: sub_0034EA10
// Address: 0x34ea10 - 0x34ea38
void sub_0034EA10_0x34ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EA10_0x34ea10");
#endif

    ctx->pc = 0x34ea10u;

    // 0x34ea10: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x34ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34ea14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ea18: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x34ea18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34ea1c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x34ea1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x34ea20: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x34EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA24u;
        // 0x34ea28: 0xac832ce4  sw          $v1, 0x2CE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EA2Cu;
    // 0x34ea2c: 0x0  nop
    ctx->pc = 0x34ea2cu;
    // NOP
    // 0x34ea30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ea34: 0x0  nop
    ctx->pc = 0x34ea34u;
    // NOP
    ctx->pc = 0x34ea38u;
}
