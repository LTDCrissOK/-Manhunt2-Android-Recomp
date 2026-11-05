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

// Function: sub_00245750
// Address: 0x245750 - 0x245a90
void sub_00245750_0x245750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245750_0x245750");
#endif

    switch (ctx->pc) {
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457b4u: goto label_2457b4;
        case 0x2457b8u: goto label_2457b8;
        case 0x2457bcu: goto label_2457bc;
        case 0x2457c0u: goto label_2457c0;
        case 0x2457c4u: goto label_2457c4;
        case 0x2457c8u: goto label_2457c8;
        case 0x2457ccu: goto label_2457cc;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d4u: goto label_2457d4;
        case 0x2457d8u: goto label_2457d8;
        case 0x2457dcu: goto label_2457dc;
        case 0x2457e0u: goto label_2457e0;
        case 0x2457e4u: goto label_2457e4;
        case 0x2457e8u: goto label_2457e8;
        case 0x2457ecu: goto label_2457ec;
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        default: break;
    }

    ctx->pc = 0x245750u;

label_245750:
    // 0x245750: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x245750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_245754:
    // 0x245754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245758:
    // 0x245758: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x245758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_24575c:
    // 0x24575c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x24575cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_245760:
    // 0x245760: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x245760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_245764:
    // 0x245764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x245764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245768:
    // 0x245768: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x245768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_24576c:
    // 0x24576c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x24576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_245770:
    // 0x245770: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x245770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_245774:
    // 0x245774: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x245774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_245778:
    // 0x245778: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x245778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24577c:
    // 0x24577c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_245780:
    // 0x245780: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_245784:
    if (ctx->pc == 0x245784u) {
        ctx->pc = 0x245784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245780u;
        // 0x245784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245788u;
        goto label_245788;
    }
    ctx->pc = 0x245780u;
    {
        const bool branch_taken_0x245780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x245784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245780u;
        // 0x245784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245780) {
            ctx->pc = 0x245798u;
            goto label_245798;
        }
    }
    ctx->pc = 0x245788u;
label_245788:
    // 0x245788: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x245788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_24578c:
    // 0x24578c: 0x2862041d  slti        $v0, $v1, 0x41D
    ctx->pc = 0x24578cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1053) ? 1 : 0);
label_245790:
    // 0x245790: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_245794:
    if (ctx->pc == 0x245794u) {
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0x2864043e  slti        $a0, $v1, 0x43E (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1086) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245798u;
        goto label_245798;
    }
    ctx->pc = 0x245790u;
    {
        const bool branch_taken_0x245790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245790) {
            ctx->pc = 0x245794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245790u;
            // 0x245794: 0x2864043e  slti        $a0, $v1, 0x43E (Delay Slot)
            SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1086) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x245798u;
            goto label_245798;
        }
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0x4982b  sltu        $s3, $zero, $a0
    ctx->pc = 0x245798u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24579c:
    // 0x24579c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24579cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2457a0:
    // 0x2457a0: 0xc0f7d10  jal         func_3DF440
label_2457a4:
    if (ctx->pc == 0x2457A4u) {
        ctx->pc = 0x2457A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457A0u;
        // 0x2457a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457A8u;
        goto label_2457a8;
    }
    ctx->pc = 0x2457A0u;
    SET_GPR_U32(ctx, 31, 0x2457A8u);
    ctx->pc = 0x2457A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457A0u;
    // 0x2457a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x2457A0u, 0x2457A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457A8u;
label_2457a8:
    // 0x2457a8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2457ac:
    if (ctx->pc == 0x2457ACu) {
        ctx->pc = 0x2457ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457A8u;
        // 0x2457ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457B0u;
        goto label_2457b0;
    }
    ctx->pc = 0x2457A8u;
    {
        const bool branch_taken_0x2457a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2457a8) {
            ctx->pc = 0x2457ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457A8u;
            // 0x2457ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2457E0u;
            goto label_2457e0;
        }
    }
    ctx->pc = 0x2457B0u;
label_2457b0:
    // 0x2457b0: 0xc0f7d1a  jal         func_3DF468
