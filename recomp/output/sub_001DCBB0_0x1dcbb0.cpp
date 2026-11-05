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

// Function: sub_001DCBB0
// Address: 0x1dcbb0 - 0x1dcfc0
void sub_001DCBB0_0x1dcbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBB0_0x1dcbb0");
#endif

    switch (ctx->pc) {
        case 0x1dcc18u: goto label_1dcc18;
        case 0x1dcc2cu: goto label_1dcc2c;
        default: break;
    }

    ctx->pc = 0x1dcbb0u;

    // 0x1dcbb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dcbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dcbb4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1dcbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1dcbb8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1dcbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1dcbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1dcbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1dcbc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dcbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1dcbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1dcbcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dcbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1dcbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1dcbd4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1dcbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1dcbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1dcbdc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1dcbdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1dcbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1dcbe4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1dcbe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1dcbe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1dcbec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1dcbecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1dcbf0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dcbf4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1dcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dcbf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dcbf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcbfc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1dcbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcc00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1dcc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcc04: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x1dcc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x1dcc08: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1dcc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1dcc0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1dcc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1dcc10: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DCC10u;
    SET_GPR_U32(ctx, 31, 0x1DCC18u);
    ctx->pc = 0x1DCC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC10u;
    // 0x1dcc14: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DCC10u, 0x1DCC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC18u;
label_1dcc18:
    // 0x1dcc18: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1dcc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcc1c: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x1dcc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dcc20: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1dcc20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1dcc24: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DCC24u;
    SET_GPR_U32(ctx, 31, 0x1DCC2Cu);
    ctx->pc = 0x1DCC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC24u;
    // 0x1dcc28: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DCC24u, 0x1DCC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC2Cu;
label_1dcc2c:
    // 0x1dcc2c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1dcc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dcc30: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x1dcc30u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x1dcc34: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1dcc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcc38: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1dcc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dcc3c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x1dcc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dcc40: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1dcc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcc44: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1dcc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcc48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dcc4c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1dcc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dcc50: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1dcc50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1dcc54: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x1dcc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dcc58: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1dcc58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1dcc5c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1dcc5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1dcc60: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dcc64: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1dcc64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1dcc68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1dcc68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dcc6c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1dcc6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dcc70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dcc74: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1dcc74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dcc78: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dcc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dcc7c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1dcc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dcc80: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x1dcc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dcc84: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x1dcc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1dcc88: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x1dcc88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1dcc8c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1dcc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcc90: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x1dcc90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x1dcc94: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x1dcc94u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x1dcc98: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1dcc98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1dcc9c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1dcc9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dcca0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x1dcca0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dcca4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1dcca4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1dcca8: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x1dcca8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dccac: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1dccacu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x1dccb0: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1dccb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dccb4: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1dccb4u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x1dccb8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1dccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dccbc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1dccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dccc0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dccc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dccc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dccc8: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x1dccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1dcccc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1dccccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dccd0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1dccd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1dccd4: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x1dccd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dccd8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1dccd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1dccdc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dccdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dcce0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1dcce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dcce4: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1dcce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dcce8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1dcce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1dccec: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x1dccecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dccf0: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x1dccf0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dccf4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1dccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1dccf8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dccf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dccfc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dccfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcd00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcd00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcd04: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcd08: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dcd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcd0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dcd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dcd10: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1dcd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd14: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1dcd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd18: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1dcd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcd1c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1dcd1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dcd20: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1dcd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dcd24: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1dcd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dcd28: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1dcd28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dcd2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dcd2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dcd30: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dcd30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd34: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcd34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcd38: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcd3c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dcd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcd40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dcd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dcd44: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1dcd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd48: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1dcd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd4c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1dcd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcd50: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1dcd50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dcd54: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1dcd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dcd58: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1dcd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dcd5c: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1dcd5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dcd60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dcd60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcd64: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1dcd64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dcd68: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcd6c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcd70: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dcd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcd74: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dcd78: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1dcd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd7c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1dcd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd80: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1dcd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcd84: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1dcd84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dcd88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1dcd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dcd8c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1dcd8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dcd90: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1dcd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dcd94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dcd94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcd98: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1dcd98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcd9c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcda0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dcda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcda4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dcda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcda8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcdac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dcdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcdb0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dcdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcdb4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcdb8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dcdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcdbc: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dcdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcdc0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dcdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dcdc4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1dcdc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dcdc8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1dcdc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dcdcc: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1dcdccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dcdd0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dcdd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dcdd4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dcdd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcdd8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcdd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcddc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dcddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcde0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dcde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcde4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dcde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcde8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dcde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcdec: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dcdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcdf0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dcdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dcdf4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1dcdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dcdf8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1dcdf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dcdfc: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1dcdfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dce00: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dce00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dce04: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1dce04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dce08: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dce08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce0c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce10: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce14: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce18: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dce1c: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dce20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1dce20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dce24: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1dce24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dce28: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1dce28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dce2c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1dce2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dce30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dce30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dce34: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1dce34u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dce38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dce3c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dce3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dce40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dce40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce44: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce48: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce4c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce50: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dce54: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dce58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dce5c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1dce5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dce60: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1dce60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dce64: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1dce64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dce68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dce68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dce6c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dce6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce70: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dce70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce74: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce78: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce7c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce80: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dce84: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dce88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dce8c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1dce8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dce90: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1dce90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dce94: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1dce94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dce98: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dce98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dce9c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1dce9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dcea0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcea4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dcea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcea8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dcea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dceac: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dceb0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dceb4: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dceb8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1dceb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dcebc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1dcebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dcec0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1dcec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dcec4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1dcec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dcec8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dcec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcecc: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1dceccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dced0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1dced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dced4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1dced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dced8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1dced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcedc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dcedcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dcee0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1dcee0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1dcee4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1dcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1dcee8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1dcee8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1dceec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1dceecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dcef0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1dcef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dcef4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1dcef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dcef8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dcef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dcefc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dcefcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcf00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcf00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcf04: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcf08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf0c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1dcf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf10: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1dcf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcf14: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dcf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcf18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dcf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dcf1c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1dcf1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dcf20: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1dcf20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dcf24: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1dcf24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dcf28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dcf28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dcf2c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dcf2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf30: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcf30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcf34: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcf38: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dcf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf3c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1dcf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf40: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1dcf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcf44: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dcf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcf48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dcf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dcf4c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1dcf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dcf50: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1dcf50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dcf54: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1dcf54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dcf58: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dcf58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcf5c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1dcf5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dcf60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dcf60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dcf64: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcf68: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dcf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf6c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1dcf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf70: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1dcf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcf74: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dcf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcf78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1dcf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dcf7c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1dcf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dcf80: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1dcf80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dcf84: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1dcf84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dcf88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dcf88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcf8c: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1dcf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dcf90: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1dcf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dcf94: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1dcf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dcf98: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1dcf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dcf9c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1dcf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dcfa0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1dcfa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dcfa4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1dcfa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dcfa8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dcfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dcfac: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1dcfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dcfb0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1dcfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dcfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFB4u;
        // 0x1dcfb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFBCu;
    // 0x1dcfbc: 0x0  nop
    ctx->pc = 0x1dcfbcu;
    // NOP
    ctx->pc = 0x1dcfc0u;
}
