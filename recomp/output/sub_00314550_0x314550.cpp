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

// Function: sub_00314550
// Address: 0x314550 - 0x3147b8
void sub_00314550_0x314550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314550_0x314550");
#endif

    switch (ctx->pc) {
        case 0x314550u: goto label_314550;
        case 0x314554u: goto label_314554;
        case 0x314558u: goto label_314558;
        case 0x31455cu: goto label_31455c;
        case 0x314560u: goto label_314560;
        case 0x314564u: goto label_314564;
        case 0x314568u: goto label_314568;
        case 0x31456cu: goto label_31456c;
        case 0x314570u: goto label_314570;
        case 0x314574u: goto label_314574;
        case 0x314578u: goto label_314578;
        case 0x31457cu: goto label_31457c;
        case 0x314580u: goto label_314580;
        case 0x314584u: goto label_314584;
        case 0x314588u: goto label_314588;
        case 0x31458cu: goto label_31458c;
        case 0x314590u: goto label_314590;
        case 0x314594u: goto label_314594;
        case 0x314598u: goto label_314598;
        case 0x31459cu: goto label_31459c;
        case 0x3145a0u: goto label_3145a0;
        case 0x3145a4u: goto label_3145a4;
        case 0x3145a8u: goto label_3145a8;
        case 0x3145acu: goto label_3145ac;
        case 0x3145b0u: goto label_3145b0;
        case 0x3145b4u: goto label_3145b4;
        case 0x3145b8u: goto label_3145b8;
        case 0x3145bcu: goto label_3145bc;
        case 0x3145c0u: goto label_3145c0;
        case 0x3145c4u: goto label_3145c4;
        case 0x3145c8u: goto label_3145c8;
        case 0x3145ccu: goto label_3145cc;
        case 0x3145d0u: goto label_3145d0;
        case 0x3145d4u: goto label_3145d4;
        case 0x3145d8u: goto label_3145d8;
        case 0x3145dcu: goto label_3145dc;
        case 0x3145e0u: goto label_3145e0;
        case 0x3145e4u: goto label_3145e4;
        case 0x3145e8u: goto label_3145e8;
        case 0x3145ecu: goto label_3145ec;
        case 0x3145f0u: goto label_3145f0;
        case 0x3145f4u: goto label_3145f4;
        case 0x3145f8u: goto label_3145f8;
        case 0x3145fcu: goto label_3145fc;
        case 0x314600u: goto label_314600;
        case 0x314604u: goto label_314604;
        case 0x314608u: goto label_314608;
        case 0x31460cu: goto label_31460c;
        case 0x314610u: goto label_314610;
        case 0x314614u: goto label_314614;
        case 0x314618u: goto label_314618;
        case 0x31461cu: goto label_31461c;
        case 0x314620u: goto label_314620;
        case 0x314624u: goto label_314624;
        case 0x314628u: goto label_314628;
        case 0x31462cu: goto label_31462c;
        case 0x314630u: goto label_314630;
        case 0x314634u: goto label_314634;
        case 0x314638u: goto label_314638;
        case 0x31463cu: goto label_31463c;
        case 0x314640u: goto label_314640;
        case 0x314644u: goto label_314644;
        case 0x314648u: goto label_314648;
        case 0x31464cu: goto label_31464c;
        case 0x314650u: goto label_314650;
        case 0x314654u: goto label_314654;
        case 0x314658u: goto label_314658;
        case 0x31465cu: goto label_31465c;
        case 0x314660u: goto label_314660;
        case 0x314664u: goto label_314664;
        case 0x314668u: goto label_314668;
        case 0x31466cu: goto label_31466c;
        case 0x314670u: goto label_314670;
        case 0x314674u: goto label_314674;
        case 0x314678u: goto label_314678;
        case 0x31467cu: goto label_31467c;
        case 0x314680u: goto label_314680;
        case 0x314684u: goto label_314684;
        case 0x314688u: goto label_314688;
        case 0x31468cu: goto label_31468c;
        case 0x314690u: goto label_314690;
        case 0x314694u: goto label_314694;
        case 0x314698u: goto label_314698;
        case 0x31469cu: goto label_31469c;
        case 0x3146a0u: goto label_3146a0;
        case 0x3146a4u: goto label_3146a4;
        case 0x3146a8u: goto label_3146a8;
        case 0x3146acu: goto label_3146ac;
        case 0x3146b0u: goto label_3146b0;
        case 0x3146b4u: goto label_3146b4;
        case 0x3146b8u: goto label_3146b8;
        case 0x3146bcu: goto label_3146bc;
        case 0x3146c0u: goto label_3146c0;
        case 0x3146c4u: goto label_3146c4;
        case 0x3146c8u: goto label_3146c8;
        case 0x3146ccu: goto label_3146cc;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146d4u: goto label_3146d4;
        case 0x3146d8u: goto label_3146d8;
        case 0x3146dcu: goto label_3146dc;
        case 0x3146e0u: goto label_3146e0;
        case 0x3146e4u: goto label_3146e4;
        case 0x3146e8u: goto label_3146e8;
        case 0x3146ecu: goto label_3146ec;
        case 0x3146f0u: goto label_3146f0;
        case 0x3146f4u: goto label_3146f4;
        case 0x3146f8u: goto label_3146f8;
        case 0x3146fcu: goto label_3146fc;
        case 0x314700u: goto label_314700;
        case 0x314704u: goto label_314704;
        case 0x314708u: goto label_314708;
        case 0x31470cu: goto label_31470c;
        case 0x314710u: goto label_314710;
        case 0x314714u: goto label_314714;
        case 0x314718u: goto label_314718;
        case 0x31471cu: goto label_31471c;
        case 0x314720u: goto label_314720;
        case 0x314724u: goto label_314724;
        case 0x314728u: goto label_314728;
        case 0x31472cu: goto label_31472c;
        case 0x314730u: goto label_314730;
        case 0x314734u: goto label_314734;
        case 0x314738u: goto label_314738;
        case 0x31473cu: goto label_31473c;
        case 0x314740u: goto label_314740;
        case 0x314744u: goto label_314744;
        case 0x314748u: goto label_314748;
        case 0x31474cu: goto label_31474c;
        case 0x314750u: goto label_314750;
        case 0x314754u: goto label_314754;
        case 0x314758u: goto label_314758;
        case 0x31475cu: goto label_31475c;
        case 0x314760u: goto label_314760;
        case 0x314764u: goto label_314764;
        case 0x314768u: goto label_314768;
        case 0x31476cu: goto label_31476c;
        case 0x314770u: goto label_314770;
        case 0x314774u: goto label_314774;
        case 0x314778u: goto label_314778;
        case 0x31477cu: goto label_31477c;
        case 0x314780u: goto label_314780;
        case 0x314784u: goto label_314784;
        case 0x314788u: goto label_314788;
        case 0x31478cu: goto label_31478c;
        case 0x314790u: goto label_314790;
        case 0x314794u: goto label_314794;
        case 0x314798u: goto label_314798;
        case 0x31479cu: goto label_31479c;
        case 0x3147a0u: goto label_3147a0;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147a8u: goto label_3147a8;
        case 0x3147acu: goto label_3147ac;
        case 0x3147b0u: goto label_3147b0;
        case 0x3147b4u: goto label_3147b4;
        default: break;
    }

    ctx->pc = 0x314550u;

