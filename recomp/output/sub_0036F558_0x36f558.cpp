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

// Function: sub_0036F558
// Address: 0x36f558 - 0x36f798
void sub_0036F558_0x36f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F558_0x36f558");
#endif

    switch (ctx->pc) {
        case 0x36f558u: goto label_36f558;
        case 0x36f55cu: goto label_36f55c;
        case 0x36f560u: goto label_36f560;
        case 0x36f564u: goto label_36f564;
        case 0x36f568u: goto label_36f568;
        case 0x36f56cu: goto label_36f56c;
        case 0x36f570u: goto label_36f570;
        case 0x36f574u: goto label_36f574;
        case 0x36f578u: goto label_36f578;
        case 0x36f57cu: goto label_36f57c;
        case 0x36f580u: goto label_36f580;
        case 0x36f584u: goto label_36f584;
        case 0x36f588u: goto label_36f588;
        case 0x36f58cu: goto label_36f58c;
        case 0x36f590u: goto label_36f590;
        case 0x36f594u: goto label_36f594;
        case 0x36f598u: goto label_36f598;
        case 0x36f59cu: goto label_36f59c;
        case 0x36f5a0u: goto label_36f5a0;
        case 0x36f5a4u: goto label_36f5a4;
        case 0x36f5a8u: goto label_36f5a8;
        case 0x36f5acu: goto label_36f5ac;
        case 0x36f5b0u: goto label_36f5b0;
        case 0x36f5b4u: goto label_36f5b4;
        case 0x36f5b8u: goto label_36f5b8;
        case 0x36f5bcu: goto label_36f5bc;
        case 0x36f5c0u: goto label_36f5c0;
        case 0x36f5c4u: goto label_36f5c4;
        case 0x36f5c8u: goto label_36f5c8;
        case 0x36f5ccu: goto label_36f5cc;
        case 0x36f5d0u: goto label_36f5d0;
        case 0x36f5d4u: goto label_36f5d4;
        case 0x36f5d8u: goto label_36f5d8;
        case 0x36f5dcu: goto label_36f5dc;
        case 0x36f5e0u: goto label_36f5e0;
        case 0x36f5e4u: goto label_36f5e4;
        case 0x36f5e8u: goto label_36f5e8;
        case 0x36f5ecu: goto label_36f5ec;
        case 0x36f5f0u: goto label_36f5f0;
        case 0x36f5f4u: goto label_36f5f4;
        case 0x36f5f8u: goto label_36f5f8;
        case 0x36f5fcu: goto label_36f5fc;
        case 0x36f600u: goto label_36f600;
        case 0x36f604u: goto label_36f604;
        case 0x36f608u: goto label_36f608;
        case 0x36f60cu: goto label_36f60c;
        case 0x36f610u: goto label_36f610;
        case 0x36f614u: goto label_36f614;
        case 0x36f618u: goto label_36f618;
        case 0x36f61cu: goto label_36f61c;
        case 0x36f620u: goto label_36f620;
        case 0x36f624u: goto label_36f624;
        case 0x36f628u: goto label_36f628;
        case 0x36f62cu: goto label_36f62c;
        case 0x36f630u: goto label_36f630;
        case 0x36f634u: goto label_36f634;
        case 0x36f638u: goto label_36f638;
        case 0x36f63cu: goto label_36f63c;
        case 0x36f640u: goto label_36f640;
        case 0x36f644u: goto label_36f644;
        case 0x36f648u: goto label_36f648;
        case 0x36f64cu: goto label_36f64c;
        case 0x36f650u: goto label_36f650;
        case 0x36f654u: goto label_36f654;
        case 0x36f658u: goto label_36f658;
        case 0x36f65cu: goto label_36f65c;
        case 0x36f660u: goto label_36f660;
        case 0x36f664u: goto label_36f664;
        case 0x36f668u: goto label_36f668;
        case 0x36f66cu: goto label_36f66c;
        case 0x36f670u: goto label_36f670;
        case 0x36f674u: goto label_36f674;
        case 0x36f678u: goto label_36f678;
        case 0x36f67cu: goto label_36f67c;
        case 0x36f680u: goto label_36f680;
        case 0x36f684u: goto label_36f684;
        case 0x36f688u: goto label_36f688;
        case 0x36f68cu: goto label_36f68c;
        case 0x36f690u: goto label_36f690;
        case 0x36f694u: goto label_36f694;
        case 0x36f698u: goto label_36f698;
        case 0x36f69cu: goto label_36f69c;
        case 0x36f6a0u: goto label_36f6a0;
        case 0x36f6a4u: goto label_36f6a4;
        case 0x36f6a8u: goto label_36f6a8;
        case 0x36f6acu: goto label_36f6ac;
        case 0x36f6b0u: goto label_36f6b0;
        case 0x36f6b4u: goto label_36f6b4;
        case 0x36f6b8u: goto label_36f6b8;
        case 0x36f6bcu: goto label_36f6bc;
        case 0x36f6c0u: goto label_36f6c0;
        case 0x36f6c4u: goto label_36f6c4;
        case 0x36f6c8u: goto label_36f6c8;
        case 0x36f6ccu: goto label_36f6cc;
        case 0x36f6d0u: goto label_36f6d0;
        case 0x36f6d4u: goto label_36f6d4;
        case 0x36f6d8u: goto label_36f6d8;
        case 0x36f6dcu: goto label_36f6dc;
        case 0x36f6e0u: goto label_36f6e0;
        case 0x36f6e4u: goto label_36f6e4;
        case 0x36f6e8u: goto label_36f6e8;
        case 0x36f6ecu: goto label_36f6ec;
        case 0x36f6f0u: goto label_36f6f0;
        case 0x36f6f4u: goto label_36f6f4;
        case 0x36f6f8u: goto label_36f6f8;
        case 0x36f6fcu: goto label_36f6fc;
        case 0x36f700u: goto label_36f700;
        case 0x36f704u: goto label_36f704;
        case 0x36f708u: goto label_36f708;
        case 0x36f70cu: goto label_36f70c;
        case 0x36f710u: goto label_36f710;
        case 0x36f714u: goto label_36f714;
        case 0x36f718u: goto label_36f718;
        case 0x36f71cu: goto label_36f71c;
        case 0x36f720u: goto label_36f720;
        case 0x36f724u: goto label_36f724;
        case 0x36f728u: goto label_36f728;
        case 0x36f72cu: goto label_36f72c;
        case 0x36f730u: goto label_36f730;
        case 0x36f734u: goto label_36f734;
        case 0x36f738u: goto label_36f738;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f740u: goto label_36f740;
        case 0x36f744u: goto label_36f744;
        case 0x36f748u: goto label_36f748;
        case 0x36f74cu: goto label_36f74c;
        case 0x36f750u: goto label_36f750;
        case 0x36f754u: goto label_36f754;
        case 0x36f758u: goto label_36f758;
        case 0x36f75cu: goto label_36f75c;
        case 0x36f760u: goto label_36f760;
        case 0x36f764u: goto label_36f764;
        case 0x36f768u: goto label_36f768;
        case 0x36f76cu: goto label_36f76c;
        case 0x36f770u: goto label_36f770;
        case 0x36f774u: goto label_36f774;
        case 0x36f778u: goto label_36f778;
        case 0x36f77cu: goto label_36f77c;
        case 0x36f780u: goto label_36f780;
        case 0x36f784u: goto label_36f784;
        case 0x36f788u: goto label_36f788;
        case 0x36f78cu: goto label_36f78c;
        case 0x36f790u: goto label_36f790;
        case 0x36f794u: goto label_36f794;
        default: break;
    }

    ctx->pc = 0x36f558u;

