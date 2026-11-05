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

// Function: sub_001C56A8
// Address: 0x1c56a8 - 0x1c5ce8
void sub_001C56A8_0x1c56a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C56A8_0x1c56a8");
#endif

    switch (ctx->pc) {
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c59dcu: goto label_1c59dc;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a98u: goto label_1c5a98;
        case 0x1c5ac4u: goto label_1c5ac4;
        case 0x1c5af4u: goto label_1c5af4;
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b24u: goto label_1c5b24;
        case 0x1c5ba0u: goto label_1c5ba0;
        case 0x1c5bc8u: goto label_1c5bc8;
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5c0cu: goto label_1c5c0c;
        case 0x1c5c28u: goto label_1c5c28;
        default: break;
    }

    ctx->pc = 0x1c56a8u;

    // 0x1c56a8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1c56a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1c56ac: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1c56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1c56b0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1c56b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1c56b4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c56b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c56b8: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x1c56b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x1c56bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c56bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56c0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1c56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1c56c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c56c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56c8: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1c56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1c56cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56d0: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1c56d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1c56d4: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x1c56d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x1c56d8: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x1c56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x1c56dc: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x1c56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x1c56e0: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1c56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1c56e4: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1c56e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1c56e8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1c56e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1c56ec: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1c56ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1c56f0: 0x8ec20318  lw          $v0, 0x318($s6)
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 792)));
    // 0x1c56f4: 0x8c420fe8  lw          $v0, 0xFE8($v0)
    ctx->pc = 0x1c56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c56f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C56F8u;
    SET_GPR_U32(ctx, 31, 0x1C5700u);
    ctx->pc = 0x1C56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56F8u;
    // 0x1c56fc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C56F8u, 0x1C5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5700u;
label_1c5700:
    // 0x1c5700: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x1C5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5700u;
    // 0x1c5704: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1c5708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1c570c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5710: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1c5710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1c5714: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c5714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1c5718: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1c5718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1c571c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1c571cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5720: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1c5720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1c5724: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c5724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c5728: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c572c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1c572cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1c5730: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c5730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1c5734: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1c5734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1c5738: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c5738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c573c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5740: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1c5740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1c5744: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1c5744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1c5748: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c5748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1c574c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1c574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1c5750: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c5750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5754: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c5754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5758: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1c5758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c575c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c5760: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1c5760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1c5764: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5768: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c5768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c576c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1c576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1c5770: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c5770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5774: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c5774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5778: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c5778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c577c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c5780: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1c5780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5784: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1c5784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5788: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1c5788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c578c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c578cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c5790: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c5790u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c5794: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c5794u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c5798: 0x0  nop
    ctx->pc = 0x1c5798u;
    // NOP
    // 0x1c579c: 0x0  nop
    ctx->pc = 0x1c579cu;
    // NOP
    // 0x1c57a0: 0x46010084  c1          0x10084
    ctx->pc = 0x1c57a0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c57a4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c57a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c57a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c57a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57ac: 0x0  nop
    ctx->pc = 0x1c57acu;
    // NOP
    // 0x1c57b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c57b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c57b4: 0x0  nop
    ctx->pc = 0x1c57b4u;
    // NOP
    // 0x1c57b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C57B8u;
    {
        const bool branch_taken_0x1c57b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57b8) {
            ctx->pc = 0x1C57ECu;
            goto label_1c57ec;
        }
    }
    ctx->pc = 0x1C57C0u;
    // 0x1c57c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c57c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c57c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c57c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57c8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c57cc: 0x0  nop
    ctx->pc = 0x1c57ccu;
    // NOP
    // 0x1c57d0: 0x0  nop
    ctx->pc = 0x1c57d0u;
    // NOP
    // 0x1c57d4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c57d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c57d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c57d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c57dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c57dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c57e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c57e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c57e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c57e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c57e8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c57ec:
    // 0x1c57ec: 0x8ec40060  lw          $a0, 0x60($s6)
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1c57f0: 0x26c20060  addiu       $v0, $s6, 0x60
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1c57f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c57f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f8: 0x26c30070  addiu       $v1, $s6, 0x70
    ctx->pc = 0x1c57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x1c57fc: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x1c57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x1c5800: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1c5800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5804: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x1c5808: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1c5808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1c580c: 0x8ec30318  lw          $v1, 0x318($s6)
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 792)));
    // 0x1c5810: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1C5810u;
    SET_GPR_U32(ctx, 31, 0x1C5818u);
    ctx->pc = 0x1C5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5810u;
    // 0x1c5814: 0x8c640ff0  lw          $a0, 0xFF0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1C5810u, 0x1C5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5818u;
