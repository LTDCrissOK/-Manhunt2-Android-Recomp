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

// Function: sub_003099A8
// Address: 0x3099a8 - 0x30a450
void sub_003099A8_0x3099a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003099A8_0x3099a8");
#endif

    switch (ctx->pc) {
        case 0x309a10u: goto label_309a10;
        case 0x309a60u: goto label_309a60;
        case 0x309aacu: goto label_309aac;
        case 0x309abcu: goto label_309abc;
        case 0x309b74u: goto label_309b74;
        case 0x309b7cu: goto label_309b7c;
        case 0x309b88u: goto label_309b88;
        case 0x309b90u: goto label_309b90;
        case 0x309b98u: goto label_309b98;
        case 0x309ba4u: goto label_309ba4;
        case 0x309bb4u: goto label_309bb4;
        case 0x309df0u: goto label_309df0;
        case 0x309ea0u: goto label_309ea0;
        case 0x309f10u: goto label_309f10;
        case 0x309fc4u: goto label_309fc4;
        case 0x30a078u: goto label_30a078;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a200u: goto label_30a200;
        case 0x30a268u: goto label_30a268;
        case 0x30a2d4u: goto label_30a2d4;
        case 0x30a39cu: goto label_30a39c;
        case 0x30a3b0u: goto label_30a3b0;
        default: break;
    }

    ctx->pc = 0x3099a8u;

    // 0x3099a8: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3099a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x3099ac: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x3099acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x3099b0: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x3099b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x3099b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3099b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099b8: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x3099b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x3099bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3099bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099c0: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x3099c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x3099c4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099c8: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x3099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x3099cc: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x3099ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x3099d0: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x3099d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x3099d4: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x3099d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x3099d8: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x3099d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x3099dc: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x3099dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x3099e0: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x3099e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x3099e4: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x3099e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x3099e8: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x3099e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x3099ec: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x3099ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x3099f0: 0x8e22130c  lw          $v0, 0x130C($s1)
    ctx->pc = 0x3099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4876)));
    // 0x3099f4: 0x10400284  beqz        $v0, . + 4 + (0x284 << 2)
    ctx->pc = 0x3099F4u;
    {
        const bool branch_taken_0x3099f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099F4u;
        // 0x3099f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3099f4) {
            ctx->pc = 0x30A408u;
            goto label_30a408;
        }
    }
    ctx->pc = 0x3099FCu;
    // 0x3099fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3099fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x309a00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x309a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x309a04: 0x8c53bd48  lw          $s3, -0x42B8($v0)
    ctx->pc = 0x309a04u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x309a08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309A08u;
    SET_GPR_U32(ctx, 31, 0x309A10u);
    ctx->pc = 0x309A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A08u;
    // 0x309a0c: 0x8e700100  lw          $s0, 0x100($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309A08u, 0x309A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A10u;
label_309a10:
    // 0x309a10: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x309a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x309a14: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x309a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x309a18: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x309a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x309a1c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x309a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309a20: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x309a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x309a24: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x309a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x309a28: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x309a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x309a2c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x309a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a30: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x309a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x309a34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x309a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a38: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x309a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x309a3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x309a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a40: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x309a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x309a44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x309a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x309a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x309a4c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x309a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309a50: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x309a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309a54: 0xc6341374  lwc1        $f20, 0x1374($s1)
    ctx->pc = 0x309a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x309a58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309A58u;
    SET_GPR_U32(ctx, 31, 0x309A60u);
    ctx->pc = 0x309A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A58u;
    // 0x309a5c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309A58u, 0x309A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A60u;
label_309a60:
    // 0x309a60: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x309a64: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x309a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x309a68: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x309a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x309a6c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x309a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x309a70: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x309a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x309a74: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x309a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x309a78: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x309a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a7c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x309a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a80: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x309a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309a84: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x309a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309a88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x309a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x309a8c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x309a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x309a90: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x309a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x309a94: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x309a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x309a98: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x309a98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309a9c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x309a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309aa0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309aa4: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x309AA4u;
    SET_GPR_U32(ctx, 31, 0x309AACu);
    ctx->pc = 0x309AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AA4u;
    // 0x309aa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x309AA4u, 0x309AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AACu;
label_309aac:
    // 0x309aac: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
    ctx->pc = 0x309AACu;
    {
        const bool branch_taken_0x309aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AACu;
        // 0x309ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309aac) {
            ctx->pc = 0x30A40Cu;
            goto label_30a40c;
        }
    }
    ctx->pc = 0x309AB4u;
    // 0x309ab4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309AB4u;
    SET_GPR_U32(ctx, 31, 0x309ABCu);
    ctx->pc = 0x309AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AB4u;
    // 0x309ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309AB4u, 0x309ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309ABCu;
