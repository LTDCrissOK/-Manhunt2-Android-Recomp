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

// Function: sub_00127C10
// Address: 0x127c10 - 0x127c68
void sub_00127C10_0x127c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127C10_0x127c10");
#endif

    switch (ctx->pc) {
        case 0x127c2cu: goto label_127c2c;
        case 0x127c40u: goto label_127c40;
        default: break;
    }

    ctx->pc = 0x127c10u;

    // 0x127c10: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x127C10u;
    {
        const bool branch_taken_0x127c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C10u;
        // 0x127c14: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c10) {
            ctx->pc = 0x127C24u;
            goto label_127c24;
        }
    }
    ctx->pc = 0x127C18u;
    // 0x127c18: 0x90870a70  lbu         $a3, 0xA70($a0)
    ctx->pc = 0x127c18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2672)));
    // 0x127c1c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x127C1Cu;
    {
        const bool branch_taken_0x127c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x127C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C1Cu;
        // 0x127c20: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c1c) {
            ctx->pc = 0x127C34u;
            goto label_127c34;
        }
    }
    ctx->pc = 0x127C24u;
label_127c24:
    // 0x127c24: 0x3e00008  jr          $ra
    ctx->pc = 0x127C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C24u;
        // 0x127c28: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C2Cu;
label_127c2c:
    // 0x127c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x127C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C2Cu;
        // 0x127c30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C34u;
label_127c34:
    // 0x127c34: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x127c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127c38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127C38u;
    {
        const bool branch_taken_0x127c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C38u;
        // 0x127c3c: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c38) {
            ctx->pc = 0x127C60u;
            goto label_127c60;
        }
    }
    ctx->pc = 0x127C40u;
label_127c40:
    // 0x127c40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x127c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127c44: 0x8c430870  lw          $v1, 0x870($v0)
    ctx->pc = 0x127c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2160)));
    // 0x127c48: 0x1065fff8  beq         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127C48u;
    {
        const bool branch_taken_0x127c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x127C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C48u;
        // 0x127c4c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c48) {
            ctx->pc = 0x127C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127c2c;
        }
    }
    ctx->pc = 0x127C50u;
    // 0x127c50: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x127c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127c54: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x127c54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127c58: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x127C58u;
    {
        const bool branch_taken_0x127c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C58u;
        // 0x127c5c: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c58) {
            ctx->pc = 0x127C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127c40;
        }
    }
    ctx->pc = 0x127C60u;
label_127c60:
    // 0x127c60: 0x3e00008  jr          $ra
    ctx->pc = 0x127C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C60u;
        // 0x127c64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C68u;
}
