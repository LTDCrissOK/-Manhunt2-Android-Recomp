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

// Function: sub_002F2970
// Address: 0x2f2970 - 0x2f2c00
void sub_002F2970_0x2f2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2970_0x2f2970");
#endif

    switch (ctx->pc) {
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2bc0u: goto label_2f2bc0;
        default: break;
    }

    ctx->pc = 0x2f2970u;

    // 0x2f2970: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2f2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2f2974: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2f2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2f2978: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2f2978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2f297c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f297cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2980: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2f2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2f2984: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f2984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f2988: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2f2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2f298c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2f2990: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2990u;
    {
        const bool branch_taken_0x2f2990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2990) {
            ctx->pc = 0x2F2994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2990u;
            // 0x2f2994: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F29B8u;
            goto label_2f29b8;
        }
    }
    ctx->pc = 0x2F2998u;
    // 0x2f2998: 0xc095544  jal         func_255510
    ctx->pc = 0x2F2998u;
    SET_GPR_U32(ctx, 31, 0x2F29A0u);
    ctx->pc = 0x255510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255510u, 0x2F2998u, 0x2F29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29A0u;
label_2f29a0:
    // 0x2f29a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f29a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f29a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f29a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29a8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2f29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f29ac: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F29ACu;
    SET_GPR_U32(ctx, 31, 0x2F29B4u);
    ctx->pc = 0x2F29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29ACu;
    // 0x2f29b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F29ACu, 0x2F29B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29B4u;
label_2f29b4:
    // 0x2f29b4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2f29b8:
    // 0x2f29b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f29bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f29bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f29c0: 0x14430087  bne         $v0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2F29C0u;
    {
        const bool branch_taken_0x2f29c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29C0u;
        // 0x2f29c4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29c0) {
            ctx->pc = 0x2F2BE0u;
            goto label_2f2be0;
        }
    }
    ctx->pc = 0x2F29C8u;
    // 0x2f29c8: 0xc08b7b0  jal         func_22DEC0
    ctx->pc = 0x2F29C8u;
    SET_GPR_U32(ctx, 31, 0x2F29D0u);
    ctx->pc = 0x2F29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29C8u;
    // 0x2f29cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC0u, 0x2F29C8u, 0x2F29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29D0u;
label_2f29d0:
    // 0x2f29d0: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x2F29D0u;
    {
        const bool branch_taken_0x2f29d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f29d0) {
            ctx->pc = 0x2F29D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F29D0u;
            // 0x2f29d4: 0x8e0311c0  lw          $v1, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2BCCu;
            goto label_2f2bcc;
        }
    }
    ctx->pc = 0x2F29D8u;
    // 0x2f29d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F29D8u;
    SET_GPR_U32(ctx, 31, 0x2F29E0u);
    ctx->pc = 0x2F29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29D8u;
    // 0x2f29dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F29D8u, 0x2F29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29E0u;
label_2f29e0:
    // 0x2f29e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F29E0u;
    SET_GPR_U32(ctx, 31, 0x2F29E8u);
    ctx->pc = 0x2F29E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29E0u;
    // 0x2f29e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F29E0u, 0x2F29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29E8u;
label_2f29e8:
    // 0x2f29e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F29E8u;
    SET_GPR_U32(ctx, 31, 0x2F29F0u);
    ctx->pc = 0x2F29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29E8u;
    // 0x2f29ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F29E8u, 0x2F29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29F0u;
label_2f29f0:
    // 0x2f29f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F29F0u;
    SET_GPR_U32(ctx, 31, 0x2F29F8u);
    ctx->pc = 0x2F29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29F0u;
    // 0x2f29f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F29F0u, 0x2F29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29F8u;
