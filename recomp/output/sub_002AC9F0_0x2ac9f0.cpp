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

// Function: sub_002AC9F0
// Address: 0x2ac9f0 - 0x2aca18
void sub_002AC9F0_0x2ac9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC9F0_0x2ac9f0");
#endif

    ctx->pc = 0x2ac9f0u;

    // 0x2ac9f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac9f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ac9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac9f8: 0x8c43bd6c  lw          $v1, -0x4294($v0)
    ctx->pc = 0x2ac9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x2ac9fc: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC9FCu;
    {
        const bool branch_taken_0x2ac9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2ACA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9FCu;
        // 0x2aca00: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9fc) {
            ctx->pc = 0x2ACA10u;
            goto label_2aca10;
        }
    }
    ctx->pc = 0x2ACA04u;
    // 0x2aca04: 0x8c622c18  lw          $v0, 0x2C18($v1)
    ctx->pc = 0x2aca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11288)));
    // 0x2aca08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aca0c: 0xac622c18  sw          $v0, 0x2C18($v1)
    ctx->pc = 0x2aca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11288), GPR_U32(ctx, 2));
label_2aca10:
    // 0x2aca10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA18u;
}
