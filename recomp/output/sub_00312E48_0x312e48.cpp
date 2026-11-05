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

// Function: sub_00312E48
// Address: 0x312e48 - 0x313280
void sub_00312E48_0x312e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312E48_0x312e48");
#endif

    switch (ctx->pc) {
        case 0x312e90u: goto label_312e90;
        case 0x312f30u: goto label_312f30;
        case 0x312f38u: goto label_312f38;
        case 0x312fc8u: goto label_312fc8;
        case 0x31300cu: goto label_31300c;
        case 0x313028u: goto label_313028;
        case 0x313110u: goto label_313110;
        case 0x31312cu: goto label_31312c;
        default: break;
    }

    ctx->pc = 0x312e48u;

    // 0x312e48: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x312e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x312e4c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x312e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x312e50: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x312e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x312e54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x312e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e58: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x312e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x312e5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x312e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e60: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x312e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x312e64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x312e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e68: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x312e68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x312e6c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x312e6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e70: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x312e70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x312e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e78: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x312e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x312e7c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x312e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x312e80: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x312e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x312e84: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x312e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x312e88: 0xc0c4af8  jal         func_312BE0
    ctx->pc = 0x312E88u;
    SET_GPR_U32(ctx, 31, 0x312E90u);
    ctx->pc = 0x312E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312E88u;
    // 0x312e8c: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x312BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312BE0u, 0x312E88u, 0x312E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312E90u;
label_312e90:
    // 0x312e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312e94: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x312e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x312e98: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x312e98u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x312e9c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x312e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312ea0: 0x0  nop
    ctx->pc = 0x312ea0u;
    // NOP
    // 0x312ea4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312EA4u;
    {
        const bool branch_taken_0x312ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EA4u;
        // 0x312ea8: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ea4) {
            ctx->pc = 0x312EB0u;
            goto label_312eb0;
        }
    }
    ctx->pc = 0x312EACu;
    // 0x312eac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x312eacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_312eb0:
    // 0x312eb0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x312eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x312eb4: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x312eb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x312eb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x312eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312ebc: 0x0  nop
    ctx->pc = 0x312ebcu;
    // NOP
    // 0x312ec0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x312EC0u;
    {
        const bool branch_taken_0x312ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EC0u;
        // 0x312ec4: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ec0) {
            ctx->pc = 0x312ECCu;
            goto label_312ecc;
        }
    }
    ctx->pc = 0x312EC8u;
    // 0x312ec8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x312ec8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_312ecc:
    // 0x312ecc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x312eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x312ed0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x312ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x312ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312ed8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x312ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x312edc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x312edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x312ee0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x312ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x312ee4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x312ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x312ee8: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x312ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x312eec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x312eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312ef0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x312ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312ef4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312ef8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x312ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312efc: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x312efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x312f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312f04: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x312f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x312f08: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x312f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x312f0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x312f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x312f10: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x312f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x312f14: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x312f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x312f18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x312f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312f1c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x312f1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312f20: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312f24: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x312f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312f28: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312F28u;
    SET_GPR_U32(ctx, 31, 0x312F30u);
    ctx->pc = 0x312F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F28u;
    // 0x312f2c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312F28u, 0x312F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F30u;
label_312f30:
    // 0x312f30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312F30u;
    SET_GPR_U32(ctx, 31, 0x312F38u);
    ctx->pc = 0x312F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F30u;
    // 0x312f34: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312F30u, 0x312F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F38u;
