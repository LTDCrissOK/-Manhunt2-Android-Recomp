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

// Function: sub_00399BA8
// Address: 0x399ba8 - 0x399be0
void sub_00399BA8_0x399ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399BA8_0x399ba8");
#endif

    ctx->pc = 0x399ba8u;

    // 0x399ba8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x399ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x399bac: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x399bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x399bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399BB0u;
    {
        const bool branch_taken_0x399bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BB0u;
        // 0x399bb4: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399bb0) {
            ctx->pc = 0x399BC0u;
            goto label_399bc0;
        }
    }
    ctx->pc = 0x399BB8u;
    // 0x399bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x399BB8u;
    {
        const bool branch_taken_0x399bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BB8u;
        // 0x399bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399bb8) {
            ctx->pc = 0x399BC4u;
            goto label_399bc4;
        }
    }
    ctx->pc = 0x399BC0u;
label_399bc0:
    // 0x399bc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x399bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_399bc4:
    // 0x399bc4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x399bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x399bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399bcc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x399bccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x399bd0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x399bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x399bd4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x399bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x399bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x399BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BD8u;
        // 0x399bdc: 0xa082004b  sb          $v0, 0x4B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399BE0u;
}
