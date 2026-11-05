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

// Function: sub_00115B40
// Address: 0x115b40 - 0x115b70
void sub_00115B40_0x115b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115B40_0x115b40");
#endif

    switch (ctx->pc) {
        case 0x115b48u: goto label_115b48;
        default: break;
    }

    ctx->pc = 0x115b40u;

    // 0x115b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b44: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_115b48:
    // 0x115b48: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115b4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115b50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x115b54: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x115b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x115b58: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x115b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x115b5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115B5Cu;
    {
        const bool branch_taken_0x115b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B5Cu;
        // 0x115b60: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b5c) {
            ctx->pc = 0x115B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b48;
        }
    }
    ctx->pc = 0x115B64u;
    // 0x115b64: 0x3e00008  jr          $ra
    ctx->pc = 0x115B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B64u;
        // 0x115b68: 0xa0800040  sb          $zero, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115B6Cu;
    // 0x115b6c: 0x0  nop
    ctx->pc = 0x115b6cu;
    // NOP
    ctx->pc = 0x115b70u;
}
