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

// Function: sub_001141C0
// Address: 0x1141c0 - 0x1141f8
void sub_001141C0_0x1141c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001141C0_0x1141c0");
#endif

    ctx->pc = 0x1141c0u;

    // 0x1141c0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1141c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1141c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1141c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1141c8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1141cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1141ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1141d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1141d4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1141d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1141D8u;
    {
        const bool branch_taken_0x1141d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1141d8) {
            ctx->pc = 0x1141ECu;
            goto label_1141ec;
        }
    }
    ctx->pc = 0x1141E0u;
    // 0x1141e0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1141e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1141e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1141E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141E4u;
        // 0x1141e8: 0x8c620098  lw          $v0, 0x98($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1141ECu;
label_1141ec:
    // 0x1141ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1141ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141ECu;
        // 0x1141f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1141F4u;
    // 0x1141f4: 0x0  nop
    ctx->pc = 0x1141f4u;
    // NOP
    ctx->pc = 0x1141f8u;
}