label_309abc:
    // 0x309abc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x309abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x309ac0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x309ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309ac4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x309ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309ac8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x309ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309acc: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x309accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309ad0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x309ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x309ad4: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x309ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309ad8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x309ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x309adc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x309adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309ae0: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x309ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309ae4: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x309ae4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x309ae8: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x309ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x309aec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x309aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x309af0: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x309af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x309af4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309af8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x309af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x309afc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x309afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x309b00: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x309b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x309b04: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x309b04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x309b08: 0x4a0003bf  vwaitq
    ctx->pc = 0x309b08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x309b0c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x309b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309b10: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x309b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309b14: 0xc6201374  lwc1        $f0, 0x1374($s1)
    ctx->pc = 0x309b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x309b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x309b1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309b20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x309b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x309b24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x309b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309b28: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x309b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309b2c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x309b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x309b30: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x309b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309b34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x309b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309b38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x309b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309b3c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x309b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309b40: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x309b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b44: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x309b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309b48: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x309b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309b4c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x309b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309b50: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x309b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x309b54: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x309b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x309b58: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x309b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x309b5c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x309b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x309b60: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x309b60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309b64: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x309b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309b68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x309b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x309b6c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x309B6Cu;
    SET_GPR_U32(ctx, 31, 0x309B74u);
    ctx->pc = 0x309B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B6Cu;
    // 0x309b70: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x309B6Cu, 0x309B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B74u;
label_309b74:
    // 0x309b74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309B74u;
    SET_GPR_U32(ctx, 31, 0x309B7Cu);
    ctx->pc = 0x309B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B74u;
    // 0x309b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309B74u, 0x309B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B7Cu;
label_309b7c:
    // 0x309b7c: 0x27b20120  addiu       $s2, $sp, 0x120
    ctx->pc = 0x309b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x309b80: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x309B80u;
    SET_GPR_U32(ctx, 31, 0x309B88u);
    ctx->pc = 0x309B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B80u;
    // 0x309b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x309B80u, 0x309B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B88u;
label_309b88:
    // 0x309b88: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309B88u;
    SET_GPR_U32(ctx, 31, 0x309B90u);
    ctx->pc = 0x309B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B88u;
    // 0x309b8c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309B88u, 0x309B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B90u;
label_309b90:
    // 0x309b90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309B90u;
    SET_GPR_U32(ctx, 31, 0x309B98u);
    ctx->pc = 0x309B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B90u;
    // 0x309b94: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309B90u, 0x309B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B98u;
label_309b98:
    // 0x309b98: 0x8e700100  lw          $s0, 0x100($s3)
    ctx->pc = 0x309b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x309b9c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x309B9Cu;
    SET_GPR_U32(ctx, 31, 0x309BA4u);
    ctx->pc = 0x309BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B9Cu;
    // 0x309ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x309B9Cu, 0x309BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BA4u;
label_309ba4:
    // 0x309ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x309BA4u;
    {
        const bool branch_taken_0x309ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ba4) {
            ctx->pc = 0x309BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309BA4u;
            // 0x309ba8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309BB8u;
            goto label_309bb8;
        }
    }
    ctx->pc = 0x309BACu;
    // 0x309bac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x309BACu;
    SET_GPR_U32(ctx, 31, 0x309BB4u);
    ctx->pc = 0x309BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BACu;
    // 0x309bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x309BACu, 0x309BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BB4u;
label_309bb4:
    // 0x309bb4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x309bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_309bb8:
    // 0x309bb8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309bbc: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x309bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309bc0: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x309bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x309bc4: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x309bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x309bc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309bcc: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x309bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309bd0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x309bd4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x309bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x309bd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309bd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309bdc: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x309bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309be0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x309be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x309be4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x309be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x309be8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x309be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309bec: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x309becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309bf0: 0xc66000e0  lwc1        $f0, 0xE0($s3)
    ctx->pc = 0x309bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309bf4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x309bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x309bf8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x309bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x309bfc: 0x0  nop
    ctx->pc = 0x309bfcu;
    // NOP
    // 0x309c00: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x309c00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x309c04: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x309c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x309c08: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x309c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309c0c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x309c0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x309c10: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x309c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309c14: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x309c14u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309c18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x309c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x309c1c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x309c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x309c20: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x309c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x309c24: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x309c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x309c28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x309c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x309c2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x309c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x309c30: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x309c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309c34: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x309c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309c38: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x309c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x309c3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309c40: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x309c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309c44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x309c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309c48: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x309c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309c4c: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x309c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309c50: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x309c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x309c54: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x309c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c58: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x309c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309c5c: 0xc7a2019c  lwc1        $f2, 0x19C($sp)
    ctx->pc = 0x309c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309c60: 0xe7a30180  swc1        $f3, 0x180($sp)
    ctx->pc = 0x309c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x309c64: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x309c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x309c68: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x309c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x309c6c: 0xe7a2018c  swc1        $f2, 0x18C($sp)
    ctx->pc = 0x309c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x309c70: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x309c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309c74: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x309c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309c78: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x309c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c7c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x309c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309c80: 0xc7a40168  lwc1        $f4, 0x168($sp)
    ctx->pc = 0x309c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x309c84: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x309c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x309c88: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x309c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x309c8c: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x309c8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x309c90: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x309c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309c94: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x309c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309c98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x309c98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309c9c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x309c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309ca0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x309ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309ca4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x309ca4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x309ca8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x309ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309cac: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x309cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309cb0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x309cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309cb4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x309cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x309cb8: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x309cb8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x309cbc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x309cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x309cc0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x309cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x309cc4: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x309cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309cc8: 0x0  nop
    ctx->pc = 0x309cc8u;
    // NOP
    // 0x309ccc: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x309cccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x309cd0: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x309cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x309cd4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x309cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x309cd8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x309cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x309cdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x309cdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309ce0: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x309ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309ce4: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x309ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x309ce8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x309ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x309cec: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x309cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x309cf0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x309cf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309cf4: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x309cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309cf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x309cf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309cfc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x309cfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309d00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x309d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309d04: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x309d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309d08: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x309d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d0c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x309d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d10: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x309d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d14: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x309d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d18: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x309d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x309d1c: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x309d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x309d20: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x309d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x309d24: 0xe7a3018c  swc1        $f3, 0x18C($sp)
    ctx->pc = 0x309d24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x309d28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x309d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309d2c: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x309d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309d30: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x309d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d34: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x309d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d38: 0xc7a40168  lwc1        $f4, 0x168($sp)
    ctx->pc = 0x309d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x309d3c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x309d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x309d40: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x309d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x309d44: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x309d44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x309d48: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x309d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d4c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x309d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d50: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x309d50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309d54: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x309d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d58: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x309d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d5c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x309d5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x309d60: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x309d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d64: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x309d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x309d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309d6c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x309d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x309d70: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x309d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d74: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x309d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d78: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x309d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d7c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x309d7cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x309d80: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x309d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x309d84: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x309d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x309d88: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x309d88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x309d8c: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x309d8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x309d90: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x309d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d94: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x309d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309d98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x309d98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309d9c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x309d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309da0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x309da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309da4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x309da4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x309da8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x309da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309dac: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x309dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309db0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x309db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x309db4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x309db4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x309db8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x309db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x309dbc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x309dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x309dc0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x309dc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x309dc4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x309dc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309dc8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x309dc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x309dcc: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x309dccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x309dd0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x309dd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x309dd4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x309dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x309dd8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x309dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x309ddc: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x309ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x309de0: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x309de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x309de4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x309de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x309de8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x309DE8u;
    SET_GPR_U32(ctx, 31, 0x309DF0u);
    ctx->pc = 0x309DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309DE8u;
    // 0x309dec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x309DE8u, 0x309DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DF0u;
