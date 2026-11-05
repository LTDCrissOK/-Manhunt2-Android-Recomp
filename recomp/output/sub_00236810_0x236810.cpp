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

// Function: sub_00236810
// Address: 0x236810 - 0x236930
void sub_00236810_0x236810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236810_0x236810");
#endif

    switch (ctx->pc) {
        case 0x236810u: goto label_236810;
        case 0x236814u: goto label_236814;
        case 0x236818u: goto label_236818;
        case 0x23681cu: goto label_23681c;
        case 0x236820u: goto label_236820;
        case 0x236824u: goto label_236824;
        case 0x236828u: goto label_236828;
        case 0x23682cu: goto label_23682c;
        case 0x236830u: goto label_236830;
        case 0x236834u: goto label_236834;
        case 0x236838u: goto label_236838;
        case 0x23683cu: goto label_23683c;
        case 0x236840u: goto label_236840;
        case 0x236844u: goto label_236844;
        case 0x236848u: goto label_236848;
        case 0x23684cu: goto label_23684c;
        case 0x236850u: goto label_236850;
        case 0x236854u: goto label_236854;
        case 0x236858u: goto label_236858;
        case 0x23685cu: goto label_23685c;
        case 0x236860u: goto label_236860;
        case 0x236864u: goto label_236864;
        case 0x236868u: goto label_236868;
        case 0x23686cu: goto label_23686c;
        case 0x236870u: goto label_236870;
        case 0x236874u: goto label_236874;
        case 0x236878u: goto label_236878;
        case 0x23687cu: goto label_23687c;
        case 0x236880u: goto label_236880;
        case 0x236884u: goto label_236884;
        case 0x236888u: goto label_236888;
        case 0x23688cu: goto label_23688c;
        case 0x236890u: goto label_236890;
        case 0x236894u: goto label_236894;
        case 0x236898u: goto label_236898;
        case 0x23689cu: goto label_23689c;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368a8u: goto label_2368a8;
        case 0x2368acu: goto label_2368ac;
        case 0x2368b0u: goto label_2368b0;
        case 0x2368b4u: goto label_2368b4;
        case 0x2368b8u: goto label_2368b8;
        case 0x2368bcu: goto label_2368bc;
        case 0x2368c0u: goto label_2368c0;
        case 0x2368c4u: goto label_2368c4;
        case 0x2368c8u: goto label_2368c8;
        case 0x2368ccu: goto label_2368cc;
        case 0x2368d0u: goto label_2368d0;
        case 0x2368d4u: goto label_2368d4;
        case 0x2368d8u: goto label_2368d8;
        case 0x2368dcu: goto label_2368dc;
        case 0x2368e0u: goto label_2368e0;
        case 0x2368e4u: goto label_2368e4;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368ecu: goto label_2368ec;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368f4u: goto label_2368f4;
        case 0x2368f8u: goto label_2368f8;
        case 0x2368fcu: goto label_2368fc;
        case 0x236900u: goto label_236900;
        case 0x236904u: goto label_236904;
        case 0x236908u: goto label_236908;
        case 0x23690cu: goto label_23690c;
        case 0x236910u: goto label_236910;
        case 0x236914u: goto label_236914;
        case 0x236918u: goto label_236918;
        case 0x23691cu: goto label_23691c;
        case 0x236920u: goto label_236920;
        case 0x236924u: goto label_236924;
        case 0x236928u: goto label_236928;
        case 0x23692cu: goto label_23692c;
        default: break;
    }

    ctx->pc = 0x236810u;

label_236810:
    // 0x236810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_236814:
    // 0x236814: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x236814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_236818:
    // 0x236818: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x236818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_23681c:
    // 0x23681c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x23681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_236820:
    // 0x236820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236824:
    // 0x236824: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x236824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_236828:
    // 0x236828: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23682c:
    // 0x23682c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_236830:
    // 0x236830: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x236830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236834:
    // 0x236834: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x236834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236838:
    // 0x236838: 0xc0ac99a  jal         func_2B2668
label_23683c:
    if (ctx->pc == 0x23683Cu) {
        ctx->pc = 0x23683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236838u;
        // 0x23683c: 0x8e440224  lw          $a0, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236840u;
        goto label_236840;
    }
    ctx->pc = 0x236838u;
    SET_GPR_U32(ctx, 31, 0x236840u);
    ctx->pc = 0x23683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236838u;
    // 0x23683c: 0x8e440224  lw          $a0, 0x224($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2668u, 0x236838u, 0x236840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236840u;
label_236840:
    // 0x236840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236844:
    // 0x236844: 0xc0899bc  jal         func_2266F0
label_236848:
    if (ctx->pc == 0x236848u) {
        ctx->pc = 0x236848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236844u;
        // 0x236848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23684Cu;
        goto label_23684c;
    }
    ctx->pc = 0x236844u;
    SET_GPR_U32(ctx, 31, 0x23684Cu);
    ctx->pc = 0x236848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236844u;
    // 0x236848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236844u, 0x23684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23684Cu;
