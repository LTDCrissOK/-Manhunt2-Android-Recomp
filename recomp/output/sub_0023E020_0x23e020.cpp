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

// Function: sub_0023E020
// Address: 0x23e020 - 0x23e1b0
void sub_0023E020_0x23e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E020_0x23e020");
#endif

    switch (ctx->pc) {
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e160u: goto label_23e160;
        default: break;
    }

    ctx->pc = 0x23e020u;

    // 0x23e020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23e024: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x23e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x23e028: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x23e028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23e02c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23e02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e030: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x23e030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x23e034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e038: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23e038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23e03c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x23e040: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23e044: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e048: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x23e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e04c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23e050: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23e050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23e054: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x23e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23e058: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x23e058u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23e05c: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x23e05cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x23e060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e064: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23e064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23e068: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x23e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e06c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x23e06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23e070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e074: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x23e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e078: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23e07c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x23e07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23e080: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e084: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x23e084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23e088: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x23e088u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x23e08c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e090: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x23e090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23e094: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x23e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e098: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x23e098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23e09c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x23e09cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23e0a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23E0A0u;
    SET_GPR_U32(ctx, 31, 0x23E0A8u);
    ctx->pc = 0x23E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0A0u;
    // 0x23e0a4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23E0A0u, 0x23E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0A8u;
label_23e0a8:
    // 0x23e0a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23E0A8u;
    SET_GPR_U32(ctx, 31, 0x23E0B0u);
    ctx->pc = 0x23E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0A8u;
    // 0x23e0ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23E0A8u, 0x23E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0B0u;
label_23e0b0:
    // 0x23e0b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23e0b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e0b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23e0b8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23e0b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e0bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x23e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e0c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x23e0c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e0c8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x23e0cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23e0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e0d0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23e0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e0d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23e0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23e0d8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x23e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23e0dc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x23e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e0e0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23e0e4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x23e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23e0e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23e0e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23e0ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23e0ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23e0f0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23e0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23e0f4: 0x0  nop
    ctx->pc = 0x23e0f4u;
    // NOP
    // 0x23e0f8: 0x0  nop
    ctx->pc = 0x23e0f8u;
    // NOP
    // 0x23e0fc: 0x46010084  c1          0x10084
    ctx->pc = 0x23e0fcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x23e100: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x23e100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x23e104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e108: 0x0  nop
    ctx->pc = 0x23e108u;
    // NOP
    // 0x23e10c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23e10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e110: 0x0  nop
    ctx->pc = 0x23e110u;
    // NOP
    // 0x23e114: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x23E114u;
    {
        const bool branch_taken_0x23e114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E114u;
        // 0x23e118: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e114) {
            ctx->pc = 0x23E13Cu;
            goto label_23e13c;
        }
    }
    ctx->pc = 0x23E11Cu;
    // 0x23e11c: 0x0  nop
    ctx->pc = 0x23e11cu;
    // NOP
    // 0x23e120: 0x0  nop
    ctx->pc = 0x23e120u;
    // NOP
    // 0x23e124: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x23e124u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x23e128: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23e128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23e12c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23e12cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23e130: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23e130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23e134: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23e134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23e138: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x23e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_23e13c:
    // 0x23e13c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x23e140: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x23e144: 0xc44051b4  lwc1        $f0, 0x51B4($v0)
    ctx->pc = 0x23e144u;
    { uint32_t bits = FAST_READ32(0x4651B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e148: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e14c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23e14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x23e150: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23e150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e154: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23e154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23e158: 0xc077912  jal         func_1DE448
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x23E158u, 0x23E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e164: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23E164u;
    {
        const bool branch_taken_0x23e164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E164u;
        // 0x23e168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e164) {
            ctx->pc = 0x23E198u;
            goto label_23e198;
        }
    }
    ctx->pc = 0x23E16Cu;
    // 0x23e16c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x23e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x23e170: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x23e170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x23e174: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E174u;
    {
        const bool branch_taken_0x23e174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e174) {
            ctx->pc = 0x23E178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E174u;
            // 0x23e178: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E19Cu;
            goto label_23e19c;
        }
    }
    ctx->pc = 0x23E17Cu;
    // 0x23e17c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x23e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23e180: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x23e180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x23e184: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x23e188: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x23e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x23e18c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23e190: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x23e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x23e194: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23e194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e198:
    // 0x23e198: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x23e198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23e19c:
    // 0x23e19c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x23e19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23e1a0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x23e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A4u;
        // 0x23e1a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E1ACu;
    // 0x23e1ac: 0x0  nop
    ctx->pc = 0x23e1acu;
    // NOP
    ctx->pc = 0x23e1b0u;
}
