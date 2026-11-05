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

// Function: sub_001811F4
// Address: 0x1811f4 - 0x181208
void sub_001811F4_0x1811f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811F4_0x1811f4");
#endif

    ctx->pc = 0x1811f4u;

    // 0x1811f4: 0xe4d000ac  swc1        $f16, 0xAC($a2)
    ctx->pc = 0x1811f4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 172), bits); }
    // 0x1811f8: 0xe4cc00a0  swc1        $f12, 0xA0($a2)
    ctx->pc = 0x1811f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
    // 0x1811fc: 0xe4cd00a4  swc1        $f13, 0xA4($a2)
    ctx->pc = 0x1811fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 164), bits); }
    // 0x181200: 0x3e00008  jr          $ra
    ctx->pc = 0x181200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181200u;
        // 0x181204: 0xe4ce00a8  swc1        $f14, 0xA8($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181208u;
}
