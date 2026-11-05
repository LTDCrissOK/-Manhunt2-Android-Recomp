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

// Function: sub_00138768
// Address: 0x138768 - 0x138b38
void sub_00138768_0x138768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138768_0x138768");
#endif

    switch (ctx->pc) {
        case 0x138768u: goto label_138768;
        case 0x13876cu: goto label_13876c;
        case 0x138770u: goto label_138770;
        case 0x138774u: goto label_138774;
        case 0x138778u: goto label_138778;
        case 0x13877cu: goto label_13877c;
        case 0x138780u: goto label_138780;
        case 0x138784u: goto label_138784;
        case 0x138788u: goto label_138788;
        case 0x13878cu: goto label_13878c;
        case 0x138790u: goto label_138790;
        case 0x138794u: goto label_138794;
        case 0x138798u: goto label_138798;
        case 0x13879cu: goto label_13879c;
        case 0x1387a0u: goto label_1387a0;
        case 0x1387a4u: goto label_1387a4;
        case 0x1387a8u: goto label_1387a8;
        case 0x1387acu: goto label_1387ac;
        case 0x1387b0u: goto label_1387b0;
        case 0x1387b4u: goto label_1387b4;
        case 0x1387b8u: goto label_1387b8;
        case 0x1387bcu: goto label_1387bc;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387c4u: goto label_1387c4;
        case 0x1387c8u: goto label_1387c8;
        case 0x1387ccu: goto label_1387cc;
        case 0x1387d0u: goto label_1387d0;
        case 0x1387d4u: goto label_1387d4;
        case 0x1387d8u: goto label_1387d8;
        case 0x1387dcu: goto label_1387dc;
        case 0x1387e0u: goto label_1387e0;
        case 0x1387e4u: goto label_1387e4;
        case 0x1387e8u: goto label_1387e8;
        case 0x1387ecu: goto label_1387ec;
        case 0x1387f0u: goto label_1387f0;
        case 0x1387f4u: goto label_1387f4;
        case 0x1387f8u: goto label_1387f8;
        case 0x1387fcu: goto label_1387fc;
        case 0x138800u: goto label_138800;
        case 0x138804u: goto label_138804;
        case 0x138808u: goto label_138808;
        case 0x13880cu: goto label_13880c;
        case 0x138810u: goto label_138810;
        case 0x138814u: goto label_138814;
        case 0x138818u: goto label_138818;
        case 0x13881cu: goto label_13881c;
        case 0x138820u: goto label_138820;
        case 0x138824u: goto label_138824;
        case 0x138828u: goto label_138828;
        case 0x13882cu: goto label_13882c;
        case 0x138830u: goto label_138830;
        case 0x138834u: goto label_138834;
        case 0x138838u: goto label_138838;
        case 0x13883cu: goto label_13883c;
        case 0x138840u: goto label_138840;
        case 0x138844u: goto label_138844;
        case 0x138848u: goto label_138848;
        case 0x13884cu: goto label_13884c;
        case 0x138850u: goto label_138850;
        case 0x138854u: goto label_138854;
        case 0x138858u: goto label_138858;
        case 0x13885cu: goto label_13885c;
        case 0x138860u: goto label_138860;
        case 0x138864u: goto label_138864;
        case 0x138868u: goto label_138868;
        case 0x13886cu: goto label_13886c;
        case 0x138870u: goto label_138870;
        case 0x138874u: goto label_138874;
        case 0x138878u: goto label_138878;
        case 0x13887cu: goto label_13887c;
        case 0x138880u: goto label_138880;
        case 0x138884u: goto label_138884;
        case 0x138888u: goto label_138888;
        case 0x13888cu: goto label_13888c;
        case 0x138890u: goto label_138890;
        case 0x138894u: goto label_138894;
        case 0x138898u: goto label_138898;
        case 0x13889cu: goto label_13889c;
        case 0x1388a0u: goto label_1388a0;
        case 0x1388a4u: goto label_1388a4;
        case 0x1388a8u: goto label_1388a8;
        case 0x1388acu: goto label_1388ac;
        case 0x1388b0u: goto label_1388b0;
        case 0x1388b4u: goto label_1388b4;
        case 0x1388b8u: goto label_1388b8;
        case 0x1388bcu: goto label_1388bc;
        case 0x1388c0u: goto label_1388c0;
        case 0x1388c4u: goto label_1388c4;
        case 0x1388c8u: goto label_1388c8;
        case 0x1388ccu: goto label_1388cc;
        case 0x1388d0u: goto label_1388d0;
        case 0x1388d4u: goto label_1388d4;
        case 0x1388d8u: goto label_1388d8;
        case 0x1388dcu: goto label_1388dc;
        case 0x1388e0u: goto label_1388e0;
        case 0x1388e4u: goto label_1388e4;
        case 0x1388e8u: goto label_1388e8;
        case 0x1388ecu: goto label_1388ec;
        case 0x1388f0u: goto label_1388f0;
        case 0x1388f4u: goto label_1388f4;
        case 0x1388f8u: goto label_1388f8;
        case 0x1388fcu: goto label_1388fc;
        case 0x138900u: goto label_138900;
        case 0x138904u: goto label_138904;
        case 0x138908u: goto label_138908;
        case 0x13890cu: goto label_13890c;
        case 0x138910u: goto label_138910;
        case 0x138914u: goto label_138914;
        case 0x138918u: goto label_138918;
        case 0x13891cu: goto label_13891c;
        case 0x138920u: goto label_138920;
        case 0x138924u: goto label_138924;
        case 0x138928u: goto label_138928;
        case 0x13892cu: goto label_13892c;
        case 0x138930u: goto label_138930;
        case 0x138934u: goto label_138934;
        case 0x138938u: goto label_138938;
        case 0x13893cu: goto label_13893c;
        case 0x138940u: goto label_138940;
        case 0x138944u: goto label_138944;
        case 0x138948u: goto label_138948;
        case 0x13894cu: goto label_13894c;
        case 0x138950u: goto label_138950;
        case 0x138954u: goto label_138954;
        case 0x138958u: goto label_138958;
        case 0x13895cu: goto label_13895c;
        case 0x138960u: goto label_138960;
        case 0x138964u: goto label_138964;
        case 0x138968u: goto label_138968;
        case 0x13896cu: goto label_13896c;
        case 0x138970u: goto label_138970;
        case 0x138974u: goto label_138974;
        case 0x138978u: goto label_138978;
        case 0x13897cu: goto label_13897c;
        case 0x138980u: goto label_138980;
        case 0x138984u: goto label_138984;
        case 0x138988u: goto label_138988;
        case 0x13898cu: goto label_13898c;
        case 0x138990u: goto label_138990;
        case 0x138994u: goto label_138994;
        case 0x138998u: goto label_138998;
        case 0x13899cu: goto label_13899c;
        case 0x1389a0u: goto label_1389a0;
        case 0x1389a4u: goto label_1389a4;
        case 0x1389a8u: goto label_1389a8;
        case 0x1389acu: goto label_1389ac;
        case 0x1389b0u: goto label_1389b0;
        case 0x1389b4u: goto label_1389b4;
        case 0x1389b8u: goto label_1389b8;
        case 0x1389bcu: goto label_1389bc;
        case 0x1389c0u: goto label_1389c0;
        case 0x1389c4u: goto label_1389c4;
        case 0x1389c8u: goto label_1389c8;
        case 0x1389ccu: goto label_1389cc;
        case 0x1389d0u: goto label_1389d0;
        case 0x1389d4u: goto label_1389d4;
        case 0x1389d8u: goto label_1389d8;
        case 0x1389dcu: goto label_1389dc;
        case 0x1389e0u: goto label_1389e0;
        case 0x1389e4u: goto label_1389e4;
        case 0x1389e8u: goto label_1389e8;
        case 0x1389ecu: goto label_1389ec;
        case 0x1389f0u: goto label_1389f0;
        case 0x1389f4u: goto label_1389f4;
        case 0x1389f8u: goto label_1389f8;
        case 0x1389fcu: goto label_1389fc;
        case 0x138a00u: goto label_138a00;
        case 0x138a04u: goto label_138a04;
        case 0x138a08u: goto label_138a08;
        case 0x138a0cu: goto label_138a0c;
        case 0x138a10u: goto label_138a10;
        case 0x138a14u: goto label_138a14;
        case 0x138a18u: goto label_138a18;
        case 0x138a1cu: goto label_138a1c;
        case 0x138a20u: goto label_138a20;
        case 0x138a24u: goto label_138a24;
        case 0x138a28u: goto label_138a28;
        case 0x138a2cu: goto label_138a2c;
        case 0x138a30u: goto label_138a30;
        case 0x138a34u: goto label_138a34;
        case 0x138a38u: goto label_138a38;
        case 0x138a3cu: goto label_138a3c;
        case 0x138a40u: goto label_138a40;
        case 0x138a44u: goto label_138a44;
        case 0x138a48u: goto label_138a48;
        case 0x138a4cu: goto label_138a4c;
        case 0x138a50u: goto label_138a50;
        case 0x138a54u: goto label_138a54;
        case 0x138a58u: goto label_138a58;
        case 0x138a5cu: goto label_138a5c;
        case 0x138a60u: goto label_138a60;
        case 0x138a64u: goto label_138a64;
        case 0x138a68u: goto label_138a68;
        case 0x138a6cu: goto label_138a6c;
        case 0x138a70u: goto label_138a70;
        case 0x138a74u: goto label_138a74;
        case 0x138a78u: goto label_138a78;
        case 0x138a7cu: goto label_138a7c;
        case 0x138a80u: goto label_138a80;
        case 0x138a84u: goto label_138a84;
        case 0x138a88u: goto label_138a88;
        case 0x138a8cu: goto label_138a8c;
        case 0x138a90u: goto label_138a90;
        case 0x138a94u: goto label_138a94;
        case 0x138a98u: goto label_138a98;
        case 0x138a9cu: goto label_138a9c;
        case 0x138aa0u: goto label_138aa0;
        case 0x138aa4u: goto label_138aa4;
        case 0x138aa8u: goto label_138aa8;
        case 0x138aacu: goto label_138aac;
        case 0x138ab0u: goto label_138ab0;
        case 0x138ab4u: goto label_138ab4;
        case 0x138ab8u: goto label_138ab8;
        case 0x138abcu: goto label_138abc;
        case 0x138ac0u: goto label_138ac0;
        case 0x138ac4u: goto label_138ac4;
        case 0x138ac8u: goto label_138ac8;
        case 0x138accu: goto label_138acc;
        case 0x138ad0u: goto label_138ad0;
        case 0x138ad4u: goto label_138ad4;
        case 0x138ad8u: goto label_138ad8;
        case 0x138adcu: goto label_138adc;
        case 0x138ae0u: goto label_138ae0;
        case 0x138ae4u: goto label_138ae4;
        case 0x138ae8u: goto label_138ae8;
        case 0x138aecu: goto label_138aec;
        case 0x138af0u: goto label_138af0;
        case 0x138af4u: goto label_138af4;
        case 0x138af8u: goto label_138af8;
        case 0x138afcu: goto label_138afc;
        case 0x138b00u: goto label_138b00;
        case 0x138b04u: goto label_138b04;
        case 0x138b08u: goto label_138b08;
        case 0x138b0cu: goto label_138b0c;
        case 0x138b10u: goto label_138b10;
        case 0x138b14u: goto label_138b14;
        case 0x138b18u: goto label_138b18;
        case 0x138b1cu: goto label_138b1c;
        case 0x138b20u: goto label_138b20;
        case 0x138b24u: goto label_138b24;
        case 0x138b28u: goto label_138b28;
        case 0x138b2cu: goto label_138b2c;
        case 0x138b30u: goto label_138b30;
        case 0x138b34u: goto label_138b34;
        default: break;
    }

    ctx->pc = 0x138768u;

