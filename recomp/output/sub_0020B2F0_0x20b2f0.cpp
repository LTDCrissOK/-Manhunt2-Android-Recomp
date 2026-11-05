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

// Function: sub_0020B2F0
// Address: 0x20b2f0 - 0x20b638
void sub_0020B2F0_0x20b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B2F0_0x20b2f0");
#endif

    switch (ctx->pc) {
        case 0x20b5b0u: goto label_20b5b0;
        default: break;
    }

    ctx->pc = 0x20b2f0u;

    // 0x20b2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b2f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b2fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20b300: 0x3c0142ff  lui         $at, 0x42FF
    ctx->pc = 0x20b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17151 << 16));
    // 0x20b304: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b308: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20b308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20b30c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b310: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20b310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b314: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b318: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20b318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20b31c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x20b31cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x20b320: 0x0  nop
    ctx->pc = 0x20b320u;
    // NOP
    // 0x20b324: 0x0  nop
    ctx->pc = 0x20b324u;
    // NOP
    // 0x20b328: 0x46020203  div.s       $f8, $f0, $f2
    ctx->pc = 0x20b328u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x20b32c: 0x0  nop
    ctx->pc = 0x20b32cu;
    // NOP
    // 0x20b330: 0x0  nop
    ctx->pc = 0x20b330u;
    // NOP
    // 0x20b334: 0x46020a43  div.s       $f9, $f1, $f2
    ctx->pc = 0x20b334u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x20b338: 0xe4880000  swc1        $f8, 0x0($a0)
    ctx->pc = 0x20b338u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20b33c: 0xe4890004  swc1        $f9, 0x4($a0)
    ctx->pc = 0x20b33cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20b340: 0x46004985  abs.s       $f6, $f9
    ctx->pc = 0x20b340u;
    ctx->f[6] = FPU_ABS_S(ctx->f[9]);
    // 0x20b344: 0xc44094a8  lwc1        $f0, -0x6B58($v0)
    ctx->pc = 0x20b344u;
    { uint32_t bits = FAST_READ32(0x3F94A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b348: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20b348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b34c: 0x0  nop
    ctx->pc = 0x20b34cu;
    // NOP
    // 0x20b350: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20B350u;
    {
        const bool branch_taken_0x20b350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B350u;
        // 0x20b354: 0x46004105  abs.s       $f4, $f8 (Delay Slot)
        ctx->f[4] = FPU_ABS_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b350) {
            ctx->pc = 0x20B360u;
            goto label_20b360;
        }
    }
    ctx->pc = 0x20B358u;
    // 0x20b358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b35c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x20b35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_20b360:
    // 0x20b360: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x20b360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b364: 0x0  nop
    ctx->pc = 0x20b364u;
    // NOP
    // 0x20b368: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20B368u;
    {
        const bool branch_taken_0x20b368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B368u;
        // 0x20b36c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b368) {
            ctx->pc = 0x20B378u;
            goto label_20b378;
        }
    }
    ctx->pc = 0x20B370u;
    // 0x20b370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b374: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20b378:
    // 0x20b378: 0xc44094ac  lwc1        $f0, -0x6B54($v0)
    ctx->pc = 0x20b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b37c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20b37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b380: 0x0  nop
    ctx->pc = 0x20b380u;
    // NOP
    // 0x20b384: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20B384u;
    {
        const bool branch_taken_0x20b384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B384u;
        // 0x20b388: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b384) {
            ctx->pc = 0x20B3A8u;
            goto label_20b3a8;
        }
    }
    ctx->pc = 0x20B38Cu;
    // 0x20b38c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x20b38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b390: 0x0  nop
    ctx->pc = 0x20b390u;
    // NOP
    // 0x20b394: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B394u;
    {
        const bool branch_taken_0x20b394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B394u;
        // 0x20b398: 0xc46594ac  lwc1        $f5, -0x6B54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b394) {
            ctx->pc = 0x20B3ACu;
            goto label_20b3ac;
        }
    }
    ctx->pc = 0x20B39Cu;
    // 0x20b39c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20b3a0: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x20B3A0u;
    {
        const bool branch_taken_0x20b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3A0u;
        // 0x20b3a4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3a0) {
            ctx->pc = 0x20B62Cu;
            goto label_20b62c;
        }
    }
    ctx->pc = 0x20B3A8u;
