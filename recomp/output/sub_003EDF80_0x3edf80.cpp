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

// Function: sub_003EDF80
// Address: 0x3edf80 - 0x3edf98
void sub_003EDF80_0x3edf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDF80_0x3edf80");
#endif

    ctx->pc = 0x3edf80u;

    // 0x3edf80: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x3edf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3edf84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3edf84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edf88: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x3edf88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3edf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDF94u;
    // 0x3edf94: 0x0  nop
    ctx->pc = 0x3edf94u;
    // NOP
    ctx->pc = 0x3edf98u;
}
