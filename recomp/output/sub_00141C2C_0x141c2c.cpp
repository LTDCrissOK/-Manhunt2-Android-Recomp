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

// Function: sub_00141C2C
// Address: 0x141c2c - 0x141c50
void sub_00141C2C_0x141c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141C2C_0x141c2c");
#endif

    switch (ctx->pc) {
        case 0x141c34u: goto label_141c34;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        default: break;
    }

    ctx->pc = 0x141c2cu;

    // 0x141c2c: 0xc050764  jal         func_141D90
    ctx->pc = 0x141C2Cu;
    SET_GPR_U32(ctx, 31, 0x141C34u);
    ctx->pc = 0x141C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C2Cu;
    // 0x141c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D90u, 0x141C2Cu, 0x141C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C34u;
label_141c34:
    // 0x141c34: 0xc0507ee  jal         func_141FB8
    ctx->pc = 0x141C34u;
    SET_GPR_U32(ctx, 31, 0x141C3Cu);
    ctx->pc = 0x141C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C34u;
    // 0x141c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141FB8u, 0x141C34u, 0x141C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C3Cu;
label_141c3c:
    // 0x141c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141c40:
    // 0x141c40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141c44: 0x3e00008  jr          $ra
    ctx->pc = 0x141C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C44u;
        // 0x141c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141C4Cu;
    // 0x141c4c: 0x0  nop
    ctx->pc = 0x141c4cu;
    // NOP
    ctx->pc = 0x141c50u;
}
