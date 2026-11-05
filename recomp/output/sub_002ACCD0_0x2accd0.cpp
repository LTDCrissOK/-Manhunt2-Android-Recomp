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

// Function: sub_002ACCD0
// Address: 0x2accd0 - 0x2acd08
void sub_002ACCD0_0x2accd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACCD0_0x2accd0");
#endif

    switch (ctx->pc) {
        case 0x2accf8u: goto label_2accf8;
        default: break;
    }

    ctx->pc = 0x2accd0u;

    // 0x2accd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2accd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2accd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2accd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2accd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2accdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2accdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acce0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACCE0u;
    {
        const bool branch_taken_0x2acce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCE0u;
        // 0x2acce4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acce0) {
            ctx->pc = 0x2ACCFCu;
            goto label_2accfc;
        }
    }
    ctx->pc = 0x2ACCE8u;
    // 0x2acce8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2acce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2accec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2accecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2accf0: 0xc0ab346  jal         func_2ACD18
    ctx->pc = 0x2ACCF0u;
    SET_GPR_U32(ctx, 31, 0x2ACCF8u);
    ctx->pc = 0x2ACCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCF0u;
    // 0x2accf4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD18u, 0x2ACCF0u, 0x2ACCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCF8u;
label_2accf8:
    // 0x2accf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2accf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2accfc:
    // 0x2accfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCFCu;
        // 0x2acd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACD04u;
    // 0x2acd04: 0x0  nop
    ctx->pc = 0x2acd04u;
    // NOP
    ctx->pc = 0x2acd08u;
}
