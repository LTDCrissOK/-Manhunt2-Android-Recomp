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

// Function: sub_003DB130
// Address: 0x3db130 - 0x3db158
void sub_003DB130_0x3db130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB130_0x3db130");
#endif

    switch (ctx->pc) {
        case 0x3db140u: goto label_3db140;
        case 0x3db148u: goto label_3db148;
        default: break;
    }

    ctx->pc = 0x3db130u;

    // 0x3db130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db138: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB138u;
    SET_GPR_U32(ctx, 31, 0x3DB140u);
    ctx->pc = 0x3DB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB138u;
    // 0x3db13c: 0x24040410  addiu       $a0, $zero, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB138u, 0x3DB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB140u;
label_3db140:
    // 0x3db140: 0xc0590c8  jal         func_164320
    ctx->pc = 0x3DB140u;
    SET_GPR_U32(ctx, 31, 0x3DB148u);
    ctx->pc = 0x3DB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB140u;
    // 0x3db144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164320u, 0x3DB140u, 0x3DB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB148u;
label_3db148:
    // 0x3db148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db14c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB14Cu;
        // 0x3db150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB154u;
    // 0x3db154: 0x0  nop
    ctx->pc = 0x3db154u;
    // NOP
    ctx->pc = 0x3db158u;
}
