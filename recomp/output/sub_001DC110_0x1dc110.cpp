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

// Function: sub_001DC110
// Address: 0x1dc110 - 0x1dc348
void sub_001DC110_0x1dc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC110_0x1dc110");
#endif

    switch (ctx->pc) {
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc308u: goto label_1dc308;
        default: break;
    }

    ctx->pc = 0x1dc110u;

    // 0x1dc110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1dc114: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1dc114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1dc118: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1dc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1dc11c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc120: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1dc120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1dc124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dc124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc128: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1dc128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1dc12c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dc12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc130: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1dc130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1dc134: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1dc134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc138: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1dc138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc13c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1dc13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1dc140: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1DC140u;
    SET_GPR_U32(ctx, 31, 0x1DC148u);
    ctx->pc = 0x1DC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC140u;
    // 0x1dc144: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1DC140u, 0x1DC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC148u;
label_1dc148:
    // 0x1dc148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dc148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc14c: 0xc0b184c  jal         func_2C6130
    ctx->pc = 0x1DC14Cu;
    SET_GPR_U32(ctx, 31, 0x1DC154u);
    ctx->pc = 0x1DC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC14Cu;
    // 0x1dc150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6130u, 0x1DC14Cu, 0x1DC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC154u;
label_1dc154:
    // 0x1dc154: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DC154u;
    SET_GPR_U32(ctx, 31, 0x1DC15Cu);
    ctx->pc = 0x1DC158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC154u;
    // 0x1dc158: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DC154u, 0x1DC15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC15Cu;
label_1dc15c:
    // 0x1dc15c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DC15Cu;
    SET_GPR_U32(ctx, 31, 0x1DC164u);
    ctx->pc = 0x1DC160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC15Cu;
    // 0x1dc160: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DC15Cu, 0x1DC164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC164u;
label_1dc164:
    // 0x1dc164: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1dc164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc168: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1dc168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc16c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x1dc16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dc170: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dc174: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1dc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc178: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1dc178u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1dc17c: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x1dc17cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x1dc180: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc184: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1dc184u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1dc188: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dc188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc18c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1dc18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dc190: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1dc194: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1dc194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1dc198: 0x24420074  addiu       $v0, $v0, 0x74
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1dc19c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1dc19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1dc1a0: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dc1a4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc1a8: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dc1ac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1dc1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc1b0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1b4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1dc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1dc1b8: 0x24ec0004  addiu       $t4, $a3, 0x4
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1dc1bc: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1dc1bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dc1c0: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x1dc1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dc1c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1dc1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1dc1c8: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1dc1c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1dc1cc: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1dc1ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1dc1d0:
    // 0x1dc1d0: 0x8cc5ffe0  lw          $a1, -0x20($a2)
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967264)));
    // 0x1dc1d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dc1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dc1d8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dc1d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc1dc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dc1dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc1e0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dc1e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc1e4: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1dc1e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc1e8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dc1e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dc1ec: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dc1ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dc1f0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dc1f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dc1f4: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1dc1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc1f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc1fc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1dc200: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1dc204: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1dc204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dc208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dc20c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1dc20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1dc210: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1dc210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dc214: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc218: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dc218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc21c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1dc21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1dc220: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1dc224: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dc224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dc228: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1dc22c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1dc230: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1dc230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc234: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1dc234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dc238: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1dc238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc23c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1dc23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dc240: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x1dc240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1dc244: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1dc244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc248: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x1dc248u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1dc24c: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x1dc24cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1dc250: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x1dc250u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1dc254: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dc254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dc258: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dc258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dc25c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dc25cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dc260: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x1dc260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dc264: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1dc264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1dc268: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1dc268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1dc26c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc26cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc270: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1dc270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc274: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1dc274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc278: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x1dc278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc27c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc27cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc280: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1dc280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc284: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x1dc284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc288: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc288u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc28c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1dc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc290: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x1dc290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc294: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1dc294u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc298: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1dc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc29c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dc29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc2a0: 0x0  nop
    ctx->pc = 0x1dc2a0u;
    // NOP
    // 0x1dc2a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1DC2A4u;
    {
        const bool branch_taken_0x1dc2a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2A4u;
        // 0x1dc2a8: 0x30e20003  andi        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2a4) {
            ctx->pc = 0x1DC2E0u;
            goto label_1dc2e0;
        }
    }
    ctx->pc = 0x1DC2ACu;
    // 0x1dc2ac: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1dc2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2b0: 0x11030009  beq         $t0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC2B0u;
    {
        const bool branch_taken_0x1dc2b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2B0u;
        // 0x1dc2b4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2b0) {
            ctx->pc = 0x1DC2D8u;
            goto label_1dc2d8;
        }
    }
    ctx->pc = 0x1DC2B8u;
    // 0x1dc2b8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1dc2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2bc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1dc2c0:
    // 0x1dc2c0: 0x0  nop
    ctx->pc = 0x1dc2c0u;
    // NOP
    // 0x1dc2c4: 0x0  nop
    ctx->pc = 0x1dc2c4u;
    // NOP
    // 0x1dc2c8: 0x0  nop
    ctx->pc = 0x1dc2c8u;
    // NOP
    // 0x1dc2cc: 0x0  nop
    ctx->pc = 0x1dc2ccu;
    // NOP
    // 0x1dc2d0: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DC2D0u;
    {
        const bool branch_taken_0x1dc2d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc2d0) {
            ctx->pc = 0x1DC2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC2D0u;
            // 0x1dc2d4: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc2c0;
        }
    }
    ctx->pc = 0x1DC2D8u;
