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

// Function: sub_0010CA70
// Address: 0x10ca70 - 0x10caa0
void sub_0010CA70_0x10ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA70_0x10ca70");
#endif

    switch (ctx->pc) {
        case 0x10ca78u: goto label_10ca78;
        default: break;
    }

    ctx->pc = 0x10ca70u;

    // 0x10ca70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ca70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca74: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x10ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_10ca78:
    // 0x10ca78: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x10ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10ca7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ca80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x10ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10ca84: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x10ca84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10ca88: 0x2ca20030  sltiu       $v0, $a1, 0x30
    ctx->pc = 0x10ca88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x10ca8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CA8Cu;
    {
        const bool branch_taken_0x10ca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA8Cu;
        // 0x10ca90: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca8c) {
            ctx->pc = 0x10CA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ca78;
        }
    }
    ctx->pc = 0x10CA94u;
    // 0x10ca94: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA94u;
        // 0x10ca98: 0xa08000cc  sb          $zero, 0xCC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA9Cu;
    // 0x10ca9c: 0x0  nop
    ctx->pc = 0x10ca9cu;
    // NOP
    ctx->pc = 0x10caa0u;
}
