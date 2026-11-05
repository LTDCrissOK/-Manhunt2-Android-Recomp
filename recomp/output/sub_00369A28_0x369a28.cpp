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

// Function: sub_00369A28
// Address: 0x369a28 - 0x36a078
void sub_00369A28_0x369a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369A28_0x369a28");
#endif

    switch (ctx->pc) {
        case 0x369bb8u: goto label_369bb8;
        case 0x369bdcu: goto label_369bdc;
        case 0x369c00u: goto label_369c00;
        case 0x369c24u: goto label_369c24;
        case 0x369c48u: goto label_369c48;
        case 0x369c6cu: goto label_369c6c;
        case 0x369ce0u: goto label_369ce0;
        case 0x369cecu: goto label_369cec;
        case 0x369d34u: goto label_369d34;
        case 0x369d40u: goto label_369d40;
        case 0x369f1cu: goto label_369f1c;
        case 0x369f40u: goto label_369f40;
        case 0x369f64u: goto label_369f64;
        case 0x369f88u: goto label_369f88;
        case 0x369facu: goto label_369fac;
        case 0x369fd0u: goto label_369fd0;
        case 0x36a00cu: goto label_36a00c;
        case 0x36a014u: goto label_36a014;
        default: break;
    }

    ctx->pc = 0x369a28u;

    // 0x369a28: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x369a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x369a2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x369a30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x369a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x369a34: 0x2443ca60  addiu       $v1, $v0, -0x35A0
    ctx->pc = 0x369a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x369a38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x369a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x369a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x369a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x369a44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x369a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a48: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x369a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x369a4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x369a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a50: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x369a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x369a54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x369a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a58: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x369a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x369a5c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x369a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x369a60: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x369a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x369a64: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x369a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x369a68: 0xe7bf0128  swc1        $f31, 0x128($sp)
    ctx->pc = 0x369a68u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x369a6c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x369a6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a70: 0xe7be0120  swc1        $f30, 0x120($sp)
    ctx->pc = 0x369a70u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x369a74: 0x46008fc6  mov.s       $f31, $f17
    ctx->pc = 0x369a74u;
    ctx->f[31] = FPU_MOV_S(ctx->f[17]);
    // 0x369a78: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x369a78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x369a7c: 0x46008786  mov.s       $f30, $f16
    ctx->pc = 0x369a7cu;
    ctx->f[30] = FPU_MOV_S(ctx->f[16]);
    // 0x369a80: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x369a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x369a84: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x369a84u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x369a88: 0xe7bd0118  swc1        $f29, 0x118($sp)
    ctx->pc = 0x369a88u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x369a8c: 0xe7bc0110  swc1        $f28, 0x110($sp)
    ctx->pc = 0x369a8cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x369a90: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x369a90u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x369a94: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x369a94u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x369a98: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x369a98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x369a9c: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x369a9cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x369aa0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x369aa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x369aa4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x369aa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x369aa8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x369aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x369aac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x369aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x369ab0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x369ab0u;
    { uint32_t bits = FAST_READ32(0x6BCA68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x369ab4: 0xe7b20010  swc1        $f18, 0x10($sp)
    ctx->pc = 0x369ab4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x369ab8: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x369ab8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369abc: 0xe7b30014  swc1        $f19, 0x14($sp)
    ctx->pc = 0x369abcu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x369ac0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x369ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x369ac4: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x369ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x369ac8: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x369ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x369acc: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x369accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x369ad0: 0x8fb40150  lw          $s4, 0x150($sp)
    ctx->pc = 0x369ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x369ad4: 0x8fb50158  lw          $s5, 0x158($sp)
    ctx->pc = 0x369ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x369ad8: 0x8fb60160  lw          $s6, 0x160($sp)
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x369adc: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x369ADCu;
    {
        const bool branch_taken_0x369adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x369AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369ADCu;
        // 0x369ae0: 0x8fb70168  lw          $s7, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369adc) {
            ctx->pc = 0x369C74u;
            goto label_369c74;
        }
    }
    ctx->pc = 0x369AE4u;
    // 0x369ae4: 0x8fc2ca60  lw          $v0, -0x35A0($fp)
    ctx->pc = 0x369ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953568)));
    // 0x369ae8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x369AE8u;
    {
        const bool branch_taken_0x369ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AE8u;
        // 0x369aec: 0x27c2ca60  addiu       $v0, $fp, -0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ae8) {
            ctx->pc = 0x369B54u;
            goto label_369b54;
        }
    }
    ctx->pc = 0x369AF0u;
    // 0x369af0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x369af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x369af4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x369AF4u;
    {
        const bool branch_taken_0x369af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369af4) {
            ctx->pc = 0x369AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369AF4u;
            // 0x369af8: 0x27c2ca60  addiu       $v0, $fp, -0x35A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369B54u;
            goto label_369b54;
        }
    }
    ctx->pc = 0x369AFCu;
    // 0x369afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x369afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x369b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x369b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369b04: 0x0  nop
    ctx->pc = 0x369b04u;
    // NOP
    // 0x369b08: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x369b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369b0c: 0x0  nop
    ctx->pc = 0x369b0cu;
    // NOP
    // 0x369b10: 0x45010141  bc1t        . + 4 + (0x141 << 2)
    ctx->pc = 0x369B10u;
    {
        const bool branch_taken_0x369b10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B10u;
        // 0x369b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b10) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369B18u;
    // 0x369b18: 0x460e6000  add.s       $f0, $f12, $f14
    ctx->pc = 0x369b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x369b1c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x369b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369b20: 0x0  nop
    ctx->pc = 0x369b20u;
    // NOP
    // 0x369b24: 0x4501013c  bc1t        . + 4 + (0x13C << 2)
    ctx->pc = 0x369B24u;
    {
        const bool branch_taken_0x369b24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369b24) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369B2Cu;
    // 0x369b2c: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x369b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369b30: 0x0  nop
    ctx->pc = 0x369b30u;
    // NOP
    // 0x369b34: 0x45030139  bc1tl       . + 4 + (0x139 << 2)
    ctx->pc = 0x369B34u;
    {
        const bool branch_taken_0x369b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369b34) {
            ctx->pc = 0x369B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369B34u;
            // 0x369b38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A01Cu;
            goto label_36a01c;
        }
    }
    ctx->pc = 0x369B3Cu;
    // 0x369b3c: 0x460fb800  add.s       $f0, $f23, $f15
    ctx->pc = 0x369b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x369b40: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x369b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369b44: 0x0  nop
    ctx->pc = 0x369b44u;
    // NOP
    // 0x369b48: 0x45030134  bc1tl       . + 4 + (0x134 << 2)
    ctx->pc = 0x369B48u;
    {
        const bool branch_taken_0x369b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369b48) {
            ctx->pc = 0x369B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369B48u;
            // 0x369b4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A01Cu;
            goto label_36a01c;
        }
    }
    ctx->pc = 0x369B50u;
    // 0x369b50: 0x27c2ca60  addiu       $v0, $fp, -0x35A0
    ctx->pc = 0x369b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
