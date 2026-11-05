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

// Function: sub_0013AAF8
// Address: 0x13aaf8 - 0x13ab10
void sub_0013AAF8_0x13aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AAF8_0x13aaf8");
#endif

    ctx->pc = 0x13aaf8u;

    // 0x13aaf8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13aaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13aafc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13ab00: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x13ab00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13ab04: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB08u;
        // 0x13ab0c: 0xaca0052c  sw          $zero, 0x52C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB10u;
}