label_1c5818:
    // 0x1c5818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5818u;
    {
        const bool branch_taken_0x1c5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5818u;
        // 0x1c581c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5818) {
            ctx->pc = 0x1C5834u;
            goto label_1c5834;
        }
    }
    ctx->pc = 0x1C5820u;
    // 0x1c5820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c5824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5828: 0xc440c61c  lwc1        $f0, -0x39E4($v0)
    ctx->pc = 0x1c5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c582c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C582Cu;
    {
        const bool branch_taken_0x1c582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C582Cu;
        // 0x1c5830: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c582c) {
            ctx->pc = 0x1C583Cu;
            goto label_1c583c;
        }
    }
    ctx->pc = 0x1C5834u;
label_1c5834:
    // 0x1c5834: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c5834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c5838: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c5838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c583c:
    // 0x1c583c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5840: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c5840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c5844: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1c5844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1c5848: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c5848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c584c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c5850: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x1c5854: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1c5854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c5858: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x1c5858u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1c585c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x1c585cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c5860: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x1C5860u;
    {
        const bool branch_taken_0x1c5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5860u;
        // 0x1c5864: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5860) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5868u;
    // 0x1c5868: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1c5868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1c586c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1c586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1c5870: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c5870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5874: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1c5874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5878: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x1c5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c587c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1c587cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c5880: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1c5880u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5888: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c5888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c588c: 0xafb40090  sw          $s4, 0x90($sp)
    ctx->pc = 0x1c588cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 20));
    // 0x1c5890: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1c5890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x1c5894: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1c5894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1c5898: 0xafb3009c  sw          $s3, 0x9C($sp)
    ctx->pc = 0x1c5898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 19));
    // 0x1c589c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1c589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1c58a0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1c58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1c58a4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1c58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1c58a8:
    // 0x1c58a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c58a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c58ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c58acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c58b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c58b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c58b8: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1c58bc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1c58bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c58c0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c58c4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c58c8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c58c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c58cc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c58ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c58d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c58d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c58d4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c58d8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1c58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1c58dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c58dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c58e0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c58e4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1c58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c58e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c58e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c58ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c58ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c58f0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c58f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c58f4: 0x0  nop
    ctx->pc = 0x1c58f4u;
    // NOP
    // 0x1c58f8: 0x0  nop
    ctx->pc = 0x1c58f8u;
    // NOP
    // 0x1c58fc: 0x46000044  c1          0x44
    ctx->pc = 0x1c58fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c5900: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c5904: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x1c5904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5908: 0x0  nop
    ctx->pc = 0x1c5908u;
    // NOP
    // 0x1c590c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C590Cu;
    {
        const bool branch_taken_0x1c590c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C590Cu;
        // 0x1c5910: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c590c) {
            ctx->pc = 0x1C5938u;
            goto label_1c5938;
        }
    }
    ctx->pc = 0x1C5914u;
    // 0x1c5914: 0x0  nop
    ctx->pc = 0x1c5914u;
    // NOP
    // 0x1c5918: 0x0  nop
    ctx->pc = 0x1c5918u;
    // NOP
    // 0x1c591c: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x1c591cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x1c5920: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5924: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c5924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c5928: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c5928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c592c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c592cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c5930: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c5930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5934: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c5934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c5938:
    // 0x1c5938: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1c5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c593c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c5940: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5944: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1c5944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1c5948: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c5948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c594c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c594cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5950: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c5950u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5954: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c5954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c5958: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c5958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c595c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1c5960: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1c5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5964: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1c5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5968: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1c5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c596c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c596cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c5970: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c5970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c5974: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c5974u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c5978: 0x0  nop
    ctx->pc = 0x1c5978u;
    // NOP
    // 0x1c597c: 0x0  nop
    ctx->pc = 0x1c597cu;
    // NOP
    // 0x1c5980: 0x46000044  c1          0x44
    ctx->pc = 0x1c5980u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c5984: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c5984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c5988: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x1c5988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c598c: 0x0  nop
    ctx->pc = 0x1c598cu;
    // NOP
    // 0x1c5990: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C5990u;
    {
        const bool branch_taken_0x1c5990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5990u;
        // 0x1c5994: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5990) {
            ctx->pc = 0x1C59BCu;
            goto label_1c59bc;
        }
    }
    ctx->pc = 0x1C5998u;
    // 0x1c5998: 0x0  nop
    ctx->pc = 0x1c5998u;
    // NOP
    // 0x1c599c: 0x0  nop
    ctx->pc = 0x1c599cu;
    // NOP
    // 0x1c59a0: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x1c59a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x1c59a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c59a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c59a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c59ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c59acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c59b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c59b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c59b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c59b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c59b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c59b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c59bc:
    // 0x1c59bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c59c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c59c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59c4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x1c59c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c59c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c59cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c59ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c59d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59d4: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x1C59D4u;
    SET_GPR_U32(ctx, 31, 0x1C59DCu);
    ctx->pc = 0x1C59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59D4u;
    // 0x1c59d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x1C59D4u, 0x1C59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59DCu;
