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

// Function: sub_003633D8
// Address: 0x3633d8 - 0x3634e0
void sub_003633D8_0x3633d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003633D8_0x3633d8");
#endif

    switch (ctx->pc) {
        case 0x3633d8u: goto label_3633d8;
        case 0x3633dcu: goto label_3633dc;
        case 0x3633e0u: goto label_3633e0;
        case 0x3633e4u: goto label_3633e4;
        case 0x3633e8u: goto label_3633e8;
        case 0x3633ecu: goto label_3633ec;
        case 0x3633f0u: goto label_3633f0;
        case 0x3633f4u: goto label_3633f4;
        case 0x3633f8u: goto label_3633f8;
        case 0x3633fcu: goto label_3633fc;
        case 0x363400u: goto label_363400;
        case 0x363404u: goto label_363404;
        case 0x363408u: goto label_363408;
        case 0x36340cu: goto label_36340c;
        case 0x363410u: goto label_363410;
        case 0x363414u: goto label_363414;
        case 0x363418u: goto label_363418;
        case 0x36341cu: goto label_36341c;
        case 0x363420u: goto label_363420;
        case 0x363424u: goto label_363424;
        case 0x363428u: goto label_363428;
        case 0x36342cu: goto label_36342c;
        case 0x363430u: goto label_363430;
        case 0x363434u: goto label_363434;
        case 0x363438u: goto label_363438;
        case 0x36343cu: goto label_36343c;
        case 0x363440u: goto label_363440;
        case 0x363444u: goto label_363444;
        case 0x363448u: goto label_363448;
        case 0x36344cu: goto label_36344c;
        case 0x363450u: goto label_363450;
        case 0x363454u: goto label_363454;
        case 0x363458u: goto label_363458;
        case 0x36345cu: goto label_36345c;
        case 0x363460u: goto label_363460;
        case 0x363464u: goto label_363464;
        case 0x363468u: goto label_363468;
        case 0x36346cu: goto label_36346c;
        case 0x363470u: goto label_363470;
        case 0x363474u: goto label_363474;
        case 0x363478u: goto label_363478;
        case 0x36347cu: goto label_36347c;
        case 0x363480u: goto label_363480;
        case 0x363484u: goto label_363484;
        case 0x363488u: goto label_363488;
        case 0x36348cu: goto label_36348c;
        case 0x363490u: goto label_363490;
        case 0x363494u: goto label_363494;
        case 0x363498u: goto label_363498;
        case 0x36349cu: goto label_36349c;
        case 0x3634a0u: goto label_3634a0;
        case 0x3634a4u: goto label_3634a4;
        case 0x3634a8u: goto label_3634a8;
        case 0x3634acu: goto label_3634ac;
        case 0x3634b0u: goto label_3634b0;
        case 0x3634b4u: goto label_3634b4;
        case 0x3634b8u: goto label_3634b8;
        case 0x3634bcu: goto label_3634bc;
        case 0x3634c0u: goto label_3634c0;
        case 0x3634c4u: goto label_3634c4;
        case 0x3634c8u: goto label_3634c8;
        case 0x3634ccu: goto label_3634cc;
        case 0x3634d0u: goto label_3634d0;
        case 0x3634d4u: goto label_3634d4;
        case 0x3634d8u: goto label_3634d8;
        case 0x3634dcu: goto label_3634dc;
        default: break;
    }

    ctx->pc = 0x3633d8u;

label_3633d8:
    // 0x3633d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3633d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3633dc:
    // 0x3633dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3633dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3633e0:
    // 0x3633e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3633e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3633e4:
    // 0x3633e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3633e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3633e8:
    // 0x3633e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3633e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3633ec:
    // 0x3633ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3633f0:
    if (ctx->pc == 0x3633F0u) {
        ctx->pc = 0x3633F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633ECu;
        // 0x3633f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3633F4u;
        goto label_3633f4;
    }
    ctx->pc = 0x3633ECu;
    {
        const bool branch_taken_0x3633ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3633F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633ECu;
        // 0x3633f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633ec) {
            ctx->pc = 0x363428u;
            goto label_363428;
        }
    }
    ctx->pc = 0x3633F4u;
