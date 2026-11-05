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

// Function: sub_001A7810
// Address: 0x1a7810 - 0x1a7838
void sub_001A7810_0x1a7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7810_0x1a7810");
#endif

    ctx->pc = 0x1a7810u;

    // 0x1a7810: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a7810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7814: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a7818: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a7818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a781c: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
    // 0x1a7820: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7824: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7828: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1a7828u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a782c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A782Cu;
        // 0x1a7830: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A782Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7834u;
    // 0x1a7834: 0x0  nop
    ctx->pc = 0x1a7834u;
    // NOP
    ctx->pc = 0x1a7838u;
}
