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

// Function: sub_00360318
// Address: 0x360318 - 0x360898
void sub_00360318_0x360318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360318_0x360318");
#endif

    switch (ctx->pc) {
        case 0x360354u: goto label_360354;
        case 0x36050cu: goto label_36050c;
        case 0x36061cu: goto label_36061c;
        case 0x36066cu: goto label_36066c;
        case 0x360674u: goto label_360674;
        case 0x360714u: goto label_360714;
        case 0x360720u: goto label_360720;
        case 0x36073cu: goto label_36073c;
        case 0x360778u: goto label_360778;
        case 0x360788u: goto label_360788;
        case 0x3607a8u: goto label_3607a8;
        case 0x36080cu: goto label_36080c;
        case 0x360820u: goto label_360820;
        case 0x360830u: goto label_360830;
        case 0x360840u: goto label_360840;
        default: break;
    }

    ctx->pc = 0x360318u;

    // 0x360318: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x360318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x36031c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x36031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x360320: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x360320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x360324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360328: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x360328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x36032c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36032cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360330: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x360330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x360334: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x360334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360338: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x360338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x36033c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36033cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360340: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x360340u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x360344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360348: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x360348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x36034c: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x36034Cu;
    SET_GPR_U32(ctx, 31, 0x360354u);
    ctx->pc = 0x360350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36034Cu;
    // 0x360350: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x36034Cu, 0x360354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360354u;
label_360354:
    // 0x360354: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x360354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360358: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x360358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36035c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36035cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360360: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x360360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360364: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x360364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x360368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36036c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360370: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x360370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360374: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x360374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360378: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x360378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36037c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x36037cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x360380: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x360380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x360384: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x360384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x360388: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x360388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36038c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360390: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x360390u;
    {
        const bool branch_taken_0x360390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x360394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360390u;
        // 0x360394: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360390) {
            ctx->pc = 0x3603E0u;
            goto label_3603e0;
        }
    }
    ctx->pc = 0x360398u;
    // 0x360398: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x360398u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x36039c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x36039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x3603a0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x3603a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x3603a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3603a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3603a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3603a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3603ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3603acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3603b0: 0xc455cb08  lwc1        $f21, -0x34F8($v0)
    ctx->pc = 0x3603b0u;
    { uint32_t bits = FAST_READ32(0x3FCB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3603b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3603b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3603b8: 0x0  nop
    ctx->pc = 0x3603b8u;
    // NOP
    // 0x3603bc: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x3603BCu;
    {
        const bool branch_taken_0x3603bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3603C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603BCu;
        // 0x3603c0: 0xc474cb0c  lwc1        $f20, -0x34F4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603bc) {
            ctx->pc = 0x360450u;
            goto label_360450;
        }
    }
    ctx->pc = 0x3603C4u;
    // 0x3603c4: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x3603c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x3603c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3603c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3603cc: 0x0  nop
    ctx->pc = 0x3603ccu;
    // NOP
    // 0x3603d0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3603D0u;
    {
        const bool branch_taken_0x3603d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3603D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603D0u;
        // 0x3603d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603d0) {
            ctx->pc = 0x360450u;
            goto label_360450;
        }
    }
    ctx->pc = 0x3603D8u;
    // 0x3603d8: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x3603D8u;
    {
        const bool branch_taken_0x3603d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603D8u;
        // 0x3603dc: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603d8) {
            ctx->pc = 0x360870u;
            goto label_360870;
        }
    }
    ctx->pc = 0x3603E0u;
label_3603e0:
    // 0x3603e0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3603E0u;
    {
        const bool branch_taken_0x3603e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3603E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603E0u;
        // 0x3603e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603e0) {
            ctx->pc = 0x3603F8u;
            goto label_3603f8;
        }
    }
    ctx->pc = 0x3603E8u;
    // 0x3603e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3603e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3603ec: 0xc455cb10  lwc1        $f21, -0x34F0($v0)
    ctx->pc = 0x3603ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3603f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3603F0u;
    {
        const bool branch_taken_0x3603f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603F0u;
        // 0x3603f4: 0xc474cb14  lwc1        $f20, -0x34EC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603f0) {
            ctx->pc = 0x360450u;
            goto label_360450;
        }
    }
    ctx->pc = 0x3603F8u;