label_36f558:
    // 0x36f558: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_36f55c:
    // 0x36f55c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x36f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_36f560:
    // 0x36f560: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x36f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_36f564:
    // 0x36f564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f568:
    // 0x36f568: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x36f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_36f56c:
    // 0x36f56c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36f56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36f570:
    // 0x36f570: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x36f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_36f574:
    // 0x36f574: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x36f574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36f578:
    // 0x36f578: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x36f578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_36f57c:
    // 0x36f57c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x36f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_36f580:
    // 0x36f580: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x36f580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_36f584:
    // 0x36f584: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x36f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_36f588:
    // 0x36f588: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x36f588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_36f58c:
    // 0x36f58c: 0x16140003  bne         $s0, $s4, . + 4 + (0x3 << 2)
label_36f590:
    if (ctx->pc == 0x36F590u) {
        ctx->pc = 0x36F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F58Cu;
        // 0x36f590: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F594u;
        goto label_36f594;
    }
    ctx->pc = 0x36F58Cu;
    {
        const bool branch_taken_0x36f58c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x36F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F58Cu;
        // 0x36f590: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f58c) {
            ctx->pc = 0x36F59Cu;
            goto label_36f59c;
        }
    }
    ctx->pc = 0x36F594u;
label_36f594:
    // 0x36f594: 0x10000074  b           . + 4 + (0x74 << 2)
