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

// Function: sub_002E3158
// Address: 0x2e3158 - 0x2e3170
void sub_002E3158_0x2e3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3158_0x2e3158");
#endif

    ctx->pc = 0x2e3158u;

    // 0x2e3158: 0x460e7b80  add.s       $f14, $f15, $f14
    ctx->pc = 0x2e3158u;
    ctx->f[14] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x2e315c: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x2e315cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2e3160: 0xe48d0044  swc1        $f13, 0x44($a0)
    ctx->pc = 0x2e3160u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2e3164: 0xe48f0048  swc1        $f15, 0x48($a0)
    ctx->pc = 0x2e3164u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2e3168: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3168u;
        // 0x2e316c: 0xe48e004c  swc1        $f14, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3170u;
}
