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

// Function: sub_002FC438
// Address: 0x2fc438 - 0x2fc7b8
void sub_002FC438_0x2fc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC438_0x2fc438");
#endif

    switch (ctx->pc) {
        case 0x2fc4fcu: goto label_2fc4fc;
        case 0x2fc5a0u: goto label_2fc5a0;
        case 0x2fc5b0u: goto label_2fc5b0;
        case 0x2fc694u: goto label_2fc694;
        case 0x2fc710u: goto label_2fc710;
        case 0x2fc724u: goto label_2fc724;
        case 0x2fc770u: goto label_2fc770;
        case 0x2fc798u: goto label_2fc798;
        default: break;
    }

    ctx->pc = 0x2fc438u;

    // 0x2fc438: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fc438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fc43c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2fc43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x2fc440: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2fc440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x2fc444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc448: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2fc448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2fc44c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2fc44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2fc450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc454: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2fc454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2fc458: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fc458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc45c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2fc45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2fc460: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fc460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2fc464: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2fc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2fc468: 0x24431520  addiu       $v1, $v0, 0x1520
    ctx->pc = 0x2fc468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5408));
    // 0x2fc46c: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x2fc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
    // 0x2fc470: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fc470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fc474: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fc474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc478: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fc478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fc47c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fc480: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2fc480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc484: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2fc484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fc488: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x2fc488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fc48c: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x2fc48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fc490: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x2fc490u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc494: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x2fc494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fc498: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x2fc498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2fc49c: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x2fc49cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2fc4a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2fc4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fc4a4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2fc4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2fc4a8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2fc4a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fc4ac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2fc4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fc4b0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2fc4b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fc4b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2fc4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2fc4b8: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x2fc4b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2fc4bc: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x2fc4bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fc4c0: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x2fc4c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fc4c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fc4c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc4c8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2fc4c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fc4cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fc4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fc4d0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fc4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fc4d4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2fc4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fc4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc4dc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2fc4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc4e0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2fc4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc4e4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2fc4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc4e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fc4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fc4ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2fc4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fc4f0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2fc4f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fc4f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FC4F4u;
    SET_GPR_U32(ctx, 31, 0x2FC4FCu);
    ctx->pc = 0x2FC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC4F4u;
    // 0x2fc4f8: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FC4F4u, 0x2FC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4FCu;
label_2fc4fc:
    // 0x2fc4fc: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fc500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fc504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fc508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc50c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2fc50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc510: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2fc510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2fc514: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x2fc514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2fc518: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x2fc518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2fc51c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2fc51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fc520: 0x24480070  addiu       $t0, $v0, 0x70
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fc524: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2fc524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc528: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2fc528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2fc52c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2fc52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc530: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2fc530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fc534: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2fc534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc538: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2fc538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2fc53c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2fc53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc540: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2fc540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fc544: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2fc544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc548: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fc548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fc54c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2fc54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc550: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2fc550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fc554: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2fc554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc558: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2fc558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fc55c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2fc55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc560: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2fc560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fc564: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2fc564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc568: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fc568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fc56c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2fc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc570: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2fc570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fc574: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2fc574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc578: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fc578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fc57c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2fc57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc580: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2fc580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fc584: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2fc584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc588: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fc588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fc58c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2fc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc590: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2fc590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fc594: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x2fc594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc598: 0xc0bcd36  jal         func_2F34D8
    ctx->pc = 0x2FC598u;
    SET_GPR_U32(ctx, 31, 0x2FC5A0u);
    ctx->pc = 0x2FC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC598u;
    // 0x2fc59c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34D8u, 0x2FC598u, 0x2FC5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5A0u;
label_2fc5a0:
    // 0x2fc5a0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2FC5A0u;
    {
        const bool branch_taken_0x2fc5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5A0u;
        // 0x2fc5a4: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5a0) {
            ctx->pc = 0x2FC710u;
            goto label_2fc710;
        }
    }
    ctx->pc = 0x2FC5A8u;
    // 0x2fc5a8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2FC5A8u;
    SET_GPR_U32(ctx, 31, 0x2FC5B0u);
    ctx->pc = 0x2FC5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC5A8u;
    // 0x2fc5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC5A8u, 0x2FC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5B0u;
label_2fc5b0:
    // 0x2fc5b0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2fc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2fc5b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc5b8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fc5bc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2fc5bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fc5c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fc5c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fc5c4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fc5c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fc5c8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fc5cc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2fc5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc5d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fc5d4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2fc5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc5d8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2fc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc5dc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2fc5dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fc5e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2fc5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fc5e4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2fc5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fc5e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2fc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2fc5ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fc5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc5f0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fc5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc5f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fc5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc5f8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fc5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fc5fc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fc5fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fc600: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fc600u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fc604: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fc604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fc608: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fc608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fc60c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fc610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fc610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc614: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2fc614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2fc618: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2fc618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc61c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2fc61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc620: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2fc620u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fc624: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2fc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc628: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2fc628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc62c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2fc62cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2fc630: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2fc630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc634: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2fc634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc638: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2fc638u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fc63c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fc63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fc640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc64c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2fc64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc650: 0x0  nop
    ctx->pc = 0x2fc650u;
    // NOP
    // 0x2fc654: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC654u;
    {
        const bool branch_taken_0x2fc654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC654u;
        // 0x2fc658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc654) {
            ctx->pc = 0x2FC664u;
            goto label_2fc664;
        }
    }
    ctx->pc = 0x2FC65Cu;
    // 0x2fc65c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC65Cu;
    {
        const bool branch_taken_0x2fc65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC65Cu;
        // 0x2fc660: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc65c) {
            ctx->pc = 0x2FC674u;
            goto label_2fc674;
        }
    }
    ctx->pc = 0x2FC664u;
