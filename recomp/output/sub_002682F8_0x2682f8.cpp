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

// Function: sub_002682F8
// Address: 0x2682f8 - 0x2684c8
void sub_002682F8_0x2682f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002682F8_0x2682f8");
#endif

    switch (ctx->pc) {
        case 0x268360u: goto label_268360;
        case 0x268450u: goto label_268450;
        default: break;
    }

    ctx->pc = 0x2682f8u;

    // 0x2682f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2682f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2682fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2682fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x268300: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x268300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x268304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268308: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x268308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x26830c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26830Cu;
    {
        const bool branch_taken_0x26830c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26830Cu;
        // 0x268310: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26830c) {
            ctx->pc = 0x268318u;
            goto label_268318;
        }
    }
    ctx->pc = 0x268314u;
    // 0x268314: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x268314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_268318:
    // 0x268318: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x268318u;
    {
        const bool branch_taken_0x268318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268318u;
        // 0x26831c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268318) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x268320u;
    // 0x268320: 0x50620065  beql        $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x268320u;
    {
        const bool branch_taken_0x268320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268320) {
            ctx->pc = 0x268324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268320u;
            // 0x268324: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684B8u;
            goto label_2684b8;
        }
    }
    ctx->pc = 0x268328u;
    // 0x268328: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x268328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x26832c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x26832cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x268330: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268334: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x268334u;
    {
        const bool branch_taken_0x268334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x268334) {
            ctx->pc = 0x268338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268334u;
            // 0x268338: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684B8u;
            goto label_2684b8;
        }
    }
    ctx->pc = 0x26833Cu;
    // 0x26833c: 0x92020292  lbu         $v0, 0x292($s0)
    ctx->pc = 0x26833cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x268340: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x268340u;
    {
        const bool branch_taken_0x268340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268340) {
            ctx->pc = 0x268344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268340u;
            // 0x268344: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684B8u;
            goto label_2684b8;
        }
    }
    ctx->pc = 0x268348u;
    // 0x268348: 0x92030294  lbu         $v1, 0x294($s0)
    ctx->pc = 0x268348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x26834c: 0x92020293  lbu         $v0, 0x293($s0)
    ctx->pc = 0x26834cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 659)));
    // 0x268350: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268350u;
    {
        const bool branch_taken_0x268350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268350u;
        // 0x268354: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268350) {
            ctx->pc = 0x268368u;
            goto label_268368;
        }
    }
    ctx->pc = 0x268358u;
    // 0x268358: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x268358u;
    SET_GPR_U32(ctx, 31, 0x268360u);
    ctx->pc = 0x26835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268358u;
    // 0x26835c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x268358u, 0x268360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268360u;
label_268360:
    // 0x268360: 0x92020293  lbu         $v0, 0x293($s0)
    ctx->pc = 0x268360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 659)));
    // 0x268364: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x268364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268368:
    // 0x268368: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x268368u;
    {
        const bool branch_taken_0x268368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268368u;
        // 0x26836c: 0xa2020294  sb          $v0, 0x294($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 660), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268368) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x268370u;
    // 0x268370: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x268374: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x268374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x268378: 0x246345c0  addiu       $v1, $v1, 0x45C0
    ctx->pc = 0x268378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
    // 0x26837c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x268380: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x268380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x268384: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x268384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x4B45C0u));
    // 0x268388: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x268388u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26838c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26838cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x268390: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x268390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268394: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x268394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268398: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x268398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26839c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x26839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2683a0: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2683a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2683a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2683a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2683a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2683a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2683ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2683acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2683b0: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2683b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2683b4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2683b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2683b8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2683b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2683bc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2683bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2683c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2683c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2683c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2683c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2683c8: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2683c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2683cc: 0x46050144  c1          0x50144
    ctx->pc = 0x2683ccu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2683d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2683d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2683d4: 0xc4409db4  lwc1        $f0, -0x624C($v0)
    ctx->pc = 0x2683d4u;
    { uint32_t bits = FAST_READ32(0x3F9DB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2683d8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2683d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2683dc: 0x0  nop
    ctx->pc = 0x2683dcu;
    // NOP
    // 0x2683e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2683E0u;
    {
        const bool branch_taken_0x2683e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2683E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683E0u;
        // 0x2683e4: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683e0) {
            ctx->pc = 0x2683F4u;
            goto label_2683f4;
        }
    }
    ctx->pc = 0x2683E8u;
    // 0x2683e8: 0x92020297  lbu         $v0, 0x297($s0)
    ctx->pc = 0x2683e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 663)));
    // 0x2683ec: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2683ECu;
    {
        const bool branch_taken_0x2683ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2683ec) {
            ctx->pc = 0x2683F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2683ECu;
            // 0x2683f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684B8u;
            goto label_2684b8;
        }
    }
    ctx->pc = 0x2683F4u;