label_36f598:
    if (ctx->pc == 0x36F598u) {
        ctx->pc = 0x36F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F594u;
        // 0x36f598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F59Cu;
        goto label_36f59c;
    }
    ctx->pc = 0x36F594u;
    {
        const bool branch_taken_0x36f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F594u;
        // 0x36f598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f594) {
            ctx->pc = 0x36F768u;
            goto label_36f768;
        }
    }
    ctx->pc = 0x36F59Cu;
label_36f59c:
    // 0x36f59c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36f5a0:
    // 0x36f5a0: 0x8e550004  lw          $s5, 0x4($s2)
    ctx->pc = 0x36f5a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_36f5a4:
    // 0x36f5a4: 0x2457f9d0  addiu       $s7, $v0, -0x630
    ctx->pc = 0x36f5a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965712));
label_36f5a8:
    // 0x36f5a8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x36f5a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36f5ac:
    // 0x36f5ac: 0x8eb10030  lw          $s1, 0x30($s5)
    ctx->pc = 0x36f5acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_36f5b0:
    // 0x36f5b0: 0x24164000  addiu       $s6, $zero, 0x4000
    ctx->pc = 0x36f5b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_36f5b4:
    // 0x36f5b4: 0x4842d800  cfc2.ni     $v0, $vi27
    ctx->pc = 0x36f5b4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar0);
label_36f5b8:
    // 0x36f5b8: 0x1056000e  beq         $v0, $s6, . + 4 + (0xE << 2)
label_36f5bc:
    if (ctx->pc == 0x36F5BCu) {
        ctx->pc = 0x36F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5B8u;
        // 0x36f5bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5C0u;
        goto label_36f5c0;
    }
    ctx->pc = 0x36F5B8u;
    {
        const bool branch_taken_0x36f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x36F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5B8u;
        // 0x36f5bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5b8) {
            ctx->pc = 0x36F5F4u;
            goto label_36f5f4;
        }
    }
    ctx->pc = 0x36F5C0u;
label_36f5c0:
    // 0x36f5c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f5c4:
    // 0x36f5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f5c8:
    // 0x36f5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f5cc:
    // 0x36f5cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f5d0:
    // 0x36f5d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f5d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f5d4:
    // 0x36f5d4: 0xc0dccd0  jal         func_373340
label_36f5d8:
    if (ctx->pc == 0x36F5D8u) {
        ctx->pc = 0x36F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5D4u;
        // 0x36f5d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5DCu;
        goto label_36f5dc;
    }
    ctx->pc = 0x36F5D4u;
    SET_GPR_U32(ctx, 31, 0x36F5DCu);
    ctx->pc = 0x36F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5D4u;
    // 0x36f5d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373340u, 0x36F5D4u, 0x36F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5DCu;