label_1c59dc:
    // 0x1c59dc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C59DCu;
    {
        const bool branch_taken_0x1c59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59dc) {
            ctx->pc = 0x1C5AD8u;
            goto label_1c5ad8;
        }
    }
    ctx->pc = 0x1C59E4u;
    // 0x1c59e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c59e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c59ec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C59ECu;
    {
        const bool branch_taken_0x1c59ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59ECu;
        // 0x1c59f0: 0x27b50074  addiu       $s5, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59ec) {
            ctx->pc = 0x1C5A10u;
            goto label_1c5a10;
        }
    }
    ctx->pc = 0x1C59F4u;
    // 0x1c59f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C59F4u;
    {
        const bool branch_taken_0x1c59f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59F4u;
        // 0x1c59f8: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59f4) {
            ctx->pc = 0x1C5A00u;
            goto label_1c5a00;
        }
    }
    ctx->pc = 0x1C59FCu;
    // 0x1c59fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c5a00:
    // 0x1c5a00: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1c5a04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c5a08: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1C5A08u;
    {
        const bool branch_taken_0x1c5a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A08u;
        // 0x1c5a0c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a08) {
            ctx->pc = 0x1C5C28u;
            goto label_1c5c28;
        }
    }
    ctx->pc = 0x1C5A10u;
label_1c5a10:
    // 0x1c5a10: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1c5a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1c5a14: 0x8ec20060  lw          $v0, 0x60($s6)
    ctx->pc = 0x1c5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1c5a18: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c5a1c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1c5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c5a20: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x1c5a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1c5a24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5a28: 0xafb7007c  sw          $s7, 0x7C($sp)
    ctx->pc = 0x1c5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 23));
    // 0x1c5a2c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1c5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1c5a30: 0x57182b  sltu        $v1, $v0, $s7
    ctx->pc = 0x1c5a30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1c5a34: 0xc3280a  movz        $a1, $a2, $v1
    ctx->pc = 0x1c5a34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x1c5a38: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5a3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5a40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5A40u;
    {
        const bool branch_taken_0x1c5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A40u;
        // 0x1c5a44: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a40) {
            ctx->pc = 0x1C5A5Cu;
            goto label_1c5a5c;
        }
    }
    ctx->pc = 0x1C5A48u;
    // 0x1c5a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A54u);
    ctx->pc = 0x1C5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A4Cu;
    // 0x1c5a50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C5A4Cu, 0x1C5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A54u;
