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

// Function: sub_00271530
// Address: 0x271530 - 0x271540
void sub_00271530_0x271530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271530_0x271530");
#endif

    ctx->pc = 0x271530u;

    // 0x271530: 0xe48c02a8  swc1        $f12, 0x2A8($a0)
    ctx->pc = 0x271530u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
    // 0x271534: 0x3e00008  jr          $ra
    ctx->pc = 0x271534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271534u;
        // 0x271538: 0xe48c02a4  swc1        $f12, 0x2A4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27153Cu;
    // 0x27153c: 0x0  nop
    ctx->pc = 0x27153cu;
    // NOP
    ctx->pc = 0x271540u;
}
