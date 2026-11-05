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

// Function: sub_003DA620
// Address: 0x3da620 - 0x3da658
void sub_003DA620_0x3da620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA620_0x3da620");
#endif

    ctx->pc = 0x3da620u;

    // 0x3da620: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3da620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3da624: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA624u;
    {
        const bool branch_taken_0x3da624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da624) {
            ctx->pc = 0x3DA628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA624u;
            // 0x3da628: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA648u;
            goto label_3da648;
        }
    }
    ctx->pc = 0x3DA62Cu;
    // 0x3da62c: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3da62cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3da630: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3da630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3da634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da638: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3da638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3da63c: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x3da63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x3da640: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA640u;
        // 0x3da644: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA648u;
label_3da648:
    // 0x3da648: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3da648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3da64c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA64Cu;
        // 0x3da650: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA654u;
    // 0x3da654: 0x0  nop
    ctx->pc = 0x3da654u;
    // NOP
    ctx->pc = 0x3da658u;
}
