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

// Function: sub_00294AF0
// Address: 0x294af0 - 0x294b00
void sub_00294AF0_0x294af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AF0_0x294af0");
#endif

    ctx->pc = 0x294af0u;

    // 0x294af0: 0xe48d003c  swc1        $f13, 0x3C($a0)
    ctx->pc = 0x294af0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x294af4: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x294af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x294af8: 0x3e00008  jr          $ra
    ctx->pc = 0x294AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AF8u;
        // 0x294afc: 0xe48c0038  swc1        $f12, 0x38($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B00u;
}