label_2683f4:
    // 0x2683f4: 0x8cc59dbc  lw          $a1, -0x6244($a2)
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294942140)));
    // 0x2683f8: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x2683f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2683fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2683FCu;
    {
        const bool branch_taken_0x2683fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683FCu;
        // 0x268400: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683fc) {
            ctx->pc = 0x268430u;
            goto label_268430;
        }
    }
    ctx->pc = 0x268404u;
    // 0x268404: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x268404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x268408: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x268408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x26840c: 0x2463ae80  addiu       $v1, $v1, -0x5180
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946432));
    // 0x268410: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x268410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268414: 0x2484ae30  addiu       $a0, $a0, -0x51D0
    ctx->pc = 0x268414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946352));
    // 0x268418: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x268418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26841c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x268420: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x268420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x268424: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x268424u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x268428: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x268428u;
    {
        const bool branch_taken_0x268428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268428u;
        // 0x26842c: 0xacc59dbc  sw          $a1, -0x6244($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294942140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268428) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x268430u;
label_268430:
    // 0x268430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x268434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26843c: 0xc441ae80  lwc1        $f1, -0x5180($v0)
    ctx->pc = 0x26843cu;
    { uint32_t bits = FAST_READ32(0x6BAE80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268440: 0x2483ae80  addiu       $v1, $a0, -0x5180
    ctx->pc = 0x268440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946432));
    // 0x268444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x268444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268448: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x268448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
label_268450:
    // 0x268450: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x268450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x268454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268458: 0x0  nop
    ctx->pc = 0x268458u;
    // NOP
    // 0x26845c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26845Cu;
    {
        const bool branch_taken_0x26845c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26845c) {
            ctx->pc = 0x268460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26845Cu;
            // 0x268460: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268470u;
            goto label_268470;
        }
    }
    ctx->pc = 0x268464u;
    // 0x268464: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x268464u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x268468: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x268468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26846c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_268470:
    // 0x268470: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x268470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x268474: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x268474u;
    {
        const bool branch_taken_0x268474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268474u;
        // 0x268478: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268474) {
            ctx->pc = 0x268450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268450;
        }
    }
    ctx->pc = 0x26847Cu;
    // 0x26847c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x26847cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268480: 0x0  nop
    ctx->pc = 0x268480u;
    // NOP
    // 0x268484: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x268484u;
    {
        const bool branch_taken_0x268484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x268488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268484u;
        // 0x268488: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268484) {
            ctx->pc = 0x268498u;
            goto label_268498;
        }
    }
    ctx->pc = 0x26848Cu;
    // 0x26848c: 0x92020297  lbu         $v0, 0x297($s0)
    ctx->pc = 0x26848cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 663)));
    // 0x268490: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268490u;
    {
        const bool branch_taken_0x268490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268490u;
        // 0x268494: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268490) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x268498u;
label_268498:
    // 0x268498: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x268498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26849c: 0x2442ae30  addiu       $v0, $v0, -0x51D0
    ctx->pc = 0x26849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x2684a0: 0x2484ae80  addiu       $a0, $a0, -0x5180
    ctx->pc = 0x2684a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946432));
    // 0x2684a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2684a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2684a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2684a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2684ac: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x2684acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2684b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2684b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2684b4:
    // 0x2684b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2684b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2684b8:
    // 0x2684b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2684b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2684bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2684BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2684C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684BCu;
        // 0x2684c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2684BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2684C4u;
    // 0x2684c4: 0x0  nop
    ctx->pc = 0x2684c4u;
    // NOP
    ctx->pc = 0x2684c8u;
}
