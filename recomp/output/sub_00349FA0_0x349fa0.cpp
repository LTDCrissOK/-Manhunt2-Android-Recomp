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

// Function: sub_00349FA0
// Address: 0x349fa0 - 0x34b190
void sub_00349FA0_0x349fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349FA0_0x349fa0");
#endif

    switch (ctx->pc) {
        case 0x349ffcu: goto label_349ffc;
        case 0x34a040u: goto label_34a040;
        case 0x34a190u: goto label_34a190;
        case 0x34a1bcu: goto label_34a1bc;
        case 0x34a1d8u: goto label_34a1d8;
        case 0x34a2c4u: goto label_34a2c4;
        case 0x34a2d0u: goto label_34a2d0;
        case 0x34a308u: goto label_34a308;
        case 0x34a320u: goto label_34a320;
        case 0x34a378u: goto label_34a378;
        case 0x34a380u: goto label_34a380;
        case 0x34a41cu: goto label_34a41c;
        case 0x34a47cu: goto label_34a47c;
        case 0x34a4b8u: goto label_34a4b8;
        case 0x34a518u: goto label_34a518;
        case 0x34a57cu: goto label_34a57c;
        case 0x34a5b8u: goto label_34a5b8;
        case 0x34a624u: goto label_34a624;
        case 0x34a688u: goto label_34a688;
        case 0x34a698u: goto label_34a698;
        case 0x34a7a8u: goto label_34a7a8;
        case 0x34a800u: goto label_34a800;
        case 0x34a858u: goto label_34a858;
        case 0x34a868u: goto label_34a868;
        case 0x34a998u: goto label_34a998;
        case 0x34a9a8u: goto label_34a9a8;
        case 0x34a9c4u: goto label_34a9c4;
        case 0x34a9fcu: goto label_34a9fc;
        case 0x34aa98u: goto label_34aa98;
        case 0x34ac30u: goto label_34ac30;
        case 0x34b048u: goto label_34b048;
        case 0x34b098u: goto label_34b098;
        case 0x34b144u: goto label_34b144;
        default: break;
    }

    ctx->pc = 0x349fa0u;

    // 0x349fa0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x349fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x349fa4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349fa8: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x349fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x349fac: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x349facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x349fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x349fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349fb4: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x349fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x349fb8: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x349fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x349fbc: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x349fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x349fc0: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x349fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x349fc4: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x349fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x349fc8: 0x3c15005c  lui         $s5, 0x5C
    ctx->pc = 0x349fc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
    // 0x349fcc: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x349fd0: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x349fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x349fd4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x349fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x349fd8: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x349fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x349fdc: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x349fdcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x349fe0: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x349fe0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x349fe4: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x349fe4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x349fe8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x349fe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x349fec: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x349fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x349ff0: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x349ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x349ff4: 0xc0d3040  jal         func_34C100
    ctx->pc = 0x349FF4u;
    SET_GPR_U32(ctx, 31, 0x349FFCu);
    ctx->pc = 0x349FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FF4u;
    // 0x349ff8: 0x24520070  addiu       $s2, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C100u, 0x349FF4u, 0x349FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FFCu;
label_349ffc:
    // 0x349ffc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x349ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34a000: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x34a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x34a004: 0x8c622b44  lw          $v0, 0x2B44($v1)
    ctx->pc = 0x34a004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B44u));
    // 0x34a008: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x34a008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a00c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x34a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x34a010: 0x14440041  bne         $v0, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x34A010u;
    {
        const bool branch_taken_0x34a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A010u;
        // 0x34a014: 0x3c080048  lui         $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a010) {
            ctx->pc = 0x34A118u;
            goto label_34a118;
        }
    }
    ctx->pc = 0x34A018u;
    // 0x34a018: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x34a018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x34a01c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34a020: 0x24463500  addiu       $a2, $v0, 0x3500
    ctx->pc = 0x34a020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x34a024: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x34a024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x34a028: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34a028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34a02c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x34a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A3504u));
    // 0x34a030: 0xa0602ce9  sb          $zero, 0x2CE9($v1)
    ctx->pc = 0x34a030u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CE9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CE9u, _value); } while (0);
    // 0x34a034: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x34a034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x34a038: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x34A038u;
    {
        const bool branch_taken_0x34a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A038u;
        // 0x34a03c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a038) {
            ctx->pc = 0x34A0ECu;
            goto label_34a0ec;
        }
    }
    ctx->pc = 0x34A040u;
label_34a040:
    // 0x34a040: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x34a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x34a044: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x34a044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x34a048: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x34A048u;
    {
        const bool branch_taken_0x34a048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a048) {
            ctx->pc = 0x34A04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A048u;
            // 0x34a04c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A0F0u;
            goto label_34a0f0;
        }
    }
    ctx->pc = 0x34A050u;
    // 0x34a050: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x34a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x34a054: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x34a054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x34a058: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34a05c: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x34A05Cu;
    {
        const bool branch_taken_0x34a05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a05c) {
            ctx->pc = 0x34A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A05Cu;
            // 0x34a060: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A0F0u;
            goto label_34a0f0;
        }
    }
    ctx->pc = 0x34A064u;
    // 0x34a064: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x34a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x34a068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a06c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34a070: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34a070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34a074: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34a074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a078: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34a078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34a07c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a080: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x34a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a084: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x34a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a088: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x34a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a08c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x34a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34a090: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34a090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34a094: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x34a094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34a098: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x34a098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34a09c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x34a09cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34a0a0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a0a4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x34a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a0a8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x34a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34a0ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34a0acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34a0b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34a0b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34a0b4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x34a0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34a0b8: 0x46000004  c1          0x4
    ctx->pc = 0x34a0b8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a0bc: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x34a0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a0c0: 0x0  nop
    ctx->pc = 0x34a0c0u;
    // NOP
    // 0x34a0c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34A0C4u;
    {
        const bool branch_taken_0x34a0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0C4u;
        // 0x34a0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0c4) {
            ctx->pc = 0x34A0ECu;
            goto label_34a0ec;
        }
    }
    ctx->pc = 0x34A0CCu;
    // 0x34a0cc: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x34a0ccu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x34a0d0: 0xa0e22ce9  sb          $v0, 0x2CE9($a3)
    ctx->pc = 0x34a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11497), (uint8_t)GPR_U32(ctx, 2));
    // 0x34a0d4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34a0d8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x34a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x34a0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a0e0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34a0e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34a0e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a0e8: 0xf881be10  sqc2        $vf1, -0x41F0($a0)
    ctx->pc = 0x34a0e8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5BBE10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5BBE10u, _value); } while (0);
label_34a0ec:
    // 0x34a0ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x34a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_34a0f0:
    // 0x34a0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34a0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a0f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34A0F4u;
    {
        const bool branch_taken_0x34a0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0F4u;
        // 0x34a0f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0f4) {
            ctx->pc = 0x34A100u;
            goto label_34a100;
        }
    }
    ctx->pc = 0x34A0FCu;
    // 0x34a0fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34a100:
    // 0x34a100: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A100u;
    {
        const bool branch_taken_0x34a100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a100) {
            ctx->pc = 0x34A110u;
            goto label_34a110;
        }
    }
    ctx->pc = 0x34A108u;
    // 0x34a108: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x34a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x34a10c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x34a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_34a110:
    // 0x34a110: 0x54a0ffcb  bnel        $a1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x34A110u;
    {
        const bool branch_taken_0x34a110 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a110) {
            ctx->pc = 0x34A114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A110u;
            // 0x34a114: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a040;
        }
    }
    ctx->pc = 0x34A118u;
label_34a118:
    // 0x34a118: 0x8ec5bd50  lw          $a1, -0x42B0($s6)
    ctx->pc = 0x34a118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
    // 0x34a11c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34a11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a120: 0xc4a000d0  lwc1        $f0, 0xD0($a1)
    ctx->pc = 0x34a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a124: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a128: 0x0  nop
    ctx->pc = 0x34a128u;
    // NOP
    // 0x34a12c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34A12Cu;
    {
        const bool branch_taken_0x34a12c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A12Cu;
        // 0x34a130: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a12c) {
            ctx->pc = 0x34A154u;
            goto label_34a154;
        }
    }
    ctx->pc = 0x34A134u;
    // 0x34a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a138: 0xa0622ce9  sb          $v0, 0x2CE9($v1)
    ctx->pc = 0x34a138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11497), (uint8_t)GPR_U32(ctx, 2));
    // 0x34a13c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34a140: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x34a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x34a144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a148: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34a14c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34a14cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a150: 0xf881be10  sqc2        $vf1, -0x41F0($a0)
    ctx->pc = 0x34a150u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5BBE10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5BBE10u, _value); } while (0);
