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

// Function: sub_00203AF8
// Address: 0x203af8 - 0x203fa8
void sub_00203AF8_0x203af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203AF8_0x203af8");
#endif

    switch (ctx->pc) {
        case 0x203ba4u: goto label_203ba4;
        case 0x203bacu: goto label_203bac;
        case 0x203c80u: goto label_203c80;
        case 0x203c98u: goto label_203c98;
        case 0x203ca0u: goto label_203ca0;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cdcu: goto label_203cdc;
        case 0x203e70u: goto label_203e70;
        case 0x203e80u: goto label_203e80;
        case 0x203eb8u: goto label_203eb8;
        case 0x203f44u: goto label_203f44;
        case 0x203f6cu: goto label_203f6c;
        default: break;
    }

    ctx->pc = 0x203af8u;

    // 0x203af8: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x203afc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203b00: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x203b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x203b04: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x203b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x203b08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b0c: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x203b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x203b10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203b14: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x203b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x203b18: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x203b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x203b1c: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x203b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x203b20: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x203b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x203b24: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x203b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x203b28: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x203b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x203b2c: 0xffbf0248  sd          $ra, 0x248($sp)
    ctx->pc = 0x203b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
    // 0x203b30: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x203b34: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x203b38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x203b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x203b3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203b40: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x203b44: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x203b48: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x203b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x203b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203b50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203b54: 0xc4630070  lwc1        $f3, 0x70($v1)
    ctx->pc = 0x203b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203b58: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x203b5c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x203b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x203b60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x203b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203b64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x203b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x203b68: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x203b68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x203b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x203b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203b70: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x203b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203b74: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x203b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x203b78: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x203b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203b7c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x203b7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x203b80: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x203b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x203b84: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x203b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x203b88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x203b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x203b8c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x203b8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x203b90: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x203b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x203b94: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x203b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x203b98: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x203b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x203b9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x203B9Cu;
    SET_GPR_U32(ctx, 31, 0x203BA4u);
    ctx->pc = 0x203BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B9Cu;
    // 0x203ba0: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x203B9Cu, 0x203BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BA4u;
label_203ba4:
    // 0x203ba4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x203BA4u;
    SET_GPR_U32(ctx, 31, 0x203BACu);
    ctx->pc = 0x203BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA4u;
    // 0x203ba8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x203BA4u, 0x203BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BACu;
label_203bac:
    // 0x203bac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x203bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203bb0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x203bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203bb4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x203bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203bb8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203bbc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x203bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x203bc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203bc4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x203bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x203bc8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x203bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203bcc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x203bccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203bd0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x203bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203bd4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x203bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203bd8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x203bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203bdc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x203bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203be0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x203be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x203be4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x203be4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x203be8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x203be8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x203bec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x203becu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x203bf0: 0x0  nop
    ctx->pc = 0x203bf0u;
    // NOP
    // 0x203bf4: 0x0  nop
    ctx->pc = 0x203bf4u;
    // NOP
    // 0x203bf8: 0x46010084  c1          0x10084
    ctx->pc = 0x203bf8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x203bfc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x203bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x203c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c04: 0x0  nop
    ctx->pc = 0x203c04u;
    // NOP
    // 0x203c08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x203c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203c0c: 0x0  nop
    ctx->pc = 0x203c0cu;
    // NOP
    // 0x203c10: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x203C10u;
    {
        const bool branch_taken_0x203c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C10u;
        // 0x203c14: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c10) {
            ctx->pc = 0x203C3Cu;
            goto label_203c3c;
        }
    }
    ctx->pc = 0x203C18u;
    // 0x203c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c20: 0x0  nop
    ctx->pc = 0x203c20u;
    // NOP
    // 0x203c24: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x203c24u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x203c28: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x203c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x203c2c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x203c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203c30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x203c30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x203c34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x203c34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203c38: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x203c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_203c3c:
    // 0x203c3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x203c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203c40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x203c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c44: 0x184000a6  blez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203EE0u;
            goto label_203ee0;
        }
    }
    ctx->pc = 0x203C4Cu;
    // 0x203c4c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x203c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x203c50: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x203c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203c54: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x203c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x203c58: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x203c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x203c5c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x203c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x203c60: 0x27b401f0  addiu       $s4, $sp, 0x1F0
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x203c64: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x203c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x203c68: 0x27be01b0  addiu       $fp, $sp, 0x1B0
    ctx->pc = 0x203c68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x203c6c: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x203c70: 0x27b501a0  addiu       $s5, $sp, 0x1A0
    ctx->pc = 0x203c70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x203c74: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x203c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x203c78: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x203c7c: 0x0  nop
    ctx->pc = 0x203c7cu;
    // NOP
