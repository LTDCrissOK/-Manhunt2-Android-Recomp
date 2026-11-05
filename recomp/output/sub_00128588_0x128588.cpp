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

// Function: sub_00128588
// Address: 0x128588 - 0x1285d0
void sub_00128588_0x128588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128588_0x128588");
#endif

    switch (ctx->pc) {
        case 0x1285a0u: goto label_1285a0;
        default: break;
    }

    ctx->pc = 0x128588u;

    // 0x128588: 0x90820f90  lbu         $v0, 0xF90($a0)
    ctx->pc = 0x128588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3984)));
    // 0x12858c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12858Cu;
    {
        const bool branch_taken_0x12858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12858Cu;
        // 0x128590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12858c) {
            ctx->pc = 0x1285C8u;
            goto label_1285c8;
        }
    }
    ctx->pc = 0x128594u;
    // 0x128594: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x128594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128598: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x12859c: 0x0  nop
    ctx->pc = 0x12859cu;
    // NOP
label_1285a0:
    // 0x1285a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1285a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1285a4: 0x8c430e90  lw          $v1, 0xE90($v0)
    ctx->pc = 0x1285a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3728)));
    // 0x1285a8: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1285A8u;
    {
        const bool branch_taken_0x1285a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285A8u;
        // 0x1285ac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285a8) {
            ctx->pc = 0x1285B8u;
            goto label_1285b8;
        }
    }
    ctx->pc = 0x1285B0u;
    // 0x1285b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1285B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285B0u;
        // 0x1285b4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1285B8u;
label_1285b8:
    // 0x1285b8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1285b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1285bc: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x1285bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1285c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1285C0u;
    {
        const bool branch_taken_0x1285c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285C0u;
        // 0x1285c4: 0x61140  sll         $v0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285c0) {
            ctx->pc = 0x1285A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1285a0;
        }
    }
    ctx->pc = 0x1285C8u;
label_1285c8:
    // 0x1285c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1285C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285C8u;
        // 0x1285cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1285D0u;
}
