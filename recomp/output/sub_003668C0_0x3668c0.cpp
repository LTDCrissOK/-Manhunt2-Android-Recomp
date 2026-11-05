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

// Function: sub_003668C0
// Address: 0x3668c0 - 0x367058
void sub_003668C0_0x3668c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003668C0_0x3668c0");
#endif

    switch (ctx->pc) {
        case 0x366958u: goto label_366958;
        case 0x366974u: goto label_366974;
        case 0x366a00u: goto label_366a00;
        case 0x366a10u: goto label_366a10;
        case 0x366a78u: goto label_366a78;
        case 0x366ad8u: goto label_366ad8;
        case 0x366ae8u: goto label_366ae8;
        case 0x366b80u: goto label_366b80;
        case 0x366c24u: goto label_366c24;
        case 0x366ce0u: goto label_366ce0;
        case 0x366da0u: goto label_366da0;
        case 0x366dd0u: goto label_366dd0;
        case 0x366e98u: goto label_366e98;
        case 0x366f40u: goto label_366f40;
        case 0x366fc8u: goto label_366fc8;
        default: break;
    }

    ctx->pc = 0x3668c0u;

    // 0x3668c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3668c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3668c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3668c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3668c8: 0xc461cb68  lwc1        $f1, -0x3498($v1)
    ctx->pc = 0x3668c8u;
    { uint32_t bits = FAST_READ32(0x3FCB68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3668cc: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3668ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3668d0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3668d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3668d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3668d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3668d8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3668d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3668dc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3668dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3668e0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3668e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3668e4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3668e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x3668e8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x3668e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x3668ec: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3668ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3668f0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x3668f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x3668f4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3668f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x3668f8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3668f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x3668fc: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x3668fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x366900: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x366900u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x366904: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x366904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x366908: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x366908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36690c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x36690Cu;
    {
        const bool branch_taken_0x36690c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x366910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36690Cu;
        // 0x366910: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36690c) {
            ctx->pc = 0x366974u;
            goto label_366974;
        }
    }
    ctx->pc = 0x366914u;
    // 0x366914: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x366914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x366918: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x366918u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36691c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36691cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366920: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x366920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366924: 0x0  nop
    ctx->pc = 0x366924u;
    // NOP
    // 0x366928: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x366928u;
    {
        const bool branch_taken_0x366928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366928u;
        // 0x36692c: 0xe460cb68  swc1        $f0, -0x3498($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366928) {
            ctx->pc = 0x366974u;
            goto label_366974;
        }
    }
    ctx->pc = 0x366930u;
    // 0x366930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366934: 0x8c44cb60  lw          $a0, -0x34A0($v0)
    ctx->pc = 0x366934u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCB60u));
    // 0x366938: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x366938u;
    {
        const bool branch_taken_0x366938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366938u;
        // 0x36693c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366938) {
            ctx->pc = 0x366960u;
            goto label_366960;
        }
    }
    ctx->pc = 0x366940u;
    // 0x366940: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x366940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x366944: 0x8c45cb64  lw          $a1, -0x349C($v0)
    ctx->pc = 0x366944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953828)));
    // 0x366948: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x366948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x36694c: 0xc46ccb6c  lwc1        $f12, -0x3494($v1)
    ctx->pc = 0x36694cu;
    { uint32_t bits = FAST_READ32(0x3FCB6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366950: 0xc0d9c16  jal         func_367058
    ctx->pc = 0x366950u;
    SET_GPR_U32(ctx, 31, 0x366958u);
    ctx->pc = 0x366954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366950u;
    // 0x366954: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367058u, 0x366950u, 0x366958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366958u;
label_366958:
    // 0x366958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x366958u;
    {
        const bool branch_taken_0x366958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366958u;
        // 0x36695c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366958) {
            ctx->pc = 0x366978u;
            goto label_366978;
        }
    }
    ctx->pc = 0x366960u;
label_366960:
    // 0x366960: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366968: 0xc44ccb6c  lwc1        $f12, -0x3494($v0)
    ctx->pc = 0x366968u;
    { uint32_t bits = FAST_READ32(0x3FCB6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36696c: 0xc0d9c16  jal         func_367058
    ctx->pc = 0x36696Cu;
    SET_GPR_U32(ctx, 31, 0x366974u);
    ctx->pc = 0x366970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36696Cu;
    // 0x366970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367058u, 0x36696Cu, 0x366974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366974u;
label_366974:
    // 0x366974: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x366974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_366978:
    // 0x366978: 0x9082cb30  lbu         $v0, -0x34D0($a0)
    ctx->pc = 0x366978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294953776)));
    // 0x36697c: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x36697Cu;
    {
        const bool branch_taken_0x36697c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36697Cu;
        // 0x366980: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36697c) {
            ctx->pc = 0x367014u;
            goto label_367014;
        }
    }
    ctx->pc = 0x366984u;
    // 0x366984: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x366984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x366988: 0xc460cb4c  lwc1        $f0, -0x34B4($v1)
    ctx->pc = 0x366988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36698c: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x36698cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366990: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x366990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x366994: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x366994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x366998: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x366998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36699c: 0x0  nop
    ctx->pc = 0x36699cu;
    // NOP
    // 0x3669a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3669A0u;
    {
        const bool branch_taken_0x3669a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3669A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669A0u;
        // 0x3669a4: 0xe460cb4c  swc1        $f0, -0x34B4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669a0) {
            ctx->pc = 0x3669B0u;
            goto label_3669b0;
        }
    }
    ctx->pc = 0x3669A8u;
    // 0x3669a8: 0xa080cb30  sb          $zero, -0x34D0($a0)
    ctx->pc = 0x3669a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294953776), (uint8_t)GPR_U32(ctx, 0));
    // 0x3669ac: 0xe462cb4c  swc1        $f2, -0x34B4($v1)
    ctx->pc = 0x3669acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953804), bits); }
