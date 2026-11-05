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

// Function: sub_001A27F0
// Address: 0x1a27f0 - 0x1a28c0
void sub_001A27F0_0x1a27f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A27F0_0x1a27f0");
#endif

    switch (ctx->pc) {
        case 0x1a27f0u: goto label_1a27f0;
        case 0x1a27f4u: goto label_1a27f4;
        case 0x1a27f8u: goto label_1a27f8;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2800u: goto label_1a2800;
        case 0x1a2804u: goto label_1a2804;
        case 0x1a2808u: goto label_1a2808;
        case 0x1a280cu: goto label_1a280c;
        case 0x1a2810u: goto label_1a2810;
        case 0x1a2814u: goto label_1a2814;
        case 0x1a2818u: goto label_1a2818;
        case 0x1a281cu: goto label_1a281c;
        case 0x1a2820u: goto label_1a2820;
        case 0x1a2824u: goto label_1a2824;
        case 0x1a2828u: goto label_1a2828;
        case 0x1a282cu: goto label_1a282c;
        case 0x1a2830u: goto label_1a2830;
        case 0x1a2834u: goto label_1a2834;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a283cu: goto label_1a283c;
        case 0x1a2840u: goto label_1a2840;
        case 0x1a2844u: goto label_1a2844;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a284cu: goto label_1a284c;
        case 0x1a2850u: goto label_1a2850;
        case 0x1a2854u: goto label_1a2854;
        case 0x1a2858u: goto label_1a2858;
        case 0x1a285cu: goto label_1a285c;
        case 0x1a2860u: goto label_1a2860;
        case 0x1a2864u: goto label_1a2864;
        case 0x1a2868u: goto label_1a2868;
        case 0x1a286cu: goto label_1a286c;
        case 0x1a2870u: goto label_1a2870;
        case 0x1a2874u: goto label_1a2874;
        case 0x1a2878u: goto label_1a2878;
        case 0x1a287cu: goto label_1a287c;
        case 0x1a2880u: goto label_1a2880;
        case 0x1a2884u: goto label_1a2884;
        case 0x1a2888u: goto label_1a2888;
        case 0x1a288cu: goto label_1a288c;
        case 0x1a2890u: goto label_1a2890;
        case 0x1a2894u: goto label_1a2894;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a289cu: goto label_1a289c;
        case 0x1a28a0u: goto label_1a28a0;
        case 0x1a28a4u: goto label_1a28a4;
        case 0x1a28a8u: goto label_1a28a8;
        case 0x1a28acu: goto label_1a28ac;
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28b4u: goto label_1a28b4;
        case 0x1a28b8u: goto label_1a28b8;
        case 0x1a28bcu: goto label_1a28bc;
        default: break;
    }

    ctx->pc = 0x1a27f0u;

label_1a27f0:
    // 0x1a27f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a27f4:
    // 0x1a27f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a27f8:
    // 0x1a27f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a27f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a27fc:
    // 0x1a27fc: 0xc061a1e  jal         func_186878
label_1a2800:
    if (ctx->pc == 0x1A2800u) {
        ctx->pc = 0x1A2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27FCu;
        // 0x1a2800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2804u;
        goto label_1a2804;
    }
    ctx->pc = 0x1A27FCu;
    SET_GPR_U32(ctx, 31, 0x1A2804u);
    ctx->pc = 0x1A2800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27FCu;
    // 0x1a2800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A27FCu, 0x1A2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2804u;
label_1a2804:
    // 0x1a2804: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2808:
    // 0x1a2808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a280c:
    // 0x1a280c: 0xc06cdda  jal         func_1B3768
label_1a2810:
    if (ctx->pc == 0x1A2810u) {
        ctx->pc = 0x1A2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A280Cu;
        // 0x1a2810: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2814u;
        goto label_1a2814;
    }
    ctx->pc = 0x1A280Cu;
    SET_GPR_U32(ctx, 31, 0x1A2814u);
    ctx->pc = 0x1A2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A280Cu;
    // 0x1a2810: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A280Cu, 0x1A2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2814u;
label_1a2814:
    // 0x1a2814: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2818:
    // 0x1a2818: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a281c:
    // 0x1a281c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2820:
    if (ctx->pc == 0x1A2820u) {
        ctx->pc = 0x1A2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A281Cu;
        // 0x1a2820: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2824u;
        goto label_1a2824;
    }
    ctx->pc = 0x1A281Cu;
    {
        const bool branch_taken_0x1a281c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A281Cu;
        // 0x1a2820: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a281c) {
            ctx->pc = 0x1A2838u;
            goto label_1a2838;
        }
    }
    ctx->pc = 0x1A2824u;
