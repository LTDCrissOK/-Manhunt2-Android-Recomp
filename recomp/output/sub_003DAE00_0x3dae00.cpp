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

// Function: sub_003DAE00
// Address: 0x3dae00 - 0x3dae28
void sub_003DAE00_0x3dae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAE00_0x3dae00");
#endif

    switch (ctx->pc) {
        case 0x3dae10u: goto label_3dae10;
        case 0x3dae18u: goto label_3dae18;
        default: break;
    }

    ctx->pc = 0x3dae00u;

    // 0x3dae00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dae08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAE08u;
    SET_GPR_U32(ctx, 31, 0x3DAE10u);
    ctx->pc = 0x3DAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE08u;
    // 0x3dae0c: 0x24040c20  addiu       $a0, $zero, 0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAE08u, 0x3DAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE10u;
label_3dae10:
    // 0x3dae10: 0xc05051e  jal         func_141478
    ctx->pc = 0x3DAE10u;
    SET_GPR_U32(ctx, 31, 0x3DAE18u);
    ctx->pc = 0x3DAE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE10u;
    // 0x3dae14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141478u, 0x3DAE10u, 0x3DAE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE18u;
label_3dae18:
    // 0x3dae18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dae18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE1Cu;
        // 0x3dae20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAE24u;
    // 0x3dae24: 0x0  nop
    ctx->pc = 0x3dae24u;
    // NOP
    ctx->pc = 0x3dae28u;
}