label_3669b0:
    // 0x3669b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3669b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3669b4: 0xc441cb48  lwc1        $f1, -0x34B8($v0)
    ctx->pc = 0x3669b4u;
    { uint32_t bits = FAST_READ32(0x3FCB48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3669b8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3669b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3669bc: 0x0  nop
    ctx->pc = 0x3669bcu;
    // NOP
    // 0x3669c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3669C0u;
    {
        const bool branch_taken_0x3669c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3669C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669C0u;
        // 0x3669c4: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669c0) {
            ctx->pc = 0x3669D4u;
            goto label_3669d4;
        }
    }
    ctx->pc = 0x3669C8u;
    // 0x3669c8: 0xc460cb4c  lwc1        $f0, -0x34B4($v1)
    ctx->pc = 0x3669c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3669cc: 0x0  nop
    ctx->pc = 0x3669ccu;
    // NOP
    // 0x3669d0: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x3669d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3669d4:
    // 0x3669d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3669d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3669d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3669d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3669dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3669dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3669e0: 0x9043cb31  lbu         $v1, -0x34CF($v0)
    ctx->pc = 0x3669e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCB31u));
    // 0x3669e4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3669E4u;
    {
        const bool branch_taken_0x3669e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3669E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669E4u;
        // 0x3669e8: 0x461505c1  sub.s       $f23, $f0, $f21 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3669e4) {
            ctx->pc = 0x366A48u;
            goto label_366a48;
        }
    }
    ctx->pc = 0x3669ECu;
    // 0x3669ec: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3669f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3669f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669f4: 0x2448e178  addiu       $t0, $v0, -0x1E88
    ctx->pc = 0x3669f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x3669f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3669f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3669fc: 0x0  nop
    ctx->pc = 0x3669fcu;
    // NOP
label_366a00:
    // 0x366a00: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x366a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366a04: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x366a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x366a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a0c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x366a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_366a10:
    // 0x366a10: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x366a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x366a14: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x366a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x366a18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366a1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x366a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x366a20: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x366a20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366a24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366A24u;
    {
        const bool branch_taken_0x366a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A24u;
        // 0x366a28: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a24) {
            ctx->pc = 0x366A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366a10;
        }
    }
    ctx->pc = 0x366A2Cu;
    // 0x366a2c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x366a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a30: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x366a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x366a34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x366A34u;
    {
        const bool branch_taken_0x366a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A34u;
        // 0x366a38: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a34) {
            ctx->pc = 0x366A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366a00;
        }
    }
    ctx->pc = 0x366A3Cu;
    // 0x366a3c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x366a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x366a40: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x366A40u;
    {
        const bool branch_taken_0x366a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A40u;
        // 0x366a44: 0xac40ed78  sw          $zero, -0x1288($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294962552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a40) {
            ctx->pc = 0x367014u;
            goto label_367014;
        }
    }
    ctx->pc = 0x366A48u;