label_312f38:
    // 0x312f38: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x312f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312f3c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x312f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312f40: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x312f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312f44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x312f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312f48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x312f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x312f4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x312f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312f50: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x312f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x312f54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x312f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312f58: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x312f58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312f5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312f60: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x312f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312f64: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x312f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312f68: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x312f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312f6c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x312f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x312f70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x312f70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x312f74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x312f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x312f78: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x312f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x312f7c: 0x0  nop
    ctx->pc = 0x312f7cu;
    // NOP
    // 0x312f80: 0x0  nop
    ctx->pc = 0x312f80u;
    // NOP
    // 0x312f84: 0x46000044  c1          0x44
    ctx->pc = 0x312f84u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x312f88: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x312f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x312f8c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x312f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312f90: 0x0  nop
    ctx->pc = 0x312f90u;
    // NOP
    // 0x312f94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x312F94u;
    {
        const bool branch_taken_0x312f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F94u;
        // 0x312f98: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f94) {
            ctx->pc = 0x312FBCu;
            goto label_312fbc;
        }
    }
    ctx->pc = 0x312F9Cu;
    // 0x312f9c: 0x0  nop
    ctx->pc = 0x312f9cu;
    // NOP
    // 0x312fa0: 0x0  nop
    ctx->pc = 0x312fa0u;
    // NOP
    // 0x312fa4: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x312fa4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x312fa8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x312fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x312fac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x312facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312fb0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312fb4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x312fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312fb8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x312fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_312fbc:
    // 0x312fbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x312fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x312fc0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x312FC0u;
    SET_GPR_U32(ctx, 31, 0x312FC8u);
    ctx->pc = 0x312FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FC0u;
    // 0x312fc4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x312FC0u, 0x312FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FC8u;
label_312fc8:
    // 0x312fc8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x312fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x312fcc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x312fccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x312fd0: 0xc46033d4  lwc1        $f0, 0x33D4($v1)
    ctx->pc = 0x312fd0u;
    { uint32_t bits = FAST_READ32(0x4733D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312fd4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x312fd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fd8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x312fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312fdc: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x312fe0: 0x12800045  beqz        $s4, . + 4 + (0x45 << 2)
    ctx->pc = 0x312FE0u;
    {
        const bool branch_taken_0x312fe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FE0u;
        // 0x312fe4: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fe0) {
            ctx->pc = 0x3130F8u;
            goto label_3130f8;
        }
    }
    ctx->pc = 0x312FE8u;
    // 0x312fe8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x312fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x312fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ff0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x312ff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ff4: 0x34a5ff7f  ori         $a1, $a1, 0xFF7F
    ctx->pc = 0x312ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65407);
    // 0x312ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x312ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x312ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313000: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x313000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313004: 0xc077b2a  jal         func_1DECA8
    ctx->pc = 0x313004u;
    SET_GPR_U32(ctx, 31, 0x31300Cu);
    ctx->pc = 0x313008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313004u;
    // 0x313008: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECA8u, 0x313004u, 0x31300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31300Cu;
label_31300c:
    // 0x31300c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x31300Cu;
    {
        const bool branch_taken_0x31300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31300Cu;
        // 0x313010: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31300c) {
            ctx->pc = 0x3130F8u;
            goto label_3130f8;
        }
    }
    ctx->pc = 0x313014u;
    // 0x313014: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x313014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313018: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x313018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x31301c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x31301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x313020: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x313020u;
    SET_GPR_U32(ctx, 31, 0x313028u);
    ctx->pc = 0x313024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313020u;
    // 0x313024: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x313020u, 0x313028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313028u;