label_1a2824:
    // 0x1a2824: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2828:
    // 0x1a2828: 0x0  nop
    ctx->pc = 0x1a2828u;
    // NOP
label_1a282c:
    // 0x1a282c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a282cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2830:
    // 0x1a2830: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2834:
    if (ctx->pc == 0x1A2834u) {
        ctx->pc = 0x1A2838u;
        goto label_1a2838;
    }
    ctx->pc = 0x1A2830u;
    {
        const bool branch_taken_0x1a2830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2830) {
            ctx->pc = 0x1A2850u;
            goto label_1a2850;
        }
    }
    ctx->pc = 0x1A2838u;
label_1a2838:
    // 0x1a2838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a283c:
    // 0x1a283c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2840:
    // 0x1a2840: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2844:
    // 0x1a2844: 0x0  nop
    ctx->pc = 0x1a2844u;
    // NOP
label_1a2848:
    // 0x1a2848: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a284c:
    // 0x1a284c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a284cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2850:
    // 0x1a2850: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2854:
    // 0x1a2854: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2858:
    // 0x1a2858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a285c:
    // 0x1a285c: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2860:
    // 0x1a2860: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2864:
    // 0x1a2864: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2868:
    // 0x1a2868: 0x0  nop
    ctx->pc = 0x1a2868u;
    // NOP
label_1a286c:
    // 0x1a286c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1a2870:
    if (ctx->pc == 0x1A2870u) {
        ctx->pc = 0x1A2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A286Cu;
        // 0x1a2870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2874u;
        goto label_1a2874;
    }
    ctx->pc = 0x1A286Cu;
    {
        const bool branch_taken_0x1a286c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A286Cu;
        // 0x1a2870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a286c) {
            ctx->pc = 0x1A28ACu;
            goto label_1a28ac;
        }
    }
    ctx->pc = 0x1A2874u;
label_1a2874:
    // 0x1a2874: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x1a2874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_1a2878:
    // 0x1a2878: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_1a287c:
    if (ctx->pc == 0x1A287Cu) {
        ctx->pc = 0x1A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2878u;
        // 0x1a287c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2880u;
        goto label_1a2880;
    }
    ctx->pc = 0x1A2878u;
    {
        const bool branch_taken_0x1a2878 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2878u;
        // 0x1a287c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2878) {
            ctx->pc = 0x1A2898u;
            goto label_1a2898;
        }
    }
    ctx->pc = 0x1A2880u;
label_1a2880:
    // 0x1a2880: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x1a2880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1a2884:
    // 0x1a2884: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a2888:
    // 0x1a2888: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a288c:
    // 0x1a288c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2890:
    // 0x1a2890: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a2894:
    if (ctx->pc == 0x1A2894u) {
        ctx->pc = 0x1A2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2890u;
        // 0x1a2894: 0x8c63fffc  lw          $v1, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2898u;
        goto label_1a2898;
    }
    ctx->pc = 0x1A2890u;
    {
        const bool branch_taken_0x1a2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2890u;
        // 0x1a2894: 0x8c63fffc  lw          $v1, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2890) {
            ctx->pc = 0x1A289Cu;
            goto label_1a289c;
        }
    }
    ctx->pc = 0x1A2898u;
label_1a2898:
    // 0x1a2898: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a289c:
    // 0x1a289c: 0x86040014  lh          $a0, 0x14($s0)
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1a28a0:
    // 0x1a28a0: 0x60f809  jalr        $v1
label_1a28a4:
    if (ctx->pc == 0x1A28A4u) {
        ctx->pc = 0x1A28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28A0u;
        // 0x1a28a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28A8u;
        goto label_1a28a8;
    }
    ctx->pc = 0x1A28A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A28A8u);
        ctx->pc = 0x1A28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28A0u;
        // 0x1a28a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A28A0u, 0x1A28A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A28A8u;
label_1a28a8:
    // 0x1a28a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a28a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a28ac:
    // 0x1a28ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a28acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a28b0:
    // 0x1a28b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a28b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a28b4:
    // 0x1a28b4: 0x3e00008  jr          $ra
label_1a28b8:
    if (ctx->pc == 0x1A28B8u) {
        ctx->pc = 0x1A28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28B4u;
        // 0x1a28b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28BCu;
        goto label_1a28bc;
    }
    ctx->pc = 0x1A28B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28B4u;
        // 0x1a28b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A28B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A28BCu;
label_1a28bc:
    // 0x1a28bc: 0x0  nop
    ctx->pc = 0x1a28bcu;
    // NOP
    ctx->pc = 0x1a28c0u;
}