label_138768:
    // 0x138768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13876c:
    // 0x13876c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_138770:
    // 0x138770: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x138770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_138774:
    // 0x138774: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x138774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_138778:
    // 0x138778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13877c:
    // 0x13877c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_138780:
    // 0x138780: 0x24559a08  addiu       $s5, $v0, -0x65F8
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_138784:
    // 0x138784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x138784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_138788:
    // 0x138788: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x138788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13878c:
    // 0x13878c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_138790:
    // 0x138790: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x138790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_138794:
    // 0x138794: 0x9223046c  lbu         $v1, 0x46C($s1)
    ctx->pc = 0x138794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138798:
    // 0x138798: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x138798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13879c:
    // 0x13879c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1387a0:
    // 0x1387a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1387a4:
    // 0x1387a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1387a8:
    // 0x1387a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1387ac:
    // 0x1387ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1387b0:
    // 0x1387b0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1387b4:
    // 0x1387b4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_1387b8:
    if (ctx->pc == 0x1387B8u) {
        ctx->pc = 0x1387B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B4u;
        // 0x1387b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387BCu;
        goto label_1387bc;
    }
    ctx->pc = 0x1387B4u;
    {
        const bool branch_taken_0x1387b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B4u;
        // 0x1387b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387b4) {
            ctx->pc = 0x13882Cu;
            goto label_13882c;
        }
    }
    ctx->pc = 0x1387BCu;