label_36f5dc:
    // 0x36f5dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_36f5e0:
    // 0x36f5e0: 0xc0dcce2  jal         func_373388
label_36f5e4:
    if (ctx->pc == 0x36F5E4u) {
        ctx->pc = 0x36F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5E0u;
        // 0x36f5e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5E8u;
        goto label_36f5e8;
    }
    ctx->pc = 0x36F5E0u;
    SET_GPR_U32(ctx, 31, 0x36F5E8u);
    ctx->pc = 0x36F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5E0u;
    // 0x36f5e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373388u, 0x36F5E0u, 0x36F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5E8u;
label_36f5e8:
    // 0x36f5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36f5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f5ec:
    // 0x36f5ec: 0xc0dcd08  jal         func_373420
label_36f5f0:
    if (ctx->pc == 0x36F5F0u) {
        ctx->pc = 0x36F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5ECu;
        // 0x36f5f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5F4u;
        goto label_36f5f4;
    }
    ctx->pc = 0x36F5ECu;
    SET_GPR_U32(ctx, 31, 0x36F5F4u);
    ctx->pc = 0x36F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5ECu;
    // 0x36f5f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373420u, 0x36F5ECu, 0x36F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5F4u;
label_36f5f4:
    // 0x36f5f4: 0x48d6d800  ctc2.ni     $s6, $vi27
    ctx->pc = 0x36f5f4u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 22);
label_36f5f8:
    // 0x36f5f8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x36f5f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_36f5fc:
    // 0x36f5fc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x36f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_36f600:
    // 0x36f600: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x36f600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_36f604:
    // 0x36f604: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x36f604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_36f608:
    // 0x36f608: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x36f608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_36f60c:
    // 0x36f60c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_36f610:
    // 0x36f610: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x36f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_36f614:
    // 0x36f614: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36f614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_36f618:
    // 0x36f618: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x36f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_36f61c:
    // 0x36f61c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_36f620:
    // 0x36f620: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x36f620u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_36f624:
    // 0x36f624: 0xd8ab0010  lqc2        $vf11, 0x10($a1)
    ctx->pc = 0x36f624u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_36f628:
    // 0x36f628: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x36f628u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_36f62c:
    // 0x36f62c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x36f62cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_36f630:
    // 0x36f630: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x36f630u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_36f634:
    // 0x36f634: 0x1214004b  beq         $s0, $s4, . + 4 + (0x4B << 2)
label_36f638:
    if (ctx->pc == 0x36F638u) {
        ctx->pc = 0x36F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F634u;
        // 0x36f638: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F63Cu;
        goto label_36f63c;
    }
    ctx->pc = 0x36F634u;
    {
        const bool branch_taken_0x36f634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x36F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F634u;
        // 0x36f638: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f634) {
            ctx->pc = 0x36F764u;
            goto label_36f764;
        }
    }
    ctx->pc = 0x36F63Cu;
label_36f63c:
    // 0x36f63c: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x36f63cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_36f640:
    // 0x36f640: 0x24567ee0  addiu       $s6, $v0, 0x7EE0
    ctx->pc = 0x36f640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
label_36f644:
    // 0x36f644: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x36f644u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36f648:
    // 0x36f648: 0x4be70328  vadd.xyzw   $vf12, $vf0, $vf7
    ctx->pc = 0x36f648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_36f64c:
    // 0x36f64c: 0x4be80368  vadd.xyzw   $vf13, $vf0, $vf8
    ctx->pc = 0x36f64cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_36f650:
    // 0x36f650: 0x4be903a8  vadd.xyzw   $vf14, $vf0, $vf9
    ctx->pc = 0x36f650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_36f654:
    // 0x36f654: 0x4a000038  vcallms     0x0
    ctx->pc = 0x36f654u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
label_36f658:
    // 0x36f658: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x36f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_36f65c:
    // 0x36f65c: 0x941026  xor         $v0, $a0, $s4
    ctx->pc = 0x36f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 20));