label_366a48:
    // 0x366a48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366a4c: 0x8c4acb38  lw          $t2, -0x34C8($v0)
    ctx->pc = 0x366a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3FCB38u));
    // 0x366a50: 0x15400058  bnez        $t2, . + 4 + (0x58 << 2)
    ctx->pc = 0x366A50u;
    {
        const bool branch_taken_0x366a50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x366A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A50u;
        // 0x366a54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a50) {
            ctx->pc = 0x366BB4u;
            goto label_366bb4;
        }
    }
    ctx->pc = 0x366A58u;
    // 0x366a58: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x366a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x366a5c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x366a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x366a60: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x366a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x366a64: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x366a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x366a68: 0x2457e178  addiu       $s7, $v0, -0x1E88
    ctx->pc = 0x366a68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x366a6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a70: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x366a70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x366a74: 0x0  nop
    ctx->pc = 0x366a74u;
    // NOP
label_366a78:
    // 0x366a78: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366A78u;
    {
        const bool branch_taken_0x366a78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x366A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A78u;
        // 0x366a7c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a78) {
            ctx->pc = 0x366A94u;
            goto label_366a94;
        }
    }
    ctx->pc = 0x366A80u;
    // 0x366a80: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x366a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366a84: 0x0  nop
    ctx->pc = 0x366a84u;
    // NOP
    // 0x366a88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366a8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x366A8Cu;
    {
        const bool branch_taken_0x366a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A8Cu;
        // 0x366a90: 0x46180d02  mul.s       $f20, $f1, $f24 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a8c) {
            ctx->pc = 0x366AB0u;
            goto label_366ab0;
        }
    }
    ctx->pc = 0x366A94u;
label_366a94:
    // 0x366a94: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x366a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x366a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x366a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x366a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x366a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366aa0: 0x0  nop
    ctx->pc = 0x366aa0u;
    // NOP
    // 0x366aa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366aa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x366aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x366aac: 0x46180d02  mul.s       $f20, $f1, $f24
    ctx->pc = 0x366aacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_366ab0:
    // 0x366ab0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x366ab4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366ab8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x366ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x366abc: 0x579021  addu        $s2, $v0, $s7
    ctx->pc = 0x366abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x366ac0: 0x48900  sll         $s1, $a0, 4
    ctx->pc = 0x366ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x366ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ac8: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x366ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x366acc: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x366accu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x366ad0: 0x26d4eed8  addiu       $s4, $s6, -0x1128
    ctx->pc = 0x366ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962904));
    // 0x366ad4: 0x0  nop
    ctx->pc = 0x366ad4u;
    // NOP
label_366ad8:
    // 0x366ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x366ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ae0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x366AE0u;
    SET_GPR_U32(ctx, 31, 0x366AE8u);
    ctx->pc = 0x366AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AE0u;
    // 0x366ae4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x366AE0u, 0x366AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AE8u;
label_366ae8:
    // 0x366ae8: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x366ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x366aec: 0xa3b50003  sb          $s5, 0x3($sp)
    ctx->pc = 0x366aecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x366af0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x366af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x366af4: 0x4617a042  mul.s       $f1, $f20, $f23
    ctx->pc = 0x366af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x366af8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x366afc: 0x3b02021  addu        $a0, $sp, $s0
    ctx->pc = 0x366afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x366b00: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x366b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366b04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x366b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x366b0c: 0x2e060003  sltiu       $a2, $s0, 0x3
    ctx->pc = 0x366b0cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366b10: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x366b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x366b14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x366b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366b18: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x366b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x366b1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366b1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x366b20: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x366b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366b24: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x366b24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x366b28: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x366b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x366b2c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x366b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366b30: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x366b30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x366b34: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x366b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x366b38: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x366b38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x366b3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x366b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x366b40: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x366b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x366b44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x366b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x366b48: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x366b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x366b4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x366b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x366b50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x366b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x366b54: 0x14c0ffe0  bnez        $a2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x366B54u;
    {
        const bool branch_taken_0x366b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B54u;
        // 0x366b58: 0x26520400  addiu       $s2, $s2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b54) {
            ctx->pc = 0x366AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ad8;
        }
    }
    ctx->pc = 0x366B5Cu;
    // 0x366b5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b60: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x366b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x366b64: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x366B64u;
    {
        const bool branch_taken_0x366b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B64u;
        // 0x366b68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b64) {
            ctx->pc = 0x366A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366a78;
        }
    }
    ctx->pc = 0x366B6Cu;
    // 0x366b6c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366b70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366b74: 0x2446cb50  addiu       $a2, $v0, -0x34B0
    ctx->pc = 0x366b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x366b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b7c: 0x0  nop
    ctx->pc = 0x366b7cu;
    // NOP