label_369b54:
    // 0x369b54: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x369b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x369b58: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x369B58u;
    {
        const bool branch_taken_0x369b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B58u;
        // 0x369b5c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b58) {
            ctx->pc = 0x369B88u;
            goto label_369b88;
        }
    }
    ctx->pc = 0x369B60u;
    // 0x369b60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x369b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x369b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x369b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369b68: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x369b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369b6c: 0x46017082  mul.s       $f2, $f14, $f1
    ctx->pc = 0x369b6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x369b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x369b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x369b74: 0x46026580  add.s       $f22, $f12, $f2
    ctx->pc = 0x369b74u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x369b78: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x369b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x369b7c: 0x4600b600  add.s       $f24, $f22, $f0
    ctx->pc = 0x369b7cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x369b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x369B80u;
    {
        const bool branch_taken_0x369b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B80u;
        // 0x369b84: 0x4600b541  sub.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b80) {
            ctx->pc = 0x369B90u;
            goto label_369b90;
        }
    }
    ctx->pc = 0x369B88u;
label_369b88:
    // 0x369b88: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x369b88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x369b8c: 0x460eae00  add.s       $f24, $f21, $f14
    ctx->pc = 0x369b8cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[14]);
label_369b90:
    // 0x369b90: 0x460fbd00  add.s       $f20, $f23, $f15
    ctx->pc = 0x369b90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x369b94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x369b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x369b98: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x369b98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x369b9c: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x369b9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x369ba0: 0x4600fbc6  mov.s       $f15, $f31
    ctx->pc = 0x369ba0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[31]);
    // 0x369ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x369ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x369bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bb0: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369BB0u;
    SET_GPR_U32(ctx, 31, 0x369BB8u);
    ctx->pc = 0x369BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BB0u;
    // 0x369bb4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369BB0u, 0x369BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BB8u;