label_203c80:
    // 0x203c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c84: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x203c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x203c88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x203c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x203c8c: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x203c8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x203c90: 0xc0f7608  jal         func_3DD820
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C90u;
    // 0x203c94: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD820u, 0x203C90u, 0x203C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x203C98u;
    SET_GPR_U32(ctx, 31, 0x203CA0u);
    ctx->pc = 0x203C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C98u;
    // 0x203c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x203C98u, 0x203CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CA0u;
label_203ca0:
    // 0x203ca0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x203ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x203ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203ca8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x203ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203cac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x203cb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cb4: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x203cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x203cb8: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x203CB8u;
    SET_GPR_U32(ctx, 31, 0x203CC0u);
    ctx->pc = 0x203CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CB8u;
    // 0x203cbc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x203CB8u, 0x203CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CC0u;
label_203cc0:
    // 0x203cc0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203CC0u;
    {
        const bool branch_taken_0x203cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC0u;
        // 0x203cc4: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cc0) {
            ctx->pc = 0x203CE4u;
            goto label_203ce4;
        }
    }
    ctx->pc = 0x203CC8u;
    // 0x203cc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x203cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203ccc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x203cd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cd4: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x203CD4u;
    SET_GPR_U32(ctx, 31, 0x203CDCu);
    ctx->pc = 0x203CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CD4u;
    // 0x203cd8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x203CD4u, 0x203CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CDCu;
label_203cdc:
    // 0x203cdc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x203CDCu;
    {
        const bool branch_taken_0x203cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CDCu;
        // 0x203ce0: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cdc) {
            ctx->pc = 0x203EA0u;
            goto label_203ea0;
        }
    }
    ctx->pc = 0x203CE4u;
label_203ce4:
    // 0x203ce4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x203ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203ce8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x203ce8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x203cec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x203cecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203cf0: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x203cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203cf4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x203cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203cf8: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x203cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203cfc: 0xc7a201b8  lwc1        $f2, 0x1B8($sp)
    ctx->pc = 0x203cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d00: 0xc7a301bc  lwc1        $f3, 0x1BC($sp)
    ctx->pc = 0x203d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203d04: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x203d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x203d08: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x203d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x203d0c: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x203d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x203d10: 0xe7a301ac  swc1        $f3, 0x1AC($sp)
    ctx->pc = 0x203d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x203d14: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x203d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x203d18: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x203d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x203d1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x203d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x203d20: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x203d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x203d24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x203d24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x203d28: 0x4a0003bf  vwaitq
    ctx->pc = 0x203d28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x203d2c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x203d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203d30: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x203d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203d34: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x203d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x203d38: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x203d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x203d3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x203d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203d40: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x203d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203d44: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x203d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203d48: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x203d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203d4c: 0xc7a201c8  lwc1        $f2, 0x1C8($sp)
    ctx->pc = 0x203d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d50: 0xc7a401cc  lwc1        $f4, 0x1CC($sp)
    ctx->pc = 0x203d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x203d54: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x203d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x203d58: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x203d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x203d5c: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x203d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x203d60: 0xe7a401bc  swc1        $f4, 0x1BC($sp)
    ctx->pc = 0x203d60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x203d64: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x203d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d68: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x203d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203d6c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x203d6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x203d70: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x203d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d74: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x203d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203d78: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x203d78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x203d7c: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x203d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d80: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x203d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203d84: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x203d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x203d88: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x203d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203d8c: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x203d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203d90: 0xc7a301a8  lwc1        $f3, 0x1A8($sp)
    ctx->pc = 0x203d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203d94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x203d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x203d98: 0xc7a401ac  lwc1        $f4, 0x1AC($sp)
    ctx->pc = 0x203d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x203d9c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x203d9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x203da0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x203da0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x203da4: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x203da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x203da8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x203da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x203dac: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x203dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x203db0: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x203db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x203db4: 0xe7a301d8  swc1        $f3, 0x1D8($sp)
    ctx->pc = 0x203db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x203db8: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x203db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x203dbc: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x203dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x203dc0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x203dc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203dc4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x203dc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x203dc8: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x203dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x203dcc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x203dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203dd0: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x203dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203dd4: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x203dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203dd8: 0xc7a501ec  lwc1        $f5, 0x1EC($sp)
    ctx->pc = 0x203dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x203ddc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x203ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x203de0: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x203de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x203de4: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x203de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x203de8: 0xe7a501cc  swc1        $f5, 0x1CC($sp)
    ctx->pc = 0x203de8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x203dec: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x203decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x203df0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x203df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203df4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x203df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x203df8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x203df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x203dfc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x203dfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x203e00: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x203e00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x203e04: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x203e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x203e08: 0x46010044  c1          0x10044
    ctx->pc = 0x203e08u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x203e0c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x203e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x203e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x203e14: 0x0  nop
    ctx->pc = 0x203e14u;
    // NOP
    // 0x203e18: 0x0  nop
    ctx->pc = 0x203e18u;
    // NOP
    // 0x203e1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x203e1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x203e20: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x203e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203e24: 0x0  nop
    ctx->pc = 0x203e24u;
    // NOP
    // 0x203e28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x203E28u;
    {
        const bool branch_taken_0x203e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E28u;
        // 0x203e2c: 0xe6411b94  swc1        $f1, 0x1B94($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e28) {
            ctx->pc = 0x203E34u;
            goto label_203e34;
        }
    }
    ctx->pc = 0x203E30u;
    // 0x203e30: 0xe64d1b94  swc1        $f13, 0x1B94($s2)
    ctx->pc = 0x203e30u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7060), bits); }