label_366b80:
    // 0x366b80: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x366b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366b84: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x366b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x366b88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366b8c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x366b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x366b90: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x366b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x366b94: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x366b94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x366b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x366b9c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366b9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x366ba0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x366ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366ba4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x366BA4u;
    {
        const bool branch_taken_0x366ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BA4u;
        // 0x366ba8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ba4) {
            ctx->pc = 0x366B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366b80;
        }
    }
    ctx->pc = 0x366BACu;
    // 0x366bac: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x366BACu;
    {
        const bool branch_taken_0x366bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BACu;
        // 0x366bb0: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366bac) {
            ctx->pc = 0x366FF4u;
            goto label_366ff4;
        }
    }
    ctx->pc = 0x366BB4u;
label_366bb4:
    // 0x366bb4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x366bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x366bb8: 0x8d430054  lw          $v1, 0x54($t2)
    ctx->pc = 0x366bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x366bbc: 0x8e22cb3c  lw          $v0, -0x34C4($s1)
    ctx->pc = 0x366bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCB3Cu));
    // 0x366bc0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x366bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366bc4: 0x8d530060  lw          $s3, 0x60($t2)
    ctx->pc = 0x366bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x366bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bcc: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x366bccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x366bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366bd4: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x366bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x366bd8: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x366bdc: 0x26480002  addiu       $t0, $s2, 0x2
    ctx->pc = 0x366bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x366be0: 0x26490003  addiu       $t1, $s2, 0x3
    ctx->pc = 0x366be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x366be4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x366be8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x366be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x366bec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x366becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x366bf0: 0x8d420054  lw          $v0, 0x54($t2)
    ctx->pc = 0x366bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x366bf4: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x366bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x366bf8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x366bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x366bfc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x366bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x366c00: 0x8d430054  lw          $v1, 0x54($t2)
    ctx->pc = 0x366c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x366c04: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x366c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x366c08: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x366c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x366c0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x366c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x366c10: 0x8d420054  lw          $v0, 0x54($t2)
    ctx->pc = 0x366c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x366c14: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x366c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x366c18: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x366c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x366c1c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x366C1Cu;
    SET_GPR_U32(ctx, 31, 0x366C24u);
    ctx->pc = 0x366C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C1Cu;
    // 0x366c20: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x366C1Cu, 0x366C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C24u;