label_2fc664:
    // 0x2fc664: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2fc664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc668: 0x0  nop
    ctx->pc = 0x2fc668u;
    // NOP
    // 0x2fc66c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC66Cu;
    {
        const bool branch_taken_0x2fc66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc66c) {
            ctx->pc = 0x2FC670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC66Cu;
            // 0x2fc670: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC674u;
            goto label_2fc674;
        }
    }
    ctx->pc = 0x2FC674u;
label_2fc674:
    // 0x2fc674: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2fc674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2fc678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc67c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fc67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc680: 0x0  nop
    ctx->pc = 0x2fc680u;
    // NOP
    // 0x2fc684: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2fc684u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2fc688: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2fc688u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fc68c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2FC68Cu;
    SET_GPR_U32(ctx, 31, 0x2FC694u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2FC68Cu, 0x2FC694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC694u;
label_2fc694:
    // 0x2fc694: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fc698: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2fc698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2fc69c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2fc69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2fc6a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc6a8: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2fc6a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fc6ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2fc6b0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2fc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc6b4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2fc6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc6b8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2fc6b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fc6bc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2fc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc6c0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2fc6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc6c4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2fc6c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2fc6c8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2fc6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc6cc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2fc6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc6d0: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2fc6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fc6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fc6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc6d8: 0x0  nop
    ctx->pc = 0x2fc6d8u;
    // NOP
    // 0x2fc6dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc6e0: 0x0  nop
    ctx->pc = 0x2fc6e0u;
    // NOP
    // 0x2fc6e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC6E4u;
    {
        const bool branch_taken_0x2fc6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc6e4) {
            ctx->pc = 0x2FC6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC6E4u;
            // 0x2fc6e8: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC6ECu;
            goto label_2fc6ec;
        }
    }
    ctx->pc = 0x2FC6ECu;
label_2fc6ec:
    // 0x2fc6ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fc6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2fc6f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fc6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc6f4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fc6f8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2fc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2fc6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc700: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x2fc700u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2fc704: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2fc704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x2fc708: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x2FC708u;
    SET_GPR_U32(ctx, 31, 0x2FC710u);
    ctx->pc = 0x2FC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC708u;
    // 0x2fc70c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2FC708u, 0x2FC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC710u;
label_2fc710:
    // 0x2fc710: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2fc710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2fc714: 0xc62c0398  lwc1        $f12, 0x398($s1)
    ctx->pc = 0x2fc714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fc718: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x2fc718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x2fc71c: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x2FC71Cu;
    SET_GPR_U32(ctx, 31, 0x2FC724u);
    ctx->pc = 0x2FC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC71Cu;
    // 0x2fc720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2FC71Cu, 0x2FC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC724u;
label_2fc724:
    // 0x2fc724: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fc724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc728: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fc728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc72c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x2fc72cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fc730: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x2fc730u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fc734: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x2fc734u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2fc738: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2fc738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fc73c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2fc73cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fc740: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2fc740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2fc744: 0xfa650000  sqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2fc744u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2fc748: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2fc748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x2fc74c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fc750: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fc750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fc754: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fc754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fc758: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fc758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fc75c: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fc760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fc764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc768: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2FC768u;
    SET_GPR_U32(ctx, 31, 0x2FC770u);
    ctx->pc = 0x2FC76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC768u;
    // 0x2fc76c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FC768u, 0x2FC770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC770u;
label_2fc770:
    // 0x2fc770: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2fc770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2fc774: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2fc774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2fc778: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2fc778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2fc77c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2fc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2fc780: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fc784: 0xc46c1c3c  lwc1        $f12, 0x1C3C($v1)
    ctx->pc = 0x2fc784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fc788: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2fc788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fc78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc790: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2FC790u;
    SET_GPR_U32(ctx, 31, 0x2FC798u);
    ctx->pc = 0x2FC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC790u;
    // 0x2fc794: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2FC790u, 0x2FC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC798u;
label_2fc798:
    // 0x2fc798: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2fc798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fc79c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2fc79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fc7a0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2fc7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fc7a4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2fc7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2fc7a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fc7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fc7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7ACu;
        // 0x2fc7b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7B4u;
    // 0x2fc7b4: 0x0  nop
    ctx->pc = 0x2fc7b4u;
    // NOP
    ctx->pc = 0x2fc7b8u;
}
