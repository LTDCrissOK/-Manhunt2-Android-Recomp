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

// Function: sub_0014EA60
// Address: 0x14ea60 - 0x14eaa8
void sub_0014EA60_0x14ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EA60_0x14ea60");
#endif

    switch (ctx->pc) {
        case 0x14ea84u: goto label_14ea84;
        case 0x14ea94u: goto label_14ea94;
        default: break;
    }

    ctx->pc = 0x14ea60u;

    // 0x14ea60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ea64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ea68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14ea6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea70: 0x8e020914  lw          $v0, 0x914($s0)
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x14ea74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EA74u;
    {
        const bool branch_taken_0x14ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea74) {
            ctx->pc = 0x14EA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA74u;
            // 0x14ea78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA98u;
            goto label_14ea98;
        }
    }
    ctx->pc = 0x14EA7Cu;
    // 0x14ea7c: 0xc04d948  jal         func_136520
    ctx->pc = 0x14EA7Cu;
    SET_GPR_U32(ctx, 31, 0x14EA84u);
    ctx->pc = 0x14EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA7Cu;
    // 0x14ea80: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136520u, 0x14EA7Cu, 0x14EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA84u;
label_14ea84:
    // 0x14ea84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EA84u;
    {
        const bool branch_taken_0x14ea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea84) {
            ctx->pc = 0x14EA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA84u;
            // 0x14ea88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA98u;
            goto label_14ea98;
        }
    }
    ctx->pc = 0x14EA8Cu;
    // 0x14ea8c: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x14EA8Cu;
    SET_GPR_U32(ctx, 31, 0x14EA94u);
    ctx->pc = 0x14EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA8Cu;
    // 0x14ea90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x14EA8Cu, 0x14EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA94u;
label_14ea94:
    // 0x14ea94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ea94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ea98:
    // 0x14ea98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14ea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA9Cu;
        // 0x14eaa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EAA4u;
    // 0x14eaa4: 0x0  nop
    ctx->pc = 0x14eaa4u;
    // NOP
    ctx->pc = 0x14eaa8u;
}