label_34a154:
    // 0x34a154: 0x8d032ce4  lw          $v1, 0x2CE4($t0)
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11492)));
    // 0x34a158: 0x8e622ce0  lw          $v0, 0x2CE0($s3)
    ctx->pc = 0x34a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11488)));
    // 0x34a15c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34a15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34a160: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x34A160u;
    {
        const bool branch_taken_0x34a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A160u;
        // 0x34a164: 0x8e822b44  lw          $v0, 0x2B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a160) {
            ctx->pc = 0x34A58Cu;
            goto label_34a58c;
        }
    }
    ctx->pc = 0x34A168u;
    // 0x34a168: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a16c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34a170: 0x14430107  bne         $v0, $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x34A170u;
    {
        const bool branch_taken_0x34a170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A170u;
        // 0x34a174: 0x8e822b44  lw          $v0, 0x2B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a170) {
            ctx->pc = 0x34A590u;
            goto label_34a590;
        }
    }
    ctx->pc = 0x34A178u;
    // 0x34a178: 0x26a3b610  addiu       $v1, $s5, -0x49F0
    ctx->pc = 0x34a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
    // 0x34a17c: 0x90620075  lbu         $v0, 0x75($v1)
    ctx->pc = 0x34a17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 117)));
    // 0x34a180: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34A180u;
    {
        const bool branch_taken_0x34a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A180u;
        // 0x34a184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a180) {
            ctx->pc = 0x34A1A8u;
            goto label_34a1a8;
        }
    }
    ctx->pc = 0x34A188u;
    // 0x34a188: 0x24630075  addiu       $v1, $v1, 0x75
    ctx->pc = 0x34a188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 117));
    // 0x34a18c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34a18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_34a190:
    // 0x34a190: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x34a190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34a194: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x34A194u;
    {
        const bool branch_taken_0x34a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A194u;
        // 0x34a198: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a194) {
            ctx->pc = 0x34A58Cu;
            goto label_34a58c;
        }
    }
    ctx->pc = 0x34A19Cu;
    // 0x34a19c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34a19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a1a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x34A1A0u;
    {
        const bool branch_taken_0x34a1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a1a0) {
            ctx->pc = 0x34A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A1A0u;
            // 0x34a1a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a190;
        }
    }
    ctx->pc = 0x34A1A8u;
label_34a1a8:
    // 0x34a1a8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x34a1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34a1ac: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x34A1ACu;
    {
        const bool branch_taken_0x34a1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1ACu;
        // 0x34a1b0: 0x8e822b44  lw          $v0, 0x2B44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1ac) {
            ctx->pc = 0x34A590u;
            goto label_34a590;
        }
    }
    ctx->pc = 0x34A1B4u;
    // 0x34a1b4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A1B4u;
    SET_GPR_U32(ctx, 31, 0x34A1BCu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A1B4u, 0x34A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1BCu;
label_34a1bc:
    // 0x34a1bc: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x34a1c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34a1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34a1c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34a1c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34A1C8u;
    {
        const bool branch_taken_0x34a1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1C8u;
        // 0x34a1cc: 0x8e22bd48  lw          $v0, -0x42B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1c8) {
            ctx->pc = 0x34A224u;
            goto label_34a224;
        }
    }
    ctx->pc = 0x34A1D0u;
    // 0x34a1d0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A1D0u;
    SET_GPR_U32(ctx, 31, 0x34A1D8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A1D0u, 0x34A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1D8u;
label_34a1d8:
    // 0x34a1d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a1dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A1DCu;
    {
        const bool branch_taken_0x34a1dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1DCu;
        // 0x34a1e0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1dc) {
            ctx->pc = 0x34A1F8u;
            goto label_34a1f8;
        }
    }
    ctx->pc = 0x34A1E4u;
    // 0x34a1e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34a1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34a1e8: 0x0  nop
    ctx->pc = 0x34a1e8u;
    // NOP
    // 0x34a1ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34a1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34a1f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34A1F0u;
    {
        const bool branch_taken_0x34a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a1f0) {
            ctx->pc = 0x34A210u;
            goto label_34a210;
        }
    }
    ctx->pc = 0x34A1F8u;
label_34a1f8:
    // 0x34a1f8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34a1fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34a200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34a204: 0x0  nop
    ctx->pc = 0x34a204u;
    // NOP
    // 0x34a208: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34a208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34a20c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x34a20cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_34a210:
    // 0x34a210: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x34a210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x34a214: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34a214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34a218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a21c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x34A21Cu;
    {
        const bool branch_taken_0x34a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A21Cu;
        // 0x34a220: 0x46006502  mul.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a21c) {
            ctx->pc = 0x34A2F4u;
            goto label_34a2f4;
        }
    }
    ctx->pc = 0x34A224u;
label_34a224:
    // 0x34a224: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34a228: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x34a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a22c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x34a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x34a230: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x34a230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34a234: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a238: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34a238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34a23c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x34a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a240: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34a240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34a244: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x34a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a248: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x34a248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x34a24c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x34a24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34a250: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x34a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a254: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x34a254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a258: 0x0  nop
    ctx->pc = 0x34a258u;
    // NOP
    // 0x34a25c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34A25Cu;
    {
        const bool branch_taken_0x34a25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a25c) {
            ctx->pc = 0x34A278u;
            goto label_34a278;
        }
    }
    ctx->pc = 0x34A264u;
    // 0x34a264: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x34a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x34a268: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34a268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34a26c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a270: 0x0  nop
    ctx->pc = 0x34a270u;
    // NOP
    // 0x34a274: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34a278:
    // 0x34a278: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34a278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a27c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34a27cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34a280: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34a280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34a284: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34a284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34a288: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34a288u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34a28c: 0x4a0003bf  vwaitq
    ctx->pc = 0x34a28cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34a290: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34a290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34a294: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a298: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x34a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a29c: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x34a29cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a2a0: 0x0  nop
    ctx->pc = 0x34a2a0u;
    // NOP
    // 0x34a2a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34A2A4u;
    {
        const bool branch_taken_0x34a2a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2A4u;
        // 0x34a2a8: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2a4) {
            ctx->pc = 0x34A2BCu;
            goto label_34a2bc;
        }
    }
    ctx->pc = 0x34A2ACu;
    // 0x34a2ac: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x34a2acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a2b0: 0x0  nop
    ctx->pc = 0x34a2b0u;
    // NOP
    // 0x34a2b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34A2B4u;
    {
        const bool branch_taken_0x34a2b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2B4u;
        // 0x34a2b8: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2b4) {
            ctx->pc = 0x34A2C8u;
            goto label_34a2c8;
        }
    }
    ctx->pc = 0x34A2BCu;
