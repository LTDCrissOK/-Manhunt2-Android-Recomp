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

// Function: sub_00394BC0
// Address: 0x394bc0 - 0x394bf8
void sub_00394BC0_0x394bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394BC0_0x394bc0");
#endif

    switch (ctx->pc) {
        case 0x394bd8u: goto label_394bd8;
        default: break;
    }

    ctx->pc = 0x394bc0u;

    // 0x394bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x394bc4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x394BC4u;
    {
        const bool branch_taken_0x394bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x394BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BC4u;
        // 0x394bc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bc4) {
            ctx->pc = 0x394BE8u;
            goto label_394be8;
        }
    }
    ctx->pc = 0x394BCCu;
    // 0x394bcc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394bd0: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394BD0u;
    SET_GPR_U32(ctx, 31, 0x394BD8u);
    ctx->pc = 0x394BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394BD0u;
    // 0x394bd4: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394BD0u, 0x394BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394BD8u;
label_394bd8:
    // 0x394bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394be0: 0x3e00008  jr          $ra
    ctx->pc = 0x394BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BE0u;
        // 0x394be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394BE8u;
label_394be8:
    // 0x394be8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x394be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x394bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394bf0: 0x80e669c  j           func_399A70
    ctx->pc = 0x394BF0u;
    ctx->pc = 0x394BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394BF0u;
    // 0x394bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399A70u, 0x394BF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x394BF8u;
}