label_20b3a8:
    // 0x20b3a8: 0xc46594ac  lwc1        $f5, -0x6B54($v1)
    ctx->pc = 0x20b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b3ac:
    // 0x20b3ac: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x20b3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b3b0: 0x0  nop
    ctx->pc = 0x20b3b0u;
    // NOP
    // 0x20b3b4: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x20B3B4u;
    {
        const bool branch_taken_0x20b3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b3b4) {
            ctx->pc = 0x20B3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3B4u;
            // 0x20b3b8: 0xc46594ac  lwc1        $f5, -0x6B54($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B450u;
            goto label_20b450;
        }
    }
    ctx->pc = 0x20B3BCu;
    // 0x20b3bc: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x20b3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b3c0: 0x0  nop
    ctx->pc = 0x20b3c0u;
    // NOP
    // 0x20b3c4: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x20B3C4u;
    {
        const bool branch_taken_0x20b3c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C4u;
        // 0x20b3c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3c4) {
            ctx->pc = 0x20B44Cu;
            goto label_20b44c;
        }
    }
    ctx->pc = 0x20B3CCu;
    // 0x20b3cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b3d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b3d4: 0xc44094b0  lwc1        $f0, -0x6B50($v0)
    ctx->pc = 0x20b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b3d8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x20b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x20b3dc: 0x46060041  sub.s       $f1, $f0, $f6
    ctx->pc = 0x20b3dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x20b3e0: 0x460500c1  sub.s       $f3, $f0, $f5
    ctx->pc = 0x20b3e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x20b3e4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x20b3e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x20b3e8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x20b3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x20b3ec: 0x46074036  c.le.s      $f8, $f7
    ctx->pc = 0x20b3ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b3f0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x20b3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20b3f4: 0x0  nop
    ctx->pc = 0x20b3f4u;
    // NOP
    // 0x20b3f8: 0x0  nop
    ctx->pc = 0x20b3f8u;
    // NOP
    // 0x20b3fc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x20b3fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x20b400: 0x0  nop
    ctx->pc = 0x20b400u;
    // NOP
    // 0x20b404: 0x0  nop
    ctx->pc = 0x20b404u;
    // NOP
    // 0x20b408: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x20b408u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x20b40c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x20b40cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x20b410: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x20b410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20b414: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x20b414u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x20b418: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x20b418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x20b41c: 0x0  nop
    ctx->pc = 0x20b41cu;
    // NOP
    // 0x20b420: 0x0  nop
    ctx->pc = 0x20b420u;
    // NOP
    // 0x20b424: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x20b424u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x20b428: 0x0  nop
    ctx->pc = 0x20b428u;
    // NOP
    // 0x20b42c: 0x0  nop
    ctx->pc = 0x20b42cu;
    // NOP
    // 0x20b430: 0x46020183  div.s       $f6, $f0, $f2
    ctx->pc = 0x20b430u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x20b434: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20B434u;
    {
        const bool branch_taken_0x20b434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B434u;
        // 0x20b438: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b434) {
            ctx->pc = 0x20B440u;
            goto label_20b440;
        }
    }
    ctx->pc = 0x20B43Cu;
    // 0x20b43c: 0x46002307  neg.s       $f12, $f4
    ctx->pc = 0x20b43cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[4]);
label_20b440:
    // 0x20b440: 0x46074836  c.le.s      $f9, $f7
    ctx->pc = 0x20b440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b444: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x20B444u;
    {
        const bool branch_taken_0x20b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B444u;
        // 0x20b448: 0x46003346  mov.s       $f13, $f6 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b444) {
            ctx->pc = 0x20B5A0u;
            goto label_20b5a0;
        }
    }
    ctx->pc = 0x20B44Cu;
label_20b44c:
    // 0x20b44c: 0xc46594ac  lwc1        $f5, -0x6B54($v1)
    ctx->pc = 0x20b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b450:
    // 0x20b450: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x20b450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b454: 0x0  nop
    ctx->pc = 0x20b454u;
    // NOP
    // 0x20b458: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x20B458u;
    {
        const bool branch_taken_0x20b458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B458u;
        // 0x20b45c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b458) {
            ctx->pc = 0x20B540u;
            goto label_20b540;
        }
    }
    ctx->pc = 0x20B460u;
    // 0x20b460: 0xc44194b0  lwc1        $f1, -0x6B50($v0)
    ctx->pc = 0x20b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b464: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x20b464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x20b468: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x20b468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x20b46c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x20b46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20b470: 0x460101c3  div.s       $f7, $f0, $f1
    ctx->pc = 0x20b470u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x20b474: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x20b474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b478: 0x0  nop
    ctx->pc = 0x20b478u;
    // NOP
    // 0x20b47c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20B47Cu;
    {
        const bool branch_taken_0x20b47c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B47Cu;
        // 0x20b480: 0xc4c094a8  lwc1        $f0, -0x6B58($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294939816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b47c) {
            ctx->pc = 0x20B4CCu;
            goto label_20b4cc;
        }
    }
    ctx->pc = 0x20B484u;
    // 0x20b484: 0x460520c1  sub.s       $f3, $f4, $f5
    ctx->pc = 0x20b484u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x20b488: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x20b488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x20b48c: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x20b48cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x20b490: 0x46073081  sub.s       $f2, $f6, $f7
    ctx->pc = 0x20b490u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x20b494: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x20b494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x20b498: 0x0  nop
    ctx->pc = 0x20b498u;
    // NOP
    // 0x20b49c: 0x0  nop
    ctx->pc = 0x20b49cu;
    // NOP
    // 0x20b4a0: 0x46011903  div.s       $f4, $f3, $f1
    ctx->pc = 0x20b4a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x20b4a4: 0x460a4036  c.le.s      $f8, $f10
    ctx->pc = 0x20b4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b4a8: 0x0  nop
    ctx->pc = 0x20b4a8u;
    // NOP
    // 0x20b4ac: 0x0  nop
    ctx->pc = 0x20b4acu;
    // NOP
    // 0x20b4b0: 0x46001183  div.s       $f6, $f2, $f0
    ctx->pc = 0x20b4b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x20b4b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20B4B4u;
    {
        const bool branch_taken_0x20b4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4B4u;
        // 0x20b4b8: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4b4) {
            ctx->pc = 0x20B4C0u;
            goto label_20b4c0;
        }
    }
    ctx->pc = 0x20B4BCu;
    // 0x20b4bc: 0x46002307  neg.s       $f12, $f4
    ctx->pc = 0x20b4bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[4]);