label_1387bc:
    // 0x1387bc: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1387c0:
    // 0x1387c0: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_1387c4:
    // 0x1387c4: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x1387c4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1387c8:
    // 0x1387c8: 0xc043a6c  jal         func_10E9B0
label_1387cc:
    if (ctx->pc == 0x1387CCu) {
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387D0u;
        goto label_1387d0;
    }
    ctx->pc = 0x1387C8u;
    SET_GPR_U32(ctx, 31, 0x1387D0u);
    ctx->pc = 0x1387CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1387C8u;
    // 0x1387cc: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9B0u, 0x1387C8u, 0x1387D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387D0u;
label_1387d0:
    // 0x1387d0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1387d0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1387d4:
    // 0x1387d4: 0xc04e1c2  jal         func_138708
label_1387d8:
    if (ctx->pc == 0x1387D8u) {
        ctx->pc = 0x1387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D4u;
        // 0x1387d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387DCu;
        goto label_1387dc;
    }
    ctx->pc = 0x1387D4u;
    SET_GPR_U32(ctx, 31, 0x1387DCu);
    ctx->pc = 0x1387D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1387D4u;
    // 0x1387d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138708u, 0x1387D4u, 0x1387DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387DCu;
label_1387dc:
    // 0x1387dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1387e0:
    if (ctx->pc == 0x1387E0u) {
        ctx->pc = 0x1387E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387DCu;
        // 0x1387e0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387E4u;
        goto label_1387e4;
    }
    ctx->pc = 0x1387DCu;
    {
        const bool branch_taken_0x1387dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1387dc) {
            ctx->pc = 0x1387E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1387DCu;
            // 0x1387e0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138800u;
            goto label_138800;
        }
    }
    ctx->pc = 0x1387E4u;
label_1387e4:
    // 0x1387e4: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_1387e8:
    if (ctx->pc == 0x1387E8u) {
        ctx->pc = 0x1387E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E4u;
        // 0x1387e8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387ECu;
        goto label_1387ec;
    }
    ctx->pc = 0x1387E4u;
    {
        const bool branch_taken_0x1387e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1387e4) {
            ctx->pc = 0x1387E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1387E4u;
            // 0x1387e8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138800u;
            goto label_138800;
        }
    }
    ctx->pc = 0x1387ECu;
label_1387ec:
    // 0x1387ec: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_1387f0:
    if (ctx->pc == 0x1387F0u) {
        ctx->pc = 0x1387F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387ECu;
        // 0x1387f0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387F4u;
        goto label_1387f4;
    }
    ctx->pc = 0x1387ECu;
    {
        const bool branch_taken_0x1387ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1387ec) {
            ctx->pc = 0x1387F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1387ECu;
            // 0x1387f0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138800u;
            goto label_138800;
        }
    }
    ctx->pc = 0x1387F4u;
label_1387f4:
    // 0x1387f4: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_1387f8:
    if (ctx->pc == 0x1387F8u) {
        ctx->pc = 0x1387F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387F4u;
        // 0x1387f8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387FCu;
        goto label_1387fc;
    }
    ctx->pc = 0x1387F4u;
    {
        const bool branch_taken_0x1387f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1387f4) {
            ctx->pc = 0x1387F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1387F4u;
            // 0x1387f8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138834u;
            goto label_138834;
        }
    }
    ctx->pc = 0x1387FCu;
label_1387fc:
    // 0x1387fc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1387fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138800:
    // 0x138800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138804:
    // 0x138804: 0xc04e1aa  jal         func_1386A8
label_138808:
    if (ctx->pc == 0x138808u) {
        ctx->pc = 0x138808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138804u;
        // 0x138808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13880Cu;
        goto label_13880c;
    }
    ctx->pc = 0x138804u;
    SET_GPR_U32(ctx, 31, 0x13880Cu);
    ctx->pc = 0x138808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138804u;
    // 0x138808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386A8u, 0x138804u, 0x13880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13880Cu;
label_13880c:
    // 0x13880c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13880cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138810:
    // 0x138810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138814:
    // 0x138814: 0xc04e19e  jal         func_138678
label_138818:
    if (ctx->pc == 0x138818u) {
        ctx->pc = 0x138818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138814u;
        // 0x138818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13881Cu;
        goto label_13881c;
    }
    ctx->pc = 0x138814u;
    SET_GPR_U32(ctx, 31, 0x13881Cu);
    ctx->pc = 0x138818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138814u;
    // 0x138818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138678u, 0x138814u, 0x13881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13881Cu;
label_13881c:
    // 0x13881c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138820:
    // 0x138820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138824:
    // 0x138824: 0xc04e1b6  jal         func_1386D8
label_138828:
    if (ctx->pc == 0x138828u) {
        ctx->pc = 0x138828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138824u;
        // 0x138828: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13882Cu;
        goto label_13882c;
    }
    ctx->pc = 0x138824u;
    SET_GPR_U32(ctx, 31, 0x13882Cu);
    ctx->pc = 0x138828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138824u;
    // 0x138828: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386D8u, 0x138824u, 0x13882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13882Cu;
label_13882c:
    // 0x13882c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_138830:
    if (ctx->pc == 0x138830u) {
        ctx->pc = 0x138830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13882Cu;
        // 0x138830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138834u;
        goto label_138834;
    }
    ctx->pc = 0x13882Cu;
    {
        const bool branch_taken_0x13882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13882Cu;
        // 0x138830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13882c) {
            ctx->pc = 0x138B14u;
            goto label_138b14;
        }
    }
    ctx->pc = 0x138834u;
