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

// Function: sub_00280F10
// Address: 0x280f10 - 0x280f40
void sub_00280F10_0x280f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F10_0x280f10");
#endif

    ctx->pc = 0x280f10u;

    // 0x280f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280f14: 0x0  nop
    ctx->pc = 0x280f14u;
    // NOP
    // 0x280f18: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x280f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280f1c: 0x0  nop
    ctx->pc = 0x280f1cu;
    // NOP
    // 0x280f20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280F20u;
    {
        const bool branch_taken_0x280f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280f20) {
            ctx->pc = 0x280F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F20u;
            // 0x280f24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F28u;
            goto label_280f28;
        }
    }
    ctx->pc = 0x280F28u;
label_280f28:
    // 0x280f28: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x280F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F2Cu;
        // 0x280f30: 0xe44ccb58  swc1        $f12, -0x34A8($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F34u;
    // 0x280f34: 0x0  nop
    ctx->pc = 0x280f34u;
    // NOP
    // 0x280f38: 0xe44c0034  swc1        $f12, 0x34($v0)
    ctx->pc = 0x280f38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x280f3c: 0x0  nop
    ctx->pc = 0x280f3cu;
    // NOP
    ctx->pc = 0x280f40u;
}
