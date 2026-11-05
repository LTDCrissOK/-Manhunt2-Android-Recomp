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

// Function: sub_0037F7D8
// Address: 0x37f7d8 - 0x37f7f0
void sub_0037F7D8_0x37f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F7D8_0x37f7d8");
#endif

    ctx->pc = 0x37f7d8u;

    // 0x37f7d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f7dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f7e0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x37f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37f7e4: 0x528c2  srl         $a1, $a1, 3
    ctx->pc = 0x37f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x37f7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7E8u;
        // 0x37f7ec: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F7F0u;
}
