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

// Function: sub_002196F8
// Address: 0x2196f8 - 0x219828
void sub_002196F8_0x2196f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002196F8_0x2196f8");
#endif

    switch (ctx->pc) {
        case 0x2196f8u: goto label_2196f8;
        case 0x2196fcu: goto label_2196fc;
        case 0x219700u: goto label_219700;
        case 0x219704u: goto label_219704;
        case 0x219708u: goto label_219708;
        case 0x21970cu: goto label_21970c;
        case 0x219710u: goto label_219710;
        case 0x219714u: goto label_219714;
        case 0x219718u: goto label_219718;
        case 0x21971cu: goto label_21971c;
        case 0x219720u: goto label_219720;
        case 0x219724u: goto label_219724;
        case 0x219728u: goto label_219728;
        case 0x21972cu: goto label_21972c;
        case 0x219730u: goto label_219730;
        case 0x219734u: goto label_219734;
        case 0x219738u: goto label_219738;
        case 0x21973cu: goto label_21973c;
        case 0x219740u: goto label_219740;
        case 0x219744u: goto label_219744;
        case 0x219748u: goto label_219748;
        case 0x21974cu: goto label_21974c;
        case 0x219750u: goto label_219750;
        case 0x219754u: goto label_219754;
        case 0x219758u: goto label_219758;
        case 0x21975cu: goto label_21975c;
        case 0x219760u: goto label_219760;
        case 0x219764u: goto label_219764;
        case 0x219768u: goto label_219768;
        case 0x21976cu: goto label_21976c;
        case 0x219770u: goto label_219770;
        case 0x219774u: goto label_219774;
        case 0x219778u: goto label_219778;
        case 0x21977cu: goto label_21977c;
        case 0x219780u: goto label_219780;
        case 0x219784u: goto label_219784;
        case 0x219788u: goto label_219788;
        case 0x21978cu: goto label_21978c;
        case 0x219790u: goto label_219790;
        case 0x219794u: goto label_219794;
        case 0x219798u: goto label_219798;
        case 0x21979cu: goto label_21979c;
        case 0x2197a0u: goto label_2197a0;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197a8u: goto label_2197a8;
        case 0x2197acu: goto label_2197ac;
        case 0x2197b0u: goto label_2197b0;
        case 0x2197b4u: goto label_2197b4;
        case 0x2197b8u: goto label_2197b8;
        case 0x2197bcu: goto label_2197bc;
        case 0x2197c0u: goto label_2197c0;
        case 0x2197c4u: goto label_2197c4;
        case 0x2197c8u: goto label_2197c8;
        case 0x2197ccu: goto label_2197cc;
        case 0x2197d0u: goto label_2197d0;
        case 0x2197d4u: goto label_2197d4;
        case 0x2197d8u: goto label_2197d8;
        case 0x2197dcu: goto label_2197dc;
        case 0x2197e0u: goto label_2197e0;
        case 0x2197e4u: goto label_2197e4;
        case 0x2197e8u: goto label_2197e8;
        case 0x2197ecu: goto label_2197ec;
        case 0x2197f0u: goto label_2197f0;
        case 0x2197f4u: goto label_2197f4;
        case 0x2197f8u: goto label_2197f8;
        case 0x2197fcu: goto label_2197fc;
        case 0x219800u: goto label_219800;
        case 0x219804u: goto label_219804;
        case 0x219808u: goto label_219808;
        case 0x21980cu: goto label_21980c;
        case 0x219810u: goto label_219810;
        case 0x219814u: goto label_219814;
        case 0x219818u: goto label_219818;
        case 0x21981cu: goto label_21981c;
        case 0x219820u: goto label_219820;
        case 0x219824u: goto label_219824;
        default: break;
    }

    ctx->pc = 0x2196f8u;

label_2196f8:
    // 0x2196f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2196fc:
    // 0x2196fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2196fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_219700:
    // 0x219700: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_219704:
    // 0x219704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219708:
    // 0x219708: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_21970c:
    // 0x21970c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x21970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_219710:
    // 0x219710: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x219710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_219714:
    // 0x219714: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_219718:
    // 0x219718: 0xc0d7384  jal         func_35CE10
