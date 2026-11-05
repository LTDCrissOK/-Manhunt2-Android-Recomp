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

// Function: sub_003D4B00
// Address: 0x3d4b00 - 0x3d4b18
void sub_003D4B00_0x3d4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4B00_0x3d4b00");
#endif

    switch (ctx->pc) {
        case 0x3d4b08u: goto label_3d4b08;
        default: break;
    }

    ctx->pc = 0x3d4b00u;

    // 0x3d4b00: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D4B00u;
    SET_GPR_U32(ctx, 31, 0x3D4B08u);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D4B00u, 0x3D4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B08u;
label_3d4b08:
    // 0x3d4b08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d4b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B0Cu;
        // 0x3d4b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B14u;
    // 0x3d4b14: 0x0  nop
    ctx->pc = 0x3d4b14u;
    // NOP
    ctx->pc = 0x3d4b18u;
}
