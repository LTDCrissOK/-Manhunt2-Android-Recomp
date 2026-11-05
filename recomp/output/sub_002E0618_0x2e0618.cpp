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

// Function: sub_002E0618
// Address: 0x2e0618 - 0x2e0658
void sub_002E0618_0x2e0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0618_0x2e0618");
#endif

    switch (ctx->pc) {
        case 0x2e0638u: goto label_2e0638;
        case 0x2e0648u: goto label_2e0648;
        default: break;
    }

    ctx->pc = 0x2e0618u;

    // 0x2e0618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e061c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0620: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2e0624: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2e0624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2e0628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0628u;
    {
        const bool branch_taken_0x2e0628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0628) {
            ctx->pc = 0x2E0640u;
            goto label_2e0640;
        }
    }
    ctx->pc = 0x2E0630u;
    // 0x2e0630: 0xc0b8376  jal         func_2E0DD8
    ctx->pc = 0x2E0630u;
    SET_GPR_U32(ctx, 31, 0x2E0638u);
    ctx->pc = 0x2E0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DD8u, 0x2E0630u, 0x2E0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0638u;
label_2e0638:
    // 0x2e0638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0638u;
    {
        const bool branch_taken_0x2e0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0638u;
        // 0x2e063c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0638) {
            ctx->pc = 0x2E064Cu;
            goto label_2e064c;
        }
    }
    ctx->pc = 0x2E0640u;
label_2e0640:
    // 0x2e0640: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E0640u;
    SET_GPR_U32(ctx, 31, 0x2E0648u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E0640u, 0x2E0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0648u;
label_2e0648:
    // 0x2e0648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e064c:
    // 0x2e064c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E064Cu;
        // 0x2e0650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E064Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0654u;
    // 0x2e0654: 0x0  nop
    ctx->pc = 0x2e0654u;
    // NOP
    ctx->pc = 0x2e0658u;
}