label_2457b4:
    if (ctx->pc == 0x2457B4u) {
        ctx->pc = 0x2457B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B0u;
        // 0x2457b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457B8u;
        goto label_2457b8;
    }
    ctx->pc = 0x2457B0u;
    SET_GPR_U32(ctx, 31, 0x2457B8u);
    ctx->pc = 0x2457B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457B0u;
    // 0x2457b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x2457B0u, 0x2457B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457B8u;
label_2457b8:
    // 0x2457b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2457bc:
    if (ctx->pc == 0x2457BCu) {
        ctx->pc = 0x2457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B8u;
        // 0x2457bc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457C0u;
        goto label_2457c0;
    }
    ctx->pc = 0x2457B8u;
    {
        const bool branch_taken_0x2457b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2457b8) {
            ctx->pc = 0x2457BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457B8u;
            // 0x2457bc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2457E0u;
            goto label_2457e0;
        }
    }
    ctx->pc = 0x2457C0u;
label_2457c0:
    // 0x2457c0: 0xc0f7d24  jal         func_3DF490
label_2457c4:
    if (ctx->pc == 0x2457C4u) {
        ctx->pc = 0x2457C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C0u;
        // 0x2457c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457C8u;
        goto label_2457c8;
    }
    ctx->pc = 0x2457C0u;
    SET_GPR_U32(ctx, 31, 0x2457C8u);
    ctx->pc = 0x2457C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457C0u;
    // 0x2457c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x2457C0u, 0x2457C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457C8u;
label_2457c8:
    // 0x2457c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2457cc:
    if (ctx->pc == 0x2457CCu) {
        ctx->pc = 0x2457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C8u;
        // 0x2457cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457D0u;
        goto label_2457d0;
    }
    ctx->pc = 0x2457C8u;
    {
        const bool branch_taken_0x2457c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2457c8) {
            ctx->pc = 0x2457CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457C8u;
            // 0x2457cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2457E0u;
            goto label_2457e0;
        }
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0xc0f7d32  jal         func_3DF4C8
label_2457d4:
    if (ctx->pc == 0x2457D4u) {
        ctx->pc = 0x2457D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457D0u;
        // 0x2457d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457D8u;
        goto label_2457d8;
    }
    ctx->pc = 0x2457D0u;
    SET_GPR_U32(ctx, 31, 0x2457D8u);
    ctx->pc = 0x2457D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457D0u;
    // 0x2457d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x2457D0u, 0x2457D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457D8u;
label_2457d8:
    // 0x2457d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2457dc:
    if (ctx->pc == 0x2457DCu) {
        ctx->pc = 0x2457DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457D8u;
        // 0x2457dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457E0u;
        goto label_2457e0;
    }
    ctx->pc = 0x2457D8u;
    {
        const bool branch_taken_0x2457d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2457d8) {
            ctx->pc = 0x2457DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457D8u;
            // 0x2457dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2457E0u;
            goto label_2457e0;
        }
    }
    ctx->pc = 0x2457E0u;
label_2457e0:
    // 0x2457e0: 0x52400044  beql        $s2, $zero, . + 4 + (0x44 << 2)
label_2457e4:
    if (ctx->pc == 0x2457E4u) {
        ctx->pc = 0x2457E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457E0u;
        // 0x2457e4: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457E8u;
        goto label_2457e8;
    }
    ctx->pc = 0x2457E0u;
    {
        const bool branch_taken_0x2457e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2457e0) {
            ctx->pc = 0x2457E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2457E0u;
            // 0x2457e4: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2458F4u;
            goto label_2458f4;
        }
    }
    ctx->pc = 0x2457E8u;
label_2457e8:
    // 0x2457e8: 0xc0899bc  jal         func_2266F0
label_2457ec:
    if (ctx->pc == 0x2457ECu) {
        ctx->pc = 0x2457ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457E8u;
        // 0x2457ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457F0u;
        goto label_2457f0;
    }
    ctx->pc = 0x2457E8u;
    SET_GPR_U32(ctx, 31, 0x2457F0u);
    ctx->pc = 0x2457ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457E8u;
    // 0x2457ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2457E8u, 0x2457F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457F0u;
