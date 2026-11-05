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

// Function: sub_00384740
// Address: 0x384740 - 0x384810
void sub_00384740_0x384740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384740_0x384740");
#endif

    switch (ctx->pc) {
        case 0x384740u: goto label_384740;
        case 0x384744u: goto label_384744;
        case 0x384748u: goto label_384748;
        case 0x38474cu: goto label_38474c;
        case 0x384750u: goto label_384750;
        case 0x384754u: goto label_384754;
        case 0x384758u: goto label_384758;
        case 0x38475cu: goto label_38475c;
        case 0x384760u: goto label_384760;
        case 0x384764u: goto label_384764;
        case 0x384768u: goto label_384768;
        case 0x38476cu: goto label_38476c;
        case 0x384770u: goto label_384770;
        case 0x384774u: goto label_384774;
        case 0x384778u: goto label_384778;
        case 0x38477cu: goto label_38477c;
        case 0x384780u: goto label_384780;
        case 0x384784u: goto label_384784;
        case 0x384788u: goto label_384788;
        case 0x38478cu: goto label_38478c;
        case 0x384790u: goto label_384790;
        case 0x384794u: goto label_384794;
        case 0x384798u: goto label_384798;
        case 0x38479cu: goto label_38479c;
        case 0x3847a0u: goto label_3847a0;
        case 0x3847a4u: goto label_3847a4;
        case 0x3847a8u: goto label_3847a8;
        case 0x3847acu: goto label_3847ac;
        case 0x3847b0u: goto label_3847b0;
        case 0x3847b4u: goto label_3847b4;
        case 0x3847b8u: goto label_3847b8;
        case 0x3847bcu: goto label_3847bc;
        case 0x3847c0u: goto label_3847c0;
        case 0x3847c4u: goto label_3847c4;
        case 0x3847c8u: goto label_3847c8;
        case 0x3847ccu: goto label_3847cc;
        case 0x3847d0u: goto label_3847d0;
        case 0x3847d4u: goto label_3847d4;
        case 0x3847d8u: goto label_3847d8;
        case 0x3847dcu: goto label_3847dc;
        case 0x3847e0u: goto label_3847e0;
        case 0x3847e4u: goto label_3847e4;
        case 0x3847e8u: goto label_3847e8;
        case 0x3847ecu: goto label_3847ec;
        case 0x3847f0u: goto label_3847f0;
        case 0x3847f4u: goto label_3847f4;
        case 0x3847f8u: goto label_3847f8;
        case 0x3847fcu: goto label_3847fc;
        case 0x384800u: goto label_384800;
        case 0x384804u: goto label_384804;
        case 0x384808u: goto label_384808;
        case 0x38480cu: goto label_38480c;
        default: break;
    }

    ctx->pc = 0x384740u;

label_384740:
    // 0x384740: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x384740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_384744:
    // 0x384744: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_384748:
    // 0x384748: 0x8c43dfe4  lw          $v1, -0x201C($v0)
    ctx->pc = 0x384748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959076)));
label_38474c:
    // 0x38474c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_384750:
    // 0x384750: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_384754:
    // 0x384754: 0x2451dfe4  addiu       $s1, $v0, -0x201C
    ctx->pc = 0x384754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959076));
label_384758:
    // 0x384758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_38475c:
    // 0x38475c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x38475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_384760:
    // 0x384760: 0x10650025  beq         $v1, $a1, . + 4 + (0x25 << 2)
label_384764:
    if (ctx->pc == 0x384764u) {
        ctx->pc = 0x384764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384760u;
        // 0x384764: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384768u;
        goto label_384768;
    }
    ctx->pc = 0x384760u;
    {
        const bool branch_taken_0x384760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x384764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384760u;
        // 0x384764: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384760) {
            ctx->pc = 0x3847F8u;
            goto label_3847f8;
        }
    }
    ctx->pc = 0x384768u;
label_384768:
    // 0x384768: 0xc0f2678  jal         func_3C99E0
label_38476c:
    if (ctx->pc == 0x38476Cu) {
        ctx->pc = 0x384770u;
        goto label_384770;
    }
    ctx->pc = 0x384768u;
    SET_GPR_U32(ctx, 31, 0x384770u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384768u, 0x384770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384770u;
label_384770:
    // 0x384770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384774:
    // 0x384774: 0xc0e13dc  jal         func_384F70
label_384778:
    if (ctx->pc == 0x384778u) {
        ctx->pc = 0x384778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384774u;
        // 0x384778: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38477Cu;
        goto label_38477c;
    }
    ctx->pc = 0x384774u;
    SET_GPR_U32(ctx, 31, 0x38477Cu);
    ctx->pc = 0x384778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384774u;
    // 0x384778: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384F70u, 0x384774u, 0x38477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38477Cu;
label_38477c:
    // 0x38477c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x38477cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_384780:
    // 0x384780: 0x2470dfd8  addiu       $s0, $v1, -0x2028
    ctx->pc = 0x384780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959064));
