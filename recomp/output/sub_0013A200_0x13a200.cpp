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

// Function: sub_0013A200
// Address: 0x13a200 - 0x13a228
void sub_0013A200_0x13a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A200_0x13a200");
#endif

    ctx->pc = 0x13a200u;

    // 0x13a200: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13a200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a204: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a208: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x13a208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13a20c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a210: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x13a214: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x13a214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x13a218: 0x8ca304fc  lw          $v1, 0x4FC($a1)
    ctx->pc = 0x13a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1276)));
    // 0x13a21c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13a220: 0x3e00008  jr          $ra
    ctx->pc = 0x13A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A220u;
        // 0x13a224: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A228u;
}
