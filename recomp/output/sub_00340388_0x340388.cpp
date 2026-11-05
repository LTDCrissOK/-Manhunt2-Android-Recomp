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

// Function: sub_00340388
// Address: 0x340388 - 0x341510
void sub_00340388_0x340388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340388_0x340388");
#endif

    switch (ctx->pc) {
        case 0x3403e8u: goto label_3403e8;
        case 0x3403f4u: goto label_3403f4;
        case 0x340400u: goto label_340400;
        case 0x34040cu: goto label_34040c;
        case 0x340418u: goto label_340418;
        case 0x340424u: goto label_340424;
        case 0x340430u: goto label_340430;
        case 0x340438u: goto label_340438;
        case 0x3404b0u: goto label_3404b0;
        case 0x3404e0u: goto label_3404e0;
        case 0x340c50u: goto label_340c50;
        case 0x340c98u: goto label_340c98;
        case 0x340ca0u: goto label_340ca0;
        case 0x340d20u: goto label_340d20;
        case 0x340dd0u: goto label_340dd0;
        case 0x341028u: goto label_341028;
        case 0x341038u: goto label_341038;
        case 0x341040u: goto label_341040;
        case 0x341048u: goto label_341048;
        case 0x341054u: goto label_341054;
        case 0x341064u: goto label_341064;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413d8u: goto label_3413d8;
        case 0x341424u: goto label_341424;
        case 0x341458u: goto label_341458;
        case 0x3414a0u: goto label_3414a0;
        case 0x3414a8u: goto label_3414a8;
        case 0x3414b0u: goto label_3414b0;
        default: break;
    }

    ctx->pc = 0x340388u;

    // 0x340388: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x34038c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340390: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x340390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x340394: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x340394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x340398: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x340398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x34039c: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x34039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x3403a0: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x3403a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x3403a4: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x3403a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x3403a8: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x3403a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x3403ac: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x3403acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x3403b0: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x3403b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x3403b4: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x3403b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x3403b8: 0xe7be0200  swc1        $f30, 0x200($sp)
    ctx->pc = 0x3403b8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x3403bc: 0xe7bd01f8  swc1        $f29, 0x1F8($sp)
    ctx->pc = 0x3403bcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x3403c0: 0xe7bc01f0  swc1        $f28, 0x1F0($sp)
    ctx->pc = 0x3403c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x3403c4: 0xe7bb01e8  swc1        $f27, 0x1E8($sp)
    ctx->pc = 0x3403c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x3403c8: 0xe7ba01e0  swc1        $f26, 0x1E0($sp)
    ctx->pc = 0x3403c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x3403cc: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x3403ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x3403d0: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x3403d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x3403d4: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x3403d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x3403d8: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x3403d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x3403dc: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x3403dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x3403e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3403E0u;
    SET_GPR_U32(ctx, 31, 0x3403E8u);
    ctx->pc = 0x3403E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403E0u;
    // 0x3403e4: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3403E0u, 0x3403E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3403E8u;
label_3403e8:
    // 0x3403e8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3403e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3403ec: 0xc0db198  jal         func_36C660
    ctx->pc = 0x3403ECu;
    SET_GPR_U32(ctx, 31, 0x3403F4u);
    ctx->pc = 0x3403F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403ECu;
    // 0x3403f0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x3403ECu, 0x3403F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3403F4u;
label_3403f4:
    // 0x3403f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3403f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3403f8: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x3403F8u;
    SET_GPR_U32(ctx, 31, 0x340400u);
    ctx->pc = 0x3403FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3403F8u;
    // 0x3403fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x3403F8u, 0x340400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340400u;
label_340400:
    // 0x340400: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x340400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340404: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x340404u;
    SET_GPR_U32(ctx, 31, 0x34040Cu);
    ctx->pc = 0x340408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340404u;
    // 0x340408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x340404u, 0x34040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34040Cu;
label_34040c:
    // 0x34040c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340410: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x340410u;
    SET_GPR_U32(ctx, 31, 0x340418u);
    ctx->pc = 0x340414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340410u;
    // 0x340414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x340410u, 0x340418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340418u;
label_340418:
    // 0x340418: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34041c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34041Cu;
    SET_GPR_U32(ctx, 31, 0x340424u);
    ctx->pc = 0x340420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34041Cu;
    // 0x340420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34041Cu, 0x340424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340424u;
label_340424:
    // 0x340424: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x340424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340428: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x340428u;
    SET_GPR_U32(ctx, 31, 0x340430u);
    ctx->pc = 0x34042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340428u;
    // 0x34042c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x340428u, 0x340430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340430u;
label_340430:
    // 0x340430: 0xc076100  jal         func_1D8400
    ctx->pc = 0x340430u;
    SET_GPR_U32(ctx, 31, 0x340438u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x340430u, 0x340438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340438u;
label_340438:
    // 0x340438: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x340438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x34043c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34043Cu;
    {
        const bool branch_taken_0x34043c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x340440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34043Cu;
        // 0x340440: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34043c) {
            ctx->pc = 0x340458u;
            goto label_340458;
        }
    }
    ctx->pc = 0x340444u;
    // 0x340444: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x340444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340448: 0x0  nop
    ctx->pc = 0x340448u;
    // NOP
    // 0x34044c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34044cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340450: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340450u;
    {
        const bool branch_taken_0x340450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340450u;
        // 0x340454: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340450) {
            ctx->pc = 0x340474u;
            goto label_340474;
        }
    }
    ctx->pc = 0x340458u;
label_340458:
    // 0x340458: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x340458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34045c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340464: 0x0  nop
    ctx->pc = 0x340464u;
    // NOP
    // 0x340468: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x340468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34046c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34046cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340470: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x340470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_340474:
    // 0x340474: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x340474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x340478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34047c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34047cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x340480: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x340480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x340484: 0x8c65c350  lw          $a1, -0x3CB0($v1)
    ctx->pc = 0x340484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951760)));
    // 0x340488: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x340488u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34048c: 0xac40c6bc  sw          $zero, -0x3944($v0)
    ctx->pc = 0x34048cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FC6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC6BCu, _value); } while (0);
    // 0x340490: 0xac80c6b8  sw          $zero, -0x3948($a0)
    ctx->pc = 0x340490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FC6B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC6B8u, _value); } while (0);
    // 0x340494: 0x18a003fc  blez        $a1, . + 4 + (0x3FC << 2)
    ctx->pc = 0x340494u;
    {
        const bool branch_taken_0x340494 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x340498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340494u;
        // 0x340498: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340494) {
            ctx->pc = 0x341488u;
            goto label_341488;
        }
    }
    ctx->pc = 0x34049Cu;
    // 0x34049c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3404a0: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3404a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x3404a4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3404a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3404a8: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x3404a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3404ac: 0x0  nop
    ctx->pc = 0x3404acu;
    // NOP
label_3404b0:
    // 0x3404b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3404b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3404b4: 0x8c62c6bc  lw          $v0, -0x3944($v1)
    ctx->pc = 0x3404b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC6BCu));
    // 0x3404b8: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x3404b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x3404bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3404BCu;
    {
        const bool branch_taken_0x3404bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404BCu;
        // 0x3404c0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404bc) {
            ctx->pc = 0x3404D4u;
            goto label_3404d4;
        }
    }
    ctx->pc = 0x3404C4u;
    // 0x3404c4: 0x8c82c6b8  lw          $v0, -0x3948($a0)
    ctx->pc = 0x3404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952632)));
    // 0x3404c8: 0x284200fc  slti        $v0, $v0, 0xFC
    ctx->pc = 0x3404c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x3404cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3404CCu;
    {
        const bool branch_taken_0x3404cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404CCu;
        // 0x3404d0: 0x8fa80120  lw          $t0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404cc) {
            ctx->pc = 0x3404E4u;
            goto label_3404e4;
        }
    }
    ctx->pc = 0x3404D4u;
label_3404d4:
    // 0x3404d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x3404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x3404d8: 0xc0d3ac6  jal         func_34EB18
    ctx->pc = 0x3404D8u;
    SET_GPR_U32(ctx, 31, 0x3404E0u);
    ctx->pc = 0x3404DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404D8u;
    // 0x3404dc: 0x8c44f42c  lw          $a0, -0xBD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EB18u, 0x3404D8u, 0x3404E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404E0u;
