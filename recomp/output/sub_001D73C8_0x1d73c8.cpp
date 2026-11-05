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

// Function: sub_001D73C8
// Address: 0x1d73c8 - 0x1d74b0
void sub_001D73C8_0x1d73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D73C8_0x1d73c8");
#endif

    switch (ctx->pc) {
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7458u: goto label_1d7458;
        case 0x1d745cu: goto label_1d745c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7470u: goto label_1d7470;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d747cu: goto label_1d747c;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7488u: goto label_1d7488;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        default: break;
    }

    ctx->pc = 0x1d73c8u;

label_1d73c8:
    // 0x1d73c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d73cc:
    // 0x1d73cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d73ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d73d0:
    // 0x1d73d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d73d4:
    // 0x1d73d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1d73d8:
    // 0x1d73d8: 0xc0d0566  jal         func_341598
label_1d73dc:
    if (ctx->pc == 0x1D73DCu) {
        ctx->pc = 0x1D73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73D8u;
        // 0x1d73dc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73E0u;
        goto label_1d73e0;
    }
    ctx->pc = 0x1D73D8u;
    SET_GPR_U32(ctx, 31, 0x1D73E0u);
    ctx->pc = 0x1D73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73D8u;
    // 0x1d73dc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341598u, 0x1D73D8u, 0x1D73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73E0u;
label_1d73e0:
    // 0x1d73e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d73e4:
    // 0x1d73e4: 0xc0ae686  jal         func_2B9A18
label_1d73e8:
    if (ctx->pc == 0x1D73E8u) {
        ctx->pc = 0x1D73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E4u;
        // 0x1d73e8: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73ECu;
        goto label_1d73ec;
    }
    ctx->pc = 0x1D73E4u;
    SET_GPR_U32(ctx, 31, 0x1D73ECu);
    ctx->pc = 0x1D73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73E4u;
    // 0x1d73e8: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x1D73E4u, 0x1D73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73ECu;
label_1d73ec:
    // 0x1d73ec: 0xc0b28aa  jal         func_2CA2A8
label_1d73f0:
    if (ctx->pc == 0x1D73F0u) {
        ctx->pc = 0x1D73F4u;
        goto label_1d73f4;
    }
    ctx->pc = 0x1D73ECu;
    SET_GPR_U32(ctx, 31, 0x1D73F4u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x1D73ECu, 0x1D73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73F4u;
label_1d73f4:
    // 0x1d73f4: 0xc0b2a4a  jal         func_2CA928
label_1d73f8:
    if (ctx->pc == 0x1D73F8u) {
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73FCu;
        goto label_1d73fc;
    }
    ctx->pc = 0x1D73F4u;
    SET_GPR_U32(ctx, 31, 0x1D73FCu);
    ctx->pc = 0x1D73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73F4u;
    // 0x1d73f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA928u, 0x1D73F4u, 0x1D73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73FCu;
label_1d73fc:
    // 0x1d73fc: 0xc0760da  jal         func_1D8368
label_1d7400:
    if (ctx->pc == 0x1D7400u) {
        ctx->pc = 0x1D7404u;
        goto label_1d7404;
    }
    ctx->pc = 0x1D73FCu;
    SET_GPR_U32(ctx, 31, 0x1D7404u);
    ctx->pc = 0x1D8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8368u, 0x1D73FCu, 0x1D7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7404u;
label_1d7404:
    // 0x1d7404: 0xc0760ea  jal         func_1D83A8
label_1d7408:
    if (ctx->pc == 0x1D7408u) {
        ctx->pc = 0x1D740Cu;
        goto label_1d740c;
    }
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 31, 0x1D740Cu);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x1D7404u, 0x1D740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0xc0d2f1a  jal         func_34BC68
label_1d7410:
    if (ctx->pc == 0x1D7410u) {
        ctx->pc = 0x1D7414u;
        goto label_1d7414;
    }
    ctx->pc = 0x1D740Cu;
    SET_GPR_U32(ctx, 31, 0x1D7414u);
    ctx->pc = 0x34BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC68u, 0x1D740Cu, 0x1D7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7414u;
label_1d7414:
    // 0x1d7414: 0xc0c5a7c  jal         func_3169F0
label_1d7418:
    if (ctx->pc == 0x1D7418u) {
        ctx->pc = 0x1D741Cu;
        goto label_1d741c;
    }
    ctx->pc = 0x1D7414u;
    SET_GPR_U32(ctx, 31, 0x1D741Cu);
    ctx->pc = 0x3169F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169F0u, 0x1D7414u, 0x1D741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D741Cu;
label_1d741c:
    // 0x1d741c: 0xc0c54b2  jal         func_3152C8
label_1d7420:
    if (ctx->pc == 0x1D7420u) {
        ctx->pc = 0x1D7424u;
        goto label_1d7424;
    }
    ctx->pc = 0x1D741Cu;
    SET_GPR_U32(ctx, 31, 0x1D7424u);
    ctx->pc = 0x3152C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3152C8u, 0x1D741Cu, 0x1D7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7424u;
label_1d7424:
    // 0x1d7424: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d7428:
    // 0x1d7428: 0xc07f494  jal         func_1FD250
