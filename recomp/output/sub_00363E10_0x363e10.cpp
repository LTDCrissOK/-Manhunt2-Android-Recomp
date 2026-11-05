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

// Function: sub_00363E10
// Address: 0x363e10 - 0x363fe8
void sub_00363E10_0x363e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E10_0x363e10");
#endif

    switch (ctx->pc) {
        case 0x363e94u: goto label_363e94;
        case 0x363e9cu: goto label_363e9c;
        case 0x363f3cu: goto label_363f3c;
        case 0x363f44u: goto label_363f44;
        case 0x363f50u: goto label_363f50;
        case 0x363f6cu: goto label_363f6c;
        case 0x363fb8u: goto label_363fb8;
        case 0x363fccu: goto label_363fcc;
        default: break;
    }

    ctx->pc = 0x363e10u;

    // 0x363e10: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x363e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x363e14: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x363e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x363e18: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x363e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x363e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x363e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e20: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x363e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x363e24: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x363e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x363e28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x363e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x363e2c: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x363E2Cu;
    {
        const bool branch_taken_0x363e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E2Cu;
        // 0x363e30: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363e2c) {
            ctx->pc = 0x363FC0u;
            goto label_363fc0;
        }
    }
    ctx->pc = 0x363E34u;
    // 0x363e34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x363e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x363e38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x363e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x363e3c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x363e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363e40: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x363e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x363e44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x363e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x363e48: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x363e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363e4c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x363e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x363e50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x363e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363e54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x363e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x363e58: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x363e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363e5c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x363e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x363e60: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x363e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x363e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x363e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363e68: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x363e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363e6c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x363e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x363e70: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x363e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x363e74: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x363e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363e78: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x363e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x363e7c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x363e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363e80: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x363e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x363e84: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x363e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363e88: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x363e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x363e8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x363E8Cu;
    SET_GPR_U32(ctx, 31, 0x363E94u);
    ctx->pc = 0x363E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E8Cu;
    // 0x363e90: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x363E8Cu, 0x363E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E94u;
label_363e94:
    // 0x363e94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x363E94u;
    SET_GPR_U32(ctx, 31, 0x363E9Cu);
    ctx->pc = 0x363E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E94u;
    // 0x363e98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x363E94u, 0x363E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E9Cu;
label_363e9c:
    // 0x363e9c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x363e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363ea0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x363ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x363ea4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x363ea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363ea8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x363ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x363eac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x363eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x363eb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x363eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x363eb4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x363eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x363eb8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x363eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x363ebc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x363ebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363ec0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x363ec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x363ec4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x363ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363ec8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x363ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363ecc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x363eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x363ed0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x363ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x363ed4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x363ed4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x363ed8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x363ed8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x363edc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x363edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x363ee0: 0x0  nop
    ctx->pc = 0x363ee0u;
    // NOP
    // 0x363ee4: 0x0  nop
    ctx->pc = 0x363ee4u;
    // NOP
    // 0x363ee8: 0x46010084  c1          0x10084
    ctx->pc = 0x363ee8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x363eec: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x363eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x363ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363ef4: 0x0  nop
    ctx->pc = 0x363ef4u;
    // NOP
    // 0x363ef8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x363ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363efc: 0x0  nop
    ctx->pc = 0x363efcu;
    // NOP
    // 0x363f00: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x363F00u;
    {
        const bool branch_taken_0x363f00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x363F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F00u;
        // 0x363f04: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f00) {
            ctx->pc = 0x363F2Cu;
            goto label_363f2c;
        }
    }
    ctx->pc = 0x363F08u;
    // 0x363f08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x363f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x363f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x363f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363f10: 0x0  nop
    ctx->pc = 0x363f10u;
    // NOP
    // 0x363f14: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x363f14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x363f18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x363f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x363f1c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x363f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x363f20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x363f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x363f24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x363f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x363f28: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x363f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_363f2c:
    // 0x363f2c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x363f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x363f30: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x363f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x363f34: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x363F34u;
    SET_GPR_U32(ctx, 31, 0x363F3Cu);
    ctx->pc = 0x363F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F34u;
    // 0x363f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x363F34u, 0x363F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F3Cu;
label_363f3c:
    // 0x363f3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x363F3Cu;
    SET_GPR_U32(ctx, 31, 0x363F44u);
    ctx->pc = 0x363F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F3Cu;
    // 0x363f40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x363F3Cu, 0x363F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F44u;
label_363f44:
    // 0x363f44: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x363f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x363f48: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x363F48u;
    SET_GPR_U32(ctx, 31, 0x363F50u);
    ctx->pc = 0x363F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F48u;
    // 0x363f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x363F48u, 0x363F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F50u;
label_363f50:
    // 0x363f50: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x363f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x363f54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x363f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x363f58: 0xc4606f0c  lwc1        $f0, 0x6F0C($v1)
    ctx->pc = 0x363f58u;
    { uint32_t bits = FAST_READ32(0x476F0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x363f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f60: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x363f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x363f64: 0xc07784e  jal         func_1DE138
    ctx->pc = 0x363F64u;
    SET_GPR_U32(ctx, 31, 0x363F6Cu);
    ctx->pc = 0x363F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F64u;
    // 0x363f68: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE138u, 0x363F64u, 0x363F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F6Cu;
label_363f6c:
    // 0x363f6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x363F6Cu;
    {
        const bool branch_taken_0x363f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F6Cu;
        // 0x363f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f6c) {
            ctx->pc = 0x363F88u;
            goto label_363f88;
        }
    }
    ctx->pc = 0x363F74u;
    // 0x363f74: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x363f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x363f78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x363f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363f7c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x363f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x363F80u;
    {
        const bool branch_taken_0x363f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F80u;
        // 0x363f84: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f80) {
            ctx->pc = 0x363F94u;
            goto label_363f94;
        }
    }
    ctx->pc = 0x363F88u;
label_363f88:
    // 0x363f88: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x363f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363f8c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x363f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363f90: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x363f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_363f94:
    // 0x363f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363f98: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x363f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363f9c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x363f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363fa0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x363fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363fa4: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x363fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x363fa8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x363fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x363fac: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x363facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x363fb0: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x363FB0u;
    SET_GPR_U32(ctx, 31, 0x363FB8u);
    ctx->pc = 0x363FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FB0u;
    // 0x363fb4: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x363FB0u, 0x363FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FB8u;
label_363fb8:
    // 0x363fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x363FB8u;
    {
        const bool branch_taken_0x363fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FB8u;
        // 0x363fbc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363fb8) {
            ctx->pc = 0x363FD0u;
            goto label_363fd0;
        }
    }
    ctx->pc = 0x363FC0u;
label_363fc0:
    // 0x363fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x363fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fc4: 0xc0d8e14  jal         func_363850
    ctx->pc = 0x363FC4u;
    SET_GPR_U32(ctx, 31, 0x363FCCu);
    ctx->pc = 0x363FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FC4u;
    // 0x363fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363850u, 0x363FC4u, 0x363FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FCCu;
label_363fcc:
    // 0x363fcc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x363fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_363fd0:
    // 0x363fd0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x363fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x363fd4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x363fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x363fd8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x363fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x363fdc: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x363fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x363fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x363FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FE0u;
        // 0x363fe4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363FE8u;
}