label_20b4c0:
    // 0x20b4c0: 0x460a4836  c.le.s      $f9, $f10
    ctx->pc = 0x20b4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b4c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x20B4C4u;
    {
        const bool branch_taken_0x20b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4C4u;
        // 0x20b4c8: 0x46003346  mov.s       $f13, $f6 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4c4) {
            ctx->pc = 0x20B5A0u;
            goto label_20b5a0;
        }
    }
    ctx->pc = 0x20B4CCu;
label_20b4cc:
    // 0x20b4cc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20b4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b4d0: 0x0  nop
    ctx->pc = 0x20b4d0u;
    // NOP
    // 0x20b4d4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x20B4D4u;
    {
        const bool branch_taken_0x20b4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b4d4) {
            ctx->pc = 0x20B50Cu;
            goto label_20b50c;
        }
    }
    ctx->pc = 0x20B4DCu;
    // 0x20b4dc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x20b4dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x20b4e0: 0x46052041  sub.s       $f1, $f4, $f5
    ctx->pc = 0x20b4e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x20b4e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20b4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b4e8: 0x0  nop
    ctx->pc = 0x20b4e8u;
    // NOP
    // 0x20b4ec: 0x0  nop
    ctx->pc = 0x20b4ecu;
    // NOP
    // 0x20b4f0: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x20b4f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20b4f4: 0x46024036  c.le.s      $f8, $f2
    ctx->pc = 0x20b4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b4f8: 0x0  nop
    ctx->pc = 0x20b4f8u;
    // NOP
    // 0x20b4fc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B4FCu;
    {
        const bool branch_taken_0x20b4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4FCu;
        // 0x20b500: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4fc) {
            ctx->pc = 0x20B530u;
            goto label_20b530;
        }
    }
    ctx->pc = 0x20B504u;
    // 0x20b504: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20B504u;
    {
        const bool branch_taken_0x20b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B504u;
        // 0x20b508: 0x46002307  neg.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b504) {
            ctx->pc = 0x20B530u;
            goto label_20b530;
        }
    }
    ctx->pc = 0x20B50Cu;
label_20b50c:
    // 0x20b50c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b510: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20b514: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b518: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x20b518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b51c: 0x0  nop
    ctx->pc = 0x20b51cu;
    // NOP
    // 0x20b520: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x20B520u;
    {
        const bool branch_taken_0x20b520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b520) {
            ctx->pc = 0x20B524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B520u;
            // 0x20b524: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B538u;
            goto label_20b538;
        }
    }
    ctx->pc = 0x20B528u;
    // 0x20b528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b52c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20b530:
    // 0x20b530: 0x0  nop
    ctx->pc = 0x20b530u;
    // NOP
    // 0x20b534: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x20b534u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_20b538:
    // 0x20b538: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x20B538u;
    {
        const bool branch_taken_0x20b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B538u;
        // 0x20b53c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b538) {
            ctx->pc = 0x20B62Cu;
            goto label_20b62c;
        }
    }
    ctx->pc = 0x20B540u;
