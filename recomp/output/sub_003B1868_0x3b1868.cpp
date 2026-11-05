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

// Function: sub_003B1868
// Address: 0x3b1868 - 0x3b1890
void sub_003B1868_0x3b1868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1868_0x3b1868");
#endif

    ctx->pc = 0x3b1868u;

    // 0x3b1868: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b1868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b186c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b186cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1870: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x3b1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x3b1874: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b1874u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x424C58u));
    // 0x3b1878: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b1878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b187c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B187Cu;
        // 0x3b1880: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1884u;
    // 0x3b1884: 0x0  nop
    ctx->pc = 0x3b1884u;
    // NOP
    // 0x3b1888: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3b188c: 0x0  nop
    ctx->pc = 0x3b188cu;
    // NOP
    ctx->pc = 0x3b1890u;
}