label_34a2bc:
    // 0x34a2bc: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34A2BCu;
    SET_GPR_U32(ctx, 31, 0x34A2C4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34A2BCu, 0x34A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2C4u;
label_34a2c4:
    // 0x34a2c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34a2c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34a2c8:
    // 0x34a2c8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A2C8u;
    SET_GPR_U32(ctx, 31, 0x34A2D0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A2C8u, 0x34A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2D0u;
label_34a2d0:
    // 0x34a2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a2d4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x34a2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34a2d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34a2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a2dc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34a2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a2e4: 0x0  nop
    ctx->pc = 0x34a2e4u;
    // NOP
    // 0x34a2e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34a2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34a2ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34a2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34a2f0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x34a2f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_34a2f4:
    // 0x34a2f4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x34a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x34a2f8: 0x26a2b610  addiu       $v0, $s5, -0x49F0
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
    // 0x34a2fc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x34a2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34a300: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34A300u;
    SET_GPR_U32(ctx, 31, 0x34A308u);
    ctx->pc = 0x34A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A300u;
    // 0x34a304: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34A300u, 0x34A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A308u;
label_34a308:
    // 0x34a308: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34a308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34a30c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x34a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34a310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34a314: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34a314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a318: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34A318u;
    SET_GPR_U32(ctx, 31, 0x34A320u);
    ctx->pc = 0x34A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A318u;
    // 0x34a31c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34A318u, 0x34A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A320u;
label_34a320:
    // 0x34a320: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34a320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34a324: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x34a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a328: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x34a328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x34a32c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a330: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34a334: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x34a334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x34a338: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34a338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34a33c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34a33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a340: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x34a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a344: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x34a344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x34a348: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x34a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a34c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x34a34cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34a350: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x34a350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x34a354: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x34a354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34a358: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x34a358u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34a35c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34a35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34a360: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x34a360u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34a364: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34a368: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34a368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x34a36c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x34a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x34a370: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34A370u;
    SET_GPR_U32(ctx, 31, 0x34A378u);
    ctx->pc = 0x34A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A370u;
    // 0x34a374: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34A370u, 0x34A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A378u;
label_34a378:
    // 0x34a378: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34A378u;
    SET_GPR_U32(ctx, 31, 0x34A380u);
    ctx->pc = 0x34A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A378u;
    // 0x34a37c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34A378u, 0x34A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A380u;
label_34a380:
    // 0x34a380: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34a380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a384: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34a384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34a388: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34a388u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a38c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34a390: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34a394: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34a398: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34a39c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34a39cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a3a0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34a3a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34a3a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34a3a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34a3a8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a3ac: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a3b0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a3b4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34a3b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34a3b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34a3bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34a3bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34a3c0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34a3c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34a3c4: 0x0  nop
    ctx->pc = 0x34a3c4u;
    // NOP
    // 0x34a3c8: 0x0  nop
    ctx->pc = 0x34a3c8u;
    // NOP
    // 0x34a3cc: 0x46010084  c1          0x10084
    ctx->pc = 0x34a3ccu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a3d0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x34a3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x34a3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a3d8: 0x0  nop
    ctx->pc = 0x34a3d8u;
    // NOP
    // 0x34a3dc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34a3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a3e0: 0x0  nop
    ctx->pc = 0x34a3e0u;
    // NOP
    // 0x34a3e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34A3E4u;
    {
        const bool branch_taken_0x34a3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3E4u;
        // 0x34a3e8: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3e4) {
            ctx->pc = 0x34A410u;
            goto label_34a410;
        }
    }
    ctx->pc = 0x34A3ECu;
    // 0x34a3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a3f4: 0x0  nop
    ctx->pc = 0x34a3f4u;
    // NOP
    // 0x34a3f8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34a3f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34a3fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34a3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34a400: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34a400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34a404: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34a404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34a408: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34a408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34a40c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_34a410:
    // 0x34a410: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x34a410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34a414: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34A414u;
    SET_GPR_U32(ctx, 31, 0x34A41Cu);
    ctx->pc = 0x34A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A414u;
    // 0x34a418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34A414u, 0x34A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A41Cu;
label_34a41c:
    // 0x34a41c: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x34a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x34a420: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x34a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x34a424: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34a428: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x34a428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x34a42c: 0xc440659c  lwc1        $f0, 0x659C($v0)
    ctx->pc = 0x34a42cu;
    { uint32_t bits = FAST_READ32(0x47659Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a430: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34a434: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x34a434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x34a438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a43c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34a43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34a440: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34a440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34a444: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x34a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x34a448: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x34a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34a44c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x34a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x34a450: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x34a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x34a454: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x34a454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x34a458: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x34a458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x34a45c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x34a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x34a460: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34a464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a468: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34a468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34a46c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34a470: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x34a470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x34a474: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34A474u;
    SET_GPR_U32(ctx, 31, 0x34A47Cu);
    ctx->pc = 0x34A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A474u;
    // 0x34a478: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34A474u, 0x34A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A47Cu;
label_34a47c:
    // 0x34a47c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x34A47Cu;
    {
        const bool branch_taken_0x34a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A47Cu;
        // 0x34a480: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a47c) {
            ctx->pc = 0x34A58Cu;
            goto label_34a58c;
        }
    }
    ctx->pc = 0x34A484u;
    // 0x34a484: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x34a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a488: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x34a488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x34a48c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34a48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34a490: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a494: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a494u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a498: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34a498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a49c: 0x0  nop
    ctx->pc = 0x34a49cu;
    // NOP
    // 0x34a4a0: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x34A4A0u;
    {
        const bool branch_taken_0x34a4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4A0u;
        // 0x34a4a4: 0x8fa200b4  lw          $v0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4a0) {
            ctx->pc = 0x34A58Cu;
            goto label_34a58c;
        }
    }
    ctx->pc = 0x34A4A8u;
    // 0x34a4a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x34a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34a4ac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x34a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34a4b0: 0xc0c93a0  jal         func_324E80
    ctx->pc = 0x34A4B0u;
    SET_GPR_U32(ctx, 31, 0x34A4B8u);
    ctx->pc = 0x34A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A4B0u;
    // 0x34a4b4: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E80u, 0x34A4B0u, 0x34A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A4B8u;
label_34a4b8:
    // 0x34a4b8: 0x6ba300e7  ldl         $v1, 0xE7($sp)
    ctx->pc = 0x34a4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34a4bc: 0x6fa300e0  ldr         $v1, 0xE0($sp)
    ctx->pc = 0x34a4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34a4c0: 0x6ba400ef  ldl         $a0, 0xEF($sp)
    ctx->pc = 0x34a4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34a4c4: 0x6fa400e8  ldr         $a0, 0xE8($sp)
    ctx->pc = 0x34a4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34a4c8: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x34a4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34a4cc: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x34a4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34a4d0: 0xb224003f  sdl         $a0, 0x3F($s1)
    ctx->pc = 0x34a4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34a4d4: 0xb6240038  sdr         $a0, 0x38($s1)
    ctx->pc = 0x34a4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34a4d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x34a4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x34a4dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34a4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a4e0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x34a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a4e4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x34a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a4e8: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x34a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a4ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a4f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34a4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34a4f4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x34a4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a4f8: 0x0  nop
    ctx->pc = 0x34a4f8u;
    // NOP
    // 0x34a4fc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34A4FCu;
    {
        const bool branch_taken_0x34a4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4FCu;
        // 0x34a500: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4fc) {
            ctx->pc = 0x34A58Cu;
            goto label_34a58c;
        }
    }
    ctx->pc = 0x34A504u;
    // 0x34a504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a508: 0xa2220075  sb          $v0, 0x75($s1)
    ctx->pc = 0x34a508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x34a50c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x34a50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34a510: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A510u;
    SET_GPR_U32(ctx, 31, 0x34A518u);
    ctx->pc = 0x34A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A510u;
    // 0x34a514: 0xa2200074  sb          $zero, 0x74($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A510u, 0x34A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A518u;
label_34a518:
    // 0x34a518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a51c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A51Cu;
    {
        const bool branch_taken_0x34a51c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A51Cu;
        // 0x34a520: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a51c) {
            ctx->pc = 0x34A538u;
            goto label_34a538;
        }
    }
    ctx->pc = 0x34A524u;
    // 0x34a524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34a524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a528: 0x0  nop
    ctx->pc = 0x34a528u;
    // NOP
    // 0x34a52c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34a52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34a530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34A530u;
    {
        const bool branch_taken_0x34a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a530) {
            ctx->pc = 0x34A550u;
            goto label_34a550;
        }
    }
    ctx->pc = 0x34A538u;
label_34a538:
    // 0x34a538: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34a53c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34a540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34a540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a544: 0x0  nop
    ctx->pc = 0x34a544u;
    // NOP
    // 0x34a548: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34a548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34a54c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34a54cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34a550:
    // 0x34a550: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x34a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x34a554: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34a554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34a558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a55c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x34a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34a560: 0x8c45be30  lw          $a1, -0x41D0($v0)
    ctx->pc = 0x34a560u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5BBE30u));
    // 0x34a564: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x34a564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x34a568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34a568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34a56c: 0x2484ff68  addiu       $a0, $a0, -0x98
    ctx->pc = 0x34a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    // 0x34a570: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x34a570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x34a574: 0xc0c34a8  jal         func_30D2A0
    ctx->pc = 0x34A574u;
    SET_GPR_U32(ctx, 31, 0x34A57Cu);
    ctx->pc = 0x34A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A574u;
    // 0x34a578: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2A0u, 0x34A574u, 0x34A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A57Cu;
label_34a57c:
    // 0x34a57c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x34a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x34a580: 0x8e622ce0  lw          $v0, 0x2CE0($s3)
    ctx->pc = 0x34a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11488)));
    // 0x34a584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a588: 0xae622ce0  sw          $v0, 0x2CE0($s3)
    ctx->pc = 0x34a588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11488), GPR_U32(ctx, 2));
label_34a58c:
    // 0x34a58c: 0x8e822b44  lw          $v0, 0x2B44($s4)
    ctx->pc = 0x34a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11076)));
