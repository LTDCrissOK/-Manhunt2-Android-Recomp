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

// Function: sub_00231A80
// Address: 0x231a80 - 0x232850
void sub_00231A80_0x231a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A80_0x231a80");
#endif

    switch (ctx->pc) {
        case 0x231ac8u: goto label_231ac8;
        case 0x231ad0u: goto label_231ad0;
        case 0x231ad8u: goto label_231ad8;
        case 0x231ae0u: goto label_231ae0;
        case 0x231ae8u: goto label_231ae8;
        case 0x231af0u: goto label_231af0;
        case 0x231af8u: goto label_231af8;
        case 0x231b00u: goto label_231b00;
        case 0x231b08u: goto label_231b08;
        case 0x231b10u: goto label_231b10;
        case 0x231b18u: goto label_231b18;
        case 0x231cc8u: goto label_231cc8;
        case 0x231fb8u: goto label_231fb8;
        case 0x232000u: goto label_232000;
        case 0x2320f4u: goto label_2320f4;
        case 0x2321b0u: goto label_2321b0;
        case 0x23232cu: goto label_23232c;
        case 0x2324c0u: goto label_2324c0;
        case 0x232788u: goto label_232788;
        case 0x232798u: goto label_232798;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327f0u: goto label_2327f0;
        case 0x232804u: goto label_232804;
        case 0x232814u: goto label_232814;
        default: break;
    }

    ctx->pc = 0x231a80u;

    // 0x231a80: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x231a84: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x231a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x231a88: 0xffb701b8  sd          $s7, 0x1B8($sp)
    ctx->pc = 0x231a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 23));
    // 0x231a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a90: 0xffbe01c0  sd          $fp, 0x1C0($sp)
    ctx->pc = 0x231a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 30));
    // 0x231a94: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x231a94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a9c: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x231a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
    // 0x231aa0: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x231aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
    // 0x231aa4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x231aa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231aa8: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x231aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
    // 0x231aac: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x231aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x231ab0: 0xffb501a8  sd          $s5, 0x1A8($sp)
    ctx->pc = 0x231ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 21));
    // 0x231ab4: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x231ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x231ab8: 0xffbf01c8  sd          $ra, 0x1C8($sp)
    ctx->pc = 0x231ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 31));
    // 0x231abc: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x231abcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x231ac0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x231AC0u;
    SET_GPR_U32(ctx, 31, 0x231AC8u);
    ctx->pc = 0x231AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AC0u;
    // 0x231ac4: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x231AC0u, 0x231AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AC8u;
label_231ac8:
    // 0x231ac8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AC8u;
    SET_GPR_U32(ctx, 31, 0x231AD0u);
    ctx->pc = 0x231ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AC8u;
    // 0x231acc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AC8u, 0x231AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AD0u;
label_231ad0:
    // 0x231ad0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AD0u;
    SET_GPR_U32(ctx, 31, 0x231AD8u);
    ctx->pc = 0x231AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AD0u;
    // 0x231ad4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AD0u, 0x231AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AD8u;
label_231ad8:
    // 0x231ad8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AD8u;
    SET_GPR_U32(ctx, 31, 0x231AE0u);
    ctx->pc = 0x231ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AD8u;
    // 0x231adc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AD8u, 0x231AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AE0u;
label_231ae0:
    // 0x231ae0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AE0u;
    SET_GPR_U32(ctx, 31, 0x231AE8u);
    ctx->pc = 0x231AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AE0u;
    // 0x231ae4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AE0u, 0x231AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AE8u;
label_231ae8:
    // 0x231ae8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AE8u;
    SET_GPR_U32(ctx, 31, 0x231AF0u);
    ctx->pc = 0x231AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AE8u;
    // 0x231aec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AE8u, 0x231AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF0u;
label_231af0:
    // 0x231af0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AF0u;
    SET_GPR_U32(ctx, 31, 0x231AF8u);
    ctx->pc = 0x231AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AF0u;
    // 0x231af4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AF0u, 0x231AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF8u;
label_231af8:
    // 0x231af8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231AF8u;
    SET_GPR_U32(ctx, 31, 0x231B00u);
    ctx->pc = 0x231AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AF8u;
    // 0x231afc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231AF8u, 0x231B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B00u;
label_231b00:
    // 0x231b00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231B00u;
    SET_GPR_U32(ctx, 31, 0x231B08u);
    ctx->pc = 0x231B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B00u;
    // 0x231b04: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231B00u, 0x231B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B08u;
label_231b08:
    // 0x231b08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231B08u;
    SET_GPR_U32(ctx, 31, 0x231B10u);
    ctx->pc = 0x231B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B08u;
    // 0x231b0c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231B08u, 0x231B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B10u;
label_231b10:
    // 0x231b10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231B10u;
    SET_GPR_U32(ctx, 31, 0x231B18u);
    ctx->pc = 0x231B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B10u;
    // 0x231b14: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231B10u, 0x231B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B18u;
