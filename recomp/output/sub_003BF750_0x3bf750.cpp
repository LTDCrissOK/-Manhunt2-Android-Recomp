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

// Function: sub_003BF750
// Address: 0x3bf750 - 0x3bf780
void sub_003BF750_0x3bf750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF750_0x3bf750");
#endif

    switch (ctx->pc) {
        case 0x3bf760u: goto label_3bf760;
        default: break;
    }

    ctx->pc = 0x3bf750u;

    // 0x3bf750: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF750u;
    {
        const bool branch_taken_0x3bf750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF750u;
        // 0x3bf754: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf750) {
            ctx->pc = 0x3BF778u;
            goto label_3bf778;
        }
    }
    ctx->pc = 0x3BF758u;
    // 0x3bf758: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3bf758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3bf75c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3bf75cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3bf760:
    // 0x3bf760: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf764: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bf764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bf768: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf76c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3bf76cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bf770: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BF770u;
    {
        const bool branch_taken_0x3bf770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3BF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF770u;
        // 0x3bf774: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf770) {
            ctx->pc = 0x3BF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf760;
        }
    }
    ctx->pc = 0x3BF778u;
label_3bf778:
    // 0x3bf778: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF780u;
}
