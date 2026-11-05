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

// Function: sub_00187408
// Address: 0x187408 - 0x187580
void sub_00187408_0x187408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187408_0x187408");
#endif

    switch (ctx->pc) {
        case 0x187408u: goto label_187408;
        case 0x18740cu: goto label_18740c;
        case 0x187410u: goto label_187410;
        case 0x187414u: goto label_187414;
        case 0x187418u: goto label_187418;
        case 0x18741cu: goto label_18741c;
        case 0x187420u: goto label_187420;
        case 0x187424u: goto label_187424;
        case 0x187428u: goto label_187428;
        case 0x18742cu: goto label_18742c;
        case 0x187430u: goto label_187430;
        case 0x187434u: goto label_187434;
        case 0x187438u: goto label_187438;
        case 0x18743cu: goto label_18743c;
        case 0x187440u: goto label_187440;
        case 0x187444u: goto label_187444;
        case 0x187448u: goto label_187448;
        case 0x18744cu: goto label_18744c;
        case 0x187450u: goto label_187450;
        case 0x187454u: goto label_187454;
        case 0x187458u: goto label_187458;
        case 0x18745cu: goto label_18745c;
        case 0x187460u: goto label_187460;
        case 0x187464u: goto label_187464;
        case 0x187468u: goto label_187468;
        case 0x18746cu: goto label_18746c;
        case 0x187470u: goto label_187470;
        case 0x187474u: goto label_187474;
        case 0x187478u: goto label_187478;
        case 0x18747cu: goto label_18747c;
        case 0x187480u: goto label_187480;
        case 0x187484u: goto label_187484;
        case 0x187488u: goto label_187488;
        case 0x18748cu: goto label_18748c;
        case 0x187490u: goto label_187490;
        case 0x187494u: goto label_187494;
        case 0x187498u: goto label_187498;
        case 0x18749cu: goto label_18749c;
        case 0x1874a0u: goto label_1874a0;
        case 0x1874a4u: goto label_1874a4;
        case 0x1874a8u: goto label_1874a8;
        case 0x1874acu: goto label_1874ac;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874b4u: goto label_1874b4;
        case 0x1874b8u: goto label_1874b8;
        case 0x1874bcu: goto label_1874bc;
        case 0x1874c0u: goto label_1874c0;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874c8u: goto label_1874c8;
        case 0x1874ccu: goto label_1874cc;
        case 0x1874d0u: goto label_1874d0;
        case 0x1874d4u: goto label_1874d4;
        case 0x1874d8u: goto label_1874d8;
        case 0x1874dcu: goto label_1874dc;
        case 0x1874e0u: goto label_1874e0;
        case 0x1874e4u: goto label_1874e4;
        case 0x1874e8u: goto label_1874e8;
        case 0x1874ecu: goto label_1874ec;
        case 0x1874f0u: goto label_1874f0;
        case 0x1874f4u: goto label_1874f4;
        case 0x1874f8u: goto label_1874f8;
        case 0x1874fcu: goto label_1874fc;
        case 0x187500u: goto label_187500;
        case 0x187504u: goto label_187504;
        case 0x187508u: goto label_187508;
        case 0x18750cu: goto label_18750c;
        case 0x187510u: goto label_187510;
        case 0x187514u: goto label_187514;
        case 0x187518u: goto label_187518;
        case 0x18751cu: goto label_18751c;
        case 0x187520u: goto label_187520;
        case 0x187524u: goto label_187524;
        case 0x187528u: goto label_187528;
        case 0x18752cu: goto label_18752c;
        case 0x187530u: goto label_187530;
        case 0x187534u: goto label_187534;
        case 0x187538u: goto label_187538;
        case 0x18753cu: goto label_18753c;
        case 0x187540u: goto label_187540;
        case 0x187544u: goto label_187544;
        case 0x187548u: goto label_187548;
        case 0x18754cu: goto label_18754c;
        case 0x187550u: goto label_187550;
        case 0x187554u: goto label_187554;
        case 0x187558u: goto label_187558;
        case 0x18755cu: goto label_18755c;
        case 0x187560u: goto label_187560;
        case 0x187564u: goto label_187564;
        case 0x187568u: goto label_187568;
        case 0x18756cu: goto label_18756c;
        case 0x187570u: goto label_187570;
        case 0x187574u: goto label_187574;
        case 0x187578u: goto label_187578;
        case 0x18757cu: goto label_18757c;
        default: break;
    }

    ctx->pc = 0x187408u;

