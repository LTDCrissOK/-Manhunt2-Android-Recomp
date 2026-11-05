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

// Function: sub_00181298
// Address: 0x181298 - 0x1812b8
void sub_00181298_0x181298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181298_0x181298");
#endif

    ctx->pc = 0x181298u;

    // 0x181298: 0xe4910160  swc1        $f17, 0x160($a0)
    ctx->pc = 0x181298u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x18129c: 0xe48c0150  swc1        $f12, 0x150($a0)
    ctx->pc = 0x18129cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1812a0: 0xe48d0154  swc1        $f13, 0x154($a0)
    ctx->pc = 0x1812a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x1812a4: 0xe48e0158  swc1        $f14, 0x158($a0)
    ctx->pc = 0x1812a4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x1812a8: 0xe48f015c  swc1        $f15, 0x15C($a0)
    ctx->pc = 0x1812a8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    // 0x1812ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1812ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812ACu;
        // 0x1812b0: 0xe4900164  swc1        $f16, 0x164($a0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1812ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1812B4u;
    // 0x1812b4: 0x0  nop
    ctx->pc = 0x1812b4u;
    // NOP
    ctx->pc = 0x1812b8u;
}
