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

// Function: sub_0010EE78
// Address: 0x10ee78 - 0x10eea8
void sub_0010EE78_0x10ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE78_0x10ee78");
#endif

    switch (ctx->pc) {
        case 0x10ee98u: goto label_10ee98;
        default: break;
    }

    ctx->pc = 0x10ee78u;

    // 0x10ee78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ee7c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EE7Cu;
    {
        const bool branch_taken_0x10ee7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE7Cu;
        // 0x10ee80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee7c) {
            ctx->pc = 0x10EE98u;
            goto label_10ee98;
        }
    }
    ctx->pc = 0x10EE84u;
    // 0x10ee84: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x10ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10ee88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EE88u;
    {
        const bool branch_taken_0x10ee88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE88u;
        // 0x10ee8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee88) {
            ctx->pc = 0x10EE98u;
            goto label_10ee98;
        }
    }
    ctx->pc = 0x10EE90u;
    // 0x10ee90: 0xc05de0c  jal         func_177830
    ctx->pc = 0x10EE90u;
    SET_GPR_U32(ctx, 31, 0x10EE98u);
    ctx->pc = 0x10EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE90u;
    // 0x10ee94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177830u, 0x10EE90u, 0x10EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE98u;
label_10ee98:
    // 0x10ee98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE9Cu;
        // 0x10eea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EEA4u;
    // 0x10eea4: 0x0  nop
    ctx->pc = 0x10eea4u;
    // NOP
    ctx->pc = 0x10eea8u;
}
