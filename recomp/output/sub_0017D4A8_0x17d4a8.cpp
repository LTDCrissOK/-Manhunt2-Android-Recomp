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

// Function: sub_0017D4A8
// Address: 0x17d4a8 - 0x17d4e8
void sub_0017D4A8_0x17d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D4A8_0x17d4a8");
#endif

    ctx->pc = 0x17d4a8u;

    // 0x17d4a8: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x17d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x17d4ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17D4ACu;
    {
        const bool branch_taken_0x17d4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4ac) {
            ctx->pc = 0x17D4E0u;
            goto label_17d4e0;
        }
    }
    ctx->pc = 0x17D4B4u;
    // 0x17d4b4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x17d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x17d4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D4B8u;
    {
        const bool branch_taken_0x17d4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4b8) {
            ctx->pc = 0x17D4E0u;
            goto label_17d4e0;
        }
    }
    ctx->pc = 0x17D4C0u;
    // 0x17d4c0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x17d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x17d4c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D4C4u;
    {
        const bool branch_taken_0x17d4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4C4u;
        // 0x17d4c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4c4) {
            ctx->pc = 0x17D4E0u;
            goto label_17d4e0;
        }
    }
    ctx->pc = 0x17D4CCu;
    // 0x17d4cc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x17d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x17d4d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D4D0u;
    {
        const bool branch_taken_0x17d4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4D0u;
        // 0x17d4d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4d0) {
            ctx->pc = 0x17D4E0u;
            goto label_17d4e0;
        }
    }
    ctx->pc = 0x17D4D8u;
    // 0x17d4d8: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x17d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x17d4dc: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x17d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_17d4e0:
    // 0x17d4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4E8u;
}
