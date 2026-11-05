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

// Function: sub_0025C788
// Address: 0x25c788 - 0x25c7c0
void sub_0025C788_0x25c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C788_0x25c788");
#endif

    ctx->pc = 0x25c788u;

    // 0x25c788: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x25c788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x25c78c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25c78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c790: 0x8c623d90  lw          $v0, 0x3D90($v1)
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D90u));
    // 0x25c794: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x25c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c798: 0x24633d90  addiu       $v1, $v1, 0x3D90
    ctx->pc = 0x25c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15760));
    // 0x25c79c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c7a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c7a4: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x25c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x25c7a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25c7ac: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x25C7ACu;
    {
        const bool branch_taken_0x25c7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x25c7ac) {
            ctx->pc = 0x25C7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7ACu;
            // 0x25c7b0: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7B4u;
            goto label_25c7b4;
        }
    }
    ctx->pc = 0x25C7B4u;
label_25c7b4:
    // 0x25c7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C7BCu;
    // 0x25c7bc: 0x0  nop
    ctx->pc = 0x25c7bcu;
    // NOP
    ctx->pc = 0x25c7c0u;
}