label_314550:
    // 0x314550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x314550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_314554:
    // 0x314554: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x314554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_314558:
    // 0x314558: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x314558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_31455c:
    // 0x31455c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31455cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_314560:
    // 0x314560: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x314560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_314564:
    // 0x314564: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x314564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314568:
    // 0x314568: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x314568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_31456c:
    // 0x31456c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31456cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_314570:
    // 0x314570: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x314570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_314574:
    // 0x314574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314578:
    // 0x314578: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x314578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_31457c:
    // 0x31457c: 0x26a42190  addiu       $a0, $s5, 0x2190
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8592));
label_314580:
    // 0x314580: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x314580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_314584:
    // 0x314584: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x314584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_314588:
    // 0x314588: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x314588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_31458c:
    // 0x31458c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x31458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_314590:
    // 0x314590: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x314590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314594:
    // 0x314594: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x314594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_314598:
    // 0x314598: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_31459c:
    if (ctx->pc == 0x31459Cu) {
        ctx->pc = 0x31459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314598u;
        // 0x31459c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145A0u;
        goto label_3145a0;
    }
    ctx->pc = 0x314598u;
    {
        const bool branch_taken_0x314598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314598) {
            ctx->pc = 0x31459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314598u;
            // 0x31459c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3145B0u;
            goto label_3145b0;
        }
    }
    ctx->pc = 0x3145A0u;