label_2457f0:
    // 0x2457f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2457f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2457f4:
    // 0x2457f4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2457f8:
    if (ctx->pc == 0x2457F8u) {
        ctx->pc = 0x2457FCu;
        goto label_2457fc;
    }
    ctx->pc = 0x2457F4u;
    {
        const bool branch_taken_0x2457f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2457f4) {
            ctx->pc = 0x245834u;
            goto label_245834;
        }
    }
    ctx->pc = 0x2457FCu;
label_2457fc:
    // 0x2457fc: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2457fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_245800:
    // 0x245800: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x245800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_245804:
    // 0x245804: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_245808:
    if (ctx->pc == 0x245808u) {
        ctx->pc = 0x24580Cu;
        goto label_24580c;
    }
    ctx->pc = 0x245804u;
    {
        const bool branch_taken_0x245804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245804) {
            ctx->pc = 0x245834u;
            goto label_245834;
        }
    }
    ctx->pc = 0x24580Cu;
label_24580c:
    // 0x24580c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x24580cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_245810:
    // 0x245810: 0xc098fae  jal         func_263EB8
label_245814:
    if (ctx->pc == 0x245814u) {
        ctx->pc = 0x245814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245810u;
        // 0x245814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245818u;
        goto label_245818;
    }
    ctx->pc = 0x245810u;
    SET_GPR_U32(ctx, 31, 0x245818u);
    ctx->pc = 0x245814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245810u;
    // 0x245814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x245810u, 0x245818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245818u;
label_245818:
    // 0x245818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24581c:
    if (ctx->pc == 0x24581Cu) {
        ctx->pc = 0x24581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245818u;
        // 0x24581c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245820u;
        goto label_245820;
    }
    ctx->pc = 0x245818u;
    {
        const bool branch_taken_0x245818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245818u;
        // 0x24581c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245818) {
            ctx->pc = 0x245834u;
            goto label_245834;
        }
    }
    ctx->pc = 0x245820u;
label_245820:
    // 0x245820: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x245820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_245824:
    // 0x245824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245828:
    // 0x245828: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_24582c:
    // 0x24582c: 0x40f809  jalr        $v0
label_245830:
    if (ctx->pc == 0x245830u) {
        ctx->pc = 0x245830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24582Cu;
        // 0x245830: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245834u;
        goto label_245834;
    }
    ctx->pc = 0x24582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245834u);
        ctx->pc = 0x245830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24582Cu;
        // 0x245830: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24582Cu, 0x245834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245834u;
label_245834:
    // 0x245834: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_245838:
    if (ctx->pc == 0x245838u) {
        ctx->pc = 0x245838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245834u;
        // 0x245838: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24583Cu;
        goto label_24583c;
    }
    ctx->pc = 0x245834u;
    {
        const bool branch_taken_0x245834 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x245838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245834u;
        // 0x245838: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245834) {
            ctx->pc = 0x24586Cu;
            goto label_24586c;
        }
    }
    ctx->pc = 0x24583Cu;
label_24583c:
    // 0x24583c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245840:
    // 0x245840: 0xc069b78  jal         func_1A6DE0
label_245844:
    if (ctx->pc == 0x245844u) {
        ctx->pc = 0x245844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245840u;
        // 0x245844: 0x24a5023c  addiu       $a1, $a1, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 572));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245848u;
        goto label_245848;
    }
    ctx->pc = 0x245840u;
    SET_GPR_U32(ctx, 31, 0x245848u);
    ctx->pc = 0x245844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245840u;
    // 0x245844: 0x24a5023c  addiu       $a1, $a1, 0x23C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x245840u, 0x245848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245848u;
label_245848:
    // 0x245848: 0xc06a328  jal         func_1A8CA0
label_24584c:
    if (ctx->pc == 0x24584Cu) {
        ctx->pc = 0x24584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245848u;
        // 0x24584c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245850u;
        goto label_245850;
    }
    ctx->pc = 0x245848u;
    SET_GPR_U32(ctx, 31, 0x245850u);
    ctx->pc = 0x24584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245848u;
    // 0x24584c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x245848u, 0x245850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245850u;
label_245850:
    // 0x245850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245854:
    // 0x245854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245858:
    // 0x245858: 0xae220190  sw          $v0, 0x190($s1)
    ctx->pc = 0x245858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
label_24585c:
    // 0x24585c: 0xc06a23e  jal         func_1A88F8
