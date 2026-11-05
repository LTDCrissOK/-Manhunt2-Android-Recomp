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

// Function: sub_003049E0
// Address: 0x3049e0 - 0x304a08
void sub_003049E0_0x3049e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003049E0_0x3049e0");
#endif

    ctx->pc = 0x3049e0u;

    // 0x3049e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3049e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3049e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049e8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3049e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3049ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3049f0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3049f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3049f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3049f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3049fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3049FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049FCu;
        // 0x304a00: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3049FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304A04u;
    // 0x304a04: 0x0  nop
    ctx->pc = 0x304a04u;
    // NOP
    ctx->pc = 0x304a08u;
}
