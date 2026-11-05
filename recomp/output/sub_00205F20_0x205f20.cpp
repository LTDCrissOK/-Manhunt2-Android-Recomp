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

// Function: sub_00205F20
// Address: 0x205f20 - 0x205f48
void sub_00205F20_0x205f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F20_0x205f20");
#endif

    switch (ctx->pc) {
        case 0x205f30u: goto label_205f30;
        default: break;
    }

    ctx->pc = 0x205f20u;

    // 0x205f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205f28: 0xc0e5e3e  jal         func_3978F8
    ctx->pc = 0x205F28u;
    SET_GPR_U32(ctx, 31, 0x205F30u);
    ctx->pc = 0x205F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F28u;
    // 0x205f2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3978F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3978F8u, 0x205F28u, 0x205F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F30u;
label_205f30:
    // 0x205f30: 0xf  sync
    ctx->pc = 0x205f30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x205f34: 0x42000038  ei
    ctx->pc = 0x205f34u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x205f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f40: 0x3e00008  jr          $ra
    ctx->pc = 0x205F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F40u;
        // 0x205f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F48u;
}
