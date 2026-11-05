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

// Function: sub_00181260
// Address: 0x181260 - 0x181278
void sub_00181260_0x181260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181260_0x181260");
#endif

    ctx->pc = 0x181260u;

    // 0x181260: 0xe48f00fc  swc1        $f15, 0xFC($a0)
    ctx->pc = 0x181260u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x181264: 0xe48c00f0  swc1        $f12, 0xF0($a0)
    ctx->pc = 0x181264u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x181268: 0xe48d00f4  swc1        $f13, 0xF4($a0)
    ctx->pc = 0x181268u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x18126c: 0x3e00008  jr          $ra
    ctx->pc = 0x18126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18126Cu;
        // 0x181270: 0xe48e00f8  swc1        $f14, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181274u;
    // 0x181274: 0x0  nop
    ctx->pc = 0x181274u;
    // NOP
    ctx->pc = 0x181278u;
}