label_369bb8:
    // 0x369bb8: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x369bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369bbc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x369bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x369bc0: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x369bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369bc4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x369bc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x369bc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x369bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369bcc: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x369bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x369bd0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x369bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369bd4: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369BD4u;
    SET_GPR_U32(ctx, 31, 0x369BDCu);
    ctx->pc = 0x369BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BD4u;
    // 0x369bd8: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369BD4u, 0x369BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BDCu;
label_369bdc:
    // 0x369bdc: 0xc7ae0130  lwc1        $f14, 0x130($sp)
    ctx->pc = 0x369bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x369be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369be4: 0xc7af0138  lwc1        $f15, 0x138($sp)
    ctx->pc = 0x369be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369be8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x369be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x369becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bf0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x369bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bf4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x369bf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x369bf8: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369BF8u;
    SET_GPR_U32(ctx, 31, 0x369C00u);
    ctx->pc = 0x369BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BF8u;
    // 0x369bfc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369BF8u, 0x369C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C00u;
label_369c00:
    // 0x369c00: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x369c00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x369c04: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x369c04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x369c08: 0x4600fbc6  mov.s       $f15, $f31
    ctx->pc = 0x369c08u;
    ctx->f[15] = FPU_MOV_S(ctx->f[31]);
    // 0x369c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x369c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x369c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c18: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x369c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c1c: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369C1Cu;
    SET_GPR_U32(ctx, 31, 0x369C24u);
    ctx->pc = 0x369C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C1Cu;
    // 0x369c20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369C1Cu, 0x369C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C24u;
label_369c24:
    // 0x369c24: 0xc7ae0130  lwc1        $f14, 0x130($sp)
    ctx->pc = 0x369c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369c28: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x369c28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x369c2c: 0xc7af0138  lwc1        $f15, 0x138($sp)
    ctx->pc = 0x369c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369c30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x369c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x369c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c38: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x369c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c3c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x369c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c40: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369C40u;
    SET_GPR_U32(ctx, 31, 0x369C48u);
    ctx->pc = 0x369C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C40u;
    // 0x369c44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369C40u, 0x369C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C48u;
label_369c48:
    // 0x369c48: 0xc7ae0140  lwc1        $f14, 0x140($sp)
    ctx->pc = 0x369c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369c4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x369c4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x369c50: 0xc7af0148  lwc1        $f15, 0x148($sp)
    ctx->pc = 0x369c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369c54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x369c54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x369c58: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x369c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x369c5c: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x369c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x369c60: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x369c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x369c64: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369C64u;
    SET_GPR_U32(ctx, 31, 0x369C6Cu);
    ctx->pc = 0x369C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C64u;
    // 0x369c68: 0x8fa70188  lw          $a3, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369C64u, 0x369C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C6Cu;
label_369c6c:
    // 0x369c6c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x369C6Cu;
    {
        const bool branch_taken_0x369c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C6Cu;
        // 0x369c70: 0x27d0ca60  addiu       $s0, $fp, -0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369c6c) {
            ctx->pc = 0x369FD4u;
            goto label_369fd4;
        }
    }
    ctx->pc = 0x369C74u;
