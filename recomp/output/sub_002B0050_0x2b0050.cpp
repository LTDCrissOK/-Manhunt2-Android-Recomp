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

// Function: sub_002B0050
// Address: 0x2b0050 - 0x2b0078
void sub_002B0050_0x2b0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0050_0x2b0050");
#endif

    switch (ctx->pc) {
        case 0x2b0058u: goto label_2b0058;
        default: break;
    }

    ctx->pc = 0x2b0050u;

    // 0x2b0050: 0x24840738  addiu       $a0, $a0, 0x738
    ctx->pc = 0x2b0050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    // 0x2b0054: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2b0054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2b0058:
    // 0x2b0058: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2b0058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2b005c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b0060: 0x0  nop
    ctx->pc = 0x2b0060u;
    // NOP
    // 0x2b0064: 0x0  nop
    ctx->pc = 0x2b0064u;
    // NOP
    // 0x2b0068: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B0068u;
    {
        const bool branch_taken_0x2b0068 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0068u;
        // 0x2b006c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0068) {
            ctx->pc = 0x2B0058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0058;
        }
    }
    ctx->pc = 0x2B0070u;
    // 0x2b0070: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0078u;
}