label_3145a0:
    // 0x3145a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3145a4:
    // 0x3145a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3145a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3145a8:
    // 0x3145a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3145ac:
    if (ctx->pc == 0x3145ACu) {
        ctx->pc = 0x3145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145A8u;
        // 0x3145ac: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145B0u;
        goto label_3145b0;
    }
    ctx->pc = 0x3145A8u;
    {
        const bool branch_taken_0x3145a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145A8u;
        // 0x3145ac: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145a8) {
            ctx->pc = 0x3145C0u;
            goto label_3145c0;
        }
    }
    ctx->pc = 0x3145B0u;
label_3145b0:
    // 0x3145b0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3145b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_3145b4:
    // 0x3145b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3145b8:
    if (ctx->pc == 0x3145B8u) {
        ctx->pc = 0x3145B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145B4u;
        // 0x3145b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145BCu;
        goto label_3145bc;
    }
    ctx->pc = 0x3145B4u;
    {
        const bool branch_taken_0x3145b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3145B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145B4u;
        // 0x3145b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145b4) {
            ctx->pc = 0x314590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314590;
        }
    }
    ctx->pc = 0x3145BCu;
label_3145bc:
    // 0x3145bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3145bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3145c0:
    // 0x3145c0: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
label_3145c4:
    if (ctx->pc == 0x3145C4u) {
        ctx->pc = 0x3145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145C0u;
        // 0x3145c4: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145C8u;
        goto label_3145c8;
    }
    ctx->pc = 0x3145C0u;
    {
        const bool branch_taken_0x3145c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145C0u;
        // 0x3145c4: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145c0) {
            ctx->pc = 0x314784u;
            goto label_314784;
        }
    }
    ctx->pc = 0x3145C8u;
label_3145c8:
    // 0x3145c8: 0x24562190  addiu       $s6, $v0, 0x2190
    ctx->pc = 0x3145c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 8592));
label_3145cc:
    // 0x3145cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3145ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3145d0:
    // 0x3145d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3145d4:
    if (ctx->pc == 0x3145D4u) {
        ctx->pc = 0x3145D8u;
        goto label_3145d8;
    }
    ctx->pc = 0x3145D0u;
    {
        const bool branch_taken_0x3145d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3145d0) {
            ctx->pc = 0x3145E8u;
            goto label_3145e8;
        }
    }
    ctx->pc = 0x3145D8u;
label_3145d8:
    // 0x3145d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3145dc:
    // 0x3145dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3145e0:
    // 0x3145e0: 0x40f809  jalr        $v0
label_3145e4:
    if (ctx->pc == 0x3145E4u) {
        ctx->pc = 0x3145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145E0u;
        // 0x3145e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145E8u;
        goto label_3145e8;
    }
    ctx->pc = 0x3145E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3145E8u);
        ctx->pc = 0x3145E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145E0u;
        // 0x3145e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3145E0u, 0x3145E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3145E8u;
label_3145e8:
    // 0x3145e8: 0xc0c514c  jal         func_314530
label_3145ec:
    if (ctx->pc == 0x3145ECu) {
        ctx->pc = 0x3145ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145E8u;
        // 0x3145ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145F0u;
        goto label_3145f0;
    }
    ctx->pc = 0x3145E8u;
    SET_GPR_U32(ctx, 31, 0x3145F0u);
    ctx->pc = 0x3145ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145E8u;
    // 0x3145ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x3145E8u, 0x3145F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145F0u;
label_3145f0:
    // 0x3145f0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3145f4:
    if (ctx->pc == 0x3145F4u) {
        ctx->pc = 0x3145F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145F0u;
        // 0x3145f4: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145F8u;
        goto label_3145f8;
    }
    ctx->pc = 0x3145F0u;
    {
        const bool branch_taken_0x3145f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3145f0) {
            ctx->pc = 0x3145F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145F0u;
            // 0x3145f4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3145F8u;
            goto label_3145f8;
        }
    }
    ctx->pc = 0x3145F8u;
label_3145f8:
    // 0x3145f8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3145f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3145fc:
    // 0x3145fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3145fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_314600:
    // 0x314600: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_314604:
    // 0x314604: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x314604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314608:
    // 0x314608: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x314608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31460c:
    // 0x31460c: 0x1093004e  beq         $a0, $s3, . + 4 + (0x4E << 2)
