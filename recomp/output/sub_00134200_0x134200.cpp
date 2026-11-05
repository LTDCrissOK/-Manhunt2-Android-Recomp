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

// Function: sub_00134200
// Address: 0x134200 - 0x134248
void sub_00134200_0x134200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134200_0x134200");
#endif

    switch (ctx->pc) {
        case 0x134224u: goto label_134224;
        default: break;
    }

    ctx->pc = 0x134200u;

    // 0x134200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13420c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13420cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134214: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x134214u;
    {
        const bool branch_taken_0x134214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134214) {
            ctx->pc = 0x134218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134214u;
            // 0x134218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134238u;
            goto label_134238;
        }
    }
    ctx->pc = 0x13421Cu;
    // 0x13421c: 0xc04b408  jal         func_12D020
    ctx->pc = 0x13421Cu;
    SET_GPR_U32(ctx, 31, 0x134224u);
    ctx->pc = 0x12D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D020u, 0x13421Cu, 0x134224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134224u;
label_134224:
    // 0x134224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134228: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x134228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x13422c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x134230: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x134230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x134234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134238:
    // 0x134238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13423c: 0x3e00008  jr          $ra
    ctx->pc = 0x13423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13423Cu;
        // 0x134240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134244u;
    // 0x134244: 0x0  nop
    ctx->pc = 0x134244u;
    // NOP
    ctx->pc = 0x134248u;
}