label_369c74:
    // 0x369c74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x369c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x369c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x369c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c7c: 0x460f7032  c.eq.s      $f14, $f15
    ctx->pc = 0x369c7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369c80: 0x46007842  mul.s       $f1, $f15, $f0
    ctx->pc = 0x369c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x369c84: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x369c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x369c88: 0x4601be00  add.s       $f24, $f23, $f1
    ctx->pc = 0x369c88u;
    ctx->f[24] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x369c8c: 0x46006580  add.s       $f22, $f12, $f0
    ctx->pc = 0x369c8cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x369c90: 0x4618be41  sub.s       $f25, $f23, $f24
    ctx->pc = 0x369c90u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x369c94: 0x461665c1  sub.s       $f23, $f12, $f22
    ctx->pc = 0x369c94u;
    ctx->f[23] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
    // 0x369c98: 0x4619c842  mul.s       $f1, $f25, $f25
    ctx->pc = 0x369c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x369c9c: 0xe7b90004  swc1        $f25, 0x4($sp)
    ctx->pc = 0x369c9cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x369ca0: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x369ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x369ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369ca8: 0x0  nop
    ctx->pc = 0x369ca8u;
    // NOP
    // 0x369cac: 0x0  nop
    ctx->pc = 0x369cacu;
    // NOP
    // 0x369cb0: 0x46000684  c1          0x684
    ctx->pc = 0x369cb0u;
    ctx->f[26] = FPU_SQRT_S(ctx->f[0]);
    // 0x369cb4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x369CB4u;
    {
        const bool branch_taken_0x369cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x369CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CB4u;
        // 0x369cb8: 0xe7b70000  swc1        $f23, 0x0($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x369cb4) {
            ctx->pc = 0x369D18u;
            goto label_369d18;
        }
    }
    ctx->pc = 0x369CBCu;
    // 0x369cbc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x369cc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x369cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x369cc4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x369cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x369cc8: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x369cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x369ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x369cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369cd0: 0x46141501  sub.s       $f20, $f2, $f20
    ctx->pc = 0x369cd0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x369cd4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x369cd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x369cd8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x369CD8u;
    SET_GPR_U32(ctx, 31, 0x369CE0u);
    ctx->pc = 0x369CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369CD8u;
    // 0x369cdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x369CD8u, 0x369CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369CE0u;
label_369ce0:
    // 0x369ce0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x369ce0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x369ce4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x369CE4u;
    SET_GPR_U32(ctx, 31, 0x369CECu);
    ctx->pc = 0x369CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369CE4u;
    // 0x369ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x369CE4u, 0x369CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369CECu;
label_369cec:
    // 0x369cec: 0x461aad42  mul.s       $f21, $f21, $f26
    ctx->pc = 0x369cecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
    // 0x369cf0: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x369cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x369cf4: 0x4615c740  add.s       $f29, $f24, $f21
    ctx->pc = 0x369cf4u;
    ctx->f[29] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x369cf8: 0x4615b5c1  sub.s       $f23, $f22, $f21
    ctx->pc = 0x369cf8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x369cfc: 0x4615c681  sub.s       $f26, $f24, $f21
    ctx->pc = 0x369cfcu;
    ctx->f[26] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x369d00: 0x4615b640  add.s       $f25, $f22, $f21
    ctx->pc = 0x369d00u;
    ctx->f[25] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x369d04: 0x4600b700  add.s       $f28, $f22, $f0
    ctx->pc = 0x369d04u;
    ctx->f[28] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x369d08: 0x4600c6c0  add.s       $f27, $f24, $f0
    ctx->pc = 0x369d08u;
    ctx->f[27] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x369d0c: 0x4600b501  sub.s       $f20, $f22, $f0
    ctx->pc = 0x369d0cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x369d10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x369D10u;
    {
        const bool branch_taken_0x369d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D10u;
        // 0x369d14: 0x4600c541  sub.s       $f21, $f24, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d10) {
            ctx->pc = 0x369D80u;
            goto label_369d80;
        }
    }
    ctx->pc = 0x369D18u;
label_369d18:
    // 0x369d18: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x369d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x369d1c: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x369d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x369d20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x369d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x369d24: 0x0  nop
    ctx->pc = 0x369d24u;
    // NOP
    // 0x369d28: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x369d28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x369d2c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x369D2Cu;
    SET_GPR_U32(ctx, 31, 0x369D34u);
    ctx->pc = 0x369D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D2Cu;
    // 0x369d30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x369D2Cu, 0x369D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D34u;