label_203e34:
    // 0x203e34: 0xc6401b94  lwc1        $f0, 0x1B94($s2)
    ctx->pc = 0x203e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203e3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203e40: 0x0  nop
    ctx->pc = 0x203e40u;
    // NOP
    // 0x203e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203e48: 0x0  nop
    ctx->pc = 0x203e48u;
    // NOP
    // 0x203e4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x203E4Cu;
    {
        const bool branch_taken_0x203e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203e4c) {
            ctx->pc = 0x203E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203E4Cu;
            // 0x203e50: 0xe6411b94  swc1        $f1, 0x1B94($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 7060), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203E54u;
            goto label_203e54;
        }
    }
    ctx->pc = 0x203E54u;
label_203e54:
    // 0x203e54: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x203e58: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x203e5c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x203e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x203e60: 0x24449b28  addiu       $a0, $v0, -0x64D8
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
    // 0x203e64: 0xc64c1b94  lwc1        $f12, 0x1B94($s2)
    ctx->pc = 0x203e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203e68: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x203E68u;
    SET_GPR_U32(ctx, 31, 0x203E70u);
    ctx->pc = 0x203E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203E68u;
    // 0x203e6c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x203E68u, 0x203E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E70u;
label_203e70:
    // 0x203e70: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x203e74: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x203E74u;
    {
        const bool branch_taken_0x203e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x203E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E74u;
        // 0x203e78: 0xae571b9c  sw          $s7, 0x1B9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e74) {
            ctx->pc = 0x203EE0u;
            goto label_203ee0;
        }
    }
    ctx->pc = 0x203E7Cu;
    // 0x203e7c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x203e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_203e80:
    // 0x203e80: 0x0  nop
    ctx->pc = 0x203e80u;
    // NOP
    // 0x203e84: 0x0  nop
    ctx->pc = 0x203e84u;
    // NOP
    // 0x203e88: 0x0  nop
    ctx->pc = 0x203e88u;
    // NOP
    // 0x203e8c: 0x0  nop
    ctx->pc = 0x203e8cu;
    // NOP
    // 0x203e90: 0x1602fffb  bne         $s0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203E90u;
    {
        const bool branch_taken_0x203e90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x203E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E90u;
        // 0x203e94: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e90) {
            ctx->pc = 0x203E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203e80;
        }
    }
    ctx->pc = 0x203E98u;
    // 0x203e98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x203E98u;
    {
        const bool branch_taken_0x203e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e98) {
            ctx->pc = 0x203EE0u;
            goto label_203ee0;
        }
    }
    ctx->pc = 0x203EA0u;
label_203ea0:
    // 0x203ea0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x203ea4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x203ea8: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x203EA8u;
    {
        const bool branch_taken_0x203ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x203EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA8u;
        // 0x203eac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ea8) {
            ctx->pc = 0x203ED0u;
            goto label_203ed0;
        }
    }
    ctx->pc = 0x203EB0u;
    // 0x203eb0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x203eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x203eb4: 0x0  nop
    ctx->pc = 0x203eb4u;
    // NOP
label_203eb8:
    // 0x203eb8: 0x0  nop
    ctx->pc = 0x203eb8u;
    // NOP
    // 0x203ebc: 0x0  nop
    ctx->pc = 0x203ebcu;
    // NOP
    // 0x203ec0: 0x0  nop
    ctx->pc = 0x203ec0u;
    // NOP
    // 0x203ec4: 0x0  nop
    ctx->pc = 0x203ec4u;
    // NOP
    // 0x203ec8: 0x5603fffb  bnel        $s0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203EC8u;
    {
        const bool branch_taken_0x203ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x203ec8) {
            ctx->pc = 0x203ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203EC8u;
            // 0x203ecc: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203eb8;
        }
    }
    ctx->pc = 0x203ED0u;
