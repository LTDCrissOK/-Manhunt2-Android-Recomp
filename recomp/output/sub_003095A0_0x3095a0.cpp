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

// Function: sub_003095A0
// Address: 0x3095a0 - 0x3095e8
void sub_003095A0_0x3095a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003095A0_0x3095a0");
#endif

    ctx->pc = 0x3095a0u;

    // 0x3095a0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x3095a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3095a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3095A4u;
    {
        const bool branch_taken_0x3095a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095A4u;
        // 0x3095a8: 0x8c86130c  lw          $a2, 0x130C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095a4) {
            ctx->pc = 0x3095B4u;
            goto label_3095b4;
        }
    }
    ctx->pc = 0x3095ACu;
    // 0x3095ac: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3095acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3095b0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x3095b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_3095b4:
    // 0x3095b4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3095b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3095b8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3095B8u;
    {
        const bool branch_taken_0x3095b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3095b8) {
            ctx->pc = 0x3095BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3095B8u;
            // 0x3095bc: 0xac85130c  sw          $a1, 0x130C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4876), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3095CCu;
            goto label_3095cc;
        }
    }
    ctx->pc = 0x3095C0u;
    // 0x3095c0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x3095c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3095c4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3095c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3095c8: 0xac85130c  sw          $a1, 0x130C($a0)
    ctx->pc = 0x3095c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4876), GPR_U32(ctx, 5));
label_3095cc:
    // 0x3095cc: 0x248212f0  addiu       $v0, $a0, 0x12F0
    ctx->pc = 0x3095ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4848));
    // 0x3095d0: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x3095d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x3095d4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3095D4u;
    {
        const bool branch_taken_0x3095d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095D4u;
        // 0x3095d8: 0xaca6001c  sw          $a2, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095d4) {
            ctx->pc = 0x3095E0u;
            goto label_3095e0;
        }
    }
    ctx->pc = 0x3095DCu;
    // 0x3095dc: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x3095dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
label_3095e0:
    // 0x3095e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3095E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3095E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3095E8u;
}