label_187408:
    // 0x187408: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18740c:
    // 0x18740c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x18740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_187410:
    // 0x187410: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x187410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_187414:
    // 0x187414: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x187414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187418:
    // 0x187418: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x187418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_18741c:
    // 0x18741c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x18741cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187420:
    // 0x187420: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x187420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_187424:
    // 0x187424: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x187424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187428:
    // 0x187428: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18742c:
    // 0x18742c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_187430:
    // 0x187430: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x187430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_187434:
    // 0x187434: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x187434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_187438:
    // 0x187438: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x187438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_18743c:
    // 0x18743c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x18743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_187440:
    // 0x187440: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x187440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_187444:
    // 0x187444: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x187444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_187448:
    // 0x187448: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_18744c:
    // 0x18744c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187450:
    if (ctx->pc == 0x187450u) {
        ctx->pc = 0x187450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18744Cu;
        // 0x187450: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187454u;
        goto label_187454;
    }
    ctx->pc = 0x18744Cu;
    {
        const bool branch_taken_0x18744c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18744Cu;
        // 0x187450: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18744c) {
            ctx->pc = 0x187464u;
            goto label_187464;
        }
    }
    ctx->pc = 0x187454u;
label_187454:
    // 0x187454: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187458:
    // 0x187458: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18745c:
    // 0x18745c: 0x40f809  jalr        $v0
label_187460:
    if (ctx->pc == 0x187460u) {
        ctx->pc = 0x187464u;
        goto label_187464;
    }
    ctx->pc = 0x18745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18745Cu, 0x187464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187464u;
label_187464:
    // 0x187464: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_187468:
    // 0x187468: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_18746c:
    if (ctx->pc == 0x18746Cu) {
        ctx->pc = 0x18746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187468u;
        // 0x18746c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187470u;
        goto label_187470;
    }
    ctx->pc = 0x187468u;
    {
        const bool branch_taken_0x187468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187468u;
        // 0x18746c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187468) {
            ctx->pc = 0x187528u;
            goto label_187528;
        }
    }
    ctx->pc = 0x187470u;
label_187470:
    // 0x187470: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_187474:
    // 0x187474: 0xc0f5240  jal         func_3D4900
label_187478:
    if (ctx->pc == 0x187478u) {
        ctx->pc = 0x187478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187474u;
        // 0x187478: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18747Cu;
        goto label_18747c;
    }
    ctx->pc = 0x187474u;
    SET_GPR_U32(ctx, 31, 0x18747Cu);
    ctx->pc = 0x187478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187474u;
    // 0x187478: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187474u, 0x18747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18747Cu;
label_18747c:
    // 0x18747c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18747cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187480:
    // 0x187480: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_187484:
    // 0x187484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187488:
    // 0x187488: 0xc061a32  jal         func_1868C8
label_18748c:
    if (ctx->pc == 0x18748Cu) {
        ctx->pc = 0x18748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187488u;
        // 0x18748c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187490u;
        goto label_187490;
    }
    ctx->pc = 0x187488u;
    SET_GPR_U32(ctx, 31, 0x187490u);
    ctx->pc = 0x18748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187488u;
    // 0x18748c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187488u, 0x187490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187490u;
label_187490:
    // 0x187490: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_187494:
    // 0x187494: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x187494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_187498:
    // 0x187498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18749c:
    // 0x18749c: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1874a0:
    // 0x1874a0: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1874a4:
    // 0x1874a4: 0xc0f6a96  jal         func_3DAA58
label_1874a8:
    if (ctx->pc == 0x1874A8u) {
        ctx->pc = 0x1874A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874A4u;
        // 0x1874a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874ACu;
        goto label_1874ac;
    }
    ctx->pc = 0x1874A4u;
    SET_GPR_U32(ctx, 31, 0x1874ACu);
    ctx->pc = 0x1874A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874A4u;
    // 0x1874a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1874A4u, 0x1874ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874ACu;
label_1874ac:
    // 0x1874ac: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_1874b0:
    // 0x1874b0: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1874b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
