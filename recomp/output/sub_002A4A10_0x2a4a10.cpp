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

// Function: sub_002A4A10
// Address: 0x2a4a10 - 0x2a4b40
void sub_002A4A10_0x2a4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4A10_0x2a4a10");
#endif

    ctx->pc = 0x2a4a10u;

    // 0x2a4a10: 0xc48101b8  lwc1        $f1, 0x1B8($a0)
    ctx->pc = 0x2a4a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4a14: 0xc48001bc  lwc1        $f0, 0x1BC($a0)
    ctx->pc = 0x2a4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4a1c: 0x0  nop
    ctx->pc = 0x2a4a1cu;
    // NOP
    // 0x2a4a20: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x2A4A20u;
    {
        const bool branch_taken_0x2a4a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a20) {
            ctx->pc = 0x2A4B34u;
            goto label_2a4b34;
        }
    }
    ctx->pc = 0x2A4A28u;
    // 0x2a4a28: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a4a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a4a2c: 0x0  nop
    ctx->pc = 0x2a4a2cu;
    // NOP
    // 0x2a4a30: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2a4a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4a34: 0x0  nop
    ctx->pc = 0x2a4a34u;
    // NOP
    // 0x2a4a38: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4A38u;
    {
        const bool branch_taken_0x2a4a38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a38) {
            ctx->pc = 0x2A4A5Cu;
            goto label_2a4a5c;
        }
    }
    ctx->pc = 0x2A4A40u;
    // 0x2a4a40: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2a4a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2a4a44: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a4a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a4a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a4a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a4c: 0x0  nop
    ctx->pc = 0x2a4a4cu;
    // NOP
    // 0x2a4a50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a4a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4a54: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x2a4a58: 0xc48001bc  lwc1        $f0, 0x1BC($a0)
    ctx->pc = 0x2a4a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4a5c:
    // 0x2a4a5c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2a4a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4a60: 0x0  nop
    ctx->pc = 0x2a4a60u;
    // NOP
    // 0x2a4a64: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4A64u;
    {
        const bool branch_taken_0x2a4a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a64) {
            ctx->pc = 0x2A4A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4A64u;
            // 0x2a4a68: 0xc48101bc  lwc1        $f1, 0x1BC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A8Cu;
            goto label_2a4a8c;
        }
    }
    ctx->pc = 0x2A4A6Cu;
    // 0x2a4a6c: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a70: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2a4a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2a4a74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a4a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a4a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a4a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a7c: 0x0  nop
    ctx->pc = 0x2a4a7cu;
    // NOP
    // 0x2a4a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a4a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4a84: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x2a4a88: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x2a4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4a8c:
    // 0x2a4a8c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2a4a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4a90: 0x0  nop
    ctx->pc = 0x2a4a90u;
    // NOP
    // 0x2a4a94: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2A4A94u;
    {
        const bool branch_taken_0x2a4a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4a94) {
            ctx->pc = 0x2A4A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4A94u;
            // 0x2a4a98: 0xc48201bc  lwc1        $f2, 0x1BC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B00u;
            goto label_2a4b00;
        }
    }
    ctx->pc = 0x2A4A9Cu;
    // 0x2a4a9c: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4aa0: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2a4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2a4aa4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a4aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a4aa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a4aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4aac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a4aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4ab0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a4ab0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a4ab4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a4ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4ab8: 0x0  nop
    ctx->pc = 0x2a4ab8u;
    // NOP
    // 0x2a4abc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4ABCu;
    {
        const bool branch_taken_0x2a4abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4abc) {
            ctx->pc = 0x2A4AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4ABCu;
            // 0x2a4ac0: 0xe48301b8  swc1        $f3, 0x1B8($a0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4AC4u;
            goto label_2a4ac4;
        }
    }
    ctx->pc = 0x2A4AC4u;
label_2a4ac4:
    // 0x2a4ac4: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4ac8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2a4ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4acc: 0x0  nop
    ctx->pc = 0x2a4accu;
    // NOP
    // 0x2a4ad0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4AD0u;
    {
        const bool branch_taken_0x2a4ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4ad0) {
            ctx->pc = 0x2A4AE4u;
            goto label_2a4ae4;
        }
    }
    ctx->pc = 0x2A4AD8u;
    // 0x2a4ad8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a4ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a4adc: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x2a4ae0: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4ae4:
    // 0x2a4ae4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2a4ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4ae8: 0x0  nop
    ctx->pc = 0x2a4ae8u;
    // NOP
    // 0x2a4aec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4AECu;
    {
        const bool branch_taken_0x2a4aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4aec) {
            ctx->pc = 0x2A4AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4AECu;
            // 0x2a4af0: 0xc48201bc  lwc1        $f2, 0x1BC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B00u;
            goto label_2a4b00;
        }
    }
    ctx->pc = 0x2A4AF4u;
    // 0x2a4af4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a4af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a4af8: 0xe48001b8  swc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x2a4afc: 0xc48201bc  lwc1        $f2, 0x1BC($a0)
    ctx->pc = 0x2a4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a4b00:
    // 0x2a4b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b04: 0x0  nop
    ctx->pc = 0x2a4b04u;
    // NOP
    // 0x2a4b08: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2a4b08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4b0c: 0x0  nop
    ctx->pc = 0x2a4b0cu;
    // NOP
    // 0x2a4b10: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4B10u;
    {
        const bool branch_taken_0x2a4b10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4b10) {
            ctx->pc = 0x2A4B34u;
            goto label_2a4b34;
        }
    }
    ctx->pc = 0x2A4B18u;
    // 0x2a4b18: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x2a4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4b1c: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x2a4b1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x2a4b20: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a4b20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a4b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4b28: 0x0  nop
    ctx->pc = 0x2a4b28u;
    // NOP
    // 0x2a4b2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4B2Cu;
    {
        const bool branch_taken_0x2a4b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4b2c) {
            ctx->pc = 0x2A4B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B2Cu;
            // 0x2a4b30: 0xe48201b8  swc1        $f2, 0x1B8($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B34u;
            goto label_2a4b34;
        }
    }
    ctx->pc = 0x2A4B34u;
label_2a4b34:
    // 0x2a4b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B3Cu;
    // 0x2a4b3c: 0x0  nop
    ctx->pc = 0x2a4b3cu;
    // NOP
    ctx->pc = 0x2a4b40u;
}
