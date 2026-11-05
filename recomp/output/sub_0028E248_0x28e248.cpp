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

// Function: sub_0028E248
// Address: 0x28e248 - 0x28e408
void sub_0028E248_0x28e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E248_0x28e248");
#endif

    switch (ctx->pc) {
        case 0x28e290u: goto label_28e290;
        case 0x28e2b8u: goto label_28e2b8;
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e350u: goto label_28e350;
        case 0x28e390u: goto label_28e390;
        case 0x28e3ccu: goto label_28e3cc;
        default: break;
    }

    ctx->pc = 0x28e248u;

    // 0x28e248: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28e24c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28e250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e254: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28e258: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x28e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28e25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e260: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x28e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x28e264: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28e268: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x28e268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x28e26c: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x28e26cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x28e270: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x28e270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28e274: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x28e274u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28e278: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x28e278u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x28e27c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x28e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x28e280: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x28e280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28e284: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x28e284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x28e288: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28E288u;
    SET_GPR_U32(ctx, 31, 0x28E290u);
    ctx->pc = 0x28E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E288u;
    // 0x28e28c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28E288u, 0x28E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E290u;
label_28e290:
    // 0x28e290: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x28e294: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28e294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28e298: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x28e298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x28e29c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x28e29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x28e2a0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x28e2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e2a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28e2a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28e2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28e2ac: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x28e2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x28e2b0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28e2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28e2b4: 0x0  nop
    ctx->pc = 0x28e2b4u;
    // NOP
label_28e2b8:
    // 0x28e2b8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x28E2B8u;
    SET_GPR_U32(ctx, 31, 0x28E2C0u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x28E2B8u, 0x28E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2C0u;
label_28e2c0:
    // 0x28e2c0: 0x4617cd41  sub.s       $f21, $f25, $f23
    ctx->pc = 0x28e2c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x28e2c4: 0xc6140060  lwc1        $f20, 0x60($s0)
    ctx->pc = 0x28e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e2c8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x28e2c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28e2cc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x28E2CCu;
    SET_GPR_U32(ctx, 31, 0x28E2D4u);
    ctx->pc = 0x28E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2CCu;
    // 0x28e2d0: 0x4615bd40  add.s       $f21, $f23, $f21 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x28E2CCu, 0x28E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2D4u;
label_28e2d4:
    // 0x28e2d4: 0x4617a501  sub.s       $f20, $f20, $f23
    ctx->pc = 0x28e2d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x28e2d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x28e2d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28e2dc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28e2dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28e2e0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x28E2E0u;
    SET_GPR_U32(ctx, 31, 0x28E2E8u);
    ctx->pc = 0x28E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2E0u;
    // 0x28e2e4: 0x4614bd00  add.s       $f20, $f23, $f20 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x28E2E0u, 0x28E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2E8u;
label_28e2e8:
    // 0x28e2e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x28e2e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28e2ec: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x28E2ECu;
    SET_GPR_U32(ctx, 31, 0x28E2F4u);
    ctx->pc = 0x28E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2ECu;
    // 0x28e2f0: 0x46140582  mul.s       $f22, $f0, $f20 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x28E2ECu, 0x28E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2F4u;
label_28e2f4:
    // 0x28e2f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28e2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x28e2f8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28e2fc: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x28e2fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28e300: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x28e300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x28e304: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28e304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28e308: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x28e308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28e30c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x28e30cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28e310: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x28e310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x28e314: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x28e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e318: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e31c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e320: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x28e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e324: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x28e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e328: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28e32c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28e32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28e330: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x28e330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28e334: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x28e334u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x28e338: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x28e338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e33c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x28e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e344: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x28e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28e348: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x28E348u;
    SET_GPR_U32(ctx, 31, 0x28E350u);
    ctx->pc = 0x28E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E348u;
    // 0x28e34c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x28E348u, 0x28E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E350u;
label_28e350:
    // 0x28e350: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x28e350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e354: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x28e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e358: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x28e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e35c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x28e35cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e360: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x28e360u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x28e364: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x28e364u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e368: 0x46010044  c1          0x10044
    ctx->pc = 0x28e368u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e36c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x28e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e370: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x28e370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x28e374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28e374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e378: 0x0  nop
    ctx->pc = 0x28e378u;
    // NOP
    // 0x28e37c: 0x4500ffce  bc1f        . + 4 + (-0x32 << 2)
    ctx->pc = 0x28E37Cu;
    {
        const bool branch_taken_0x28e37c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E37Cu;
        // 0x28e380: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e37c) {
            ctx->pc = 0x28E2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e2b8;
        }
    }
    ctx->pc = 0x28E384u;
    // 0x28e384: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e388: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x28E388u;
    SET_GPR_U32(ctx, 31, 0x28E390u);
    ctx->pc = 0x28E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E388u;
    // 0x28e38c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x28E388u, 0x28E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E390u;
label_28e390:
    // 0x28e390: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x28e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e394: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x28e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e398: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x28e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e39c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x28e39cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e3a0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x28e3a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x28e3a4: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x28e3a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e3a8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x28e3a8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e3ac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x28e3acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e3b0: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x28e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e3b4: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x28e3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e3b8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x28e3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x28e3bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e3c0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x28e3c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x28e3c4: 0xc0f4902  jal         func_3D2408
    ctx->pc = 0x28E3C4u;
    SET_GPR_U32(ctx, 31, 0x28E3CCu);
    ctx->pc = 0x28E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3C4u;
    // 0x28e3c8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2408u, 0x28E3C4u, 0x28E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3CCu;
label_28e3cc:
    // 0x28e3cc: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x28e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x28e3d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28e3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e3d4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28e3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28e3d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x28e3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e3dc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x28e3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28e3e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28e3e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e3e4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x28e3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28e3e8: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x28e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x28e3ec: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x28e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28e3f0: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x28e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28e3f4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x28e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28e3f8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x28e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e3fc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e400: 0x3e00008  jr          $ra
    ctx->pc = 0x28E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E400u;
        // 0x28e404: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E408u;
}
