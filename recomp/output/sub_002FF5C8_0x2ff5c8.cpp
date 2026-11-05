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

// Function: sub_002FF5C8
// Address: 0x2ff5c8 - 0x2ff5f0
void sub_002FF5C8_0x2ff5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF5C8_0x2ff5c8");
#endif

    switch (ctx->pc) {
        case 0x2ff5e0u: goto label_2ff5e0;
        default: break;
    }

    ctx->pc = 0x2ff5c8u;

    // 0x2ff5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff5cc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ff5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2ff5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff5d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ff5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff5d8: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x2FF5D8u;
    SET_GPR_U32(ctx, 31, 0x2FF5E0u);
    ctx->pc = 0x2FF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5D8u;
    // 0x2ff5dc: 0x24844bd0  addiu       $a0, $a0, 0x4BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x2FF5D8u, 0x2FF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5E0u;
label_2ff5e0:
    // 0x2ff5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5E4u;
        // 0x2ff5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF5ECu;
    // 0x2ff5ec: 0x0  nop
    ctx->pc = 0x2ff5ecu;
    // NOP
    ctx->pc = 0x2ff5f0u;
}
