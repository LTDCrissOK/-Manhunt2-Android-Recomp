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

// Function: sub_001F9B90
// Address: 0x1f9b90 - 0x1f9c10
void sub_001F9B90_0x1f9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B90_0x1f9b90");
#endif

    ctx->pc = 0x1f9b90u;

    // 0x1f9b90: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1f9b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9b94: 0x460c1032  c.eq.s      $f2, $f12
    ctx->pc = 0x1f9b94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9b98: 0x0  nop
    ctx->pc = 0x1f9b98u;
    // NOP
    // 0x1f9b9c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9B9Cu;
    {
        const bool branch_taken_0x1f9b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9b9c) {
            ctx->pc = 0x1F9C08u;
            goto label_1f9c08;
        }
    }
    ctx->pc = 0x1F9BA4u;
    // 0x1f9ba4: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1f9ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9ba8: 0x0  nop
    ctx->pc = 0x1f9ba8u;
    // NOP
    // 0x1f9bac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1F9BACu;
    {
        const bool branch_taken_0x1f9bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BACu;
        // 0x1f9bb0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bac) {
            ctx->pc = 0x1F9BDCu;
            goto label_1f9bdc;
        }
    }
    ctx->pc = 0x1F9BB4u;
    // 0x1f9bb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1f9bb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9bbc: 0xc4602b30  lwc1        $f0, 0x2B30($v1)
    ctx->pc = 0x1f9bbcu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9bc0: 0xc441161c  lwc1        $f1, 0x161C($v0)
    ctx->pc = 0x1f9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9bc4: 0x0  nop
    ctx->pc = 0x1f9bc4u;
    // NOP
    // 0x1f9bc8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f9bc8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f9bcc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1f9bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f9bd0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1f9bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9bd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9BD4u;
    {
        const bool branch_taken_0x1f9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BD4u;
        // 0x1f9bd8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bd4) {
            ctx->pc = 0x1F9C00u;
            goto label_1f9c00;
        }
    }
    ctx->pc = 0x1F9BDCu;
label_1f9bdc:
    // 0x1f9bdc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1f9be0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9be4: 0xc4602b30  lwc1        $f0, 0x2B30($v1)
    ctx->pc = 0x1f9be4u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9be8: 0xc441161c  lwc1        $f1, 0x161C($v0)
    ctx->pc = 0x1f9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9bec: 0x0  nop
    ctx->pc = 0x1f9becu;
    // NOP
    // 0x1f9bf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f9bf0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f9bf4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f9bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f9bf8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1f9bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9bfc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f9bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f9c00:
    // 0x1f9c00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9C00u;
    {
        const bool branch_taken_0x1f9c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9c00) {
            ctx->pc = 0x1F9C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9C00u;
            // 0x1f9c04: 0xe4ac0000  swc1        $f12, 0x0($a1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C08u;
            goto label_1f9c08;
        }
    }
    ctx->pc = 0x1F9C08u;
label_1f9c08:
    // 0x1f9c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C10u;
}