label_34a590:
    // 0x34a590: 0x26a4b610  addiu       $a0, $s5, -0x49F0
    ctx->pc = 0x34a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
    // 0x34a594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a598: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34a59c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x34a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x34a5a0: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x34a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34a5a4: 0x92030075  lbu         $v1, 0x75($s0)
    ctx->pc = 0x34a5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x34a5a8: 0x14650023  bne         $v1, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x34A5A8u;
    {
        const bool branch_taken_0x34a5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x34A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A8u;
        // 0x34a5ac: 0x8ec2bd50  lw          $v0, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5a8) {
            ctx->pc = 0x34A638u;
            goto label_34a638;
        }
    }
    ctx->pc = 0x34A5B0u;
    // 0x34a5b0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A5B0u;
    SET_GPR_U32(ctx, 31, 0x34A5B8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A5B0u, 0x34A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5B8u;
label_34a5b8:
    // 0x34a5b8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34a5bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a5c0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A5C0u;
    {
        const bool branch_taken_0x34a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a5c0) {
            ctx->pc = 0x34A5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A5C0u;
            // 0x34a5c4: 0xc6440008  lwc1        $f4, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A5D8u;
            goto label_34a5d8;
        }
    }
    ctx->pc = 0x34A5C8u;
    // 0x34a5c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34a5cc: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x34a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B00u));
    // 0x34a5d0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x34a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x34a5d4: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x34a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_34a5d8:
    // 0x34a5d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34a5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a5dc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x34a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a5e0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x34a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a5e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34a5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34a5e8: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x34a5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x34a5ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34a5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a5f0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x34a5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34a5f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34a5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34a5f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34a5f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34a5fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a600: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34a600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a604: 0x0  nop
    ctx->pc = 0x34a604u;
    // NOP
    // 0x34a608: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34A608u;
    {
        const bool branch_taken_0x34a608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A608u;
        // 0x34a60c: 0x8ec2bd50  lw          $v0, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a608) {
            ctx->pc = 0x34A638u;
            goto label_34a638;
        }
    }
    ctx->pc = 0x34A610u;
    // 0x34a610: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x34a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x34a614: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A614u;
    {
        const bool branch_taken_0x34a614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A614u;
        // 0x34a618: 0xa2000075  sb          $zero, 0x75($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a614) {
            ctx->pc = 0x34A628u;
            goto label_34a628;
        }
    }
    ctx->pc = 0x34A61Cu;
    // 0x34a61c: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34A61Cu;
    SET_GPR_U32(ctx, 31, 0x34A624u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34A61Cu, 0x34A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A624u;
label_34a624:
    // 0x34a624: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x34a624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_34a628:
    // 0x34a628: 0x8e622ce0  lw          $v0, 0x2CE0($s3)
    ctx->pc = 0x34a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11488)));
    // 0x34a62c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34a630: 0xae622ce0  sw          $v0, 0x2CE0($s3)
    ctx->pc = 0x34a630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11488), GPR_U32(ctx, 2));
    // 0x34a634: 0x8ec2bd50  lw          $v0, -0x42B0($s6)
    ctx->pc = 0x34a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
label_34a638:
    // 0x34a638: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34a63c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x34a63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x34a640: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x34a640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x34a644: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x34a644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34a648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a64c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x34a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x34a650: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x34a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
    // 0x34a654: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x34a654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x34a658: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x34a658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x34a65c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a660: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x34a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a664: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34a668: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x34a668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34a66c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x34a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a670: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34a670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34a674: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x34a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a678: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34a678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34a67c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a680: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34A680u;
    SET_GPR_U32(ctx, 31, 0x34A688u);
    ctx->pc = 0x34A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A680u;
    // 0x34a684: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34A680u, 0x34A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A688u;
label_34a688:
    // 0x34a688: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x34a688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34a68c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x34a68cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34a690: 0x1111c0  sll         $v0, $s1, 7
    ctx->pc = 0x34a690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x34a694: 0x0  nop
    ctx->pc = 0x34a694u;
    // NOP
label_34a698:
    // 0x34a698: 0x26a3b610  addiu       $v1, $s5, -0x49F0
    ctx->pc = 0x34a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
    // 0x34a69c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x34a69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a6a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a6a4: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x34a6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x34a6a8: 0x144402a6  bne         $v0, $a0, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x34A6A8u;
    {
        const bool branch_taken_0x34a6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6A8u;
        // 0x34a6ac: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6a8) {
            ctx->pc = 0x34B144u;
            goto label_34b144;
        }
    }
    ctx->pc = 0x34A6B0u;
    // 0x34a6b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a6b4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x34a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a6b8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a6bc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x34a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a6c0: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x34a6c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34a6c4: 0x92030074  lbu         $v1, 0x74($s0)
    ctx->pc = 0x34a6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x34a6c8: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x34a6c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x34a6cc: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x34a6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34a6d0: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x34a6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x34a6d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a6d8: 0x0  nop
    ctx->pc = 0x34a6d8u;
    // NOP
    // 0x34a6dc: 0x0  nop
    ctx->pc = 0x34a6dcu;
    // NOP
    // 0x34a6e0: 0x46000584  c1          0x584
    ctx->pc = 0x34a6e0u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a6e4: 0x10620154  beq         $v1, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x34A6E4u;
    {
        const bool branch_taken_0x34a6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6E4u;
        // 0x34a6e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6e4) {
            ctx->pc = 0x34AC38u;
            goto label_34ac38;
        }
    }
    ctx->pc = 0x34A6ECu;
    // 0x34a6ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A6ECu;
    {
        const bool branch_taken_0x34a6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6ec) {
            ctx->pc = 0x34A6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A6ECu;
            // 0x34a6f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A704u;
            goto label_34a704;
        }
    }
    ctx->pc = 0x34A6F4u;
    // 0x34a6f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A6F4u;
    {
        const bool branch_taken_0x34a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6f4) {
            ctx->pc = 0x34A714u;
            goto label_34a714;
        }
    }
    ctx->pc = 0x34A6FCu;
    // 0x34a6fc: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x34A6FCu;
    {
        const bool branch_taken_0x34a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6FCu;
        // 0x34a700: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6fc) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A704u;
label_34a704:
    // 0x34a704: 0x106201ba  beq         $v1, $v0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x34A704u;
    {
        const bool branch_taken_0x34a704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A704u;
        // 0x34a708: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a704) {
            ctx->pc = 0x34ADF0u;
            goto label_34adf0;
        }
    }
    ctx->pc = 0x34A70Cu;
    // 0x34a70c: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x34A70Cu;
    {
        const bool branch_taken_0x34a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A70Cu;
        // 0x34a710: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a70c) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A714u;
label_34a714:
    // 0x34a714: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x34a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34a718: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a71c: 0x0  nop
    ctx->pc = 0x34a71cu;
    // NOP
    // 0x34a720: 0x4604b034  c.lt.s      $f22, $f4
    ctx->pc = 0x34a720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a724: 0x0  nop
    ctx->pc = 0x34a724u;
    // NOP
    // 0x34a728: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x34A728u;
    {
        const bool branch_taken_0x34a728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A728u;
        // 0x34a72c: 0x8ec2bd50  lw          $v0, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a728) {
            ctx->pc = 0x34A860u;
            goto label_34a860;
        }
    }
    ctx->pc = 0x34A730u;
    // 0x34a730: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34a730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a734: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x34a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a738: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a73c: 0x0  nop
    ctx->pc = 0x34a73cu;
    // NOP
    // 0x34a740: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x34A740u;
    {
        const bool branch_taken_0x34a740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a740) {
            ctx->pc = 0x34A860u;
            goto label_34a860;
        }
    }
    ctx->pc = 0x34A748u;
    // 0x34a748: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34a748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a74c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a750: 0x0  nop
    ctx->pc = 0x34a750u;
    // NOP
    // 0x34a754: 0x0  nop
    ctx->pc = 0x34a754u;
    // NOP
    // 0x34a758: 0x46162103  div.s       $f4, $f4, $f22
    ctx->pc = 0x34a758u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[22]); }
    // 0x34a75c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x34a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a760: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x34a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a764: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x34a764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34a768: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x34a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a770: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x34a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34a774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a778: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a77c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34a780: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x34a780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a784: 0x46042d42  mul.s       $f21, $f5, $f4
    ctx->pc = 0x34a784u;
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x34a788: 0x46043502  mul.s       $f20, $f6, $f4
    ctx->pc = 0x34a788u;
    ctx->f[20] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x34a78c: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x34a78cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x34a790: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x34a790u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x34a794: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34a794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34a798: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x34a798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34a79c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x34a79cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34a7a0: 0xc0d2c64  jal         func_34B190
    ctx->pc = 0x34A7A0u;
    SET_GPR_U32(ctx, 31, 0x34A7A8u);
    ctx->pc = 0x34A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A7A0u;
    // 0x34a7a4: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B190u, 0x34A7A0u, 0x34A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A7A8u;
