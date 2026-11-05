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

// Function: sub_002C4660
// Address: 0x2c4660 - 0x2c4680
void sub_002C4660_0x2c4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4660_0x2c4660");
#endif

    ctx->pc = 0x2c4660u;

    // 0x2c4660: 0xdc820068  ld          $v0, 0x68($a0)
    ctx->pc = 0x2c4660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2c4664: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2c4664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2c4668: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2c4668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x2c466c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c4670: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c4670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c4674: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C467Cu;
    // 0x2c467c: 0x0  nop
    ctx->pc = 0x2c467cu;
    // NOP
    ctx->pc = 0x2c4680u;
}