label_203ed0:
    // 0x203ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ed4: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x203ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x203ed8: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x203ED8u;
    {
        const bool branch_taken_0x203ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED8u;
        // 0x203edc: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ed8) {
            ctx->pc = 0x203C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c80;
        }
    }
    ctx->pc = 0x203EE0u;
label_203ee0:
    // 0x203ee0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EE0u;
    {
        const bool branch_taken_0x203ee0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE0u;
        // 0x203ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee0) {
            ctx->pc = 0x203EF0u;
            goto label_203ef0;
        }
    }
    ctx->pc = 0x203EE8u;
    // 0x203ee8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x203EE8u;
    {
        const bool branch_taken_0x203ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE8u;
        // 0x203eec: 0xa2421b98  sb          $v0, 0x1B98($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7064), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee8) {
            ctx->pc = 0x203F74u;
            goto label_203f74;
        }
    }
    ctx->pc = 0x203EF0u;
label_203ef0:
    // 0x203ef0: 0x92421b98  lbu         $v0, 0x1B98($s2)
    ctx->pc = 0x203ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7064)));
    // 0x203ef4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x203EF4u;
    {
        const bool branch_taken_0x203ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ef4) {
            ctx->pc = 0x203EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203EF4u;
            // 0x203ef8: 0xa2401b98  sb          $zero, 0x1B98($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 7064), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F74u;
            goto label_203f74;
        }
    }
    ctx->pc = 0x203EFCu;
    // 0x203efc: 0x8e421b9c  lw          $v0, 0x1B9C($s2)
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7068)));
    // 0x203f00: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x203F00u;
    {
        const bool branch_taken_0x203f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f00) {
            ctx->pc = 0x203F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F00u;
            // 0x203f04: 0xa2401b98  sb          $zero, 0x1B98($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 7064), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203F74u;
            goto label_203f74;
        }
    }
    ctx->pc = 0x203F08u;
    // 0x203f08: 0xc6411b94  lwc1        $f1, 0x1B94($s2)
    ctx->pc = 0x203f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203f0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x203f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x203f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203f14: 0x0  nop
    ctx->pc = 0x203f14u;
    // NOP
    // 0x203f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f1c: 0x0  nop
    ctx->pc = 0x203f1cu;
    // NOP
    // 0x203f20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F4Cu;
            goto label_203f4c;
        }
    }
    ctx->pc = 0x203F28u;
    // 0x203f28: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x203f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x203f2c: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x203f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f34: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x203f38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x203f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x203f3c: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x203F3Cu;
    SET_GPR_U32(ctx, 31, 0x203F44u);
    ctx->pc = 0x203F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F3Cu;
    // 0x203f40: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x203F3Cu, 0x203F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x203F44u;
    {
        const bool branch_taken_0x203f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F44u;
        // 0x203f48: 0xae401b9c  sw          $zero, 0x1B9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f44) {
            ctx->pc = 0x203F70u;
            goto label_203f70;
        }
    }
    ctx->pc = 0x203F4Cu;
label_203f4c:
    // 0x203f4c: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x203f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x203f50: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x203f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x203f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203f58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x203f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x203f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x203f60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x203f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x203f64: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x203F64u;
    SET_GPR_U32(ctx, 31, 0x203F6Cu);
    ctx->pc = 0x203F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F64u;
    // 0x203f68: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x203F64u, 0x203F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F6Cu;
label_203f6c:
    // 0x203f6c: 0xae401b9c  sw          $zero, 0x1B9C($s2)
    ctx->pc = 0x203f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7068), GPR_U32(ctx, 0));
label_203f70:
    // 0x203f70: 0xa2401b98  sb          $zero, 0x1B98($s2)
    ctx->pc = 0x203f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7064), (uint8_t)GPR_U32(ctx, 0));
label_203f74:
    // 0x203f74: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x203f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x203f78: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x203f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x203f7c: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x203f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x203f80: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x203f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x203f84: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x203f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x203f88: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x203f88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x203f8c: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x203f8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x203f90: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x203f90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x203f94: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x203f98: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x203f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x203f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F9Cu;
        // 0x203fa0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203FA4u;
    // 0x203fa4: 0x0  nop
    ctx->pc = 0x203fa4u;
    // NOP
    ctx->pc = 0x203fa8u;
}
