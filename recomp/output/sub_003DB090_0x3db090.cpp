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

// Function: sub_003DB090
// Address: 0x3db090 - 0x3db0b8
void sub_003DB090_0x3db090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB090_0x3db090");
#endif

    switch (ctx->pc) {
        case 0x3db0a0u: goto label_3db0a0;
        case 0x3db0a8u: goto label_3db0a8;
        default: break;
    }

    ctx->pc = 0x3db090u;

    // 0x3db090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db098: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB098u;
    SET_GPR_U32(ctx, 31, 0x3DB0A0u);
    ctx->pc = 0x3DB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB098u;
    // 0x3db09c: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB098u, 0x3DB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0A0u;
label_3db0a0:
    // 0x3db0a0: 0xc056364  jal         func_158D90
    ctx->pc = 0x3DB0A0u;
    SET_GPR_U32(ctx, 31, 0x3DB0A8u);
    ctx->pc = 0x3DB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0A0u;
    // 0x3db0a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D90u, 0x3DB0A0u, 0x3DB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0A8u;
label_3db0a8:
    // 0x3db0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0ACu;
        // 0x3db0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB0B4u;
    // 0x3db0b4: 0x0  nop
    ctx->pc = 0x3db0b4u;
    // NOP
    ctx->pc = 0x3db0b8u;
}