label_138834:
    // 0x138834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138838:
    // 0x138838: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x138838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13883c:
    // 0x13883c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_138840:
    // 0x138840: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_138844:
    if (ctx->pc == 0x138844u) {
        ctx->pc = 0x138844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138840u;
        // 0x138844: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138848u;
        goto label_138848;
    }
    ctx->pc = 0x138840u;
    {
        const bool branch_taken_0x138840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138840) {
            ctx->pc = 0x138844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138840u;
            // 0x138844: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138850u;
            goto label_138850;
        }
    }
    ctx->pc = 0x138848u;
label_138848:
    // 0x138848: 0x10000003  b           . + 4 + (0x3 << 2)
label_13884c:
    if (ctx->pc == 0x13884Cu) {
        ctx->pc = 0x13884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138848u;
        // 0x13884c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138850u;
        goto label_138850;
    }
    ctx->pc = 0x138848u;
    {
        const bool branch_taken_0x138848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138848u;
        // 0x13884c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138848) {
            ctx->pc = 0x138858u;
            goto label_138858;
        }
    }
    ctx->pc = 0x138850u;
label_138850:
    // 0x138850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x138850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138854:
    // 0x138854: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x138854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_138858:
    // 0x138858: 0x10a0fff4  beqz        $a1, . + 4 + (-0xC << 2)
label_13885c:
    if (ctx->pc == 0x13885Cu) {
        ctx->pc = 0x13885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138858u;
        // 0x13885c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138860u;
        goto label_138860;
    }
    ctx->pc = 0x138858u;
    {
        const bool branch_taken_0x138858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138858u;
        // 0x13885c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138858) {
            ctx->pc = 0x13882Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13882c;
        }
    }
    ctx->pc = 0x138860u;
label_138860:
    // 0x138860: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x138860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_138864:
    // 0x138864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138868:
    // 0x138868: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_13886c:
    // 0x13886c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13886cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138870:
    // 0x138870: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x138870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_138874:
    // 0x138874: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138878:
    // 0x138878: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x138878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_13887c:
    // 0x13887c: 0x2408008c  addiu       $t0, $zero, 0x8C
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_138880:
    // 0x138880: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x138880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_138884:
    // 0x138884: 0x2409008d  addiu       $t1, $zero, 0x8D
    ctx->pc = 0x138884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_138888:
    // 0x138888: 0xc04a412  jal         func_129048
label_13888c:
    if (ctx->pc == 0x13888Cu) {
        ctx->pc = 0x13888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138888u;
        // 0x13888c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138890u;
        goto label_138890;
    }
    ctx->pc = 0x138888u;
    SET_GPR_U32(ctx, 31, 0x138890u);
    ctx->pc = 0x13888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138888u;
    // 0x13888c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129048u, 0x138888u, 0x138890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138890u;
label_138890:
    // 0x138890: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x138890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138894:
    // 0x138894: 0x2982a  slt         $s3, $zero, $v0
    ctx->pc = 0x138894u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_138898:
    // 0x138898: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_13889c:
    if (ctx->pc == 0x13889Cu) {
        ctx->pc = 0x13889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138898u;
        // 0x13889c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388A0u;
        goto label_1388a0;
    }
    ctx->pc = 0x138898u;
    {
        const bool branch_taken_0x138898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138898u;
        // 0x13889c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138898) {
            ctx->pc = 0x1388B0u;
            goto label_1388b0;
        }
    }
    ctx->pc = 0x1388A0u;
label_1388a0:
    // 0x1388a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1388a4:
    if (ctx->pc == 0x1388A4u) {
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A0u;
        // 0x1388a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388A8u;
        goto label_1388a8;
    }
    ctx->pc = 0x1388A0u;
    {
        const bool branch_taken_0x1388a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A0u;
        // 0x1388a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a0) {
            ctx->pc = 0x1388B4u;
            goto label_1388b4;
        }
    }
    ctx->pc = 0x1388A8u;
label_1388a8:
    // 0x1388a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1388ac:
    if (ctx->pc == 0x1388ACu) {
        ctx->pc = 0x1388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A8u;
        // 0x1388ac: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388B0u;
        goto label_1388b0;
    }
    ctx->pc = 0x1388A8u;
    {
        const bool branch_taken_0x1388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A8u;
        // 0x1388ac: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a8) {
            ctx->pc = 0x1388B4u;
            goto label_1388b4;
        }
    }
    ctx->pc = 0x1388B0u;
label_1388b0:
    // 0x1388b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1388b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1388b4:
    // 0x1388b4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1388b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1388b8:
    // 0x1388b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1388bc:
    if (ctx->pc == 0x1388BCu) {
        ctx->pc = 0x1388BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B8u;
        // 0x1388bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388C0u;
        goto label_1388c0;
    }
    ctx->pc = 0x1388B8u;
    {
        const bool branch_taken_0x1388b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B8u;
        // 0x1388bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388b8) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1388C0u;
label_1388c0:
    // 0x1388c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1388c4:
    // 0x1388c4: 0x0  nop
    ctx->pc = 0x1388c4u;
    // NOP
label_1388c8:
    // 0x1388c8: 0xc0f6e9c  jal         func_3DBA70
label_1388cc:
    if (ctx->pc == 0x1388CCu) {
        ctx->pc = 0x1388CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388C8u;
        // 0x1388cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388D0u;
        goto label_1388d0;
    }
    ctx->pc = 0x1388C8u;
    SET_GPR_U32(ctx, 31, 0x1388D0u);
    ctx->pc = 0x1388CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388C8u;
    // 0x1388cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x1388C8u, 0x1388D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388D0u;
label_1388d0:
    // 0x1388d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1388d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1388d4:
    // 0x1388d4: 0x0  nop
    ctx->pc = 0x1388d4u;
    // NOP
label_1388d8:
    // 0x1388d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1388dc:
    if (ctx->pc == 0x1388DCu) {
        ctx->pc = 0x1388DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388D8u;
        // 0x1388dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388E0u;
        goto label_1388e0;
    }
    ctx->pc = 0x1388D8u;
    {
        const bool branch_taken_0x1388d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1388d8) {
            ctx->pc = 0x1388DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1388D8u;
            // 0x1388dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1388C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1388c8;
        }
    }
    ctx->pc = 0x1388E0u;
