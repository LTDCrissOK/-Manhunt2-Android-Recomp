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

// Function: sub_003DB1A8
// Address: 0x3db1a8 - 0x3db1d0
void sub_003DB1A8_0x3db1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB1A8_0x3db1a8");
#endif

    switch (ctx->pc) {
        case 0x3db1b8u: goto label_3db1b8;
        case 0x3db1c0u: goto label_3db1c0;
        default: break;
    }

    ctx->pc = 0x3db1a8u;

    // 0x3db1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db1b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB1B0u;
    SET_GPR_U32(ctx, 31, 0x3DB1B8u);
    ctx->pc = 0x3DB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB1B0u;
    // 0x3db1b4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB1B0u, 0x3DB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1B8u;
label_3db1b8:
    // 0x3db1b8: 0xc045a2a  jal         func_1168A8
    ctx->pc = 0x3DB1B8u;
    SET_GPR_U32(ctx, 31, 0x3DB1C0u);
    ctx->pc = 0x3DB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB1B8u;
    // 0x3db1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168A8u, 0x3DB1B8u, 0x3DB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1C0u;
label_3db1c0:
    // 0x3db1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1C4u;
        // 0x3db1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB1CCu;
    // 0x3db1cc: 0x0  nop
    ctx->pc = 0x3db1ccu;
    // NOP
    ctx->pc = 0x3db1d0u;
}
