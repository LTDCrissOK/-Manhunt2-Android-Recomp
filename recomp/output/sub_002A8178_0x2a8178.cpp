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

// Function: sub_002A8178
// Address: 0x2a8178 - 0x2a81a0
void sub_002A8178_0x2a8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8178_0x2a8178");
#endif

    switch (ctx->pc) {
        case 0x2a8194u: goto label_2a8194;
        default: break;
    }

    ctx->pc = 0x2a8178u;

    // 0x2a8178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a817c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a8180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8184: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a8184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8188: 0x24423760  addiu       $v0, $v0, 0x3760
    ctx->pc = 0x2a8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14176));
    // 0x2a818c: 0xc0a9712  jal         func_2A5C48
    ctx->pc = 0x2A818Cu;
    SET_GPR_U32(ctx, 31, 0x2A8194u);
    ctx->pc = 0x2A8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A818Cu;
    // 0x2a8190: 0xac620278  sw          $v0, 0x278($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5C48u, 0x2A818Cu, 0x2A8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8194u;
label_2a8194:
    // 0x2a8194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8198: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8198u;
        // 0x2a819c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A81A0u;
}
