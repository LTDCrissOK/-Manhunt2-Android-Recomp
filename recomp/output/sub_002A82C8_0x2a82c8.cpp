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

// Function: sub_002A82C8
// Address: 0x2a82c8 - 0x2a82d8
void sub_002A82C8_0x2a82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82C8_0x2a82c8");
#endif

    ctx->pc = 0x2a82c8u;

    // 0x2a82c8: 0xe48d0008  swc1        $f13, 0x8($a0)
    ctx->pc = 0x2a82c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a82cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82CCu;
        // 0x2a82d0: 0xe48c0004  swc1        $f12, 0x4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82D4u;
    // 0x2a82d4: 0x0  nop
    ctx->pc = 0x2a82d4u;
    // NOP
    ctx->pc = 0x2a82d8u;
}
