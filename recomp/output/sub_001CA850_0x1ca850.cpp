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

// Function: sub_001CA850
// Address: 0x1ca850 - 0x1cafa0
void sub_001CA850_0x1ca850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA850_0x1ca850");
#endif

    switch (ctx->pc) {
        case 0x1caae4u: goto label_1caae4;
        case 0x1cabbcu: goto label_1cabbc;
        case 0x1cacb0u: goto label_1cacb0;
        case 0x1cadbcu: goto label_1cadbc;
        case 0x1caf14u: goto label_1caf14;
        default: break;
    }

    ctx->pc = 0x1ca850u;

    // 0x1ca850: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ca854: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1ca854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1ca858: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1ca858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1ca85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca860: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1ca860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1ca864: 0x26080030  addiu       $t0, $s0, 0x30
    ctx->pc = 0x1ca864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ca868: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1ca868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1ca86c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ca86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ca870: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1ca870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca874: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ca874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ca878: 0x8ce30104  lw          $v1, 0x104($a3)
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x1ca87c: 0x24e403b0  addiu       $a0, $a3, 0x3B0
    ctx->pc = 0x1ca87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 944));
    // 0x1ca880: 0x24c503b0  addiu       $a1, $a2, 0x3B0
    ctx->pc = 0x1ca880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 944));
    // 0x1ca884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca888: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1ca888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca88c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ca890: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ca890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ca894: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ca894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca898: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ca898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ca89c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ca89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ca8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ca8a4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ca8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca8a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1ca8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ca8ac: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x1ca8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1ca8b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ca8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca8b4: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x1ca8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8b8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1ca8bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ca8bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ca8c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ca8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca8c4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ca8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ca8c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1ca8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8cc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1ca8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ca8d0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ca8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca8d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ca8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ca8d8: 0x8ce20104  lw          $v0, 0x104($a3)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x1ca8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca8e0: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1ca8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8e4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1ca8e8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1ca8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ca8ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ca8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca8f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1ca8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ca8f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1ca8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8f8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ca8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ca8fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ca8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca900: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1ca900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1ca904: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1ca908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca90c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1ca90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca910: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1ca910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1ca914: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1ca914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ca918: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ca918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca91c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1ca91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ca920: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1ca920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca924: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1ca924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ca928: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ca928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca92c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ca92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ca930: 0xc4e103b0  lwc1        $f1, 0x3B0($a3)
    ctx->pc = 0x1ca930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca934: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1ca934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ca938: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ca938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca93c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ca93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ca940: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1ca940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca944: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1ca944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ca948: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ca948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca94c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ca950: 0xc4c103b0  lwc1        $f1, 0x3B0($a2)
    ctx->pc = 0x1ca950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca954: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1ca954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ca958: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1ca958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca95c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ca95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ca960: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1ca960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca964: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1ca964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ca968: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ca968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca96c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ca96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ca970: 0x8ce40104  lw          $a0, 0x104($a3)
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x1ca974: 0x8cc50104  lw          $a1, 0x104($a2)
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1ca978: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca97c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca980: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ca980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ca984: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ca984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ca988: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ca988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca98c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1ca98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca990: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ca990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca994: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1ca994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca998: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1ca998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca99c: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x1ca99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca9a0: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x1ca9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ca9a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ca9a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ca9a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ca9a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ca9ac: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1ca9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ca9b0: 0x0  nop
    ctx->pc = 0x1ca9b0u;
    // NOP
    // 0x1ca9b4: 0x0  nop
    ctx->pc = 0x1ca9b4u;
    // NOP
    // 0x1ca9b8: 0x46000044  c1          0x44
    ctx->pc = 0x1ca9b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ca9bc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1ca9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ca9c0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ca9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ca9c4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1ca9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ca9c8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1ca9c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ca9cc: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1ca9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca9d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1ca9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca9d4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1ca9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca9d8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1ca9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ca9dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ca9dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ca9e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ca9e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ca9e4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1ca9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ca9e8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1ca9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ca9ec: 0x0  nop
    ctx->pc = 0x1ca9ecu;
    // NOP
    // 0x1ca9f0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1ca9f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca9f4: 0x0  nop
    ctx->pc = 0x1ca9f4u;
    // NOP
    // 0x1ca9f8: 0x45030162  bc1tl       . + 4 + (0x162 << 2)
    ctx->pc = 0x1CA9F8u;
    {
        const bool branch_taken_0x1ca9f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca9f8) {
            ctx->pc = 0x1CA9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA9F8u;
            // 0x1ca9fc: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAA00u;
    // 0x1caa00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1caa00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1caa04: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1caa04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caa08: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1caa08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caa0c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1caa0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1caa10: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1caa10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1caa14: 0x4a0003bf  vwaitq
    ctx->pc = 0x1caa14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1caa18: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1caa18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1caa1c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1caa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1caa20: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1caa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caa24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1caa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1caa28: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1caa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa2c: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x1caa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caa30: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1caa30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1caa34: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1caa34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1caa38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1caa38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1caa3c: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x1caa3cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x1caa40: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1caa40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1caa44: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1caa44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1caa48: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1caa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1caa4c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1caa4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1caa50: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1caa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa54: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1caa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1caa58: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1caa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caa5c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1caa5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1caa60: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1caa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1caa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1caa68: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1caa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caa6c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1caa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caa70: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1caa70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caa74: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1caa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caa78: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1caa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caa7c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1caa7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1caa80: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1caa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caa84: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1caa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caa88: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1caa88u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caa8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1caa90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1caa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caa94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caa98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caa9c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1caa9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caaa0: 0x0  nop
    ctx->pc = 0x1caaa0u;
    // NOP
    // 0x1caaa4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAAA4u;
    {
        const bool branch_taken_0x1caaa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAA4u;
        // 0x1caaa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caaa4) {
            ctx->pc = 0x1CAAB4u;
            goto label_1caab4;
        }
    }
    ctx->pc = 0x1CAAACu;
    // 0x1caaac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAAACu;
    {
        const bool branch_taken_0x1caaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAACu;
        // 0x1caab0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caaac) {
            ctx->pc = 0x1CAAC4u;
            goto label_1caac4;
        }
    }
    ctx->pc = 0x1CAAB4u;
