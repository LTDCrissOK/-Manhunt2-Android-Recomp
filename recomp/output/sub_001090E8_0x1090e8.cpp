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

// Function: sub_001090E8
// Address: 0x1090e8 - 0x109108
void sub_001090E8_0x1090e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001090E8_0x1090e8");
#endif

    ctx->pc = 0x1090e8u;

    // 0x1090e8: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x1090e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x1090ec: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1090ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1090f0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1090f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1090f4: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1090f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1090f8: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1090f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1090fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1090FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090FCu;
        // 0x109100: 0xac88001c  sw          $t0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109104u;
    // 0x109104: 0x0  nop
    ctx->pc = 0x109104u;
    // NOP
    ctx->pc = 0x109108u;
}
