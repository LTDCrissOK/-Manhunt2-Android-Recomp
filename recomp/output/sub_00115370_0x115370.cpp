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

// Function: sub_00115370
// Address: 0x115370 - 0x115390
void sub_00115370_0x115370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115370_0x115370");
#endif

    switch (ctx->pc) {
        case 0x115384u: goto label_115384;
        default: break;
    }

    ctx->pc = 0x115370u;

    // 0x115370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11537c: 0xc044aba  jal         func_112AE8
    ctx->pc = 0x11537Cu;
    SET_GPR_U32(ctx, 31, 0x115384u);
    ctx->pc = 0x115380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11537Cu;
    // 0x115380: 0xac8200c4  sw          $v0, 0xC4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE8u, 0x11537Cu, 0x115384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115384u;
label_115384:
    // 0x115384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115388: 0x3e00008  jr          $ra
    ctx->pc = 0x115388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115390u;
}