label_3603f8:
    // 0x3603f8: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3603F8u;
    {
        const bool branch_taken_0x3603f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3603FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603F8u;
        // 0x3603fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603f8) {
            ctx->pc = 0x360444u;
            goto label_360444;
        }
    }
    ctx->pc = 0x360400u;
    // 0x360400: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x360400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x360404: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x360404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x360408: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x360408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x36040c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x36040Cu;
    {
        const bool branch_taken_0x36040c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36040c) {
            ctx->pc = 0x360410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36040Cu;
            // 0x360410: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360428u;
            goto label_360428;
        }
    }
    ctx->pc = 0x360414u;
    // 0x360414: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x360414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x360418: 0x24424dd0  addiu       $v0, $v0, 0x4DD0
    ctx->pc = 0x360418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19920));
    // 0x36041c: 0xc45403e4  lwc1        $f20, 0x3E4($v0)
    ctx->pc = 0x36041cu;
    { uint32_t bits = FAST_READ32(0x5951B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360420: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x360420u;
    {
        const bool branch_taken_0x360420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360420u;
        // 0x360424: 0xc45503e0  lwc1        $f21, 0x3E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360420) {
            ctx->pc = 0x360450u;
            goto label_360450;
        }
    }
    ctx->pc = 0x360428u;
label_360428:
    // 0x360428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360428u;
    {
        const bool branch_taken_0x360428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360428u;
        // 0x36042c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360428) {
            ctx->pc = 0x360440u;
            goto label_360440;
        }
    }
    ctx->pc = 0x360430u;
    // 0x360430: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x360430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x360434: 0xc455cb18  lwc1        $f21, -0x34E8($v0)
    ctx->pc = 0x360434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x360438u;
    {
        const bool branch_taken_0x360438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360438u;
        // 0x36043c: 0xc474cb1c  lwc1        $f20, -0x34E4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360438) {
            ctx->pc = 0x360450u;
            goto label_360450;
        }
    }
    ctx->pc = 0x360440u;
label_360440:
    // 0x360440: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x360440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_360444:
    // 0x360444: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x360444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x360448: 0xc455cb00  lwc1        $f21, -0x3500($v0)
    ctx->pc = 0x360448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36044c: 0xc474cb04  lwc1        $f20, -0x34FC($v1)
    ctx->pc = 0x36044cu;
    { uint32_t bits = FAST_READ32(0x3FCB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_360450:
    // 0x360450: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x360450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360454: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x360454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360458: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x360458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36045c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x36045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x360460: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x360460u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x360464: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x360464u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x360468: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x360468u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x36046c: 0x46010044  c1          0x10044
    ctx->pc = 0x36046cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x360470: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x360470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x360474: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x360474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x360478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36047c: 0x0  nop
    ctx->pc = 0x36047cu;
    // NOP
    // 0x360480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x360480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360484: 0x0  nop
    ctx->pc = 0x360484u;
    // NOP
    // 0x360488: 0x450000e5  bc1f        . + 4 + (0xE5 << 2)
    ctx->pc = 0x360488u;
    {
        const bool branch_taken_0x360488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360488u;
        // 0x36048c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360488) {
            ctx->pc = 0x360820u;
            goto label_360820;
        }
    }
    ctx->pc = 0x360490u;
    // 0x360490: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x360490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x360494: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x360494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360498: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x360498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36049c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x36049cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3604a0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3604a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3604a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3604a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3604a8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3604a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3604ac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3604acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3604b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3604b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3604b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3604b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3604b8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3604b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3604bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3604bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3604c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3604c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3604c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3604c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3604c8: 0x0  nop
    ctx->pc = 0x3604c8u;
    // NOP
    // 0x3604cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3604CCu;
    {
        const bool branch_taken_0x3604cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3604cc) {
            ctx->pc = 0x3604DCu;
            goto label_3604dc;
        }
    }
    ctx->pc = 0x3604D4u;
    // 0x3604d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3604D4u;
    {
        const bool branch_taken_0x3604d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3604D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604D4u;
        // 0x3604d8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3604d4) {
            ctx->pc = 0x3604ECu;
            goto label_3604ec;
        }
    }
    ctx->pc = 0x3604DCu;