label_309df0:
    // 0x309df0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x309df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309df8: 0x0  nop
    ctx->pc = 0x309df8u;
    // NOP
    // 0x309dfc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x309dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309e00: 0x0  nop
    ctx->pc = 0x309e00u;
    // NOP
    // 0x309e04: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x309E04u;
    {
        const bool branch_taken_0x309e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E04u;
        // 0x309e08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e04) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E0Cu;
    // 0x309e0c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x309e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309e10: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x309e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309e14: 0x0  nop
    ctx->pc = 0x309e14u;
    // NOP
    // 0x309e18: 0x0  nop
    ctx->pc = 0x309e18u;
    // NOP
    // 0x309e1c: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x309e1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x309e20: 0xc6241378  lwc1        $f4, 0x1378($s1)
    ctx->pc = 0x309e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x309e24: 0x0  nop
    ctx->pc = 0x309e24u;
    // NOP
    // 0x309e28: 0x0  nop
    ctx->pc = 0x309e28u;
    // NOP
    // 0x309e2c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x309e2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x309e30: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x309e30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x309e34: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x309e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309e38: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x309e38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x309e3c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x309E3Cu;
    {
        const bool branch_taken_0x309e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E3Cu;
        // 0x309e40: 0xe7a100d4  swc1        $f1, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e3c) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E44u;
    // 0x309e44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x309e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x309e48: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x309e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x309e4c: 0x0  nop
    ctx->pc = 0x309e4cu;
    // NOP
    // 0x309e50: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x309e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x309e54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x309e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309e58: 0x0  nop
    ctx->pc = 0x309e58u;
    // NOP
    // 0x309e5c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x309E5Cu;
    {
        const bool branch_taken_0x309e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309e5c) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E64u;
    // 0x309e64: 0xc622137c  lwc1        $f2, 0x137C($s1)
    ctx->pc = 0x309e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309e68: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x309e68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x309e6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309e70: 0x0  nop
    ctx->pc = 0x309e70u;
    // NOP
    // 0x309e74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x309E74u;
    {
        const bool branch_taken_0x309e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309e74) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E7Cu;
    // 0x309e7c: 0x46051000  add.s       $f0, $f2, $f5
    ctx->pc = 0x309e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x309e80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309e84: 0x0  nop
    ctx->pc = 0x309e84u;
    // NOP
    // 0x309e88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x309E88u;
    {
        const bool branch_taken_0x309e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309e88) {
            ctx->pc = 0x309E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309E88u;
            // 0x309e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E90u;
label_309e90:
    // 0x309e90: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x309E90u;
    {
        const bool branch_taken_0x309e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E90u;
        // 0x309e94: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e90) {
            ctx->pc = 0x30A0F0u;
            goto label_30a0f0;
        }
    }
    ctx->pc = 0x309E98u;
    // 0x309e98: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x309E98u;
    SET_GPR_U32(ctx, 31, 0x309EA0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x309E98u, 0x309EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EA0u;
label_309ea0:
    // 0x309ea0: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x309ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x309ea4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x309ea4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x309ea8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309EA8u;
    {
        const bool branch_taken_0x309ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ea8) {
            ctx->pc = 0x309EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309EA8u;
            // 0x309eac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309EB0u;
            goto label_309eb0;
        }
    }
    ctx->pc = 0x309EB0u;
label_309eb0:
    // 0x309eb0: 0x1010  mfhi        $v0
    ctx->pc = 0x309eb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x309eb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309EB4u;
    {
        const bool branch_taken_0x309eb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x309EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EB4u;
        // 0x309eb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309eb4) {
            ctx->pc = 0x309ED0u;
            goto label_309ed0;
        }
    }
    ctx->pc = 0x309EBCu;
    // 0x309ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ec0: 0x0  nop
    ctx->pc = 0x309ec0u;
    // NOP
    // 0x309ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x309ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x309ec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309EC8u;
    {
        const bool branch_taken_0x309ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ec8) {
            ctx->pc = 0x309EE8u;
            goto label_309ee8;
        }
    }
    ctx->pc = 0x309ED0u;
