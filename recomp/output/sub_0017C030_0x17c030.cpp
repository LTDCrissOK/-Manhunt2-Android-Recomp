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

// Function: sub_0017C030
// Address: 0x17c030 - 0x17c048
void sub_0017C030_0x17c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C030_0x17c030");
#endif

    ctx->pc = 0x17c030u;

    // 0x17c030: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c034: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x17c034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17c038: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x17c038u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x17c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C044u;
    // 0x17c044: 0x0  nop
    ctx->pc = 0x17c044u;
    // NOP
    ctx->pc = 0x17c048u;
}