label_314610:
    if (ctx->pc == 0x314610u) {
        ctx->pc = 0x314610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31460Cu;
        // 0x314610: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314614u;
        goto label_314614;
    }
    ctx->pc = 0x31460Cu;
    {
        const bool branch_taken_0x31460c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x314610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31460Cu;
        // 0x314610: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31460c) {
            ctx->pc = 0x314748u;
            goto label_314748;
        }
    }
    ctx->pc = 0x314614u;
label_314614:
    // 0x314614: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x314614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_314618:
    // 0x314618: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x314618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31461c:
    // 0x31461c: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_314620:
    if (ctx->pc == 0x314620u) {
        ctx->pc = 0x314620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31461Cu;
        // 0x314620: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314624u;
        goto label_314624;
    }
    ctx->pc = 0x31461Cu;
    {
        const bool branch_taken_0x31461c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31461Cu;
        // 0x314620: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31461c) {
            ctx->pc = 0x31473Cu;
            goto label_31473c;
        }
    }
    ctx->pc = 0x314624u;
label_314624:
    // 0x314624: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_314628:
    // 0x314628: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_31462c:
    if (ctx->pc == 0x31462Cu) {
        ctx->pc = 0x31462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314628u;
        // 0x31462c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314630u;
        goto label_314630;
    }
    ctx->pc = 0x314628u;
    {
        const bool branch_taken_0x314628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314628u;
        // 0x31462c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314628) {
            ctx->pc = 0x314660u;
            goto label_314660;
        }
    }
    ctx->pc = 0x314630u;
label_314630:
    // 0x314630: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x314630u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_314634:
    // 0x314634: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_314638:
    if (ctx->pc == 0x314638u) {
        ctx->pc = 0x314638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314634u;
        // 0x314638: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31463Cu;
        goto label_31463c;
    }
    ctx->pc = 0x314634u;
    {
        const bool branch_taken_0x314634 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x314638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314634u;
        // 0x314638: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314634) {
            ctx->pc = 0x314660u;
            goto label_314660;
        }
    }
    ctx->pc = 0x31463Cu;
label_31463c:
    // 0x31463c: 0x0  nop
    ctx->pc = 0x31463cu;
    // NOP
label_314640:
    // 0x314640: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x314640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_314644:
    // 0x314644: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x314644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_314648:
    // 0x314648: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x314648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31464c:
    // 0x31464c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_314650:
    // 0x314650: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x314650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314654:
    // 0x314654: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_314658:
    // 0x314658: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
label_31465c:
    if (ctx->pc == 0x31465Cu) {
        ctx->pc = 0x31465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314658u;
        // 0x31465c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314660u;
        goto label_314660;
    }
    ctx->pc = 0x314658u;
    {
        const bool branch_taken_0x314658 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314658u;
        // 0x31465c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314658) {
            ctx->pc = 0x314640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314640;
        }
    }
    ctx->pc = 0x314660u;
label_314660:
    // 0x314660: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x314660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_314664:
    // 0x314664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_314668:
    // 0x314668: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x314668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_31466c:
    // 0x31466c: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
label_314670:
    if (ctx->pc == 0x314670u) {
        ctx->pc = 0x314670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31466Cu;
        // 0x314670: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314674u;
        goto label_314674;
    }
    ctx->pc = 0x31466Cu;
    {
        const bool branch_taken_0x31466c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31466Cu;
        // 0x314670: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31466c) {
            ctx->pc = 0x31473Cu;
            goto label_31473c;
        }
    }
    ctx->pc = 0x314674u;
label_314674:
    // 0x314674: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x314674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_314678:
    // 0x314678: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x314678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_31467c:
    // 0x31467c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x31467cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_314680:
    // 0x314680: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_314684:
    // 0x314684: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_314688:
    if (ctx->pc == 0x314688u) {
        ctx->pc = 0x314688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314684u;
        // 0x314688: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31468Cu;
        goto label_31468c;
    }
    ctx->pc = 0x314684u;
    {
        const bool branch_taken_0x314684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x314688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314684u;
        // 0x314688: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314684) {
            ctx->pc = 0x3146A8u;
            goto label_3146a8;
        }
    }
    ctx->pc = 0x31468Cu;
label_31468c:
    // 0x31468c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x31468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_314690:
    // 0x314690: 0x0  nop
    ctx->pc = 0x314690u;
    // NOP