label_3633f4:
    // 0x3633f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3633f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3633f8:
    // 0x3633f8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3633f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3633fc:
    // 0x3633fc: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x3633fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363400:
    // 0x363400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x363400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_363404:
    // 0x363404: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x363404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_363408:
    // 0x363408: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x363408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36340c:
    // 0x36340c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36340cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363410:
    // 0x363410: 0x0  nop
    ctx->pc = 0x363410u;
    // NOP
label_363414:
    // 0x363414: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_363418:
    if (ctx->pc == 0x363418u) {
        ctx->pc = 0x363418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363414u;
        // 0x363418: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x36341Cu;
        goto label_36341c;
    }
    ctx->pc = 0x363414u;
    {
        const bool branch_taken_0x363414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363414) {
            ctx->pc = 0x363418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363414u;
            // 0x363418: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x36341Cu;
            goto label_36341c;
        }
    }
    ctx->pc = 0x36341Cu;
label_36341c:
    // 0x36341c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x36341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363420:
    // 0x363420: 0x10000019  b           . + 4 + (0x19 << 2)
label_363424:
    if (ctx->pc == 0x363424u) {
        ctx->pc = 0x363424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363420u;
        // 0x363424: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363428u;
        goto label_363428;
    }
    ctx->pc = 0x363420u;
    {
        const bool branch_taken_0x363420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363420u;
        // 0x363424: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363420) {
            ctx->pc = 0x363488u;
            goto label_363488;
        }
    }
    ctx->pc = 0x363428u;
label_363428:
    // 0x363428: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x363428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36342c:
    // 0x36342c: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x36342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363430:
    // 0x363430: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x363430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363434:
    // 0x363434: 0x0  nop
    ctx->pc = 0x363434u;
    // NOP
label_363438:
    // 0x363438: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_36343c:
    if (ctx->pc == 0x36343Cu) {
        ctx->pc = 0x36343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363438u;
        // 0x36343c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363440u;
        goto label_363440;
    }
    ctx->pc = 0x363438u;
    {
        const bool branch_taken_0x363438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363438u;
        // 0x36343c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363438) {
            ctx->pc = 0x363468u;
            goto label_363468;
        }
    }
    ctx->pc = 0x363440u;
label_363440:
    // 0x363440: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x363440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363444:
    // 0x363444: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x363444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363448:
    // 0x363448: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x363448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_36344c:
    // 0x36344c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36344cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_363450:
    // 0x363450: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x363450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363454:
    // 0x363454: 0x0  nop
    ctx->pc = 0x363454u;
    // NOP
label_363458:
    // 0x363458: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_36345c:
    if (ctx->pc == 0x36345Cu) {
        ctx->pc = 0x36345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363458u;
        // 0x36345c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363460u;
        goto label_363460;
    }
    ctx->pc = 0x363458u;
    {
        const bool branch_taken_0x363458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363458u;
        // 0x36345c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363458) {
            ctx->pc = 0x363488u;
            goto label_363488;
        }
    }
    ctx->pc = 0x363460u;
label_363460:
    // 0x363460: 0x10000009  b           . + 4 + (0x9 << 2)
label_363464:
    if (ctx->pc == 0x363464u) {
        ctx->pc = 0x363464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363460u;
        // 0x363464: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363468u;
        goto label_363468;
    }
    ctx->pc = 0x363460u;
    {
        const bool branch_taken_0x363460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363460u;
        // 0x363464: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363460) {
            ctx->pc = 0x363488u;
            goto label_363488;
        }
    }
    ctx->pc = 0x363468u;
