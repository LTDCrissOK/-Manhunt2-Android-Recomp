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

// Function: sub_00207A10
// Address: 0x207a10 - 0x207a38
void sub_00207A10_0x207a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A10_0x207a10");
#endif

    ctx->pc = 0x207a10u;

    // 0x207a10: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x207a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x207a14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x207a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207a18: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x207a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A1Cu;
    {
        const bool branch_taken_0x207a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A1Cu;
        // 0x207a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a1c) {
            ctx->pc = 0x207A2Cu;
            goto label_207a2c;
        }
    }
    ctx->pc = 0x207A24u;
    // 0x207a24: 0x3e00008  jr          $ra
    ctx->pc = 0x207A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A24u;
        // 0x207a28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A2Cu;
label_207a2c:
    // 0x207a2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x207a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a30: 0x3e00008  jr          $ra
    ctx->pc = 0x207A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A30u;
        // 0x207a34: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A38u;
}
