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

// Function: sub_003D16C0
// Address: 0x3d16c0 - 0x3d16f0
void sub_003D16C0_0x3d16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D16C0_0x3d16c0");
#endif

    switch (ctx->pc) {
        case 0x3d16d8u: goto label_3d16d8;
        default: break;
    }

    ctx->pc = 0x3d16c0u;

    // 0x3d16c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d16c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3d16c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d16cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d16ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d16d0: 0xc0f2774  jal         func_3C9DD0
    ctx->pc = 0x3D16D0u;
    SET_GPR_U32(ctx, 31, 0x3D16D8u);
    ctx->pc = 0x3D16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D16D0u;
    // 0x3d16d4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9DD0u, 0x3D16D0u, 0x3D16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D16D8u;
label_3d16d8:
    // 0x3d16d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d16d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d16dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D16DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16DCu;
        // 0x3d16e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D16DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D16E4u;
    // 0x3d16e4: 0x0  nop
    ctx->pc = 0x3d16e4u;
    // NOP
    // 0x3d16e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d16e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d16ec: 0x0  nop
    ctx->pc = 0x3d16ecu;
    // NOP
    ctx->pc = 0x3d16f0u;
}