label_245860:
    if (ctx->pc == 0x245860u) {
        ctx->pc = 0x245860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24585Cu;
        // 0x245860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245864u;
        goto label_245864;
    }
    ctx->pc = 0x24585Cu;
    SET_GPR_U32(ctx, 31, 0x245864u);
    ctx->pc = 0x245860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24585Cu;
    // 0x245860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24585Cu, 0x245864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245864u;
label_245864:
    // 0x245864: 0x10000029  b           . + 4 + (0x29 << 2)
label_245868:
    if (ctx->pc == 0x245868u) {
        ctx->pc = 0x245868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245864u;
        // 0x245868: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24586Cu;
        goto label_24586c;
    }
    ctx->pc = 0x245864u;
    {
        const bool branch_taken_0x245864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245864u;
        // 0x245868: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245864) {
            ctx->pc = 0x24590Cu;
            goto label_24590c;
        }
    }
    ctx->pc = 0x24586Cu;
label_24586c:
    // 0x24586c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245870:
    // 0x245870: 0xae000430  sw          $zero, 0x430($s0)
    ctx->pc = 0x245870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
label_245874:
    // 0x245874: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245878:
    // 0x245878: 0xc069b78  jal         func_1A6DE0
label_24587c:
    if (ctx->pc == 0x24587Cu) {
        ctx->pc = 0x24587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245878u;
        // 0x24587c: 0x24a50241  addiu       $a1, $a1, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 577));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245880u;
        goto label_245880;
    }
    ctx->pc = 0x245878u;
    SET_GPR_U32(ctx, 31, 0x245880u);
    ctx->pc = 0x24587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245878u;
    // 0x24587c: 0x24a50241  addiu       $a1, $a1, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x245878u, 0x245880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245880u;
label_245880:
    // 0x245880: 0xc06a328  jal         func_1A8CA0
label_245884:
    if (ctx->pc == 0x245884u) {
        ctx->pc = 0x245884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245880u;
        // 0x245884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245888u;
        goto label_245888;
    }
    ctx->pc = 0x245880u;
    SET_GPR_U32(ctx, 31, 0x245888u);
    ctx->pc = 0x245884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245880u;
    // 0x245884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x245880u, 0x245888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245888u;
label_245888:
    // 0x245888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24588c:
    // 0x24588c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245890:
    // 0x245890: 0xae220190  sw          $v0, 0x190($s1)
    ctx->pc = 0x245890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
label_245894:
    // 0x245894: 0xc06a23e  jal         func_1A88F8
label_245898:
    if (ctx->pc == 0x245898u) {
        ctx->pc = 0x245898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245894u;
        // 0x245898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24589Cu;
        goto label_24589c;
    }
    ctx->pc = 0x245894u;
    SET_GPR_U32(ctx, 31, 0x24589Cu);
    ctx->pc = 0x245898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245894u;
    // 0x245898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x245894u, 0x24589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24589Cu;
label_24589c:
    // 0x24589c: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x24589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_2458a0:
    // 0x2458a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2458a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2458a4:
    // 0x2458a4: 0xc62001d0  lwc1        $f0, 0x1D0($s1)
    ctx->pc = 0x2458a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2458a8:
    // 0x2458a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2458a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2458ac:
    // 0x2458ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2458acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2458b0:
    // 0x2458b0: 0xa22201a4  sb          $v0, 0x1A4($s1)
    ctx->pc = 0x2458b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 420), (uint8_t)GPR_U32(ctx, 2));
label_2458b4:
    // 0x2458b4: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x2458b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2458b8:
    // 0x2458b8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2458b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2458bc:
    // 0x2458bc: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2458bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2458c0:
    // 0x2458c0: 0x40f809  jalr        $v0
label_2458c4:
    if (ctx->pc == 0x2458C4u) {
        ctx->pc = 0x2458C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458C0u;
        // 0x2458c4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458C8u;
        goto label_2458c8;
    }
    ctx->pc = 0x2458C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2458C8u);
        ctx->pc = 0x2458C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458C0u;
        // 0x2458c4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458C0u, 0x2458C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2458C8u;
label_2458c8:
    // 0x2458c8: 0xc08e61a  jal         func_239868