label_231b18:
    // 0x231b18: 0x52e00027  beql        $s7, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x231B18u;
    {
        const bool branch_taken_0x231b18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b18) {
            ctx->pc = 0x231B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231B18u;
            // 0x231b1c: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231BB8u;
            goto label_231bb8;
        }
    }
    ctx->pc = 0x231B20u;
    // 0x231b20: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x231b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x231b24: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x231b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231b28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b30: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x231b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x231b34: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x231b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x231b38: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x231b3c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x231b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x231b40: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x231b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x231b44: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x231b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x231b48: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x231b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x231b4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231b50: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x231b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231b54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x231b54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231b58: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x231b58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231b5c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231b60: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x231b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231b64: 0xc7a50124  lwc1        $f5, 0x124($sp)
    ctx->pc = 0x231b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231b68: 0xc7a60128  lwc1        $f6, 0x128($sp)
    ctx->pc = 0x231b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x231b6c: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x231b6cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x231b70: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x231b70u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x231b74: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x231b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231b78: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x231b78u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x231b7c: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x231b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231b80: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x231b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x231b84: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x231b84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x231b88: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x231b88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x231b8c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x231b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x231b90: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x231b90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231b94: 0xe7a60118  swc1        $f6, 0x118($sp)
    ctx->pc = 0x231b94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231b98: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x231b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x231b9c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x231b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231ba0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x231ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231ba4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x231ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x231ba8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x231ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x231bac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x231bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x231bb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x231BB0u;
    {
        const bool branch_taken_0x231bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BB0u;
        // 0x231bb4: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bb0) {
            ctx->pc = 0x231BE8u;
            goto label_231be8;
        }
    }
    ctx->pc = 0x231BB8u;
label_231bb8:
    // 0x231bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231bbc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x231bc0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x231bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231bc4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x231bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231bc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231bcc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x231bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x231bd0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x231bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231bd4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x231bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231bd8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x231bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x231bdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x231bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x231be0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x231be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x231be4: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x231be4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_231be8:
    // 0x231be8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x231be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x231bec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x231becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x231bf0: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x231bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x231bf4: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x231bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x231bf8: 0x13c00037  beqz        $fp, . + 4 + (0x37 << 2)
    ctx->pc = 0x231BF8u;
    {
        const bool branch_taken_0x231bf8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BF8u;
        // 0x231bfc: 0x27b300d0  addiu       $s3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bf8) {
            ctx->pc = 0x231CD8u;
            goto label_231cd8;
        }
    }
    ctx->pc = 0x231C00u;
    // 0x231c00: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x231c00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x231c04: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x231c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x231c08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231c0c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x231c10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231c14: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x231c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231c18: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x231c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x231c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x231c20: 0x3c013fd3  lui         $at, 0x3FD3
    ctx->pc = 0x231c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16339 << 16));
    // 0x231c24: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x231c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x231c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231c30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x231c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x231c34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231c38: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x231c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231c3c: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x231c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231c40: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x231c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c44: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x231c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x231c48: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x231c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231c4c: 0xc44096fc  lwc1        $f0, -0x6904($v0)
    ctx->pc = 0x231c4cu;
    { uint32_t bits = FAST_READ32(0x3F96FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c50: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x231c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x231c54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231c58: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231c58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231c5c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231c5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231c60: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x231c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x231c64: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x231c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x231c68: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x231c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231c6c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x231c6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231c70: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x231c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231c74: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x231c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231c78: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x231c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x231c7c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231c80: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231c84: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x231c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c88: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x231c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c8c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x231c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231c90: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x231c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231c94: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x231c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231c98: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x231c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231c9c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x231c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231ca0: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x231ca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231ca4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x231ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231ca8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x231ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231cac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x231cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cc0: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x231CC0u;
    SET_GPR_U32(ctx, 31, 0x231CC8u);
    ctx->pc = 0x231CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CC0u;
    // 0x231cc4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x231CC0u, 0x231CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC8u;
label_231cc8:
    // 0x231cc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CC8u;
    {
        const bool branch_taken_0x231cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231cc8) {
            ctx->pc = 0x231CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CC8u;
            // 0x231ccc: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CDCu;
            goto label_231cdc;
        }
    }
    ctx->pc = 0x231CD0u;
    // 0x231cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231cd4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x231cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_231cd8:
    // 0x231cd8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_231cdc:
    // 0x231cdc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x231cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x231ce0: 0xc4809894  lwc1        $f0, -0x676C($a0)
    ctx->pc = 0x231ce0u;
    { uint32_t bits = FAST_READ32(0x3F9894u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ce4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231ce8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x231ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231cec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x231cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x231cf0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x231cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x231cf4: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x231cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x231cf8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x231cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x231cfc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d00: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x231d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x231d04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231d08: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231d0c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x231d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231d10: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x231d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x231d14: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x231d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231d18: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x231d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d1c: 0xc7a2012c  lwc1        $f2, 0x12C($sp)
    ctx->pc = 0x231d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231d20: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x231d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231d24: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x231d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231d28: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x231d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231d2c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x231d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231d30: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x231d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231d34: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x231d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231d38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d3c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x231d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231d40: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x231d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x231d44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d48: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x231d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x231d4c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x231d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x231d50: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x231d54: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x231D54u;
    {
        const bool branch_taken_0x231d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D54u;
        // 0x231d58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d54) {
            ctx->pc = 0x231D84u;
            goto label_231d84;
        }
    }
    ctx->pc = 0x231D5Cu;
    // 0x231d5c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x231d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x231d60: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x231d64: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x231d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x231d68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231D68u;
    {
        const bool branch_taken_0x231d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D68u;
        // 0x231d6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d68) {
            ctx->pc = 0x231D84u;
            goto label_231d84;
        }
    }
    ctx->pc = 0x231D70u;
    // 0x231d70: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x231d74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x231d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x231d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231D7Cu;
    {
        const bool branch_taken_0x231d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D7Cu;
        // 0x231d80: 0xc44096fc  lwc1        $f0, -0x6904($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d7c) {
            ctx->pc = 0x231D94u;
            goto label_231d94;
        }
    }
    ctx->pc = 0x231D84u;