label_1388e0:
    // 0x1388e0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1388e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_1388e4:
    // 0x1388e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1388e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1388e8:
    // 0x1388e8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1388e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1388ec:
    // 0x1388ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1388ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1388f0:
    // 0x1388f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1388f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1388f4:
    // 0x1388f4: 0xc04e1a4  jal         func_138690
label_1388f8:
    if (ctx->pc == 0x1388F8u) {
        ctx->pc = 0x1388F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F4u;
        // 0x1388f8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388FCu;
        goto label_1388fc;
    }
    ctx->pc = 0x1388F4u;
    SET_GPR_U32(ctx, 31, 0x1388FCu);
    ctx->pc = 0x1388F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388F4u;
    // 0x1388f8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138690u, 0x1388F4u, 0x1388FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388FCu;
label_1388fc:
    // 0x1388fc: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_138900:
    if (ctx->pc == 0x138900u) {
        ctx->pc = 0x138904u;
        goto label_138904;
    }
    ctx->pc = 0x1388FCu;
    {
        const bool branch_taken_0x1388fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388fc) {
            ctx->pc = 0x138A4Cu;
            goto label_138a4c;
        }
    }
    ctx->pc = 0x138904u;
label_138904:
    // 0x138904: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x138904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138908:
    // 0x138908: 0xc04e1b0  jal         func_1386C0
label_13890c:
    if (ctx->pc == 0x13890Cu) {
        ctx->pc = 0x13890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138908u;
        // 0x13890c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138910u;
        goto label_138910;
    }
    ctx->pc = 0x138908u;
    SET_GPR_U32(ctx, 31, 0x138910u);
    ctx->pc = 0x13890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138908u;
    // 0x13890c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386C0u, 0x138908u, 0x138910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138910u;
label_138910:
    // 0x138910: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x138910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138914:
    // 0x138914: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_138918:
    if (ctx->pc == 0x138918u) {
        ctx->pc = 0x138918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138914u;
        // 0x138918: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13891Cu;
        goto label_13891c;
    }
    ctx->pc = 0x138914u;
    {
        const bool branch_taken_0x138914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x138914) {
            ctx->pc = 0x138918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138914u;
            // 0x138918: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138930u;
            goto label_138930;
        }
    }
    ctx->pc = 0x13891Cu;
label_13891c:
    // 0x13891c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138920:
    // 0x138920: 0xc04e31c  jal         func_138C70
label_138924:
    if (ctx->pc == 0x138924u) {
        ctx->pc = 0x138924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138920u;
        // 0x138924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138928u;
        goto label_138928;
    }
    ctx->pc = 0x138920u;
    SET_GPR_U32(ctx, 31, 0x138928u);
    ctx->pc = 0x138924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138920u;
    // 0x138924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C70u, 0x138920u, 0x138928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138928u;
label_138928:
    // 0x138928: 0x1000003b  b           . + 4 + (0x3B << 2)
label_13892c:
    if (ctx->pc == 0x13892Cu) {
        ctx->pc = 0x13892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138928u;
        // 0x13892c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138930u;
        goto label_138930;
    }
    ctx->pc = 0x138928u;
    {
        const bool branch_taken_0x138928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138928u;
        // 0x13892c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138928) {
            ctx->pc = 0x138A18u;
            goto label_138a18;
        }
    }
    ctx->pc = 0x138930u;
label_138930:
    // 0x138930: 0xc04e1bc  jal         func_1386F0
label_138934:
    if (ctx->pc == 0x138934u) {
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138938u;
        goto label_138938;
    }
    ctx->pc = 0x138930u;
    SET_GPR_U32(ctx, 31, 0x138938u);
    ctx->pc = 0x138934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138930u;
    // 0x138934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386F0u, 0x138930u, 0x138938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138938u;
label_138938:
    // 0x138938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13893c:
    // 0x13893c: 0x12500020  beq         $s2, $s0, . + 4 + (0x20 << 2)
label_138940:
    if (ctx->pc == 0x138940u) {
        ctx->pc = 0x138940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13893Cu;
        // 0x138940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138944u;
        goto label_138944;
    }
    ctx->pc = 0x13893Cu;
    {
        const bool branch_taken_0x13893c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x138940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13893Cu;
        // 0x138940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13893c) {
            ctx->pc = 0x1389C0u;
            goto label_1389c0;
        }
    }
    ctx->pc = 0x138944u;
label_138944:
    // 0x138944: 0xc0f6f5c  jal         func_3DBD70
label_138948:
    if (ctx->pc == 0x138948u) {
        ctx->pc = 0x138948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138944u;
        // 0x138948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13894Cu;
        goto label_13894c;
    }
    ctx->pc = 0x138944u;
    SET_GPR_U32(ctx, 31, 0x13894Cu);
    ctx->pc = 0x138948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138944u;
    // 0x138948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBD70u, 0x138944u, 0x13894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13894Cu;
label_13894c:
    // 0x13894c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_138950:
    if (ctx->pc == 0x138950u) {
        ctx->pc = 0x138950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13894Cu;
        // 0x138950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138954u;
        goto label_138954;
    }
    ctx->pc = 0x13894Cu;
    {
        const bool branch_taken_0x13894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13894Cu;
        // 0x138950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13894c) {
            ctx->pc = 0x138964u;
            goto label_138964;
        }
    }
    ctx->pc = 0x138954u;
label_138954:
    // 0x138954: 0xc04e31c  jal         func_138C70
label_138958:
    if (ctx->pc == 0x138958u) {
        ctx->pc = 0x138958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138954u;
        // 0x138958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13895Cu;
        goto label_13895c;
    }
    ctx->pc = 0x138954u;
    SET_GPR_U32(ctx, 31, 0x13895Cu);
    ctx->pc = 0x138958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138954u;
    // 0x138958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C70u, 0x138954u, 0x13895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13895Cu;
label_13895c:
    // 0x13895c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_138960:
    if (ctx->pc == 0x138960u) {
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138964u;
        goto label_138964;
    }
    ctx->pc = 0x13895Cu;
    {
        const bool branch_taken_0x13895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13895c) {
            ctx->pc = 0x1389D0u;
            goto label_1389d0;
        }
    }
    ctx->pc = 0x138964u;