label_384784:
    // 0x384784: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x384784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384788:
    // 0x384788: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_38478c:
    if (ctx->pc == 0x38478Cu) {
        ctx->pc = 0x38478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384788u;
        // 0x38478c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384790u;
        goto label_384790;
    }
    ctx->pc = 0x384788u;
    {
        const bool branch_taken_0x384788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384788u;
        // 0x38478c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384788) {
            ctx->pc = 0x3847A8u;
            goto label_3847a8;
        }
    }
    ctx->pc = 0x384790u;
label_384790:
    // 0x384790: 0x8c42dfec  lw          $v0, -0x2014($v0)
    ctx->pc = 0x384790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959084)));
label_384794:
    // 0x384794: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_384798:
    if (ctx->pc == 0x384798u) {
        ctx->pc = 0x384798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384794u;
        // 0x384798: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38479Cu;
        goto label_38479c;
    }
    ctx->pc = 0x384794u;
    {
        const bool branch_taken_0x384794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384794) {
            ctx->pc = 0x384798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384794u;
            // 0x384798: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3847A8u;
            goto label_3847a8;
        }
    }
    ctx->pc = 0x38479Cu;
label_38479c:
    // 0x38479c: 0x40f809  jalr        $v0
label_3847a0:
    if (ctx->pc == 0x3847A0u) {
        ctx->pc = 0x3847A4u;
        goto label_3847a4;
    }
    ctx->pc = 0x38479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3847A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38479Cu, 0x3847A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3847A4u;
label_3847a4:
    // 0x3847a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3847a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3847a8:
    // 0x3847a8: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3847a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_3847ac:
    // 0x3847ac: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x3847acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_3847b0:
    // 0x3847b0: 0x24e760c0  addiu       $a3, $a3, 0x60C0
    ctx->pc = 0x3847b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24768));
label_3847b4:
    // 0x3847b4: 0x26106080  addiu       $s0, $s0, 0x6080
    ctx->pc = 0x3847b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24704));
label_3847b8:
    // 0x3847b8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3847b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3847bc:
    // 0x3847bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3847bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847c0:
    // 0x3847c0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3847c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3847c4:
    // 0x3847c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3847c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847c8:
    // 0x3847c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3847c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3847cc:
    // 0x3847cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3847ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3847d0:
    // 0x3847d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3847d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3847d4:
    // 0x3847d4: 0xc0f347c  jal         func_3CD1F0
label_3847d8:
    if (ctx->pc == 0x3847D8u) {
        ctx->pc = 0x3847D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847D4u;
        // 0x3847d8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847DCu;
        goto label_3847dc;
    }
    ctx->pc = 0x3847D4u;
    SET_GPR_U32(ctx, 31, 0x3847DCu);
    ctx->pc = 0x3847D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847D4u;
    // 0x3847d8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3847D4u, 0x3847DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847DCu;
label_3847dc:
    // 0x3847dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3847dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3847e0:
    // 0x3847e0: 0xc0f2670  jal         func_3C99C0
label_3847e4:
    if (ctx->pc == 0x3847E4u) {
        ctx->pc = 0x3847E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847E0u;
        // 0x3847e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847E8u;
        goto label_3847e8;
    }
    ctx->pc = 0x3847E0u;
    SET_GPR_U32(ctx, 31, 0x3847E8u);
    ctx->pc = 0x3847E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847E0u;
    // 0x3847e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3847E0u, 0x3847E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847E8u;
label_3847e8:
    // 0x3847e8: 0xc0f266c  jal         func_3C99B0
label_3847ec:
    if (ctx->pc == 0x3847ECu) {
        ctx->pc = 0x3847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847E8u;
        // 0x3847ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3847F0u;
        goto label_3847f0;
    }
    ctx->pc = 0x3847E8u;
    SET_GPR_U32(ctx, 31, 0x3847F0u);
    ctx->pc = 0x3847ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847E8u;
    // 0x3847ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3847E8u, 0x3847F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847F0u;
label_3847f0:
    // 0x3847f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3847f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3847f4:
    // 0x3847f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3847f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3847f8:
    // 0x3847f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3847f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3847fc:
    // 0x3847fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3847fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384800:
    // 0x384800: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_384804:
    // 0x384804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_384808:
    // 0x384808: 0x3e00008  jr          $ra
label_38480c:
    if (ctx->pc == 0x38480Cu) {
        ctx->pc = 0x38480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384808u;
        // 0x38480c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384810u;
        goto label_fallthrough_0x384808;
    }
    ctx->pc = 0x384808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384808u;
        // 0x38480c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x384808:
    ctx->pc = 0x384810u;
}
