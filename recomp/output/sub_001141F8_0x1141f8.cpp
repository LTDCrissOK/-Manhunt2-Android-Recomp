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

// Function: sub_001141F8
// Address: 0x1141f8 - 0x114230
void sub_001141F8_0x1141f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001141F8_0x1141f8");
#endif

    ctx->pc = 0x1141f8u;

    // 0x1141f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1141f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1141fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x114200: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x114200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x114204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11420c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x114210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114210u;
    {
        const bool branch_taken_0x114210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114210) {
            ctx->pc = 0x114224u;
            goto label_114224;
        }
    }
    ctx->pc = 0x114218u;
    // 0x114218: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x114218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x11421c: 0x3e00008  jr          $ra
    ctx->pc = 0x11421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11421Cu;
        // 0x114220: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114224u;
label_114224:
    // 0x114224: 0x3e00008  jr          $ra
    ctx->pc = 0x114224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114224u;
        // 0x114228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11422Cu;
    // 0x11422c: 0x0  nop
    ctx->pc = 0x11422cu;
    // NOP
    ctx->pc = 0x114230u;
}