label_34a7a8:
    // 0x34a7a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x34a7ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a7b0: 0x50400215  beql        $v0, $zero, . + 4 + (0x215 << 2)
    ctx->pc = 0x34A7B0u;
    {
        const bool branch_taken_0x34a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a7b0) {
            ctx->pc = 0x34A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A7B0u;
            // 0x34a7b4: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A7B8u;
    // 0x34a7b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34a7b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a7bc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a7c0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x34a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7c8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x34a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a7cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34a7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7d0: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x34a7d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x34a7d4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x34a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a7d8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x34a7d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x34a7dc: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x34a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a7e0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34a7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34a7e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a7e8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x34a7e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34a7ec: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34a7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34a7f0: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34a7f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a7f4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x34a7f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34a7f8: 0xc0d2c64  jal         func_34B190
    ctx->pc = 0x34A7F8u;
    SET_GPR_U32(ctx, 31, 0x34A800u);
    ctx->pc = 0x34A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A7F8u;
    // 0x34a7fc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B190u, 0x34A7F8u, 0x34A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A800u;
label_34a800:
    // 0x34a800: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x34a804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a808: 0x504001ff  beql        $v0, $zero, . + 4 + (0x1FF << 2)
    ctx->pc = 0x34A808u;
    {
        const bool branch_taken_0x34a808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a808) {
            ctx->pc = 0x34A80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A808u;
            // 0x34a80c: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A810u;
    // 0x34a810: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34a810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a814: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a818: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x34a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34a81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a820: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x34a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a828: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x34a828u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x34a82c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x34a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a830: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x34a830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x34a834: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x34a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a838: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34a83c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a840: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x34a840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34a844: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34a844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34a848: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34a848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a84c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x34a84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34a850: 0xc0d2c64  jal         func_34B190
    ctx->pc = 0x34A850u;
    SET_GPR_U32(ctx, 31, 0x34A858u);
    ctx->pc = 0x34A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A850u;
    // 0x34a854: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B190u, 0x34A850u, 0x34A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A858u;
label_34a858:
    // 0x34a858: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x34A858u;
    {
        const bool branch_taken_0x34a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A858u;
        // 0x34a85c: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a858) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A860u;
label_34a860:
    // 0x34a860: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A860u;
    SET_GPR_U32(ctx, 31, 0x34A868u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A860u, 0x34A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A868u;
label_34a868:
    // 0x34a868: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x34a868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x34a86c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x34a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x34a870: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A870u;
    {
        const bool branch_taken_0x34a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A870u;
        // 0x34a874: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a870) {
            ctx->pc = 0x34A884u;
            goto label_34a884;
        }
    }
    ctx->pc = 0x34A878u;
    // 0x34a878: 0x90622b94  lbu         $v0, 0x2B94($v1)
    ctx->pc = 0x34a878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11156)));
    // 0x34a87c: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x34A87Cu;
    {
        const bool branch_taken_0x34a87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A87Cu;
        // 0x34a880: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a87c) {
            ctx->pc = 0x34B004u;
            goto label_34b004;
        }
    }
    ctx->pc = 0x34A884u;
label_34a884:
    // 0x34a884: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34a884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34a888: 0x90432ce9  lbu         $v1, 0x2CE9($v0)
    ctx->pc = 0x34a888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x482CE9u));
    // 0x34a88c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x34A88Cu;
    {
        const bool branch_taken_0x34a88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A88Cu;
        // 0x34a890: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a88c) {
            ctx->pc = 0x34A9A0u;
            goto label_34a9a0;
        }
    }
    ctx->pc = 0x34A894u;
    // 0x34a894: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x34a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34a898: 0xc445be10  lwc1        $f5, -0x41F0($v0)
    ctx->pc = 0x34a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34a89c: 0x2442be10  addiu       $v0, $v0, -0x41F0
    ctx->pc = 0x34a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x34a8a0: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x34a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34a8a4: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x34a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x34a8a8: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x34a8a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x34a8ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x34a8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x34a8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34a8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34a8b4: 0x46083801  sub.s       $f0, $f7, $f8
    ctx->pc = 0x34a8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x34a8b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34a8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34a8bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34a8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34a8c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34a8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a8c4: 0x0  nop
    ctx->pc = 0x34a8c4u;
    // NOP
    // 0x34a8c8: 0x0  nop
    ctx->pc = 0x34a8c8u;
    // NOP
    // 0x34a8cc: 0x46010044  c1          0x10044
    ctx->pc = 0x34a8ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a8d0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34a8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a8d4: 0x0  nop
    ctx->pc = 0x34a8d4u;
    // NOP
    // 0x34a8d8: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x34A8D8u;
    {
        const bool branch_taken_0x34a8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a8d8) {
            ctx->pc = 0x34A9A0u;
            goto label_34a9a0;
        }
    }
    ctx->pc = 0x34A8E0u;
    // 0x34a8e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a8e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a8e8: 0x0  nop
    ctx->pc = 0x34a8e8u;
    // NOP
    // 0x34a8ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a8f0: 0x0  nop
    ctx->pc = 0x34a8f0u;
    // NOP
    // 0x34a8f4: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
    ctx->pc = 0x34A8F4u;
    {
        const bool branch_taken_0x34a8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8F4u;
        // 0x34a8f8: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8f4) {
            ctx->pc = 0x34B004u;
            goto label_34b004;
        }
    }
    ctx->pc = 0x34A8FCu;
    // 0x34a8fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34a8fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a900: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a904: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x34a904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x34a908: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34a908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34a90c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a910: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x34a910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x34a914: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34a914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a918: 0x0  nop
    ctx->pc = 0x34a918u;
    // NOP
    // 0x34a91c: 0x0  nop
    ctx->pc = 0x34a91cu;
    // NOP
    // 0x34a920: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x34a920u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34a924: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x34a924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a928: 0x0  nop
    ctx->pc = 0x34a928u;
    // NOP
    // 0x34a92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34A92Cu;
    {
        const bool branch_taken_0x34a92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A92Cu;
        // 0x34a930: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a92c) {
            ctx->pc = 0x34A938u;
            goto label_34a938;
        }
    }
    ctx->pc = 0x34A934u;
    // 0x34a934: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x34a934u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_34a938:
    // 0x34a938: 0x46062801  sub.s       $f0, $f5, $f6
    ctx->pc = 0x34a938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x34a93c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x34a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a940: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x34a940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a944: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x34a944u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x34a948: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34a948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34a94c: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x34a94cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a950: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34A950u;
    {
        const bool branch_taken_0x34a950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A950u;
        // 0x34a954: 0xe7a40010  swc1        $f4, 0x10($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a950) {
            ctx->pc = 0x34A95Cu;
            goto label_34a95c;
        }
    }
    ctx->pc = 0x34A958u;
    // 0x34a958: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x34a958u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
label_34a95c:
    // 0x34a95c: 0x46074041  sub.s       $f1, $f8, $f7
    ctx->pc = 0x34a95cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x34a960: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x34a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a964: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x34a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a96c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x34a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34a970: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34a974: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x34a974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34a978: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x34a978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34a97c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x34a97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34a980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34a984: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34a984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a98c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x34a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34a990: 0xc0d2c64  jal         func_34B190
    ctx->pc = 0x34A990u;
    SET_GPR_U32(ctx, 31, 0x34A998u);
    ctx->pc = 0x34A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A990u;
    // 0x34a994: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B190u, 0x34A990u, 0x34A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A998u;
label_34a998:
    // 0x34a998: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x34A998u;
    {
        const bool branch_taken_0x34a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A998u;
        // 0x34a99c: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a998) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34A9A0u;
label_34a9a0:
    // 0x34a9a0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A9A0u;
    SET_GPR_U32(ctx, 31, 0x34A9A8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A9A0u, 0x34A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9A8u;
label_34a9a8:
    // 0x34a9a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34a9ac: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x34A9ACu;
    {
        const bool branch_taken_0x34a9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9ACu;
        // 0x34a9b0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a9ac) {
            ctx->pc = 0x34AA7Cu;
            goto label_34aa7c;
        }
    }
    ctx->pc = 0x34A9B4u;
    // 0x34a9b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34a9b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a9b8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34a9bc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A9BCu;
    SET_GPR_U32(ctx, 31, 0x34A9C4u);
    ctx->pc = 0x34A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9BCu;
    // 0x34a9c0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A9BCu, 0x34A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9C4u;
label_34a9c4:
    // 0x34a9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a9c8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x34a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x34a9cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34a9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34a9d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34a9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34a9d4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34a9d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x34a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a9e0: 0x0  nop
    ctx->pc = 0x34a9e0u;
    // NOP
    // 0x34a9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34a9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34a9e8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x34a9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x34a9ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34a9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34a9f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34a9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a9f4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34A9F4u;
    SET_GPR_U32(ctx, 31, 0x34A9FCu);
    ctx->pc = 0x34A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9F4u;
    // 0x34a9f8: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34A9F4u, 0x34A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9FCu;
label_34a9fc:
    // 0x34a9fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34aa00: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x34aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34aa04: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34aa08: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x34aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34aa0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34aa10: 0x0  nop
    ctx->pc = 0x34aa10u;
    // NOP
    // 0x34aa14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34aa14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34aa18: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x34aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aa1c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aa20: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x34aa20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x34aa24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x34aa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34aa28: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34aa2c: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x34aa2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x34aa30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34aa30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34aa34: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x34aa34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x34aa38: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34aa38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34aa3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34aa3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34aa40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34aa40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34aa44: 0x0  nop
    ctx->pc = 0x34aa44u;
    // NOP
    // 0x34aa48: 0x0  nop
    ctx->pc = 0x34aa48u;
    // NOP
    // 0x34aa4c: 0x46000004  c1          0x4
    ctx->pc = 0x34aa4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34aa50: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x34aa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aa54: 0x0  nop
    ctx->pc = 0x34aa54u;
    // NOP
    // 0x34aa58: 0x4500016a  bc1f        . + 4 + (0x16A << 2)
    ctx->pc = 0x34AA58u;
    {
        const bool branch_taken_0x34aa58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA58u;
        // 0x34aa5c: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa58) {
            ctx->pc = 0x34B004u;
            goto label_34b004;
        }
    }
    ctx->pc = 0x34AA60u;
    // 0x34aa60: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x34aa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa68: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x34aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aa6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34aa70: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x34aa70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34aa74: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x34AA74u;
    {
        const bool branch_taken_0x34aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA74u;
        // 0x34aa78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa74) {
            ctx->pc = 0x34AC20u;
            goto label_34ac20;
        }
    }
    ctx->pc = 0x34AA7Cu;
