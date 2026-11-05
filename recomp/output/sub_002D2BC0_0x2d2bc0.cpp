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

// Function: sub_002D2BC0
// Address: 0x2d2bc0 - 0x2d2c70
void sub_002D2BC0_0x2d2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2BC0_0x2d2bc0");
#endif

    ctx->pc = 0x2d2bc0u;

    // 0x2d2bc0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2bc4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D2BC4u;
    {
        const bool branch_taken_0x2d2bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bc4) {
            ctx->pc = 0x2D2C68u;
            goto label_2d2c68;
        }
    }
    ctx->pc = 0x2D2BCCu;
    // 0x2d2bcc: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2d2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d2bd0: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x2d2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2bd4: 0x46032032  c.eq.s      $f4, $f3
    ctx->pc = 0x2d2bd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2bd8: 0x0  nop
    ctx->pc = 0x2d2bd8u;
    // NOP
    // 0x2d2bdc: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x2D2BDCu;
    {
        const bool branch_taken_0x2d2bdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2bdc) {
            ctx->pc = 0x2D2C68u;
            goto label_2d2c68;
        }
    }
    ctx->pc = 0x2D2BE4u;
    // 0x2d2be4: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x2d2be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2be8: 0x0  nop
    ctx->pc = 0x2d2be8u;
    // NOP
    // 0x2d2bec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2D2BECu;
    {
        const bool branch_taken_0x2d2bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BECu;
        // 0x2d2bf0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bec) {
            ctx->pc = 0x2D2C1Cu;
            goto label_2d2c1c;
        }
    }
    ctx->pc = 0x2D2BF4u;
    // 0x2d2bf4: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2d2bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2bf8: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2d2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2bfc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2c00: 0x0  nop
    ctx->pc = 0x2d2c00u;
    // NOP
    // 0x2d2c04: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2d2c04u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2d2c08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2c0c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2d2c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d2c10: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2d2c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D2C14u;
    {
        const bool branch_taken_0x2d2c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C14u;
        // 0x2d2c18: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c14) {
            ctx->pc = 0x2D2C40u;
            goto label_2d2c40;
        }
    }
    ctx->pc = 0x2D2C1Cu;
label_2d2c1c:
    // 0x2d2c1c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2d2c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2c20: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2d2c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2c24: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d2c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2c28: 0x0  nop
    ctx->pc = 0x2d2c28u;
    // NOP
    // 0x2d2c2c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2d2c2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2d2c30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d2c34: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2d2c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d2c38: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2d2c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c3c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d2c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2d2c40:
    // 0x2d2c40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2C40u;
    {
        const bool branch_taken_0x2d2c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2c40) {
            ctx->pc = 0x2D2C68u;
            goto label_2d2c68;
        }
    }
    ctx->pc = 0x2D2C48u;
    // 0x2d2c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c50: 0x0  nop
    ctx->pc = 0x2d2c50u;
    // NOP
    // 0x2d2c54: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x2d2c54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c58: 0x0  nop
    ctx->pc = 0x2d2c58u;
    // NOP
    // 0x2d2c5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2C5Cu;
    {
        const bool branch_taken_0x2d2c5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C5Cu;
        // 0x2d2c60: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c5c) {
            ctx->pc = 0x2D2C68u;
            goto label_2d2c68;
        }
    }
    ctx->pc = 0x2D2C64u;
    // 0x2d2c64: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2d2c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d2c68:
    // 0x2d2c68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2C70u;
}
