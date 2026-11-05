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

// Function: sub_00114230
// Address: 0x114230 - 0x114260
void sub_00114230_0x114230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114230_0x114230");
#endif

    switch (ctx->pc) {
        case 0x114238u: goto label_114238;
        default: break;
    }

    ctx->pc = 0x114230u;

    // 0x114230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114234: 0x24860154  addiu       $a2, $a0, 0x154
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
label_114238:
    // 0x114238: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x114238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11423c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114240: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x114244: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x114244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114248: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x114248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x11424c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11424Cu;
    {
        const bool branch_taken_0x11424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11424Cu;
        // 0x114250: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11424c) {
            ctx->pc = 0x114238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114238;
        }
    }
    ctx->pc = 0x114254u;
    // 0x114254: 0x3e00008  jr          $ra
    ctx->pc = 0x114254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114254u;
        // 0x114258: 0xa08001b4  sb          $zero, 0x1B4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11425Cu;
    // 0x11425c: 0x0  nop
    ctx->pc = 0x11425cu;
    // NOP
    ctx->pc = 0x114260u;
}