label_23684c:
    // 0x23684c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_236850:
    if (ctx->pc == 0x236850u) {
        ctx->pc = 0x236854u;
        goto label_236854;
    }
    ctx->pc = 0x23684Cu;
    {
        const bool branch_taken_0x23684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23684c) {
            ctx->pc = 0x23686Cu;
            goto label_23686c;
        }
    }
    ctx->pc = 0x236854u;
label_236854:
    // 0x236854: 0xc0899bc  jal         func_2266F0
label_236858:
    if (ctx->pc == 0x236858u) {
        ctx->pc = 0x236858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236854u;
        // 0x236858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23685Cu;
        goto label_23685c;
    }
    ctx->pc = 0x236854u;
    SET_GPR_U32(ctx, 31, 0x23685Cu);
    ctx->pc = 0x236858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236854u;
    // 0x236858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236854u, 0x23685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23685Cu;
label_23685c:
    // 0x23685c: 0xc097f26  jal         func_25FC98
label_236860:
    if (ctx->pc == 0x236860u) {
        ctx->pc = 0x236860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23685Cu;
        // 0x236860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236864u;
        goto label_236864;
    }
    ctx->pc = 0x23685Cu;
    SET_GPR_U32(ctx, 31, 0x236864u);
    ctx->pc = 0x236860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23685Cu;
    // 0x236860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x23685Cu, 0x236864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236864u;
label_236864:
    // 0x236864: 0x10510028  beq         $v0, $s1, . + 4 + (0x28 << 2)
label_236868:
    if (ctx->pc == 0x236868u) {
        ctx->pc = 0x236868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236864u;
        // 0x236868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23686Cu;
        goto label_23686c;
    }
    ctx->pc = 0x236864u;
    {
        const bool branch_taken_0x236864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x236868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236864u;
        // 0x236868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236864) {
            ctx->pc = 0x236908u;
            goto label_236908;
        }
    }
    ctx->pc = 0x23686Cu;
label_23686c:
    // 0x23686c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_236870:
    if (ctx->pc == 0x236870u) {
        ctx->pc = 0x236870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23686Cu;
        // 0x236870: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236874u;
        goto label_236874;
    }
    ctx->pc = 0x23686Cu;
    {
        const bool branch_taken_0x23686c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23686Cu;
        // 0x236870: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23686c) {
            ctx->pc = 0x236888u;
            goto label_236888;
        }
    }
    ctx->pc = 0x236874u;
label_236874:
    // 0x236874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236878:
    // 0x236878: 0xc08db1e  jal         func_236C78
label_23687c:
    if (ctx->pc == 0x23687Cu) {
        ctx->pc = 0x23687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236878u;
        // 0x23687c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236880u;
        goto label_236880;
    }
    ctx->pc = 0x236878u;
    SET_GPR_U32(ctx, 31, 0x236880u);
    ctx->pc = 0x23687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236878u;
    // 0x23687c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x236878u, 0x236880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236880u;
label_236880:
    // 0x236880: 0x10000022  b           . + 4 + (0x22 << 2)
label_236884:
    if (ctx->pc == 0x236884u) {
        ctx->pc = 0x236884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236880u;
        // 0x236884: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236888u;
        goto label_236888;
    }
    ctx->pc = 0x236880u;
    {
        const bool branch_taken_0x236880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236880u;
        // 0x236884: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236880) {
            ctx->pc = 0x23690Cu;
            goto label_23690c;
        }
    }
    ctx->pc = 0x236888u;
label_236888:
    // 0x236888: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
label_23688c:
    if (ctx->pc == 0x23688Cu) {
        ctx->pc = 0x23688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236888u;
        // 0x23688c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236890u;
        goto label_236890;
    }
    ctx->pc = 0x236888u;
    {
        const bool branch_taken_0x236888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236888u;
        // 0x23688c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236888) {
            ctx->pc = 0x236908u;
            goto label_236908;
        }
    }
    ctx->pc = 0x236890u;
label_236890:
    // 0x236890: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236894:
    // 0x236894: 0xc097c12  jal         func_25F048
label_236898:
    if (ctx->pc == 0x236898u) {
        ctx->pc = 0x236898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236894u;
        // 0x236898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23689Cu;
        goto label_23689c;
    }
    ctx->pc = 0x236894u;
    SET_GPR_U32(ctx, 31, 0x23689Cu);
    ctx->pc = 0x236898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236894u;
    // 0x236898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F048u, 0x236894u, 0x23689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23689Cu;
label_23689c:
    // 0x23689c: 0xc085d2a  jal         func_2174A8
