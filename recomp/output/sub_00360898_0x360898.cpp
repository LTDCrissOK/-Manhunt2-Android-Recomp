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

// Function: sub_00360898
// Address: 0x360898 - 0x360d40
void sub_00360898_0x360898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360898_0x360898");
#endif

    switch (ctx->pc) {
        case 0x3608e4u: goto label_3608e4;
        case 0x360964u: goto label_360964;
        case 0x36096cu: goto label_36096c;
        case 0x360a04u: goto label_360a04;
        case 0x360a0cu: goto label_360a0c;
        case 0x360a1cu: goto label_360a1c;
        case 0x360a50u: goto label_360a50;
        case 0x360a60u: goto label_360a60;
        case 0x360b50u: goto label_360b50;
        case 0x360b9cu: goto label_360b9c;
        case 0x360bacu: goto label_360bac;
        case 0x360bc8u: goto label_360bc8;
        case 0x360c08u: goto label_360c08;
        default: break;
    }

    ctx->pc = 0x360898u;

    // 0x360898: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x360898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x36089c: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x36089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x3608a0: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x3608a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x3608a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3608a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3608a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608ac: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3608acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3608b0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x3608b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x3608b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3608b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3608b8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x3608b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x3608bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3608bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608c0: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x3608c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x3608c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3608c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608c8: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x3608c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x3608cc: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x3608ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x3608d0: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x3608d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x3608d4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x3608d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x3608d8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x3608d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x3608dc: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x3608DCu;
    SET_GPR_U32(ctx, 31, 0x3608E4u);
    ctx->pc = 0x3608E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608DCu;
    // 0x3608e0: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x3608DCu, 0x3608E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608E4u;
label_3608e4:
    // 0x3608e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3608e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3608e8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x3608e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3608ec: 0x16000094  bnez        $s0, . + 4 + (0x94 << 2)
    ctx->pc = 0x3608ECu;
    {
        const bool branch_taken_0x3608ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3608F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608ECu;
        // 0x3608f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608ec) {
            ctx->pc = 0x360B40u;
            goto label_360b40;
        }
    }
    ctx->pc = 0x3608F4u;
    // 0x3608f4: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x3608f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3608f8: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x3608f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3608fc: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3608fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360900: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x360900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x360904: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x360904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360908: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x360908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x36090c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360910: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x360910u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x360914: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x360914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x360918: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x360918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x36091c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x36091cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x360920: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x360920u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x360924: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x360924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x360928: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x360928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36092c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36092cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360930: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x360930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360934: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360938: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x360938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36093c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x36093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360940: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x360940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x360944: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x360944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360948: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x360948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36094c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x36094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360950: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x360950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x360954: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x360954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x360958: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x360958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36095c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36095Cu;
    SET_GPR_U32(ctx, 31, 0x360964u);
    ctx->pc = 0x360960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36095Cu;
    // 0x360960: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36095Cu, 0x360964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360964u;
label_360964:
    // 0x360964: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360964u;
    SET_GPR_U32(ctx, 31, 0x36096Cu);
    ctx->pc = 0x360968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360964u;
    // 0x360968: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360964u, 0x36096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36096Cu;
