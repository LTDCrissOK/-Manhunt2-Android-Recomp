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

// Function: sub_00312C28
// Address: 0x312c28 - 0x312e48
void sub_00312C28_0x312c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312C28_0x312c28");
#endif

    switch (ctx->pc) {
        case 0x312c7cu: goto label_312c7c;
        case 0x312c84u: goto label_312c84;
        case 0x312d18u: goto label_312d18;
        case 0x312d3cu: goto label_312d3c;
        case 0x312d5cu: goto label_312d5c;
        case 0x312dd4u: goto label_312dd4;
        default: break;
    }

    ctx->pc = 0x312c28u;

    // 0x312c28: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x312c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x312c2c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x312c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x312c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c34: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x312c34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x312c38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x312c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x312c3c: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x312c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x312c40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x312c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x312c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c48: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x312c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x312c4c: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x312c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x312c50: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x312c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x312c54: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x312c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x312c58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x312c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x312c5c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x312c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x312c60: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x312c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x312c64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x312c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312c68: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x312c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312c6c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312c70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x312c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312c74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312C74u;
    SET_GPR_U32(ctx, 31, 0x312C7Cu);
    ctx->pc = 0x312C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C74u;
    // 0x312c78: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312C74u, 0x312C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C7Cu;
label_312c7c:
    // 0x312c7c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312C7Cu;
    SET_GPR_U32(ctx, 31, 0x312C84u);
    ctx->pc = 0x312C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C7Cu;
    // 0x312c80: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312C7Cu, 0x312C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C84u;
label_312c84:
    // 0x312c84: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x312c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312c88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x312c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312c8c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x312c8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312c90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x312c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312c94: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x312c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x312c98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x312c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x312c9c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x312c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x312ca0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x312ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312ca4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x312ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312ca8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312cac: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x312cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312cb0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x312cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312cb4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x312cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312cb8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x312cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x312cbc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x312cbcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x312cc0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x312cc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x312cc4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x312cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x312cc8: 0x0  nop
    ctx->pc = 0x312cc8u;
    // NOP
    // 0x312ccc: 0x0  nop
    ctx->pc = 0x312cccu;
    // NOP
    // 0x312cd0: 0x46000044  c1          0x44
    ctx->pc = 0x312cd0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x312cd4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x312cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x312cd8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x312cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312cdc: 0x0  nop
    ctx->pc = 0x312cdcu;
    // NOP
    // 0x312ce0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x312CE0u;
    {
        const bool branch_taken_0x312ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CE0u;
        // 0x312ce4: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ce0) {
            ctx->pc = 0x312D0Cu;
            goto label_312d0c;
        }
    }
    ctx->pc = 0x312CE8u;
    // 0x312ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312cf0: 0x0  nop
    ctx->pc = 0x312cf0u;
    // NOP
    // 0x312cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x312cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x312cf8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x312cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x312cfc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x312cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312d00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312d04: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x312d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312d08: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x312d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_312d0c:
    // 0x312d0c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x312d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312d10: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x312D10u;
    SET_GPR_U32(ctx, 31, 0x312D18u);
    ctx->pc = 0x312D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D10u;
    // 0x312d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x312D10u, 0x312D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D18u;
label_312d18:
    // 0x312d18: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x312d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x312d1c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x312d20: 0xc45433d0  lwc1        $f20, 0x33D0($v0)
    ctx->pc = 0x312d20u;
    { uint32_t bits = FAST_READ32(0x4733D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312d24: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x312d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x312d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x312d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d34: 0xc077824  jal         func_1DE090
    ctx->pc = 0x312D34u;
    SET_GPR_U32(ctx, 31, 0x312D3Cu);
    ctx->pc = 0x312D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D34u;
    // 0x312d38: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x312D34u, 0x312D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D3Cu;
label_312d3c:
    // 0x312d3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x312d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d40: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x312D40u;
    {
        const bool branch_taken_0x312d40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D40u;
        // 0x312d44: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d40) {
            ctx->pc = 0x312D84u;
            goto label_312d84;
        }
    }
    ctx->pc = 0x312D48u;
    // 0x312d48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x312d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d4c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x312d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x312d50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x312d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x312d54: 0xc0c93ec  jal         func_324FB0
    ctx->pc = 0x312D54u;
    SET_GPR_U32(ctx, 31, 0x312D5Cu);
    ctx->pc = 0x312D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D54u;
    // 0x312d58: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324FB0u, 0x312D54u, 0x312D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D5Cu;
label_312d5c:
    // 0x312d5c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x312d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312d60: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x312d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312d64: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x312d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312d68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312d6c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x312d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x312d70: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x312d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x312d74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312d78: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x312d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x312d7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x312D7Cu;
    {
        const bool branch_taken_0x312d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D7Cu;
        // 0x312d80: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d7c) {
            ctx->pc = 0x312E20u;
            goto label_312e20;
        }
    }
    ctx->pc = 0x312D84u;
label_312d84:
    // 0x312d84: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x312d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x312d88: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x312d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x312d8c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x312d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x312d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x312d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312d94: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x312d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x312d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d9c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x312d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x312da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312da4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x312da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x312da8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x312da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312dac: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x312dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x312db0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x312db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312db4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x312db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x312db8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x312db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x312dbc: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x312dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x312dc0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x312dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x312dc4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x312dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x312dc8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x312dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x312dcc: 0xc077d8e  jal         func_1DF638
    ctx->pc = 0x312DCCu;
    SET_GPR_U32(ctx, 31, 0x312DD4u);
    ctx->pc = 0x312DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312DCCu;
    // 0x312dd0: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF638u, 0x312DCCu, 0x312DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DD4u;
label_312dd4:
    // 0x312dd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x312DD4u;
    {
        const bool branch_taken_0x312dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DD4u;
        // 0x312dd8: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dd4) {
            ctx->pc = 0x312E18u;
            goto label_312e18;
        }
    }
    ctx->pc = 0x312DDCu;
    // 0x312ddc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x312ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x312de0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x312de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x312de4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x312de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x312de8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x312de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x312dec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312df0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x312df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312df4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x312df4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x312df8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x312df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x312dfc: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x312dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312e00: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x312e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312e04: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x312e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312e0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x312e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x312e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x312E10u;
    {
        const bool branch_taken_0x312e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E10u;
        // 0x312e14: 0x46030502  mul.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e10) {
            ctx->pc = 0x312E20u;
            goto label_312e20;
        }
    }
    ctx->pc = 0x312E18u;
label_312e18:
    // 0x312e18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312e1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x312e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_312e20:
    // 0x312e20: 0x0  nop
    ctx->pc = 0x312e20u;
    // NOP
    // 0x312e24: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x312e24u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x312e28: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x312e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x312e2c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x312e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x312e30: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x312e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x312e34: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x312e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x312e38: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x312e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x312e3c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x312e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312e40: 0x3e00008  jr          $ra
    ctx->pc = 0x312E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E40u;
        // 0x312e44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312E48u;
}