label_369d34:
    // 0x369d34: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x369d34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x369d38: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x369D38u;
    SET_GPR_U32(ctx, 31, 0x369D40u);
    ctx->pc = 0x369D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D38u;
    // 0x369d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x369D38u, 0x369D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D40u;
label_369d40:
    // 0x369d40: 0x4615c842  mul.s       $f1, $f25, $f21
    ctx->pc = 0x369d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x369d44: 0x4615bd42  mul.s       $f21, $f23, $f21
    ctx->pc = 0x369d44u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x369d48: 0x4600b882  mul.s       $f2, $f23, $f0
    ctx->pc = 0x369d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x369d4c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x369d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x369d50: 0x4615b0c1  sub.s       $f3, $f22, $f21
    ctx->pc = 0x369d50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x369d54: 0x4601c101  sub.s       $f4, $f24, $f1
    ctx->pc = 0x369d54u;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x369d58: 0x4615b540  add.s       $f21, $f22, $f21
    ctx->pc = 0x369d58u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x369d5c: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x369d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x369d60: 0x46022740  add.s       $f29, $f4, $f2
    ctx->pc = 0x369d60u;
    ctx->f[29] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x369d64: 0x4600af00  add.s       $f28, $f21, $f0
    ctx->pc = 0x369d64u;
    ctx->f[28] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x369d68: 0x4600adc1  sub.s       $f23, $f21, $f0
    ctx->pc = 0x369d68u;
    ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x369d6c: 0x46020e81  sub.s       $f26, $f1, $f2
    ctx->pc = 0x369d6cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x369d70: 0x46001e40  add.s       $f25, $f3, $f0
    ctx->pc = 0x369d70u;
    ctx->f[25] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x369d74: 0x46020ec0  add.s       $f27, $f1, $f2
    ctx->pc = 0x369d74u;
    ctx->f[27] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x369d78: 0x46001d01  sub.s       $f20, $f3, $f0
    ctx->pc = 0x369d78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x369d7c: 0x46022541  sub.s       $f21, $f4, $f2
    ctx->pc = 0x369d7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_369d80:
    // 0x369d80: 0x8fc2ca60  lw          $v0, -0x35A0($fp)
    ctx->pc = 0x369d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953568)));
    // 0x369d84: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x369D84u;
    {
        const bool branch_taken_0x369d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d84) {
            ctx->pc = 0x369D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369D84u;
            // 0x369d88: 0x27c2ca60  addiu       $v0, $fp, -0x35A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369D8Cu;
    // 0x369d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369d90: 0x0  nop
    ctx->pc = 0x369d90u;
    // NOP
    // 0x369d94: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x369d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369d98: 0x0  nop
    ctx->pc = 0x369d98u;
    // NOP
    // 0x369d9c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x369D9Cu;
    {
        const bool branch_taken_0x369d9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369d9c) {
            ctx->pc = 0x369DD4u;
            goto label_369dd4;
        }
    }
    ctx->pc = 0x369DA4u;
    // 0x369da4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x369da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369da8: 0x0  nop
    ctx->pc = 0x369da8u;
    // NOP
    // 0x369dac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x369DACu;
    {
        const bool branch_taken_0x369dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369dac) {
            ctx->pc = 0x369DD4u;
            goto label_369dd4;
        }
    }
    ctx->pc = 0x369DB4u;
    // 0x369db4: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x369db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369db8: 0x0  nop
    ctx->pc = 0x369db8u;
    // NOP
    // 0x369dbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x369DBCu;
    {
        const bool branch_taken_0x369dbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369dbc) {
            ctx->pc = 0x369DD4u;
            goto label_369dd4;
        }
    }
    ctx->pc = 0x369DC4u;
    // 0x369dc4: 0x4600e034  c.lt.s      $f28, $f0
    ctx->pc = 0x369dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369dc8: 0x0  nop
    ctx->pc = 0x369dc8u;
    // NOP
    // 0x369dcc: 0x45010092  bc1t        . + 4 + (0x92 << 2)
    ctx->pc = 0x369DCCu;
    {
        const bool branch_taken_0x369dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DCCu;
        // 0x369dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369dcc) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369DD4u;
label_369dd4:
    // 0x369dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x369dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x369dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x369dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ddc: 0x0  nop
    ctx->pc = 0x369ddcu;
    // NOP
    // 0x369de0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x369de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369de4: 0x0  nop
    ctx->pc = 0x369de4u;
    // NOP
    // 0x369de8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x369DE8u;
    {
        const bool branch_taken_0x369de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369de8) {
            ctx->pc = 0x369E20u;
            goto label_369e20;
        }
    }
    ctx->pc = 0x369DF0u;
    // 0x369df0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x369df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369df4: 0x0  nop
    ctx->pc = 0x369df4u;
    // NOP
    // 0x369df8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x369DF8u;
    {
        const bool branch_taken_0x369df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369df8) {
            ctx->pc = 0x369E20u;
            goto label_369e20;
        }
    }
    ctx->pc = 0x369E00u;
    // 0x369e00: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x369e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e04: 0x0  nop
    ctx->pc = 0x369e04u;
    // NOP
    // 0x369e08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x369E08u;
    {
        const bool branch_taken_0x369e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e08) {
            ctx->pc = 0x369E20u;
            goto label_369e20;
        }
    }
    ctx->pc = 0x369E10u;
    // 0x369e10: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x369e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e14: 0x0  nop
    ctx->pc = 0x369e14u;
    // NOP
    // 0x369e18: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
    ctx->pc = 0x369E18u;
    {
        const bool branch_taken_0x369e18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E18u;
        // 0x369e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e18) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369E20u;
label_369e20:
    // 0x369e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e24: 0x0  nop
    ctx->pc = 0x369e24u;
    // NOP
    // 0x369e28: 0x4600d834  c.lt.s      $f27, $f0
    ctx->pc = 0x369e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e2c: 0x0  nop
    ctx->pc = 0x369e2cu;
    // NOP
    // 0x369e30: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x369E30u;
    {
        const bool branch_taken_0x369e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e30) {
            ctx->pc = 0x369E68u;
            goto label_369e68;
        }
    }
    ctx->pc = 0x369E38u;
    // 0x369e38: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x369e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e3c: 0x0  nop
    ctx->pc = 0x369e3cu;
    // NOP
    // 0x369e40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x369E40u;
    {
        const bool branch_taken_0x369e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e40) {
            ctx->pc = 0x369E68u;
            goto label_369e68;
        }
    }
    ctx->pc = 0x369E48u;
    // 0x369e48: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x369e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e4c: 0x0  nop
    ctx->pc = 0x369e4cu;
    // NOP
    // 0x369e50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x369E50u;
    {
        const bool branch_taken_0x369e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e50) {
            ctx->pc = 0x369E68u;
            goto label_369e68;
        }
    }
    ctx->pc = 0x369E58u;
    // 0x369e58: 0x4600e834  c.lt.s      $f29, $f0
    ctx->pc = 0x369e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e5c: 0x0  nop
    ctx->pc = 0x369e5cu;
    // NOP
    // 0x369e60: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x369E60u;
    {
        const bool branch_taken_0x369e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E60u;
        // 0x369e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e60) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369E68u;
label_369e68:
    // 0x369e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x369e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x369e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e70: 0x0  nop
    ctx->pc = 0x369e70u;
    // NOP
    // 0x369e74: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x369e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e78: 0x0  nop
    ctx->pc = 0x369e78u;
    // NOP
    // 0x369e7c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x369E7Cu;
    {
        const bool branch_taken_0x369e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x369E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E7Cu;
        // 0x369e80: 0x27c2ca60  addiu       $v0, $fp, -0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e7c) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369E84u;
    // 0x369e84: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x369e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e88: 0x0  nop
    ctx->pc = 0x369e88u;
    // NOP
    // 0x369e8c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x369E8Cu;
    {
        const bool branch_taken_0x369e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e8c) {
            ctx->pc = 0x369E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369E8Cu;
            // 0x369e90: 0x90430004  lbu         $v1, 0x4($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369EBCu;
            goto label_369ebc;
        }
    }
    ctx->pc = 0x369E94u;
    // 0x369e94: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x369e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e98: 0x0  nop
    ctx->pc = 0x369e98u;
    // NOP
    // 0x369e9c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x369E9Cu;
    {
        const bool branch_taken_0x369e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369e9c) {
            ctx->pc = 0x369EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369E9Cu;
            // 0x369ea0: 0x90430004  lbu         $v1, 0x4($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369EBCu;
            goto label_369ebc;
        }
    }
    ctx->pc = 0x369EA4u;
    // 0x369ea4: 0x461d0034  c.lt.s      $f0, $f29
    ctx->pc = 0x369ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369ea8: 0x0  nop
    ctx->pc = 0x369ea8u;
    // NOP
    // 0x369eac: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x369EACu;
    {
        const bool branch_taken_0x369eac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EACu;
        // 0x369eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369eac) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x369EB4u;
    // 0x369eb4: 0x27c2ca60  addiu       $v0, $fp, -0x35A0
    ctx->pc = 0x369eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
label_369eb8:
    // 0x369eb8: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x369eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_369ebc:
    // 0x369ebc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x369EBCu;
    {
        const bool branch_taken_0x369ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EBCu;
        // 0x369ec0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ebc) {
            ctx->pc = 0x369EF8u;
            goto label_369ef8;
        }
    }
    ctx->pc = 0x369EC4u;
    // 0x369ec4: 0x4617b0c1  sub.s       $f3, $f22, $f23
    ctx->pc = 0x369ec4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x369ec8: 0x4614b101  sub.s       $f4, $f22, $f20
    ctx->pc = 0x369ec8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x369ecc: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x369eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ed0: 0x4619b081  sub.s       $f2, $f22, $f25
    ctx->pc = 0x369ed0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
    // 0x369ed4: 0x461cb041  sub.s       $f1, $f22, $f28
    ctx->pc = 0x369ed4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[28]);
    // 0x369ed8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x369ed8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x369edc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x369edcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x369ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x369ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x369ee4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x369ee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x369ee8: 0x4603b5c0  add.s       $f23, $f22, $f3
    ctx->pc = 0x369ee8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x369eec: 0x4601b700  add.s       $f28, $f22, $f1
    ctx->pc = 0x369eecu;
    ctx->f[28] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x369ef0: 0x4604b500  add.s       $f20, $f22, $f4
    ctx->pc = 0x369ef0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x369ef4: 0x4602b640  add.s       $f25, $f22, $f2
    ctx->pc = 0x369ef4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_369ef8:
    // 0x369ef8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x369ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x369efc: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x369efcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x369f00: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x369f00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x369f04: 0x4600fbc6  mov.s       $f15, $f31
    ctx->pc = 0x369f04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[31]);
    // 0x369f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x369f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x369f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f14: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369F14u;
    SET_GPR_U32(ctx, 31, 0x369F1Cu);
    ctx->pc = 0x369F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F14u;
    // 0x369f18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369F14u, 0x369F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F1Cu;
