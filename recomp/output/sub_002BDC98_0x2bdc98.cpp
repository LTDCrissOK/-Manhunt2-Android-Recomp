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

// Function: sub_002BDC98
// Address: 0x2bdc98 - 0x2bdde0
void sub_002BDC98_0x2bdc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDC98_0x2bdc98");
#endif

    switch (ctx->pc) {
        case 0x2bdcc8u: goto label_2bdcc8;
        default: break;
    }

    ctx->pc = 0x2bdc98u;

    // 0x2bdc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bdc9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2bdc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2bdca0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bdca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bdca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bdca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdca8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2bdca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2bdcac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2bdcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bdcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bdcb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bdcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bdcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bdcbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bdcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdcc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BDCC0u;
    SET_GPR_U32(ctx, 31, 0x2BDCC8u);
    ctx->pc = 0x2BDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCC0u;
    // 0x2bdcc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BDCC0u, 0x2BDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCC8u;
label_2bdcc8:
    // 0x2bdcc8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2bdcc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bdccc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2bdcccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bdcd0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bdcd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bdcd4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bdcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bdcd8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2bdcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdcdc: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x2bdcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bdce0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2bdce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdce4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2bdce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdce8: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2bdce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bdcec: 0x46080241  sub.s       $f9, $f0, $f8
    ctx->pc = 0x2bdcecu;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2bdcf0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2bdcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdcf4: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2bdcf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2bdcf8: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x2bdcf8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x2bdcfc: 0xc6270008  lwc1        $f7, 0x8($s1)
    ctx->pc = 0x2bdcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bdd00: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2bdd00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2bdd04: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2bdd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bdd08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bdd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdd0c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2bdd0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2bdd10: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2bdd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdd14: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2bdd14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2bdd18: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2bdd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdd1c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2bdd1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2bdd20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bdd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bdd24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2bdd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd28: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x2bdd28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2bdd2c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2bdd2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2bdd30: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2bdd30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2bdd34: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2bdd34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bdd38: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2bdd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2bdd3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bdd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bdd40: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2bdd40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2bdd44: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x2bdd44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2bdd48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdd48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdd4c: 0x0  nop
    ctx->pc = 0x2bdd4cu;
    // NOP
    // 0x2bdd50: 0x0  nop
    ctx->pc = 0x2bdd50u;
    // NOP
    // 0x2bdd54: 0x460010c3  div.s       $f3, $f2, $f0
    ctx->pc = 0x2bdd54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2bdd58: 0x460a1834  c.lt.s      $f3, $f10
    ctx->pc = 0x2bdd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd5c: 0x0  nop
    ctx->pc = 0x2bdd5cu;
    // NOP
    // 0x2bdd60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BDD60u;
    {
        const bool branch_taken_0x2bdd60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdd60) {
            ctx->pc = 0x2BDD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDD60u;
            // 0x2bdd64: 0x460050c6  mov.s       $f3, $f10 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD68u;
            goto label_2bdd68;
        }
    }
    ctx->pc = 0x2BDD68u;
label_2bdd68:
    // 0x2bdd68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd70: 0x0  nop
    ctx->pc = 0x2bdd70u;
    // NOP
    // 0x2bdd74: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bdd74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd78: 0x0  nop
    ctx->pc = 0x2bdd78u;
    // NOP
    // 0x2bdd7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BDD7Cu;
    {
        const bool branch_taken_0x2bdd7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdd7c) {
            ctx->pc = 0x2BDD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDD7Cu;
            // 0x2bdd80: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD84u;
            goto label_2bdd84;
        }
    }
    ctx->pc = 0x2BDD84u;
label_2bdd84:
    // 0x2bdd84: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x2bdd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2bdd88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bdd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bdd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdd90: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x2bdd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2bdd94: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2bdd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2bdd98: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2bdd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd9c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2bdd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdda0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bdda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bdda4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdda8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bdda8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bddac: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x2bddacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2bddb0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2bddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bddb4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2bddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bddb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2bddb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bddbc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bddbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bddc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bddc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bddc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bddc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bddc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bddc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bddcc: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2bddccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2bddd0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2bddd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bddd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDD4u;
        // 0x2bddd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDDDCu;
    // 0x2bdddc: 0x0  nop
    ctx->pc = 0x2bdddcu;
    // NOP
    ctx->pc = 0x2bdde0u;
}
