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

// Function: sub_002BB628
// Address: 0x2bb628 - 0x2bb670
void sub_002BB628_0x2bb628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB628_0x2bb628");
#endif

    switch (ctx->pc) {
        case 0x2bb640u: goto label_2bb640;
        default: break;
    }

    ctx->pc = 0x2bb628u;

    // 0x2bb628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb62c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BB62Cu;
    {
        const bool branch_taken_0x2bb62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB62Cu;
        // 0x2bb630: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb62c) {
            ctx->pc = 0x2BB660u;
            goto label_2bb660;
        }
    }
    ctx->pc = 0x2BB634u;
    // 0x2bb634: 0x24e6cbd0  addiu       $a2, $a3, -0x3430
    ctx->pc = 0x2bb634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953936));
    // 0x2bb638: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2bb638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb63c: 0x0  nop
    ctx->pc = 0x2bb63cu;
    // NOP
label_2bb640:
    // 0x2bb640: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2bb640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2bb644: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2bb644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2bb648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bb64c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB64Cu;
    {
        const bool branch_taken_0x2bb64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB64Cu;
        // 0x2bb650: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb64c) {
            ctx->pc = 0x2BB660u;
            goto label_2bb660;
        }
    }
    ctx->pc = 0x2BB654u;
    // 0x2bb654: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x2bb654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bb658: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB658u;
    {
        const bool branch_taken_0x2bb658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb658) {
            ctx->pc = 0x2BB65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB658u;
            // 0x2bb65c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb640;
        }
    }
    ctx->pc = 0x2BB660u;
label_2bb660:
    // 0x2bb660: 0x24e2cbd0  addiu       $v0, $a3, -0x3430
    ctx->pc = 0x2bb660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953936));
    // 0x2bb664: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2bb664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bb668: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB668u;
        // 0x2bb66c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB670u;
}