label_34aa7c:
    // 0x34aa7c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34aa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34aa80: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x34aa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34aa84: 0x2445b610  addiu       $a1, $v0, -0x49F0
    ctx->pc = 0x34aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x34aa88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34aa8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa90: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x34aa90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34aa94: 0x0  nop
    ctx->pc = 0x34aa94u;
    // NOP
label_34aa98:
    // 0x34aa98: 0x50910017  beql        $a0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34AA98u;
    {
        const bool branch_taken_0x34aa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x34aa98) {
            ctx->pc = 0x34AA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AA98u;
            // 0x34aa9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AAF8u;
            goto label_34aaf8;
        }
    }
    ctx->pc = 0x34AAA0u;
    // 0x34aaa0: 0x90a20075  lbu         $v0, 0x75($a1)
    ctx->pc = 0x34aaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 117)));
    // 0x34aaa4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x34AAA4u;
    {
        const bool branch_taken_0x34aaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aaa4) {
            ctx->pc = 0x34AAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AAA4u;
            // 0x34aaa8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AAF8u;
            goto label_34aaf8;
        }
    }
    ctx->pc = 0x34AAACu;
    // 0x34aaac: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x34aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aab0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x34aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34aab4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x34aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aab8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x34aab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aabc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34aabcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34aac0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34aac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34aac4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34aac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34aac8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34aac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34aacc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34aaccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34aad0: 0x0  nop
    ctx->pc = 0x34aad0u;
    // NOP
    // 0x34aad4: 0x0  nop
    ctx->pc = 0x34aad4u;
    // NOP
    // 0x34aad8: 0x46010044  c1          0x10044
    ctx->pc = 0x34aad8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34aadc: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x34aadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aae0: 0x0  nop
    ctx->pc = 0x34aae0u;
    // NOP
    // 0x34aae4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34AAE4u;
    {
        const bool branch_taken_0x34aae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aae4) {
            ctx->pc = 0x34AAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AAE4u;
            // 0x34aae8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AAF8u;
            goto label_34aaf8;
        }
    }
    ctx->pc = 0x34AAECu;
    // 0x34aaec: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x34aaecu;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x34aaf0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x34aaf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aaf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34aaf8:
    // 0x34aaf8: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x34aaf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34aafc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x34AAFCu;
    {
        const bool branch_taken_0x34aafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AAFCu;
        // 0x34ab00: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aafc) {
            ctx->pc = 0x34AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34aa98;
        }
    }
    ctx->pc = 0x34AB04u;
    // 0x34ab04: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x34ab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x34ab08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ab08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ab0c: 0x0  nop
    ctx->pc = 0x34ab0cu;
    // NOP
    // 0x34ab10: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x34ab10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab14: 0x0  nop
    ctx->pc = 0x34ab14u;
    // NOP
    // 0x34ab18: 0x4502013b  bc1fl       . + 4 + (0x13B << 2)
    ctx->pc = 0x34AB18u;
    {
        const bool branch_taken_0x34ab18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ab18) {
            ctx->pc = 0x34AB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AB18u;
            // 0x34ab1c: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34AB20u;
    // 0x34ab20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ab24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ab28: 0x0  nop
    ctx->pc = 0x34ab28u;
    // NOP
    // 0x34ab2c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x34ab2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab30: 0x0  nop
    ctx->pc = 0x34ab30u;
    // NOP
    // 0x34ab34: 0x45020134  bc1fl       . + 4 + (0x134 << 2)
    ctx->pc = 0x34AB34u;
    {
        const bool branch_taken_0x34ab34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ab34) {
            ctx->pc = 0x34AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AB34u;
            // 0x34ab38: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34AB3Cu;
    // 0x34ab3c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34ab3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34ab40: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ab44: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x34ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x34ab48: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34ab48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34ab4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ab4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ab50: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x34ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x34ab54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34ab54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34ab58: 0x0  nop
    ctx->pc = 0x34ab58u;
    // NOP
    // 0x34ab5c: 0x0  nop
    ctx->pc = 0x34ab5cu;
    // NOP
    // 0x34ab60: 0x460500c3  div.s       $f3, $f0, $f5
    ctx->pc = 0x34ab60u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x34ab64: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x34ab64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab68: 0x0  nop
    ctx->pc = 0x34ab68u;
    // NOP
    // 0x34ab6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34AB6Cu;
    {
        const bool branch_taken_0x34ab6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB6Cu;
        // 0x34ab70: 0x46002186  mov.s       $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab6c) {
            ctx->pc = 0x34AB78u;
            goto label_34ab78;
        }
    }
    ctx->pc = 0x34AB74u;
    // 0x34ab74: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x34ab74u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
label_34ab78:
    // 0x34ab78: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x34ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x34ab7c: 0x26a2b610  addiu       $v0, $s5, -0x49F0
    ctx->pc = 0x34ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
    // 0x34ab80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ab84: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x34ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ab88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x34ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ab8c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x34ab8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab90: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x34ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ab94: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x34ab94u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x34ab98: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34ab98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34ab9c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x34ab9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x34aba0: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x34aba0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34aba4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34ABA4u;
    {
        const bool branch_taken_0x34aba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABA4u;
        // 0x34aba8: 0xe7a50010  swc1        $f5, 0x10($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aba4) {
            ctx->pc = 0x34ABB0u;
            goto label_34abb0;
        }
    }
    ctx->pc = 0x34ABACu;
    // 0x34abac: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x34abacu;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
label_34abb0:
    // 0x34abb0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x34abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34abb4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x34abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34abb8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x34abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34abbc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x34abbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x34abc0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x34abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34abc4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34abc8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x34abc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x34abcc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x34abccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34abd0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34abd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34abd4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x34abd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x34abd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34abd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34abdc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x34abdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x34abe0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34abe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34abe4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34abe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34abe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34abe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34abec: 0x0  nop
    ctx->pc = 0x34abecu;
    // NOP
    // 0x34abf0: 0x0  nop
    ctx->pc = 0x34abf0u;
    // NOP
    // 0x34abf4: 0x46000004  c1          0x4
    ctx->pc = 0x34abf4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34abf8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x34abf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34abfc: 0x0  nop
    ctx->pc = 0x34abfcu;
    // NOP
    // 0x34ac00: 0x45000100  bc1f        . + 4 + (0x100 << 2)
    ctx->pc = 0x34AC00u;
    {
        const bool branch_taken_0x34ac00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC00u;
        // 0x34ac04: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac00) {
            ctx->pc = 0x34B004u;
            goto label_34b004;
        }
    }
    ctx->pc = 0x34AC08u;
    // 0x34ac08: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x34ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ac0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac10: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x34ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ac14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ac18: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x34ac18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34ac1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34ac20:
    // 0x34ac20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34ac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34ac24: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x34ac24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34ac28: 0xc0d2c64  jal         func_34B190
    ctx->pc = 0x34AC28u;
    SET_GPR_U32(ctx, 31, 0x34AC30u);
    ctx->pc = 0x34AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC28u;
    // 0x34ac2c: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B190u, 0x34AC28u, 0x34AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC30u;
label_34ac30:
    // 0x34ac30: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x34AC30u;
    {
        const bool branch_taken_0x34ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC30u;
        // 0x34ac34: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac30) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34AC38u;
label_34ac38:
    // 0x34ac38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34ac3c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x34ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x34ac40: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x34ac44: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x34ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ac48: 0x2c8307d1  sltiu       $v1, $a0, 0x7D1
    ctx->pc = 0x34ac48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2001) ? 1 : 0);
    // 0x34ac4c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x34AC4Cu;
    {
        const bool branch_taken_0x34ac4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC4Cu;
        // 0x34ac50: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac4c) {
            ctx->pc = 0x34AE08u;
            goto label_34ae08;
        }
    }
    ctx->pc = 0x34AC54u;
    // 0x34ac54: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x34ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x34ac58: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34ac58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ac5c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34ac5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34ac60: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34ac60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ac64: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ac68: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x34ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ac6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac70: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ac74: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ac78: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x34ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ac7c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x34ac7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34ac80: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x34ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34ac84: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x34ac84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34ac88: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AC88u;
    {
        const bool branch_taken_0x34ac88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC88u;
        // 0x34ac8c: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac88) {
            ctx->pc = 0x34ACA4u;
            goto label_34aca4;
        }
    }
    ctx->pc = 0x34AC90u;
    // 0x34ac90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34ac90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac94: 0x0  nop
    ctx->pc = 0x34ac94u;
    // NOP
    // 0x34ac98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ac98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ac9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AC9Cu;
    {
        const bool branch_taken_0x34ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC9Cu;
        // 0x34aca0: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac9c) {
            ctx->pc = 0x34ACC4u;
            goto label_34acc4;
        }
    }
    ctx->pc = 0x34ACA4u;
