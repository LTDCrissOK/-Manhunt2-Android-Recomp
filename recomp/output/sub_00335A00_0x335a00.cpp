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

// Function: sub_00335A00
// Address: 0x335a00 - 0x335a38
void sub_00335A00_0x335a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335A00_0x335a00");
#endif

    ctx->pc = 0x335a00u;

    // 0x335a00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x335a04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x335a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x335a08: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x335a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x335a0c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335A0Cu;
    {
        const bool branch_taken_0x335a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A0Cu;
        // 0x335a10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a0c) {
            ctx->pc = 0x335A2Cu;
            goto label_335a2c;
        }
    }
    ctx->pc = 0x335A14u;
    // 0x335a14: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x335a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x335a18: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x335A18u;
    {
        const bool branch_taken_0x335a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x335A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A18u;
        // 0x335a1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a18) {
            ctx->pc = 0x335A2Cu;
            goto label_335a2c;
        }
    }
    ctx->pc = 0x335A20u;
    // 0x335a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a24: 0x3e00008  jr          $ra
    ctx->pc = 0x335A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A24u;
        // 0x335a28: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335A2Cu;
label_335a2c:
    // 0x335a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x335A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A2Cu;
        // 0x335a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335A34u;
    // 0x335a34: 0x0  nop
    ctx->pc = 0x335a34u;
    // NOP
    ctx->pc = 0x335a38u;
}
