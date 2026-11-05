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

// Function: sub_0012ECD0
// Address: 0x12ecd0 - 0x12ed08
void sub_0012ECD0_0x12ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ECD0_0x12ecd0");
#endif

    switch (ctx->pc) {
        case 0x12ecf8u: goto label_12ecf8;
        default: break;
    }

    ctx->pc = 0x12ecd0u;

    // 0x12ecd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ecd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ecd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ecdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12ECDCu;
    {
        const bool branch_taken_0x12ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECDCu;
        // 0x12ece0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecdc) {
            ctx->pc = 0x12ECFCu;
            goto label_12ecfc;
        }
    }
    ctx->pc = 0x12ECE4u;
    // 0x12ece4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ece8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12ECFCu;
            goto label_12ecfc;
        }
    }
    ctx->pc = 0x12ECF0u;
    // 0x12ecf0: 0xc04bb42  jal         func_12ED08
    ctx->pc = 0x12ECF0u;
    SET_GPR_U32(ctx, 31, 0x12ECF8u);
    ctx->pc = 0x12ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ECF0u;
    // 0x12ecf4: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED08u, 0x12ECF0u, 0x12ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECF8u;
label_12ecf8:
    // 0x12ecf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ecf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ecfc:
    // 0x12ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECFCu;
        // 0x12ed00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED04u;
    // 0x12ed04: 0x0  nop
    ctx->pc = 0x12ed04u;
    // NOP
    ctx->pc = 0x12ed08u;
}
