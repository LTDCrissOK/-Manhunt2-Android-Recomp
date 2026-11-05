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

// Function: sub_0014B7C0
// Address: 0x14b7c0 - 0x14b7f0
void sub_0014B7C0_0x14b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B7C0_0x14b7c0");
#endif

    switch (ctx->pc) {
        case 0x14b7c8u: goto label_14b7c8;
        default: break;
    }

    ctx->pc = 0x14b7c0u;

    // 0x14b7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7c4: 0x0  nop
    ctx->pc = 0x14b7c4u;
    // NOP
label_14b7c8:
    // 0x14b7c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14b7cc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b7d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b7d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14b7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14b7d8: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x14b7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14b7dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B7DCu;
    {
        const bool branch_taken_0x14b7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7DCu;
        // 0x14b7e0: 0xac6005a4  sw          $zero, 0x5A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7dc) {
            ctx->pc = 0x14B7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b7c8;
        }
    }
    ctx->pc = 0x14B7E4u;
    // 0x14b7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7E4u;
        // 0x14b7e8: 0xa0800621  sb          $zero, 0x621($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1569), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B7ECu;
    // 0x14b7ec: 0x0  nop
    ctx->pc = 0x14b7ecu;
    // NOP
    ctx->pc = 0x14b7f0u;
}