label_363468:
    // 0x363468: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x363468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36346c:
    // 0x36346c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36346cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_363470:
    // 0x363470: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x363470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_363474:
    // 0x363474: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x363474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363478:
    // 0x363478: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36347c:
    // 0x36347c: 0x0  nop
    ctx->pc = 0x36347cu;
    // NOP
label_363480:
    // 0x363480: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_363484:
    if (ctx->pc == 0x363484u) {
        ctx->pc = 0x363484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363480u;
        // 0x363484: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363488u;
        goto label_363488;
    }
    ctx->pc = 0x363480u;
    {
        const bool branch_taken_0x363480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363480) {
            ctx->pc = 0x363484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363480u;
            // 0x363484: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x363488u;
            goto label_363488;
        }
    }
    ctx->pc = 0x363488u;
label_363488:
    // 0x363488: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x363488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36348c:
    // 0x36348c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36348cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363490:
    // 0x363490: 0x0  nop
    ctx->pc = 0x363490u;
    // NOP
label_363494:
    // 0x363494: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x363494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363498:
    // 0x363498: 0x0  nop
    ctx->pc = 0x363498u;
    // NOP
label_36349c:
    // 0x36349c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3634a0:
    if (ctx->pc == 0x3634A0u) {
        ctx->pc = 0x3634A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36349Cu;
        // 0x3634a0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3634A4u;
        goto label_3634a4;
    }
    ctx->pc = 0x36349Cu;
    {
        const bool branch_taken_0x36349c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3634A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36349Cu;
        // 0x3634a0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36349c) {
            ctx->pc = 0x3634B8u;
            goto label_3634b8;
        }
    }
    ctx->pc = 0x3634A4u;
label_3634a4:
    // 0x3634a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3634a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3634a8:
    // 0x3634a8: 0x40f809  jalr        $v0
label_3634ac:
    if (ctx->pc == 0x3634ACu) {
        ctx->pc = 0x3634ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634A8u;
        // 0x3634ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3634B0u;
        goto label_3634b0;
    }
    ctx->pc = 0x3634A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3634B0u);
        ctx->pc = 0x3634ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634A8u;
        // 0x3634ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634A8u, 0x3634B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3634B0u;
label_3634b0:
    // 0x3634b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3634b4:
    if (ctx->pc == 0x3634B4u) {
        ctx->pc = 0x3634B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634B0u;
        // 0x3634b4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3634B8u;
        goto label_3634b8;
    }
    ctx->pc = 0x3634B0u;
    {
        const bool branch_taken_0x3634b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3634B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634B0u;
        // 0x3634b4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3634b0) {
            ctx->pc = 0x3634CCu;
            goto label_3634cc;
        }
    }
    ctx->pc = 0x3634B8u;
label_3634b8:
    // 0x3634b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3634b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3634bc:
    // 0x3634bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3634bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3634c0:
    // 0x3634c0: 0x40f809  jalr        $v0
label_3634c4:
    if (ctx->pc == 0x3634C4u) {
        ctx->pc = 0x3634C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634C0u;
        // 0x3634c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3634C8u;
        goto label_3634c8;
    }
    ctx->pc = 0x3634C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3634C8u);
        ctx->pc = 0x3634C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634C0u;
        // 0x3634c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634C0u, 0x3634C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3634C8u;
label_3634c8:
    // 0x3634c8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3634c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3634cc:
    // 0x3634cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3634ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3634d0:
    // 0x3634d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3634d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3634d4:
    // 0x3634d4: 0x3e00008  jr          $ra
label_3634d8:
    if (ctx->pc == 0x3634D8u) {
        ctx->pc = 0x3634D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634D4u;
        // 0x3634d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3634DCu;
        goto label_3634dc;
    }
    ctx->pc = 0x3634D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3634D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634D4u;
        // 0x3634d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3634DCu;
label_3634dc:
    // 0x3634dc: 0x0  nop
    ctx->pc = 0x3634dcu;
    // NOP
    ctx->pc = 0x3634e0u;
}