label_36096c:
    // 0x36096c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36096cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360970: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x360970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x360974: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x360974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360978: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x360978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36097c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x36097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x360980: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x360980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x360984: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x360984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x360988: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x360988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36098c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x36098cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360990: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360994: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x360994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360998: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x360998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36099c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x36099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3609a0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3609a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3609a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3609a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3609a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3609a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3609ac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3609acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3609b0: 0x0  nop
    ctx->pc = 0x3609b0u;
    // NOP
    // 0x3609b4: 0x0  nop
    ctx->pc = 0x3609b4u;
    // NOP
    // 0x3609b8: 0x46010084  c1          0x10084
    ctx->pc = 0x3609b8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3609bc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3609bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3609c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3609c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3609c4: 0x0  nop
    ctx->pc = 0x3609c4u;
    // NOP
    // 0x3609c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3609c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3609cc: 0x0  nop
    ctx->pc = 0x3609ccu;
    // NOP
    // 0x3609d0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3609D0u;
    {
        const bool branch_taken_0x3609d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3609D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609D0u;
        // 0x3609d4: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609d0) {
            ctx->pc = 0x3609FCu;
            goto label_3609fc;
        }
    }
    ctx->pc = 0x3609D8u;
    // 0x3609d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3609d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3609dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3609dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3609e0: 0x0  nop
    ctx->pc = 0x3609e0u;
    // NOP
    // 0x3609e4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3609e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3609e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3609e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3609ec: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3609ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3609f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3609f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3609f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3609f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3609f8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3609f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_3609fc:
    // 0x3609fc: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x3609FCu;
    SET_GPR_U32(ctx, 31, 0x360A04u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x3609FCu, 0x360A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A04u;
label_360a04:
    // 0x360a04: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x360A04u;
    SET_GPR_U32(ctx, 31, 0x360A0Cu);
    ctx->pc = 0x360A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A04u;
    // 0x360a08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x360A04u, 0x360A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A0Cu;
label_360a0c:
    // 0x360a0c: 0x504000bd  beql        $v0, $zero, . + 4 + (0xBD << 2)
    ctx->pc = 0x360A0Cu;
    {
        const bool branch_taken_0x360a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360a0c) {
            ctx->pc = 0x360A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360A0Cu;
            // 0x360a10: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360D04u;
            goto label_360d04;
        }
    }
    ctx->pc = 0x360A14u;
    // 0x360a14: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x360A14u;
    SET_GPR_U32(ctx, 31, 0x360A1Cu);
    ctx->pc = 0x360A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A14u;
    // 0x360a18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x360A14u, 0x360A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A1Cu;
label_360a1c:
    // 0x360a1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x360a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x360a20: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x360a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x360a24: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x360a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360a28: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x360A28u;
    {
        const bool branch_taken_0x360a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A28u;
        // 0x360a2c: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a28) {
            ctx->pc = 0x360D00u;
            goto label_360d00;
        }
    }
    ctx->pc = 0x360A30u;
    // 0x360a30: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x360a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x360a34: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x360a34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x360a38: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x360a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x360a3c: 0x24777ee0  addiu       $s7, $v1, 0x7EE0
    ctx->pc = 0x360a3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x360a40: 0x24562828  addiu       $s6, $v0, 0x2828
    ctx->pc = 0x360a40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x360a44: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x360a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a48: 0x8ea22b20  lw          $v0, 0x2B20($s5)
    ctx->pc = 0x360a48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
    // 0x360a4c: 0x0  nop
    ctx->pc = 0x360a4cu;
    // NOP
label_360a50:
    // 0x360a50: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x360a50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x360a54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x360a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x360a58: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x360A58u;
    SET_GPR_U32(ctx, 31, 0x360A60u);
    ctx->pc = 0x360A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A58u;
    // 0x360a5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x360A58u, 0x360A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A60u;
label_360a60:
    // 0x360a60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x360a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x360a64: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x360a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x360a68: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x360A68u;
    {
        const bool branch_taken_0x360a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360a68) {
            ctx->pc = 0x360A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360A68u;
            // 0x360a6c: 0x8e822b20  lw          $v0, 0x2B20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360A9Cu;
            goto label_360a9c;
        }
    }
    ctx->pc = 0x360A70u;
    // 0x360a70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x360a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360a74: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x360a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x360a78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x360a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360a7c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x360A7Cu;
    {
        const bool branch_taken_0x360a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A7Cu;
        // 0x360a80: 0x8e822b20  lw          $v0, 0x2B20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a7c) {
            ctx->pc = 0x360A9Cu;
            goto label_360a9c;
        }
    }
    ctx->pc = 0x360A84u;
    // 0x360a84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x360a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x360a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x360a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360a90: 0x14640025  bne         $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x360A90u;
    {
        const bool branch_taken_0x360a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x360A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A90u;
        // 0x360a94: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a90) {
            ctx->pc = 0x360B28u;
            goto label_360b28;
        }
    }
    ctx->pc = 0x360A98u;
    // 0x360a98: 0x8e822b20  lw          $v0, 0x2B20($s4)
    ctx->pc = 0x360a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