label_1d742c:
    if (ctx->pc == 0x1D742Cu) {
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7430u;
        goto label_1d7430;
    }
    ctx->pc = 0x1D7428u;
    SET_GPR_U32(ctx, 31, 0x1D7430u);
    ctx->pc = 0x1D742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7428u;
    // 0x1d742c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD250u, 0x1D7428u, 0x1D7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0xc0a1b2c  jal         func_286CB0
label_1d7434:
    if (ctx->pc == 0x1D7434u) {
        ctx->pc = 0x1D7438u;
        goto label_1d7438;
    }
    ctx->pc = 0x1D7430u;
    SET_GPR_U32(ctx, 31, 0x1D7438u);
    ctx->pc = 0x286CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CB0u, 0x1D7430u, 0x1D7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7438u;
label_1d7438:
    // 0x1d7438: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x1d7438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d743c:
    // 0x1d743c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d7440:
    // 0x1d7440: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d7444:
    // 0x1d7444: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d7448:
    // 0x1d7448: 0x40f809  jalr        $v0
label_1d744c:
    if (ctx->pc == 0x1D744Cu) {
        ctx->pc = 0x1D7450u;
        goto label_1d7450;
    }
    ctx->pc = 0x1D7448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7450u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7448u, 0x1D7450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7450u;
label_1d7450:
    // 0x1d7450: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d7454:
    // 0x1d7454: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d7458:
    // 0x1d7458: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d7458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d745c:
    // 0x1d745c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1d7460:
    // 0x1d7460: 0x40f809  jalr        $v0
label_1d7464:
    if (ctx->pc == 0x1D7464u) {
        ctx->pc = 0x1D7468u;
        goto label_1d7468;
    }
    ctx->pc = 0x1D7460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7460u, 0x1D7468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0xc075e5e  jal         func_1D7978
label_1d746c:
    if (ctx->pc == 0x1D746Cu) {
        ctx->pc = 0x1D7470u;
        goto label_1d7470;
    }
    ctx->pc = 0x1D7468u;
    SET_GPR_U32(ctx, 31, 0x1D7470u);
    ctx->pc = 0x1D7978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7978u, 0x1D7468u, 0x1D7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7470u;
label_1d7470:
    // 0x1d7470: 0xc0971a4  jal         func_25C690
label_1d7474:
    if (ctx->pc == 0x1D7474u) {
        ctx->pc = 0x1D7478u;
        goto label_1d7478;
    }
    ctx->pc = 0x1D7470u;
    SET_GPR_U32(ctx, 31, 0x1D7478u);
    ctx->pc = 0x25C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C690u, 0x1D7470u, 0x1D7478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7478u;
label_1d7478:
    // 0x1d7478: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_1d747c:
    // 0x1d747c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d747cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7480:
    // 0x1d7480: 0xc0b475e  jal         func_2D1D78
label_1d7484:
    if (ctx->pc == 0x1D7484u) {
        ctx->pc = 0x1D7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7480u;
        // 0x1d7484: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7488u;
        goto label_1d7488;
    }
    ctx->pc = 0x1D7480u;
    SET_GPR_U32(ctx, 31, 0x1D7488u);
    ctx->pc = 0x1D7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7480u;
    // 0x1d7484: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D78u, 0x1D7480u, 0x1D7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7488u;
label_1d7488:
    // 0x1d7488: 0xc0b2a78  jal         func_2CA9E0
label_1d748c:
    if (ctx->pc == 0x1D748Cu) {
        ctx->pc = 0x1D7490u;
        goto label_1d7490;
    }
    ctx->pc = 0x1D7488u;
    SET_GPR_U32(ctx, 31, 0x1D7490u);
    ctx->pc = 0x2CA9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9E0u, 0x1D7488u, 0x1D7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7490u;
label_1d7490:
    // 0x1d7490: 0xc0b28aa  jal         func_2CA2A8
label_1d7494:
    if (ctx->pc == 0x1D7494u) {
        ctx->pc = 0x1D7498u;
        goto label_1d7498;
    }
    ctx->pc = 0x1D7490u;
    SET_GPR_U32(ctx, 31, 0x1D7498u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x1D7490u, 0x1D7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7498u;
label_1d7498:
    // 0x1d7498: 0xc0b2a5e  jal         func_2CA978
label_1d749c:
    if (ctx->pc == 0x1D749Cu) {
        ctx->pc = 0x1D749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7498u;
        // 0x1d749c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74A0u;
        goto label_1d74a0;
    }
    ctx->pc = 0x1D7498u;
    SET_GPR_U32(ctx, 31, 0x1D74A0u);
    ctx->pc = 0x1D749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7498u;
    // 0x1d749c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA978u, 0x1D7498u, 0x1D74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74A0u;
label_1d74a0:
    // 0x1d74a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d74a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d74a4:
    // 0x1d74a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d74a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d74a8:
    // 0x1d74a8: 0x3e00008  jr          $ra
label_1d74ac:
    if (ctx->pc == 0x1D74ACu) {
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A8u;
        // 0x1d74ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74B0u;
        goto label_fallthrough_0x1d74a8;
    }
    ctx->pc = 0x1D74A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A8u;
        // 0x1d74ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D74A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d74a8:
    ctx->pc = 0x1D74B0u;
}