label_20b540:
    // 0x20b540: 0xc44194b0  lwc1        $f1, -0x6B50($v0)
    ctx->pc = 0x20b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b544: 0x46060801  sub.s       $f0, $f1, $f6
    ctx->pc = 0x20b544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x20b548: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x20b548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x20b54c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x20b54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20b550: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x20b550u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x20b554: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x20b554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b558: 0x0  nop
    ctx->pc = 0x20b558u;
    // NOP
    // 0x20b55c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x20B55Cu;
    {
        const bool branch_taken_0x20b55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B55Cu;
        // 0x20b560: 0xc4c094a8  lwc1        $f0, -0x6B58($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294939816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b55c) {
            ctx->pc = 0x20B5B8u;
            goto label_20b5b8;
        }
    }
    ctx->pc = 0x20B564u;
    // 0x20b564: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x20b564u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x20b568: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20b568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20b56c: 0x46050081  sub.s       $f2, $f0, $f5
    ctx->pc = 0x20b56cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x20b570: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b574: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x20b574u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x20b578: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x20b578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b57c: 0x0  nop
    ctx->pc = 0x20b57cu;
    // NOP
    // 0x20b580: 0x46001b03  div.s       $f12, $f3, $f0
    ctx->pc = 0x20b580u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x20b584: 0x0  nop
    ctx->pc = 0x20b584u;
    // NOP
    // 0x20b588: 0x0  nop
    ctx->pc = 0x20b588u;
    // NOP
    // 0x20b58c: 0x46020983  div.s       $f6, $f1, $f2
    ctx->pc = 0x20b58cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x20b590: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B590u;
    {
        const bool branch_taken_0x20b590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b590) {
            ctx->pc = 0x20B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B590u;
            // 0x20b594: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B598u;
            goto label_20b598;
        }
    }
    ctx->pc = 0x20B598u;
label_20b598:
    // 0x20b598: 0x46044836  c.le.s      $f9, $f4
    ctx->pc = 0x20b598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b59c: 0x46003346  mov.s       $f13, $f6
    ctx->pc = 0x20b59cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[6]);
label_20b5a0:
    // 0x20b5a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B5A0u;
    {
        const bool branch_taken_0x20b5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b5a0) {
            ctx->pc = 0x20B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B5A0u;
            // 0x20b5a4: 0x46003347  neg.s       $f13, $f6 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B5A8u;
            goto label_20b5a8;
        }
    }
    ctx->pc = 0x20B5A8u;
label_20b5a8:
    // 0x20b5a8: 0xc082ca0  jal         func_20B280
    ctx->pc = 0x20B5A8u;
    SET_GPR_U32(ctx, 31, 0x20B5B0u);
    ctx->pc = 0x20B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B280u, 0x20B5A8u, 0x20B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B0u;
label_20b5b0:
    // 0x20b5b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20B5B0u;
    {
        const bool branch_taken_0x20b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5B0u;
        // 0x20b5b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5b0) {
            ctx->pc = 0x20B630u;
            goto label_20b630;
        }
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0xc4c294a8  lwc1        $f2, -0x6B58($a2)
    ctx->pc = 0x20b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294939816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20b5bc: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x20b5bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b5c0: 0x0  nop
    ctx->pc = 0x20b5c0u;
    // NOP
    // 0x20b5c4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x20B5C4u;
    {
        const bool branch_taken_0x20b5c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b5c4) {
            ctx->pc = 0x20B5F8u;
            goto label_20b5f8;
        }
    }
    ctx->pc = 0x20B5CCu;
    // 0x20b5cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b5d0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x20b5d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x20b5d4: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x20b5d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x20b5d8: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x20b5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b5dc: 0x0  nop
    ctx->pc = 0x20b5dcu;
    // NOP
    // 0x20b5e0: 0x0  nop
    ctx->pc = 0x20b5e0u;
    // NOP
    // 0x20b5e4: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x20b5e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x20b5e8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x20B5E8u;
    {
        const bool branch_taken_0x20b5e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b5e8) {
            ctx->pc = 0x20B5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B5E8u;
            // 0x20b5ec: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B624u;
            goto label_20b624;
        }
    }
    ctx->pc = 0x20B5F0u;
    // 0x20b5f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20B5F0u;
    {
        const bool branch_taken_0x20b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5F0u;
        // 0x20b5f4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5f0) {
            ctx->pc = 0x20B628u;
            goto label_20b628;
        }
    }
    ctx->pc = 0x20B5F8u;
label_20b5f8:
    // 0x20b5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b5fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20b600: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b604: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x20b604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b608: 0x0  nop
    ctx->pc = 0x20b608u;
    // NOP
    // 0x20b60c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B60Cu;
    {
        const bool branch_taken_0x20b60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B60Cu;
        // 0x20b610: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b60c) {
            ctx->pc = 0x20B624u;
            goto label_20b624;
        }
    }
    ctx->pc = 0x20B614u;
    // 0x20b614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b61c: 0x0  nop
    ctx->pc = 0x20b61cu;
    // NOP
    // 0x20b620: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x20b620u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_20b624:
    // 0x20b624: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20b624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_20b628:
    // 0x20b628: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20b62c:
    // 0x20b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b630:
    // 0x20b630: 0x3e00008  jr          $ra
    ctx->pc = 0x20B630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B630u;
        // 0x20b634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B638u;
}