label_309ed0:
    // 0x309ed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309edc: 0x0  nop
    ctx->pc = 0x309edcu;
    // NOP
    // 0x309ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x309ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x309ee4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x309ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_309ee8:
    // 0x309ee8: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x309ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x309eec: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x309eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x309ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309ef4: 0xc6221380  lwc1        $f2, 0x1380($s1)
    ctx->pc = 0x309ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309ef8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x309ef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x309efc: 0xc6201330  lwc1        $f0, 0x1330($s1)
    ctx->pc = 0x309efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309f00: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x309f00u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x309f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309f08: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x309F08u;
    SET_GPR_U32(ctx, 31, 0x309F10u);
    ctx->pc = 0x309F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F08u;
    // 0x309f0c: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x309F08u, 0x309F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F10u;
label_309f10:
    // 0x309f10: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x309f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x309f14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x309f14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x309f18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309F18u;
    {
        const bool branch_taken_0x309f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f18) {
            ctx->pc = 0x309F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309F18u;
            // 0x309f1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309F20u;
            goto label_309f20;
        }
    }
    ctx->pc = 0x309F20u;
label_309f20:
    // 0x309f20: 0x1010  mfhi        $v0
    ctx->pc = 0x309f20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x309f24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309F24u;
    {
        const bool branch_taken_0x309f24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x309F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F24u;
        // 0x309f28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f24) {
            ctx->pc = 0x309F40u;
            goto label_309f40;
        }
    }
    ctx->pc = 0x309F2Cu;
    // 0x309f2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309f30: 0x0  nop
    ctx->pc = 0x309f30u;
    // NOP
    // 0x309f34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x309f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309f38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309F38u;
    {
        const bool branch_taken_0x309f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f38) {
            ctx->pc = 0x309F58u;
            goto label_309f58;
        }
    }
    ctx->pc = 0x309F40u;
label_309f40:
    // 0x309f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309f44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309f4c: 0x0  nop
    ctx->pc = 0x309f4cu;
    // NOP
    // 0x309f50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x309f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309f54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x309f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_309f58:
    // 0x309f58: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x309f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x309f5c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x309f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x309f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309f64: 0xc6221380  lwc1        $f2, 0x1380($s1)
    ctx->pc = 0x309f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309f68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x309f68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309f6c: 0xc6231378  lwc1        $f3, 0x1378($s1)
    ctx->pc = 0x309f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309f70: 0xc6211334  lwc1        $f1, 0x1334($s1)
    ctx->pc = 0x309f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309f74: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x309f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x309f78: 0x0  nop
    ctx->pc = 0x309f78u;
    // NOP
    // 0x309f7c: 0x0  nop
    ctx->pc = 0x309f7cu;
    // NOP
    // 0x309f80: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x309f80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x309f84: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x309f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309f88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x309f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309f8c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x309F8Cu;
    {
        const bool branch_taken_0x309f8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F8Cu;
        // 0x309f90: 0xe7a100d4  swc1        $f1, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f8c) {
            ctx->pc = 0x309FB4u;
            goto label_309fb4;
        }
    }
    ctx->pc = 0x309F94u;
    // 0x309f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x309f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x309f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309f9c: 0x0  nop
    ctx->pc = 0x309f9cu;
    // NOP
    // 0x309fa0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x309fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x309fa4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x309fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309fa8: 0x0  nop
    ctx->pc = 0x309fa8u;
    // NOP
    // 0x309fac: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x309FACu;
    {
        const bool branch_taken_0x309fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FACu;
        // 0x309fb0: 0xc7a200d4  lwc1        $f2, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fac) {
            ctx->pc = 0x30A034u;
            goto label_30a034;
        }
    }
    ctx->pc = 0x309FB4u;
label_309fb4:
    // 0x309fb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x309fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309fbc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x309FBCu;
    SET_GPR_U32(ctx, 31, 0x309FC4u);
    ctx->pc = 0x309FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FBCu;
    // 0x309fc0: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x309FBCu, 0x309FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FC4u;
label_309fc4:
    // 0x309fc4: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x309fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x309fc8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x309fc8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x309fcc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309FCCu;
    {
        const bool branch_taken_0x309fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fcc) {
            ctx->pc = 0x309FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309FCCu;
            // 0x309fd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309FD4u;
            goto label_309fd4;
        }
    }
    ctx->pc = 0x309FD4u;
label_309fd4:
    // 0x309fd4: 0x1010  mfhi        $v0
    ctx->pc = 0x309fd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x309fd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309FD8u;
    {
        const bool branch_taken_0x309fd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x309FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD8u;
        // 0x309fdc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fd8) {
            ctx->pc = 0x309FF4u;
            goto label_309ff4;
        }
    }
    ctx->pc = 0x309FE0u;
    // 0x309fe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309fe4: 0x0  nop
    ctx->pc = 0x309fe4u;
    // NOP
    // 0x309fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x309fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309fec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309FECu;
    {
        const bool branch_taken_0x309fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fec) {
            ctx->pc = 0x30A00Cu;
            goto label_30a00c;
        }
    }
    ctx->pc = 0x309FF4u;
