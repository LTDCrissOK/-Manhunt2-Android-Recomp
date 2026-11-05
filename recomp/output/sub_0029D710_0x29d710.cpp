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

// Function: sub_0029D710
// Address: 0x29d710 - 0x29d730
void sub_0029D710_0x29d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D710_0x29d710");
#endif

    ctx->pc = 0x29d710u;

    // 0x29d710: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29d710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29d714: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x29d718: 0xc440a940  lwc1        $f0, -0x56C0($v0)
    ctx->pc = 0x29d718u;
    { uint32_t bits = FAST_READ32(0x3FA940u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d71c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29d720: 0xc461a944  lwc1        $f1, -0x56BC($v1)
    ctx->pc = 0x29d720u;
    { uint32_t bits = FAST_READ32(0x3FA944u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d724: 0x3e00008  jr          $ra
    ctx->pc = 0x29D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D724u;
        // 0x29d728: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D72Cu;
    // 0x29d72c: 0x0  nop
    ctx->pc = 0x29d72cu;
    // NOP
    ctx->pc = 0x29d730u;
}