label_36f660:
    // 0x36f660: 0x202200a  movz        $a0, $s0, $v0
    ctx->pc = 0x36f660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_36f664:
    // 0x36f664: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x36f664u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_36f668:
    // 0x36f668: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x36f668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_36f66c:
    // 0x36f66c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x36f66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_36f670:
    // 0x36f670: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x36f670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_36f674:
    // 0x36f674: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36f674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_36f678:
    // 0x36f678: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x36f678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_36f67c:
    // 0x36f67c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_36f680:
    // 0x36f680: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x36f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_36f684:
    // 0x36f684: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_36f688:
    // 0x36f688: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x36f688u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_36f68c:
    // 0x36f68c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x36f68cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_36f690:
    // 0x36f690: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x36f690u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_36f694:
    // 0x36f694: 0x4a0002ff  vnop
    ctx->pc = 0x36f694u;
    // NOP operation, no action needed for VU0
label_36f698:
    // 0x36f698: 0xfbbc0000  sqc2        $vf28, 0x0($sp)
    ctx->pc = 0x36f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_36f69c:
    // 0x36f69c: 0xfbbd0010  sqc2        $vf29, 0x10($sp)
    ctx->pc = 0x36f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_36f6a0:
    // 0x36f6a0: 0x4825f000  qmfc2.ni    $a1, $vf30
    ctx->pc = 0x36f6a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[30]));
label_36f6a4:
    // 0x36f6a4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x36f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_36f6a8:
    // 0x36f6a8: 0x48440800  cfc2.ni     $a0, $vi1
    ctx->pc = 0x36f6a8u;
    SET_GPR_U32(ctx, 4, static_cast<uint32_t>(ctx->vi[1]));
label_36f6ac:
    // 0x36f6ac: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_36f6b0:
    if (ctx->pc == 0x36F6B0u) {
        ctx->pc = 0x36F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6ACu;
        // 0x36f6b0: 0x26130008  addiu       $s3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F6B4u;
        goto label_36f6b4;
    }
    ctx->pc = 0x36F6ACu;
    {
        const bool branch_taken_0x36f6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6ACu;
        // 0x36f6b0: 0x26130008  addiu       $s3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6ac) {
            ctx->pc = 0x36F758u;
            goto label_36f758;
        }
    }
    ctx->pc = 0x36F6B4u;
label_36f6b4:
    // 0x36f6b4: 0xc0f6a96  jal         func_3DAA58
label_36f6b8:
    if (ctx->pc == 0x36F6B8u) {
        ctx->pc = 0x36F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6B4u;
        // 0x36f6b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F6BCu;
        goto label_36f6bc;
    }
    ctx->pc = 0x36F6B4u;
    SET_GPR_U32(ctx, 31, 0x36F6BCu);
    ctx->pc = 0x36F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6B4u;
    // 0x36f6b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36F6B4u, 0x36F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6BCu;
label_36f6bc:
    // 0x36f6bc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x36f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_36f6c0:
    // 0x36f6c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36f6c4:
    // 0x36f6c4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x36f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_36f6c8:
    // 0x36f6c8: 0xc0c362e  jal         func_30D8B8
label_36f6cc:
    if (ctx->pc == 0x36F6CCu) {
        ctx->pc = 0x36F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6C8u;
        // 0x36f6cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F6D0u;
        goto label_36f6d0;
    }
    ctx->pc = 0x36F6C8u;
    SET_GPR_U32(ctx, 31, 0x36F6D0u);
    ctx->pc = 0x36F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6C8u;
    // 0x36f6cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x36F6C8u, 0x36F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6D0u;