label_309ff4:
    // 0x309ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309ff8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a000: 0x0  nop
    ctx->pc = 0x30a000u;
    // NOP
    // 0x30a004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30a004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30a008: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30a008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30a00c:
    // 0x30a00c: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x30a010: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x30a010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x30a014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a018: 0xc6221380  lwc1        $f2, 0x1380($s1)
    ctx->pc = 0x30a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a01c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30a01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30a020: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x30a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a024: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x30a024u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x30a028: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30a028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30a02c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x30a02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30a030: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x30a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30a034:
    // 0x30a034: 0xc621137c  lwc1        $f1, 0x137C($s1)
    ctx->pc = 0x30a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a038: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x30a038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a03c: 0x0  nop
    ctx->pc = 0x30a03cu;
    // NOP
    // 0x30a040: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x30A040u;
    {
        const bool branch_taken_0x30a040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a040) {
            ctx->pc = 0x30A068u;
            goto label_30a068;
        }
    }
    ctx->pc = 0x30A048u;
    // 0x30a048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30a04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a050: 0x0  nop
    ctx->pc = 0x30a050u;
    // NOP
    // 0x30a054: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30a054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30a058: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30a058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a05c: 0x0  nop
    ctx->pc = 0x30a05cu;
    // NOP
    // 0x30a060: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x30A060u;
    {
        const bool branch_taken_0x30a060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a060) {
            ctx->pc = 0x30A0E4u;
            goto label_30a0e4;
        }
    }
    ctx->pc = 0x30A068u;
label_30a068:
    // 0x30a068: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30a06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a070: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x30A070u;
    SET_GPR_U32(ctx, 31, 0x30A078u);
    ctx->pc = 0x30A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A070u;
    // 0x30a074: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x30A070u, 0x30A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A078u;
label_30a078:
    // 0x30a078: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x30a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x30a07c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x30a07cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x30a080: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30A080u;
    {
        const bool branch_taken_0x30a080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a080) {
            ctx->pc = 0x30A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A080u;
            // 0x30a084: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A088u;
            goto label_30a088;
        }
    }
    ctx->pc = 0x30A088u;
label_30a088:
    // 0x30a088: 0x1010  mfhi        $v0
    ctx->pc = 0x30a088u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a08c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A08Cu;
    {
        const bool branch_taken_0x30a08c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A08Cu;
        // 0x30a090: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a08c) {
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A094u;
    // 0x30a094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a098: 0x0  nop
    ctx->pc = 0x30a098u;
    // NOP
    // 0x30a09c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30a09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30a0a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A0A0u;
    {
        const bool branch_taken_0x30a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0a0) {
            ctx->pc = 0x30A0C0u;
            goto label_30a0c0;
        }
    }
    ctx->pc = 0x30A0A8u;
label_30a0a8:
    // 0x30a0a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a0ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a0b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a0b4: 0x0  nop
    ctx->pc = 0x30a0b4u;
    // NOP
    // 0x30a0b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30a0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30a0bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30a0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30a0c0:
    // 0x30a0c0: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x30a0c4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x30a0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x30a0c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a0cc: 0xc6221380  lwc1        $f2, 0x1380($s1)
    ctx->pc = 0x30a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a0d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30a0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30a0d4: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x30a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a0d8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x30a0d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x30a0dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30a0dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30a0e0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x30a0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_30a0e4:
    // 0x30a0e4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x30a0e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30a0e8: 0xfa211330  sqc2        $vf1, 0x1330($s1)
    ctx->pc = 0x30a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30a0ec: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x30a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30a0f0:
    // 0x30a0f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30a0f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0f4: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x30a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30a0f8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x30a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a0fc: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x30a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a100: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x30a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x30a104: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x30a104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x30a108: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x30a108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x30a10c: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x30A10Cu;
    {
        const bool branch_taken_0x30a10c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A10Cu;
        // 0x30a110: 0xe7a30124  swc1        $f3, 0x124($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a10c) {
            ctx->pc = 0x30A150u;
            goto label_30a150;
        }
    }
    ctx->pc = 0x30A114u;
    // 0x30a114: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x30a118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a11c: 0x0  nop
    ctx->pc = 0x30a11cu;
    // NOP
    // 0x30a120: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30a120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a124: 0x0  nop
    ctx->pc = 0x30a124u;
    // NOP
    // 0x30a128: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x30A128u;
    {
        const bool branch_taken_0x30a128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a128) {
            ctx->pc = 0x30A12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A128u;
            // 0x30a12c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A150u;
            goto label_30a150;
        }
    }
    ctx->pc = 0x30A130u;
    // 0x30a130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30a134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a138: 0x0  nop
    ctx->pc = 0x30a138u;
    // NOP
    // 0x30a13c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30a13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a140: 0x0  nop
    ctx->pc = 0x30a140u;
    // NOP
    // 0x30a144: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x30A144u;
    {
        const bool branch_taken_0x30a144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a144) {
            ctx->pc = 0x30A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A144u;
            // 0x30a148: 0x8e341354  lw          $s4, 0x1354($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A154u;
            goto label_30a154;
        }
    }
    ctx->pc = 0x30A14Cu;
    // 0x30a14c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x30a14cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a150:
    // 0x30a150: 0x8e341354  lw          $s4, 0x1354($s1)
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
label_30a154:
    // 0x30a154: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x30A154u;
    {
        const bool branch_taken_0x30a154 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A154u;
        // 0x30a158: 0xc6381344  lwc1        $f24, 0x1344($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a154) {
            ctx->pc = 0x30A1C4u;
            goto label_30a1c4;
        }
    }
    ctx->pc = 0x30A15Cu;
    // 0x30a15c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30a160: 0x8c82bb8c  lw          $v0, -0x4474($a0)
    ctx->pc = 0x30a160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBB8Cu));
    // 0x30a164: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x30a164u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
    // 0x30a168: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30A168u;
    {
        const bool branch_taken_0x30a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a168) {
            ctx->pc = 0x30A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A168u;
            // 0x30a16c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A170u;
            goto label_30a170;
        }
    }
    ctx->pc = 0x30A170u;
