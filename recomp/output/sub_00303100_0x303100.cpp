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

// Function: sub_00303100
// Address: 0x303100 - 0x303370
void sub_00303100_0x303100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303100_0x303100");
#endif

    switch (ctx->pc) {
        case 0x303154u: goto label_303154;
        case 0x303168u: goto label_303168;
        case 0x30317cu: goto label_30317c;
        case 0x3031b0u: goto label_3031b0;
        case 0x30323cu: goto label_30323c;
        case 0x303258u: goto label_303258;
        case 0x303278u: goto label_303278;
        case 0x3032c4u: goto label_3032c4;
        case 0x3032e0u: goto label_3032e0;
        case 0x3032fcu: goto label_3032fc;
        case 0x303320u: goto label_303320;
        case 0x30332cu: goto label_30332c;
        default: break;
    }

    ctx->pc = 0x303100u;

    // 0x303100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x303100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x303104: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x303104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x303108: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x303108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x30310c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303110: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x303110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x303114: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x303114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303118: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x303118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x30311c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x30311cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303120: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x303120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x303124: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x303124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303128: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x303128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x30312c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30312cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303130: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x303130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x303134: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x303134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x303138: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x303138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x30313c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x30313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x303140: 0x92a2047d  lbu         $v0, 0x47D($s5)
    ctx->pc = 0x303140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1149)));
    // 0x303144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303144u;
    {
        const bool branch_taken_0x303144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303144u;
        // 0x303148: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303144) {
            ctx->pc = 0x303154u;
            goto label_303154;
        }
    }
    ctx->pc = 0x30314Cu;
    // 0x30314c: 0xc08f956  jal         func_23E558
    ctx->pc = 0x30314Cu;
    SET_GPR_U32(ctx, 31, 0x303154u);
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x30314Cu, 0x303154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303154u;
label_303154:
    // 0x303154: 0x9202045d  lbu         $v0, 0x45D($s0)
    ctx->pc = 0x303154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1117)));
    // 0x303158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303158u;
    {
        const bool branch_taken_0x303158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303158u;
        // 0x30315c: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303158) {
            ctx->pc = 0x30316Cu;
            goto label_30316c;
        }
    }
    ctx->pc = 0x303160u;
    // 0x303160: 0xc0d4dea  jal         func_3537A8
    ctx->pc = 0x303160u;
    SET_GPR_U32(ctx, 31, 0x303168u);
    ctx->pc = 0x3537A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3537A8u, 0x303160u, 0x303168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303168u;
label_303168:
    // 0x303168: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x303168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_30316c:
    // 0x30316c: 0x26760020  addiu       $s6, $s3, 0x20
    ctx->pc = 0x30316cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x303170: 0x24846920  addiu       $a0, $a0, 0x6920
    ctx->pc = 0x303170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    // 0x303174: 0xc0c259a  jal         func_309668
    ctx->pc = 0x303174u;
    SET_GPR_U32(ctx, 31, 0x30317Cu);
    ctx->pc = 0x303178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303174u;
    // 0x303178: 0x241e001d  addiu       $fp, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x303174u, 0x30317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30317Cu;
label_30317c:
    // 0x30317c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303188: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x303188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30318c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30318cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x303190: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x303190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x303194: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x303194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x303198: 0xa202045c  sb          $v0, 0x45C($s0)
    ctx->pc = 0x303198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1116), (uint8_t)GPR_U32(ctx, 2));
    // 0x30319c: 0xae030438  sw          $v1, 0x438($s0)
    ctx->pc = 0x30319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 3));
    // 0x3031a0: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x3031a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3031a4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3031a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3031a8: 0xac80aa88  sw          $zero, -0x5578($a0)
    ctx->pc = 0x3031a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA88u, _value); } while (0);
    // 0x3031ac: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x3031acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3031b0:
    // 0x3031b0: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x3031b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3031b4: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x3031b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3031b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3031b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3031bc: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x3031bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3031c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3031c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x3031c4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3031c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x3031c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3031c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3031cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3031ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3031d0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3031d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3031d4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x3031d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3031d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3031d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3031dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3031dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3031e0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x3031e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3031e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3031e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3031e8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3031e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3031ec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3031ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3031f0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3031f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3031f4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x3031f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3031f8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x3031f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3031fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3031fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x303200: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x303200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x303204: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x303204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x303208: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x303208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30320c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30320cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303210: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303210u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303214: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x303214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30321c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x30321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303220: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x303220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303224: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x303224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303228: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x303228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30322c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x303230: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x303230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x303234: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x303234u;
    SET_GPR_U32(ctx, 31, 0x30323Cu);
    ctx->pc = 0x303238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303234u;
    // 0x303238: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x303234u, 0x30323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30323Cu;
label_30323c:
    // 0x30323c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x30323cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x303240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303244: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303248: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x303248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30324c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x30324cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303250: 0xc0c029c  jal         func_300A70
    ctx->pc = 0x303250u;
    SET_GPR_U32(ctx, 31, 0x303258u);
    ctx->pc = 0x303254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303250u;
    // 0x303254: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300A70u, 0x303250u, 0x303258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303258u;
label_303258:
    // 0x303258: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x303258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30325c: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30325cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303260: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x303260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303264: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303268: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x303268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30326c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30326cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303270: 0xc0c0700  jal         func_301C00
    ctx->pc = 0x303270u;
    SET_GPR_U32(ctx, 31, 0x303278u);
    ctx->pc = 0x303274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303270u;
    // 0x303274: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301C00u, 0x303270u, 0x303278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303278u;