label_3604dc:
    // 0x3604dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3604dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3604e0: 0x0  nop
    ctx->pc = 0x3604e0u;
    // NOP
    // 0x3604e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3604E4u;
    {
        const bool branch_taken_0x3604e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3604e4) {
            ctx->pc = 0x3604E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3604E4u;
            // 0x3604e8: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3604ECu;
            goto label_3604ec;
        }
    }
    ctx->pc = 0x3604ECu;
label_3604ec:
    // 0x3604ec: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x3604ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3604f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3604f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3604f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3604f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3604f8: 0x460c6342  mul.s       $f13, $f12, $f12
    ctx->pc = 0x3604f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3604fc: 0x460db341  sub.s       $f13, $f22, $f13
    ctx->pc = 0x3604fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[13]);
    // 0x360500: 0x460d0344  c1          0xD0344
    ctx->pc = 0x360500u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x360504: 0xc0e404c  jal         func_390130
    ctx->pc = 0x360504u;
    SET_GPR_U32(ctx, 31, 0x36050Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x360504u, 0x36050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36050Cu;
label_36050c:
    // 0x36050c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x36050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x360510: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x360510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x360514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360518: 0x0  nop
    ctx->pc = 0x360518u;
    // NOP
    // 0x36051c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36051cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360520: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x360520u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x360524: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x360524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360528: 0x0  nop
    ctx->pc = 0x360528u;
    // NOP
    // 0x36052c: 0x450100cf  bc1t        . + 4 + (0xCF << 2)
    ctx->pc = 0x36052Cu;
    {
        const bool branch_taken_0x36052c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36052Cu;
        // 0x360530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36052c) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360534u;
    // 0x360534: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x360534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x360538: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x360538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36053c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x36053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360540: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x360540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x360544: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x360544u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x360548: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x360548u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x36054c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x36054cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x360550: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x360550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x360554: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x360554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x360558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36055c: 0x0  nop
    ctx->pc = 0x36055cu;
    // NOP
    // 0x360560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x360560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360564: 0x0  nop
    ctx->pc = 0x360564u;
    // NOP
    // 0x360568: 0x450100c0  bc1t        . + 4 + (0xC0 << 2)
    ctx->pc = 0x360568u;
    {
        const bool branch_taken_0x360568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360568u;
        // 0x36056c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360568) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360570u;
    // 0x360570: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x360570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x360574: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x360574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360578: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x360578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36057c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x36057cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x360580: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x360580u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x360584: 0x4a0003bf  vwaitq
    ctx->pc = 0x360584u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x360588: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x360588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36058c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x36058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x360590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x360594: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x360594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x360598: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x360598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x36059c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3605a0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3605a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3605a4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3605a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3605a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3605a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3605ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3605acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3605b0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3605b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3605b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3605b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3605b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3605b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3605bc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3605bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3605c0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3605c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3605c4: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x3605c4u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3605c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3605c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3605cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3605ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3605d0: 0x0  nop
    ctx->pc = 0x3605d0u;
    // NOP
    // 0x3605d4: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3605d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3605d8: 0x0  nop
    ctx->pc = 0x3605d8u;
    // NOP
    // 0x3605dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3605DCu;
    {
        const bool branch_taken_0x3605dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3605dc) {
            ctx->pc = 0x3605ECu;
            goto label_3605ec;
        }
    }
    ctx->pc = 0x3605E4u;
    // 0x3605e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3605E4u;
    {
        const bool branch_taken_0x3605e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3605E4u;
        // 0x3605e8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3605e4) {
            ctx->pc = 0x3605FCu;
            goto label_3605fc;
        }
    }
    ctx->pc = 0x3605ECu;
label_3605ec:
    // 0x3605ec: 0x460db034  c.lt.s      $f22, $f13
    ctx->pc = 0x3605ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3605f0: 0x0  nop
    ctx->pc = 0x3605f0u;
    // NOP
    // 0x3605f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3605F4u;
    {
        const bool branch_taken_0x3605f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3605f4) {
            ctx->pc = 0x3605F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3605F4u;
            // 0x3605f8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3605FCu;
            goto label_3605fc;
        }
    }
    ctx->pc = 0x3605FCu;
