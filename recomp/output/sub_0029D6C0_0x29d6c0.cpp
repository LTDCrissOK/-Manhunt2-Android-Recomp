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

// Function: sub_0029D6C0
// Address: 0x29d6c0 - 0x29d6d8
void sub_0029D6C0_0x29d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D6C0_0x29d6c0");
#endif

    ctx->pc = 0x29d6c0u;

    // 0x29d6c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29d6c4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x29d6c8: 0xe44ca940  swc1        $f12, -0x56C0($v0)
    ctx->pc = 0x29d6c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FA940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA940u, _value); } while (0); }
    // 0x29d6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6CCu;
        // 0x29d6d0: 0xe46da944  swc1        $f13, -0x56BC($v1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294945092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D6D4u;
    // 0x29d6d4: 0x0  nop
    ctx->pc = 0x29d6d4u;
    // NOP
    ctx->pc = 0x29d6d8u;
}