label_34aca4:
    // 0x34aca4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34aca8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34acac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34acacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34acb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34acb4: 0x0  nop
    ctx->pc = 0x34acb4u;
    // NOP
    // 0x34acb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34acb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34acbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34acbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34acc0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x34acc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_34acc4:
    // 0x34acc4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x34acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34acc8: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x34acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34accc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x34acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34acd0: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x34acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34acd4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34acd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34acd8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34acd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34acdc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34acdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34ace0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34ace0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34ace4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x34ace4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34ace8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x34ace8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34acec: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x34acecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34acf0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34acf4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34acf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34acf8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x34acf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34acfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34acfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ad00: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ad04: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ad08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad0c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ad10: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x34ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ad14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x34ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34ad18: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x34ad18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34ad1c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34ad1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34ad20: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34ad20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34ad24: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x34ad24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34ad28: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ad2c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x34ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ad30: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x34ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34ad34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34ad38: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AD38u;
    {
        const bool branch_taken_0x34ad38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD38u;
        // 0x34ad3c: 0x461700c2  mul.s       $f3, $f0, $f23 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad38) {
            ctx->pc = 0x34AD54u;
            goto label_34ad54;
        }
    }
    ctx->pc = 0x34AD40u;
    // 0x34ad40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34ad40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ad44: 0x0  nop
    ctx->pc = 0x34ad44u;
    // NOP
    // 0x34ad48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ad48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ad4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AD4Cu;
    {
        const bool branch_taken_0x34ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD4Cu;
        // 0x34ad50: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad4c) {
            ctx->pc = 0x34AD74u;
            goto label_34ad74;
        }
    }
    ctx->pc = 0x34AD54u;
label_34ad54:
    // 0x34ad54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34ad58: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34ad5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ad60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ad60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ad64: 0x0  nop
    ctx->pc = 0x34ad64u;
    // NOP
    // 0x34ad68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ad68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ad6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ad6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ad70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34ad70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_34ad74:
    // 0x34ad74: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x34ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad78: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x34ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ad7c: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x34ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ad80: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34ad80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34ad84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34ad84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34ad88: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34ad88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34ad8c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AD8Cu;
    {
        const bool branch_taken_0x34ad8c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD8Cu;
        // 0x34ad90: 0x461708c2  mul.s       $f3, $f1, $f23 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad8c) {
            ctx->pc = 0x34ADA8u;
            goto label_34ada8;
        }
    }
    ctx->pc = 0x34AD94u;
    // 0x34ad94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34ad94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ad98: 0x0  nop
    ctx->pc = 0x34ad98u;
    // NOP
    // 0x34ad9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34ad9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34ada0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34ADA0u;
    {
        const bool branch_taken_0x34ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADA0u;
        // 0x34ada4: 0x460118c2  mul.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ada0) {
            ctx->pc = 0x34ADC8u;
            goto label_34adc8;
        }
    }
    ctx->pc = 0x34ADA8u;
label_34ada8:
    // 0x34ada8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34adac: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34adacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34adb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34adb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34adb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34adb8: 0x0  nop
    ctx->pc = 0x34adb8u;
    // NOP
    // 0x34adbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34adbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34adc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34adc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34adc4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x34adc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_34adc8:
    // 0x34adc8: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x34adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34adcc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x34adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34add0: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x34add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34add4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34add4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34add8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34add8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34addc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34addcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34ade0: 0x4810077  bgez        $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x34ADE0u;
    {
        const bool branch_taken_0x34ade0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x34ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADE0u;
        // 0x34ade4: 0x46170802  mul.s       $f0, $f1, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ade0) {
            ctx->pc = 0x34AFC0u;
            goto label_34afc0;
        }
    }
    ctx->pc = 0x34ADE8u;
    // 0x34ade8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x34ADE8u;
    {
        const bool branch_taken_0x34ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADE8u;
        // 0x34adec: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ade8) {
            ctx->pc = 0x34AFD8u;
            goto label_34afd8;
        }
    }
    ctx->pc = 0x34ADF0u;
label_34adf0:
    // 0x34adf0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x34adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x34adf4: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x34adf8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x34adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34adfc: 0x2c830259  sltiu       $v1, $a0, 0x259
    ctx->pc = 0x34adfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)601) ? 1 : 0);
    // 0x34ae00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AE00u;
    {
        const bool branch_taken_0x34ae00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE00u;
        // 0x34ae04: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae00) {
            ctx->pc = 0x34AE20u;
            goto label_34ae20;
        }
    }
    ctx->pc = 0x34AE08u;
label_34ae08:
    // 0x34ae08: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x34ae08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ae0c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x34ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x34ae10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34ae10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ae14: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ae18: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x34AE18u;
    {
        const bool branch_taken_0x34ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE18u;
        // 0x34ae1c: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae18) {
            ctx->pc = 0x34B008u;
            goto label_34b008;
        }
    }
    ctx->pc = 0x34AE20u;
label_34ae20:
    // 0x34ae20: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x34ae24: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34ae24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ae28: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34ae28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34ae2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34ae2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ae30: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ae34: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x34ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ae38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ae3c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ae40: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x34ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ae44: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x34ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ae48: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x34ae48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34ae4c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x34ae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34ae50: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x34ae50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34ae54: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AE54u;
    {
        const bool branch_taken_0x34ae54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE54u;
        // 0x34ae58: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae54) {
            ctx->pc = 0x34AE70u;
            goto label_34ae70;
        }
    }
    ctx->pc = 0x34AE5Cu;
    // 0x34ae5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34ae5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ae60: 0x0  nop
    ctx->pc = 0x34ae60u;
    // NOP
    // 0x34ae64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34ae64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34ae68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34AE68u;
    {
        const bool branch_taken_0x34ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae68) {
            ctx->pc = 0x34AE8Cu;
            goto label_34ae8c;
        }
    }
    ctx->pc = 0x34AE70u;
label_34ae70:
    // 0x34ae70: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34ae74: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34ae78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ae7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34ae7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ae80: 0x0  nop
    ctx->pc = 0x34ae80u;
    // NOP
    // 0x34ae84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34ae84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34ae88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34ae88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34ae8c:
    // 0x34ae8c: 0x3c013ada  lui         $at, 0x3ADA
    ctx->pc = 0x34ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15066 << 16));
    // 0x34ae90: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x34ae90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
    // 0x34ae94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ae94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ae98: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x34ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ae9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34ae9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34aea0: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x34aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34aea4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x34aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aea8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x34aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34aeac: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34aeacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34aeb0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34aeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34aeb4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34aeb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34aeb8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34aeb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34aebc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x34aebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34aec0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x34aec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34aec4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x34aec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34aec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34aecc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34aeccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34aed0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x34aed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34aed4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34aed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34aed8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34aedc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aee0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aee4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aee8: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x34aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34aeec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x34aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34aef0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x34aef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34aef4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34aef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34aef8: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x34aef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34aefc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x34aefcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34af00: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34af00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34af04: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x34af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af08: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x34af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34af0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34af0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34af10: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AF10u;
    {
        const bool branch_taken_0x34af10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF10u;
        // 0x34af14: 0x461700c2  mul.s       $f3, $f0, $f23 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af10) {
            ctx->pc = 0x34AF2Cu;
            goto label_34af2c;
        }
    }
    ctx->pc = 0x34AF18u;
    // 0x34af18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34af18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34af1c: 0x0  nop
    ctx->pc = 0x34af1cu;
    // NOP
    // 0x34af20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34af20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34af24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AF24u;
    {
        const bool branch_taken_0x34af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF24u;
        // 0x34af28: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af24) {
            ctx->pc = 0x34AF4Cu;
            goto label_34af4c;
        }
    }
    ctx->pc = 0x34AF2Cu;
label_34af2c:
    // 0x34af2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34af30: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34af30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34af34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34af38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34af38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34af3c: 0x0  nop
    ctx->pc = 0x34af3cu;
    // NOP
    // 0x34af40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34af40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34af44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34af44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34af48: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34af48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_34af4c:
    // 0x34af4c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x34af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34af50: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x34af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34af54: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x34af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34af58: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34af58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34af5c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34af5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34af60: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34af64: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AF64u;
    {
        const bool branch_taken_0x34af64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF64u;
        // 0x34af68: 0x461708c2  mul.s       $f3, $f1, $f23 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af64) {
            ctx->pc = 0x34AF80u;
            goto label_34af80;
        }
    }
    ctx->pc = 0x34AF6Cu;
    // 0x34af6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34af6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34af70: 0x0  nop
    ctx->pc = 0x34af70u;
    // NOP
    // 0x34af74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34af74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34af78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AF78u;
    {
        const bool branch_taken_0x34af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF78u;
        // 0x34af7c: 0x460118c2  mul.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af78) {
            ctx->pc = 0x34AFA0u;
            goto label_34afa0;
        }
    }
    ctx->pc = 0x34AF80u;