label_3404e0:
    // 0x3404e0: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x3404e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3404e4:
    // 0x3404e4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3404e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3404e8: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3404e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3404ec: 0x8cc4bd48  lw          $a0, -0x42B8($a2)
    ctx->pc = 0x3404ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3404f0: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x3404f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3404f4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3404f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3404f8: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x3404f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3404fc: 0x24427070  addiu       $v0, $v0, 0x7070
    ctx->pc = 0x3404fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28784));
    // 0x340500: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x340504: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x340504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x340508: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x340508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34050c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x34050cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340510: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x340510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340514: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x340514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340518: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x340518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34051c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x34051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x340520: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x340520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340524: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x340524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340528: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x340528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34052c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x34052cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x340530: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x340530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x340534: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x340534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x340538: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x340538u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34053c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x34053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340540: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x340540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340544: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x340544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x340548: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x340548u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34054c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34054cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x340550: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x340550u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x340554: 0x46010044  c1          0x10044
    ctx->pc = 0x340554u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x340558: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x340558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x34055c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34055cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340560: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x340560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x340564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x340564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340568: 0x0  nop
    ctx->pc = 0x340568u;
    // NOP
    // 0x34056c: 0x450003c0  bc1f        . + 4 + (0x3C0 << 2)
    ctx->pc = 0x34056Cu;
    {
        const bool branch_taken_0x34056c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34056Cu;
        // 0x340570: 0xafa90158  sw          $t1, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34056c) {
            ctx->pc = 0x341470u;
            goto label_341470;
        }
    }
    ctx->pc = 0x340574u;
    // 0x340574: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x340574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x340578: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x340578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x34057c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x340580: 0x24426ff0  addiu       $v0, $v0, 0x6FF0
    ctx->pc = 0x340580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
    // 0x340584: 0x400013  mtlo        $v0
    ctx->pc = 0x340584u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340588: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x340588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34058c: 0x71077800  madd        $t7, $t0, $a3
    ctx->pc = 0x34058cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x340590: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x340590u;
    {
        const bool branch_taken_0x340590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340590u;
        // 0x340594: 0x8dec00d8  lw          $t4, 0xD8($t7) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340590) {
            ctx->pc = 0x3405D0u;
            goto label_3405d0;
        }
    }
    ctx->pc = 0x340598u;
    // 0x340598: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x340598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34059c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34059cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3405a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3405a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3405a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3405a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3405a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3405a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3405ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3405acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3405b0: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x3405b0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3405b4: 0x0  nop
    ctx->pc = 0x3405b4u;
    // NOP
    // 0x3405b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3405b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3405bc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3405bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3405c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3405c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3405c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3405c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3405c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3405c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3405cc: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x3405ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_3405d0:
    // 0x3405d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3405d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3405d4: 0x8e63c6bc  lw          $v1, -0x3944($s3)
    ctx->pc = 0x3405d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3405d8: 0x2442d818  addiu       $v0, $v0, -0x27E8
    ctx->pc = 0x3405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957080));
    // 0x3405dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3405dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x3405e0: 0x400013  mtlo        $v0
    ctx->pc = 0x3405e0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3405e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3405e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3405e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3405ec: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x3405ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3405f0: 0x2442d818  addiu       $v0, $v0, -0x27E8
    ctx->pc = 0x3405f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957080));
    // 0x3405f4: 0x24a5d578  addiu       $a1, $a1, -0x2A88
    ctx->pc = 0x3405f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956408));
    // 0x3405f8: 0x400013  mtlo        $v0
    ctx->pc = 0x3405f8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3405fc: 0x90a90010  lbu         $t1, 0x10($a1)
    ctx->pc = 0x3405fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x340600: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x340600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340604: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340608: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x340608u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34060c: 0x2442d818  addiu       $v0, $v0, -0x27E8
    ctx->pc = 0x34060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957080));
    // 0x340610: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340614: 0x400013  mtlo        $v0
    ctx->pc = 0x340614u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340618: 0x24a5d598  addiu       $a1, $a1, -0x2A68
    ctx->pc = 0x340618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956440));
    // 0x34061c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x34061cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340620: 0x90aa0010  lbu         $t2, 0x10($a1)
    ctx->pc = 0x340620u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x340624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340628: 0x70f43800  madd        $a3, $a3, $s4
    ctx->pc = 0x340628u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x34062c: 0x2442d818  addiu       $v0, $v0, -0x27E8
    ctx->pc = 0x34062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957080));
    // 0x340630: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340634: 0x400013  mtlo        $v0
    ctx->pc = 0x340634u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340638: 0x24a5d5b8  addiu       $a1, $a1, -0x2A48
    ctx->pc = 0x340638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956472));
    // 0x34063c: 0xc5e00004  lwc1        $f0, 0x4($t7)
    ctx->pc = 0x34063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340640: 0x90ab0010  lbu         $t3, 0x10($a1)
    ctx->pc = 0x340640u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x340644: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x340644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x340648: 0x8e65c6bc  lw          $a1, -0x3944($s3)
    ctx->pc = 0x340648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x34064c: 0x2450c358  addiu       $s0, $v0, -0x3CA8
    ctx->pc = 0x34064cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951768));
    // 0x340650: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x340650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340654: 0x461c0000  add.s       $f0, $f0, $f28
    ctx->pc = 0x340654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
    // 0x340658: 0xc5e20008  lwc1        $f2, 0x8($t7)
    ctx->pc = 0x340658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34065c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340660: 0x8e66c6bc  lw          $a2, -0x3944($s3)
    ctx->pc = 0x340660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340664: 0x71144000  madd        $t0, $t0, $s4
    ctx->pc = 0x340664u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x340668: 0xa0690008  sb          $t1, 0x8($v1)
    ctx->pc = 0x340668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x34066c: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x34066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x340670: 0xa06a0009  sb          $t2, 0x9($v1)
    ctx->pc = 0x340670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 10));
    // 0x340674: 0x400013  mtlo        $v0
    ctx->pc = 0x340674u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340678: 0xa06b000a  sb          $t3, 0xA($v1)
    ctx->pc = 0x340678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 11));
    // 0x34067c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340680: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x340680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x340684: 0x70b42800  madd        $a1, $a1, $s4
    ctx->pc = 0x340684u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x340688: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x340688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x34068c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340690: 0xc5e10014  lwc1        $f1, 0x14($t7)
    ctx->pc = 0x340690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340694: 0x400013  mtlo        $v0
    ctx->pc = 0x340694u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340698: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x340698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34069c: 0x2463d578  addiu       $v1, $v1, -0x2A88
    ctx->pc = 0x34069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956408));
    // 0x3406a0: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x3406a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3406a4: 0x70d43000  madd        $a2, $a2, $s4
    ctx->pc = 0x3406a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3406a8: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x3406a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3406ac: 0x461c0840  add.s       $f1, $f1, $f28
    ctx->pc = 0x3406acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x3406b0: 0xe4f80000  swc1        $f24, 0x0($a3)
    ctx->pc = 0x3406b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3406b4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3406b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3406b8: 0x2484d598  addiu       $a0, $a0, -0x2A68
    ctx->pc = 0x3406b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956440));
    // 0x3406bc: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x3406bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x3406c0: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x3406c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3406c4: 0x24e7d5b8  addiu       $a3, $a3, -0x2A48
    ctx->pc = 0x3406c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956472));
    // 0x3406c8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3406c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6BD5A8u));
    // 0x3406cc: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x3406ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x3406d0: 0x90e40010  lbu         $a0, 0x10($a3)
    ctx->pc = 0x3406d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6BD5C8u));
    // 0x3406d4: 0x3c0d0040  lui         $t5, 0x40
    ctx->pc = 0x3406d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64 << 16));
    // 0x3406d8: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x3406d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x3406dc: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x3406dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x3406e0: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x3406e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x3406e4: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x3406e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x3406e8: 0xc5e20010  lwc1        $f2, 0x10($t7)
    ctx->pc = 0x3406e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3406ec: 0x2508d578  addiu       $t0, $t0, -0x2A88
    ctx->pc = 0x3406ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956408));
    // 0x3406f0: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x3406f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3406f4: 0x240b0023  addiu       $t3, $zero, 0x23
    ctx->pc = 0x3406f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3406f8: 0xa0a4000a  sb          $a0, 0xA($a1)
    ctx->pc = 0x3406f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3406fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3406fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340700: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x340700u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x340704: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x340704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x340708: 0xa0a0000b  sb          $zero, 0xB($a1)
    ctx->pc = 0x340708u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x34070c: 0x400013  mtlo        $v0
    ctx->pc = 0x34070cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340710: 0xc5e00018  lwc1        $f0, 0x18($t7)
    ctx->pc = 0x340710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340714: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x340714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x340718: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x340718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x34071c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x34071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x340720: 0x8e63c6bc  lw          $v1, -0x3944($s3)
    ctx->pc = 0x340720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340724: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x340724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x340728: 0x24c6d830  addiu       $a2, $a2, -0x27D0
    ctx->pc = 0x340728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957104));
    // 0x34072c: 0xc5e00090  lwc1        $f0, 0x90($t7)
    ctx->pc = 0x34072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340730: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x340730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340734: 0xc5e40094  lwc1        $f4, 0x94($t7)
    ctx->pc = 0x340734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x340738: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x340738u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34073c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34073cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340740: 0xc00013  mtlo        $a2
    ctx->pc = 0x340740u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x340744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340748: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x340748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x34074c: 0x70b42800  madd        $a1, $a1, $s4
    ctx->pc = 0x34074cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x340750: 0x24c6d848  addiu       $a2, $a2, -0x27B8
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x340754: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x340754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x340758: 0xc00013  mtlo        $a2
    ctx->pc = 0x340758u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x34075c: 0xc5e30024  lwc1        $f3, 0x24($t7)
    ctx->pc = 0x34075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340760: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x340764: 0x70541000  madd        $v0, $v0, $s4
    ctx->pc = 0x340764u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340768: 0x24c6d848  addiu       $a2, $a2, -0x27B8
    ctx->pc = 0x340768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x34076c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x34076cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340770: 0xc00013  mtlo        $a2
    ctx->pc = 0x340770u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x340774: 0xc5e10098  lwc1        $f1, 0x98($t7)
    ctx->pc = 0x340774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340778: 0x8e67c6bc  lw          $a3, -0x3944($s3)
    ctx->pc = 0x340778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x34077c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x34077cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x340780: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x340780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x340784: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x340784u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x340788: 0x24c6d848  addiu       $a2, $a2, -0x27B8
    ctx->pc = 0x340788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x34078c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340790: 0xc00013  mtlo        $a2
    ctx->pc = 0x340790u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x340794: 0x2463d848  addiu       $v1, $v1, -0x27B8
    ctx->pc = 0x340794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957128));
    // 0x340798: 0x71344800  madd        $t1, $t1, $s4
    ctx->pc = 0x340798u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x34079c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x34079cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3407a0: 0x24c6d598  addiu       $a2, $a2, -0x2A68
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956440));
    // 0x3407a4: 0x910a0010  lbu         $t2, 0x10($t0)
    ctx->pc = 0x3407a4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3407a8: 0x600013  mtlo        $v1
    ctx->pc = 0x3407a8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3407ac: 0x461c18c0  add.s       $f3, $f3, $f28
    ctx->pc = 0x3407acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[28]);
    // 0x3407b0: 0x90c30010  lbu         $v1, 0x10($a2)
    ctx->pc = 0x3407b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3407b4: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x3407b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x3407b8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x3407b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3407bc: 0x70f43800  madd        $a3, $a3, $s4
    ctx->pc = 0x3407bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3407c0: 0x24c6d5b8  addiu       $a2, $a2, -0x2A48
    ctx->pc = 0x3407c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956472));
    // 0x3407c4: 0x90c80010  lbu         $t0, 0x10($a2)
    ctx->pc = 0x3407c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3407c8: 0x8e66c6bc  lw          $a2, -0x3944($s3)
    ctx->pc = 0x3407c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3407cc: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3407ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3407d0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3407d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x3407d4: 0xc5e20020  lwc1        $f2, 0x20($t7)
    ctx->pc = 0x3407d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3407d8: 0x24a5d860  addiu       $a1, $a1, -0x27A0
    ctx->pc = 0x3407d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
    // 0x3407dc: 0xc5e00028  lwc1        $f0, 0x28($t7)
    ctx->pc = 0x3407dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3407e0: 0xa00013  mtlo        $a1
    ctx->pc = 0x3407e0u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x3407e4: 0xa04a0008  sb          $t2, 0x8($v0)
    ctx->pc = 0x3407e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x3407e8: 0x70d43000  madd        $a2, $a2, $s4
    ctx->pc = 0x3407e8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3407ec: 0xa048000a  sb          $t0, 0xA($v0)
    ctx->pc = 0x3407ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 8));
    // 0x3407f0: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x3407f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x3407f4: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x3407f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3407f8: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x3407f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x3407fc: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x3407fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x340800: 0x2508d578  addiu       $t0, $t0, -0x2A88
    ctx->pc = 0x340800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956408));
    // 0x340804: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x340804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x340808: 0x254ad5b8  addiu       $t2, $t2, -0x2A48
    ctx->pc = 0x340808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956472));
    // 0x34080c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x34080cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x340810: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340814: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x340814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x340818: 0x24a5d860  addiu       $a1, $a1, -0x27A0
    ctx->pc = 0x340818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
    // 0x34081c: 0xc5e0009c  lwc1        $f0, 0x9C($t7)
    ctx->pc = 0x34081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340820: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x340820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x340824: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x340824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x340828: 0x2529d598  addiu       $t1, $t1, -0x2A68
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956440));
    // 0x34082c: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x34082cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6BD588u));
    // 0x340830: 0x91240010  lbu         $a0, 0x10($t1)
    ctx->pc = 0x340830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6BD5A8u));
    // 0x340834: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x340834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x340838: 0x91420010  lbu         $v0, 0x10($t2)
    ctx->pc = 0x340838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6BD5C8u));
    // 0x34083c: 0xa0c40009  sb          $a0, 0x9($a2)
    ctx->pc = 0x34083cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x340840: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x340840u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x340844: 0xa0c30008  sb          $v1, 0x8($a2)
    ctx->pc = 0x340844u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x340848: 0x254ad578  addiu       $t2, $t2, -0x2A88
    ctx->pc = 0x340848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956408));
    // 0x34084c: 0xa0c2000a  sb          $v0, 0xA($a2)
    ctx->pc = 0x34084cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x340850: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340854: 0x8e63c6bc  lw          $v1, -0x3944($s3)
    ctx->pc = 0x340854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340858: 0x2442d860  addiu       $v0, $v0, -0x27A0
    ctx->pc = 0x340858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957152));
    // 0x34085c: 0xc5e10034  lwc1        $f1, 0x34($t7)
    ctx->pc = 0x34085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340860: 0x400013  mtlo        $v0
    ctx->pc = 0x340860u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340864: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x340864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340868: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34086c: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x34086cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340870: 0x2442d860  addiu       $v0, $v0, -0x27A0
    ctx->pc = 0x340870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957152));
    // 0x340874: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x340874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340878: 0x400013  mtlo        $v0
    ctx->pc = 0x340878u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x34087c: 0xc5e200a0  lwc1        $f2, 0xA0($t7)
    ctx->pc = 0x34087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340880: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x340880u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x340884: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x340884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340888: 0xc5e00038  lwc1        $f0, 0x38($t7)
    ctx->pc = 0x340888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34088c: 0x461c0840  add.s       $f1, $f1, $f28
    ctx->pc = 0x34088cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x340890: 0xa00013  mtlo        $a1
    ctx->pc = 0x340890u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x340894: 0xc5e40030  lwc1        $f4, 0x30($t7)
    ctx->pc = 0x340894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x340898: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x34089c: 0x71344800  madd        $t1, $t1, $s4
    ctx->pc = 0x34089cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3408a0: 0x24a5d878  addiu       $a1, $a1, -0x2788
    ctx->pc = 0x3408a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957176));
    // 0x3408a4: 0x4602c080  add.s       $f2, $f24, $f2
    ctx->pc = 0x3408a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x3408a8: 0xa00013  mtlo        $a1
    ctx->pc = 0x3408a8u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x3408ac: 0x8e65c6bc  lw          $a1, -0x3944($s3)
    ctx->pc = 0x3408acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3408b0: 0x70541000  madd        $v0, $v0, $s4
    ctx->pc = 0x3408b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3408b4: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x3408b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3408b8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x3408b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3408bc: 0xc5e30044  lwc1        $f3, 0x44($t7)
    ctx->pc = 0x3408bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3408c0: 0x24c6d878  addiu       $a2, $a2, -0x2788
    ctx->pc = 0x3408c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957176));
    // 0x3408c4: 0x8e68c6bc  lw          $t0, -0x3944($s3)
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3408c8: 0xc00013  mtlo        $a2
    ctx->pc = 0x3408c8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3408cc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3408ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3408d0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x3408d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3408d4: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x3408d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3408d8: 0x70b42800  madd        $a1, $a1, $s4
    ctx->pc = 0x3408d8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3408dc: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x3408dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3408e0: 0x24c6d878  addiu       $a2, $a2, -0x2788
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957176));
    // 0x3408e4: 0xc00013  mtlo        $a2
    ctx->pc = 0x3408e4u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3408e8: 0xc5e100a8  lwc1        $f1, 0xA8($t7)
    ctx->pc = 0x3408e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3408ec: 0xc5e000a4  lwc1        $f0, 0xA4($t7)
    ctx->pc = 0x3408ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3408f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3408f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3408f4: 0x8e66c6bc  lw          $a2, -0x3944($s3)
    ctx->pc = 0x3408f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3408f8: 0x71144000  madd        $t0, $t0, $s4
    ctx->pc = 0x3408f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3408fc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x3408fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x340900: 0x2463d878  addiu       $v1, $v1, -0x2788
    ctx->pc = 0x340900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957176));
    // 0x340904: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x340904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x340908: 0x600013  mtlo        $v1
    ctx->pc = 0x340908u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x34090c: 0x91470010  lbu         $a3, 0x10($t2)
    ctx->pc = 0x34090cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x340910: 0x2484d598  addiu       $a0, $a0, -0x2A68
    ctx->pc = 0x340910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956440));
    // 0x340914: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x340914u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x340918: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x340918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34091c: 0x254ad5b8  addiu       $t2, $t2, -0x2A48
    ctx->pc = 0x34091cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956472));
    // 0x340920: 0x461c18c0  add.s       $f3, $f3, $f28
    ctx->pc = 0x340920u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[28]);
    // 0x340924: 0x91440010  lbu         $a0, 0x10($t2)
    ctx->pc = 0x340924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6BD5C8u));
    // 0x340928: 0x70d43000  madd        $a2, $a2, $s4
    ctx->pc = 0x340928u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34092c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x34092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x340930: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x340930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x340934: 0xc5e00048  lwc1        $f0, 0x48($t7)
    ctx->pc = 0x340934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340938: 0xc5e20040  lwc1        $f2, 0x40($t7)
    ctx->pc = 0x340938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34093c: 0xa0470008  sb          $a3, 0x8($v0)
    ctx->pc = 0x34093cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x340940: 0xa044000a  sb          $a0, 0xA($v0)
    ctx->pc = 0x340940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x340944: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x340948: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x340948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x34094c: 0x24e7d578  addiu       $a3, $a3, -0x2A88
    ctx->pc = 0x34094cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956408));
    // 0x340950: 0xa04c000b  sb          $t4, 0xB($v0)
    ctx->pc = 0x340950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x340954: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x340954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x340958: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34095c: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x34095cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x340960: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x340960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x340964: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x340964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x340968: 0x400013  mtlo        $v0
    ctx->pc = 0x340968u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x34096c: 0xc5e000ac  lwc1        $f0, 0xAC($t7)
    ctx->pc = 0x34096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340970: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340974: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x340974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x340978: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x34097c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x34097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x340980: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x340980u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x340984: 0x8e63c6bc  lw          $v1, -0x3944($s3)
    ctx->pc = 0x340984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340988: 0x2508d598  addiu       $t0, $t0, -0x2A68
    ctx->pc = 0x340988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956440));
    // 0x34098c: 0x90ea0010  lbu         $t2, 0x10($a3)
    ctx->pc = 0x34098cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x340990: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x340990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340994: 0x91070010  lbu         $a3, 0x10($t0)
    ctx->pc = 0x340994u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x6BD5A8u));
    // 0x340998: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x340998u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34099c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409a0: 0x400013  mtlo        $v0
    ctx->pc = 0x3409a0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3409a4: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x3409a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x3409a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3409a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3409ac: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x3409acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3409b0: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x3409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x3409b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3409b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3409b8: 0x400013  mtlo        $v0
    ctx->pc = 0x3409b8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3409bc: 0x2508d5b8  addiu       $t0, $t0, -0x2A48
    ctx->pc = 0x3409bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956472));
    // 0x3409c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3409c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3409c4: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x3409c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3409c8: 0x70b42800  madd        $a1, $a1, $s4
    ctx->pc = 0x3409c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3409cc: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x3409ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x3409d0: 0x400013  mtlo        $v0
    ctx->pc = 0x3409d0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3409d4: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x3409d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x3409d8: 0x70d43000  madd        $a2, $a2, $s4
    ctx->pc = 0x3409d8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3409dc: 0x2508d8a8  addiu       $t0, $t0, -0x2758
    ctx->pc = 0x3409dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957224));
    // 0x3409e0: 0xc5e20054  lwc1        $f2, 0x54($t7)
    ctx->pc = 0x3409e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3409e4: 0x1000013  mtlo        $t0
    ctx->pc = 0x3409e4u;
    ctx->lo = GPR_U64(ctx, 8);
    // 0x3409e8: 0xc5e30050  lwc1        $f3, 0x50($t7)
    ctx->pc = 0x3409e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3409ec: 0xc5e00058  lwc1        $f0, 0x58($t7)
    ctx->pc = 0x3409ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3409f0: 0x461c1080  add.s       $f2, $f2, $f28
    ctx->pc = 0x3409f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[28]);
    // 0x3409f4: 0xc5e100b0  lwc1        $f1, 0xB0($t7)
    ctx->pc = 0x3409f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3409f8: 0x8e62c6bc  lw          $v0, -0x3944($s3)
    ctx->pc = 0x3409f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x3409fc: 0x8e68c6bc  lw          $t0, -0x3944($s3)
    ctx->pc = 0x3409fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340a00: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x340a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x340a04: 0xa06a0008  sb          $t2, 0x8($v1)
    ctx->pc = 0x340a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x340a08: 0x70541000  madd        $v0, $v0, $s4
    ctx->pc = 0x340a08u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340a0c: 0xa0670009  sb          $a3, 0x9($v1)
    ctx->pc = 0x340a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x340a10: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x340a10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x340a14: 0xa069000a  sb          $t1, 0xA($v1)
    ctx->pc = 0x340a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x340a18: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x340a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x340a1c: 0xa06c000b  sb          $t4, 0xB($v1)
    ctx->pc = 0x340a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x340a20: 0x24e7d8a8  addiu       $a3, $a3, -0x2758
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957224));
    // 0x340a24: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x340a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x340a28: 0xe00013  mtlo        $a3
    ctx->pc = 0x340a28u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x340a2c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x340a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x340a30: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x340a30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x340a34: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x340a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x340a38: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x340a38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x340a3c: 0xc5e000b4  lwc1        $f0, 0xB4($t7)
    ctx->pc = 0x340a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340a40: 0x2529d578  addiu       $t1, $t1, -0x2A88
    ctx->pc = 0x340a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956408));
    // 0x340a44: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x340a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x340a48: 0x254ad598  addiu       $t2, $t2, -0x2A68
    ctx->pc = 0x340a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956440));
    // 0x340a4c: 0x24e7d5b8  addiu       $a3, $a3, -0x2A48
    ctx->pc = 0x340a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956472));
    // 0x340a50: 0x71144000  madd        $t0, $t0, $s4
    ctx->pc = 0x340a50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x340a54: 0x91230010  lbu         $v1, 0x10($t1)
    ctx->pc = 0x340a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x340a58: 0x91440010  lbu         $a0, 0x10($t2)
    ctx->pc = 0x340a58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x340a5c: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x340a5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x340a60: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x340a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x340a64: 0xc5e10060  lwc1        $f1, 0x60($t7)
    ctx->pc = 0x340a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340a68: 0xa0440009  sb          $a0, 0x9($v0)
    ctx->pc = 0x340a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x340a6c: 0xa045000a  sb          $a1, 0xA($v0)
    ctx->pc = 0x340a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x340a70: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x340a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x340a74: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340a78: 0xa04c000b  sb          $t4, 0xB($v0)
    ctx->pc = 0x340a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x340a7c: 0x24a5d8a8  addiu       $a1, $a1, -0x2758
    ctx->pc = 0x340a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957224));
    // 0x340a80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x340a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x340a84: 0xc5e00064  lwc1        $f0, 0x64($t7)
    ctx->pc = 0x340a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340a88: 0x2442d8a8  addiu       $v0, $v0, -0x2758
    ctx->pc = 0x340a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957224));
    // 0x340a8c: 0xc5e20068  lwc1        $f2, 0x68($t7)
    ctx->pc = 0x340a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340a90: 0x400013  mtlo        $v0
    ctx->pc = 0x340a90u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x340a94: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x340a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x340a98: 0x461c0000  add.s       $f0, $f0, $f28
    ctx->pc = 0x340a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
    // 0x340a9c: 0x8e63c6bc  lw          $v1, -0x3944($s3)
    ctx->pc = 0x340a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340aa0: 0xc5e100b8  lwc1        $f1, 0xB8($t7)
    ctx->pc = 0x340aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340aa4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x340aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340aa8: 0xc5e30074  lwc1        $f3, 0x74($t7)
    ctx->pc = 0x340aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340aac: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x340aacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340ab0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x340ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ab4: 0xa00013  mtlo        $a1
    ctx->pc = 0x340ab4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x340ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340abc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340ac0: 0x70f43800  madd        $a3, $a3, $s4
    ctx->pc = 0x340ac0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x340ac4: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x340ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    // 0x340ac8: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x340ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x340acc: 0xa00013  mtlo        $a1
    ctx->pc = 0x340accu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x340ad0: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x340ad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x340ad4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340ad8: 0x70541000  madd        $v0, $v0, $s4
    ctx->pc = 0x340ad8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340adc: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x340adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x340ae0: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x340ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    // 0x340ae4: 0xa00013  mtlo        $a1
    ctx->pc = 0x340ae4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x340ae8: 0xc5e000bc  lwc1        $f0, 0xBC($t7)
    ctx->pc = 0x340ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340aec: 0xc5e200c0  lwc1        $f2, 0xC0($t7)
    ctx->pc = 0x340aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340af0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x340af0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340af4: 0x8e66c6bc  lw          $a2, -0x3944($s3)
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340af8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340afc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x340afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x340b00: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x340b00u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x340b04: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x340b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    // 0x340b08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x340b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340b0c: 0xa00013  mtlo        $a1
    ctx->pc = 0x340b0cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x340b10: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x340b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x340b14: 0x71545000  madd        $t2, $t2, $s4
    ctx->pc = 0x340b14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x340b18: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340b1c: 0x24a5d598  addiu       $a1, $a1, -0x2A68
    ctx->pc = 0x340b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956440));
    // 0x340b20: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x340b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x340b24: 0x600013  mtlo        $v1
    ctx->pc = 0x340b24u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x340b28: 0x2508d578  addiu       $t0, $t0, -0x2A88
    ctx->pc = 0x340b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956408));
    // 0x340b2c: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x340b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x340b30: 0x461c18c0  add.s       $f3, $f3, $f28
    ctx->pc = 0x340b30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[28]);
    // 0x340b34: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x340b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x340b38: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x340b38u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x340b3c: 0x24a5d5b8  addiu       $a1, $a1, -0x2A48
    ctx->pc = 0x340b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956472));
    // 0x340b40: 0x4602c080  add.s       $f2, $f24, $f2
    ctx->pc = 0x340b40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x340b44: 0x90a80010  lbu         $t0, 0x10($a1)
    ctx->pc = 0x340b44u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x6BD5C8u));
    // 0x340b48: 0x70d43000  madd        $a2, $a2, $s4
    ctx->pc = 0x340b48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x340b4c: 0x8e65c6bc  lw          $a1, -0x3944($s3)
    ctx->pc = 0x340b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340b50: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x340b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x340b54: 0xc5e00078  lwc1        $f0, 0x78($t7)
    ctx->pc = 0x340b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340b58: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x340b58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x340b5c: 0xc5e10070  lwc1        $f1, 0x70($t7)
    ctx->pc = 0x340b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340b60: 0x24e7d8d8  addiu       $a3, $a3, -0x2728
    ctx->pc = 0x340b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957272));
    // 0x340b64: 0xa0490008  sb          $t1, 0x8($v0)
    ctx->pc = 0x340b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x340b68: 0xe00013  mtlo        $a3
    ctx->pc = 0x340b68u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x340b6c: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x340b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x340b70: 0x70b42800  madd        $a1, $a1, $s4
    ctx->pc = 0x340b70u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x340b74: 0xa048000a  sb          $t0, 0xA($v0)
    ctx->pc = 0x340b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 8));
    // 0x340b78: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x340b78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x340b7c: 0xa04c000b  sb          $t4, 0xB($v0)
    ctx->pc = 0x340b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x340b80: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x340b80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x340b84: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x340b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x340b88: 0x2508d578  addiu       $t0, $t0, -0x2A88
    ctx->pc = 0x340b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956408));
    // 0x340b8c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x340b8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x340b90: 0x2529d598  addiu       $t1, $t1, -0x2A68
    ctx->pc = 0x340b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956440));
    // 0x340b94: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x340b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x340b98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340b9c: 0xc5e000c4  lwc1        $f0, 0xC4($t7)
    ctx->pc = 0x340b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340ba0: 0x2463d8d8  addiu       $v1, $v1, -0x2728
    ctx->pc = 0x340ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957272));
    // 0x340ba4: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x340ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x340ba8: 0x600013  mtlo        $v1
    ctx->pc = 0x340ba8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x340bac: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x340bacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x340bb0: 0x91020010  lbu         $v0, 0x10($t0)
    ctx->pc = 0x340bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x340bb4: 0x254ad5b8  addiu       $t2, $t2, -0x2A48
    ctx->pc = 0x340bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956472));
    // 0x340bb8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x340bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x340bbc: 0x91460010  lbu         $a2, 0x10($t2)
    ctx->pc = 0x340bbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x6BD5C8u));
    // 0x340bc0: 0x91270010  lbu         $a3, 0x10($t1)
    ctx->pc = 0x340bc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x340bc4: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x340bc8: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x340bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x340bcc: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x340bccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x340bd0: 0x8e62c6bc  lw          $v0, -0x3944($s3)
    ctx->pc = 0x340bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340bd4: 0x2529d8d8  addiu       $t1, $t1, -0x2728
    ctx->pc = 0x340bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957272));
    // 0x340bd8: 0xc5e10084  lwc1        $f1, 0x84($t7)
    ctx->pc = 0x340bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340bdc: 0x254aded8  addiu       $t2, $t2, -0x2128
    ctx->pc = 0x340bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958808));
    // 0x340be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340be4: 0xc5e200c8  lwc1        $f2, 0xC8($t7)
    ctx->pc = 0x340be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340be8: 0x70541000  madd        $v0, $v0, $s4
    ctx->pc = 0x340be8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340bec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x340becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bf0: 0x1200013  mtlo        $t1
    ctx->pc = 0x340bf0u;
    ctx->lo = GPR_U64(ctx, 9);
    // 0x340bf4: 0x461c0840  add.s       $f1, $f1, $f28
    ctx->pc = 0x340bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x340bf8: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x340bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x340bfc: 0xc5e00088  lwc1        $f0, 0x88($t7)
    ctx->pc = 0x340bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340c00: 0x95a8c6bc  lhu         $t0, -0x3944($t5)
    ctx->pc = 0x340c00u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294952636)));
    // 0x340c04: 0x70942000  madd        $a0, $a0, $s4
    ctx->pc = 0x340c04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x340c08: 0xc5e30080  lwc1        $f3, 0x80($t7)
    ctx->pc = 0x340c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340c0c: 0x2529d8d8  addiu       $t1, $t1, -0x2728
    ctx->pc = 0x340c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957272));
    // 0x340c10: 0xa0ac000b  sb          $t4, 0xB($a1)
    ctx->pc = 0x340c10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x340c14: 0x1200013  mtlo        $t1
    ctx->pc = 0x340c14u;
    ctx->lo = GPR_U64(ctx, 9);
    // 0x340c18: 0xa0a70009  sb          $a3, 0x9($a1)
    ctx->pc = 0x340c18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x340c1c: 0x70741800  madd        $v1, $v1, $s4
    ctx->pc = 0x340c1cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340c20: 0xa0a6000a  sb          $a2, 0xA($a1)
    ctx->pc = 0x340c20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x340c24: 0x4602c080  add.s       $f2, $f24, $f2
    ctx->pc = 0x340c24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x340c28: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x340c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x340c2c: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x340c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x340c30: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x340c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x340c34: 0x8dc2c6b8  lw          $v0, -0x3948($t6)
    ctx->pc = 0x340c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294952632)));
    // 0x340c38: 0xc5e000cc  lwc1        $f0, 0xCC($t7)
    ctx->pc = 0x340c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340c3c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x340c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x340c40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x340c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x340c44: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x340c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x340c48: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x340c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x340c4c: 0x0  nop
    ctx->pc = 0x340c4cu;
    // NOP
