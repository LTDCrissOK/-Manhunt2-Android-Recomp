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

// Function: sub_002CBFF8
// Address: 0x2cbff8 - 0x2cc030
void sub_002CBFF8_0x2cbff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBFF8_0x2cbff8");
#endif

    ctx->pc = 0x2cbff8u;

    // 0x2cbff8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2cbff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2cbffc: 0x8ca4a618  lw          $a0, -0x59E8($a1)
    ctx->pc = 0x2cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x57A618u));
    // 0x2cc000: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC000u;
    {
        const bool branch_taken_0x2cc000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC000u;
        // 0x2cc004: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc000) {
            ctx->pc = 0x2CC028u;
            goto label_2cc028;
        }
    }
    ctx->pc = 0x2CC008u;
    // 0x2cc008: 0x9043b49c  lbu         $v1, -0x4B64($v0)
    ctx->pc = 0x2cc008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947996)));
    // 0x2cc00c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC00Cu;
    {
        const bool branch_taken_0x2cc00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc00c) {
            ctx->pc = 0x2CC010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC00Cu;
            // 0x2cc010: 0xaca0a618  sw          $zero, -0x59E8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294944280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC028u;
            goto label_2cc028;
        }
    }
    ctx->pc = 0x2CC014u;
    // 0x2cc014: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2cc014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cc018: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2cc018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc01c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cc01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cc020: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2cc020u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2cc024: 0xaca0a618  sw          $zero, -0x59E8($a1)
    ctx->pc = 0x2cc024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944280), GPR_U32(ctx, 0));
label_2cc028:
    // 0x2cc028: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC030u;
}