label_369f1c:
    // 0x369f1c: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x369f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369f20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x369f20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x369f24: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x369f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369f28: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x369f28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x369f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x369f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369f30: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x369f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x369f34: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x369f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369f38: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369F38u;
    SET_GPR_U32(ctx, 31, 0x369F40u);
    ctx->pc = 0x369F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F38u;
    // 0x369f3c: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369F38u, 0x369F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F40u;
label_369f40:
    // 0x369f40: 0xc7ae0130  lwc1        $f14, 0x130($sp)
    ctx->pc = 0x369f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x369f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f48: 0xc7af0138  lwc1        $f15, 0x138($sp)
    ctx->pc = 0x369f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369f4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x369f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f50: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x369f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f54: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x369f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f58: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x369f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x369f5c: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369F5Cu;
    SET_GPR_U32(ctx, 31, 0x369F64u);
    ctx->pc = 0x369F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F5Cu;
    // 0x369f60: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369F5Cu, 0x369F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F64u;
label_369f64:
    // 0x369f64: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x369f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x369f68: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x369f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x369f6c: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x369f6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x369f70: 0x4600fbc6  mov.s       $f15, $f31
    ctx->pc = 0x369f70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[31]);
    // 0x369f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x369f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x369f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f80: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369F80u;
    SET_GPR_U32(ctx, 31, 0x369F88u);
    ctx->pc = 0x369F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F80u;
    // 0x369f84: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369F80u, 0x369F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F88u;
