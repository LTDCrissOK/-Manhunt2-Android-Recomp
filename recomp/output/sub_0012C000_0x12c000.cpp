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

// Function: sub_0012C000
// Address: 0x12c000 - 0x12c040
void sub_0012C000_0x12c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C000_0x12c000");
#endif

    switch (ctx->pc) {
        case 0x12c010u: goto label_12c010;
        default: break;
    }

    ctx->pc = 0x12c000u;

    // 0x12c000: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12c004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c008: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12c00c: 0x0  nop
    ctx->pc = 0x12c00cu;
    // NOP
label_12c010:
    // 0x12c010: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12c014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c018: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C018u;
    {
        const bool branch_taken_0x12c018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C018u;
        // 0x12c01c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c018) {
            ctx->pc = 0x12C028u;
            goto label_12c028;
        }
    }
    ctx->pc = 0x12C020u;
    // 0x12c020: 0x3e00008  jr          $ra
    ctx->pc = 0x12C020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C020u;
        // 0x12c024: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C028u;
label_12c028:
    // 0x12c028: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12c028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c02c: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x12c02cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c030: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C030u;
    {
        const bool branch_taken_0x12c030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C030u;
        // 0x12c034: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c030) {
            ctx->pc = 0x12C010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c010;
        }
    }
    ctx->pc = 0x12C038u;
    // 0x12c038: 0x3e00008  jr          $ra
    ctx->pc = 0x12C038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C038u;
        // 0x12c03c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C040u;
}