label_366c24:
    // 0x366c24: 0x8e23cb3c  lw          $v1, -0x34C4($s1)
    ctx->pc = 0x366c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953788)));
    // 0x366c28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x366c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366c2c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x366C2Cu;
    {
        const bool branch_taken_0x366c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x366C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C2Cu;
        // 0x366c30: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c2c) {
            ctx->pc = 0x366C58u;
            goto label_366c58;
        }
    }
    ctx->pc = 0x366C34u;
    // 0x366c34: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x366c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x366c38: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x366c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x366c3c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366C3Cu;
    {
        const bool branch_taken_0x366c3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x366c3c) {
            ctx->pc = 0x366C58u;
            goto label_366c58;
        }
    }
    ctx->pc = 0x366C44u;
    // 0x366c44: 0x80620005  lb          $v0, 0x5($v1)
    ctx->pc = 0x366c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x366c48: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366C48u;
    {
        const bool branch_taken_0x366c48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x366c48) {
            ctx->pc = 0x366C58u;
            goto label_366c58;
        }
    }
    ctx->pc = 0x366C50u;
    // 0x366c50: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x366c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x366c54: 0x28570000  slti        $s7, $v0, 0x0
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_366c58:
    // 0x366c58: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x366C58u;
    {
        const bool branch_taken_0x366c58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x366C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C58u;
        // 0x366c5c: 0x8e84cb38  lw          $a0, -0x34C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366c58) {
            ctx->pc = 0x366CB0u;
            goto label_366cb0;
        }
    }
    ctx->pc = 0x366C60u;
    // 0x366c60: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x366c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x366c64: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x366c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x366c68: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x366c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x366c6c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x366c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x366c70: 0x26470003  addiu       $a3, $s2, 0x3
    ctx->pc = 0x366c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x366c74: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x366c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x366c78: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x366c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x366c7c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x366c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x366c80: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x366c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x366c84: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x366c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x366c88: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x366c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x366c8c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x366c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x366c90: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x366c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x366c94: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x366c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x366c98: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x366c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x366c9c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x366c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x366ca0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x366ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x366ca4: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x366ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x366ca8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x366ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x366cac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x366cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_366cb0:
    // 0x366cb0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x366cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x366cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x366cb8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x366cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x366cbc: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x366cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x366cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366cc4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x366cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x366cc8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x366cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x366ccc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x366cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x366cd0: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x366cd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366cd4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x366cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x366cd8: 0x46004886  mov.s       $f2, $f9
    ctx->pc = 0x366cd8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[9]);
    // 0x366cdc: 0x0  nop
    ctx->pc = 0x366cdcu;
    // NOP
label_366ce0:
    // 0x366ce0: 0x460a1034  c.lt.s      $f2, $f10
    ctx->pc = 0x366ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366ce4: 0x0  nop
    ctx->pc = 0x366ce4u;
    // NOP
    // 0x366ce8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x366CE8u;
    {
        const bool branch_taken_0x366ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x366CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366CE8u;
        // 0x366cec: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ce8) {
            ctx->pc = 0x366CF4u;
            goto label_366cf4;
        }
    }
    ctx->pc = 0x366CF0u;
    // 0x366cf0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x366cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_366cf4:
    // 0x366cf4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x366cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x366cf8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x366cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x366cfc: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x366cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x366d00: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x366d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366d04: 0x30c40007  andi        $a0, $a2, 0x7
    ctx->pc = 0x366d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x366d08: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366D08u;
    {
        const bool branch_taken_0x366d08 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x366D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D08u;
        // 0x366d0c: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366d08) {
            ctx->pc = 0x366D24u;
            goto label_366d24;
        }
    }
    ctx->pc = 0x366D10u;
    // 0x366d10: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x366d10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366d14: 0x0  nop
    ctx->pc = 0x366d14u;
    // NOP
    // 0x366d18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x366D1Cu;
    {
        const bool branch_taken_0x366d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d1c) {
            ctx->pc = 0x366D40u;
            goto label_366d40;
        }
    }
    ctx->pc = 0x366D24u;