label_3605fc:
    // 0x3605fc: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x3605fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x360600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360604: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x360604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x360608: 0x0  nop
    ctx->pc = 0x360608u;
    // NOP
    // 0x36060c: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x36060cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x360610: 0x460c0304  c1          0xC0304
    ctx->pc = 0x360610u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x360614: 0xc0e404c  jal         func_390130
    ctx->pc = 0x360614u;
    SET_GPR_U32(ctx, 31, 0x36061Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x360614u, 0x36061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36061Cu;
label_36061c:
    // 0x36061c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x36061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x360620: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x360620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x360624: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360628: 0x0  nop
    ctx->pc = 0x360628u;
    // NOP
    // 0x36062c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36062cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360630: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x360630u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x360634: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x360634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360638: 0x0  nop
    ctx->pc = 0x360638u;
    // NOP
    // 0x36063c: 0x4501008b  bc1t        . + 4 + (0x8B << 2)
    ctx->pc = 0x36063Cu;
    {
        const bool branch_taken_0x36063c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36063Cu;
        // 0x360640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36063c) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360644u;
    // 0x360644: 0x12600076  beqz        $s3, . + 4 + (0x76 << 2)
    ctx->pc = 0x360644u;
    {
        const bool branch_taken_0x360644 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x360648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360644u;
        // 0x360648: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360644) {
            ctx->pc = 0x360820u;
            goto label_360820;
        }
    }
    ctx->pc = 0x36064Cu;
    // 0x36064c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x36064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x360650: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360654: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x360654u;
    {
        const bool branch_taken_0x360654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x360658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360654u;
        // 0x360658: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360654) {
            ctx->pc = 0x360820u;
            goto label_360820;
        }
    }
    ctx->pc = 0x36065Cu;
    // 0x36065c: 0x50820071  beql        $a0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x36065Cu;
    {
        const bool branch_taken_0x36065c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x36065c) {
            ctx->pc = 0x360660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36065Cu;
            // 0x360660: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360824u;
            goto label_360824;
        }
    }
    ctx->pc = 0x360664u;
    // 0x360664: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360664u;
    SET_GPR_U32(ctx, 31, 0x36066Cu);
    ctx->pc = 0x360668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360664u;
    // 0x360668: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360664u, 0x36066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36066Cu;
label_36066c:
    // 0x36066c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36066Cu;
    SET_GPR_U32(ctx, 31, 0x360674u);
    ctx->pc = 0x360670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36066Cu;
    // 0x360670: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36066Cu, 0x360674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360674u;
label_360674:
    // 0x360674: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x360674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360678: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x360678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36067c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x36067cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360680: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x360680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x360684: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x360684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x360688: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36068c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x36068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x360690: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x360690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x360694: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x360694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360698: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36069c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3606a0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3606a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3606a4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3606a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3606a8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3606a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3606ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3606acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3606b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3606b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3606b4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3606b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3606b8: 0x0  nop
    ctx->pc = 0x3606b8u;
    // NOP
    // 0x3606bc: 0x0  nop
    ctx->pc = 0x3606bcu;
    // NOP
    // 0x3606c0: 0x46010304  c1          0x10304
    ctx->pc = 0x3606c0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x3606c4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3606c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3606c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3606c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3606cc: 0x0  nop
    ctx->pc = 0x3606ccu;
    // NOP
    // 0x3606d0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3606d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3606d4: 0x0  nop
    ctx->pc = 0x3606d4u;
    // NOP
    // 0x3606d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3606D8u;
    {
        const bool branch_taken_0x3606d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3606DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3606D8u;
        // 0x3606dc: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3606d8) {
            ctx->pc = 0x360700u;
            goto label_360700;
        }
    }
    ctx->pc = 0x3606E0u;
    // 0x3606e0: 0x0  nop
    ctx->pc = 0x3606e0u;
    // NOP
    // 0x3606e4: 0x0  nop
    ctx->pc = 0x3606e4u;
    // NOP
    // 0x3606e8: 0x460ca003  div.s       $f0, $f20, $f12
    ctx->pc = 0x3606e8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
    // 0x3606ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3606ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3606f0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3606f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3606f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3606f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3606f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3606f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3606fc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3606fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_360700:
    // 0x360700: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x360700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x360704: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x360704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x360708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x360708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36070c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x36070Cu;
    SET_GPR_U32(ctx, 31, 0x360714u);
    ctx->pc = 0x360710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36070Cu;
    // 0x360710: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x36070Cu, 0x360714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360714u;
