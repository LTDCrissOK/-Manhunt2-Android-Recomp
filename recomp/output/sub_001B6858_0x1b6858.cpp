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

// Function: sub_001B6858
// Address: 0x1b6858 - 0x1b68d0
void sub_001B6858_0x1b6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6858_0x1b6858");
#endif

    ctx->pc = 0x1b6858u;

    // 0x1b6858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b685c: 0x0  nop
    ctx->pc = 0x1b685cu;
    // NOP
    // 0x1b6860: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b6860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6864: 0x0  nop
    ctx->pc = 0x1b6864u;
    // NOP
    // 0x1b6868: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B6868u;
    {
        const bool branch_taken_0x1b6868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6868) {
            ctx->pc = 0x1B68C4u;
            goto label_1b68c4;
        }
    }
    ctx->pc = 0x1B6870u;
    // 0x1b6870: 0xc4800134  lwc1        $f0, 0x134($a0)
    ctx->pc = 0x1b6870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6874: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b6874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6878: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b6878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b687c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b687cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6880: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1B6880u;
    {
        const bool branch_taken_0x1b6880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6880) {
            ctx->pc = 0x1B6884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6880u;
            // 0x1b6884: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68BCu;
            goto label_1b68bc;
        }
    }
    ctx->pc = 0x1B6888u;
    // 0x1b6888: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x1b6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b688c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b688cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6890: 0x0  nop
    ctx->pc = 0x1b6890u;
    // NOP
    // 0x1b6894: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6894u;
    {
        const bool branch_taken_0x1b6894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6894) {
            ctx->pc = 0x1B6898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6894u;
            // 0x1b6898: 0xc4800144  lwc1        $f0, 0x144($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68A4u;
            goto label_1b68a4;
        }
    }
    ctx->pc = 0x1B689Cu;
    // 0x1b689c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B689Cu;
    {
        const bool branch_taken_0x1b689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B689Cu;
        // 0x1b68a0: 0xc4800138  lwc1        $f0, 0x138($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b689c) {
            ctx->pc = 0x1B68B8u;
            goto label_1b68b8;
        }
    }
    ctx->pc = 0x1B68A4u;
label_1b68a4:
    // 0x1b68a4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b68a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b68a8: 0x0  nop
    ctx->pc = 0x1b68a8u;
    // NOP
    // 0x1b68ac: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B68B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0xc4800148  lwc1        $f0, 0x148($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68B8u;
            goto label_1b68b8;
        }
    }
    ctx->pc = 0x1B68B4u;
    // 0x1b68b4: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x1b68b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b68b8:
    // 0x1b68b8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1b68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1b68bc:
    // 0x1b68bc: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1b68c0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b68c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_1b68c4:
    // 0x1b68c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B68C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B68CCu;
    // 0x1b68cc: 0x0  nop
    ctx->pc = 0x1b68ccu;
    // NOP
    ctx->pc = 0x1b68d0u;
}