label_1874b4:
    // 0x1874b4: 0x26520f90  addiu       $s2, $s2, 0xF90
    ctx->pc = 0x1874b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
label_1874b8:
    // 0x1874b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1874b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1874bc:
    // 0x1874bc: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1874bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
label_1874c0:
    // 0x1874c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1874c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1874c4:
    // 0x1874c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1874c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1874c8:
    // 0x1874c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1874c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1874cc:
    // 0x1874cc: 0xc0f6a96  jal         func_3DAA58
label_1874d0:
    if (ctx->pc == 0x1874D0u) {
        ctx->pc = 0x1874D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874CCu;
        // 0x1874d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874D4u;
        goto label_1874d4;
    }
    ctx->pc = 0x1874CCu;
    SET_GPR_U32(ctx, 31, 0x1874D4u);
    ctx->pc = 0x1874D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874CCu;
    // 0x1874d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1874CCu, 0x1874D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874D4u;
label_1874d4:
    // 0x1874d4: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x1874d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
label_1874d8:
    // 0x1874d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1874d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1874dc:
    // 0x1874dc: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x1874dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
label_1874e0:
    // 0x1874e0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1874e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1874e4:
    // 0x1874e4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1874e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1874e8:
    // 0x1874e8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1874e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1874ec:
    // 0x1874ec: 0xc0f6a96  jal         func_3DAA58
label_1874f0:
    if (ctx->pc == 0x1874F0u) {
        ctx->pc = 0x1874F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874ECu;
        // 0x1874f0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874F4u;
        goto label_1874f4;
    }
    ctx->pc = 0x1874ECu;
    SET_GPR_U32(ctx, 31, 0x1874F4u);
    ctx->pc = 0x1874F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874ECu;
    // 0x1874f0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1874ECu, 0x1874F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874F4u;
label_1874f4:
    // 0x1874f4: 0xae920018  sw          $s2, 0x18($s4)
    ctx->pc = 0x1874f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 18));
label_1874f8:
    // 0x1874f8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1874f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1874fc:
    // 0x1874fc: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x1874fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_187500:
    // 0x187500: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x187500u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_187504:
    // 0x187504: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x187504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_187508:
    // 0x187508: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x187508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_18750c:
    // 0x18750c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x18750cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_187510:
    // 0x187510: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_187514:
    // 0x187514: 0xaed00020  sw          $s0, 0x20($s6)
    ctx->pc = 0x187514u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 16));
label_187518:
    // 0x187518: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x187518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_18751c:
    // 0x18751c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x18751cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_187520:
    // 0x187520: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_187524:
    // 0x187524: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x187524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_187528:
    // 0x187528: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18752c:
    // 0x18752c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x18752cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_187530:
    // 0x187530: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x187530u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_187534:
    // 0x187534: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x187534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_187538:
    // 0x187538: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18753c:
    // 0x18753c: 0x8c680028  lw          $t0, 0x28($v1)
    ctx->pc = 0x18753cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_187540:
    // 0x187540: 0x100f809  jalr        $t0
label_187544:
    if (ctx->pc == 0x187544u) {
        ctx->pc = 0x187544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187540u;
        // 0x187544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187548u;
        goto label_187548;
    }
    ctx->pc = 0x187540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x187548u);
        ctx->pc = 0x187544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187540u;
        // 0x187544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187540u, 0x187548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187548u;
label_187548:
    // 0x187548: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x187548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18754c:
    // 0x18754c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18754cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187550:
    // 0x187550: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x187550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187554:
    // 0x187554: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x187554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_187558:
    // 0x187558: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x187558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18755c:
    // 0x18755c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x18755cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_187560:
    // 0x187560: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x187560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_187564:
    // 0x187564: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x187564u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_187568:
    // 0x187568: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x187568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18756c:
    // 0x18756c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x18756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_187570:
    // 0x187570: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x187570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_187574:
    // 0x187574: 0x3e00008  jr          $ra
label_187578:
    if (ctx->pc == 0x187578u) {
        ctx->pc = 0x187578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187574u;
        // 0x187578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18757Cu;
        goto label_18757c;
    }
    ctx->pc = 0x187574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187574u;
        // 0x187578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18757Cu;
label_18757c:
    // 0x18757c: 0x0  nop
    ctx->pc = 0x18757cu;
    // NOP
    ctx->pc = 0x187580u;
}