label_138964:
    // 0x138964: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138968:
    // 0x138968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13896c:
    // 0x13896c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_138970:
    // 0x138970: 0x60f809  jalr        $v1
label_138974:
    if (ctx->pc == 0x138974u) {
        ctx->pc = 0x138974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138970u;
        // 0x138974: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138978u;
        goto label_138978;
    }
    ctx->pc = 0x138970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138978u);
        ctx->pc = 0x138974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138970u;
        // 0x138974: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138970u, 0x138978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138978u;
label_138978:
    // 0x138978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13897c:
    // 0x13897c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13897cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138980:
    // 0x138980: 0xc04e19e  jal         func_138678
label_138984:
    if (ctx->pc == 0x138984u) {
        ctx->pc = 0x138984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138980u;
        // 0x138984: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138988u;
        goto label_138988;
    }
    ctx->pc = 0x138980u;
    SET_GPR_U32(ctx, 31, 0x138988u);
    ctx->pc = 0x138984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138980u;
    // 0x138984: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138678u, 0x138980u, 0x138988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138988u;
label_138988:
    // 0x138988: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x138988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13898c:
    // 0x13898c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x13898cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138990:
    // 0x138990: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_138994:
    if (ctx->pc == 0x138994u) {
        ctx->pc = 0x138994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138990u;
        // 0x138994: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138998u;
        goto label_138998;
    }
    ctx->pc = 0x138990u;
    {
        const bool branch_taken_0x138990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138990u;
        // 0x138994: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138990) {
            ctx->pc = 0x138B00u;
            goto label_138b00;
        }
    }
    ctx->pc = 0x138998u;
label_138998:
    // 0x138998: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13899c:
    // 0x13899c: 0x0  nop
    ctx->pc = 0x13899cu;
    // NOP
label_1389a0:
    // 0x1389a0: 0xc0f6e9c  jal         func_3DBA70
label_1389a4:
    if (ctx->pc == 0x1389A4u) {
        ctx->pc = 0x1389A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A0u;
        // 0x1389a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389A8u;
        goto label_1389a8;
    }
    ctx->pc = 0x1389A0u;
    SET_GPR_U32(ctx, 31, 0x1389A8u);
    ctx->pc = 0x1389A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389A0u;
    // 0x1389a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x1389A0u, 0x1389A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389A8u;
label_1389a8:
    // 0x1389a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1389ac:
    // 0x1389ac: 0x0  nop
    ctx->pc = 0x1389acu;
    // NOP
label_1389b0:
    // 0x1389b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1389b4:
    if (ctx->pc == 0x1389B4u) {
        ctx->pc = 0x1389B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B0u;
        // 0x1389b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389B8u;
        goto label_1389b8;
    }
    ctx->pc = 0x1389B0u;
    {
        const bool branch_taken_0x1389b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1389b0) {
            ctx->pc = 0x1389B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1389B0u;
            // 0x1389b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1389A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1389a0;
        }
    }
    ctx->pc = 0x1389B8u;
label_1389b8:
    // 0x1389b8: 0x10000052  b           . + 4 + (0x52 << 2)
label_1389bc:
    if (ctx->pc == 0x1389BCu) {
        ctx->pc = 0x1389BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B8u;
        // 0x1389bc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389C0u;
        goto label_1389c0;
    }
    ctx->pc = 0x1389B8u;
    {
        const bool branch_taken_0x1389b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B8u;
        // 0x1389bc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389b8) {
            ctx->pc = 0x138B04u;
            goto label_138b04;
        }
    }
    ctx->pc = 0x1389C0u;
label_1389c0:
    // 0x1389c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1389c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1389c4:
    // 0x1389c4: 0xc04e31c  jal         func_138C70
label_1389c8:
    if (ctx->pc == 0x1389C8u) {
        ctx->pc = 0x1389C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389C4u;
        // 0x1389c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389CCu;
        goto label_1389cc;
    }
    ctx->pc = 0x1389C4u;
    SET_GPR_U32(ctx, 31, 0x1389CCu);
    ctx->pc = 0x1389C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389C4u;
    // 0x1389c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C70u, 0x1389C4u, 0x1389CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389CCu;
label_1389cc:
    // 0x1389cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1389ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1389d0:
    // 0x1389d0: 0xc04d8dc  jal         func_136370
label_1389d4:
    if (ctx->pc == 0x1389D4u) {
        ctx->pc = 0x1389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D0u;
        // 0x1389d4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389D8u;
        goto label_1389d8;
    }
    ctx->pc = 0x1389D0u;
    SET_GPR_U32(ctx, 31, 0x1389D8u);
    ctx->pc = 0x1389D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389D0u;
    // 0x1389d4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1389D0u, 0x1389D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389D8u;
label_1389d8:
    // 0x1389d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1389dc:
    // 0x1389dc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1389e0:
    if (ctx->pc == 0x1389E0u) {
        ctx->pc = 0x1389E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389DCu;
        // 0x1389e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389E4u;
        goto label_1389e4;
    }
    ctx->pc = 0x1389DCu;
    {
        const bool branch_taken_0x1389dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1389E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389DCu;
        // 0x1389e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389dc) {
            ctx->pc = 0x138A18u;
            goto label_138a18;
        }
    }
    ctx->pc = 0x1389E4u;
label_1389e4:
    // 0x1389e4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1389e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1389e8:
    // 0x1389e8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1389ec:
    if (ctx->pc == 0x1389ECu) {
        ctx->pc = 0x1389ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E8u;
        // 0x1389ec: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389F0u;
        goto label_1389f0;
    }
    ctx->pc = 0x1389E8u;
    {
        const bool branch_taken_0x1389e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E8u;
        // 0x1389ec: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e8) {
            ctx->pc = 0x138B00u;
            goto label_138b00;
        }
    }
    ctx->pc = 0x1389F0u;
label_1389f0:
    // 0x1389f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1389f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1389f4:
    // 0x1389f4: 0x0  nop
    ctx->pc = 0x1389f4u;
    // NOP
label_1389f8:
    // 0x1389f8: 0xc0f6e9c  jal         func_3DBA70
