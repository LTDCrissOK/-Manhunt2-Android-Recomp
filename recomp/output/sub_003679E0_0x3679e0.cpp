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

// Function: sub_003679E0
// Address: 0x3679e0 - 0x367a00
void sub_003679E0_0x3679e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003679E0_0x3679e0");
#endif

    ctx->pc = 0x3679e0u;

    // 0x3679e0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3679e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3679e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3679e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3679e8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3679e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3679ec: 0x0  nop
    ctx->pc = 0x3679ecu;
    // NOP
    // 0x3679f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3679f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3679f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3679f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3679f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3679F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3679F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367A00u;
}