label_340c50:
    // 0x340c50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x340c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340c54: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x340c54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x340c58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x340c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x340c5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x340c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x340c60: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x340c60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x340c64: 0x561fffa  bgez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x340C64u;
    {
        const bool branch_taken_0x340c64 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x340C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C64u;
        // 0x340c68: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c64) {
            ctx->pc = 0x340C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340c50;
        }
    }
    ctx->pc = 0x340C6Cu;
    // 0x340c6c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x340c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x340c70: 0x8e62c6bc  lw          $v0, -0x3944($s3)
    ctx->pc = 0x340c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952636)));
    // 0x340c74: 0x8c83c6b8  lw          $v1, -0x3948($a0)
    ctx->pc = 0x340c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC6B8u));
    // 0x340c78: 0x2625f250  addiu       $a1, $s1, -0xDB0
    ctx->pc = 0x340c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963792));
    // 0x340c7c: 0x8ca401cc  lw          $a0, 0x1CC($a1)
    ctx->pc = 0x340c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 460)));
    // 0x340c80: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x340c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x340c84: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x340c88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x340c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x340c8c: 0xaca3c6b8  sw          $v1, -0x3948($a1)
    ctx->pc = 0x340c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FC6B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC6B8u, _value); } while (0);
    // 0x340c90: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x340C90u;
    SET_GPR_U32(ctx, 31, 0x340C98u);
    ctx->pc = 0x340C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C90u;
    // 0x340c94: 0xae62c6bc  sw          $v0, -0x3944($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x340C90u, 0x340C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C98u;
