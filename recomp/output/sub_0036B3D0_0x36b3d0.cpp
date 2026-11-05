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

// Function: sub_0036B3D0
// Address: 0x36b3d0 - 0x36b6e0
void sub_0036B3D0_0x36b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B3D0_0x36b3d0");
#endif

    switch (ctx->pc) {
        case 0x36b628u: goto label_36b628;
        default: break;
    }

    ctx->pc = 0x36b3d0u;

    // 0x36b3d0: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x36b3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x36b3d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x36b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b3d8: 0x140c02d  daddu       $t8, $t2, $zero
    ctx->pc = 0x36b3d8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3dc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x36b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x36b3e0: 0x254aca60  addiu       $t2, $t2, -0x35A0
    ctx->pc = 0x36b3e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953568));
    // 0x36b3e4: 0x244f7d90  addiu       $t7, $v0, 0x7D90
    ctx->pc = 0x36b3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x36b3e8: 0x8d480018  lw          $t0, 0x18($t2)
    ctx->pc = 0x36b3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36b3ec: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x36b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x36b3f0: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x36b3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x36b3f4: 0x248b0048  addiu       $t3, $a0, 0x48
    ctx->pc = 0x36b3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x36b3f8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x36b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x36b3fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b400: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x36b400u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b404: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x36b404u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b408: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x36b408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b40c: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x36b40cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b410: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x36b410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x36b414: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x36b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b418: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x36b418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x36b41c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x36b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b420: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x36b420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x36b424: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b428: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x36b428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x36b42c: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x36b42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x36b430: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x36b430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x36b434: 0x90850009  lbu         $a1, 0x9($a0)
    ctx->pc = 0x36b434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x36b438: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b43c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b440: 0x90890008  lbu         $t1, 0x8($a0)
    ctx->pc = 0x36b440u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b448: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36b448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x36b44c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b450: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x36b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x36b454: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x36b454u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x36b458: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x36b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x36b45c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x36b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b460: 0x24680018  addiu       $t0, $v1, 0x18
    ctx->pc = 0x36b460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x36b464: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x36b464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x36b468: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x36b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b46c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x36b46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x36b470: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x36b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b474: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x36b474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x36b478: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x36b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b47c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x36b47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x36b480: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b484: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x36b484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x36b488: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x36b488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x36b48c: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x36b48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x36b490: 0x90c50009  lbu         $a1, 0x9($a2)
    ctx->pc = 0x36b490u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x36b494: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b498: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b49c: 0x90c90008  lbu         $t1, 0x8($a2)
    ctx->pc = 0x36b49cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x36b4a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b4a4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x36b4a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b4ac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x36b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x36b4b0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x36b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x36b4b4: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x36b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x36b4b8: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x36b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b4bc: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x36b4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x36b4c0: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x36b4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x36b4c4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x36b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b4c8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x36b4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x36b4cc: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x36b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b4d0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x36b4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x36b4d4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x36b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b4d8: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x36b4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x36b4dc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x36b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b4e0: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x36b4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x36b4e4: 0x90e2000b  lbu         $v0, 0xB($a3)
    ctx->pc = 0x36b4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x36b4e8: 0x90e3000a  lbu         $v1, 0xA($a3)
    ctx->pc = 0x36b4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x36b4ec: 0x90e50009  lbu         $a1, 0x9($a3)
    ctx->pc = 0x36b4ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x36b4f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b4f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b4f8: 0x90e80008  lbu         $t0, 0x8($a3)
    ctx->pc = 0x36b4f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x36b4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b500: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36b500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x36b504: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b508: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x36b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x36b50c: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x36b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x36b510: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x36b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x36b514: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x36b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b518: 0x24660048  addiu       $a2, $v1, 0x48
    ctx->pc = 0x36b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x36b51c: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x36b51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x36b520: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x36b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b524: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x36b524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x36b528: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x36b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b52c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x36b52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x36b530: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x36b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b534: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x36b534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x36b538: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x36b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b53c: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x36b53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x36b540: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x36b540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x36b544: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x36b544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x36b548: 0x90850009  lbu         $a1, 0x9($a0)
    ctx->pc = 0x36b548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x36b54c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b550: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b554: 0x90880008  lbu         $t0, 0x8($a0)
    ctx->pc = 0x36b554u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b558: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b55c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x36b560: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b564: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x36b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x36b568: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x36b568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x36b56c: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x36b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x36b570: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x36b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b574: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x36b574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x36b578: 0xe4610060  swc1        $f1, 0x60($v1)
    ctx->pc = 0x36b578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x36b57c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x36b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b580: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x36b580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x36b584: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x36b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b588: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x36b588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x36b58c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x36b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b590: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x36b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x36b594: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x36b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b598: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x36b598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x36b59c: 0x90e2000b  lbu         $v0, 0xB($a3)
    ctx->pc = 0x36b59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x36b5a0: 0x90e3000a  lbu         $v1, 0xA($a3)
    ctx->pc = 0x36b5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x36b5a4: 0x90e50009  lbu         $a1, 0x9($a3)
    ctx->pc = 0x36b5a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x36b5a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b5ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b5b0: 0x90e80008  lbu         $t0, 0x8($a3)
    ctx->pc = 0x36b5b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x36b5b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b5b8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x36b5bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b5c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x36b5c4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x36b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x36b5c8: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x36b5cc: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x36b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b5d0: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x36b5d4: 0xe4610078  swc1        $f1, 0x78($v1)
    ctx->pc = 0x36b5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x36b5d8: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x36b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b5dc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x36b5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x36b5e0: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x36b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b5e4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x36b5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x36b5e8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x36b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b5ec: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x36b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x36b5f0: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x36b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b5f4: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x36b5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x36b5f8: 0x9162000b  lbu         $v0, 0xB($t3)
    ctx->pc = 0x36b5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 11)));
    // 0x36b5fc: 0x9163000a  lbu         $v1, 0xA($t3)
    ctx->pc = 0x36b5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x36b600: 0x91640009  lbu         $a0, 0x9($t3)
    ctx->pc = 0x36b600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x36b604: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36b608: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36b608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36b60c: 0x91660008  lbu         $a2, 0x8($t3)
    ctx->pc = 0x36b60cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x36b610: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36b614: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x36b614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36b618: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x36b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x36b61c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x36b61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x36b620: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x36b620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x36b624: 0x0  nop
    ctx->pc = 0x36b624u;
    // NOP