label_21971c:
    if (ctx->pc == 0x21971Cu) {
        ctx->pc = 0x21971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219718u;
        // 0x21971c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219720u;
        goto label_219720;
    }
    ctx->pc = 0x219718u;
    SET_GPR_U32(ctx, 31, 0x219720u);
    ctx->pc = 0x21971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219718u;
    // 0x21971c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219718u, 0x219720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219720u;
label_219720:
    // 0x219720: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x219720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_219724:
    // 0x219724: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_219728:
    // 0x219728: 0xc0d7384  jal         func_35CE10
label_21972c:
    if (ctx->pc == 0x21972Cu) {
        ctx->pc = 0x21972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219728u;
        // 0x21972c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219730u;
        goto label_219730;
    }
    ctx->pc = 0x219728u;
    SET_GPR_U32(ctx, 31, 0x219730u);
    ctx->pc = 0x21972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219728u;
    // 0x21972c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219728u, 0x219730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219730u;
label_219730:
    // 0x219730: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_219734:
    // 0x219734: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_219738:
    // 0x219738: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_21973c:
    // 0x21973c: 0x24513570  addiu       $s1, $v0, 0x3570
    ctx->pc = 0x21973cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13680));
label_219740:
    // 0x219740: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
label_219744:
    // 0x219744: 0xc09eb20  jal         func_27AC80
label_219748:
    if (ctx->pc == 0x219748u) {
        ctx->pc = 0x219748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219744u;
        // 0x219748: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21974Cu;
        goto label_21974c;
    }
    ctx->pc = 0x219744u;
    SET_GPR_U32(ctx, 31, 0x21974Cu);
    ctx->pc = 0x219748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219744u;
    // 0x219748: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219744u, 0x21974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21974Cu;
label_21974c:
    // 0x21974c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219750:
    // 0x219750: 0xc0d745c  jal         func_35D170
label_219754:
    if (ctx->pc == 0x219754u) {
        ctx->pc = 0x219754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219750u;
        // 0x219754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219758u;
        goto label_219758;
    }
    ctx->pc = 0x219750u;
    SET_GPR_U32(ctx, 31, 0x219758u);
    ctx->pc = 0x219754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219750u;
    // 0x219754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219750u, 0x219758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219758u;
label_219758:
    // 0x219758: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_21975c:
    // 0x21975c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219760:
    // 0x219760: 0xc0d756c  jal         func_35D5B0
label_219764:
    if (ctx->pc == 0x219764u) {
        ctx->pc = 0x219764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219760u;
        // 0x219764: 0x24a5ee68  addiu       $a1, $a1, -0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219768u;
        goto label_219768;
    }
    ctx->pc = 0x219760u;
    SET_GPR_U32(ctx, 31, 0x219768u);
    ctx->pc = 0x219764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219760u;
    // 0x219764: 0x24a5ee68  addiu       $a1, $a1, -0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219760u, 0x219768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219768u;
label_219768:
    // 0x219768: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
label_21976c:
    if (ctx->pc == 0x21976Cu) {
        ctx->pc = 0x21976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219768u;
        // 0x21976c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219770u;
        goto label_219770;
    }
    ctx->pc = 0x219768u;
    {
        const bool branch_taken_0x219768 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219768u;
        // 0x21976c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219768) {
            ctx->pc = 0x2197D8u;
            goto label_2197d8;
        }
    }
    ctx->pc = 0x219770u;
label_219770:
    // 0x219770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219774:
    // 0x219774: 0xc09dd98  jal         func_277660
label_219778:
    if (ctx->pc == 0x219778u) {
        ctx->pc = 0x219778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219774u;
        // 0x219778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21977Cu;
        goto label_21977c;
    }
    ctx->pc = 0x219774u;
    SET_GPR_U32(ctx, 31, 0x21977Cu);
    ctx->pc = 0x219778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219774u;
    // 0x219778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219774u, 0x21977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21977Cu;