label_1dc2d8:
    // 0x1dc2d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DC2D8u;
    {
        const bool branch_taken_0x1dc2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2D8u;
        // 0x1dc2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2d8) {
            ctx->pc = 0x1DC324u;
            goto label_1dc324;
        }
    }
    ctx->pc = 0x1DC2E0u;
label_1dc2e0:
    // 0x1dc2e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dc2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dc2e4: 0xec102a  slt         $v0, $a3, $t4
    ctx->pc = 0x1dc2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1dc2e8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1DC2E8u;
    {
        const bool branch_taken_0x1dc2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2E8u;
        // 0x1dc2ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2e8) {
            ctx->pc = 0x1DC1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc1d0;
        }
    }
    ctx->pc = 0x1DC2F0u;
    // 0x1dc2f0: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1dc2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2f4: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DC2F4u;
    {
        const bool branch_taken_0x1dc2f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2F4u;
        // 0x1dc2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2f4) {
            ctx->pc = 0x1DC324u;
            goto label_1dc324;
        }
    }
    ctx->pc = 0x1DC2FCu;
    // 0x1dc2fc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1dc2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc300: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1dc304: 0x0  nop
    ctx->pc = 0x1dc304u;
    // NOP
label_1dc308:
    // 0x1dc308: 0x0  nop
    ctx->pc = 0x1dc308u;
    // NOP
    // 0x1dc30c: 0x0  nop
    ctx->pc = 0x1dc30cu;
    // NOP
    // 0x1dc310: 0x0  nop
    ctx->pc = 0x1dc310u;
    // NOP
    // 0x1dc314: 0x0  nop
    ctx->pc = 0x1dc314u;
    // NOP
    // 0x1dc318: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DC318u;
    {
        const bool branch_taken_0x1dc318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc318) {
            ctx->pc = 0x1DC31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC318u;
            // 0x1dc31c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc308;
        }
    }
    ctx->pc = 0x1DC320u;
    // 0x1dc320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc324:
    // 0x1dc324: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1dc324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc328: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1dc328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dc32c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1dc32cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc330: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1dc330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dc334: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1dc334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dc338: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1dc338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dc33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC33Cu;
        // 0x1dc340: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC344u;
    // 0x1dc344: 0x0  nop
    ctx->pc = 0x1dc344u;
    // NOP
    ctx->pc = 0x1dc348u;
}