label_314694:
    // 0x314694: 0x0  nop
    ctx->pc = 0x314694u;
    // NOP
label_314698:
    // 0x314698: 0x0  nop
    ctx->pc = 0x314698u;
    // NOP
label_31469c:
    // 0x31469c: 0x0  nop
    ctx->pc = 0x31469cu;
    // NOP
label_3146a0:
    // 0x3146a0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3146a4:
    if (ctx->pc == 0x3146A4u) {
        ctx->pc = 0x3146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146A0u;
        // 0x3146a4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146A8u;
        goto label_3146a8;
    }
    ctx->pc = 0x3146A0u;
    {
        const bool branch_taken_0x3146a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146A0u;
        // 0x3146a4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146a0) {
            ctx->pc = 0x314690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314690;
        }
    }
    ctx->pc = 0x3146A8u;
label_3146a8:
    // 0x3146a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3146a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3146ac:
    // 0x3146ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3146acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3146b0:
    // 0x3146b0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3146b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_3146b4:
    // 0x3146b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3146b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3146b8:
    // 0x3146b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3146b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3146bc:
    // 0x3146bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3146c0:
    // 0x3146c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3146c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3146c4:
    // 0x3146c4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3146c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3146c8:
    // 0x3146c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3146c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3146cc:
    // 0x3146cc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3146ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3146d0:
    // 0x3146d0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3146d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_3146d4:
    // 0x3146d4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3146d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_3146d8:
    // 0x3146d8: 0x6a42000f  ldl         $v0, 0xF($s2)
    ctx->pc = 0x3146d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3146dc:
    // 0x3146dc: 0x6e420008  ldr         $v0, 0x8($s2)
    ctx->pc = 0x3146dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3146e0:
    // 0x3146e0: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x3146e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3146e4:
    // 0x3146e4: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x3146e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3146e8:
    // 0x3146e8: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x3146e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3146ec:
    // 0x3146ec: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x3146ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3146f0:
    // 0x3146f0: 0xb246000f  sdl         $a2, 0xF($s2)
    ctx->pc = 0x3146f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3146f4:
    // 0x3146f4: 0xb6460008  sdr         $a2, 0x8($s2)
    ctx->pc = 0x3146f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3146f8:
    // 0x3146f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3146f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3146fc:
    // 0x3146fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3146fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_314700:
    // 0x314700: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_314704:
    if (ctx->pc == 0x314704u) {
        ctx->pc = 0x314704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314700u;
        // 0x314704: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314708u;
        goto label_314708;
    }
    ctx->pc = 0x314700u;
    {
        const bool branch_taken_0x314700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x314704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314700u;
        // 0x314704: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314700) {
            ctx->pc = 0x314728u;
            goto label_314728;
        }
    }
    ctx->pc = 0x314708u;
label_314708:
    // 0x314708: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_31470c:
    // 0x31470c: 0x0  nop
    ctx->pc = 0x31470cu;
    // NOP
label_314710:
    // 0x314710: 0x0  nop
    ctx->pc = 0x314710u;
    // NOP
label_314714:
    // 0x314714: 0x0  nop
    ctx->pc = 0x314714u;
    // NOP
label_314718:
    // 0x314718: 0x0  nop
    ctx->pc = 0x314718u;
    // NOP
label_31471c:
    // 0x31471c: 0x0  nop
    ctx->pc = 0x31471cu;
    // NOP
label_314720:
    // 0x314720: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_314724:
    if (ctx->pc == 0x314724u) {
        ctx->pc = 0x314724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314720u;
        // 0x314724: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314728u;
        goto label_314728;
    }
    ctx->pc = 0x314720u;
    {
        const bool branch_taken_0x314720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x314720) {
            ctx->pc = 0x314724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314720u;
            // 0x314724: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314710;
        }
    }
    ctx->pc = 0x314728u;
label_314728:
    // 0x314728: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x314728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_31472c:
    // 0x31472c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_314730:
    if (ctx->pc == 0x314730u) {
        ctx->pc = 0x314730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31472Cu;
        // 0x314730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314734u;
        goto label_314734;
    }
    ctx->pc = 0x31472Cu;
    {
        const bool branch_taken_0x31472c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31472c) {
            ctx->pc = 0x314730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31472Cu;
            // 0x314730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314740u;
            goto label_314740;
        }
    }
    ctx->pc = 0x314734u;
