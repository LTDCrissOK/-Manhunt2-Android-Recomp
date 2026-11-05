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

// Function: sub_00275598
// Address: 0x275598 - 0x2755d0
void sub_00275598_0x275598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275598_0x275598");
#endif

    ctx->pc = 0x275598u;

    // 0x275598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27559c: 0x0  nop
    ctx->pc = 0x27559cu;
    // NOP
    // 0x2755a0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2755a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2755a4: 0x0  nop
    ctx->pc = 0x2755a4u;
    // NOP
    // 0x2755a8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2755A8u;
    {
        const bool branch_taken_0x2755a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2755a8) {
            ctx->pc = 0x2755ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2755A8u;
            // 0x2755ac: 0xe48c0388  swc1        $f12, 0x388($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2755C0u;
            goto label_2755c0;
        }
    }
    ctx->pc = 0x2755B0u;
    // 0x2755b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2755b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2755b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2755b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2755b8: 0x0  nop
    ctx->pc = 0x2755b8u;
    // NOP
    // 0x2755bc: 0xe4800388  swc1        $f0, 0x388($a0)
    ctx->pc = 0x2755bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
label_2755c0:
    // 0x2755c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2755C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755C0u;
        // 0x2755c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2755C8u;
    // 0x2755c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2755cc: 0x0  nop
    ctx->pc = 0x2755ccu;
    // NOP
    ctx->pc = 0x2755d0u;
}