label_231d84:
    // 0x231d84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x231d88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x231d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x231d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d90: 0xc44096fc  lwc1        $f0, -0x6904($v0)
    ctx->pc = 0x231d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231d94:
    // 0x231d94: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x231d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231d98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x231d9c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x231d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231da0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x231da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231da4: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x231da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231da8: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x231da8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x231dac: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231dacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231db0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231db4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231db4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231db8: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x231db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231dbc: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x231dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231dc0: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x231dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231dc4: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x231dc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231dc8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x231dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231dcc: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231dccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231dd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231dd4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x231dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231dd8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x231dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ddc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x231ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231de0: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x231de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231de4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231de8: 0xc7a400bc  lwc1        $f4, 0xBC($sp)
    ctx->pc = 0x231de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231dec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231decu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231df0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231df0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231df4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x231df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x231df8: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x231df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231dfc: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x231dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231e00: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x231e00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231e04: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x231e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231e08: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x231e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x231e0c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231e10: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231e10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231e14: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x231e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231e18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x231e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x231e1c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x231e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231e20: 0xc44096fc  lwc1        $f0, -0x6904($v0)
    ctx->pc = 0x231e20u;
    { uint32_t bits = FAST_READ32(0x3F96FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e24: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x231e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231e28: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x231e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x231e2c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x231e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e30: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x231e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231e34: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231e38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231e3c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231e3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231e40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x231e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x231e44: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x231e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231e48: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x231e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x231e4c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x231e4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231e50: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x231e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231e54: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x231e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231e58: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x231e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x231e5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231e60: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231e64: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x231e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e68: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x231e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e6c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x231e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231e70: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x231e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231e74: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x231e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231e78: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x231e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231e7c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x231e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231e80: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x231e80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231e84: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x231e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231e88: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x231e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231e8c: 0xc44096fc  lwc1        $f0, -0x6904($v0)
    ctx->pc = 0x231e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e90: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x231e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231e94: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x231e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x231e98: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x231e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231e9c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x231e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ea0: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x231ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231ea4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231ea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231ea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231eac: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231eacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231eb0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x231eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x231eb4: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x231eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231eb8: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x231eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x231ebc: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x231ebcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231ec0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x231ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231ec4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x231ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x231ec8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x231ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x231ecc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231ed0: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231ed4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x231ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ed8: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x231edc: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x231edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ee0: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x231ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231ee4: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x231ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231ee8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x231ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231eec: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x231eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231ef0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x231ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231ef4: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x231ef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231ef8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x231ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231efc: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x231efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231f00: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x231f04: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x231f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x231f08: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x231f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x231f0c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x231f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x231f10: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x231F10u;
    {
        const bool branch_taken_0x231f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F10u;
        // 0x231f14: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f10) {
            ctx->pc = 0x231F94u;
            goto label_231f94;
        }
    }
    ctx->pc = 0x231F18u;
    // 0x231f18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x231f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f20: 0x0  nop
    ctx->pc = 0x231f20u;
    // NOP
    // 0x231f24: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x231f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x231f28: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x231f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231f2c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x231f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f30: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x231f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231f34: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x231f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231f38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x231f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231f3c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x231f3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x231f40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x231f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x231f44: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x231f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231f48: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x231f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231f4c: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x231f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231f50: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x231f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231f54: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x231f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x231f58: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231f58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231f5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231f60: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x231f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231f64: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x231f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x231f68: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231f6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231f6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231f70: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x231f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231f74: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x231f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231f78: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231f78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231f7c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231f7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231f80: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x231f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231f84: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x231f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x231f88: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x231f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x231f8c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231f90: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x231f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_231f94:
    // 0x231f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x231f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x231fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x231fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fb0: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x231FB0u;
    SET_GPR_U32(ctx, 31, 0x231FB8u);
    ctx->pc = 0x231FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FB0u;
    // 0x231fb4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x231FB0u, 0x231FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FB8u;
label_231fb8:
    // 0x231fb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231FB8u;
    {
        const bool branch_taken_0x231fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fb8) {
            ctx->pc = 0x231FD8u;
            goto label_231fd8;
        }
    }
    ctx->pc = 0x231FC0u;
    // 0x231fc0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x231fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231fc4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x231fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231fc8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x231fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x231fcc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231fd0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x231fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231fd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231fd8:
    // 0x231fd8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231FD8u;
    {
        const bool branch_taken_0x231fd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x231FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FD8u;
        // 0x231fdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fd8) {
            ctx->pc = 0x231FE8u;
            goto label_231fe8;
        }
    }
    ctx->pc = 0x231FE0u;
    // 0x231fe0: 0x16e0000f  bnez        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x231FE0u;
    {
        const bool branch_taken_0x231fe0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x231fe0) {
            ctx->pc = 0x232020u;
            goto label_232020;
        }
    }
    ctx->pc = 0x231FE8u;
