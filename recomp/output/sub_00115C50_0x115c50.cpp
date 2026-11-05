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

// Function: sub_00115C50
// Address: 0x115c50 - 0x115c80
void sub_00115C50_0x115c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C50_0x115c50");
#endif

    switch (ctx->pc) {
        case 0x115c58u: goto label_115c58;
        default: break;
    }

    ctx->pc = 0x115c50u;

    // 0x115c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c54: 0x24860044  addiu       $a2, $a0, 0x44
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_115c58:
    // 0x115c58: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115c5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115c60: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x115c64: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x115c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x115c68: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x115c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x115c6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C6Cu;
        // 0x115c70: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c58;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0x3e00008  jr          $ra
    ctx->pc = 0x115C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C74u;
        // 0x115c78: 0xa0800074  sb          $zero, 0x74($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C7Cu;
    // 0x115c7c: 0x0  nop
    ctx->pc = 0x115c7cu;
    // NOP
    ctx->pc = 0x115c80u;
}