label_369f88:
    // 0x369f88: 0xc7ae0130  lwc1        $f14, 0x130($sp)
    ctx->pc = 0x369f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369f8c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x369f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x369f90: 0xc7af0138  lwc1        $f15, 0x138($sp)
    ctx->pc = 0x369f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369f94: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x369f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x369f98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x369f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x369f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fa0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x369fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fa4: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369FA4u;
    SET_GPR_U32(ctx, 31, 0x369FACu);
    ctx->pc = 0x369FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FA4u;
    // 0x369fa8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369FA4u, 0x369FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FACu;
label_369fac:
    // 0x369fac: 0xc7ae0140  lwc1        $f14, 0x140($sp)
    ctx->pc = 0x369facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x369fb0: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x369fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x369fb4: 0xc7af0148  lwc1        $f15, 0x148($sp)
    ctx->pc = 0x369fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x369fb8: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x369fb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x369fbc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x369fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x369fc0: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x369fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x369fc4: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x369fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x369fc8: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x369FC8u;
    SET_GPR_U32(ctx, 31, 0x369FD0u);
    ctx->pc = 0x369FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FC8u;
    // 0x369fcc: 0x8fa70188  lw          $a3, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x369FC8u, 0x369FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FD0u;
label_369fd0:
    // 0x369fd0: 0x27d0ca60  addiu       $s0, $fp, -0x35A0
    ctx->pc = 0x369fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953568));
