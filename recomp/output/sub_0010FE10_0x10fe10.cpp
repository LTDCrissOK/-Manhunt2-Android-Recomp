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

// Function: sub_0010FE10
// Address: 0x10fe10 - 0x10fe38
void sub_0010FE10_0x10fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FE10_0x10fe10");
#endif

    switch (ctx->pc) {
        case 0x10fe28u: goto label_10fe28;
        default: break;
    }

    ctx->pc = 0x10fe10u;

    // 0x10fe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fe14: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x10fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10fe18: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FE18u;
    {
        const bool branch_taken_0x10fe18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE18u;
        // 0x10fe1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe18) {
            ctx->pc = 0x10FE28u;
            goto label_10fe28;
        }
    }
    ctx->pc = 0x10FE20u;
    // 0x10fe20: 0xc04cae0  jal         func_132B80
    ctx->pc = 0x10FE20u;
    SET_GPR_U32(ctx, 31, 0x10FE28u);
    ctx->pc = 0x10FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE20u;
    // 0x10fe24: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B80u, 0x10FE20u, 0x10FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE28u;
label_10fe28:
    // 0x10fe28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE2Cu;
        // 0x10fe30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE34u;
    // 0x10fe34: 0x0  nop
    ctx->pc = 0x10fe34u;
    // NOP
    ctx->pc = 0x10fe38u;
}