label_340c98:
    // 0x340c98: 0xc076100  jal         func_1D8400
    ctx->pc = 0x340C98u;
    SET_GPR_U32(ctx, 31, 0x340CA0u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x340C98u, 0x340CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340CA0u;
label_340ca0:
    // 0x340ca0: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x340ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x340ca4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x340CA4u;
    {
        const bool branch_taken_0x340ca4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x340CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CA4u;
        // 0x340ca8: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ca4) {
            ctx->pc = 0x340CC0u;
            goto label_340cc0;
        }
    }
    ctx->pc = 0x340CACu;
    // 0x340cac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x340cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x340cb0: 0x0  nop
    ctx->pc = 0x340cb0u;
    // NOP
    // 0x340cb4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x340cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x340cb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x340CB8u;
    {
        const bool branch_taken_0x340cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CB8u;
        // 0x340cbc: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cb8) {
            ctx->pc = 0x340CE0u;
            goto label_340ce0;
        }
    }
    ctx->pc = 0x340CC0u;
label_340cc0:
    // 0x340cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x340cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x340cc4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x340cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x340cc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x340cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x340cd0: 0x0  nop
    ctx->pc = 0x340cd0u;
    // NOP
    // 0x340cd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x340cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x340cd8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x340cd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x340cdc: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x340cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_340ce0:
    // 0x340ce0: 0x24846ff0  addiu       $a0, $a0, 0x6FF0
    ctx->pc = 0x340ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28656));
    // 0x340ce4: 0x3c013c34  lui         $at, 0x3C34
    ctx->pc = 0x340ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15412 << 16));
    // 0x340ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340cec: 0x800013  mtlo        $a0
    ctx->pc = 0x340cecu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x340cf0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x340cf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340cf4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x340cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x340cf8: 0x70821800  madd        $v1, $a0, $v0
    ctx->pc = 0x340cf8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340cfc: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x340cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x340d00: 0x184001d3  blez        $v0, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x340D00u;
    {
        const bool branch_taken_0x340d00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x340D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D00u;
        // 0x340d04: 0x46006782  mul.s       $f30, $f12, $f0 (Delay Slot)
        ctx->f[30] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d00) {
            ctx->pc = 0x341450u;
            goto label_341450;
        }
    }
    ctx->pc = 0x340D08u;
    // 0x340d08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x340d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340d0c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x340d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x340d10: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x340d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x340d14: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x340d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x340d18: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x340d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x340d1c: 0x8fa70154  lw          $a3, 0x154($sp)
    ctx->pc = 0x340d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_340d20:
    // 0x340d20: 0x27c80001  addiu       $t0, $fp, 0x1
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x340d24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x340d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d28: 0x8ce200d4  lw          $v0, 0xD4($a3)
    ctx->pc = 0x340d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x340d2c: 0x184001c2  blez        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x340D2Cu;
    {
        const bool branch_taken_0x340d2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x340D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D2Cu;
        // 0x340d30: 0xafa8015c  sw          $t0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d2c) {
            ctx->pc = 0x341438u;
            goto label_341438;
        }
    }
    ctx->pc = 0x340D34u;
    // 0x340d34: 0x8fa90120  lw          $t1, 0x120($sp)
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x340d38: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x340d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x340d3c: 0x449ec800  mtc1        $fp, $f25
    ctx->pc = 0x340d3cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x340d40: 0x0  nop
    ctx->pc = 0x340d40u;
    // NOP
    // 0x340d44: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x340d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x340d48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x340d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x340d4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x340d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x340d50: 0x122b818  mult        $s7, $t1, $v0
    ctx->pc = 0x340d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x340d54: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x340d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x340d58: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x340d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x340d5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x340d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x340d60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x340d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x340d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340d68: 0x254a6ff0  addiu       $t2, $t2, 0x6FF0
    ctx->pc = 0x340d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28656));
    // 0x340d6c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x340d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x340d70: 0x25420030  addiu       $v0, $t2, 0x30
    ctx->pc = 0x340d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x340d74: 0x2ea9021  addu        $s2, $s7, $t2
    ctx->pc = 0x340d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x340d78: 0x2e2b021  addu        $s6, $s7, $v0
    ctx->pc = 0x340d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x340d7c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x340d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x340d80: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x340d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x340d84: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x340d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x340d88: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x340d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x340d8c: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x340d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x340d90: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x340d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x340d94: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x340d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x340d98: 0x4616cf40  add.s       $f29, $f25, $f22
    ctx->pc = 0x340d98u;
    ctx->f[29] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
    // 0x340d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x340d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x340da0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x340da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x340da4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x340da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x340da8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x340da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x340dac: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x340dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x340db0: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x340db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
    // 0x340db4: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x340db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x340db8: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x340db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x340dbc: 0xafa7013c  sw          $a3, 0x13C($sp)
    ctx->pc = 0x340dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 7));
    // 0x340dc0: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x340dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x340dc4: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x340dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
    // 0x340dc8: 0xafaa0148  sw          $t2, 0x148($sp)
    ctx->pc = 0x340dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 10));
    // 0x340dcc: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x340dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_340dd0:
    // 0x340dd0: 0x4495b800  mtc1        $s5, $f23
    ctx->pc = 0x340dd0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x340dd4: 0x0  nop
    ctx->pc = 0x340dd4u;
    // NOP
    // 0x340dd8: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x340dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x340ddc: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x340ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x340de0: 0xc64200d0  lwc1        $f2, 0xD0($s2)
    ctx->pc = 0x340de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340de4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x340de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x340de8: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x340de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x340dec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x340decu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340df0: 0x0  nop
    ctx->pc = 0x340df0u;
    // NOP
    // 0x340df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x340df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x340df8: 0x24636ff0  addiu       $v1, $v1, 0x6FF0
    ctx->pc = 0x340df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28656));
    // 0x340dfc: 0x4616b900  add.s       $f4, $f23, $f22
    ctx->pc = 0x340dfcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x340e00: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x340e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x340e04: 0x0  nop
    ctx->pc = 0x340e04u;
    // NOP
    // 0x340e08: 0x0  nop
    ctx->pc = 0x340e08u;
    // NOP
    // 0x340e0c: 0x4602e883  div.s       $f2, $f29, $f2
    ctx->pc = 0x340e0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[29], ctx->f[2]); }
    // 0x340e10: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x340e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x340e14: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x340e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x340e18: 0x0  nop
    ctx->pc = 0x340e18u;
    // NOP
    // 0x340e1c: 0x0  nop
    ctx->pc = 0x340e1cu;
    // NOP
    // 0x340e20: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x340e20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x340e24: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x340e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x340e28: 0xc4490004  lwc1        $f9, 0x4($v0)
    ctx->pc = 0x340e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x340e2c: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x340e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x340e30: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x340e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x340e34: 0x4602d001  sub.s       $f0, $f26, $f2
    ctx->pc = 0x340e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
    // 0x340e38: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x340e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340e3c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x340e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x340e40: 0x4604d041  sub.s       $f1, $f26, $f4
    ctx->pc = 0x340e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[4]);
    // 0x340e44: 0xc64a0008  lwc1        $f10, 0x8($s2)
    ctx->pc = 0x340e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x340e48: 0x460412c2  mul.s       $f11, $f2, $f4
    ctx->pc = 0x340e48u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x340e4c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x340e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x340e50: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x340e50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x340e54: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x340e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340e58: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x340e58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x340e5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340e60: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x340e60u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x340e64: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x340e64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x340e68: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x340e68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x340e6c: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x340e6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x340e70: 0xe7a7006c  swc1        $f7, 0x6C($sp)
    ctx->pc = 0x340e70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x340e74: 0x46081202  mul.s       $f8, $f2, $f8
    ctx->pc = 0x340e74u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x340e78: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x340e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x340e7c: 0x46091242  mul.s       $f9, $f2, $f9
    ctx->pc = 0x340e7cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x340e80: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x340e80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x340e84: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x340e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x340e88: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x340e88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x340e8c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x340e8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x340e90: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x340e90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x340e94: 0xe7a90064  swc1        $f9, 0x64($sp)
    ctx->pc = 0x340e94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x340e98: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x340e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x340e9c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x340e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x340ea0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x340ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340ea4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x340ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340ea8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x340ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340eac: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x340eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340eb0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x340eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x340eb4: 0xc7a80070  lwc1        $f8, 0x70($sp)
    ctx->pc = 0x340eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x340eb8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x340eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x340ebc: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x340ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x340ec0: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x340ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x340ec4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x340ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340ec8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x340ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340ecc: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x340eccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x340ed0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x340ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340ed4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x340ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x340ed8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x340ed8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x340edc: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x340edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x340ee0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x340ee0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x340ee4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x340ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340ee8: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x340ee8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x340eec: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x340eecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x340ef0: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x340ef0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x340ef4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x340ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x340ef8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x340ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x340efc: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x340efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x340f00: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x340f00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x340f04: 0xe7a6007c  swc1        $f6, 0x7C($sp)
    ctx->pc = 0x340f04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x340f08: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x340f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x340f0c: 0x8fa8012c  lw          $t0, 0x12C($sp)
    ctx->pc = 0x340f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x340f10: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x340f10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x340f14: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x340f14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x340f18: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x340f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340f1c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x340f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340f20: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x340f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x340f24: 0xc6c50004  lwc1        $f5, 0x4($s6)
    ctx->pc = 0x340f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x340f28: 0xc6c60008  lwc1        $f6, 0x8($s6)
    ctx->pc = 0x340f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x340f2c: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x340f2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x340f30: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x340f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340f34: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x340f34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x340f38: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x340f38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x340f3c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x340f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340f40: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x340f40u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x340f44: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x340f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340f48: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x340f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340f4c: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x340f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340f50: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x340f50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x340f54: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x340f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x340f58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x340f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x340f5c: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x340f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x340f60: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x340f60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x340f64: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x340f64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x340f68: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x340f68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x340f6c: 0xe7ab008c  swc1        $f11, 0x8C($sp)
    ctx->pc = 0x340f6cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x340f70: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x340f70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x340f74: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x340f74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x340f78: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x340f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x340f7c: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x340f7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x340f80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x340f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340f84: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x340f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340f88: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x340f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340f8c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x340f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340f90: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x340f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340f94: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x340f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340f98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x340f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x340f9c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x340f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x340fa0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x340fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x340fa4: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x340fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x340fa8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x340fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x340fac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x340facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340fb0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x340fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x340fb4: 0x3c61018  mult        $v0, $fp, $a2
    ctx->pc = 0x340fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340fb8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x340fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x340fbc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x340FBCu;
    {
        const bool branch_taken_0x340fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fbc) {
            ctx->pc = 0x340FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340FBCu;
            // 0x340fc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340FC4u;
            goto label_340fc4;
        }
    }
    ctx->pc = 0x340FC4u;
