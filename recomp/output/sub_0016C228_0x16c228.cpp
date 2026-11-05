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

// Function: sub_0016C228
// Address: 0x16c228 - 0x16c290
void sub_0016C228_0x16c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C228_0x16c228");
#endif

    switch (ctx->pc) {
        case 0x16c248u: goto label_16c248;
        case 0x16c268u: goto label_16c268;
        default: break;
    }

    ctx->pc = 0x16c228u;

    // 0x16c228: 0x8c83019c  lw          $v1, 0x19C($a0)
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x16c22c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C22Cu;
    {
        const bool branch_taken_0x16c22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c22c) {
            ctx->pc = 0x16C240u;
            goto label_16c240;
        }
    }
    ctx->pc = 0x16C234u;
    // 0x16c234: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x16c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x16c238: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C238u;
    {
        const bool branch_taken_0x16c238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c238) {
            ctx->pc = 0x16C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C238u;
            // 0x16c23c: 0x908601a4  lbu         $a2, 0x1A4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C250u;
            goto label_16c250;
        }
    }
    ctx->pc = 0x16C240u;
label_16c240:
    // 0x16c240: 0x3e00008  jr          $ra
    ctx->pc = 0x16C240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C240u;
        // 0x16c244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C248u;
label_16c248:
    // 0x16c248: 0x3e00008  jr          $ra
    ctx->pc = 0x16C248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C248u;
        // 0x16c24c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C250u;
label_16c250:
    // 0x16c250: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x16c250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16c254: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C254u;
    {
        const bool branch_taken_0x16c254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C254u;
        // 0x16c258: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c254) {
            ctx->pc = 0x16C288u;
            goto label_16c288;
        }
    }
    ctx->pc = 0x16C25Cu;
    // 0x16c25c: 0x8c840198  lw          $a0, 0x198($a0)
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x16c260: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16c264: 0x0  nop
    ctx->pc = 0x16c264u;
    // NOP
label_16c268:
    // 0x16c268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16c26c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c270: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x16C270u;
    {
        const bool branch_taken_0x16c270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x16C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C270u;
        // 0x16c274: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c270) {
            ctx->pc = 0x16C248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c248;
        }
    }
    ctx->pc = 0x16C278u;
    // 0x16c278: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x16c278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c27c: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x16c27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16c280: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C280u;
    {
        const bool branch_taken_0x16c280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C280u;
        // 0x16c284: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c280) {
            ctx->pc = 0x16C268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c268;
        }
    }
    ctx->pc = 0x16C288u;
label_16c288:
    // 0x16c288: 0x3e00008  jr          $ra
    ctx->pc = 0x16C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C288u;
        // 0x16c28c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C290u;
}