label_314734:
    // 0x314734: 0xc0f5222  jal         func_3D4888
label_314738:
    if (ctx->pc == 0x314738u) {
        ctx->pc = 0x31473Cu;
        goto label_31473c;
    }
    ctx->pc = 0x314734u;
    SET_GPR_U32(ctx, 31, 0x31473Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x314734u, 0x31473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31473Cu;
label_31473c:
    // 0x31473c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314740:
    // 0x314740: 0x5493ffb5  bnel        $a0, $s3, . + 4 + (-0x4B << 2)
label_314744:
    if (ctx->pc == 0x314744u) {
        ctx->pc = 0x314744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314740u;
        // 0x314744: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314748u;
        goto label_314748;
    }
    ctx->pc = 0x314740u;
    {
        const bool branch_taken_0x314740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x314740) {
            ctx->pc = 0x314744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314740u;
            // 0x314744: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314618;
        }
    }
    ctx->pc = 0x314748u;
label_314748:
    // 0x314748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31474c:
    // 0x31474c: 0x26a32190  addiu       $v1, $s5, 0x2190
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8592));
label_314750:
    // 0x314750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x314750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_314754:
    // 0x314754: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x314754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_314758:
    // 0x314758: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
label_31475c:
    if (ctx->pc == 0x31475Cu) {
        ctx->pc = 0x31475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314758u;
        // 0x31475c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314760u;
        goto label_314760;
    }
    ctx->pc = 0x314758u;
    {
        const bool branch_taken_0x314758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x314758) {
            ctx->pc = 0x31475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314758u;
            // 0x31475c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x314760u;
label_314760:
    // 0x314760: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x314760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_314764:
    // 0x314764: 0x10000005  b           . + 4 + (0x5 << 2)
label_314768:
    if (ctx->pc == 0x314768u) {
        ctx->pc = 0x314768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314764u;
        // 0x314768: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31476Cu;
        goto label_31476c;
    }
    ctx->pc = 0x314764u;
    {
        const bool branch_taken_0x314764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314764u;
        // 0x314768: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314764) {
            ctx->pc = 0x31477Cu;
            goto label_31477c;
        }
    }
    ctx->pc = 0x31476Cu;
label_31476c:
    // 0x31476c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x31476cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_314770:
    // 0x314770: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_314774:
    if (ctx->pc == 0x314774u) {
        ctx->pc = 0x314774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314770u;
        // 0x314774: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314778u;
        goto label_314778;
    }
    ctx->pc = 0x314770u;
    {
        const bool branch_taken_0x314770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314770u;
        // 0x314774: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314770) {
            ctx->pc = 0x314750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314750;
        }
    }
    ctx->pc = 0x314778u;
label_314778:
    // 0x314778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x314778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31477c:
    // 0x31477c: 0x5480ff94  bnel        $a0, $zero, . + 4 + (-0x6C << 2)
label_314780:
    if (ctx->pc == 0x314780u) {
        ctx->pc = 0x314780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31477Cu;
        // 0x314780: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314784u;
        goto label_314784;
    }
    ctx->pc = 0x31477Cu;
    {
        const bool branch_taken_0x31477c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31477c) {
            ctx->pc = 0x314780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31477Cu;
            // 0x314780: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3145D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3145d0;
        }
    }
    ctx->pc = 0x314784u;
label_314784:
    // 0x314784: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x314784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_314788:
    // 0x314788: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x314788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_31478c:
    // 0x31478c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x31478cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_314790:
    // 0x314790: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_314794:
    // 0x314794: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x314794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_314798:
    // 0x314798: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x314798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_31479c:
    // 0x31479c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x31479cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3147a0:
    // 0x3147a0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3147a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_3147a4:
    // 0x3147a4: 0x3e00008  jr          $ra
label_3147a8:
    if (ctx->pc == 0x3147A8u) {
        ctx->pc = 0x3147A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147A4u;
        // 0x3147a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147ACu;
        goto label_3147ac;
    }
    ctx->pc = 0x3147A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3147A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147A4u;
        // 0x3147a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3147ACu;
label_3147ac:
    // 0x3147ac: 0x0  nop
    ctx->pc = 0x3147acu;
    // NOP
label_3147b0:
    // 0x3147b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3147b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3147b4:
    // 0x3147b4: 0x0  nop
    ctx->pc = 0x3147b4u;
    // NOP
    ctx->pc = 0x3147b8u;
}