label_231fe8:
    // 0x231fe8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x231fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ff0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x231ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ff8: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x231FF8u;
    SET_GPR_U32(ctx, 31, 0x232000u);
    ctx->pc = 0x231FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FF8u;
    // 0x231ffc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x231FF8u, 0x232000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232000u;
label_232000:
    // 0x232000: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232000u;
    {
        const bool branch_taken_0x232000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232000) {
            ctx->pc = 0x232020u;
            goto label_232020;
        }
    }
    ctx->pc = 0x232008u;
    // 0x232008: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23200c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x23200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232010: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x232010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x232014: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232018: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x232018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23201c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23201cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232020:
    // 0x232020: 0x122001ea  beqz        $s1, . + 4 + (0x1EA << 2)
    ctx->pc = 0x232020u;
    {
        const bool branch_taken_0x232020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x232020) {
            ctx->pc = 0x2327CCu;
            goto label_2327cc;
        }
    }
    ctx->pc = 0x232028u;
    // 0x232028: 0x126001e8  beqz        $s3, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x232028u;
    {
        const bool branch_taken_0x232028 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232028u;
        // 0x23202c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232028) {
            ctx->pc = 0x2327CCu;
            goto label_2327cc;
        }
    }
    ctx->pc = 0x232030u;
    // 0x232030: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x232030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x232034: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x232034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232038: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x232038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23203c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x23203cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x232040: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x232040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232044: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x232044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232048: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x232048u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x23204c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x23204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232050: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x232050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232054: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x232054u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x232058: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x232058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x23205c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x23205cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x232060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232064: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x232064u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x232068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23206c: 0x0  nop
    ctx->pc = 0x23206cu;
    // NOP
    // 0x232070: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x232070u;
    {
        const bool branch_taken_0x232070 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x232074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232070u;
        // 0x232074: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232070) {
            ctx->pc = 0x2320ECu;
            goto label_2320ec;
        }
    }
    ctx->pc = 0x232078u;
    // 0x232078: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x232078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23207c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x23207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232080: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x232080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232084: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x232084u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x232088: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x232088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23208c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x23208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232090: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x232090u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x232094: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x232094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232098: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x232098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23209c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x23209cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2320a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2320a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2320a4: 0x0  nop
    ctx->pc = 0x2320a4u;
    // NOP
    // 0x2320a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2320a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2320ac: 0x0  nop
    ctx->pc = 0x2320acu;
    // NOP
    // 0x2320b0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2320B0u;
    {
        const bool branch_taken_0x2320b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2320b0) {
            ctx->pc = 0x2320ECu;
            goto label_2320ec;
        }
    }
    ctx->pc = 0x2320B8u;
    // 0x2320b8: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2320b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2320bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2320bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2320c0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2320c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2320c4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2320c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2320c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2320c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2320cc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2320ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2320d0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2320d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2320d4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2320d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2320d8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2320d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2320dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2320dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2320e0: 0x0  nop
    ctx->pc = 0x2320e0u;
    // NOP
    // 0x2320e4: 0x450001b9  bc1f        . + 4 + (0x1B9 << 2)
    ctx->pc = 0x2320E4u;
    {
        const bool branch_taken_0x2320e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2320e4) {
            ctx->pc = 0x2327CCu;
            goto label_2327cc;
        }
    }
    ctx->pc = 0x2320ECu;
label_2320ec:
    // 0x2320ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2320ECu;
    SET_GPR_U32(ctx, 31, 0x2320F4u);
    ctx->pc = 0x2320F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320ECu;
    // 0x2320f0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2320ECu, 0x2320F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320F4u;
label_2320f4:
    // 0x2320f4: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2320f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2320f8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2320f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2320fc: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x232100: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x232100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x232104: 0x50400126  beql        $v0, $zero, . + 4 + (0x126 << 2)
    ctx->pc = 0x232104u;
    {
        const bool branch_taken_0x232104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232104) {
            ctx->pc = 0x232108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232104u;
            // 0x232108: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2325A0u;
            goto label_2325a0;
        }
    }
    ctx->pc = 0x23210Cu;
    // 0x23210c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x23210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232110: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x232110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232114: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x232114u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x232118: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x232118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23211c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x23211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232120: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x232120u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x232124: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x232124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232128: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x232128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23212c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x23212cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x232130: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x232130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x232134: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x232134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x232138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23213c: 0x0  nop
    ctx->pc = 0x23213cu;
    // NOP
    // 0x232140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232144: 0x0  nop
    ctx->pc = 0x232144u;
    // NOP
    // 0x232148: 0x45000114  bc1f        . + 4 + (0x114 << 2)
    ctx->pc = 0x232148u;
    {
        const bool branch_taken_0x232148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232148u;
        // 0x23214c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232148) {
            ctx->pc = 0x23259Cu;
            goto label_23259c;
        }
    }
    ctx->pc = 0x232150u;
    // 0x232150: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x232150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x232154: 0xc4409894  lwc1        $f0, -0x676C($v0)
    ctx->pc = 0x232154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232158: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x232158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x23215c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232160: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x232160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x232164: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x232164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x232168: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x232168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x23216c: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x23216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x232170: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x232170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x232174: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232178: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x232178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23217c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23217cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232180: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x232180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232184: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x232184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232188: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x232188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23218c: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x23218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232190: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x232190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232194: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x232194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232198: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x232198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23219c: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x23219cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2321a0: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x2321a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2321a4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2321a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2321a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2321A8u;
    SET_GPR_U32(ctx, 31, 0x2321B0u);
    ctx->pc = 0x2321ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2321A8u;
    // 0x2321ac: 0xe7a1011c  swc1        $f1, 0x11C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2321A8u, 0x2321B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2321b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2321b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321b8: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2321bc: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2321bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2321c0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2321C0u;
    {
        const bool branch_taken_0x2321c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2321C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321C0u;
        // 0x2321c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321c0) {
            ctx->pc = 0x2321ECu;
            goto label_2321ec;
        }
    }
    ctx->pc = 0x2321C8u;
    // 0x2321c8: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2321cc: 0x2462f855  addiu       $v0, $v1, -0x7AB
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965333));
    // 0x2321d0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2321d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2321d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2321D4u;
    {
        const bool branch_taken_0x2321d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2321d4) {
            ctx->pc = 0x2321D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2321D4u;
            // 0x2321d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2321ECu;
            goto label_2321ec;
        }
    }
    ctx->pc = 0x2321DCu;
    // 0x2321dc: 0x2462f84f  addiu       $v0, $v1, -0x7B1
    ctx->pc = 0x2321dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965327));
    // 0x2321e0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2321e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2321e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2321E4u;
    {
        const bool branch_taken_0x2321e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2321e4) {
            ctx->pc = 0x2321E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2321E4u;
            // 0x2321e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2321ECu;
            goto label_2321ec;
        }
    }
    ctx->pc = 0x2321ECu;
