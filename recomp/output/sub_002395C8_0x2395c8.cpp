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

// Function: sub_002395C8
// Address: 0x2395c8 - 0x239868
void sub_002395C8_0x2395c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002395C8_0x2395c8");
#endif

    switch (ctx->pc) {
        case 0x239620u: goto label_239620;
        case 0x239820u: goto label_239820;
        default: break;
    }

    ctx->pc = 0x2395c8u;

    // 0x2395c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2395c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2395cc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2395ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2395d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2395d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395d4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2395d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2395d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2395d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395dc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2395dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2395e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2395e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395e4: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x2395e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2395e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2395e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395ec: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x2395ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2395f0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x2395f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2395f4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2395f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2395f8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2395f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2395fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2395fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x239600: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x239600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x239604: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x239604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239608: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x239608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23960c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x23960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239610: 0x46020601  sub.s       $f24, $f0, $f2
    ctx->pc = 0x239610u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x239614: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x239614u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x239618: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x239618u;
    SET_GPR_U32(ctx, 31, 0x239620u);
    ctx->pc = 0x23961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239618u;
    // 0x23961c: 0x46011641  sub.s       $f25, $f2, $f1 (Delay Slot)
    ctx->f[25] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239618u, 0x239620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239620u;
label_239620:
    // 0x239620: 0x4600c5c5  abs.s       $f23, $f24
    ctx->pc = 0x239620u;
    ctx->f[23] = FPU_ABS_S(ctx->f[24]);
    // 0x239624: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x239628: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x239628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23962c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23962cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239630: 0x4600a545  abs.s       $f21, $f20
    ctx->pc = 0x239630u;
    ctx->f[21] = FPU_ABS_S(ctx->f[20]);
    // 0x239634: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x239634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239638: 0x0  nop
    ctx->pc = 0x239638u;
    // NOP
    // 0x23963c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x23963Cu;
    {
        const bool branch_taken_0x23963c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x4600cd85  abs.s       $f22, $f25 (Delay Slot)
        ctx->f[22] = FPU_ABS_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23963c) {
            ctx->pc = 0x239664u;
            goto label_239664;
        }
    }
    ctx->pc = 0x239644u;
    // 0x239644: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x239644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x239648: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x239648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23964c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23964cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239650: 0x0  nop
    ctx->pc = 0x239650u;
    // NOP
    // 0x239654: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x239654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239658: 0x0  nop
    ctx->pc = 0x239658u;
    // NOP
    // 0x23965c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23965Cu;
    {
        const bool branch_taken_0x23965c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23965c) {
            ctx->pc = 0x239678u;
            goto label_239678;
        }
    }
    ctx->pc = 0x239664u;
label_239664:
    // 0x239664: 0x0  nop
    ctx->pc = 0x239664u;
    // NOP
    // 0x239668: 0x0  nop
    ctx->pc = 0x239668u;
    // NOP
    // 0x23966c: 0x4615b043  div.s       $f1, $f22, $f21
    ctx->pc = 0x23966cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
    // 0x239670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239670u;
    {
        const bool branch_taken_0x239670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239670) {
            ctx->pc = 0x239680u;
            goto label_239680;
        }
    }
    ctx->pc = 0x239678u;
label_239678:
    // 0x239678: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23967c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23967cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_239680:
    // 0x239680: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x239680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x239684: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239688: 0x0  nop
    ctx->pc = 0x239688u;
    // NOP
    // 0x23968c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23968cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239690: 0x0  nop
    ctx->pc = 0x239690u;
    // NOP
    // 0x239694: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x239694u;
    {
        const bool branch_taken_0x239694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x239694) {
            ctx->pc = 0x239724u;
            goto label_239724;
        }
    }
    ctx->pc = 0x23969Cu;
    // 0x23969c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2396a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2396a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396a4: 0x0  nop
    ctx->pc = 0x2396a4u;
    // NOP
    // 0x2396a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2396a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2396ac: 0x0  nop
    ctx->pc = 0x2396acu;
    // NOP
    // 0x2396b0: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2396B0u;
    {
        const bool branch_taken_0x2396b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2396b0) {
            ctx->pc = 0x239724u;
            goto label_239724;
        }
    }
    ctx->pc = 0x2396B8u;
    // 0x2396b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2396b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2396bc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2396bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2396c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2396c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2396c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2396c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2396c8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2396c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2396cc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2396d0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2396d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2396d4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2396d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2396d8: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x2396d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2396dc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2396dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2396e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2396e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2396e4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2396e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2396e8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2396e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2396ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2396ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2396f0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2396f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2396f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2396f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2396f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2396f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2396fc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2396fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x239700: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x239700u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x239704: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x239704u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x239708: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x239708u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23970c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x23970cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x239710: 0x0  nop
    ctx->pc = 0x239710u;
    // NOP
    // 0x239714: 0x0  nop
    ctx->pc = 0x239714u;
    // NOP
    // 0x239718: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x239718u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
    // 0x23971c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23971Cu;
    {
        const bool branch_taken_0x23971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23971c) {
            ctx->pc = 0x239804u;
            goto label_239804;
        }
    }
    ctx->pc = 0x239724u;