label_1c5a54:
    // 0x1c5a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5A54u;
    {
        const bool branch_taken_0x1c5a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A54u;
        // 0x1c5a58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a54) {
            ctx->pc = 0x1C5A64u;
            goto label_1c5a64;
        }
    }
    ctx->pc = 0x1C5A5Cu;
label_1c5a5c:
    // 0x1c5a5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c5a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5a64:
    // 0x1c5a64: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1c5a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c5a68: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5A68u;
    {
        const bool branch_taken_0x1c5a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A68u;
        // 0x1c5a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a68) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C5A70u;
    // 0x1c5a70: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c5a74: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C5A74u;
    SET_GPR_U32(ctx, 31, 0x1C5A7Cu);
    ctx->pc = 0x1C5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A74u;
    // 0x1c5a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C5A74u, 0x1C5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5A7Cu;
    {
        const bool branch_taken_0x1c5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A7Cu;
        // 0x1c5a80: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a7c) {
            ctx->pc = 0x1C5A88u;
            goto label_1c5a88;
        }
    }
    ctx->pc = 0x1C5A84u;
label_1c5a84:
    // 0x1c5a84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c5a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5a88:
    // 0x1c5a88: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c5a8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5A8Cu;
    {
        const bool branch_taken_0x1c5a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A8Cu;
        // 0x1c5a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a8c) {
            ctx->pc = 0x1C5AB0u;
            goto label_1c5ab0;
        }
    }
    ctx->pc = 0x1C5A94u;
    // 0x1c5a94: 0x0  nop
    ctx->pc = 0x1c5a94u;
    // NOP
label_1c5a98:
    // 0x1c5a98: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c5a9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5aa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c5aa4: 0x0  nop
    ctx->pc = 0x1c5aa4u;
    // NOP
    // 0x1c5aa8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C5AA8u;
    {
        const bool branch_taken_0x1c5aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AA8u;
        // 0x1c5aac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5aa8) {
            ctx->pc = 0x1C5A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5a98;
        }
    }
    ctx->pc = 0x1C5AB0u;
label_1c5ab0:
    // 0x1c5ab0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1c5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c5ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5AB4u;
    {
        const bool branch_taken_0x1c5ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AB4u;
        // 0x1c5ab8: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ab4) {
            ctx->pc = 0x1C5AC8u;
            goto label_1c5ac8;
        }
    }
    ctx->pc = 0x1C5ABCu;
    // 0x1c5abc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C5ABCu;
    SET_GPR_U32(ctx, 31, 0x1C5AC4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C5ABCu, 0x1C5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AC4u;
label_1c5ac4:
    // 0x1c5ac4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1c5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1c5ac8:
    // 0x1c5ac8: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x1c5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x1c5acc: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1c5accu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x1c5ad0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1C5AD0u;
    {
        const bool branch_taken_0x1c5ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AD0u;
        // 0x1c5ad4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ad0) {
            ctx->pc = 0x1C5C28u;
            goto label_1c5c28;
        }
    }
    ctx->pc = 0x1C5AD8u;
label_1c5ad8:
    // 0x1c5ad8: 0x3c05ffdb  lui         $a1, 0xFFDB
    ctx->pc = 0x1c5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65499 << 16));
    // 0x1c5adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ae0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c5ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c5ae4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5aec: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1C5AECu;
    SET_GPR_U32(ctx, 31, 0x1C5AF4u);
    ctx->pc = 0x1C5AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5AECu;
    // 0x1c5af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1C5AECu, 0x1C5AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AF4u;
label_1c5af4:
    // 0x1c5af4: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C5AF4u;
    {
        const bool branch_taken_0x1c5af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF4u;
        // 0x1c5af8: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5af4) {
            ctx->pc = 0x1C5C2Cu;
            goto label_1c5c2c;
        }
    }
    ctx->pc = 0x1C5AFCu;
    // 0x1c5afc: 0x8ec50318  lw          $a1, 0x318($s6)
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 792)));
    // 0x1c5b00: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1C5B00u;
    SET_GPR_U32(ctx, 31, 0x1C5B08u);
    ctx->pc = 0x1C5B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B00u;
    // 0x1c5b04: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1C5B00u, 0x1C5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c5b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c5b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b10: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x1c5b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    // 0x1c5b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b1c: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B24u);
    ctx->pc = 0x1C5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B1Cu;
    // 0x1c5b20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1C5B1Cu, 0x1C5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B24u;
