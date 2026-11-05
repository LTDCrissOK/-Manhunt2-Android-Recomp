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

// Function: sub_003DAFA0
// Address: 0x3dafa0 - 0x3dafc8
void sub_003DAFA0_0x3dafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAFA0_0x3dafa0");
#endif

    switch (ctx->pc) {
        case 0x3dafb0u: goto label_3dafb0;
        case 0x3dafb8u: goto label_3dafb8;
        default: break;
    }

    ctx->pc = 0x3dafa0u;

    // 0x3dafa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dafa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dafa8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAFA8u;
    SET_GPR_U32(ctx, 31, 0x3DAFB0u);
    ctx->pc = 0x3DAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFA8u;
    // 0x3dafac: 0x2404096c  addiu       $a0, $zero, 0x96C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAFA8u, 0x3DAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFB0u;
label_3dafb0:
    // 0x3dafb0: 0xc05372e  jal         func_14DCB8
    ctx->pc = 0x3DAFB0u;
    SET_GPR_U32(ctx, 31, 0x3DAFB8u);
    ctx->pc = 0x3DAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFB0u;
    // 0x3dafb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCB8u, 0x3DAFB0u, 0x3DAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFB8u;
label_3dafb8:
    // 0x3dafb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dafb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dafbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFBCu;
        // 0x3dafc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAFC4u;
    // 0x3dafc4: 0x0  nop
    ctx->pc = 0x3dafc4u;
    // NOP
    ctx->pc = 0x3dafc8u;
}
