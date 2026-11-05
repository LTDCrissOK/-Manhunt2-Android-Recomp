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

// Function: sub_003DA7B8
// Address: 0x3da7b8 - 0x3da7d8
void sub_003DA7B8_0x3da7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA7B8_0x3da7b8");
#endif

    ctx->pc = 0x3da7b8u;

    // 0x3da7b8: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x3da7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3da7bc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x3da7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3da7c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3da7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3da7c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3da7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3da7c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3da7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3da7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7CCu;
        // 0x3da7d0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA7D4u;
    // 0x3da7d4: 0x0  nop
    ctx->pc = 0x3da7d4u;
    // NOP
    ctx->pc = 0x3da7d8u;
}