label_1caab4:
    // 0x1caab4: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1caab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caab8: 0x0  nop
    ctx->pc = 0x1caab8u;
    // NOP
    // 0x1caabc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAABCu;
    {
        const bool branch_taken_0x1caabc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caabc) {
            ctx->pc = 0x1CAAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAABCu;
            // 0x1caac0: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAAC4u;
            goto label_1caac4;
        }
    }
    ctx->pc = 0x1CAAC4u;
label_1caac4:
    // 0x1caac4: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1caac4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1caac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caacc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1caaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1caad0: 0x0  nop
    ctx->pc = 0x1caad0u;
    // NOP
    // 0x1caad4: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1caad4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1caad8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1caad8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1caadc: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CAADCu;
    SET_GPR_U32(ctx, 31, 0x1CAAE4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CAADCu, 0x1CAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAE4u;
label_1caae4:
    // 0x1caae4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1caae8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1caae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1caaec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caaf0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1caaf4: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1caaf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1caaf8: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x1caaf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1caafc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1caafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab00: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab04: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cab04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cab08: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1cab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab0c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab10: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cab10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cab14: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1cab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab18: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab1c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1cab1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cab20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cab20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cab24: 0x0  nop
    ctx->pc = 0x1cab24u;
    // NOP
    // 0x1cab28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cab28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab2c: 0x0  nop
    ctx->pc = 0x1cab2cu;
    // NOP
    // 0x1cab30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAB30u;
    {
        const bool branch_taken_0x1cab30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB30u;
        // 0x1cab34: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab30) {
            ctx->pc = 0x1CAB40u;
            goto label_1cab40;
        }
    }
    ctx->pc = 0x1CAB38u;
    // 0x1cab38: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1cab38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1cab3c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1cab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1cab40:
    // 0x1cab40: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cab44: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab48: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab4c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cab4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cab50: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1cab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab54: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab58: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cab58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cab5c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1cab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab60: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cab64: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1cab64u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cab68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cab6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cab6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cab70: 0x0  nop
    ctx->pc = 0x1cab70u;
    // NOP
    // 0x1cab74: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1cab74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab78: 0x0  nop
    ctx->pc = 0x1cab78u;
    // NOP
    // 0x1cab7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAB7Cu;
    {
        const bool branch_taken_0x1cab7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB7Cu;
        // 0x1cab80: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab7c) {
            ctx->pc = 0x1CAB8Cu;
            goto label_1cab8c;
        }
    }
    ctx->pc = 0x1CAB84u;
    // 0x1cab84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAB84u;
    {
        const bool branch_taken_0x1cab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB84u;
        // 0x1cab88: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab84) {
            ctx->pc = 0x1CAB9Cu;
            goto label_1cab9c;
        }
    }
    ctx->pc = 0x1CAB8Cu;