label_2458cc:
    if (ctx->pc == 0x2458CCu) {
        ctx->pc = 0x2458CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458C8u;
        // 0x2458cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458D0u;
        goto label_2458d0;
    }
    ctx->pc = 0x2458C8u;
    SET_GPR_U32(ctx, 31, 0x2458D0u);
    ctx->pc = 0x2458CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2458C8u;
    // 0x2458cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x2458C8u, 0x2458D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458D0u;
label_2458d0:
    // 0x2458d0: 0xc60104a0  lwc1        $f1, 0x4A0($s0)
    ctx->pc = 0x2458d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2458d4:
    // 0x2458d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2458d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2458d8:
    // 0x2458d8: 0xc60004ac  lwc1        $f0, 0x4AC($s0)
    ctx->pc = 0x2458d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2458dc:
    // 0x2458dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2458dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2458e0:
    // 0x2458e0: 0xe60104a4  swc1        $f1, 0x4A4($s0)
    ctx->pc = 0x2458e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1188), bits); }
label_2458e4:
    // 0x2458e4: 0xc08e966  jal         func_23A598
label_2458e8:
    if (ctx->pc == 0x2458E8u) {
        ctx->pc = 0x2458E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E4u;
        // 0x2458e8: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458ECu;
        goto label_2458ec;
    }
    ctx->pc = 0x2458E4u;
    SET_GPR_U32(ctx, 31, 0x2458ECu);
    ctx->pc = 0x2458E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2458E4u;
    // 0x2458e8: 0xe60004b0  swc1        $f0, 0x4B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A598u, 0x2458E4u, 0x2458ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458ECu;
label_2458ec:
    // 0x2458ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2458f0:
    if (ctx->pc == 0x2458F0u) {
        ctx->pc = 0x2458F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458ECu;
        // 0x2458f0: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458F4u;
        goto label_2458f4;
    }
    ctx->pc = 0x2458ECu;
    {
        const bool branch_taken_0x2458ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458ECu;
        // 0x2458f0: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458ec) {
            ctx->pc = 0x24590Cu;
            goto label_24590c;
        }
    }
    ctx->pc = 0x2458F4u;
label_2458f4:
    // 0x2458f4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2458f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2458f8:
    // 0x2458f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2458fc:
    if (ctx->pc == 0x2458FCu) {
        ctx->pc = 0x2458FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458F8u;
        // 0x2458fc: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245900u;
        goto label_245900;
    }
    ctx->pc = 0x2458F8u;
    {
        const bool branch_taken_0x2458f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458f8) {
            ctx->pc = 0x2458FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2458F8u;
            // 0x2458fc: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24590Cu;
            goto label_24590c;
        }
    }
    ctx->pc = 0x245900u;
label_245900:
    // 0x245900: 0xc08dbbc  jal         func_236EF0
label_245904:
    if (ctx->pc == 0x245904u) {
        ctx->pc = 0x245904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245900u;
        // 0x245904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245908u;
        goto label_245908;
    }
    ctx->pc = 0x245900u;
    SET_GPR_U32(ctx, 31, 0x245908u);
    ctx->pc = 0x245904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245900u;
    // 0x245904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EF0u, 0x245900u, 0x245908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245908u;
label_245908:
    // 0x245908: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x245908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_24590c:
    // 0x24590c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x24590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_245910:
    // 0x245910: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_245914:
    if (ctx->pc == 0x245914u) {
        ctx->pc = 0x245914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245910u;
        // 0x245914: 0x8e03010c  lw          $v1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245918u;
        goto label_245918;
    }
    ctx->pc = 0x245910u;
    {
        const bool branch_taken_0x245910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x245914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245910u;
        // 0x245914: 0x8e03010c  lw          $v1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245910) {
            ctx->pc = 0x245944u;
            goto label_245944;
        }
    }
    ctx->pc = 0x245918u;
label_245918:
    // 0x245918: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_24591c:
    // 0x24591c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_245920:
    if (ctx->pc == 0x245920u) {
        ctx->pc = 0x245920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24591Cu;
        // 0x245920: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245924u;
        goto label_245924;
    }
    ctx->pc = 0x24591Cu;
    {
        const bool branch_taken_0x24591c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x245920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24591Cu;
        // 0x245920: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24591c) {
            ctx->pc = 0x24592Cu;
            goto label_24592c;
        }
    }
    ctx->pc = 0x245924u;