label_360a9c:
    // 0x360a9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x360a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x360aa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360aa4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x360aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360aa8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x360aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360aac: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x360aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x360ab0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x360ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360ab4: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x360ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360ab8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x360ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x360abc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x360abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x360ac0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x360ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360ac4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x360ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x360ac8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x360ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x360acc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x360accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x360ad0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x360ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x360ad4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x360ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x360ad8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x360ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x360adc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x360adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x360ae0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x360ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x360ae4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x360ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x360ae8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x360ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360aec: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x360aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x360af0: 0x0  nop
    ctx->pc = 0x360af0u;
    // NOP
    // 0x360af4: 0x0  nop
    ctx->pc = 0x360af4u;
    // NOP
    // 0x360af8: 0x46000004  c1          0x4
    ctx->pc = 0x360af8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x360afc: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x360afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x360b00: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x360b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x360b04: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x360b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x360b08: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x360b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x360b0c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x360b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x360b10: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x360b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x360b14: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x360b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x360b18: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x360b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x360b1c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x360b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x360b20: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x360B20u;
    {
        const bool branch_taken_0x360b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B20u;
        // 0x360b24: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b20) {
            ctx->pc = 0x360CE4u;
            goto label_360ce4;
        }
    }
    ctx->pc = 0x360B28u;
label_360b28:
    // 0x360b28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x360b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x360b2c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x360b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360b30: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x360B30u;
    {
        const bool branch_taken_0x360b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B30u;
        // 0x360b34: 0x8ea22b20  lw          $v0, 0x2B20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b30) {
            ctx->pc = 0x360A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360a50;
        }
    }
    ctx->pc = 0x360B38u;
    // 0x360b38: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x360B38u;
    {
        const bool branch_taken_0x360b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B38u;
        // 0x360b3c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b38) {
            ctx->pc = 0x360D04u;
            goto label_360d04;
        }
    }
    ctx->pc = 0x360B40u;
label_360b40:
    // 0x360b40: 0x56020070  bnel        $s0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x360B40u;
    {
        const bool branch_taken_0x360b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x360b40) {
            ctx->pc = 0x360B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360B40u;
            // 0x360b44: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360D04u;
            goto label_360d04;
        }
    }
    ctx->pc = 0x360B48u;
    // 0x360b48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360B48u;
    SET_GPR_U32(ctx, 31, 0x360B50u);
    ctx->pc = 0x360B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B48u;
    // 0x360b4c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360B48u, 0x360B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B50u;
label_360b50:
    // 0x360b50: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x360b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x360b54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x360b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360b58: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x360b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x360b5c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x360b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x360b60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x360b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x360b64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x360b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x360b68: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x360b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360b6c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x360b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360b70: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x360b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360b74: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x360b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360b78: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x360b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x360b7c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x360b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x360b80: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x360b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x360b84: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x360b84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x360b88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x360b88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360b8c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x360b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360b90: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x360b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b94: 0xc07a4fc  jal         func_1E93F0
    ctx->pc = 0x360B94u;
    SET_GPR_U32(ctx, 31, 0x360B9Cu);
    ctx->pc = 0x360B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B94u;
    // 0x360b98: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93F0u, 0x360B94u, 0x360B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B9Cu;
label_360b9c:
    // 0x360b9c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x360B9Cu;
    {
        const bool branch_taken_0x360b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B9Cu;
        // 0x360ba0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b9c) {
            ctx->pc = 0x360D00u;
            goto label_360d00;
        }
    }
    ctx->pc = 0x360BA4u;
    // 0x360ba4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360BA4u;
    SET_GPR_U32(ctx, 31, 0x360BACu);
    ctx->pc = 0x360BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360BA4u;
    // 0x360ba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360BA4u, 0x360BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360BACu;