label_2321ec:
    // 0x2321ec: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2321ECu;
    {
        const bool branch_taken_0x2321ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2321ec) {
            ctx->pc = 0x2321F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2321ECu;
            // 0x2321f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23222Cu;
            goto label_23222c;
        }
    }
    ctx->pc = 0x2321F4u;
    // 0x2321f4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2321f8: 0x2403079f  addiu       $v1, $zero, 0x79F
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1951));
    // 0x2321fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2321fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232200: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x232200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x232204: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232208: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x232208u;
    {
        const bool branch_taken_0x232208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232208u;
        // 0x23220c: 0x240207a3  addiu       $v0, $zero, 0x7A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1955));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232208) {
            ctx->pc = 0x232228u;
            goto label_232228;
        }
    }
    ctx->pc = 0x232210u;
    // 0x232210: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232210u;
    {
        const bool branch_taken_0x232210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x232214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232210u;
        // 0x232214: 0x240207a5  addiu       $v0, $zero, 0x7A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1957));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232210) {
            ctx->pc = 0x232228u;
            goto label_232228;
        }
    }
    ctx->pc = 0x232218u;
    // 0x232218: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232218u;
    {
        const bool branch_taken_0x232218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232218u;
        // 0x23221c: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232218) {
            ctx->pc = 0x232228u;
            goto label_232228;
        }
    }
    ctx->pc = 0x232220u;
    // 0x232220: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232220u;
    {
        const bool branch_taken_0x232220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232220) {
            ctx->pc = 0x23222Cu;
            goto label_23222c;
        }
    }
    ctx->pc = 0x232228u;
label_232228:
    // 0x232228: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x232228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23222c:
    // 0x23222c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x23222Cu;
    {
        const bool branch_taken_0x23222c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23222Cu;
        // 0x232230: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23222c) {
            ctx->pc = 0x232248u;
            goto label_232248;
        }
    }
    ctx->pc = 0x232234u;
    // 0x232234: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x232234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x232238: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x232238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23223c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23223cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232240u;
    {
        const bool branch_taken_0x232240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232240u;
        // 0x232244: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232240) {
            ctx->pc = 0x232258u;
            goto label_232258;
        }
    }
    ctx->pc = 0x232248u;
label_232248:
    // 0x232248: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x232248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x23224c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x232250: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x232250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x232254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232258:
    // 0x232258: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23225c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x23225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x232260: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x232260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232264: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x232264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232268: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x232268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23226c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x23226cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x232270: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x232270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232274: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x232274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x232278: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x232278u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x23227c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23227cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x232280: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x232280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x232284: 0xe7a3015c  swc1        $f3, 0x15C($sp)
    ctx->pc = 0x232284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x232288: 0xe7a40154  swc1        $f4, 0x154($sp)
    ctx->pc = 0x232288u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x23228c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x23228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x232290: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232294: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x232294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232298: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23229c: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x23229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2322a0: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x2322a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2322a4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2322a8: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2322a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2322ac: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2322acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2322b0: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x2322b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2322b4: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x2322b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2322b8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2322b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2322bc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x2322bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2322c0: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x2322c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2322c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2322c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2322c8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2322cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2322ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2322d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2322d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2322d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2322d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2322d8: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x2322d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2322dc: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x2322dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2322e0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2322e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2322e4: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2322e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2322e8: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2322e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2322ec: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x2322ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2322f0: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x2322f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2322f4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2322f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2322f8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x2322f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2322fc: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x2322fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x232300: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232304: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x232304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232308: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x232308u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23230c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x23230cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232314: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232318: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23231c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23231cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232324: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x232324u;
    SET_GPR_U32(ctx, 31, 0x23232Cu);
    ctx->pc = 0x232328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232324u;
    // 0x232328: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x232324u, 0x23232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23232Cu;
