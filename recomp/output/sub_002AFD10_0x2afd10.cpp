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

// Function: sub_002AFD10
// Address: 0x2afd10 - 0x2afd48
void sub_002AFD10_0x2afd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFD10_0x2afd10");
#endif

    switch (ctx->pc) {
        case 0x2afd20u: goto label_2afd20;
        default: break;
    }

    ctx->pc = 0x2afd10u;

    // 0x2afd10: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2afd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2afd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afd18: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2afd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2afd1c: 0x0  nop
    ctx->pc = 0x2afd1cu;
    // NOP
label_2afd20:
    // 0x2afd20: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2afd20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2afd24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2afd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2afd28: 0x0  nop
    ctx->pc = 0x2afd28u;
    // NOP
    // 0x2afd2c: 0x0  nop
    ctx->pc = 0x2afd2cu;
    // NOP
    // 0x2afd30: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AFD30u;
    {
        const bool branch_taken_0x2afd30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD30u;
        // 0x2afd34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd30) {
            ctx->pc = 0x2AFD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afd20;
        }
    }
    ctx->pc = 0x2AFD38u;
    // 0x2afd38: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFD40u;
    // 0x2afd40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2afd44: 0x0  nop
    ctx->pc = 0x2afd44u;
    // NOP
    ctx->pc = 0x2afd48u;
}