label_1c5b24:
    // 0x1c5b24: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C5B24u;
    {
        const bool branch_taken_0x1c5b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B24u;
        // 0x1c5b28: 0x27be0070  addiu       $fp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b24) {
            ctx->pc = 0x1C5C1Cu;
            goto label_1c5c1c;
        }
    }
    ctx->pc = 0x1C5B2Cu;
    // 0x1c5b2c: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1c5b30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c5b34: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c5b38: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5B38u;
    {
        const bool branch_taken_0x1c5b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B38u;
        // 0x1c5b3c: 0x27b50074  addiu       $s5, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b38) {
            ctx->pc = 0x1C5B5Cu;
            goto label_1c5b5c;
        }
    }
    ctx->pc = 0x1C5B40u;
    // 0x1c5b40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5B40u;
    {
        const bool branch_taken_0x1c5b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B40u;
        // 0x1c5b44: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b40) {
            ctx->pc = 0x1C5B4Cu;
            goto label_1c5b4c;
        }
    }
    ctx->pc = 0x1C5B48u;
    // 0x1c5b48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c5b4c:
    // 0x1c5b4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c5b50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c5b54: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5B54u;
    {
        const bool branch_taken_0x1c5b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B54u;
        // 0x1c5b58: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b54) {
            ctx->pc = 0x1C5C1Cu;
            goto label_1c5c1c;
        }
    }
    ctx->pc = 0x1C5B5Cu;
label_1c5b5c:
    // 0x1c5b5c: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c5b60: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x1c5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x1c5b64: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5b68: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1c5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c5b6c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x1c5b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1c5b70: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5b74: 0xafb70084  sw          $s7, 0x84($sp)
    ctx->pc = 0x1c5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 23));
    // 0x1c5b78: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1c5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1c5b7c: 0x57182b  sltu        $v1, $v0, $s7
    ctx->pc = 0x1c5b7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1c5b80: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x1c5b80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1c5b84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5b88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5B8Cu;
    {
        const bool branch_taken_0x1c5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B8Cu;
        // 0x1c5b90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b8c) {
            ctx->pc = 0x1C5BA8u;
            goto label_1c5ba8;
        }
    }
    ctx->pc = 0x1C5B94u;
    // 0x1c5b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b98: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C5B98u;
    SET_GPR_U32(ctx, 31, 0x1C5BA0u);
    ctx->pc = 0x1C5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B98u;
    // 0x1c5b9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C5B98u, 0x1C5BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BA0u;
label_1c5ba0:
    // 0x1c5ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5BA0u;
    {
        const bool branch_taken_0x1c5ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BA0u;
        // 0x1c5ba4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ba0) {
            ctx->pc = 0x1C5BB0u;
            goto label_1c5bb0;
        }
    }
    ctx->pc = 0x1C5BA8u;
label_1c5ba8:
    // 0x1c5ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c5ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bb0:
    // 0x1c5bb0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1c5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c5bb4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5BB4u;
    {
        const bool branch_taken_0x1c5bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BB4u;
        // 0x1c5bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bb4) {
            ctx->pc = 0x1C5BD0u;
            goto label_1c5bd0;
        }
    }
    ctx->pc = 0x1C5BBCu;
    // 0x1c5bbc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1c5bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c5bc0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C5BC0u;
    SET_GPR_U32(ctx, 31, 0x1C5BC8u);
    ctx->pc = 0x1C5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BC0u;
    // 0x1c5bc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C5BC0u, 0x1C5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BC8u;
label_1c5bc8:
    // 0x1c5bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5BC8u;
    {
        const bool branch_taken_0x1c5bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC8u;
        // 0x1c5bcc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc8) {
            ctx->pc = 0x1C5BD4u;
            goto label_1c5bd4;
        }
    }
    ctx->pc = 0x1C5BD0u;