label_36b628:
    // 0x36b628: 0x8da20018  lw          $v0, 0x18($t5)
    ctx->pc = 0x36b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x36b62c: 0x8da30024  lw          $v1, 0x24($t5)
    ctx->pc = 0x36b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x36b630: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x36b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x36b634: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x36b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b638: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b63c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b640: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36b644: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36b644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36b648: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x36b648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36b64c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36B64Cu;
    {
        const bool branch_taken_0x36b64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B64Cu;
        // 0x36b650: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b64c) {
            ctx->pc = 0x36B67Cu;
            goto label_36b67c;
        }
    }
    ctx->pc = 0x36B654u;
    // 0x36b654: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b658: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x36b658u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b65c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x36b65cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36b660: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x36b660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x36b664: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x36b664u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x36b668: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x36b668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b66c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x36b66cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b670: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x36b670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36b674: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x36b674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b678: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_36b67c:
    // 0x36b67c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b67cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b680: 0xd9e20000  lqc2        $vf2, 0x0($t7)
    ctx->pc = 0x36b680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x36b684: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b688: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b68c: 0x8da30018  lw          $v1, 0x18($t5)
    ctx->pc = 0x36b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x36b690: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x36b690u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x36b694: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b698: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x36b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x36b69c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36b6a0: 0x8da20018  lw          $v0, 0x18($t5)
    ctx->pc = 0x36b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x36b6a4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b6a8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x36b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x36b6ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36b6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x36b6b0: 0x8da30018  lw          $v1, 0x18($t5)
    ctx->pc = 0x36b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x36b6b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b6b8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x36b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x36b6bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36b6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36b6c0: 0x5c1ffd9  bgez        $t6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x36B6C0u;
    {
        const bool branch_taken_0x36b6c0 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x36B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6C0u;
        // 0x36b6c4: 0x258c0018  addiu       $t4, $t4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b6c0) {
            ctx->pc = 0x36B628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b628;
        }
    }
    ctx->pc = 0x36B6C8u;
    // 0x36b6c8: 0x2703ca60  addiu       $v1, $t8, -0x35A0
    ctx->pc = 0x36b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 4294953568));
    // 0x36b6cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x36b6d0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x36b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x36b6d4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x36b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x36b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x36B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6D8u;
        // 0x36b6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B6E0u;
}