label_340fc4:
    // 0x340fc4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x340fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x340fc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x340fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340fd0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x340fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x340fd4: 0x24a5c430  addiu       $a1, $a1, -0x3BD0
    ctx->pc = 0x340fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951984));
    // 0x340fd8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x340fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340fdc: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x340fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x340fe0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x340fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x340fe4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x340fe4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340fe8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x340fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340fec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x340fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x340ff0: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x340ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x340ff4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x340ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x340ff8: 0x2463c3e8  addiu       $v1, $v1, -0x3C18
    ctx->pc = 0x340ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951912));
    // 0x340ffc: 0x1010  mfhi        $v0
    ctx->pc = 0x340ffcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x341000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x341000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x341004: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x341004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x341008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34100c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x34100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341010: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x341010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341014: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x341014u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x341018: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x341018u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34101c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x34101cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x341020: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x341020u;
    SET_GPR_U32(ctx, 31, 0x341028u);
    ctx->pc = 0x341024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341020u;
    // 0x341024: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x341020u, 0x341028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341028u;
label_341028:
    // 0x341028: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x341028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34102c: 0x8c91bd48  lw          $s1, -0x42B8($a0)
    ctx->pc = 0x34102cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x341030: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x341030u;
    SET_GPR_U32(ctx, 31, 0x341038u);
    ctx->pc = 0x341034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341030u;
    // 0x341034: 0x8fa40140  lw          $a0, 0x140($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x341030u, 0x341038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341038u;
