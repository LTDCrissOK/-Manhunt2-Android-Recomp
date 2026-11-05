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

// Function: sub_0036EB60
// Address: 0x36eb60 - 0x36eba8
void sub_0036EB60_0x36eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB60_0x36eb60");
#endif

    switch (ctx->pc) {
        case 0x36eb80u: goto label_36eb80;
        default: break;
    }

    ctx->pc = 0x36eb60u;

    // 0x36eb60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36eb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36eb64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36eb68: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36eb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36eb70: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36eb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36eb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb78: 0xc0dc22a  jal         func_3708A8
    ctx->pc = 0x36EB78u;
    SET_GPR_U32(ctx, 31, 0x36EB80u);
    ctx->pc = 0x36EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB78u;
    // 0x36eb7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3708A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3708A8u, 0x36EB78u, 0x36EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB80u;
label_36eb80:
    // 0x36eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb84: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB84u;
        // 0x36eb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB8Cu;
    // 0x36eb8c: 0x0  nop
    ctx->pc = 0x36eb8cu;
    // NOP
    // 0x36eb90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36eb94: 0x0  nop
    ctx->pc = 0x36eb94u;
    // NOP
    // 0x36eb98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36eb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36eb9c: 0x0  nop
    ctx->pc = 0x36eb9cu;
    // NOP
    // 0x36eba0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36eba4: 0x0  nop
    ctx->pc = 0x36eba4u;
    // NOP
    ctx->pc = 0x36eba8u;
}