label_239724:
    // 0x239724: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x239724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239728: 0x0  nop
    ctx->pc = 0x239728u;
    // NOP
    // 0x23972c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x23972Cu;
    {
        const bool branch_taken_0x23972c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23972c) {
            ctx->pc = 0x2397A0u;
            goto label_2397a0;
        }
    }
    ctx->pc = 0x239734u;
    // 0x239734: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x239734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239738: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x239738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23973c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23973cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239740: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x239740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239744: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x239744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239748: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23974c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239750: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x239750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239754: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x239754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239758: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x239758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23975c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x239760: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x239760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x239764: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x239764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239768: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23976c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239770: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x239770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239774: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x239774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239778: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x239778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23977c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23977cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x239780: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x239780u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x239784: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x239784u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x239788: 0x460c0304  c1          0xC0304
    ctx->pc = 0x239788u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x23978c: 0x0  nop
    ctx->pc = 0x23978cu;
    // NOP
    // 0x239790: 0x0  nop
    ctx->pc = 0x239790u;
    // NOP
    // 0x239794: 0x460ccb03  div.s       $f12, $f25, $f12
    ctx->pc = 0x239794u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[25], ctx->f[12]); }
    // 0x239798: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x239798u;
    {
        const bool branch_taken_0x239798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239798) {
            ctx->pc = 0x239804u;
            goto label_239804;
        }
    }
    ctx->pc = 0x2397A0u;
label_2397a0:
    // 0x2397a0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2397a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2397a4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2397a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2397a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2397a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2397ac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2397acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2397b0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2397b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2397b4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2397b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2397b8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2397b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2397bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2397bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2397c0: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x2397c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2397c4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2397c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2397c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2397c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2397cc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2397ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2397d0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2397d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2397d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2397d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2397d8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2397d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2397dc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2397dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2397e0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2397e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2397e4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2397e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2397e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2397e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2397ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2397ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2397f0: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x2397f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2397f4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2397f4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2397f8: 0x0  nop
    ctx->pc = 0x2397f8u;
    // NOP
    // 0x2397fc: 0x0  nop
    ctx->pc = 0x2397fcu;
    // NOP
    // 0x239800: 0x460cc303  div.s       $f12, $f24, $f12
    ctx->pc = 0x239800u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[24], ctx->f[12]); }
label_239804:
    // 0x239804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239808: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x239808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23980c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x23980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x239810: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x239810u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x239814: 0x460d0344  c1          0xD0344
    ctx->pc = 0x239814u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x239818: 0xc0e404c  jal         func_390130
    ctx->pc = 0x239818u;
    SET_GPR_U32(ctx, 31, 0x239820u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x239818u, 0x239820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239820u;
label_239820:
    // 0x239820: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x239824: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x239824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x239828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23982c: 0x0  nop
    ctx->pc = 0x23982cu;
    // NOP
    // 0x239830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x239830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x239834: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x239834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239838: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23983c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23983cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239840: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x239840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x239844: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x239844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x239848: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x239848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23984c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x23984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x239850: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x239850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x239854: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x239854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x239858: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x239858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23985c: 0x3e00008  jr          $ra
    ctx->pc = 0x23985Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23985Cu;
        // 0x239860: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23985Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239864u;
    // 0x239864: 0x0  nop
    ctx->pc = 0x239864u;
    // NOP
    ctx->pc = 0x239868u;
}
