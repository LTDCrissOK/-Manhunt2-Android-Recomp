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

// Function: sub_001C0620
// Address: 0x1c0620 - 0x1c0668
void sub_001C0620_0x1c0620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0620_0x1c0620");
#endif

    switch (ctx->pc) {
        case 0x1c0644u: goto label_1c0644;
        case 0x1c0658u: goto label_1c0658;
        default: break;
    }

    ctx->pc = 0x1c0620u;

    // 0x1c0620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c0628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c062c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c062cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0630: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1c0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c0634: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0634u;
    {
        const bool branch_taken_0x1c0634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0634) {
            ctx->pc = 0x1C0638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0634u;
            // 0x1c0638: 0xae0004d4  sw          $zero, 0x4D4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0650u;
            goto label_1c0650;
        }
    }
    ctx->pc = 0x1C063Cu;
    // 0x1c063c: 0xc06fe24  jal         func_1BF890
    ctx->pc = 0x1C063Cu;
    SET_GPR_U32(ctx, 31, 0x1C0644u);
    ctx->pc = 0x1BF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF890u, 0x1C063Cu, 0x1C0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0644u;
label_1c0644:
    // 0x1c0644: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0644u;
    {
        const bool branch_taken_0x1c0644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0644) {
            ctx->pc = 0x1C0648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0644u;
            // 0x1c0648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C065Cu;
            goto label_1c065c;
        }
    }
    ctx->pc = 0x1C064Cu;
    // 0x1c064c: 0xae0004d4  sw          $zero, 0x4D4($s0)
    ctx->pc = 0x1c064cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 0));
label_1c0650:
    // 0x1c0650: 0xc06f068  jal         func_1BC1A0
    ctx->pc = 0x1C0650u;
    SET_GPR_U32(ctx, 31, 0x1C0658u);
    ctx->pc = 0x1C0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0650u;
    // 0x1c0654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC1A0u, 0x1C0650u, 0x1C0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0658u;
label_1c0658:
    // 0x1c0658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c065c:
    // 0x1c065c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0660: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0660u;
        // 0x1c0664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0668u;
}
