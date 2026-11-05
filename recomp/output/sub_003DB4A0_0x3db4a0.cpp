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

// Function: sub_003DB4A0
// Address: 0x3db4a0 - 0x3db4c8
void sub_003DB4A0_0x3db4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4A0_0x3db4a0");
#endif

    switch (ctx->pc) {
        case 0x3db4b0u: goto label_3db4b0;
        case 0x3db4b8u: goto label_3db4b8;
        default: break;
    }

    ctx->pc = 0x3db4a0u;

    // 0x3db4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db4a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB4A8u;
    SET_GPR_U32(ctx, 31, 0x3DB4B0u);
    ctx->pc = 0x3DB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4A8u;
    // 0x3db4ac: 0x240405b0  addiu       $a0, $zero, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB4A8u, 0x3DB4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4B0u;
label_3db4b0:
    // 0x3db4b0: 0xc05e20a  jal         func_178828
    ctx->pc = 0x3DB4B0u;
    SET_GPR_U32(ctx, 31, 0x3DB4B8u);
    ctx->pc = 0x3DB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4B0u;
    // 0x3db4b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178828u, 0x3DB4B0u, 0x3DB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4B8u;
label_3db4b8:
    // 0x3db4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4BCu;
        // 0x3db4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB4C4u;
    // 0x3db4c4: 0x0  nop
    ctx->pc = 0x3db4c4u;
    // NOP
    ctx->pc = 0x3db4c8u;
}
