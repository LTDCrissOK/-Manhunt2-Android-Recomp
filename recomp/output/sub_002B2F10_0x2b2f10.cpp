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

// Function: sub_002B2F10
// Address: 0x2b2f10 - 0x2b2f40
void sub_002B2F10_0x2b2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F10_0x2b2f10");
#endif

    switch (ctx->pc) {
        case 0x2b2f2cu: goto label_2b2f2c;
        default: break;
    }

    ctx->pc = 0x2b2f10u;

    // 0x2b2f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2f18: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x2b2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2b2f1c: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2F1Cu;
    {
        const bool branch_taken_0x2b2f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F1Cu;
        // 0x2b2f20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f1c) {
            ctx->pc = 0x2B2F34u;
            goto label_2b2f34;
        }
    }
    ctx->pc = 0x2B2F24u;
    // 0x2b2f24: 0xc0acbd0  jal         func_2B2F40
    ctx->pc = 0x2B2F24u;
    SET_GPR_U32(ctx, 31, 0x2B2F2Cu);
    ctx->pc = 0x2B2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F40u, 0x2B2F24u, 0x2B2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F2Cu;
label_2b2f2c:
    // 0x2b2f2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2F2Cu;
    {
        const bool branch_taken_0x2b2f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F2Cu;
        // 0x2b2f30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f2c) {
            ctx->pc = 0x2B2F38u;
            goto label_2b2f38;
        }
    }
    ctx->pc = 0x2B2F34u;
label_2b2f34:
    // 0x2b2f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2f38:
    // 0x2b2f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F38u;
        // 0x2b2f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F40u;
}