label_366d24:
    // 0x366d24: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x366d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x366d28: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x366d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x366d2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x366d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x366d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x366d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366d34: 0x0  nop
    ctx->pc = 0x366d34u;
    // NOP
    // 0x366d38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366d3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x366d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_366d40:
    // 0x366d40: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x366d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x366d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x366d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366d48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366d4c: 0xc445cb34  lwc1        $f5, -0x34CC($v0)
    ctx->pc = 0x366d4cu;
    { uint32_t bits = FAST_READ32(0x3FCB34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x366d50: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x366d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x366d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x366d58: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x366d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x366d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x366d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x366d60: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x366d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x366d64: 0x245ee178  addiu       $fp, $v0, -0x1E88
    ctx->pc = 0x366d64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x366d68: 0x8fb80040  lw          $t8, 0x40($sp)
    ctx->pc = 0x366d68u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366d6c: 0x77880  sll         $t7, $a3, 2
    ctx->pc = 0x366d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x366d70: 0x46080102  mul.s       $f4, $f0, $f8
    ctx->pc = 0x366d70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x366d74: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x366d74u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x366d78: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x366d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x366d7c: 0x6c880  sll         $t9, $a2, 2
    ctx->pc = 0x366d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x366d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d84: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x366d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x366d88: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x366d88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366d8c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x366d8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d90: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x366d90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x366d94: 0x69900  sll         $s3, $a2, 4
    ctx->pc = 0x366d94u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x366d98: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x366d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d9c: 0x0  nop
    ctx->pc = 0x366d9cu;
    // NOP
label_366da0:
    // 0x366da0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x366da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x366da4: 0x51b00  sll         $v1, $a1, 12
    ctx->pc = 0x366da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x366da8: 0x2a26021  addu        $t4, $s5, $v0
    ctx->pc = 0x366da8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x366dac: 0x3025821  addu        $t3, $t8, $v0
    ctx->pc = 0x366dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x366db0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x366db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x366db4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x366db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x366db8: 0x2442eed8  addiu       $v0, $v0, -0x1128
    ctx->pc = 0x366db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962904));
    // 0x366dbc: 0x24ae0001  addiu       $t6, $a1, 0x1
    ctx->pc = 0x366dbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366dc0: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x366dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x366dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366dc8: 0x56a80  sll         $t5, $a1, 10
    ctx->pc = 0x366dc8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x366dcc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x366dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_366dd0:
    // 0x366dd0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x366dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x366dd4: 0x1e93021  addu        $a2, $t7, $t1
    ctx->pc = 0x366dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x366dd8: 0x2293821  addu        $a3, $s1, $t1
    ctx->pc = 0x366dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x366ddc: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x366ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x366de0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x366de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x366de4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x366de4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x366de8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x366de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366dec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x366decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366df0: 0x0  nop
    ctx->pc = 0x366df0u;
    // NOP
    // 0x366df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366df8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x366df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366dfc: 0x0  nop
    ctx->pc = 0x366dfcu;
    // NOP
    // 0x366e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366e04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x366e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x366e08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x366e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x366e0c: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x366E0Cu;
    {
        const bool branch_taken_0x366e0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x366E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E0Cu;
        // 0x366e10: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e0c) {
            ctx->pc = 0x366E5Cu;
            goto label_366e5c;
        }
    }
    ctx->pc = 0x366E14u;
    // 0x366e14: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x366e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x366e18: 0x46053881  sub.s       $f2, $f7, $f5
    ctx->pc = 0x366e18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x366e1c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x366e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x366e20: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x366e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x366e24: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x366e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x366e28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x366e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366e2c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x366e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x366e30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x366e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366e34: 0x0  nop
    ctx->pc = 0x366e34u;
    // NOP
    // 0x366e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x366e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366e40: 0x0  nop
    ctx->pc = 0x366e40u;
    // NOP
    // 0x366e44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366e48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x366e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x366e4c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x366e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x366e50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x366e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366e54: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x366e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x366e58: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x366e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_366e5c:
    // 0x366e5c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x366e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x366e60: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x366e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366e64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x366e68: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x366e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x366e6c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x366e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x366e70: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x366e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x366e74: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x366e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x366e78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x366e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366e7c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x366e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x366e80: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x366E80u;
    {
        const bool branch_taken_0x366e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E80u;
        // 0x366e84: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e80) {
            ctx->pc = 0x366DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366dd0;
        }
    }
    ctx->pc = 0x366E88u;
    // 0x366e88: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366e8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_366e98:
    // 0x366e98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x366e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366e9c: 0x3a62021  addu        $a0, $sp, $a2
    ctx->pc = 0x366e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x366ea0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x366ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x366ea4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x366ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x366ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x366ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x366eac: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x366eacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x366eb0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x366eb4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x366eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366eb8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x366EB8u;
    {
        const bool branch_taken_0x366eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EB8u;
        // 0x366ebc: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366eb8) {
            ctx->pc = 0x366E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366e98;
        }
    }
    ctx->pc = 0x366EC0u;
    // 0x366ec0: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x366ec0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x366ec4: 0x32d3021  addu        $a2, $t9, $t5
    ctx->pc = 0x366ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x366ec8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x366ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366ecc: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x366eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x366ed0: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x366ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x366ed4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x366ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x366ed8: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x366ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x366edc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x366edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x366ee0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x366ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x366ee4: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x366ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x366ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x366eec: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x366eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x366ef0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x366ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x366ef4: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x366ef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366ef8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x366EF8u;
    {
        const bool branch_taken_0x366ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EF8u;
        // 0x366efc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ef8) {
            ctx->pc = 0x366DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366da0;
        }
    }
    ctx->pc = 0x366F00u;
    // 0x366f00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f04: 0x2cc20100  sltiu       $v0, $a2, 0x100
    ctx->pc = 0x366f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x366f08: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x366F08u;
    {
        const bool branch_taken_0x366f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F08u;
        // 0x366f0c: 0x46004886  mov.s       $f2, $f9 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f08) {
            ctx->pc = 0x366CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366ce0;
        }
    }
    ctx->pc = 0x366F10u;
    // 0x366f10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366f14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x366f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x366f18: 0xc444cb34  lwc1        $f4, -0x34CC($v0)
    ctx->pc = 0x366f18u;
    { uint32_t bits = FAST_READ32(0x3FCB34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x366f1c: 0x2466cb50  addiu       $a2, $v1, -0x34B0
    ctx->pc = 0x366f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953808));
    // 0x366f20: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x366f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x366f24: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x366f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x366f28: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x366f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x366f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x366f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x366f34: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x366f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x366f38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x366f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f3c: 0x0  nop
    ctx->pc = 0x366f3cu;
    // NOP
