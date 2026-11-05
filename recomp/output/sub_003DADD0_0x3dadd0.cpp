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

// Function: sub_003DADD0
// Address: 0x3dadd0 - 0x3dae00
void sub_003DADD0_0x3dadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DADD0_0x3dadd0");
#endif

    switch (ctx->pc) {
        case 0x3dade0u: goto label_3dade0;
        case 0x3dade8u: goto label_3dade8;
        default: break;
    }

    ctx->pc = 0x3dadd0u;

    // 0x3dadd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dadd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dadd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dadd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DADD8u;
    SET_GPR_U32(ctx, 31, 0x3DADE0u);
    ctx->pc = 0x3DADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DADD8u;
    // 0x3daddc: 0x24040534  addiu       $a0, $zero, 0x534 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DADD8u, 0x3DADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DADE0u;
label_3dade0:
    // 0x3dade0: 0xc050224  jal         func_140890
    ctx->pc = 0x3DADE0u;
    SET_GPR_U32(ctx, 31, 0x3DADE8u);
    ctx->pc = 0x3DADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DADE0u;
    // 0x3dade4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x3DADE0u, 0x3DADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DADE8u;
label_3dade8:
    // 0x3dade8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dadec: 0x3e00008  jr          $ra
    ctx->pc = 0x3DADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADECu;
        // 0x3dadf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DADF4u;
    // 0x3dadf4: 0x0  nop
    ctx->pc = 0x3dadf4u;
    // NOP
    // 0x3dadf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dadf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dadfc: 0x0  nop
    ctx->pc = 0x3dadfcu;
    // NOP
    ctx->pc = 0x3dae00u;
}