label_313028:
    // 0x313028: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x313028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x31302c: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x31302Cu;
    {
        const bool branch_taken_0x31302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x313030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31302Cu;
        // 0x313030: 0xc6a033d4  lwc1        $f0, 0x33D4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31302c) {
            ctx->pc = 0x3130FCu;
            goto label_3130fc;
        }
    }
    ctx->pc = 0x313034u;
    // 0x313034: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x313034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x313038: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x313038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x31303c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x31303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x313040: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x313040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x313044: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x313044u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x313048: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x313048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x31304c: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x31304Cu;
    {
        const bool branch_taken_0x31304c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31304c) {
            ctx->pc = 0x313050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31304Cu;
            // 0x313050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313100u;
            goto label_313100;
        }
    }
    ctx->pc = 0x313054u;
    // 0x313054: 0x90820144  lbu         $v0, 0x144($a0)
    ctx->pc = 0x313054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x313058: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x313058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x31305c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x31305cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x313060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x313060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313068: 0x0  nop
    ctx->pc = 0x313068u;
    // NOP
    // 0x31306c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313070: 0x68830127  ldl         $v1, 0x127($a0)
    ctx->pc = 0x313070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313074: 0x6c830120  ldr         $v1, 0x120($a0)
    ctx->pc = 0x313074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313078: 0x6885012f  ldl         $a1, 0x12F($a0)
    ctx->pc = 0x313078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31307c: 0x6c850128  ldr         $a1, 0x128($a0)
    ctx->pc = 0x31307cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x313080: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x313080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313084: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x313084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313088: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x313088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31308c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x31308cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x313090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x313094: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x313098: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x313098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31309c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x31309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3130a0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x3130a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x3130a4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x3130a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3130a8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3130a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3130ac: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x3130acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x3130b0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3130b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3130b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3130b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3130b8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3130b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3130bc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3130bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3130c0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x3130c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x3130c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3130c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3130c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3130c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3130cc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3130ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3130d0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3130d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3130d4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3130d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3130d8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3130d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3130dc: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x3130dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3130e0: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x3130e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3130e4: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x3130e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3130e8: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x3130e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3130ec: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x3130ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3130f0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3130F0u;
    {
        const bool branch_taken_0x3130f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3130F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130F0u;
        // 0x3130f4: 0xb6640008  sdr         $a0, 0x8($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130f0) {
            ctx->pc = 0x313248u;
            goto label_313248;
        }
    }
    ctx->pc = 0x3130F8u;
label_3130f8:
    // 0x3130f8: 0xc6a033d4  lwc1        $f0, 0x33D4($s5)
    ctx->pc = 0x3130f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3130fc:
    // 0x3130fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3130fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313100:
    // 0x313100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x313100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313108: 0xc077824  jal         func_1DE090
    ctx->pc = 0x313108u;
    SET_GPR_U32(ctx, 31, 0x313110u);
    ctx->pc = 0x31310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313108u;
    // 0x31310c: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x313108u, 0x313110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313110u;
label_313110:
    // 0x313110: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x313110u;
    {
        const bool branch_taken_0x313110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313110u;
        // 0x313114: 0x8fa200c4  lw          $v0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313110) {
            ctx->pc = 0x3131D4u;
            goto label_3131d4;
        }
    }
    ctx->pc = 0x313118u;
    // 0x313118: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x313118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x31311c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x31311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x313120: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x313120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313124: 0xc0c93ec  jal         func_324FB0
    ctx->pc = 0x313124u;
    SET_GPR_U32(ctx, 31, 0x31312Cu);
    ctx->pc = 0x313128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313124u;
    // 0x313128: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324FB0u, 0x313124u, 0x31312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31312Cu;