label_360bac:
    // 0x360bac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x360bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x360bb0: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x360bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x360bb4: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x360BB4u;
    {
        const bool branch_taken_0x360bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x360BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360BB4u;
        // 0x360bb8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360bb4) {
            ctx->pc = 0x360D00u;
            goto label_360d00;
        }
    }
    ctx->pc = 0x360BBCu;
    // 0x360bbc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x360bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x360bc0: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x360bc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x360bc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x360bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360bc8:
    // 0x360bc8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x360bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x360bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360bd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360bd4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x360BD4u;
    {
        const bool branch_taken_0x360bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x360bd4) {
            ctx->pc = 0x360BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360BD4u;
            // 0x360bd8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360BE8u;
            goto label_360be8;
        }
    }
    ctx->pc = 0x360BDCu;
    // 0x360bdc: 0x1455000c  bne         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x360BDCu;
    {
        const bool branch_taken_0x360bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x360BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360BDCu;
        // 0x360be0: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360bdc) {
            ctx->pc = 0x360C10u;
            goto label_360c10;
        }
    }
    ctx->pc = 0x360BE4u;
    // 0x360be4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x360be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_360be8:
    // 0x360be8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x360be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360bec: 0x8c452b20  lw          $a1, 0x2B20($v0)
    ctx->pc = 0x360becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x360bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x360bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360bfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x360bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x360c00: 0xc0d80c6  jal         func_360318
    ctx->pc = 0x360C00u;
    SET_GPR_U32(ctx, 31, 0x360C08u);
    ctx->pc = 0x360C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360C00u;
    // 0x360c04: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360318u, 0x360C00u, 0x360C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C08u;
label_360c08:
    // 0x360c08: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x360C08u;
    {
        const bool branch_taken_0x360c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C08u;
        // 0x360c0c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360c08) {
            ctx->pc = 0x360CF0u;
            goto label_360cf0;
        }
    }
    ctx->pc = 0x360C10u;
label_360c10:
    // 0x360c10: 0x8e822b20  lw          $v0, 0x2B20($s4)
    ctx->pc = 0x360c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x360c14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x360c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x360c18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360c1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x360c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360c20: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x360c20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360c24: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x360c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x360c28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x360c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360c2c: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x360c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360c30: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x360c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x360c34: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x360c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x360c38: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x360c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360c3c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x360c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x360c40: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x360c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x360c44: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x360c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x360c48: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x360c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x360c4c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x360c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x360c50: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x360c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x360c54: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x360c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x360c58: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x360c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x360c5c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x360c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x360c60: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x360c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360c64: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x360c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x360c68: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x360c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x360c6c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x360c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x360c70: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x360c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x360c74: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x360c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x360c78: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x360c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x360c7c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x360c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x360c80: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x360c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x360c84: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x360c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x360c88: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x360c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x360c8c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x360c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x360c90: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x360c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360c94: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x360c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360c98: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360c98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360c9c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x360c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360ca0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x360ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360ca4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x360ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360ca8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x360ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360cac: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x360cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360cb0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x360cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x360cb4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x360cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x360cb8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x360cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x360cbc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x360cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x360cc0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x360cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x360cc4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x360cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360cc8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x360cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360ccc: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x360cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360cd0: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x360cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x360cd4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x360cd4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x360cd8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x360cd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x360cdc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x360cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x360ce0: 0x46000004  c1          0x4
    ctx->pc = 0x360ce0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_360ce4:
    // 0x360ce4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x360ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x360ce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x360CE8u;
    {
        const bool branch_taken_0x360ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360CE8u;
        // 0x360cec: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ce8) {
            ctx->pc = 0x360D00u;
            goto label_360d00;
        }
    }
    ctx->pc = 0x360CF0u;
label_360cf0:
    // 0x360cf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x360cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x360cf4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x360cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360cf8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x360CF8u;
    {
        const bool branch_taken_0x360cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360CF8u;
        // 0x360cfc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360cf8) {
            ctx->pc = 0x360BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360bc8;
        }
    }
    ctx->pc = 0x360D00u;
label_360d00:
    // 0x360d00: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x360d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_360d04:
    // 0x360d04: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x360d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x360d08: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x360d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x360d0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x360d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360d10: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x360d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x360d14: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x360d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x360d18: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x360d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x360d1c: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x360d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x360d20: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x360d20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x360d24: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x360d24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x360d28: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x360d28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x360d2c: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x360d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x360d30: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x360d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360d34: 0x3e00008  jr          $ra
    ctx->pc = 0x360D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D34u;
        // 0x360d38: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360D3Cu;
    // 0x360d3c: 0x0  nop
    ctx->pc = 0x360d3cu;
    // NOP
    ctx->pc = 0x360d40u;
}
