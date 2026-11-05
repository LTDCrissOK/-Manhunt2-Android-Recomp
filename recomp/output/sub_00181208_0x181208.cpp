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

// Function: sub_00181208
// Address: 0x181208 - 0x18121c
void sub_00181208_0x181208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181208_0x181208");
#endif

    ctx->pc = 0x181208u;

    // 0x181208: 0xe4d000bc  swc1        $f16, 0xBC($a2)
    ctx->pc = 0x181208u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 188), bits); }
    // 0x18120c: 0xe4cc00b0  swc1        $f12, 0xB0($a2)
    ctx->pc = 0x18120cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 176), bits); }
    // 0x181210: 0xe4cd00b4  swc1        $f13, 0xB4($a2)
    ctx->pc = 0x181210u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 180), bits); }
    // 0x181214: 0x3e00008  jr          $ra
    ctx->pc = 0x181214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181214u;
        // 0x181218: 0xe4ce00b8  swc1        $f14, 0xB8($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18121Cu;
}