label_36f6d0:
    // 0x36f6d0: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x36f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_36f6d4:
    // 0x36f6d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_36f6d8:
    // 0x36f6d8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x36f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_36f6dc:
    // 0x36f6dc: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x36f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_36f6e0:
    // 0x36f6e0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x36f6e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_36f6e4:
    // 0x36f6e4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x36f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_36f6e8:
    // 0x36f6e8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x36f6e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_36f6ec:
    // 0x36f6ec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x36f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_36f6f0:
    // 0x36f6f0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x36f6f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_36f6f4:
    // 0x36f6f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x36f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f6f8:
    // 0x36f6f8: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x36f6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_36f6fc:
    // 0x36f6fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_36f700:
    // 0x36f700: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x36f700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_36f704:
    // 0x36f704: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x36f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_36f708:
    // 0x36f708: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x36f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f70c:
    // 0x36f70c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x36f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_36f710:
    // 0x36f710: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x36f710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_36f714:
    // 0x36f714: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x36f714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36f718:
    // 0x36f718: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36f718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_36f71c:
    // 0x36f71c: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x36f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_36f720:
    // 0x36f720: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x36f720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_36f724:
    // 0x36f724: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x36f724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_36f728:
    // 0x36f728: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x36f728u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_36f72c:
    // 0x36f72c: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x36f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
label_36f730:
    // 0x36f730: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x36f730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_36f734:
    // 0x36f734: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_36f738:
    // 0x36f738: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x36f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_36f73c:
    // 0x36f73c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_36f740:
    // 0x36f740: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x36f740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
label_36f744:
    // 0x36f744: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x36f744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_36f748:
    // 0x36f748: 0x120f809  jalr        $t1
label_36f74c:
    if (ctx->pc == 0x36F74Cu) {
        ctx->pc = 0x36F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F748u;
        // 0x36f74c: 0xafbe0028  sw          $fp, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F750u;
        goto label_36f750;
    }
    ctx->pc = 0x36F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x36F750u);
        ctx->pc = 0x36F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F748u;
        // 0x36f74c: 0xafbe0028  sw          $fp, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F748u, 0x36F750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F750u;
label_36f750:
    // 0x36f750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_36f754:
    if (ctx->pc == 0x36F754u) {
        ctx->pc = 0x36F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F750u;
        // 0x36f754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F758u;
        goto label_36f758;
    }
    ctx->pc = 0x36F750u;
    {
        const bool branch_taken_0x36f750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F750u;
        // 0x36f754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f750) {
            ctx->pc = 0x36F768u;
            goto label_36f768;
        }
    }
    ctx->pc = 0x36F758u;
label_36f758:
    // 0x36f758: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x36f758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f75c:
    // 0x36f75c: 0x1614ffba  bne         $s0, $s4, . + 4 + (-0x46 << 2)
label_36f760:
    if (ctx->pc == 0x36F760u) {
        ctx->pc = 0x36F764u;
        goto label_36f764;
    }
    ctx->pc = 0x36F75Cu;
    {
        const bool branch_taken_0x36f75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x36f75c) {
            ctx->pc = 0x36F648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f648;
        }
    }
    ctx->pc = 0x36F764u;
label_36f764:
    // 0x36f764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f768:
    // 0x36f768: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x36f768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_36f76c:
    // 0x36f76c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x36f76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_36f770:
    // 0x36f770: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x36f770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_36f774:
    // 0x36f774: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x36f774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_36f778:
    // 0x36f778: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x36f778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_36f77c:
    // 0x36f77c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x36f77cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_36f780:
    // 0x36f780: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x36f780u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36f784:
    // 0x36f784: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x36f784u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_36f788:
    // 0x36f788: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x36f788u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_36f78c:
    // 0x36f78c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x36f78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_36f790:
    // 0x36f790: 0x3e00008  jr          $ra
label_36f794:
    if (ctx->pc == 0x36F794u) {
        ctx->pc = 0x36F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F790u;
        // 0x36f794: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F798u;
        goto label_fallthrough_0x36f790;
    }
    ctx->pc = 0x36F790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F790u;
        // 0x36f794: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36f790:
    ctx->pc = 0x36F798u;
}
