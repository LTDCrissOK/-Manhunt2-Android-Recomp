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

// Function: sub_00247880
// Address: 0x247880 - 0x247898
void sub_00247880_0x247880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247880_0x247880");
#endif

    ctx->pc = 0x247880u;

    // 0x247880: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x247884: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x247884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x247888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24788c: 0x3e00008  jr          $ra
    ctx->pc = 0x24788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247894u;
    // 0x247894: 0x0  nop
    ctx->pc = 0x247894u;
    // NOP
    ctx->pc = 0x247898u;
}
