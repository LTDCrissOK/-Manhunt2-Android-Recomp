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

// Function: sub_002735E8
// Address: 0x2735e8 - 0x273730
void sub_002735E8_0x2735e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002735E8_0x2735e8");
#endif

    switch (ctx->pc) {
        case 0x2736e0u: goto label_2736e0;
        default: break;
    }

    ctx->pc = 0x2735e8u;

    // 0x2735e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2735ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2735ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2735f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2735f4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2735f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2735f8: 0x8ce60048  lw          $a2, 0x48($a3)
    ctx->pc = 0x2735f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2735fc: 0x90c20293  lbu         $v0, 0x293($a2)
    ctx->pc = 0x2735fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 659)));
    // 0x273600: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x273600u;
    {
        const bool branch_taken_0x273600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273600u;
        // 0x273604: 0x24c402b0  addiu       $a0, $a2, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273600) {
            ctx->pc = 0x273718u;
            goto label_273718;
        }
    }
    ctx->pc = 0x273608u;
    // 0x273608: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x273608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x27360c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273610: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x273610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x273614: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x273614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273618: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x273618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27361c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27361cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x273620: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x273620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x273624: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x273624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273628: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x273628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27362c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x27362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273630: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x273630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273634: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x273634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x273638: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x273638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27363c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x27363cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x273640: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x273640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x273644: 0x8cc40220  lw          $a0, 0x220($a2)
    ctx->pc = 0x273644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 544)));
    // 0x273648: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x273648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27364c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x27364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x273650: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x273650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273654: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x273654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273658: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x273658u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x27365c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x27365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273660: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x273660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273664: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x273664u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x273668: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x273668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27366c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x27366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273670: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x273670u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x273674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273678: 0x0  nop
    ctx->pc = 0x273678u;
    // NOP
    // 0x27367c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27367cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273680: 0x0  nop
    ctx->pc = 0x273680u;
    // NOP
    // 0x273684: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x273684u;
    {
        const bool branch_taken_0x273684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273684) {
            ctx->pc = 0x273688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273684u;
            // 0x273688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27371Cu;
            goto label_27371c;
        }
    }
    ctx->pc = 0x27368Cu;
    // 0x27368c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27368Cu;
    {
        const bool branch_taken_0x27368c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27368Cu;
        // 0x273690: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27368c) {
            ctx->pc = 0x273698u;
            goto label_273698;
        }
    }
    ctx->pc = 0x273694u;
    // 0x273694: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x273694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273698:
    // 0x273698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27369c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2736a0: 0x0  nop
    ctx->pc = 0x2736a0u;
    // NOP
    // 0x2736a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2736a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2736a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2736a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736ac: 0x0  nop
    ctx->pc = 0x2736acu;
    // NOP
    // 0x2736b0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2736B0u;
    {
        const bool branch_taken_0x2736b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2736B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736B0u;
        // 0x2736b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736b0) {
            ctx->pc = 0x27371Cu;
            goto label_27371c;
        }
    }
    ctx->pc = 0x2736B8u;
    // 0x2736b8: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x2736b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x2736bc: 0x8c440220  lw          $a0, 0x220($v0)
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2736c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2736c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2736c4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2736C4u;
    {
        const bool branch_taken_0x2736c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2736c4) {
            ctx->pc = 0x2736C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2736C4u;
            // 0x2736c8: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736CCu;
            goto label_2736cc;
        }
    }
    ctx->pc = 0x2736CCu;
label_2736cc:
    // 0x2736cc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2736ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2736d0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2736d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2736d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2736d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2736d8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2736D8u;
    SET_GPR_U32(ctx, 31, 0x2736E0u);
    ctx->pc = 0x2736DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736D8u;
    // 0x2736dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2736D8u, 0x2736E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736E0u;
label_2736e0:
    // 0x2736e0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2736e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2736e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2736e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2736e8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2736e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2736ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2736ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2736f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2736f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2736f4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2736f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2736f8: 0x46010044  c1          0x10044
    ctx->pc = 0x2736f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2736fc: 0x0  nop
    ctx->pc = 0x2736fcu;
    // NOP
    // 0x273700: 0x0  nop
    ctx->pc = 0x273700u;
    // NOP
    // 0x273704: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x273704u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x273708: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27370c: 0x0  nop
    ctx->pc = 0x27370cu;
    // NOP
    // 0x273710: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x273710u;
    {
        const bool branch_taken_0x273710 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273710u;
        // 0x273714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273710) {
            ctx->pc = 0x27371Cu;
            goto label_27371c;
        }
    }
    ctx->pc = 0x273718u;
label_273718:
    // 0x273718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27371c:
    // 0x27371c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27371cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273720: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x273720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273724: 0x3e00008  jr          $ra
    ctx->pc = 0x273724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273724u;
        // 0x273728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27372Cu;
    // 0x27372c: 0x0  nop
    ctx->pc = 0x27372cu;
    // NOP
    ctx->pc = 0x273730u;
}
