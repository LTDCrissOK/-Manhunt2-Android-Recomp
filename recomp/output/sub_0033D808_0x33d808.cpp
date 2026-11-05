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

// Function: sub_0033D808
// Address: 0x33d808 - 0x33d840
void sub_0033D808_0x33d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D808_0x33d808");
#endif

    switch (ctx->pc) {
        case 0x33d818u: goto label_33d818;
        case 0x33d820u: goto label_33d820;
        default: break;
    }

    ctx->pc = 0x33d808u;

    // 0x33d808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d814: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33d814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d818:
    // 0x33d818: 0xc0cf5ec  jal         func_33D7B0
    ctx->pc = 0x33D818u;
    SET_GPR_U32(ctx, 31, 0x33D820u);
    ctx->pc = 0x33D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D818u;
    // 0x33d81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D7B0u, 0x33D818u, 0x33D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D820u;
label_33d820:
    // 0x33d820: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33d820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33d824: 0x2a020082  slti        $v0, $s0, 0x82
    ctx->pc = 0x33d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x33d828: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33D828u;
    {
        const bool branch_taken_0x33d828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D828u;
        // 0x33d82c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d828) {
            ctx->pc = 0x33D818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d818;
        }
    }
    ctx->pc = 0x33D830u;
    // 0x33d830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d834: 0x3e00008  jr          $ra
    ctx->pc = 0x33D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D834u;
        // 0x33d838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D83Cu;
    // 0x33d83c: 0x0  nop
    ctx->pc = 0x33d83cu;
    // NOP
    ctx->pc = 0x33d840u;
}