label_1cab8c:
    // 0x1cab8c: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x1cab8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab90: 0x0  nop
    ctx->pc = 0x1cab90u;
    // NOP
    // 0x1cab94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAB94u;
    {
        const bool branch_taken_0x1cab94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cab94) {
            ctx->pc = 0x1CAB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAB94u;
            // 0x1cab98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAB9Cu;
            goto label_1cab9c;
        }
    }
    ctx->pc = 0x1CAB9Cu;
label_1cab9c:
    // 0x1cab9c: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1cab9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1caba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caba4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1caba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1caba8: 0x0  nop
    ctx->pc = 0x1caba8u;
    // NOP
    // 0x1cabac: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1cabacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1cabb0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1cabb0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cabb4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CABB4u;
    SET_GPR_U32(ctx, 31, 0x1CABBCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CABB4u, 0x1CABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABBCu;
label_1cabbc:
    // 0x1cabbc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1cabc0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1cabc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1cabc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cabc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cabc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cabcc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cabccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cabd0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1cabd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1cabd4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cabd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cabd8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cabdc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cabdcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cabe0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cabe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cabe4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cabe8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cabe8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cabec: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1cabecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cabf0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cabf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cabf4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cabf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cabf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cabf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cabfc: 0x0  nop
    ctx->pc = 0x1cabfcu;
    // NOP
    // 0x1cac00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cac00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cac04: 0x0  nop
    ctx->pc = 0x1cac04u;
    // NOP
    // 0x1cac08: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAC08u;
    {
        const bool branch_taken_0x1cac08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cac08) {
            ctx->pc = 0x1CAC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC08u;
            // 0x1cac0c: 0xe6020020  swc1        $f2, 0x20($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC1Cu;
            goto label_1cac1c;
        }
    }
    ctx->pc = 0x1CAC10u;
    // 0x1cac10: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1cac10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1cac14: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1cac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1cac18: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x1cac18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1cac1c:
    // 0x1cac1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cac20: 0x8c42032c  lw          $v0, 0x32C($v0)
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x1cac24: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CAC24u;
    {
        const bool branch_taken_0x1cac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC24u;
        // 0x1cac28: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac24) {
            ctx->pc = 0x1CACD4u;
            goto label_1cacd4;
        }
    }
    ctx->pc = 0x1CAC2Cu;
    // 0x1cac2c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1cac30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cac34: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1cac38: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cac3c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cac40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cac40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cac44: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cac48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cac4c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cac4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cac50: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1cac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cac54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cac58: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1cac58u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cac5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cac60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cac60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cac64: 0x0  nop
    ctx->pc = 0x1cac64u;
    // NOP
    // 0x1cac68: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1cac68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cac6c: 0x0  nop
    ctx->pc = 0x1cac6cu;
    // NOP
    // 0x1cac70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC70u;
    {
        const bool branch_taken_0x1cac70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cac70) {
            ctx->pc = 0x1CAC80u;
            goto label_1cac80;
        }
    }
    ctx->pc = 0x1CAC78u;
    // 0x1cac78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAC78u;
    {
        const bool branch_taken_0x1cac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC78u;
        // 0x1cac7c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac78) {
            ctx->pc = 0x1CAC90u;
            goto label_1cac90;
        }
    }
    ctx->pc = 0x1CAC80u;
label_1cac80:
    // 0x1cac80: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x1cac80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cac84: 0x0  nop
    ctx->pc = 0x1cac84u;
    // NOP
    // 0x1cac88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAC88u;
    {
        const bool branch_taken_0x1cac88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cac88) {
            ctx->pc = 0x1CAC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC88u;
            // 0x1cac8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC90u;
            goto label_1cac90;
        }
    }
    ctx->pc = 0x1CAC90u;