label_23232c:
    // 0x23232c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x23232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232330: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x232330u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232334: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x232334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23233c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x23233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232340: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x232340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232344: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x232348: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23234c: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x23234cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x232350: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x232350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x232354: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x232354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x232358: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x232358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x23235c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x232360: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x232360u;
    {
        const bool branch_taken_0x232360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232360u;
        // 0x232364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232360) {
            ctx->pc = 0x23238Cu;
            goto label_23238c;
        }
    }
    ctx->pc = 0x232368u;
    // 0x232368: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x232368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x23236c: 0x2462f855  addiu       $v0, $v1, -0x7AB
    ctx->pc = 0x23236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965333));
    // 0x232370: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x232370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x232374: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x232374u;
    {
        const bool branch_taken_0x232374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232374) {
            ctx->pc = 0x232378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232374u;
            // 0x232378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23238Cu;
            goto label_23238c;
        }
    }
    ctx->pc = 0x23237Cu;
    // 0x23237c: 0x2462f84f  addiu       $v0, $v1, -0x7B1
    ctx->pc = 0x23237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965327));
    // 0x232380: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x232380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x232384: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232384u;
    {
        const bool branch_taken_0x232384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232384) {
            ctx->pc = 0x232388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232384u;
            // 0x232388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23238Cu;
            goto label_23238c;
        }
    }
    ctx->pc = 0x23238Cu;
label_23238c:
    // 0x23238c: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x23238Cu;
    {
        const bool branch_taken_0x23238c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23238c) {
            ctx->pc = 0x232390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23238Cu;
            // 0x232390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2323CCu;
            goto label_2323cc;
        }
    }
    ctx->pc = 0x232394u;
    // 0x232394: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x232394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x232398: 0x2403079f  addiu       $v1, $zero, 0x79F
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1951));
    // 0x23239c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2323a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2323a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2323a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2323A8u;
    {
        const bool branch_taken_0x2323a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2323ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323A8u;
        // 0x2323ac: 0x240207a3  addiu       $v0, $zero, 0x7A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1955));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323a8) {
            ctx->pc = 0x2323C8u;
            goto label_2323c8;
        }
    }
    ctx->pc = 0x2323B0u;
    // 0x2323b0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2323B0u;
    {
        const bool branch_taken_0x2323b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2323B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323B0u;
        // 0x2323b4: 0x240207a5  addiu       $v0, $zero, 0x7A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1957));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323b0) {
            ctx->pc = 0x2323C8u;
            goto label_2323c8;
        }
    }
    ctx->pc = 0x2323B8u;
    // 0x2323b8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2323B8u;
    {
        const bool branch_taken_0x2323b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2323BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323B8u;
        // 0x2323bc: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323b8) {
            ctx->pc = 0x2323C8u;
            goto label_2323c8;
        }
    }
    ctx->pc = 0x2323C0u;
    // 0x2323c0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2323C0u;
    {
        const bool branch_taken_0x2323c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2323c0) {
            ctx->pc = 0x2323CCu;
            goto label_2323cc;
        }
    }
    ctx->pc = 0x2323C8u;
label_2323c8:
    // 0x2323c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2323cc:
    // 0x2323cc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2323CCu;
    {
        const bool branch_taken_0x2323cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323CCu;
        // 0x2323d0: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323cc) {
            ctx->pc = 0x2323E8u;
            goto label_2323e8;
        }
    }
    ctx->pc = 0x2323D4u;
    // 0x2323d4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2323d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2323d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2323d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2323dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2323dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2323e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2323E0u;
    {
        const bool branch_taken_0x2323e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323E0u;
        // 0x2323e4: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323e0) {
            ctx->pc = 0x2323F8u;
            goto label_2323f8;
        }
    }
    ctx->pc = 0x2323E8u;
label_2323e8:
    // 0x2323e8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2323ec: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2323ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x2323f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2323f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2323f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2323f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2323f8:
    // 0x2323f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2323f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2323fc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2323fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x232400: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x232400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232404: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x232404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232408: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x232408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23240c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x23240cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x232410: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x232410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232414: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x232414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x232418: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x232418u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x23241c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23241cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x232420: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x232420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x232424: 0xe7a3016c  swc1        $f3, 0x16C($sp)
    ctx->pc = 0x232424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x232428: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x232428u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x23242c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x23242cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x232430: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232434: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x232434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232438: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23243c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x23243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232440: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x232440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232444: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x232444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232448: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x232448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23244c: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x23244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232450: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x232450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x232454: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x232454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x232458: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x232458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x23245c: 0xe7a3015c  swc1        $f3, 0x15C($sp)
    ctx->pc = 0x23245cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x232460: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x232460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232464: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x232464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x232468: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x232468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x23246c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23246cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232470: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232474: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x232474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232478: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x232478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23247c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x23247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232480: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x232480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232484: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x232484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232488: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x232488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x23248c: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x23248cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x232490: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x232490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x232494: 0xe7a3014c  swc1        $f3, 0x14C($sp)
    ctx->pc = 0x232494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x232498: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x232498u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23249c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x23249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2324a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2324a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2324b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2324b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324b8: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x2324B8u;
    SET_GPR_U32(ctx, 31, 0x2324C0u);
    ctx->pc = 0x2324BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2324B8u;
    // 0x2324bc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x2324B8u, 0x2324C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324C0u;
