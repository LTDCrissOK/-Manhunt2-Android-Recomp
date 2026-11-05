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

// Function: sub_001811CC
// Address: 0x1811cc - 0x1811e0
void sub_001811CC_0x1811cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811CC_0x1811cc");
#endif

    ctx->pc = 0x1811ccu;

    // 0x1811cc: 0xe4d0008c  swc1        $f16, 0x8C($a2)
    ctx->pc = 0x1811ccu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 140), bits); }
    // 0x1811d0: 0xe4cc0080  swc1        $f12, 0x80($a2)
    ctx->pc = 0x1811d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x1811d4: 0xe4cd0084  swc1        $f13, 0x84($a2)
    ctx->pc = 0x1811d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    // 0x1811d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1811D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811D8u;
        // 0x1811dc: 0xe4ce0088  swc1        $f14, 0x88($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1811E0u;
}
