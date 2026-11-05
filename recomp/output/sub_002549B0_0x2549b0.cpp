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

// Function: sub_002549B0
// Address: 0x2549b0 - 0x2549d0
void sub_002549B0_0x2549b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002549B0_0x2549b0");
#endif

    ctx->pc = 0x2549b0u;

    // 0x2549b0: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x2549b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x2549b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2549b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2549b8: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2549b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x2549bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2549bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2549c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2549c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2549c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2549C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2549C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2549CCu;
    // 0x2549cc: 0x0  nop
    ctx->pc = 0x2549ccu;
    // NOP
    ctx->pc = 0x2549d0u;
}