label_2324c0:
    // 0x2324c0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2324c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2324c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2324c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2324c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2324cc: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2324ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2324d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2324d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2324d4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2324d8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2324d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2324dc: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x2324dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2324e0: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x2324e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2324e4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2324e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2324e8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x2324e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2324ec: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2324ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2324f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2324f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2324f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2324f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2324f8: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x2324f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2324fc: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2324fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232500: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x232500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232504: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x232504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232508: 0xc7a3016c  lwc1        $f3, 0x16C($sp)
    ctx->pc = 0x232508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23250c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x23250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x232510: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x232510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x232514: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x232514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x232518: 0xe7a3015c  swc1        $f3, 0x15C($sp)
    ctx->pc = 0x232518u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x23251c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x23251cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x232520: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x232520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232524: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23252c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x23252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232530: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x232530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232534: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x232534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x232538: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x232538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23253c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x23253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232540: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x232540u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x232544: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x232544u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x232548: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x232548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23254c: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x23254cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x232550: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x232550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x232554: 0xe7a40168  swc1        $f4, 0x168($sp)
    ctx->pc = 0x232554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x232558: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x232558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x23255c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23255cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232560: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x232560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x232564: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232568: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x232568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23256c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x23256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232570: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x232570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232574: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x232574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232578: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x232578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23257c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x23257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x232580: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x232580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x232584: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x232584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x232588: 0xe7a3015c  swc1        $f3, 0x15C($sp)
    ctx->pc = 0x232588u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x23258c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x23258cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x232590: 0xfa0103d0  sqc2        $vf1, 0x3D0($s0)
    ctx->pc = 0x232590u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232594u;
    {
        const bool branch_taken_0x232594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232594) {
            ctx->pc = 0x2325A4u;
            goto label_2325a4;
        }
    }
    ctx->pc = 0x23259Cu;
label_23259c:
    // 0x23259c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2325a0:
    // 0x2325a0: 0x27b30120  addiu       $s3, $sp, 0x120
    ctx->pc = 0x2325a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2325a4:
    // 0x2325a4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2325A4u;
    {
        const bool branch_taken_0x2325a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A4u;
        // 0x2325a8: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a4) {
            ctx->pc = 0x232658u;
            goto label_232658;
        }
    }
    ctx->pc = 0x2325ACu;
    // 0x2325ac: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2325b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2325b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2325b4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2325b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2325b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2325b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2325bc: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2325bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2325c0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2325c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2325c4: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2325c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2325c8: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x2325c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2325cc: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x2325ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2325d0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2325d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2325d4: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x2325d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2325d8: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x2325d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2325dc: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x2325dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2325e0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2325e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2325e4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2325e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2325e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2325ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2325ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2325f0: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x2325f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2325f4: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x2325f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2325f8: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x2325f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2325fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2325fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x232600: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x232600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232604: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x232604u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x232608: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x232608u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x23260c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23260cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232610: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x232610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x232614: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x232614u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x232618: 0xe7a40128  swc1        $f4, 0x128($sp)
    ctx->pc = 0x232618u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x23261c: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x23261cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x232620: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x232620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232624: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x232624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x232628: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23262c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x23262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232630: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x232630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232634: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x232634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232638: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x232638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23263c: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x23263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232640: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x232640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x232644: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x232644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x232648: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x232648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x23264c: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x23264cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x232650: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232654: 0xfa0103d0  sqc2        $vf1, 0x3D0($s0)
    ctx->pc = 0x232654u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[1]));