label_1389fc:
    if (ctx->pc == 0x1389FCu) {
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F8u;
        // 0x1389fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A00u;
        goto label_138a00;
    }
    ctx->pc = 0x1389F8u;
    SET_GPR_U32(ctx, 31, 0x138A00u);
    ctx->pc = 0x1389FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389F8u;
    // 0x1389fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x1389F8u, 0x138A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A00u;
label_138a00:
    // 0x138a00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138a04:
    // 0x138a04: 0x0  nop
    ctx->pc = 0x138a04u;
    // NOP
label_138a08:
    // 0x138a08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_138a0c:
    if (ctx->pc == 0x138A0Cu) {
        ctx->pc = 0x138A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A08u;
        // 0x138a0c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A10u;
        goto label_138a10;
    }
    ctx->pc = 0x138A08u;
    {
        const bool branch_taken_0x138a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138a08) {
            ctx->pc = 0x138A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138A08u;
            // 0x138a0c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1389F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1389f8;
        }
    }
    ctx->pc = 0x138A10u;
label_138a10:
    // 0x138a10: 0x1000003c  b           . + 4 + (0x3C << 2)
label_138a14:
    if (ctx->pc == 0x138A14u) {
        ctx->pc = 0x138A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A10u;
        // 0x138a14: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A18u;
        goto label_138a18;
    }
    ctx->pc = 0x138A10u;
    {
        const bool branch_taken_0x138a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A10u;
        // 0x138a14: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a10) {
            ctx->pc = 0x138B04u;
            goto label_138b04;
        }
    }
    ctx->pc = 0x138A18u;
label_138a18:
    // 0x138a18: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x138a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138a1c:
    // 0x138a1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_138a20:
    if (ctx->pc == 0x138A20u) {
        ctx->pc = 0x138A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A1Cu;
        // 0x138a20: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A24u;
        goto label_138a24;
    }
    ctx->pc = 0x138A1Cu;
    {
        const bool branch_taken_0x138a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A1Cu;
        // 0x138a20: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a1c) {
            ctx->pc = 0x138A40u;
            goto label_138a40;
        }
    }
    ctx->pc = 0x138A24u;
label_138a24:
    // 0x138a24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138a28:
    // 0x138a28: 0xc0f6e9c  jal         func_3DBA70
label_138a2c:
    if (ctx->pc == 0x138A2Cu) {
        ctx->pc = 0x138A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A28u;
        // 0x138a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A30u;
        goto label_138a30;
    }
    ctx->pc = 0x138A28u;
    SET_GPR_U32(ctx, 31, 0x138A30u);
    ctx->pc = 0x138A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A28u;
    // 0x138a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x138A28u, 0x138A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A30u;
label_138a30:
    // 0x138a30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138a34:
    // 0x138a34: 0x0  nop
    ctx->pc = 0x138a34u;
    // NOP
label_138a38:
    // 0x138a38: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_138a3c:
    if (ctx->pc == 0x138A3Cu) {
        ctx->pc = 0x138A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A38u;
        // 0x138a3c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A40u;
        goto label_138a40;
    }
    ctx->pc = 0x138A38u;
    {
        const bool branch_taken_0x138a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138a38) {
            ctx->pc = 0x138A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138A38u;
            // 0x138a3c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138a28;
        }
    }
    ctx->pc = 0x138A40u;
label_138a40:
    // 0x138a40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x138a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_138a44:
    // 0x138a44: 0x10000030  b           . + 4 + (0x30 << 2)
label_138a48:
    if (ctx->pc == 0x138A48u) {
        ctx->pc = 0x138A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A44u;
        // 0x138a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A4Cu;
        goto label_138a4c;
    }
    ctx->pc = 0x138A44u;
    {
        const bool branch_taken_0x138a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A44u;
        // 0x138a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a44) {
            ctx->pc = 0x138B08u;
            goto label_138b08;
        }
    }
    ctx->pc = 0x138A4Cu;
label_138a4c:
    // 0x138a4c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
label_138a50:
    if (ctx->pc == 0x138A50u) {
        ctx->pc = 0x138A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A4Cu;
        // 0x138a50: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A54u;
        goto label_138a54;
    }
    ctx->pc = 0x138A4Cu;
    {
        const bool branch_taken_0x138a4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A4Cu;
        // 0x138a50: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a4c) {
            ctx->pc = 0x138AD4u;
            goto label_138ad4;
        }
    }
    ctx->pc = 0x138A54u;
label_138a54:
    // 0x138a54: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_138a58:
    if (ctx->pc == 0x138A58u) {
        ctx->pc = 0x138A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A54u;
        // 0x138a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A5Cu;
        goto label_138a5c;
    }
    ctx->pc = 0x138A54u;
    {
        const bool branch_taken_0x138a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A54u;
        // 0x138a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a54) {
            ctx->pc = 0x138A9Cu;
            goto label_138a9c;
        }
    }
    ctx->pc = 0x138A5Cu;
label_138a5c:
    // 0x138a5c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x138a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138a60:
    // 0x138a60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_138a64:
    // 0x138a64: 0x40f809  jalr        $v0
label_138a68:
    if (ctx->pc == 0x138A68u) {
        ctx->pc = 0x138A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A64u;
        // 0x138a68: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A6Cu;
        goto label_138a6c;
    }
    ctx->pc = 0x138A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138A6Cu);
        ctx->pc = 0x138A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A64u;
        // 0x138a68: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A64u, 0x138A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138A6Cu;
label_138a6c:
    // 0x138a6c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x138a6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138a70:
    // 0x138a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138a74:
    // 0x138a74: 0xc04e19e  jal         func_138678
label_138a78:
    if (ctx->pc == 0x138A78u) {
        ctx->pc = 0x138A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A74u;
        // 0x138a78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A7Cu;
        goto label_138a7c;
    }
    ctx->pc = 0x138A74u;
    SET_GPR_U32(ctx, 31, 0x138A7Cu);
    ctx->pc = 0x138A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A74u;
    // 0x138a78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138678u, 0x138A74u, 0x138A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A7Cu;
label_138a7c:
    // 0x138a7c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x138a7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_138a80:
    // 0x138a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138a84:
    // 0x138a84: 0xc04e1b6  jal         func_1386D8