label_245924:
    // 0x245924: 0x54820053  bnel        $a0, $v0, . + 4 + (0x53 << 2)
label_245928:
    if (ctx->pc == 0x245928u) {
        ctx->pc = 0x245928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245924u;
        // 0x245928: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24592Cu;
        goto label_24592c;
    }
    ctx->pc = 0x245924u;
    {
        const bool branch_taken_0x245924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x245924) {
            ctx->pc = 0x245928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245924u;
            // 0x245928: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245A74u;
            goto label_245a74;
        }
    }
    ctx->pc = 0x24592Cu;
label_24592c:
    // 0x24592c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x24592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_245930:
    // 0x245930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_245934:
    if (ctx->pc == 0x245934u) {
        ctx->pc = 0x245934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245930u;
        // 0x245934: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245938u;
        goto label_245938;
    }
    ctx->pc = 0x245930u;
    {
        const bool branch_taken_0x245930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245930) {
            ctx->pc = 0x245934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245930u;
            // 0x245934: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245948u;
            goto label_245948;
        }
    }
    ctx->pc = 0x245938u;
label_245938:
    // 0x245938: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x245938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_24593c:
    // 0x24593c: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
label_245940:
    if (ctx->pc == 0x245940u) {
        ctx->pc = 0x245940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24593Cu;
        // 0x245940: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245944u;
        goto label_245944;
    }
    ctx->pc = 0x24593Cu;
    {
        const bool branch_taken_0x24593c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24593c) {
            ctx->pc = 0x245940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24593Cu;
            // 0x245940: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245A74u;
            goto label_245a74;
        }
    }
    ctx->pc = 0x245944u;
label_245944:
    // 0x245944: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_245948:
    // 0x245948: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x245948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_24594c:
    // 0x24594c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_245950:
    if (ctx->pc == 0x245950u) {
        ctx->pc = 0x245954u;
        goto label_245954;
    }
    ctx->pc = 0x24594Cu;
    {
        const bool branch_taken_0x24594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24594c) {
            ctx->pc = 0x2459C4u;
            goto label_2459c4;
        }
    }
    ctx->pc = 0x245954u;
label_245954:
    // 0x245954: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_245958:
    // 0x245958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24595c:
    // 0x24595c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_245960:
    if (ctx->pc == 0x245960u) {
        ctx->pc = 0x245960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24595Cu;
        // 0x245960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245964u;
        goto label_245964;
    }
    ctx->pc = 0x24595Cu;
    {
        const bool branch_taken_0x24595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24595Cu;
        // 0x245960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24595c) {
            ctx->pc = 0x2459C4u;
            goto label_2459c4;
        }
    }
    ctx->pc = 0x245964u;
label_245964:
    // 0x245964: 0xc08e3b2  jal         func_238EC8
label_245968:
    if (ctx->pc == 0x245968u) {
        ctx->pc = 0x245968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245964u;
        // 0x245968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24596Cu;
        goto label_24596c;
    }
    ctx->pc = 0x245964u;
    SET_GPR_U32(ctx, 31, 0x24596Cu);
    ctx->pc = 0x245968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245964u;
    // 0x245968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x245964u, 0x24596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24596Cu;
label_24596c:
    // 0x24596c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_245970:
    // 0x245970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245974:
    // 0x245974: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x245974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_245978:
    // 0x245978: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x245978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_24597c:
    // 0x24597c: 0xc0757d2  jal         func_1D5F48
label_245980:
    if (ctx->pc == 0x245980u) {
        ctx->pc = 0x245980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24597Cu;
        // 0x245980: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245984u;
        goto label_245984;
    }
    ctx->pc = 0x24597Cu;
    SET_GPR_U32(ctx, 31, 0x245984u);
    ctx->pc = 0x245980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24597Cu;
    // 0x245980: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x24597Cu, 0x245984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245984u;
label_245984:
    // 0x245984: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_245988:
    // 0x245988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24598c:
    // 0x24598c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_245990:
    // 0x245990: 0x60f809  jalr        $v1
