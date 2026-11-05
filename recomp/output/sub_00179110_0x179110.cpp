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

// Function: sub_00179110
// Address: 0x179110 - 0x179148
void sub_00179110_0x179110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179110_0x179110");
#endif

    ctx->pc = 0x179110u;

    // 0x179110: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x179110u;
    {
        const bool branch_taken_0x179110 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x179110) {
            ctx->pc = 0x179114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179110u;
            // 0x179114: 0xac860598  sw          $a2, 0x598($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179134u;
            goto label_179134;
        }
    }
    ctx->pc = 0x179118u;
    // 0x179118: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x179118u;
    {
        const bool branch_taken_0x179118 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x179118) {
            ctx->pc = 0x17911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179118u;
            // 0x17911c: 0xac860598  sw          $a2, 0x598($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179134u;
            goto label_179134;
        }
    }
    ctx->pc = 0x179120u;
    // 0x179120: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x179124: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x179128: 0xac820598  sw          $v0, 0x598($a0)
    ctx->pc = 0x179128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 2));
    // 0x17912c: 0x3e00008  jr          $ra
    ctx->pc = 0x17912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17912Cu;
        // 0x179130: 0xac830594  sw          $v1, 0x594($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179134u;
label_179134:
    // 0x179134: 0x3e00008  jr          $ra
    ctx->pc = 0x179134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179134u;
        // 0x179138: 0xac850594  sw          $a1, 0x594($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1428), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17913Cu;
    // 0x17913c: 0x0  nop
    ctx->pc = 0x17913cu;
    // NOP
    // 0x179140: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x179140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x179144: 0x0  nop
    ctx->pc = 0x179144u;
    // NOP
    ctx->pc = 0x179148u;
}