label_1cac90:
    // 0x1cac90: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1cac90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1cac94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cac98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cac9c: 0x0  nop
    ctx->pc = 0x1cac9cu;
    // NOP
    // 0x1caca0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1caca0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1caca4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1caca4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1caca8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CACA8u;
    SET_GPR_U32(ctx, 31, 0x1CACB0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CACA8u, 0x1CACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACB0u;
label_1cacb0:
    // 0x1cacb0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1cacb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1cacb4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1cacb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1cacb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cacb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cacbc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1cacbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1cacc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cacc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cacc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cacc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cacc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cacc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1caccc: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1cacccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cacd0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cacd4:
    // 0x1cacd4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cacd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cacd8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1cacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cacdc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1cacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cace0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cace0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cace4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cace4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cace8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1cace8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cacec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cacecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cacf0: 0x0  nop
    ctx->pc = 0x1cacf0u;
    // NOP
    // 0x1cacf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cacf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cacf8: 0x0  nop
    ctx->pc = 0x1cacf8u;
    // NOP
    // 0x1cacfc: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1CACFCu;
    {
        const bool branch_taken_0x1cacfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cacfc) {
            ctx->pc = 0x1CAE18u;
            goto label_1cae18;
        }
    }
    ctx->pc = 0x1CAD04u;
    // 0x1cad04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cad04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cad08: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1cad08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cad0c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1cad0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cad10: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1cad10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cad14: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cad14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cad18: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cad18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cad1c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1cad1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cad20: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cad24: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1cad28: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1cad2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cad2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1cad30: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cad30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cad34: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1cad34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cad38: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1cad38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cad3c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cad40: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1cad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cad44: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cad48: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cad48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cad4c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1cad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cad50: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1cad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cad54: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cad54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cad58: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1cad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cad5c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1cad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cad60: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1cad60u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cad64: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cad68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cad68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cad70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cad70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cad74: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1cad74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cad78: 0x0  nop
    ctx->pc = 0x1cad78u;
    // NOP
    // 0x1cad7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAD7Cu;
    {
        const bool branch_taken_0x1cad7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cad7c) {
            ctx->pc = 0x1CAD8Cu;
            goto label_1cad8c;
        }
    }
    ctx->pc = 0x1CAD84u;
    // 0x1cad84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAD84u;
    {
        const bool branch_taken_0x1cad84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD84u;
        // 0x1cad88: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad84) {
            ctx->pc = 0x1CAD9Cu;
            goto label_1cad9c;
        }
    }
    ctx->pc = 0x1CAD8Cu;
label_1cad8c:
    // 0x1cad8c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1cad8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cad90: 0x0  nop
    ctx->pc = 0x1cad90u;
    // NOP
    // 0x1cad94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAD94u;
    {
        const bool branch_taken_0x1cad94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cad94) {
            ctx->pc = 0x1CAD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAD94u;
            // 0x1cad98: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD9Cu;
            goto label_1cad9c;
        }
    }
    ctx->pc = 0x1CAD9Cu;
label_1cad9c:
    // 0x1cad9c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1cad9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1cada0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cada4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cada4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cada8: 0x0  nop
    ctx->pc = 0x1cada8u;
    // NOP
    // 0x1cadac: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1cadacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1cadb0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1cadb0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cadb4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CADB4u;
    SET_GPR_U32(ctx, 31, 0x1CADBCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CADB4u, 0x1CADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADBCu;
label_1cadbc:
    // 0x1cadbc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1cadc0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1cadc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1cadc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cadc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cadc8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1cadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cadcc: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1cadccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cadd0: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x1cadd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1cadd4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1cadd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cadd8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cadd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caddc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1caddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cade0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1cade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cade4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cade8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cade8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cadec: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1cadecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cadf0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cadf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cadf4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1cadf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cadf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cadf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cadfc: 0x0  nop
    ctx->pc = 0x1cadfcu;
    // NOP
    // 0x1cae00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cae00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cae04: 0x0  nop
    ctx->pc = 0x1cae04u;
    // NOP
    // 0x1cae08: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE08u;
    {
        const bool branch_taken_0x1cae08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE08u;
        // 0x1cae0c: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae08) {
            ctx->pc = 0x1CAE2Cu;
            goto label_1cae2c;
        }
    }
    ctx->pc = 0x1CAE10u;
    // 0x1cae10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE10u;
    {
        const bool branch_taken_0x1cae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE10u;
        // 0x1cae14: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae10) {
            ctx->pc = 0x1CAE20u;
            goto label_1cae20;
        }
    }
    ctx->pc = 0x1CAE18u;
