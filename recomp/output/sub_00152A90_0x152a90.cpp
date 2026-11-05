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

// Function: sub_00152A90
// Address: 0x152a90 - 0x152ab8
void sub_00152A90_0x152a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152A90_0x152a90");
#endif

    switch (ctx->pc) {
        case 0x152aa4u: goto label_152aa4;
        default: break;
    }

    ctx->pc = 0x152a90u;

    // 0x152a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x152a9c: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x152A9Cu;
    SET_GPR_U32(ctx, 31, 0x152AA4u);
    ctx->pc = 0x152AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A9Cu;
    // 0x152aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x152A9Cu, 0x152AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AA4u;
label_152aa4:
    // 0x152aa4: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x152aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x152aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152aac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x152AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AB0u;
        // 0x152ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152AB8u;
}