label_2368a0:
    if (ctx->pc == 0x2368A0u) {
        ctx->pc = 0x2368A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23689Cu;
        // 0x2368a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368A4u;
        goto label_2368a4;
    }
    ctx->pc = 0x23689Cu;
    SET_GPR_U32(ctx, 31, 0x2368A4u);
    ctx->pc = 0x2368A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23689Cu;
    // 0x2368a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x23689Cu, 0x2368A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368A4u;
label_2368a4:
    // 0x2368a4: 0xc083072  jal         func_20C1C8
label_2368a8:
    if (ctx->pc == 0x2368A8u) {
        ctx->pc = 0x2368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368A4u;
        // 0x2368a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368ACu;
        goto label_2368ac;
    }
    ctx->pc = 0x2368A4u;
    SET_GPR_U32(ctx, 31, 0x2368ACu);
    ctx->pc = 0x2368A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368A4u;
    // 0x2368a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2368A4u, 0x2368ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368ACu;
label_2368ac:
    // 0x2368ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2368acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2368b0:
    // 0x2368b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2368b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2368b4:
    // 0x2368b4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2368b8:
    // 0x2368b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2368b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2368bc:
    // 0x2368bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2368bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2368c0:
    // 0x2368c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2368c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2368c4:
    // 0x2368c4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2368c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2368c8:
    // 0x2368c8: 0x40f809  jalr        $v0
label_2368cc:
    if (ctx->pc == 0x2368CCu) {
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368D0u;
        goto label_2368d0;
    }
    ctx->pc = 0x2368C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2368D0u);
        ctx->pc = 0x2368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368C8u;
        // 0x2368cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368C8u, 0x2368D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2368D0u;
label_2368d0:
    // 0x2368d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2368d4:
    if (ctx->pc == 0x2368D4u) {
        ctx->pc = 0x2368D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368D0u;
        // 0x2368d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368D8u;
        goto label_2368d8;
    }
    ctx->pc = 0x2368D0u;
    {
        const bool branch_taken_0x2368d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2368D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368D0u;
        // 0x2368d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368d0) {
            ctx->pc = 0x236908u;
            goto label_236908;
        }
    }
    ctx->pc = 0x2368D8u;
label_2368d8:
    // 0x2368d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2368dc:
    // 0x2368dc: 0x8e4600f8  lw          $a2, 0xF8($s2)
    ctx->pc = 0x2368dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_2368e0:
    // 0x2368e0: 0x24a54f38  addiu       $a1, $a1, 0x4F38
    ctx->pc = 0x2368e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20280));
label_2368e4:
    // 0x2368e4: 0xc0efefa  jal         func_3BFBE8
label_2368e8:
    if (ctx->pc == 0x2368E8u) {
        ctx->pc = 0x2368E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E4u;
        // 0x2368e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368ECu;
        goto label_2368ec;
    }
    ctx->pc = 0x2368E4u;
    SET_GPR_U32(ctx, 31, 0x2368ECu);
    ctx->pc = 0x2368E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2368E4u;
    // 0x2368e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2368E4u, 0x2368ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2368ECu;
label_2368ec:
    // 0x2368ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2368f0:
    if (ctx->pc == 0x2368F0u) {
        ctx->pc = 0x2368F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368ECu;
        // 0x2368f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368F4u;
        goto label_2368f4;
    }
    ctx->pc = 0x2368ECu;
    {
        const bool branch_taken_0x2368ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2368F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368ECu;
        // 0x2368f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368ec) {
            ctx->pc = 0x236904u;
            goto label_236904;
        }
    }
    ctx->pc = 0x2368F4u;
label_2368f4:
    // 0x2368f4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2368f8:
    // 0x2368f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2368fc:
    // 0x2368fc: 0x40f809  jalr        $v0
label_236900:
    if (ctx->pc == 0x236900u) {
        ctx->pc = 0x236900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368FCu;
        // 0x236900: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236904u;
        goto label_236904;
    }
    ctx->pc = 0x2368FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236904u);
        ctx->pc = 0x236900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368FCu;
        // 0x236900: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368FCu, 0x236904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236904u;
label_236904:
    // 0x236904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236908:
    // 0x236908: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x236908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23690c:
    // 0x23690c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x23690cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_236910:
    // 0x236910: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x236910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_236914:
    // 0x236914: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x236914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_236918:
    // 0x236918: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x236918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23691c:
    // 0x23691c: 0x3e00008  jr          $ra
label_236920:
    if (ctx->pc == 0x236920u) {
        ctx->pc = 0x236920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23691Cu;
        // 0x236920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236924u;
        goto label_236924;
    }
    ctx->pc = 0x23691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23691Cu;
        // 0x236920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23691Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236924u;
label_236924:
    // 0x236924: 0x0  nop
    ctx->pc = 0x236924u;
    // NOP
label_236928:
    // 0x236928: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23692c:
    // 0x23692c: 0x0  nop
    ctx->pc = 0x23692cu;
    // NOP
    ctx->pc = 0x236930u;
}