label_21977c:
    // 0x21977c: 0x10000016  b           . + 4 + (0x16 << 2)
label_219780:
    if (ctx->pc == 0x219780u) {
        ctx->pc = 0x219780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21977Cu;
        // 0x219780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219784u;
        goto label_219784;
    }
    ctx->pc = 0x21977Cu;
    {
        const bool branch_taken_0x21977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21977Cu;
        // 0x219780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21977c) {
            ctx->pc = 0x2197D8u;
            goto label_2197d8;
        }
    }
    ctx->pc = 0x219784u;
label_219784:
    // 0x219784: 0x0  nop
    ctx->pc = 0x219784u;
    // NOP
label_219788:
    // 0x219788: 0xc08665e  jal         func_219978
label_21978c:
    if (ctx->pc == 0x21978Cu) {
        ctx->pc = 0x21978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219788u;
        // 0x21978c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219790u;
        goto label_219790;
    }
    ctx->pc = 0x219788u;
    SET_GPR_U32(ctx, 31, 0x219790u);
    ctx->pc = 0x21978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219788u;
    // 0x21978c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219978u, 0x219788u, 0x219790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219790u;
label_219790:
    // 0x219790: 0x1000000b  b           . + 4 + (0xB << 2)
label_219794:
    if (ctx->pc == 0x219794u) {
        ctx->pc = 0x219794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219790u;
        // 0x219794: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219798u;
        goto label_219798;
    }
    ctx->pc = 0x219790u;
    {
        const bool branch_taken_0x219790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219790u;
        // 0x219794: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219790) {
            ctx->pc = 0x2197C0u;
            goto label_2197c0;
        }
    }
    ctx->pc = 0x219798u;
label_219798:
    // 0x219798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21979c:
    // 0x21979c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2197a0:
    // 0x2197a0: 0x40f809  jalr        $v0
label_2197a4:
    if (ctx->pc == 0x2197A4u) {
        ctx->pc = 0x2197A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197A0u;
        // 0x2197a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197A8u;
        goto label_2197a8;
    }
    ctx->pc = 0x2197A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2197A8u);
        ctx->pc = 0x2197A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197A0u;
        // 0x2197a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2197A0u, 0x2197A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2197A8u;
label_2197a8:
    // 0x2197a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2197ac:
    if (ctx->pc == 0x2197ACu) {
        ctx->pc = 0x2197ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197A8u;
        // 0x2197ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197B0u;
        goto label_2197b0;
    }
    ctx->pc = 0x2197A8u;
    {
        const bool branch_taken_0x2197a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2197ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197A8u;
        // 0x2197ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197a8) {
            ctx->pc = 0x2197C4u;
            goto label_2197c4;
        }
    }
    ctx->pc = 0x2197B0u;
label_2197b0:
    // 0x2197b0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2197b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2197b4:
    // 0x2197b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2197b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2197b8:
    // 0x2197b8: 0xc0efefa  jal         func_3BFBE8
label_2197bc:
    if (ctx->pc == 0x2197BCu) {
        ctx->pc = 0x2197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197B8u;
        // 0x2197bc: 0x26251700  addiu       $a1, $s1, 0x1700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197C0u;
        goto label_2197c0;
    }
    ctx->pc = 0x2197B8u;
    SET_GPR_U32(ctx, 31, 0x2197C0u);
    ctx->pc = 0x2197BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197B8u;
    // 0x2197bc: 0x26251700  addiu       $a1, $s1, 0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2197B8u, 0x2197C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197C0u;
label_2197c0:
    // 0x2197c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2197c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2197c4:
    // 0x2197c4: 0xc09de68  jal         func_2779A0
label_2197c8:
    if (ctx->pc == 0x2197C8u) {
        ctx->pc = 0x2197C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C4u;
        // 0x2197c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197CCu;
        goto label_2197cc;
    }
    ctx->pc = 0x2197C4u;
    SET_GPR_U32(ctx, 31, 0x2197CCu);
    ctx->pc = 0x2197C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197C4u;
    // 0x2197c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2197C4u, 0x2197CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197CCu;