label_360714:
    // 0x360714: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x360714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x360718: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x360718u;
    SET_GPR_U32(ctx, 31, 0x360720u);
    ctx->pc = 0x36071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360718u;
    // 0x36071c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x360718u, 0x360720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360720u;
label_360720:
    // 0x360720: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x360720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x360724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x360724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360728: 0xc4606ee4  lwc1        $f0, 0x6EE4($v1)
    ctx->pc = 0x360728u;
    { uint32_t bits = FAST_READ32(0x476EE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36072c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x360730: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x360730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x360734: 0xc07784e  jal         func_1DE138
    ctx->pc = 0x360734u;
    SET_GPR_U32(ctx, 31, 0x36073Cu);
    ctx->pc = 0x360738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360734u;
    // 0x360738: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE138u, 0x360734u, 0x36073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36073Cu;
label_36073c:
    // 0x36073c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x36073Cu;
    {
        const bool branch_taken_0x36073c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36073Cu;
        // 0x360740: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36073c) {
            ctx->pc = 0x360814u;
            goto label_360814;
        }
    }
    ctx->pc = 0x360744u;
    // 0x360744: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x360744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x360748: 0x5480002e  bnel        $a0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x360748u;
    {
        const bool branch_taken_0x360748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x360748) {
            ctx->pc = 0x36074Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360748u;
            // 0x36074c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360804u;
            goto label_360804;
        }
    }
    ctx->pc = 0x360750u;
    // 0x360750: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x360750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x360754: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x360754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x360758: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x360758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x36075c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x36075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x360760: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x360760u;
    {
        const bool branch_taken_0x360760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360760) {
            ctx->pc = 0x360764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360760u;
            // 0x360764: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360794u;
            goto label_360794;
        }
    }
    ctx->pc = 0x360768u;
    // 0x360768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36076c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x36076cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x360770: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x360770u;
    SET_GPR_U32(ctx, 31, 0x360778u);
    ctx->pc = 0x360774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360770u;
    // 0x360774: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x360770u, 0x360778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360778u;
label_360778:
    // 0x360778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360778u;
    {
        const bool branch_taken_0x360778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360778u;
        // 0x36077c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360778) {
            ctx->pc = 0x360790u;
            goto label_360790;
        }
    }
    ctx->pc = 0x360780u;
    // 0x360780: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x360780u;
    SET_GPR_U32(ctx, 31, 0x360788u);
    ctx->pc = 0x360784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360780u;
    // 0x360784: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x360780u, 0x360788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360788u;
label_360788:
    // 0x360788: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x360788u;
    {
        const bool branch_taken_0x360788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360788u;
        // 0x36078c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360788) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360790u;
label_360790:
    // 0x360790: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x360790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_360794:
    // 0x360794: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x360794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x360798: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x360798u;
    {
        const bool branch_taken_0x360798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360798u;
        // 0x36079c: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360798) {
            ctx->pc = 0x3607F0u;
            goto label_3607f0;
        }
    }
    ctx->pc = 0x3607A0u;
    // 0x3607a0: 0xc098750  jal         func_261D40
    ctx->pc = 0x3607A0u;
    SET_GPR_U32(ctx, 31, 0x3607A8u);
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x3607A0u, 0x3607A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607A8u;
label_3607a8:
    // 0x3607a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3607a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3607ac: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3607ACu;
    {
        const bool branch_taken_0x3607ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607ACu;
        // 0x3607b0: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607ac) {
            ctx->pc = 0x3607F0u;
            goto label_3607f0;
        }
    }
    ctx->pc = 0x3607B4u;
    // 0x3607b4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3607b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3607b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3607b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3607bc: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x3607bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3607c0: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x3607c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x3607c4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3607c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3607c8: 0x10530012  beq         $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3607C8u;
    {
        const bool branch_taken_0x3607c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607C8u;
        // 0x3607cc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607c8) {
            ctx->pc = 0x360814u;
            goto label_360814;
        }
    }
    ctx->pc = 0x3607D0u;
    // 0x3607d0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x3607d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x3607d4: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3607d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3607d8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3607d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3607dc: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x3607dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x3607e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3607E0u;
    {
        const bool branch_taken_0x3607e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3607E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607E0u;
        // 0x3607e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607e0) {
            ctx->pc = 0x360818u;
            goto label_360818;
        }
    }
    ctx->pc = 0x3607E8u;
    // 0x3607e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3607E8u;
    {
        const bool branch_taken_0x3607e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3607e8) {
            ctx->pc = 0x360804u;
            goto label_360804;
        }
    }
    ctx->pc = 0x3607F0u;