label_366f40:
    // 0x366f40: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x366f44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x366f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x366f48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x366f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x366f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366f50: 0x0  nop
    ctx->pc = 0x366f50u;
    // NOP
    // 0x366f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366f58: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x366F58u;
    {
        const bool branch_taken_0x366f58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x366F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F58u;
        // 0x366f5c: 0x460500c2  mul.s       $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f58) {
            ctx->pc = 0x366F8Cu;
            goto label_366f8c;
        }
    }
    ctx->pc = 0x366F60u;
    // 0x366f60: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x366f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x366f64: 0x46043041  sub.s       $f1, $f6, $f4
    ctx->pc = 0x366f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x366f68: 0x46052082  mul.s       $f2, $f4, $f5
    ctx->pc = 0x366f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x366f6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x366f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x366f70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x366f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366f74: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x366f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x366f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x366f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366f7c: 0x0  nop
    ctx->pc = 0x366f7cu;
    // NOP
    // 0x366f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366f84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x366f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x366f88: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x366f88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_366f8c:
    // 0x366f8c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x366f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366f90: 0x46171842  mul.s       $f1, $f3, $f23
    ctx->pc = 0x366f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x366f94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x366f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x366f98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x366f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x366f9c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x366f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x366fa0: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x366fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x366fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366fa8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x366fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x366fac: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x366FACu;
    {
        const bool branch_taken_0x366fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FACu;
        // 0x366fb0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366fac) {
            ctx->pc = 0x366F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366f40;
        }
    }
    ctx->pc = 0x366FB4u;
    // 0x366fb4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366fb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366fbc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x366fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fc4: 0x0  nop
    ctx->pc = 0x366fc4u;
    // NOP
label_366fc8:
    // 0x366fc8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x366fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366fcc: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x366fd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x366fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366fd4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x366fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x366fd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x366fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x366fdc: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x366fdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x366fe0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x366fe4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x366fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366fe8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x366FE8u;
    {
        const bool branch_taken_0x366fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FE8u;
        // 0x366fec: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366fe8) {
            ctx->pc = 0x366FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366fc8;
        }
    }
    ctx->pc = 0x366FF0u;
    // 0x366ff0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x366ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_366ff4:
    // 0x366ff4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x366ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366ff8: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x366ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x366ffc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x366ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x367000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x367000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367004: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x367004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x367008: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36700c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x367010: 0xac43ed78  sw          $v1, -0x1288($v0)
    ctx->pc = 0x367010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5BED78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BED78u, _value); } while (0);
label_367014:
    // 0x367014: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x367014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367018: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x367018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36701c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x36701cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367020: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x367020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x367024: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x367024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367028: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x367028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36702c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x36702cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367030: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x367030u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x367034: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x367034u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367038: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x367038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36703c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x36703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x367040: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x367040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x367044: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x367044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x367048: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x367048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36704c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x36704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367050: 0x3e00008  jr          $ra
    ctx->pc = 0x367050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367050u;
        // 0x367054: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367058u;
}