label_232658:
    // 0x232658: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x23265c: 0x24625b40  addiu       $v0, $v1, 0x5B40
    ctx->pc = 0x23265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x232660: 0xc4625b40  lwc1        $f2, 0x5B40($v1)
    ctx->pc = 0x232660u;
    { uint32_t bits = FAST_READ32(0x575B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232664: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x232664u;
    { uint32_t bits = FAST_READ32(0x575B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232668: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x232668u;
    { uint32_t bits = FAST_READ32(0x575B44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23266c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23266cu;
    { uint32_t bits = FAST_READ32(0x575B48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232670: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x232670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x232674: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x232674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x232678: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x232678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x23267c: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x23267cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x232680: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x232680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x232684: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x232684u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232688: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x232688u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23268c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x23268cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232690: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x232690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232694: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x232694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232698: 0x260303c0  addiu       $v1, $s0, 0x3C0
    ctx->pc = 0x232698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x23269c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x23269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2326a0: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x2326a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2326a4: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x2326a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2326a8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2326a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2326ac: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x2326acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2326b0: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x2326b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2326b4: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x2326b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2326b8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2326b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2326bc: 0xfa0103c0  sqc2        $vf1, 0x3C0($s0)
    ctx->pc = 0x2326bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2326c0: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x2326c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x2326c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2326c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2326c8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2326c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2326cc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2326ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2326d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2326d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2326d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2326d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2326d8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2326d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2326dc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2326e0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2326e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2326e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2326e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2326e8: 0x0  nop
    ctx->pc = 0x2326e8u;
    // NOP
    // 0x2326ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2326ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2326f0: 0x0  nop
    ctx->pc = 0x2326f0u;
    // NOP
    // 0x2326f4: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x2326F4u;
    {
        const bool branch_taken_0x2326f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2326F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326F4u;
        // 0x2326f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326f4) {
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x2326FCu;
    // 0x2326fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2326fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232700: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x232700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x232704: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x232704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x232708: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x232708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x23270c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x23270cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x232710: 0x4a0003bf  vwaitq
    ctx->pc = 0x232710u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x232714: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x232714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232718: 0xfa0103c0  sqc2        $vf1, 0x3C0($s0)
    ctx->pc = 0x232718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23271c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x232720: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x232724: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x232724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x232728: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23272c: 0xc44096fc  lwc1        $f0, -0x6904($v0)
    ctx->pc = 0x23272cu;
    { uint32_t bits = FAST_READ32(0x3F96FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232730: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x232730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232734: 0x260203d0  addiu       $v0, $s0, 0x3D0
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x232738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23273c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x23273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232740: 0xc60103c0  lwc1        $f1, 0x3C0($s0)
    ctx->pc = 0x232740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232744: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x232744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x232748: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x232748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23274c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x23274cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x232750: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x232750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x232754: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x232754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x232758: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x232758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x23275c: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x23275cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x232760: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x232760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x232764: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x232764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x232768: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23276c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x23276cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x232770: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232774: 0xfa0103d0  sqc2        $vf1, 0x3D0($s0)
    ctx->pc = 0x232774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x232778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23277c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x232780: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x232780u;
    SET_GPR_U32(ctx, 31, 0x232788u);
    ctx->pc = 0x232784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232780u;
    // 0x232784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x232780u, 0x232788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232788u;
label_232788:
    // 0x232788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23278c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x23278cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x232790: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x232790u;
    SET_GPR_U32(ctx, 31, 0x232798u);
    ctx->pc = 0x232794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232790u;
    // 0x232794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x232790u, 0x232798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232798u;
label_232798:
    // 0x232798: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x232798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x23279c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23279Cu;
    {
        const bool branch_taken_0x23279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23279Cu;
        // 0x2327a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23279c) {
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x2327A4u;
    // 0x2327a4: 0x53c0001d  beql        $fp, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2327A4u;
    {
        const bool branch_taken_0x2327a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327a4) {
            ctx->pc = 0x2327A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2327A4u;
            // 0x2327a8: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23281Cu;
            goto label_23281c;
        }
    }
    ctx->pc = 0x2327ACu;
    // 0x2327ac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2327acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2327b0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2327b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x2327b4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2327b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2327b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2327B8u;
    {
        const bool branch_taken_0x2327b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327B8u;
        // 0x2327bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327b8) {
            ctx->pc = 0x2327C4u;
            goto label_2327c4;
        }
    }
    ctx->pc = 0x2327C0u;
    // 0x2327c0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2327c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2327c4:
    // 0x2327c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2327C4u;
    {
        const bool branch_taken_0x2327c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327C4u;
        // 0x2327c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327c4) {
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x2327CCu;
label_2327cc:
    // 0x2327cc: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x2327CCu;
    {
        const bool branch_taken_0x2327cc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2327D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327CCu;
        // 0x2327d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327cc) {
            ctx->pc = 0x2327F8u;
            goto label_2327f8;
        }
    }
    ctx->pc = 0x2327D4u;
    // 0x2327d4: 0x3a260001  xori        $a2, $s1, 0x1
    ctx->pc = 0x2327d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2327d8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2327D8u;
    SET_GPR_U32(ctx, 31, 0x2327E0u);
    ctx->pc = 0x2327DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327D8u;
    // 0x2327dc: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2327D8u, 0x2327E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327E0u;
label_2327e0:
    // 0x2327e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2327e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327e4: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x2327e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x2327e8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2327E8u;
    SET_GPR_U32(ctx, 31, 0x2327F0u);
    ctx->pc = 0x2327ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E8u;
    // 0x2327ec: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2327E8u, 0x2327F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327F0u;
label_2327f0:
    // 0x2327f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2327F0u;
    {
        const bool branch_taken_0x2327f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327F0u;
        // 0x2327f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327f0) {
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x2327F8u;
label_2327f8:
    // 0x2327f8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2327f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2327fc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2327FCu;
    SET_GPR_U32(ctx, 31, 0x232804u);
    ctx->pc = 0x232800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327FCu;
    // 0x232800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2327FCu, 0x232804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232804u;
label_232804:
    // 0x232804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232808: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x23280c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x23280Cu;
    SET_GPR_U32(ctx, 31, 0x232814u);
    ctx->pc = 0x232810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23280Cu;
    // 0x232810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23280Cu, 0x232814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232814u;
label_232814:
    // 0x232814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232818:
    // 0x232818: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x232818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_23281c:
    // 0x23281c: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x23281cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x232820: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x232820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x232824: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x232824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x232828: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x232828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23282c: 0xdfb501a8  ld          $s5, 0x1A8($sp)
    ctx->pc = 0x23282cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x232830: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x232830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x232834: 0xdfb701b8  ld          $s7, 0x1B8($sp)
    ctx->pc = 0x232834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x232838: 0xdfbe01c0  ld          $fp, 0x1C0($sp)
    ctx->pc = 0x232838u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x23283c: 0xdfbf01c8  ld          $ra, 0x1C8($sp)
    ctx->pc = 0x23283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x232840: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x232840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232844: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x232844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232848: 0x3e00008  jr          $ra
    ctx->pc = 0x232848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232848u;
        // 0x23284c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232850u;
}
