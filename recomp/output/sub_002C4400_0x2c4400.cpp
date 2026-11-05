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

// Function: sub_002C4400
// Address: 0x2c4400 - 0x2c44b8
void sub_002C4400_0x2c4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4400_0x2c4400");
#endif

    ctx->pc = 0x2c4400u;

    // 0x2c4400: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C4400u;
    {
        const bool branch_taken_0x2c4400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4400) {
            ctx->pc = 0x2C44B0u;
            goto label_2c44b0;
        }
    }
    ctx->pc = 0x2C4408u;
    // 0x2c4408: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c4408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c440c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2c440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4410: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4418: 0x0  nop
    ctx->pc = 0x2c4418u;
    // NOP
    // 0x2c441c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C441Cu;
    {
        const bool branch_taken_0x2c441c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c441c) {
            ctx->pc = 0x2C4420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C441Cu;
            // 0x2c4420: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4424u;
            goto label_2c4424;
        }
    }
    ctx->pc = 0x2C4424u;
label_2c4424:
    // 0x2c4424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c4424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4428: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2c4428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c442c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4434: 0x0  nop
    ctx->pc = 0x2c4434u;
    // NOP
    // 0x2c4438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4438u;
    {
        const bool branch_taken_0x2c4438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4438) {
            ctx->pc = 0x2C443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4438u;
            // 0x2c443c: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4440u;
            goto label_2c4440;
        }
    }
    ctx->pc = 0x2C4440u;
label_2c4440:
    // 0x2c4440: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4444: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c4444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4448: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c444c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c444cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4450: 0x0  nop
    ctx->pc = 0x2c4450u;
    // NOP
    // 0x2c4454: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4454u;
    {
        const bool branch_taken_0x2c4454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4454) {
            ctx->pc = 0x2C4458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4454u;
            // 0x2c4458: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C445Cu;
            goto label_2c445c;
        }
    }
    ctx->pc = 0x2C445Cu;
label_2c445c:
    // 0x2c445c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4460: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4464: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4468: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c446c: 0x0  nop
    ctx->pc = 0x2c446cu;
    // NOP
    // 0x2c4470: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4470u;
    {
        const bool branch_taken_0x2c4470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4470) {
            ctx->pc = 0x2C4474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4470u;
            // 0x2c4474: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4478u;
            goto label_2c4478;
        }
    }
    ctx->pc = 0x2C4478u;
label_2c4478:
    // 0x2c4478: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c447c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2c447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4480: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4488: 0x0  nop
    ctx->pc = 0x2c4488u;
    // NOP
    // 0x2c448c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C448Cu;
    {
        const bool branch_taken_0x2c448c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c448c) {
            ctx->pc = 0x2C4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C448Cu;
            // 0x2c4490: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4494u;
            goto label_2c4494;
        }
    }
    ctx->pc = 0x2C4494u;
label_2c4494:
    // 0x2c4494: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4498: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2c4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c449c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2c449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c44a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c44a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c44a4: 0x0  nop
    ctx->pc = 0x2c44a4u;
    // NOP
    // 0x2c44a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C44A8u;
    {
        const bool branch_taken_0x2c44a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c44a8) {
            ctx->pc = 0x2C44ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C44A8u;
            // 0x2c44ac: 0xe4c10014  swc1        $f1, 0x14($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44B0u;
            goto label_2c44b0;
        }
    }
    ctx->pc = 0x2C44B0u;
label_2c44b0:
    // 0x2c44b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C44B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C44B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C44B8u;
}
