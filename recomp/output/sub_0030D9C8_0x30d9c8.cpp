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

// Function: sub_0030D9C8
// Address: 0x30d9c8 - 0x30d9e8
void sub_0030D9C8_0x30d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D9C8_0x30d9c8");
#endif

    ctx->pc = 0x30d9c8u;

    // 0x30d9c8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x30d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x30d9cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30d9d0: 0x2442bbb0  addiu       $v0, $v0, -0x4450
    ctx->pc = 0x30d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
    // 0x30d9d4: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x30d9d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x30d9d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30d9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9DCu;
        // 0x30d9e0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D9E4u;
    // 0x30d9e4: 0x0  nop
    ctx->pc = 0x30d9e4u;
    // NOP
    ctx->pc = 0x30d9e8u;
}