label_1c5bd0:
    // 0x1c5bd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c5bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bd4:
    // 0x1c5bd4: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1c5bd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5BD8u;
    {
        const bool branch_taken_0x1c5bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BD8u;
        // 0x1c5bdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bd8) {
            ctx->pc = 0x1C5BF8u;
            goto label_1c5bf8;
        }
    }
    ctx->pc = 0x1C5BE0u;
label_1c5be0:
    // 0x1c5be0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c5be4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5be8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c5bec: 0x0  nop
    ctx->pc = 0x1c5becu;
    // NOP
    // 0x1c5bf0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C5BF0u;
    {
        const bool branch_taken_0x1c5bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF0u;
        // 0x1c5bf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bf0) {
            ctx->pc = 0x1C5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5be0;
        }
    }
    ctx->pc = 0x1C5BF8u;
label_1c5bf8:
    // 0x1c5bf8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1c5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c5bfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5BFCu;
    {
        const bool branch_taken_0x1c5bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BFCu;
        // 0x1c5c00: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bfc) {
            ctx->pc = 0x1C5C10u;
            goto label_1c5c10;
        }
    }
    ctx->pc = 0x1C5C04u;
    // 0x1c5c04: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C5C04u;
    SET_GPR_U32(ctx, 31, 0x1C5C0Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C5C04u, 0x1C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1c5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1c5c10:
    // 0x1c5c10: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1c5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1c5c14: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1c5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1c5c18: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1c5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1c5c1c:
    // 0x1c5c1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1c5c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c20: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1C5C20u;
    SET_GPR_U32(ctx, 31, 0x1C5C28u);
    ctx->pc = 0x1C5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C20u;
    // 0x1c5c24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1C5C20u, 0x1C5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C28u;
label_1c5c28:
    // 0x1c5c28: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1c5c2c:
    // 0x1c5c2c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c5c30: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c5c34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c5c38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5c3c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1c5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1c5c40: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x1c5c44: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1c5c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c5c48: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x1c5c48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1c5c4c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1c5c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c5c50: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
    ctx->pc = 0x1C5C50u;
    {
        const bool branch_taken_0x1c5c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C50u;
        // 0x1c5c54: 0x8fa30074  lw          $v1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c50) {
            ctx->pc = 0x1C58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c58a8;
        }
    }
    ctx->pc = 0x1C5C58u;
label_1c5c58:
    // 0x1c5c58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1c5c5c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1c5c60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5C60u;
    {
        const bool branch_taken_0x1c5c60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C60u;
        // 0x1c5c64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c60) {
            ctx->pc = 0x1C5C7Cu;
            goto label_1c5c7c;
        }
    }
    ctx->pc = 0x1C5C68u;
    // 0x1c5c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c6c: 0x0  nop
    ctx->pc = 0x1c5c6cu;
    // NOP
    // 0x1c5c70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5c74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5C74u;
    {
        const bool branch_taken_0x1c5c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c74) {
            ctx->pc = 0x1C5C94u;
            goto label_1c5c94;
        }
    }
    ctx->pc = 0x1C5C7Cu;
label_1c5c7c:
    // 0x1c5c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c5c80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c5c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c5c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c88: 0x0  nop
    ctx->pc = 0x1c5c88u;
    // NOP
    // 0x1c5c8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5c90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c5c94:
    // 0x1c5c94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c5c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c5c98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c5c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c5c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ca0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1c5ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c5ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5ca8: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1c5ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c5cac: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1c5cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c5cb0: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1c5cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c5cb4: 0xe6c00080  swc1        $f0, 0x80($s6)
    ctx->pc = 0x1c5cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 128), bits); }
    // 0x1c5cb8: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1c5cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c5cbc: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x1c5cbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c5cc0: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x1c5cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c5cc4: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x1c5cc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1c5cc8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x1c5cc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c5ccc: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1c5cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c5cd0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1c5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c5cd4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1c5cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c5cd8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1c5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CDCu;
        // 0x1c5ce0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CE4u;
    // 0x1c5ce4: 0x0  nop
    ctx->pc = 0x1c5ce4u;
    // NOP
    ctx->pc = 0x1c5ce8u;
}
