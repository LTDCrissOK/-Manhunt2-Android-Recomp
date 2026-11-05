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

// Function: sub_002B20B8
// Address: 0x2b20b8 - 0x2b20d0
void sub_002B20B8_0x2b20b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B20B8_0x2b20b8");
#endif

    switch (ctx->pc) {
        case 0x2b20c0u: goto label_2b20c0;
        default: break;
    }

    ctx->pc = 0x2b20b8u;

    // 0x2b20b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B20B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B8u;
        // 0x2b20bc: 0xc4a00088  lwc1        $f0, 0x88($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B20B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B20C0u;
label_2b20c0:
    // 0x2b20c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b20c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B20C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B20C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B20CCu;
    // 0x2b20cc: 0x0  nop
    ctx->pc = 0x2b20ccu;
    // NOP
    ctx->pc = 0x2b20d0u;
}