label_30a170:
    // 0x30a170: 0x1812  mflo        $v1
    ctx->pc = 0x30a170u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x30a174: 0xae231354  sw          $v1, 0x1354($s1)
    ctx->pc = 0x30a174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4948), GPR_U32(ctx, 3));
    // 0x30a178: 0x8c82bb8c  lw          $v0, -0x4474($a0)
    ctx->pc = 0x30a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949772)));
    // 0x30a17c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A17Cu;
    {
        const bool branch_taken_0x30a17c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A17Cu;
        // 0x30a180: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a17c) {
            ctx->pc = 0x30A198u;
            goto label_30a198;
        }
    }
    ctx->pc = 0x30A184u;
    // 0x30a184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a188: 0x0  nop
    ctx->pc = 0x30a188u;
    // NOP
    // 0x30a18c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30a18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30a190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30A190u;
    {
        const bool branch_taken_0x30a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A190u;
        // 0x30a194: 0xc6201344  lwc1        $f0, 0x1344($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a190) {
            ctx->pc = 0x30A1B4u;
            goto label_30a1b4;
        }
    }
    ctx->pc = 0x30A198u;
label_30a198:
    // 0x30a198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a19c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a1a4: 0x0  nop
    ctx->pc = 0x30a1a4u;
    // NOP
    // 0x30a1a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30a1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30a1ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30a1acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x30a1b0: 0xc6201344  lwc1        $f0, 0x1344($s1)
    ctx->pc = 0x30a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30a1b4:
    // 0x30a1b4: 0x0  nop
    ctx->pc = 0x30a1b4u;
    // NOP
    // 0x30a1b8: 0x0  nop
    ctx->pc = 0x30a1b8u;
    // NOP
    // 0x30a1bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30a1bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30a1c0: 0xe6201344  swc1        $f0, 0x1344($s1)
    ctx->pc = 0x30a1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4932), bits); }
label_30a1c4:
    // 0x30a1c4: 0x8e221354  lw          $v0, 0x1354($s1)
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
    // 0x30a1c8: 0x1840008a  blez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x30A1C8u;
    {
        const bool branch_taken_0x30a1c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1C8u;
        // 0x30a1cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1c8) {
            ctx->pc = 0x30A3F4u;
            goto label_30a3f4;
        }
    }
    ctx->pc = 0x30A1D0u;
    // 0x30a1d0: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
    // 0x30a1d4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x30a1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x30a1d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x30a1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x30a1dc: 0x24121770  addiu       $s2, $zero, 0x1770
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x30a1e0: 0x3c0139ae  lui         $at, 0x39AE
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14766 << 16));
    // 0x30a1e4: 0x3421c33e  ori         $at, $at, 0xC33E
    ctx->pc = 0x30a1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49982);
    // 0x30a1e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x30a1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x30a1ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30a1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30a1f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x30a1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x30a1f4: 0x0  nop
    ctx->pc = 0x30a1f4u;
    // NOP
label_30a1f8:
    // 0x30a1f8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x30A1F8u;
    SET_GPR_U32(ctx, 31, 0x30A200u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x30A1F8u, 0x30A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A200u;
label_30a200:
    // 0x30a200: 0xc6201344  lwc1        $f0, 0x1344($s1)
    ctx->pc = 0x30a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a204: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30a204u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30a208: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30a208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30a20c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x30a20cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x30a210: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30A210u;
    {
        const bool branch_taken_0x30a210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a210) {
            ctx->pc = 0x30A214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A210u;
            // 0x30a214: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A218u;
            goto label_30a218;
        }
    }
    ctx->pc = 0x30A218u;
label_30a218:
    // 0x30a218: 0x1010  mfhi        $v0
    ctx->pc = 0x30a218u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a21c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A21Cu;
    {
        const bool branch_taken_0x30a21c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A21Cu;
        // 0x30a220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a21c) {
            ctx->pc = 0x30A238u;
            goto label_30a238;
        }
    }
    ctx->pc = 0x30A224u;
    // 0x30a224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a228: 0x0  nop
    ctx->pc = 0x30a228u;
    // NOP
    // 0x30a22c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30a22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30a230: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30A230u;
    {
        const bool branch_taken_0x30a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A230u;
        // 0x30a234: 0xc6201340  lwc1        $f0, 0x1340($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a230) {
            ctx->pc = 0x30A254u;
            goto label_30a254;
        }
    }
    ctx->pc = 0x30A238u;
