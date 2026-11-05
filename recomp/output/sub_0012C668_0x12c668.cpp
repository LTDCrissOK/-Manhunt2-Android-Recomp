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

// Function: sub_0012C668
// Address: 0x12c668 - 0x12c6b8
void sub_0012C668_0x12c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C668_0x12c668");
#endif

    switch (ctx->pc) {
        case 0x12c678u: goto label_12c678;
        default: break;
    }

    ctx->pc = 0x12c668u;

    // 0x12c668: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12c66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c670: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12c674: 0x0  nop
    ctx->pc = 0x12c674u;
    // NOP
label_12c678:
    // 0x12c678: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12c67c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c680: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C680u;
            // 0x12c684: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C69Cu;
            goto label_12c69c;
        }
    }
    ctx->pc = 0x12C688u;
    // 0x12c688: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c68c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C68Cu;
    {
        const bool branch_taken_0x12c68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x12C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C68Cu;
        // 0x12c690: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c68c) {
            ctx->pc = 0x12C69Cu;
            goto label_12c69c;
        }
    }
    ctx->pc = 0x12C694u;
    // 0x12c694: 0x3e00008  jr          $ra
    ctx->pc = 0x12C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C694u;
        // 0x12c698: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C69Cu;
label_12c69c:
    // 0x12c69c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x12c69cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c6a0: 0x2cc30020  sltiu       $v1, $a2, 0x20
    ctx->pc = 0x12c6a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c6a4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x12C6A4u;
    {
        const bool branch_taken_0x12c6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6A4u;
        // 0x12c6a8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6a4) {
            ctx->pc = 0x12C678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c678;
        }
    }
    ctx->pc = 0x12C6ACu;
    // 0x12c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6ACu;
        // 0x12c6b0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C6B4u;
    // 0x12c6b4: 0x0  nop
    ctx->pc = 0x12c6b4u;
    // NOP
    ctx->pc = 0x12c6b8u;
}