label_138a88:
    if (ctx->pc == 0x138A88u) {
        ctx->pc = 0x138A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A84u;
        // 0x138a88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A8Cu;
        goto label_138a8c;
    }
    ctx->pc = 0x138A84u;
    SET_GPR_U32(ctx, 31, 0x138A8Cu);
    ctx->pc = 0x138A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A84u;
    // 0x138a88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386D8u, 0x138A84u, 0x138A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A8Cu;
label_138a8c:
    // 0x138a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138a90:
    // 0x138a90: 0xc04e31c  jal         func_138C70
label_138a94:
    if (ctx->pc == 0x138A94u) {
        ctx->pc = 0x138A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A90u;
        // 0x138a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A98u;
        goto label_138a98;
    }
    ctx->pc = 0x138A90u;
    SET_GPR_U32(ctx, 31, 0x138A98u);
    ctx->pc = 0x138A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A90u;
    // 0x138a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C70u, 0x138A90u, 0x138A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A98u;
label_138a98:
    // 0x138a98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x138a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_138a9c:
    // 0x138a9c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x138a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138aa0:
    // 0x138aa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_138aa4:
    if (ctx->pc == 0x138AA4u) {
        ctx->pc = 0x138AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AA0u;
        // 0x138aa4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AA8u;
        goto label_138aa8;
    }
    ctx->pc = 0x138AA0u;
    {
        const bool branch_taken_0x138aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AA0u;
        // 0x138aa4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138aa0) {
            ctx->pc = 0x138AC8u;
            goto label_138ac8;
        }
    }
    ctx->pc = 0x138AA8u;
label_138aa8:
    // 0x138aa8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138aac:
    // 0x138aac: 0x0  nop
    ctx->pc = 0x138aacu;
    // NOP
label_138ab0:
    // 0x138ab0: 0xc0f6e9c  jal         func_3DBA70
label_138ab4:
    if (ctx->pc == 0x138AB4u) {
        ctx->pc = 0x138AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB0u;
        // 0x138ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AB8u;
        goto label_138ab8;
    }
    ctx->pc = 0x138AB0u;
    SET_GPR_U32(ctx, 31, 0x138AB8u);
    ctx->pc = 0x138AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138AB0u;
    // 0x138ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x138AB0u, 0x138AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AB8u;
label_138ab8:
    // 0x138ab8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138abc:
    // 0x138abc: 0x0  nop
    ctx->pc = 0x138abcu;
    // NOP
label_138ac0:
    // 0x138ac0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_138ac4:
    if (ctx->pc == 0x138AC4u) {
        ctx->pc = 0x138AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AC0u;
        // 0x138ac4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AC8u;
        goto label_138ac8;
    }
    ctx->pc = 0x138AC0u;
    {
        const bool branch_taken_0x138ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138ac0) {
            ctx->pc = 0x138AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138AC0u;
            // 0x138ac4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138ab0;
        }
    }
    ctx->pc = 0x138AC8u;
label_138ac8:
    // 0x138ac8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x138ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_138acc:
    // 0x138acc: 0x1000000e  b           . + 4 + (0xE << 2)
label_138ad0:
    if (ctx->pc == 0x138AD0u) {
        ctx->pc = 0x138AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138ACCu;
        // 0x138ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AD4u;
        goto label_138ad4;
    }
    ctx->pc = 0x138ACCu;
    {
        const bool branch_taken_0x138acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138ACCu;
        // 0x138ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138acc) {
            ctx->pc = 0x138B08u;
            goto label_138b08;
        }
    }
    ctx->pc = 0x138AD4u;
label_138ad4:
    // 0x138ad4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x138ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138ad8:
    // 0x138ad8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_138adc:
    if (ctx->pc == 0x138ADCu) {
        ctx->pc = 0x138ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AD8u;
        // 0x138adc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AE0u;
        goto label_138ae0;
    }
    ctx->pc = 0x138AD8u;
    {
        const bool branch_taken_0x138ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AD8u;
        // 0x138adc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ad8) {
            ctx->pc = 0x138B00u;
            goto label_138b00;
        }
    }
    ctx->pc = 0x138AE0u;
label_138ae0:
    // 0x138ae0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138ae4:
    // 0x138ae4: 0x0  nop
    ctx->pc = 0x138ae4u;
    // NOP
label_138ae8:
    // 0x138ae8: 0xc0f6e9c  jal         func_3DBA70
label_138aec:
    if (ctx->pc == 0x138AECu) {
        ctx->pc = 0x138AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AE8u;
        // 0x138aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AF0u;
        goto label_138af0;
    }
    ctx->pc = 0x138AE8u;
    SET_GPR_U32(ctx, 31, 0x138AF0u);
    ctx->pc = 0x138AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138AE8u;
    // 0x138aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x138AE8u, 0x138AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AF0u;
label_138af0:
    // 0x138af0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x138af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138af4:
    // 0x138af4: 0x0  nop
    ctx->pc = 0x138af4u;
    // NOP
label_138af8:
    // 0x138af8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_138afc:
    if (ctx->pc == 0x138AFCu) {
        ctx->pc = 0x138AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AF8u;
        // 0x138afc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B00u;
        goto label_138b00;
    }
    ctx->pc = 0x138AF8u;
    {
        const bool branch_taken_0x138af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138af8) {
            ctx->pc = 0x138AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138AF8u;
            // 0x138afc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138ae8;
        }
    }
    ctx->pc = 0x138B00u;
label_138b00:
    // 0x138b00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x138b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_138b04:
    // 0x138b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138b08:
    // 0x138b08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x138b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_138b0c:
    // 0x138b0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x138b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_138b10:
    // 0x138b10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x138b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_138b14:
    // 0x138b14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_138b18:
    // 0x138b18: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x138b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_138b1c:
    // 0x138b1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x138b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_138b20:
    // 0x138b20: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x138b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_138b24:
    // 0x138b24: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x138b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_138b28:
    // 0x138b28: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x138b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_138b2c:
    // 0x138b2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x138b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_138b30:
    // 0x138b30: 0x3e00008  jr          $ra
label_138b34:
    if (ctx->pc == 0x138B34u) {
        ctx->pc = 0x138B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B30u;
        // 0x138b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B38u;
        goto label_fallthrough_0x138b30;
    }
    ctx->pc = 0x138B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B30u;
        // 0x138b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138b30:
    ctx->pc = 0x138B38u;
}