label_341038:
    // 0x341038: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341038u;
    SET_GPR_U32(ctx, 31, 0x341040u);
    ctx->pc = 0x34103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341038u;
    // 0x34103c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341038u, 0x341040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341040u;
label_341040:
    // 0x341040: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341040u;
    SET_GPR_U32(ctx, 31, 0x341048u);
    ctx->pc = 0x341044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341040u;
    // 0x341044: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341040u, 0x341048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341048u;
label_341048:
    // 0x341048: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x341048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x34104c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x34104Cu;
    SET_GPR_U32(ctx, 31, 0x341054u);
    ctx->pc = 0x341050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34104Cu;
    // 0x341050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x34104Cu, 0x341054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341054u;
label_341054:
    // 0x341054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341054u;
    {
        const bool branch_taken_0x341054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341054u;
        // 0x341058: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341054) {
            ctx->pc = 0x341068u;
            goto label_341068;
        }
    }
    ctx->pc = 0x34105Cu;
    // 0x34105c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x34105Cu;
    SET_GPR_U32(ctx, 31, 0x341064u);
    ctx->pc = 0x341060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34105Cu;
    // 0x341060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x34105Cu, 0x341064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341064u;
label_341064:
    // 0x341064: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x341064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_341068:
    // 0x341068: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34106c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34106cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341070: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x341070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x341074: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x341074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341078: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x341078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34107c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x34107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x341080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341084: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x341084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341088: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x341088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x34108c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34108cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341090: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x341090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341094: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x341094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341098: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x341098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x34109c: 0x0  nop
    ctx->pc = 0x34109cu;
    // NOP
    // 0x3410a0: 0x0  nop
    ctx->pc = 0x3410a0u;
    // NOP
    // 0x3410a4: 0x4600d803  div.s       $f0, $f27, $f0
    ctx->pc = 0x3410a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[27], ctx->f[0]); }
    // 0x3410a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3410a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3410ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3410acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3410b0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3410b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3410b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3410b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3410b8: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x3410b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3410bc: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x3410bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3410c0: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x3410c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3410c4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x3410c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3410c8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3410c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3410cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3410ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3410d0: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x3410d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3410d4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x3410d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3410d8: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x3410d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3410dc: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x3410dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3410e0: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x3410e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3410e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3410e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3410e8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3410e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3410ec: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3410ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3410f0: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3410f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3410f4: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3410f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3410f8: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x3410f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3410fc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x3410fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x341100: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x341100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x341104: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x341104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x341108: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x341108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34110c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x34110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x341110: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341114: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x341114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341118: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x341118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34111c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x34111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341120: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x341120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341124: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x341124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341128: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x341128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34112c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34112cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x341130: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x341130u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x341134: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x341134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x341138: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x341138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34113c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x34113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341140: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x341140u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341144: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x341144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341148: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x341148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34114c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34114cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x341150: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x341150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341154: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x341154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341158: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x341158u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34115c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x34115cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x341160: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x341160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x341164: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x341164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x341168: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x341168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34116c: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x34116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341170: 0x0  nop
    ctx->pc = 0x341170u;
    // NOP
    // 0x341174: 0x4601d803  div.s       $f0, $f27, $f1
    ctx->pc = 0x341174u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[27], ctx->f[1]); }
    // 0x341178: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x341178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34117c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34117cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341180: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x341180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x341184: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341188: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x341188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34118c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34118cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x341190: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x341190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x341194: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341198: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x341198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34119c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x34119cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3411a0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x3411a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3411a4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x3411a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3411a8: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x3411a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3411ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3411acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3411b0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3411b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3411b4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3411b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411b8: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3411b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3411bc: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3411bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3411c0: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x3411c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3411c4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x3411c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3411c8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x3411c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3411cc: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3411ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3411d0: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x3411d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3411d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3411d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3411d8: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x3411d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3411dc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x3411dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411e0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x3411e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3411e4: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x3411e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3411e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3411e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3411ec: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3411ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3411f0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3411f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3411f4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3411f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3411f8: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x3411f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3411fc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3411fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341200: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x341200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341204: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x341204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341208: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x341208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34120c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x34120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341210: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x341210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341214: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x341214u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341218: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x341218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x34121c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x34121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341220: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x341220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341224: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x341224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341228: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x341228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x34122c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x34122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x341230: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x341230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x341234: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x341234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x341238: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x341238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34123c: 0x8faa0148  lw          $t2, 0x148($sp)
    ctx->pc = 0x34123cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x341240: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x341240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341244: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x341244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341248: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x341248u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34124c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x34124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341250: 0xc5430004  lwc1        $f3, 0x4($t2)
    ctx->pc = 0x341250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341254: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x341254u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x341258: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x341258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34125c: 0xc5430008  lwc1        $f3, 0x8($t2)
    ctx->pc = 0x34125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341260: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x341260u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341264: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x341264u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x341268: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x341268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34126c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x34126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x341270: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x341270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341274: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x341274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341278: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x341278u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34127c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x34127cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x341280: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x341280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x341284: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x341284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x341288: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x341288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34128c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34128cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x341290: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x341290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341294: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x341294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341298: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x341298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34129c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x3412a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3412a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412a4: 0x0  nop
    ctx->pc = 0x3412a4u;
    // NOP
    // 0x3412a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3412a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3412ac: 0x0  nop
    ctx->pc = 0x3412acu;
    // NOP
    // 0x3412b0: 0x4502005d  bc1fl       . + 4 + (0x5D << 2)
    ctx->pc = 0x3412B0u;
    {
        const bool branch_taken_0x3412b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3412b0) {
            ctx->pc = 0x3412B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3412B0u;
            // 0x3412b4: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341428u;
            goto label_341428;
        }
    }
    ctx->pc = 0x3412B8u;
    // 0x3412b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3412b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3412bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3412bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3412c0: 0x0  nop
    ctx->pc = 0x3412c0u;
    // NOP
    // 0x3412c4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3412c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3412c8: 0x0  nop
    ctx->pc = 0x3412c8u;
    // NOP
    // 0x3412cc: 0x45020056  bc1fl       . + 4 + (0x56 << 2)
    ctx->pc = 0x3412CCu;
    {
        const bool branch_taken_0x3412cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3412cc) {
            ctx->pc = 0x3412D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3412CCu;
            // 0x3412d0: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341428u;
            goto label_341428;
        }
    }
    ctx->pc = 0x3412D4u;
    // 0x3412d4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3412d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x3412d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3412d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412dc: 0xc65500d8  lwc1        $f21, 0xD8($s2)
    ctx->pc = 0x3412dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3412e0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3412e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3412e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3412e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3412e8: 0x0  nop
    ctx->pc = 0x3412e8u;
    // NOP
    // 0x3412ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3412ECu;
    {
        const bool branch_taken_0x3412ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3412ec) {
            ctx->pc = 0x341314u;
            goto label_341314;
        }
    }
    ctx->pc = 0x3412F4u;
    // 0x3412f4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3412f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3412f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3412f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3412fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3412fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x341300: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x341300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341304: 0x0  nop
    ctx->pc = 0x341304u;
    // NOP
    // 0x341308: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x341308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34130c: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x34130cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x341310: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x341310u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_341314:
    // 0x341314: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x341314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x341318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34131c: 0x0  nop
    ctx->pc = 0x34131cu;
    // NOP
    // 0x341320: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x341320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341324: 0x0  nop
    ctx->pc = 0x341324u;
    // NOP
    // 0x341328: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x341328u;
    {
        const bool branch_taken_0x341328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341328) {
            ctx->pc = 0x341348u;
            goto label_341348;
        }
    }
    ctx->pc = 0x341330u;
    // 0x341330: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x341334: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x341334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x341338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34133c: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x34133cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x341340: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x341340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x341344: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x341344u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_341348:
    // 0x341348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34134c: 0x0  nop
    ctx->pc = 0x34134cu;
    // NOP
    // 0x341350: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x341350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341354: 0x0  nop
    ctx->pc = 0x341354u;
    // NOP
    // 0x341358: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x341358u;
    {
        const bool branch_taken_0x341358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341358u;
        // 0x34135c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341358) {
            ctx->pc = 0x341424u;
            goto label_341424;
        }
    }
    ctx->pc = 0x341360u;
    // 0x341360: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x341360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x341364: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x341364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341368: 0x0  nop
    ctx->pc = 0x341368u;
    // NOP
    // 0x34136c: 0x0  nop
    ctx->pc = 0x34136cu;
    // NOP
    // 0x341370: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x341370u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x341374: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x341374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x341378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x341378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34137c: 0x0  nop
    ctx->pc = 0x34137cu;
    // NOP
    // 0x341380: 0x0  nop
    ctx->pc = 0x341380u;
    // NOP
    // 0x341384: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x341384u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x341388: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x341388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34138c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x341390: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x341390u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x341394: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x341394u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x341398: 0x0  nop
    ctx->pc = 0x341398u;
    // NOP
    // 0x34139c: 0x0  nop
    ctx->pc = 0x34139cu;
    // NOP
    // 0x3413a0: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x3413a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x3413a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3413a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3413a8: 0xc0da65c  jal         func_369970
    ctx->pc = 0x3413A8u;
    SET_GPR_U32(ctx, 31, 0x3413B0u);
    ctx->pc = 0x3413ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413A8u;
    // 0x3413ac: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x369970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369970u, 0x3413A8u, 0x3413B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413B0u;
