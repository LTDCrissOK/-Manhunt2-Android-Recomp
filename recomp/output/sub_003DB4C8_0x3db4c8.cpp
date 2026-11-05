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

// Function: sub_003DB4C8
// Address: 0x3db4c8 - 0x3db4f0
void sub_003DB4C8_0x3db4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4C8_0x3db4c8");
#endif

    switch (ctx->pc) {
        case 0x3db4d8u: goto label_3db4d8;
        case 0x3db4e0u: goto label_3db4e0;
        default: break;
    }

    ctx->pc = 0x3db4c8u;

    // 0x3db4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db4d0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB4D0u;
    SET_GPR_U32(ctx, 31, 0x3DB4D8u);
    ctx->pc = 0x3DB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4D0u;
    // 0x3db4d4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB4D0u, 0x3DB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4D8u;
label_3db4d8:
    // 0x3db4d8: 0xc045e6e  jal         func_1179B8
    ctx->pc = 0x3DB4D8u;
    SET_GPR_U32(ctx, 31, 0x3DB4E0u);
    ctx->pc = 0x3DB4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4D8u;
    // 0x3db4dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179B8u, 0x3DB4D8u, 0x3DB4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB4E0u;
label_3db4e0:
    // 0x3db4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4E4u;
        // 0x3db4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB4ECu;
    // 0x3db4ec: 0x0  nop
    ctx->pc = 0x3db4ecu;
    // NOP
    ctx->pc = 0x3db4f0u;
}
