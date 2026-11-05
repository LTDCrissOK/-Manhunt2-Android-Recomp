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

// Function: sub_003808A8
// Address: 0x3808a8 - 0x3808e8
void sub_003808A8_0x3808a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003808A8_0x3808a8");
#endif

    switch (ctx->pc) {
        case 0x3808b8u: goto label_3808b8;
        default: break;
    }

    ctx->pc = 0x3808a8u;

    // 0x3808a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3808ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3808acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3808b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3808B0u;
    {
        const bool branch_taken_0x3808b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3808B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808B0u;
        // 0x3808b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808b0) {
            ctx->pc = 0x3808D0u;
            goto label_3808d0;
        }
    }
    ctx->pc = 0x3808B8u;
label_3808b8:
    // 0x3808b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3808b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3808bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3808bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3808c0: 0x0  nop
    ctx->pc = 0x3808c0u;
    // NOP
    // 0x3808c4: 0x0  nop
    ctx->pc = 0x3808c4u;
    // NOP
    // 0x3808c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3808C8u;
    {
        const bool branch_taken_0x3808c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3808CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808C8u;
        // 0x3808cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3808c8) {
            ctx->pc = 0x3808B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3808b8;
        }
    }
    ctx->pc = 0x3808D0u;
label_3808d0:
    // 0x3808d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3808D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3808D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808D0u;
        // 0x3808d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3808D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3808D8u;
    // 0x3808d8: 0x0  nop
    ctx->pc = 0x3808d8u;
    // NOP
    // 0x3808dc: 0x0  nop
    ctx->pc = 0x3808dcu;
    // NOP
    // 0x3808e0: 0x0  nop
    ctx->pc = 0x3808e0u;
    // NOP
    // 0x3808e4: 0x0  nop
    ctx->pc = 0x3808e4u;
    // NOP
    ctx->pc = 0x3808e8u;
}