label_245994:
    if (ctx->pc == 0x245994u) {
        ctx->pc = 0x245994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245990u;
        // 0x245994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245998u;
        goto label_245998;
    }
    ctx->pc = 0x245990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245998u);
        ctx->pc = 0x245994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245990u;
        // 0x245994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245990u, 0x245998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245998u;
label_245998:
    // 0x245998: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_24599c:
    // 0x24599c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x24599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2459a0:
    // 0x2459a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2459a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2459a4:
    // 0x2459a4: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_2459a8:
    if (ctx->pc == 0x2459A8u) {
        ctx->pc = 0x2459A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459A4u;
        // 0x2459a8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459ACu;
        goto label_2459ac;
    }
    ctx->pc = 0x2459A4u;
    {
        const bool branch_taken_0x2459a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2459A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459A4u;
        // 0x2459a8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459a4) {
            ctx->pc = 0x2459C4u;
            goto label_2459c4;
        }
    }
    ctx->pc = 0x2459ACu;
label_2459ac:
    // 0x2459ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2459acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2459b0:
    // 0x2459b0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2459b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_2459b4:
    // 0x2459b4: 0xc08fed2  jal         func_23FB48
label_2459b8:
    if (ctx->pc == 0x2459B8u) {
        ctx->pc = 0x2459B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459B4u;
        // 0x2459b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459BCu;
        goto label_2459bc;
    }
    ctx->pc = 0x2459B4u;
    SET_GPR_U32(ctx, 31, 0x2459BCu);
    ctx->pc = 0x2459B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459B4u;
    // 0x2459b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2459B4u, 0x2459BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459BCu;
label_2459bc:
    // 0x2459bc: 0xc08f7d0  jal         func_23DF40
label_2459c0:
    if (ctx->pc == 0x2459C0u) {
        ctx->pc = 0x2459C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459BCu;
        // 0x2459c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459C4u;
        goto label_2459c4;
    }
    ctx->pc = 0x2459BCu;
    SET_GPR_U32(ctx, 31, 0x2459C4u);
    ctx->pc = 0x2459C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459BCu;
    // 0x2459c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DF40u, 0x2459BCu, 0x2459C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459C4u;
label_2459c4:
    // 0x2459c4: 0xc07a8b2  jal         func_1EA2C8
label_2459c8:
    if (ctx->pc == 0x2459C8u) {
        ctx->pc = 0x2459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459C4u;
        // 0x2459c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459CCu;
        goto label_2459cc;
    }
    ctx->pc = 0x2459C4u;
    SET_GPR_U32(ctx, 31, 0x2459CCu);
    ctx->pc = 0x2459C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459C4u;
    // 0x2459c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2459C4u, 0x2459CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459CCu;
label_2459cc:
    // 0x2459cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2459ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2459d0:
    // 0x2459d0: 0xc08f808  jal         func_23E020
label_2459d4:
    if (ctx->pc == 0x2459D4u) {
        ctx->pc = 0x2459D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D0u;
        // 0x2459d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459D8u;
        goto label_2459d8;
    }
    ctx->pc = 0x2459D0u;
    SET_GPR_U32(ctx, 31, 0x2459D8u);
    ctx->pc = 0x2459D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459D0u;
    // 0x2459d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E020u, 0x2459D0u, 0x2459D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459D8u;
label_2459d8:
    // 0x2459d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2459dc:
    if (ctx->pc == 0x2459DCu) {
        ctx->pc = 0x2459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D8u;
        // 0x2459dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459E0u;
        goto label_2459e0;
    }
    ctx->pc = 0x2459D8u;
    {
        const bool branch_taken_0x2459d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D8u;
        // 0x2459dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459d8) {
            ctx->pc = 0x2459E8u;
            goto label_2459e8;
        }
    }
    ctx->pc = 0x2459E0u;
label_2459e0:
    // 0x2459e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2459e4:
    if (ctx->pc == 0x2459E4u) {
        ctx->pc = 0x2459E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459E0u;
        // 0x2459e4: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2459E8u;
        goto label_2459e8;
    }
    ctx->pc = 0x2459E0u;
    {
        const bool branch_taken_0x2459e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459E0u;
        // 0x2459e4: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459e0) {
            ctx->pc = 0x2459ECu;
            goto label_2459ec;
        }
    }
    ctx->pc = 0x2459E8u;
