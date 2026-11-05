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

// Function: sub_00277780
// Address: 0x277780 - 0x2777b0
void sub_00277780_0x277780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277780_0x277780");
#endif

    ctx->pc = 0x277780u;

    // 0x277780: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x277780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x277784: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x277784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x277788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x277788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27778c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x27778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x277790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277794: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x277794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x277798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27779c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x27779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2777a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2777a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2777a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2777A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777A4u;
        // 0x2777a8: 0xa0460001  sb          $a2, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2777A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2777ACu;
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
    ctx->pc = 0x2777b0u;
}