label_3413b0:
    // 0x3413b0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3413b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x3413b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3413b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3413b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3413b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3413bc: 0x3c0142c9  lui         $at, 0x42C9
    ctx->pc = 0x3413bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17097 << 16));
    // 0x3413c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3413c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3413c4: 0x460ccb02  mul.s       $f12, $f25, $f12
    ctx->pc = 0x3413c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[12]);
    // 0x3413c8: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x3413c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x3413cc: 0x460cf300  add.s       $f12, $f30, $f12
    ctx->pc = 0x3413ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[30], ctx->f[12]);
    // 0x3413d0: 0xc0da658  jal         func_369960
    ctx->pc = 0x3413D0u;
    SET_GPR_U32(ctx, 31, 0x3413D8u);
    ctx->pc = 0x3413D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413D0u;
    // 0x3413d4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x3413D0u, 0x3413D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413D8u;
label_3413d8:
    // 0x3413d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3413d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3413dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3413e0: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    // 0x3413e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3413e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3413e8: 0xc48e001c  lwc1        $f14, 0x1C($a0)
    ctx->pc = 0x3413e8u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3413ec: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x3413ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x3413f0: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3413f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3413f4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3413f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3413f8: 0x2442d578  addiu       $v0, $v0, -0x2A88
    ctx->pc = 0x3413f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956408));
    // 0x3413fc: 0x2463d598  addiu       $v1, $v1, -0x2A68
    ctx->pc = 0x3413fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956440));
    // 0x341400: 0x2508d5b8  addiu       $t0, $t0, -0x2A48
    ctx->pc = 0x341400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956472));
    // 0x341404: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x341404u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x341408: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x341408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34140c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x34140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x341410: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x341410u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x341414: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x341414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x341418: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x341418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34141c: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x34141Cu;
    SET_GPR_U32(ctx, 31, 0x341424u);
    ctx->pc = 0x341420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34141Cu;
    // 0x341420: 0x8d060010  lw          $a2, 0x10($t0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x34141Cu, 0x341424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341424u;
