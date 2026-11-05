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

// Function: sub_002663B8
// Address: 0x2663b8 - 0x2663c8
void sub_002663B8_0x2663b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002663B8_0x2663b8");
#endif

    ctx->pc = 0x2663b8u;

    // 0x2663b8: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x2663b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x2663bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2663BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663BCu;
        // 0x2663c0: 0xc44000f4  lwc1        $f0, 0xF4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663C4u;
    // 0x2663c4: 0x0  nop
    ctx->pc = 0x2663c4u;
    // NOP
    ctx->pc = 0x2663c8u;
}
