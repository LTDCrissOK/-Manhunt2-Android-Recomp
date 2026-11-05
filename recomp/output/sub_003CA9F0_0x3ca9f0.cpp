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

// Function: sub_003CA9F0
// Address: 0x3ca9f0 - 0x3caa18
void sub_003CA9F0_0x3ca9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA9F0_0x3ca9f0");
#endif

    switch (ctx->pc) {
        case 0x3caa00u: goto label_3caa00;
        default: break;
    }

    ctx->pc = 0x3ca9f0u;

    // 0x3ca9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ca9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ca9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ca9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ca9f8: 0xc0f2674  jal         func_3C99D0
    ctx->pc = 0x3CA9F8u;
    SET_GPR_U32(ctx, 31, 0x3CAA00u);
    ctx->pc = 0x3CA9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA9F8u;
    // 0x3ca9fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99D0u, 0x3CA9F8u, 0x3CAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAA00u;
label_3caa00:
    // 0x3caa00: 0xf  sync
    ctx->pc = 0x3caa00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3caa04: 0x42000038  ei
    ctx->pc = 0x3caa04u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3caa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3caa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3caa0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3caa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caa10: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA10u;
        // 0x3caa14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAA18u;
}