label_31312c:
    // 0x31312c: 0x6ba200f7  ldl         $v0, 0xF7($sp)
    ctx->pc = 0x31312cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x313130: 0x6fa200f0  ldr         $v0, 0xF0($sp)
    ctx->pc = 0x313130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x313134: 0x6ba300ff  ldl         $v1, 0xFF($sp)
    ctx->pc = 0x313134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313138: 0x6fa300f8  ldr         $v1, 0xF8($sp)
    ctx->pc = 0x313138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31313c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31313cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313140: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x313140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313144: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x313144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313148: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x313148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31314c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31314cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x313150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x313150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313154: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x313154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313158: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x313158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x31315c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31315cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313160: 0x0  nop
    ctx->pc = 0x313160u;
    // NOP
    // 0x313164: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x313164u;
    {
        const bool branch_taken_0x313164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313164u;
        // 0x313168: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313164) {
            ctx->pc = 0x313170u;
            goto label_313170;
        }
    }
    ctx->pc = 0x31316Cu;
    // 0x31316c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x31316cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_313170:
    // 0x313170: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x313170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313174: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x313174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x313178: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x313178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x31317c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31317cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313180: 0x0  nop
    ctx->pc = 0x313180u;
    // NOP
    // 0x313184: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x313184u;
    {
        const bool branch_taken_0x313184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313184u;
        // 0x313188: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313184) {
            ctx->pc = 0x313190u;
            goto label_313190;
        }
    }
    ctx->pc = 0x31318Cu;
    // 0x31318c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x31318cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_313190:
    // 0x313190: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x313190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313194: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x313194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x313198: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x313198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31319c: 0x0  nop
    ctx->pc = 0x31319cu;
    // NOP
    // 0x3131a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3131A0u;
    {
        const bool branch_taken_0x3131a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3131A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131A0u;
        // 0x3131a4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131a0) {
            ctx->pc = 0x3131ACu;
            goto label_3131ac;
        }
    }
    ctx->pc = 0x3131A8u;
    // 0x3131a8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3131a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_3131ac:
    // 0x3131ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3131acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3131b0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x3131b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3131b4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x3131b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3131b8: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x3131b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3131bc: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x3131bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3131c0: 0xb2660007  sdl         $a2, 0x7($s3)
    ctx->pc = 0x3131c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3131c4: 0xb6660000  sdr         $a2, 0x0($s3)
    ctx->pc = 0x3131c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3131c8: 0xb262000f  sdl         $v0, 0xF($s3)
    ctx->pc = 0x3131c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3131cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3131CCu;
    {
        const bool branch_taken_0x3131cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131CCu;
        // 0x3131d0: 0xb6620008  sdr         $v0, 0x8($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131cc) {
            ctx->pc = 0x313248u;
            goto label_313248;
        }
    }
    ctx->pc = 0x3131D4u;
label_3131d4:
    // 0x3131d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3131d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3131d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3131d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3131dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3131dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3131e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3131e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3131e4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3131e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3131e8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3131e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3131ec: 0x0  nop
    ctx->pc = 0x3131ecu;
    // NOP
    // 0x3131f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3131F0u;
    {
        const bool branch_taken_0x3131f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F0u;
        // 0x3131f4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131f0) {
            ctx->pc = 0x313200u;
            goto label_313200;
        }
    }
    ctx->pc = 0x3131F8u;
    // 0x3131f8: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x3131f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x3131fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3131fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313200:
    // 0x313200: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x313200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x313204: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x313204u;
    {
        const bool branch_taken_0x313204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313204u;
        // 0x313208: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313204) {
            ctx->pc = 0x313210u;
            goto label_313210;
        }
    }
    ctx->pc = 0x31320Cu;
    // 0x31320c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x31320cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_313210:
    // 0x313210: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x313210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313214: 0x0  nop
    ctx->pc = 0x313214u;
    // NOP
    // 0x313218: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x313218u;
    {
        const bool branch_taken_0x313218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313218u;
        // 0x31321c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313218) {
            ctx->pc = 0x313224u;
            goto label_313224;
        }
    }
    ctx->pc = 0x313220u;
    // 0x313220: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x313220u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_313224:
    // 0x313224: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x313224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x313228: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x313228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31322c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x31322cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x313230: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x313230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x313234: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x313234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x313238: 0xb2650007  sdl         $a1, 0x7($s3)
    ctx->pc = 0x313238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31323c: 0xb6650000  sdr         $a1, 0x0($s3)
    ctx->pc = 0x31323cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313240: 0xb266000f  sdl         $a2, 0xF($s3)
    ctx->pc = 0x313240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313244: 0xb6660008  sdr         $a2, 0x8($s3)
    ctx->pc = 0x313244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313248:
    // 0x313248: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x313248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31324c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x31324cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x313250: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x313250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x313254: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x313254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313258: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x313258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x31325c: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x31325cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313260: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x313260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x313264: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x313264u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x313268: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x313268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x31326c: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x31326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x313270: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x313270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313274: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x313274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313278: 0x3e00008  jr          $ra
    ctx->pc = 0x313278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313278u;
        // 0x31327c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313280u;
}