label_2f29f8:
    // 0x2f29f8: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2f29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f29fc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2a00: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x2f2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2a04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f2a04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f2a08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2f2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2f2a0c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2f2a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2f2a10: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f2a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f2a14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f2a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f2a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2a1c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2f2a20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f2a20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2a24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f2a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2a28: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2f2a28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f2a2c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2f2a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f2a30: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2f2a30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f2a34: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2f2a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f2a38: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2f2a38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2f2a3c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2f2a3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f2a40: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x2f2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f2a44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f2a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f2a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2a4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2f2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2a50: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2a54: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2f2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2a58: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x2f2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f2a5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f2a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2a60: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2f2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2a64: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2f2a64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f2a68: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2f2a68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2f2a6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2a70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f2a70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f2a74: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2f2a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f2a78: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f2a7c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2f2a7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f2a80: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2f2a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f2a84: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x2f2a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f2a88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f2a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2a8c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2f2a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2a90: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f2a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2a94: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f2a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2a98: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2f2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2a9c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f2aa0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2f2aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2aa4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2aa8: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x2f2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2aac: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2f2aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f2ab0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f2ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f2ab4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2f2ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f2ab8: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2f2ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f2abc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f2abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2ac0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f2ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2ac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2ac8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2f2acc: 0xc44096a4  lwc1        $f0, -0x695C($v0)
    ctx->pc = 0x2f2accu;
    { uint32_t bits = FAST_READ32(0x3F96A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2ad0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2f2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2f2ad4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f2ad4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f2ad8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2f2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2f2adc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f2adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f2ae0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f2ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2ae4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2f2ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2ae8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f2ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2aec: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f2aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2af0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2f2af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2af4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f2af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2af8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2f2af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2afc: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2f2afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2b00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f2b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f2b04: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f2b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f2b08: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2f2b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f2b0c: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2f2b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f2b10: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f2b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2b14: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2b18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F2B18u;
    SET_GPR_U32(ctx, 31, 0x2F2B20u);
    ctx->pc = 0x2F2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B18u;
    // 0x2f2b1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F2B18u, 0x2F2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B20u;
label_2f2b20:
    // 0x2f2b20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F2B20u;
    SET_GPR_U32(ctx, 31, 0x2F2B28u);
    ctx->pc = 0x2F2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B20u;
    // 0x2f2b24: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F2B20u, 0x2F2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B28u;
label_2f2b28:
    // 0x2f2b28: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f2b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2b2c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2f2b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f2b30: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2f2b30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2b34: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2f2b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f2b38: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f2b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f2b3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f2b40: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2f2b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2f2b44: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f2b44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2b48: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f2b48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2b4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f2b4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2b50: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f2b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2b54: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f2b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2b58: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2b5c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f2b60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f2b60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f2b64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f2b64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f2b68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f2b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f2b6c: 0x0  nop
    ctx->pc = 0x2f2b6cu;
    // NOP
    // 0x2f2b70: 0x0  nop
    ctx->pc = 0x2f2b70u;
    // NOP
    // 0x2f2b74: 0x46010084  c1          0x10084
    ctx->pc = 0x2f2b74u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f2b78: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f2b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2f2b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f2b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2b80: 0x0  nop
    ctx->pc = 0x2f2b80u;
    // NOP
    // 0x2f2b84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f2b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2b88: 0x0  nop
    ctx->pc = 0x2f2b88u;
    // NOP
    // 0x2f2b8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2F2B8Cu;
    {
        const bool branch_taken_0x2f2b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B8Cu;
        // 0x2f2b90: 0xe7a200c0  swc1        $f2, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b8c) {
            ctx->pc = 0x2F2BB8u;
            goto label_2f2bb8;
        }
    }
    ctx->pc = 0x2F2B94u;
    // 0x2f2b94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2b9c: 0x0  nop
    ctx->pc = 0x2f2b9cu;
    // NOP
    // 0x2f2ba0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f2ba0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2f2ba4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f2ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f2ba8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f2ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f2bac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f2bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f2bb0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f2bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2bb4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2bb8:
    // 0x2f2bb8: 0xc07783e  jal         func_1DE0F8
    ctx->pc = 0x2F2BB8u;
    SET_GPR_U32(ctx, 31, 0x2F2BC0u);
    ctx->pc = 0x2F2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BB8u;
    // 0x2f2bbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x2F2BB8u, 0x2F2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BC0u;
label_2f2bc0:
    // 0x2f2bc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2BC0u;
    {
        const bool branch_taken_0x2f2bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BC0u;
        // 0x2f2bc4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bc0) {
            ctx->pc = 0x2F2BE0u;
            goto label_2f2be0;
        }
    }
    ctx->pc = 0x2F2BC8u;
    // 0x2f2bc8: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2f2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2f2bcc:
    // 0x2f2bcc: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x2f2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x2f2bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2bd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f2bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f2bd8: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2f2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
    // 0x2f2bdc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2f2bdcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2f2be0:
    // 0x2f2be0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2f2be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f2be4: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2f2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f2be8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2f2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f2bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BECu;
        // 0x2f2bf0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2BF4u;
    // 0x2f2bf4: 0x0  nop
    ctx->pc = 0x2f2bf4u;
    // NOP
    // 0x2f2bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2f2bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f2bfc: 0x0  nop
    ctx->pc = 0x2f2bfcu;
    // NOP
    ctx->pc = 0x2f2c00u;
}