label_2459e8:
    // 0x2459e8: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x2459e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_2459ec:
    // 0x2459ec: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2459ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2459f0:
    // 0x2459f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2459f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2459f4:
    // 0x2459f4: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x2459f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_2459f8:
    // 0x2459f8: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2459f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_2459fc:
    // 0x2459fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2459fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_245a00:
    // 0x245a00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_245a04:
    if (ctx->pc == 0x245A04u) {
        ctx->pc = 0x245A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A00u;
        // 0x245a04: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A08u;
        goto label_245a08;
    }
    ctx->pc = 0x245A00u;
    {
        const bool branch_taken_0x245a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245a00) {
            ctx->pc = 0x245A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245A00u;
            // 0x245a04: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245A1Cu;
            goto label_245a1c;
        }
    }
    ctx->pc = 0x245A08u;
label_245a08:
    // 0x245a08: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x245a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_245a0c:
    // 0x245a0c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x245a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_245a10:
    // 0x245a10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_245a14:
    // 0x245a14: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x245a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_245a18:
    // 0x245a18: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_245a1c:
    // 0x245a1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_245a20:
    // 0x245a20: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x245a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_245a24:
    // 0x245a24: 0x40f809  jalr        $v0
label_245a28:
    if (ctx->pc == 0x245A28u) {
        ctx->pc = 0x245A2Cu;
        goto label_245a2c;
    }
    ctx->pc = 0x245A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245A2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245A24u, 0x245A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245A2Cu;
label_245a2c:
    // 0x245a2c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x245a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_245a30:
    // 0x245a30: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x245a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_245a34:
    // 0x245a34: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x245a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_245a38:
    // 0x245a38: 0x40f809  jalr        $v0
label_245a3c:
    if (ctx->pc == 0x245A3Cu) {
        ctx->pc = 0x245A40u;
        goto label_245a40;
    }
    ctx->pc = 0x245A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245A40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245A38u, 0x245A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245A40u;
label_245a40:
    // 0x245a40: 0xc08e528  jal         func_2394A0
label_245a44:
    if (ctx->pc == 0x245A44u) {
        ctx->pc = 0x245A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A40u;
        // 0x245a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A48u;
        goto label_245a48;
    }
    ctx->pc = 0x245A40u;
    SET_GPR_U32(ctx, 31, 0x245A48u);
    ctx->pc = 0x245A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A40u;
    // 0x245a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x245A40u, 0x245A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A48u;
label_245a48:
    // 0x245a48: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x245a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_245a4c:
    // 0x245a4c: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x245a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_245a50:
    // 0x245a50: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_245a54:
    // 0x245a54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_245a58:
    // 0x245a58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_245a5c:
    if (ctx->pc == 0x245A5Cu) {
        ctx->pc = 0x245A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A58u;
        // 0x245a5c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A60u;
        goto label_245a60;
    }
    ctx->pc = 0x245A58u;
    {
        const bool branch_taken_0x245a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245a58) {
            ctx->pc = 0x245A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245A58u;
            // 0x245a5c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245A74u;
            goto label_245a74;
        }
    }
    ctx->pc = 0x245A60u;
label_245a60:
    // 0x245a60: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_245a64:
    // 0x245a64: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x245a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_245a68:
    // 0x245a68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x245a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_245a6c:
    // 0x245a6c: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x245a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_245a70:
    // 0x245a70: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x245a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245a74:
    // 0x245a74: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x245a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_245a78:
    // 0x245a78: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x245a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245a7c:
    // 0x245a7c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x245a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_245a80:
    // 0x245a80: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_245a84:
    // 0x245a84: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_245a88:
    // 0x245a88: 0x3e00008  jr          $ra
label_245a8c:
    if (ctx->pc == 0x245A8Cu) {
        ctx->pc = 0x245A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A88u;
        // 0x245a8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245A90u;
        goto label_fallthrough_0x245a88;
    }
    ctx->pc = 0x245A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A88u;
        // 0x245a8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245a88:
    ctx->pc = 0x245A90u;
}