label_30a238:
    // 0x30a238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a23c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a240: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30a240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a244: 0x0  nop
    ctx->pc = 0x30a244u;
    // NOP
    // 0x30a248: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30a248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30a24c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30a24cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x30a250: 0xc6201340  lwc1        $f0, 0x1340($s1)
    ctx->pc = 0x30a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30a254:
    // 0x30a254: 0xc6211348  lwc1        $f1, 0x1348($s1)
    ctx->pc = 0x30a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a258: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x30a258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30a25c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x30a25cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30a260: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x30A260u;
    SET_GPR_U32(ctx, 31, 0x30A268u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x30A260u, 0x30A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A268u;
label_30a268:
    // 0x30a268: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x30a268u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x30a26c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30A26Cu;
    {
        const bool branch_taken_0x30a26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a26c) {
            ctx->pc = 0x30A270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A26Cu;
            // 0x30a270: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A274u;
            goto label_30a274;
        }
    }
    ctx->pc = 0x30A274u;
label_30a274:
    // 0x30a274: 0x1010  mfhi        $v0
    ctx->pc = 0x30a274u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a278: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A278u;
    {
        const bool branch_taken_0x30a278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A278u;
        // 0x30a27c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a278) {
            ctx->pc = 0x30A294u;
            goto label_30a294;
        }
    }
    ctx->pc = 0x30A280u;
    // 0x30a280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a284: 0x0  nop
    ctx->pc = 0x30a284u;
    // NOP
    // 0x30a288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30a288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30a28c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30A28Cu;
    {
        const bool branch_taken_0x30a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A28Cu;
        // 0x30a290: 0xc621134c  lwc1        $f1, 0x134C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a28c) {
            ctx->pc = 0x30A2B0u;
            goto label_30a2b0;
        }
    }
    ctx->pc = 0x30A294u;
label_30a294:
    // 0x30a294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a2a0: 0x0  nop
    ctx->pc = 0x30a2a0u;
    // NOP
    // 0x30a2a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30a2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30a2a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30a2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x30a2ac: 0xc621134c  lwc1        $f1, 0x134C($s1)
    ctx->pc = 0x30a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a2b0:
    // 0x30a2b0: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x30a2b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x30a2b4: 0x4614a8c1  sub.s       $f3, $f21, $f20
    ctx->pc = 0x30a2b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x30a2b8: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x30a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a2bc: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x30a2bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x30a2c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30a2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30a2c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30a2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30a2c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x30a2c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30a2cc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x30A2CCu;
    SET_GPR_U32(ctx, 31, 0x30A2D4u);
    ctx->pc = 0x30A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2CCu;
    // 0x30a2d0: 0xe7a200d0  swc1        $f2, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x30A2CCu, 0x30A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2D4u;
label_30a2d4:
    // 0x30a2d4: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x30a2d4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x30a2d8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30A2D8u;
    {
        const bool branch_taken_0x30a2d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a2d8) {
            ctx->pc = 0x30A2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A2D8u;
            // 0x30a2dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A2E0u;
            goto label_30a2e0;
        }
    }
    ctx->pc = 0x30A2E0u;
label_30a2e0:
    // 0x30a2e0: 0x1010  mfhi        $v0
    ctx->pc = 0x30a2e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a2e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A2E4u;
    {
        const bool branch_taken_0x30a2e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2E4u;
        // 0x30a2e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2e4) {
            ctx->pc = 0x30A300u;
            goto label_30a300;
        }
    }
    ctx->pc = 0x30A2ECu;
    // 0x30a2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a2f0: 0x0  nop
    ctx->pc = 0x30a2f0u;
    // NOP
    // 0x30a2f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30a2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30a2f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30A2F8u;
    {
        const bool branch_taken_0x30a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F8u;
        // 0x30a2fc: 0xc6211350  lwc1        $f1, 0x1350($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f8) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A300u;
label_30a300:
    // 0x30a300: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a30c: 0x0  nop
    ctx->pc = 0x30a30cu;
    // NOP
    // 0x30a310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30a310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30a314: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30a314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x30a318: 0xc6211350  lwc1        $f1, 0x1350($s1)
    ctx->pc = 0x30a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30a31c:
    // 0x30a31c: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x30a31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x30a320: 0x4614a881  sub.s       $f2, $f21, $f20
    ctx->pc = 0x30a320u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x30a324: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x30a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30a328: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x30a328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x30a32c: 0xc6241378  lwc1        $f4, 0x1378($s1)
    ctx->pc = 0x30a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30a330: 0xc7a500d0  lwc1        $f5, 0xD0($sp)
    ctx->pc = 0x30a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30a334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30a334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30a338: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x30a338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a33c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30a33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30a340: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x30a340u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30a344: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x30A344u;
    {
        const bool branch_taken_0x30a344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A344u;
        // 0x30a348: 0xe7a300d4  swc1        $f3, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a344) {
            ctx->pc = 0x30A3E0u;
            goto label_30a3e0;
        }
    }
    ctx->pc = 0x30A34Cu;
    // 0x30a34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30a350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30a350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a354: 0x0  nop
    ctx->pc = 0x30a354u;
    // NOP
    // 0x30a358: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x30a358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x30a35c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30a35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a360: 0x0  nop
    ctx->pc = 0x30a360u;
    // NOP
    // 0x30a364: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x30A364u;
    {
        const bool branch_taken_0x30a364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a364) {
            ctx->pc = 0x30A368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A364u;
            // 0x30a368: 0x8e221354  lw          $v0, 0x1354($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A3E4u;
            goto label_30a3e4;
        }
    }
    ctx->pc = 0x30A36Cu;
    // 0x30a36c: 0xc620137c  lwc1        $f0, 0x137C($s1)
    ctx->pc = 0x30a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a370: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30a370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a374: 0x0  nop
    ctx->pc = 0x30a374u;
    // NOP
    // 0x30a378: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x30A378u;
    {
        const bool branch_taken_0x30a378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a378) {
            ctx->pc = 0x30A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A378u;
            // 0x30a37c: 0x8e221354  lw          $v0, 0x1354($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A3E4u;
            goto label_30a3e4;
        }
    }
    ctx->pc = 0x30A380u;
    // 0x30a380: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30a380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30a384: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30a384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a388: 0x0  nop
    ctx->pc = 0x30a388u;
    // NOP
    // 0x30a38c: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x30A38Cu;
    {
        const bool branch_taken_0x30a38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a38c) {
            ctx->pc = 0x30A390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A38Cu;
            // 0x30a390: 0x8e221354  lw          $v0, 0x1354($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A3E4u;
            goto label_30a3e4;
        }
    }
    ctx->pc = 0x30A394u;
    // 0x30a394: 0xc0c258c  jal         func_309630
    ctx->pc = 0x30A394u;
    SET_GPR_U32(ctx, 31, 0x30A39Cu);
    ctx->pc = 0x30A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A394u;
    // 0x30a398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309630u, 0x30A394u, 0x30A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A39Cu;
