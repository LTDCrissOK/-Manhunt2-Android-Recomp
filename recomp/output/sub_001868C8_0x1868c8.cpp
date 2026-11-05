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

// Function: sub_001868C8
// Address: 0x1868c8 - 0x1868f0
void sub_001868C8_0x1868c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001868C8_0x1868c8");
#endif

    ctx->pc = 0x1868c8u;

    // 0x1868c8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1868cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1868ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1868d0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x1868d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1868d4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1868d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1868d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1868d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1868dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1868e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1868e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1868E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868E4u;
        // 0x1868e8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1868ECu;
    // 0x1868ec: 0x0  nop
    ctx->pc = 0x1868ecu;
    // NOP
    ctx->pc = 0x1868f0u;
}
