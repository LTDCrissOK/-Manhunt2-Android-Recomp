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

// Function: sub_003D45C0
// Address: 0x3d45c0 - 0x3d45f0
void sub_003D45C0_0x3d45c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D45C0_0x3d45c0");
#endif

    switch (ctx->pc) {
        case 0x3d45e0u: goto label_3d45e0;
        default: break;
    }

    ctx->pc = 0x3d45c0u;

    // 0x3d45c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d45c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d45c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3d45c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d45cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d45ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d45d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3d45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3d45d4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3d45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3d45d8: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D45D8u;
    SET_GPR_U32(ctx, 31, 0x3D45E0u);
    ctx->pc = 0x3D45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45D8u;
    // 0x3d45dc: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D45D8u, 0x3D45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45E0u;
label_3d45e0:
    // 0x3d45e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d45e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d45e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D45E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45E4u;
        // 0x3d45e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D45E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D45ECu;
    // 0x3d45ec: 0x0  nop
    ctx->pc = 0x3d45ecu;
    // NOP
    ctx->pc = 0x3d45f0u;
}