label_1cae18:
    // 0x1cae18: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1cae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1cae1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cae20:
    // 0x1cae20: 0x0  nop
    ctx->pc = 0x1cae20u;
    // NOP
    // 0x1cae24: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1cae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1cae28: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1cae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1cae2c:
    // 0x1cae2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae30: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1cae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cae34: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1cae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cae38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cae38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cae3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cae3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cae40: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1cae40u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cae44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cae44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cae48: 0x0  nop
    ctx->pc = 0x1cae48u;
    // NOP
    // 0x1cae4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cae4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cae50: 0x0  nop
    ctx->pc = 0x1cae50u;
    // NOP
    // 0x1cae54: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1CAE54u;
    {
        const bool branch_taken_0x1cae54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cae54) {
            ctx->pc = 0x1CAF70u;
            goto label_1caf70;
        }
    }
    ctx->pc = 0x1CAE5Cu;
    // 0x1cae5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cae5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cae60: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1cae60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cae64: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1cae64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cae68: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1cae68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cae6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cae6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cae70: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cae70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cae74: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1cae74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cae78: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1cae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cae7c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1cae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1cae80: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1cae84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cae84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1cae88: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cae88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cae8c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1cae8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cae90: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1cae90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cae94: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cae94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cae98: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae9c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caea0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1caea0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caea4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1caea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caea8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1caea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caeac: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1caeacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1caeb0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1caeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caeb4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1caeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caeb8: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1caeb8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caebc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1caebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1caec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1caec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caecc: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1caeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caed0: 0x0  nop
    ctx->pc = 0x1caed0u;
    // NOP
    // 0x1caed4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAED4u;
    {
        const bool branch_taken_0x1caed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caed4) {
            ctx->pc = 0x1CAEE4u;
            goto label_1caee4;
        }
    }
    ctx->pc = 0x1CAEDCu;
    // 0x1caedc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAEDCu;
    {
        const bool branch_taken_0x1caedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEDCu;
        // 0x1caee0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caedc) {
            ctx->pc = 0x1CAEF4u;
            goto label_1caef4;
        }
    }
    ctx->pc = 0x1CAEE4u;
label_1caee4:
    // 0x1caee4: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1caee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caee8: 0x0  nop
    ctx->pc = 0x1caee8u;
    // NOP
    // 0x1caeec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CAEECu;
    {
        const bool branch_taken_0x1caeec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caeec) {
            ctx->pc = 0x1CAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEECu;
            // 0x1caef0: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEF4u;
            goto label_1caef4;
        }
    }
    ctx->pc = 0x1CAEF4u;
label_1caef4:
    // 0x1caef4: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1caef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1caef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1caefc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1caefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caf00: 0x0  nop
    ctx->pc = 0x1caf00u;
    // NOP
    // 0x1caf04: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1caf04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1caf08: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1caf08u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1caf0c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CAF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF14u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CAF0Cu, 0x1CAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF14u;
label_1caf14:
    // 0x1caf14: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1caf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1caf18: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1caf18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1caf1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1caf1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caf20: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1caf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1caf24: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1caf24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1caf28: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x1caf28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1caf2c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1caf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caf30: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1caf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caf34: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1caf34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caf38: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1caf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caf3c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1caf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caf40: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1caf40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1caf44: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1caf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caf48: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1caf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caf4c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1caf4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1caf50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1caf50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caf54: 0x0  nop
    ctx->pc = 0x1caf54u;
    // NOP
    // 0x1caf58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1caf58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caf5c: 0x0  nop
    ctx->pc = 0x1caf5cu;
    // NOP
    // 0x1caf60: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAF60u;
    {
        const bool branch_taken_0x1caf60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caf60) {
            ctx->pc = 0x1CAF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF60u;
            // 0x1caf64: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF68u;
    // 0x1caf68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF68u;
    {
        const bool branch_taken_0x1caf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF68u;
        // 0x1caf6c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf68) {
            ctx->pc = 0x1CAF78u;
            goto label_1caf78;
        }
    }
    ctx->pc = 0x1CAF70u;
label_1caf70:
    // 0x1caf70: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1caf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1caf74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1caf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1caf78:
    // 0x1caf78: 0x0  nop
    ctx->pc = 0x1caf78u;
    // NOP
    // 0x1caf7c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1caf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1caf80: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1caf80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1caf84:
    // 0x1caf84: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1caf84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1caf88: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1caf88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1caf8c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1caf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1caf90: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1caf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1caf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF94u;
        // 0x1caf98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAF9Cu;
    // 0x1caf9c: 0x0  nop
    ctx->pc = 0x1caf9cu;
    // NOP
    ctx->pc = 0x1cafa0u;
}
