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

// Function: sub_0025A530
// Address: 0x25a530 - 0x25a568
void sub_0025A530_0x25a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A530_0x25a530");
#endif

    switch (ctx->pc) {
        case 0x25a548u: goto label_25a548;
        default: break;
    }

    ctx->pc = 0x25a530u;

    // 0x25a530: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25a534: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a538: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A538u;
    {
        const bool branch_taken_0x25a538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a538) {
            ctx->pc = 0x25A560u;
            goto label_25a560;
        }
    }
    ctx->pc = 0x25A540u;
    // 0x25a540: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25a544: 0x0  nop
    ctx->pc = 0x25a544u;
    // NOP
label_25a548:
    // 0x25a548: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A548u;
    {
        const bool branch_taken_0x25a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x25a548) {
            ctx->pc = 0x25A54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A548u;
            // 0x25a54c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A558u;
            goto label_25a558;
        }
    }
    ctx->pc = 0x25A550u;
    // 0x25a550: 0x3e00008  jr          $ra
    ctx->pc = 0x25A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A558u;
label_25a558:
    // 0x25a558: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25A558u;
    {
        const bool branch_taken_0x25a558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a558) {
            ctx->pc = 0x25A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A558u;
            // 0x25a55c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a548;
        }
    }
    ctx->pc = 0x25A560u;
label_25a560:
    // 0x25a560: 0x3e00008  jr          $ra
    ctx->pc = 0x25A560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A560u;
        // 0x25a564: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A568u;
}