label_369fd4:
    // 0x369fd4: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x369fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x369fd8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x369fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x369fdc: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x369fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x369fe0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x369fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x369fe4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x369fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x369fe8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x369fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x369fec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x369fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x369ff0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x369ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x369ff4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x369ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x369ff8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x369ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x369ffc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x369FFCu;
    {
        const bool branch_taken_0x369ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FFCu;
        // 0x36a000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ffc) {
            ctx->pc = 0x36A018u;
            goto label_36a018;
        }
    }
    ctx->pc = 0x36A004u;
    // 0x36a004: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x36A004u;
    SET_GPR_U32(ctx, 31, 0x36A00Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x36A004u, 0x36A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A00Cu;
label_36a00c:
    // 0x36a00c: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x36A00Cu;
    SET_GPR_U32(ctx, 31, 0x36A014u);
    ctx->pc = 0x36A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A00Cu;
    // 0x36a010: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x36A00Cu, 0x36A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A014u;
label_36a014:
    // 0x36a014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a018:
    // 0x36a018: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36a018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36a01c:
    // 0x36a01c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36a01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a020: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x36a020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36a024: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36a024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a028: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x36a028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36a02c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x36a02cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36a030: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x36a030u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36a034: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x36a034u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36a038: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x36a038u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36a03c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x36a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36a040: 0xc7bf0128  lwc1        $f31, 0x128($sp)
    ctx->pc = 0x36a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x36a044: 0xc7be0120  lwc1        $f30, 0x120($sp)
    ctx->pc = 0x36a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x36a048: 0xc7bd0118  lwc1        $f29, 0x118($sp)
    ctx->pc = 0x36a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x36a04c: 0xc7bc0110  lwc1        $f28, 0x110($sp)
    ctx->pc = 0x36a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x36a050: 0xc7bb0108  lwc1        $f27, 0x108($sp)
    ctx->pc = 0x36a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x36a054: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x36a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x36a058: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x36a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36a05c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x36a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36a060: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x36a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36a064: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x36a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36a068: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x36a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36a06c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x36a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a070: 0x3e00008  jr          $ra
    ctx->pc = 0x36A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A070u;
        // 0x36a074: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A078u;
}