label_3607f0:
    // 0x3607f0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x3607f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3607f4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x3607f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x3607f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3607f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3607fc: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3607FCu;
    {
        const bool branch_taken_0x3607fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x360800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607FCu;
        // 0x360800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607fc) {
            ctx->pc = 0x360818u;
            goto label_360818;
        }
    }
    ctx->pc = 0x360804u;
label_360804:
    // 0x360804: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x360804u;
    SET_GPR_U32(ctx, 31, 0x36080Cu);
    ctx->pc = 0x360808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360804u;
    // 0x360808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x360804u, 0x36080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36080Cu;
label_36080c:
    // 0x36080c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36080Cu;
    {
        const bool branch_taken_0x36080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36080Cu;
        // 0x360810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36080c) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360814u;
label_360814:
    // 0x360814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_360818:
    // 0x360818: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x360818u;
    SET_GPR_U32(ctx, 31, 0x360820u);
    ctx->pc = 0x36081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360818u;
    // 0x36081c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x360818u, 0x360820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360820u;
label_360820:
    // 0x360820: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x360820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_360824:
    // 0x360824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x360824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360828: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x360828u;
    SET_GPR_U32(ctx, 31, 0x360830u);
    ctx->pc = 0x36082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360828u;
    // 0x36082c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x360828u, 0x360830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360830u;
label_360830:
    // 0x360830: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x360830u;
    {
        const bool branch_taken_0x360830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360830) {
            ctx->pc = 0x360834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360830u;
            // 0x360834: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36084Cu;
            goto label_36084c;
        }
    }
    ctx->pc = 0x360838u;
    // 0x360838: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x360838u;
    SET_GPR_U32(ctx, 31, 0x360840u);
    ctx->pc = 0x36083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360838u;
    // 0x36083c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x360838u, 0x360840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360840u;
label_360840:
    // 0x360840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360844: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x360844u;
    {
        const bool branch_taken_0x360844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x360844) {
            ctx->pc = 0x360848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360844u;
            // 0x360848: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36084Cu;
            goto label_36084c;
        }
    }
    ctx->pc = 0x36084Cu;
label_36084c:
    // 0x36084c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36084Cu;
    {
        const bool branch_taken_0x36084c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x360850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36084Cu;
        // 0x360850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36084c) {
            ctx->pc = 0x36086Cu;
            goto label_36086c;
        }
    }
    ctx->pc = 0x360854u;
    // 0x360854: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x360854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x360858: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x360858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36085c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36085Cu;
    {
        const bool branch_taken_0x36085c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x360860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36085Cu;
        // 0x360860: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36085c) {
            ctx->pc = 0x360868u;
            goto label_360868;
        }
    }
    ctx->pc = 0x360864u;
    // 0x360864: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x360864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_360868:
    // 0x360868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36086c:
    // 0x36086c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x36086cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_360870:
    // 0x360870: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x360870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x360874: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x360874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x360878: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x360878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36087c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x36087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x360880: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x360880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x360884: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x360884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360888: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x360888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36088c: 0x3e00008  jr          $ra
    ctx->pc = 0x36088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36088Cu;
        // 0x360890: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360894u;
    // 0x360894: 0x0  nop
    ctx->pc = 0x360894u;
    // NOP
    ctx->pc = 0x360898u;
}