label_34af80:
    // 0x34af80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34af84: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34af88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34af8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34af8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34af90: 0x0  nop
    ctx->pc = 0x34af90u;
    // NOP
    // 0x34af94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34af94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34af98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34af98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34af9c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x34af9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_34afa0:
    // 0x34afa0: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x34afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34afa4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x34afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34afa8: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x34afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34afac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34afb0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34afb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34afb4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34afb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34afb8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AFB8u;
    {
        const bool branch_taken_0x34afb8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFB8u;
        // 0x34afbc: 0x46170802  mul.s       $f0, $f1, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afb8) {
            ctx->pc = 0x34AFD4u;
            goto label_34afd4;
        }
    }
    ctx->pc = 0x34AFC0u;
label_34afc0:
    // 0x34afc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34afc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34afc4: 0x0  nop
    ctx->pc = 0x34afc4u;
    // NOP
    // 0x34afc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34afc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34afcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AFCCu;
    {
        const bool branch_taken_0x34afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFCCu;
        // 0x34afd0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afcc) {
            ctx->pc = 0x34AFF4u;
            goto label_34aff4;
        }
    }
    ctx->pc = 0x34AFD4u;
label_34afd4:
    // 0x34afd4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_34afd8:
    // 0x34afd8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34afdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34afe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34afe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34afe4: 0x0  nop
    ctx->pc = 0x34afe4u;
    // NOP
    // 0x34afe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34afe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34afec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34afecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34aff0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34aff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_34aff4:
    // 0x34aff4: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x34aff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34aff8: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x34aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34affc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34affcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b000: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x34b000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_34b004:
    // 0x34b004: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x34b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b008:
    // 0x34b008: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x34b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b00c: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x34b00cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x34b010: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x34b010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x34b014: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x34b014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x34b018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34b018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b01c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34b01cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b020: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34b020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b024: 0x0  nop
    ctx->pc = 0x34b024u;
    // NOP
    // 0x34b028: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34B028u;
    {
        const bool branch_taken_0x34b028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B028u;
        // 0x34b02c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b028) {
            ctx->pc = 0x34B06Cu;
            goto label_34b06c;
        }
    }
    ctx->pc = 0x34B030u;
    // 0x34b030: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x34b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x34b034: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x34b034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x34b038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b03c: 0x0  nop
    ctx->pc = 0x34b03cu;
    // NOP
    // 0x34b040: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34b040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b044: 0x0  nop
    ctx->pc = 0x34b044u;
    // NOP
label_34b048:
    // 0x34b048: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34b048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b04c: 0x0  nop
    ctx->pc = 0x34b04cu;
    // NOP
    // 0x34b050: 0x0  nop
    ctx->pc = 0x34b050u;
    // NOP
    // 0x34b054: 0x0  nop
    ctx->pc = 0x34b054u;
    // NOP
    // 0x34b058: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x34B058u;
    {
        const bool branch_taken_0x34b058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b058) {
            ctx->pc = 0x34B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B058u;
            // 0x34b05c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b048;
        }
    }
    ctx->pc = 0x34B060u;
    // 0x34b060: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x34b060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x34b064: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x34b064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x34b068: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34b068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34b06c:
    // 0x34b06c: 0x0  nop
    ctx->pc = 0x34b06cu;
    // NOP
    // 0x34b070: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34b070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b074: 0x0  nop
    ctx->pc = 0x34b074u;
    // NOP
    // 0x34b078: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x34B078u;
    {
        const bool branch_taken_0x34b078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b078) {
            ctx->pc = 0x34B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B078u;
            // 0x34b07c: 0x46000805  abs.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B0B4u;
            goto label_34b0b4;
        }
    }
    ctx->pc = 0x34B080u;
    // 0x34b080: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x34b084: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x34b084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x34b088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b08c: 0x0  nop
    ctx->pc = 0x34b08cu;
    // NOP
    // 0x34b090: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34b090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b094: 0x0  nop
    ctx->pc = 0x34b094u;
    // NOP
label_34b098:
    // 0x34b098: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34b098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b09c: 0x0  nop
    ctx->pc = 0x34b09cu;
    // NOP
    // 0x34b0a0: 0x0  nop
    ctx->pc = 0x34b0a0u;
    // NOP
    // 0x34b0a4: 0x0  nop
    ctx->pc = 0x34b0a4u;
    // NOP
    // 0x34b0a8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x34B0A8u;
    {
        const bool branch_taken_0x34b0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b0a8) {
            ctx->pc = 0x34B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B0A8u;
            // 0x34b0ac: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b098;
        }
    }
    ctx->pc = 0x34B0B0u;
    // 0x34b0b0: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x34b0b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_34b0b4:
    // 0x34b0b4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x34b0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34b0b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34b0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34b0bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34b0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b0c0: 0x0  nop
    ctx->pc = 0x34b0c0u;
    // NOP
    // 0x34b0c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34b0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b0c8: 0x0  nop
    ctx->pc = 0x34b0c8u;
    // NOP
    // 0x34b0cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34B0CCu;
    {
        const bool branch_taken_0x34b0cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b0cc) {
            ctx->pc = 0x34B0DCu;
            goto label_34b0dc;
        }
    }
    ctx->pc = 0x34B0D4u;
    // 0x34b0d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34B0D4u;
    {
        const bool branch_taken_0x34b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0D4u;
        // 0x34b0d8: 0xe6040060  swc1        $f4, 0x60($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0d4) {
            ctx->pc = 0x34B0FCu;
            goto label_34b0fc;
        }
    }
    ctx->pc = 0x34B0DCu;
label_34b0dc:
    // 0x34b0dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b0e0: 0x0  nop
    ctx->pc = 0x34b0e0u;
    // NOP
    // 0x34b0e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b0e8: 0x0  nop
    ctx->pc = 0x34b0e8u;
    // NOP
    // 0x34b0ec: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x34B0ECu;
    {
        const bool branch_taken_0x34b0ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b0ec) {
            ctx->pc = 0x34B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B0ECu;
            // 0x34b0f0: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B0F8u;
            goto label_34b0f8;
        }
    }
    ctx->pc = 0x34B0F4u;
    // 0x34b0f4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x34b0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_34b0f8:
    // 0x34b0f8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x34b0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_34b0fc:
    // 0x34b0fc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x34b0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x34b100: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34b100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34b104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b108: 0x0  nop
    ctx->pc = 0x34b108u;
    // NOP
    // 0x34b10c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x34b10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b110: 0x0  nop
    ctx->pc = 0x34b110u;
    // NOP
    // 0x34b114: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34B114u;
    {
        const bool branch_taken_0x34b114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B114u;
        // 0x34b118: 0x8ec2bd50  lw          $v0, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b114) {
            ctx->pc = 0x34B144u;
            goto label_34b144;
        }
    }
    ctx->pc = 0x34B11Cu;
    // 0x34b11c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34b120: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34b120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34b124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34b124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b128: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b130: 0x0  nop
    ctx->pc = 0x34b130u;
    // NOP
    // 0x34b134: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B134u;
    {
        const bool branch_taken_0x34b134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B134u;
        // 0x34b138: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b134) {
            ctx->pc = 0x34B148u;
            goto label_34b148;
        }
    }
    ctx->pc = 0x34B13Cu;
    // 0x34b13c: 0xc0d2f98  jal         func_34BE60
    ctx->pc = 0x34B13Cu;
    SET_GPR_U32(ctx, 31, 0x34B144u);
    ctx->pc = 0x34B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B13Cu;
    // 0x34b140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE60u, 0x34B13Cu, 0x34B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B144u;
label_34b144:
    // 0x34b144: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x34b144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34b148:
    // 0x34b148: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x34b148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34b14c: 0x5440fd52  bnel        $v0, $zero, . + 4 + (-0x2AE << 2)
    ctx->pc = 0x34B14Cu;
    {
        const bool branch_taken_0x34b14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b14c) {
            ctx->pc = 0x34B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B14Cu;
            // 0x34b150: 0x1111c0  sll         $v0, $s1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a698;
        }
    }
    ctx->pc = 0x34B154u;
    // 0x34b154: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x34b154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34b158: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x34b158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x34b15c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x34b15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34b160: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x34b160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34b164: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x34b164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34b168: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x34b168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34b16c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x34b16cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34b170: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x34b170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x34b174: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x34b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34b178: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x34b178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34b17c: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x34b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34b180: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x34b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34b184: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x34b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34b188: 0x3e00008  jr          $ra
    ctx->pc = 0x34B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B188u;
        // 0x34b18c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B190u;
}
