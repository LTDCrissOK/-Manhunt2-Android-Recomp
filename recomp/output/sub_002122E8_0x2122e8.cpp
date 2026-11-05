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

// Function: sub_002122E8
// Address: 0x2122e8 - 0x212300
void sub_002122E8_0x2122e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002122E8_0x2122e8");
#endif

    ctx->pc = 0x2122e8u;

    // 0x2122e8: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2122e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2122ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2122f0: 0xac85013c  sw          $a1, 0x13C($a0)
    ctx->pc = 0x2122f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 5));
    // 0x2122f4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2122f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2122f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2122F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F8u;
        // 0x2122fc: 0xac8300c0  sw          $v1, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212300u;
}