label_303278:
    // 0x303278: 0xc60200a0  lwc1        $f2, 0xA0($s0)
    ctx->pc = 0x303278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30327c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x30327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303280: 0xc6010444  lwc1        $f1, 0x444($s0)
    ctx->pc = 0x303280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303284: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x303284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x303288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30328c: 0x0  nop
    ctx->pc = 0x30328cu;
    // NOP
    // 0x303290: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x303290u;
    {
        const bool branch_taken_0x303290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303290) {
            ctx->pc = 0x303294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303290u;
            // 0x303294: 0xc60000a0  lwc1        $f0, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3032A4u;
            goto label_3032a4;
        }
    }
    ctx->pc = 0x303298u;
    // 0x303298: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x303298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30329c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x30329cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3032a0: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x3032a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3032a4:
    // 0x3032a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3032a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3032a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3032acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032b0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3032b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3032b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3032b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3032b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032bc: 0xc0c05e4  jal         func_301790
    ctx->pc = 0x3032BCu;
    SET_GPR_U32(ctx, 31, 0x3032C4u);
    ctx->pc = 0x3032C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032BCu;
    // 0x3032c0: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301790u, 0x3032BCu, 0x3032C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032C4u;
label_3032c4:
    // 0x3032c4: 0x7c3ffba  bgezl       $fp, . + 4 + (-0x46 << 2)
    ctx->pc = 0x3032C4u;
    {
        const bool branch_taken_0x3032c4 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x3032c4) {
            ctx->pc = 0x3032C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3032C4u;
            // 0x3032c8: 0xc6610020  lwc1        $f1, 0x20($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3031B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3031b0;
        }
    }
    ctx->pc = 0x3032CCu;
    // 0x3032cc: 0x9202045d  lbu         $v0, 0x45D($s0)
    ctx->pc = 0x3032ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1117)));
    // 0x3032d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3032D0u;
    {
        const bool branch_taken_0x3032d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032d0) {
            ctx->pc = 0x3032D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3032D0u;
            // 0x3032d4: 0x9202045e  lbu         $v0, 0x45E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1118)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303300u;
            goto label_303300;
        }
    }
    ctx->pc = 0x3032D8u;
    // 0x3032d8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3032D8u;
    SET_GPR_U32(ctx, 31, 0x3032E0u);
    ctx->pc = 0x3032DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032D8u;
    // 0x3032dc: 0xa2000434  sb          $zero, 0x434($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1076), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3032D8u, 0x3032E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032E0u;
label_3032e0:
    // 0x3032e0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3032e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3032e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3032e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3032E8u;
    {
        const bool branch_taken_0x3032e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032e8) {
            ctx->pc = 0x3032ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3032E8u;
            // 0x3032ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3032F0u;
            goto label_3032f0;
        }
    }
    ctx->pc = 0x3032F0u;
label_3032f0:
    // 0x3032f0: 0x2010  mfhi        $a0
    ctx->pc = 0x3032f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3032f4: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x3032F4u;
    SET_GPR_U32(ctx, 31, 0x3032FCu);
    ctx->pc = 0x3032F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032F4u;
    // 0x3032f8: 0x24840011  addiu       $a0, $a0, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x3032F4u, 0x3032FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032FCu;
label_3032fc:
    // 0x3032fc: 0x9202045e  lbu         $v0, 0x45E($s0)
    ctx->pc = 0x3032fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1118)));
label_303300:
    // 0x303300: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x303300u;
    {
        const bool branch_taken_0x303300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303300u;
        // 0x303304: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303300) {
            ctx->pc = 0x30332Cu;
            goto label_30332c;
        }
    }
    ctx->pc = 0x303308u;
    // 0x303308: 0x9043bb84  lbu         $v1, -0x447C($v0)
    ctx->pc = 0x303308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949764)));
    // 0x30330c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30330Cu;
    {
        const bool branch_taken_0x30330c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30330c) {
            ctx->pc = 0x303310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30330Cu;
            // 0x303310: 0xae0002e4  sw          $zero, 0x2E4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303330u;
            goto label_303330;
        }
    }
    ctx->pc = 0x303314u;
    // 0x303314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303318: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x303318u;
    SET_GPR_U32(ctx, 31, 0x303320u);
    ctx->pc = 0x30331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303318u;
    // 0x30331c: 0xa2020434  sb          $v0, 0x434($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1076), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x303318u, 0x303320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303320u;
label_303320:
    // 0x303320: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x303320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x303324: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x303324u;
    SET_GPR_U32(ctx, 31, 0x30332Cu);
    ctx->pc = 0x303328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303324u;
    // 0x303328: 0x24440009  addiu       $a0, $v0, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x303324u, 0x30332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30332Cu;
label_30332c:
    // 0x30332c: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x30332cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
label_303330:
    // 0x303330: 0xa200045d  sb          $zero, 0x45D($s0)
    ctx->pc = 0x303330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1117), (uint8_t)GPR_U32(ctx, 0));
    // 0x303334: 0xa200045e  sb          $zero, 0x45E($s0)
    ctx->pc = 0x303334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1118), (uint8_t)GPR_U32(ctx, 0));
    // 0x303338: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30333c: 0xfa010420  sqc2        $vf1, 0x420($s0)
    ctx->pc = 0x30333cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303340: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x303340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303344: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x303344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x303348: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x303348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30334c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x30334cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x303350: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x303350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303354: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x303354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x303358: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x303358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30335c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x30335cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303360: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x303360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303364: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x303364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x303368: 0x3e00008  jr          $ra
    ctx->pc = 0x303368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303368u;
        // 0x30336c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303370u;
}
