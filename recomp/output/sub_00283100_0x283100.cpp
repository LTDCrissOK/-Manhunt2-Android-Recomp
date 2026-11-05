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

// Function: sub_00283100
// Address: 0x283100 - 0x283130
void sub_00283100_0x283100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283100_0x283100");
#endif

    switch (ctx->pc) {
        case 0x283110u: goto label_283110;
        default: break;
    }

    ctx->pc = 0x283100u;

    // 0x283100: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x283100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283104u;
    {
        const bool branch_taken_0x283104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283104u;
        // 0x283108: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283104) {
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x28310Cu;
    // 0x28310c: 0x0  nop
    ctx->pc = 0x28310cu;
    // NOP
label_283110:
    // 0x283110: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x283110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x283114: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x283114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283118: 0x0  nop
    ctx->pc = 0x283118u;
    // NOP
    // 0x28311c: 0x0  nop
    ctx->pc = 0x28311cu;
    // NOP
    // 0x283120: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x283120u;
    {
        const bool branch_taken_0x283120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283120u;
        // 0x283124: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283120) {
            ctx->pc = 0x283110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283110;
        }
    }
    ctx->pc = 0x283128u;
label_283128:
    // 0x283128: 0x3e00008  jr          $ra
    ctx->pc = 0x283128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283128u;
        // 0x28312c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283130u;
}