label_30a39c:
    // 0x30a39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3a0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A3A0u;
    {
        const bool branch_taken_0x30a3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A0u;
        // 0x30a3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3a0) {
            ctx->pc = 0x30A3F4u;
            goto label_30a3f4;
        }
    }
    ctx->pc = 0x30A3A8u;
    // 0x30a3a8: 0xc0c257a  jal         func_3095E8
    ctx->pc = 0x30A3A8u;
    SET_GPR_U32(ctx, 31, 0x30A3B0u);
    ctx->pc = 0x30A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3A8u;
    // 0x30a3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3095E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3095E8u, 0x30A3A8u, 0x30A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3B0u;
label_30a3b0:
    // 0x30a3b0: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x30a3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a3b4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x30a3b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30a3b8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30a3bc: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x30a3bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x30a3c0: 0x9222135c  lbu         $v0, 0x135C($s1)
    ctx->pc = 0x30a3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4956)));
    // 0x30a3c4: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x30a3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a3c8: 0x92231360  lbu         $v1, 0x1360($s1)
    ctx->pc = 0x30a3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4960)));
    // 0x30a3cc: 0xa2030019  sb          $v1, 0x19($s0)
    ctx->pc = 0x30a3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a3d0: 0x92221364  lbu         $v0, 0x1364($s1)
    ctx->pc = 0x30a3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4964)));
    // 0x30a3d4: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x30a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a3d8: 0x92231368  lbu         $v1, 0x1368($s1)
    ctx->pc = 0x30a3d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4968)));
    // 0x30a3dc: 0xa203001b  sb          $v1, 0x1B($s0)
    ctx->pc = 0x30a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
label_30a3e0:
    // 0x30a3e0: 0x8e221354  lw          $v0, 0x1354($s1)
    ctx->pc = 0x30a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
label_30a3e4:
    // 0x30a3e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30a3e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x30a3e8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x30a3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30a3ec: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x30A3ECu;
    {
        const bool branch_taken_0x30a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3ec) {
            ctx->pc = 0x30A1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a1f8;
        }
    }
    ctx->pc = 0x30A3F4u;
label_30a3f4:
    // 0x30a3f4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A3F4u;
    {
        const bool branch_taken_0x30a3f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3F4u;
        // 0x30a3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3f4) {
            ctx->pc = 0x30A40Cu;
            goto label_30a40c;
        }
    }
    ctx->pc = 0x30A3FCu;
    // 0x30a3fc: 0xe6381344  swc1        $f24, 0x1344($s1)
    ctx->pc = 0x30a3fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4932), bits); }
    // 0x30a400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30A400u;
    {
        const bool branch_taken_0x30a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A400u;
        // 0x30a404: 0xae341354  sw          $s4, 0x1354($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4948), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a400) {
            ctx->pc = 0x30A40Cu;
            goto label_30a40c;
        }
    }
    ctx->pc = 0x30A408u;
label_30a408:
    // 0x30a408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a40c:
    // 0x30a40c: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x30a40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30a410: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x30a410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x30a414: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x30a414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x30a418: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x30a418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x30a41c: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x30a41cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x30a420: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x30a420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x30a424: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x30a424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x30a428: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x30a428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x30a42c: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x30a42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x30a430: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x30a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x30a434: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x30a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x30a438: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x30a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30a43c: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x30a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30a440: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x30a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30a444: 0x3e00008  jr          $ra
    ctx->pc = 0x30A444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A444u;
        // 0x30a448: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A44Cu;
    // 0x30a44c: 0x0  nop
    ctx->pc = 0x30a44cu;
    // NOP
    ctx->pc = 0x30a450u;
}