label_2197cc:
    // 0x2197cc: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2197d0:
    if (ctx->pc == 0x2197D0u) {
        ctx->pc = 0x2197D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197CCu;
        // 0x2197d0: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197D4u;
        goto label_2197d4;
    }
    ctx->pc = 0x2197CCu;
    {
        const bool branch_taken_0x2197cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2197cc) {
            ctx->pc = 0x2197D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2197CCu;
            // 0x2197d0: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219798;
        }
    }
    ctx->pc = 0x2197D4u;
label_2197d4:
    // 0x2197d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2197d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2197d8:
    // 0x2197d8: 0xc09de3a  jal         func_2778E8
label_2197dc:
    if (ctx->pc == 0x2197DCu) {
        ctx->pc = 0x2197DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197D8u;
        // 0x2197dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197E0u;
        goto label_2197e0;
    }
    ctx->pc = 0x2197D8u;
    SET_GPR_U32(ctx, 31, 0x2197E0u);
    ctx->pc = 0x2197DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197D8u;
    // 0x2197dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x2197D8u, 0x2197E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197E0u;
label_2197e0:
    // 0x2197e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2197e4:
    if (ctx->pc == 0x2197E4u) {
        ctx->pc = 0x2197E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E0u;
        // 0x2197e4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197E8u;
        goto label_2197e8;
    }
    ctx->pc = 0x2197E0u;
    {
        const bool branch_taken_0x2197e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2197E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E0u;
        // 0x2197e4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197e0) {
            ctx->pc = 0x219788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219788;
        }
    }
    ctx->pc = 0x2197E8u;
label_2197e8:
    // 0x2197e8: 0xc09ddec  jal         func_2777B0
label_2197ec:
    if (ctx->pc == 0x2197ECu) {
        ctx->pc = 0x2197ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E8u;
        // 0x2197ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197F0u;
        goto label_2197f0;
    }
    ctx->pc = 0x2197E8u;
    SET_GPR_U32(ctx, 31, 0x2197F0u);
    ctx->pc = 0x2197ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197E8u;
    // 0x2197ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x2197E8u, 0x2197F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197F0u;
label_2197f0:
    // 0x2197f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2197f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2197f4:
    // 0x2197f4: 0xc0d7412  jal         func_35D048
label_2197f8:
    if (ctx->pc == 0x2197F8u) {
        ctx->pc = 0x2197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197F4u;
        // 0x2197f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197FCu;
        goto label_2197fc;
    }
    ctx->pc = 0x2197F4u;
    SET_GPR_U32(ctx, 31, 0x2197FCu);
    ctx->pc = 0x2197F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197F4u;
    // 0x2197f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2197F4u, 0x2197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197FCu;
label_2197fc:
    // 0x2197fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2197fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219800:
    // 0x219800: 0xc0d7412  jal         func_35D048
label_219804:
    if (ctx->pc == 0x219804u) {
        ctx->pc = 0x219804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219800u;
        // 0x219804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219808u;
        goto label_219808;
    }
    ctx->pc = 0x219800u;
    SET_GPR_U32(ctx, 31, 0x219808u);
    ctx->pc = 0x219804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219800u;
    // 0x219804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219800u, 0x219808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219808u;
label_219808:
    // 0x219808: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21980c:
    // 0x21980c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x21980cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_219810:
    // 0x219810: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_219814:
    // 0x219814: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x219814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_219818:
    // 0x219818: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21981c:
    // 0x21981c: 0x3e00008  jr          $ra
label_219820:
    if (ctx->pc == 0x219820u) {
        ctx->pc = 0x219820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21981Cu;
        // 0x219820: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219824u;
        goto label_219824;
    }
    ctx->pc = 0x21981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21981Cu;
        // 0x219820: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219824u;
label_219824:
    // 0x219824: 0x0  nop
    ctx->pc = 0x219824u;
    // NOP
    ctx->pc = 0x219828u;
}