label_341424:
    // 0x341424: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x341424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_341428:
    // 0x341428: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x34142c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x34142cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x341430: 0x1440fe67  bnez        $v0, . + 4 + (-0x199 << 2)
    ctx->pc = 0x341430u;
    {
        const bool branch_taken_0x341430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341430) {
            ctx->pc = 0x340DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340dd0;
        }
    }
    ctx->pc = 0x341438u;
label_341438:
    // 0x341438: 0x8fa90154  lw          $t1, 0x154($sp)
    ctx->pc = 0x341438u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x34143c: 0x8fbe015c  lw          $fp, 0x15C($sp)
    ctx->pc = 0x34143cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x341440: 0x8d2200d0  lw          $v0, 0xD0($t1)
    ctx->pc = 0x341440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x341444: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x341448: 0x1440fe35  bnez        $v0, . + 4 + (-0x1CB << 2)
    ctx->pc = 0x341448u;
    {
        const bool branch_taken_0x341448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341448u;
        // 0x34144c: 0x8fa70154  lw          $a3, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341448) {
            ctx->pc = 0x340D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340d20;
        }
    }
    ctx->pc = 0x341450u;
label_341450:
    // 0x341450: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x341450u;
    SET_GPR_U32(ctx, 31, 0x341458u);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x341450u, 0x341458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341458u;
label_341458:
    // 0x341458: 0x3c01454c  lui         $at, 0x454C
    ctx->pc = 0x341458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17740 << 16));
    // 0x34145c: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x34145cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x341460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341464: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x341464u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x341468: 0x2542ca60  addiu       $v0, $t2, -0x35A0
    ctx->pc = 0x341468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953568));
    // 0x34146c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x34146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA6Cu, _value); } while (0); }
label_341470:
    // 0x341470: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x341470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x341474: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x341474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x341478: 0x8c62c350  lw          $v0, -0x3CB0($v1)
    ctx->pc = 0x341478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC350u));
    // 0x34147c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x34147cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x341480: 0x1440fc0b  bnez        $v0, . + 4 + (-0x3F5 << 2)
    ctx->pc = 0x341480u;
    {
        const bool branch_taken_0x341480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341480u;
        // 0x341484: 0xafa40120  sw          $a0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341480) {
            ctx->pc = 0x3404B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3404b0;
        }
    }
    ctx->pc = 0x341488u;
label_341488:
    // 0x341488: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x341488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34148c: 0x8ca2c6b8  lw          $v0, -0x3948($a1)
    ctx->pc = 0x34148cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC6B8u));
    // 0x341490: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341490u;
    {
        const bool branch_taken_0x341490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341490u;
        // 0x341494: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341490) {
            ctx->pc = 0x3414A0u;
            goto label_3414a0;
        }
    }
    ctx->pc = 0x341498u;
    // 0x341498: 0xc0d3ac6  jal         func_34EB18
    ctx->pc = 0x341498u;
    SET_GPR_U32(ctx, 31, 0x3414A0u);
    ctx->pc = 0x34149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341498u;
    // 0x34149c: 0x8c44f42c  lw          $a0, -0xBD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EB18u, 0x341498u, 0x3414A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3414A0u;
label_3414a0:
    // 0x3414a0: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x3414A0u;
    SET_GPR_U32(ctx, 31, 0x3414A8u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x3414A0u, 0x3414A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3414A8u;
label_3414a8:
    // 0x3414a8: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x3414A8u;
    SET_GPR_U32(ctx, 31, 0x3414B0u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x3414A8u, 0x3414B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3414B0u;
label_3414b0:
    // 0x3414b0: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x3414b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3414b4: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x3414b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x3414b8: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x3414b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3414bc: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x3414bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x3414c0: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x3414c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3414c4: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x3414c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x3414c8: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x3414c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3414cc: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x3414ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3414d0: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x3414d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3414d4: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x3414d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x3414d8: 0xc7be0200  lwc1        $f30, 0x200($sp)
    ctx->pc = 0x3414d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x3414dc: 0xc7bd01f8  lwc1        $f29, 0x1F8($sp)
    ctx->pc = 0x3414dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x3414e0: 0xc7bc01f0  lwc1        $f28, 0x1F0($sp)
    ctx->pc = 0x3414e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x3414e4: 0xc7bb01e8  lwc1        $f27, 0x1E8($sp)
    ctx->pc = 0x3414e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3414e8: 0xc7ba01e0  lwc1        $f26, 0x1E0($sp)
    ctx->pc = 0x3414e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3414ec: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x3414ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3414f0: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x3414f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3414f4: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x3414f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3414f8: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x3414f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3414fc: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x3414fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x341500: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x341500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x341504: 0x3e00008  jr          $ra
    ctx->pc = 0x341504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341504u;
        // 0x341508: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34150Cu;
    // 0x34150c: 0x0  nop
    ctx->pc = 0x34150cu;
    // NOP
    ctx->pc = 0x341510u;
}
