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

// Function: sub_002E32A8
// Address: 0x2e32a8 - 0x2e35d8
void sub_002E32A8_0x2e32a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E32A8_0x2e32a8");
#endif

    switch (ctx->pc) {
        case 0x2e3300u: goto label_2e3300;
        default: break;
    }

    ctx->pc = 0x2e32a8u;

    // 0x2e32a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e32a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e32ac: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2e32acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e32b0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2e32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2e32b4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2e32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2e32b8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2e32b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2e32bc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2e32bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2e32c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e32c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32c4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2e32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2e32c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e32c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e32ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e32d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e32d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32d4: 0x8e05bd50  lw          $a1, -0x42B0($s0)
    ctx->pc = 0x2e32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2e32d8: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x2e32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e32dc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2e32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32e0: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x2e32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e32e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e32e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e32e8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2e32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e32ec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2e32ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e32f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2e32f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e32f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e32f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e32f8: 0xc0b8f24  jal         func_2E3C90
    ctx->pc = 0x2E32F8u;
    SET_GPR_U32(ctx, 31, 0x2E3300u);
    ctx->pc = 0x2E32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32F8u;
    // 0x2e32fc: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C90u, 0x2E32F8u, 0x2E3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3300u;
label_2e3300:
    // 0x2e3300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e3300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3304: 0x8e03bd50  lw          $v1, -0x42B0($s0)
    ctx->pc = 0x2e3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x2e3308: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e3308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e330c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3310: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e3310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e3314: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e3314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3318: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2e3318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e331c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2e331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3320: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e3320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e3324: 0x8c62053c  lw          $v0, 0x53C($v1)
    ctx->pc = 0x2e3324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1340)));
    // 0x2e3328: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3328u;
    {
        const bool branch_taken_0x2e3328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3328) {
            ctx->pc = 0x2E332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3328u;
            // 0x2e332c: 0xc6230000  lwc1        $f3, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E333Cu;
            goto label_2e333c;
        }
    }
    ctx->pc = 0x2E3330u;
    // 0x2e3330: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2e3330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2e3334: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e3334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e3338: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2e3338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e333c:
    // 0x2e333c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3340: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2e3340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3344: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3348: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2e3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e334c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3350: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x2e3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3354: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e3354u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e3358: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e3358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e335c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e335cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e3360: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e3360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e3364: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2e3364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3368: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2e3368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e336c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2e336cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3370: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e3370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e3374: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3378: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e3378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e337c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e337cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e3380: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e3380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3384: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2e3384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3388: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2e3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e338c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3390: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2e3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3394: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2e3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3398: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2e3398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e339c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e33a0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e33a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e33a4: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2e33a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e33a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e33a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e33ac: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e33acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e33b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e33b4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2e33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e33b8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e33bc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e33c0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2e33c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e33c4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e33c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e33c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e33cc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e33ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e33d0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e33d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e33d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e33d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e33d8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e33d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e33dc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2e33dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e33e0: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2e33e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e33e4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e33e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e33e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e33e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e33ec: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e33ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e33f0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e33f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e33f4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e33f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e33f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e33fc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e33fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3400: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2e3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3404: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3408: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e3408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e340c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e340cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3410: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e3410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e3414: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2e3414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e3418: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e3418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e341c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3420: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2e3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e3424: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x2e3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3428: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e342c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2e342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3430: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e3430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3434: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3438: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e3438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e343c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e343cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e3440: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e3440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e3444: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e3444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e3448: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e3448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e344c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2e344cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3450: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2e3450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e3454: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e3454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3458: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e345c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e345cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3460: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e3460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e3464: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e3464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3468: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e346c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3470: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2e3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3474: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3478: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e3478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e347c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e347cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3480: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e3480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e3484: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2e3484u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e3488: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e3488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e348c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3490: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3494: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2e3494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3498: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e3498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e349c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2e349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e34a0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2e34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e34a4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2e34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e34a8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2e34a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e34ac: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2e34acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e34b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e34b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e34b4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e34b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e34b8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e34b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e34bc: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2e34bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e34c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e34c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e34c4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e34c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e34c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e34c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e34cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e34ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e34d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e34d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e34d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e34d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e34d8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e34d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e34dc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2e34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e34e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e34e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e34e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e34e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e34e8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2e34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e34ec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2e34ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2e34f0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2e34f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e34f4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2e34f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2e34f8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2e34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2e34fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e34fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3500: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e3500u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3504: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e3504u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e3508: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e3508u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e350c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3510: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2e3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3514: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3518: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2e3518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e351c: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2e351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3520: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e3524: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2e3524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e3528: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2e3528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e352c: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e352cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e3530: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e3530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3534: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e3534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e3538: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e3538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e353c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e353cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e3540: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e3540u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e3544: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e3544u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e3548: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e3548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e354c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3550: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e3550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3554: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2e3554u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3558: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e3558u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e355c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e355cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e3560: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2e3560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3564: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3568: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e356c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2e356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3570: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2e3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3574: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e3574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e3578: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e3578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e357c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2e357cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e3580: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2e3580u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e3584: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3588: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e3588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e358c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e358cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e3590: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e3590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e3594: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e3594u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e3598: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e3598u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e359c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e359cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e35a0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e35a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e35a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e35a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e35a8: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x2e35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e35ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e35acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e35b0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2e35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e35b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e35b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e35b8: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x2e35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e35bc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2e35bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e35c0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2e35c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e35c4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2e35c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e35c8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2e35c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e35cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e35ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e35d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E35D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35D0u;
        // 0x2e35d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E35D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E35D8u;
}
