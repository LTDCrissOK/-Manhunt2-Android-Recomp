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

// Function: sub_00160628
// Address: 0x160628 - 0x160658
void sub_00160628_0x160628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160628_0x160628");
#endif

    switch (ctx->pc) {
        case 0x16063cu: goto label_16063c;
        case 0x160644u: goto label_160644;
        default: break;
    }

    ctx->pc = 0x160628u;

    // 0x160628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16062c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160634: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x160634u;
    SET_GPR_U32(ctx, 31, 0x16063Cu);
    ctx->pc = 0x160638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160634u;
    // 0x160638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x160634u, 0x16063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16063Cu;
label_16063c:
    // 0x16063c: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x16063Cu;
    SET_GPR_U32(ctx, 31, 0x160644u);
    ctx->pc = 0x160640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16063Cu;
    // 0x160640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x16063Cu, 0x160644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160644u;
label_160644:
    // 0x160644: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x160644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x160648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16064c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160650: 0x3e00008  jr          $ra
    ctx->pc = 0x160650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160650u;
        // 0x160654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160658u;
}
