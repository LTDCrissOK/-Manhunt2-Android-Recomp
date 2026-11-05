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

// Function: sub_003DB478
// Address: 0x3db478 - 0x3db4a0
void sub_003DB478_0x3db478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB478_0x3db478");
#endif

    switch (ctx->pc) {
        case 0x3db488u: goto label_3db488;
        case 0x3db490u: goto label_3db490;
        default: break;
    }

    ctx->pc = 0x3db478u;

    // 0x3db478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db480: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB480u;
    SET_GPR_U32(ctx, 31, 0x3DB488u);
    ctx->pc = 0x3DB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB480u;
    // 0x3db484: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB480u, 0x3DB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB488u;
label_3db488:
    // 0x3db488: 0xc04d0ea  jal         func_1343A8
    ctx->pc = 0x3DB488u;
    SET_GPR_U32(ctx, 31, 0x3DB490u);
    ctx->pc = 0x3DB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB488u;
    // 0x3db48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1343A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343A8u, 0x3DB488u, 0x3DB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB490u;
label_3db490:
    // 0x3db490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db494: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB494u;
        // 0x3db498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB49Cu;
    // 0x3db49c: 0x0  nop
    ctx->pc = 0x3db49cu;
    // NOP
    ctx->pc = 0x3db4a0u;
}
