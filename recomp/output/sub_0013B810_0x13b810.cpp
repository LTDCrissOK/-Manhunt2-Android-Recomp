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

// Function: sub_0013B810
// Address: 0x13b810 - 0x13b860
void sub_0013B810_0x13b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B810_0x13b810");
#endif

    ctx->pc = 0x13b810u;

    // 0x13b810: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13b810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b814: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x13b814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x13b818: 0x8cc30ab0  lw          $v1, 0xAB0($a2)
    ctx->pc = 0x13b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2736)));
    // 0x13b81c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x13b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x13b820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b824: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13b828: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x13b82c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b834: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13b838: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x13b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x13b83c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B83Cu;
    {
        const bool branch_taken_0x13b83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b83c) {
            ctx->pc = 0x13B840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B83Cu;
            // 0x13b840: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B84Cu;
            goto label_13b84c;
        }
    }
    ctx->pc = 0x13B844u;
    // 0x13b844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B844u;
    {
        const bool branch_taken_0x13b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B844u;
        // 0x13b848: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b844) {
            ctx->pc = 0x13B854u;
            goto label_13b854;
        }
    }
    ctx->pc = 0x13B84Cu;
label_13b84c:
    // 0x13b84c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b850: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13b854:
    // 0x13b854: 0x3e00008  jr          $ra
    ctx->pc = 0x13B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B854u;
        // 0x13b858: 0xacc30ab4  sw          $v1, 0xAB4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B85Cu;
    // 0x13b85c: 0x0  nop
    ctx->pc = 0x13b85cu;
    // NOP
    ctx->pc = 0x13b860u;
}
