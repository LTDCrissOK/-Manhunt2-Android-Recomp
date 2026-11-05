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

// Function: sub_002116A8
// Address: 0x2116a8 - 0x211ac0
void sub_002116A8_0x2116a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002116A8_0x2116a8");
#endif

    switch (ctx->pc) {
        case 0x2116a8u: goto label_2116a8;
        case 0x2116acu: goto label_2116ac;
        case 0x2116b0u: goto label_2116b0;
        case 0x2116b4u: goto label_2116b4;
        case 0x2116b8u: goto label_2116b8;
        case 0x2116bcu: goto label_2116bc;
        case 0x2116c0u: goto label_2116c0;
        case 0x2116c4u: goto label_2116c4;
        case 0x2116c8u: goto label_2116c8;
        case 0x2116ccu: goto label_2116cc;
        case 0x2116d0u: goto label_2116d0;
        case 0x2116d4u: goto label_2116d4;
        case 0x2116d8u: goto label_2116d8;
        case 0x2116dcu: goto label_2116dc;
        case 0x2116e0u: goto label_2116e0;
        case 0x2116e4u: goto label_2116e4;
        case 0x2116e8u: goto label_2116e8;
        case 0x2116ecu: goto label_2116ec;
        case 0x2116f0u: goto label_2116f0;
        case 0x2116f4u: goto label_2116f4;
        case 0x2116f8u: goto label_2116f8;
        case 0x2116fcu: goto label_2116fc;
        case 0x211700u: goto label_211700;
        case 0x211704u: goto label_211704;
        case 0x211708u: goto label_211708;
        case 0x21170cu: goto label_21170c;
        case 0x211710u: goto label_211710;
        case 0x211714u: goto label_211714;
        case 0x211718u: goto label_211718;
        case 0x21171cu: goto label_21171c;
        case 0x211720u: goto label_211720;
        case 0x211724u: goto label_211724;
        case 0x211728u: goto label_211728;
        case 0x21172cu: goto label_21172c;
        case 0x211730u: goto label_211730;
        case 0x211734u: goto label_211734;
        case 0x211738u: goto label_211738;
        case 0x21173cu: goto label_21173c;
        case 0x211740u: goto label_211740;
        case 0x211744u: goto label_211744;
        case 0x211748u: goto label_211748;
        case 0x21174cu: goto label_21174c;
        case 0x211750u: goto label_211750;
        case 0x211754u: goto label_211754;
        case 0x211758u: goto label_211758;
        case 0x21175cu: goto label_21175c;
        case 0x211760u: goto label_211760;
        case 0x211764u: goto label_211764;
        case 0x211768u: goto label_211768;
        case 0x21176cu: goto label_21176c;
        case 0x211770u: goto label_211770;
        case 0x211774u: goto label_211774;
        case 0x211778u: goto label_211778;
        case 0x21177cu: goto label_21177c;
        case 0x211780u: goto label_211780;
        case 0x211784u: goto label_211784;
        case 0x211788u: goto label_211788;
        case 0x21178cu: goto label_21178c;
        case 0x211790u: goto label_211790;
        case 0x211794u: goto label_211794;
        case 0x211798u: goto label_211798;
        case 0x21179cu: goto label_21179c;
        case 0x2117a0u: goto label_2117a0;
        case 0x2117a4u: goto label_2117a4;
        case 0x2117a8u: goto label_2117a8;
        case 0x2117acu: goto label_2117ac;
        case 0x2117b0u: goto label_2117b0;
        case 0x2117b4u: goto label_2117b4;
        case 0x2117b8u: goto label_2117b8;
        case 0x2117bcu: goto label_2117bc;
        case 0x2117c0u: goto label_2117c0;
        case 0x2117c4u: goto label_2117c4;
        case 0x2117c8u: goto label_2117c8;
        case 0x2117ccu: goto label_2117cc;
        case 0x2117d0u: goto label_2117d0;
        case 0x2117d4u: goto label_2117d4;
        case 0x2117d8u: goto label_2117d8;
        case 0x2117dcu: goto label_2117dc;
        case 0x2117e0u: goto label_2117e0;
        case 0x2117e4u: goto label_2117e4;
        case 0x2117e8u: goto label_2117e8;
        case 0x2117ecu: goto label_2117ec;
        case 0x2117f0u: goto label_2117f0;
        case 0x2117f4u: goto label_2117f4;
        case 0x2117f8u: goto label_2117f8;
        case 0x2117fcu: goto label_2117fc;
        case 0x211800u: goto label_211800;
        case 0x211804u: goto label_211804;
        case 0x211808u: goto label_211808;
        case 0x21180cu: goto label_21180c;
        case 0x211810u: goto label_211810;
        case 0x211814u: goto label_211814;
        case 0x211818u: goto label_211818;
        case 0x21181cu: goto label_21181c;
        case 0x211820u: goto label_211820;
        case 0x211824u: goto label_211824;
        case 0x211828u: goto label_211828;
        case 0x21182cu: goto label_21182c;
        case 0x211830u: goto label_211830;
        case 0x211834u: goto label_211834;
        case 0x211838u: goto label_211838;
        case 0x21183cu: goto label_21183c;
        case 0x211840u: goto label_211840;
        case 0x211844u: goto label_211844;
        case 0x211848u: goto label_211848;
        case 0x21184cu: goto label_21184c;
        case 0x211850u: goto label_211850;
        case 0x211854u: goto label_211854;
        case 0x211858u: goto label_211858;
        case 0x21185cu: goto label_21185c;
        case 0x211860u: goto label_211860;
        case 0x211864u: goto label_211864;
        case 0x211868u: goto label_211868;
        case 0x21186cu: goto label_21186c;
        case 0x211870u: goto label_211870;
        case 0x211874u: goto label_211874;
        case 0x211878u: goto label_211878;
        case 0x21187cu: goto label_21187c;
        case 0x211880u: goto label_211880;
        case 0x211884u: goto label_211884;
        case 0x211888u: goto label_211888;
        case 0x21188cu: goto label_21188c;
        case 0x211890u: goto label_211890;
        case 0x211894u: goto label_211894;
        case 0x211898u: goto label_211898;
        case 0x21189cu: goto label_21189c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118a8u: goto label_2118a8;
        case 0x2118acu: goto label_2118ac;
        case 0x2118b0u: goto label_2118b0;
        case 0x2118b4u: goto label_2118b4;
        case 0x2118b8u: goto label_2118b8;
        case 0x2118bcu: goto label_2118bc;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118c4u: goto label_2118c4;
        case 0x2118c8u: goto label_2118c8;
        case 0x2118ccu: goto label_2118cc;
        case 0x2118d0u: goto label_2118d0;
        case 0x2118d4u: goto label_2118d4;
        case 0x2118d8u: goto label_2118d8;
        case 0x2118dcu: goto label_2118dc;
        case 0x2118e0u: goto label_2118e0;
        case 0x2118e4u: goto label_2118e4;
        case 0x2118e8u: goto label_2118e8;
        case 0x2118ecu: goto label_2118ec;
        case 0x2118f0u: goto label_2118f0;
        case 0x2118f4u: goto label_2118f4;
        case 0x2118f8u: goto label_2118f8;
        case 0x2118fcu: goto label_2118fc;
        case 0x211900u: goto label_211900;
        case 0x211904u: goto label_211904;
        case 0x211908u: goto label_211908;
        case 0x21190cu: goto label_21190c;
        case 0x211910u: goto label_211910;
        case 0x211914u: goto label_211914;
        case 0x211918u: goto label_211918;
        case 0x21191cu: goto label_21191c;
        case 0x211920u: goto label_211920;
        case 0x211924u: goto label_211924;
        case 0x211928u: goto label_211928;
        case 0x21192cu: goto label_21192c;
        case 0x211930u: goto label_211930;
        case 0x211934u: goto label_211934;
        case 0x211938u: goto label_211938;
        case 0x21193cu: goto label_21193c;
        case 0x211940u: goto label_211940;
        case 0x211944u: goto label_211944;
        case 0x211948u: goto label_211948;
        case 0x21194cu: goto label_21194c;
        case 0x211950u: goto label_211950;
        case 0x211954u: goto label_211954;
        case 0x211958u: goto label_211958;
        case 0x21195cu: goto label_21195c;
        case 0x211960u: goto label_211960;
        case 0x211964u: goto label_211964;
        case 0x211968u: goto label_211968;
        case 0x21196cu: goto label_21196c;
        case 0x211970u: goto label_211970;
        case 0x211974u: goto label_211974;
        case 0x211978u: goto label_211978;
        case 0x21197cu: goto label_21197c;
        case 0x211980u: goto label_211980;
        case 0x211984u: goto label_211984;
        case 0x211988u: goto label_211988;
        case 0x21198cu: goto label_21198c;
        case 0x211990u: goto label_211990;
        case 0x211994u: goto label_211994;
        case 0x211998u: goto label_211998;
        case 0x21199cu: goto label_21199c;
        case 0x2119a0u: goto label_2119a0;
        case 0x2119a4u: goto label_2119a4;
        case 0x2119a8u: goto label_2119a8;
        case 0x2119acu: goto label_2119ac;
        case 0x2119b0u: goto label_2119b0;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119b8u: goto label_2119b8;
        case 0x2119bcu: goto label_2119bc;
        case 0x2119c0u: goto label_2119c0;
        case 0x2119c4u: goto label_2119c4;
        case 0x2119c8u: goto label_2119c8;
        case 0x2119ccu: goto label_2119cc;
        case 0x2119d0u: goto label_2119d0;
        case 0x2119d4u: goto label_2119d4;
        case 0x2119d8u: goto label_2119d8;
        case 0x2119dcu: goto label_2119dc;
        case 0x2119e0u: goto label_2119e0;
        case 0x2119e4u: goto label_2119e4;
        case 0x2119e8u: goto label_2119e8;
        case 0x2119ecu: goto label_2119ec;
        case 0x2119f0u: goto label_2119f0;
        case 0x2119f4u: goto label_2119f4;
        case 0x2119f8u: goto label_2119f8;
        case 0x2119fcu: goto label_2119fc;
        case 0x211a00u: goto label_211a00;
        case 0x211a04u: goto label_211a04;
        case 0x211a08u: goto label_211a08;
        case 0x211a0cu: goto label_211a0c;
        case 0x211a10u: goto label_211a10;
        case 0x211a14u: goto label_211a14;
        case 0x211a18u: goto label_211a18;
        case 0x211a1cu: goto label_211a1c;
        case 0x211a20u: goto label_211a20;
        case 0x211a24u: goto label_211a24;
        case 0x211a28u: goto label_211a28;
        case 0x211a2cu: goto label_211a2c;
        case 0x211a30u: goto label_211a30;
        case 0x211a34u: goto label_211a34;
        case 0x211a38u: goto label_211a38;
        case 0x211a3cu: goto label_211a3c;
        case 0x211a40u: goto label_211a40;
        case 0x211a44u: goto label_211a44;
        case 0x211a48u: goto label_211a48;
        case 0x211a4cu: goto label_211a4c;
        case 0x211a50u: goto label_211a50;
        case 0x211a54u: goto label_211a54;
        case 0x211a58u: goto label_211a58;
        case 0x211a5cu: goto label_211a5c;
        case 0x211a60u: goto label_211a60;
        case 0x211a64u: goto label_211a64;
        case 0x211a68u: goto label_211a68;
        case 0x211a6cu: goto label_211a6c;
        case 0x211a70u: goto label_211a70;
        case 0x211a74u: goto label_211a74;
        case 0x211a78u: goto label_211a78;
        case 0x211a7cu: goto label_211a7c;
        case 0x211a80u: goto label_211a80;
        case 0x211a84u: goto label_211a84;
        case 0x211a88u: goto label_211a88;
        case 0x211a8cu: goto label_211a8c;
        case 0x211a90u: goto label_211a90;
        case 0x211a94u: goto label_211a94;
        case 0x211a98u: goto label_211a98;
        case 0x211a9cu: goto label_211a9c;
        case 0x211aa0u: goto label_211aa0;
        case 0x211aa4u: goto label_211aa4;
        case 0x211aa8u: goto label_211aa8;
        case 0x211aacu: goto label_211aac;
        case 0x211ab0u: goto label_211ab0;
        case 0x211ab4u: goto label_211ab4;
        case 0x211ab8u: goto label_211ab8;
        case 0x211abcu: goto label_211abc;
        default: break;
    }

    ctx->pc = 0x2116a8u;

label_2116a8:
    // 0x2116a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2116ac:
    // 0x2116ac: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2116b0:
    // 0x2116b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2116b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2116b4:
    // 0x2116b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2116b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2116b8:
    // 0x2116b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2116b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2116bc:
    // 0x2116bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2116bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2116c0:
    // 0x2116c0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2116c4:
    // 0x2116c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2116c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2116c8:
    // 0x2116c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2116c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2116cc:
    // 0x2116cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2116ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2116d0:
    // 0x2116d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2116d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2116d4:
    // 0x2116d4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2116d8:
    // 0x2116d8: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2116dc:
    // 0x2116dc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2116dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2116e0:
    // 0x2116e0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2116e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2116e4:
    // 0x2116e4: 0x8ce395a0  lw          $v1, -0x6A60($a3)
    ctx->pc = 0x2116e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940064)));
label_2116e8:
    // 0x2116e8: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x2116e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_2116ec:
    // 0x2116ec: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x2116ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
label_2116f0:
    // 0x2116f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2116f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2116f4:
    // 0x2116f4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_2116f8:
    if (ctx->pc == 0x2116F8u) {
        ctx->pc = 0x2116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116F4u;
        // 0x2116f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116FCu;
        goto label_2116fc;
    }
    ctx->pc = 0x2116F4u;
    {
        const bool branch_taken_0x2116f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116F4u;
        // 0x2116f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116f4) {
            ctx->pc = 0x211710u;
            goto label_211710;
        }
    }
    ctx->pc = 0x2116FCu;
label_2116fc:
    // 0x2116fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2116fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211700:
    // 0x211700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211704:
    // 0x211704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x211704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211708:
    // 0x211708: 0xc084cba  jal         func_2132E8
label_21170c:
    if (ctx->pc == 0x21170Cu) {
        ctx->pc = 0x21170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211708u;
        // 0x21170c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211710u;
        goto label_211710;
    }
    ctx->pc = 0x211708u;
    SET_GPR_U32(ctx, 31, 0x211710u);
    ctx->pc = 0x21170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211708u;
    // 0x21170c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132E8u, 0x211708u, 0x211710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211710u;
label_211710:
    // 0x211710: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x211710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211714:
    // 0x211714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211718:
    // 0x211718: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x211718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_21171c:
    // 0x21171c: 0x10920004  beq         $a0, $s2, . + 4 + (0x4 << 2)
label_211720:
    if (ctx->pc == 0x211720u) {
        ctx->pc = 0x211724u;
        goto label_211724;
    }
    ctx->pc = 0x21171Cu;
    {
        const bool branch_taken_0x21171c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x21171c) {
            ctx->pc = 0x211730u;
            goto label_211730;
        }
    }
    ctx->pc = 0x211724u;
label_211724:
    // 0x211724: 0xc0b1680  jal         func_2C5A00
label_211728:
    if (ctx->pc == 0x211728u) {
        ctx->pc = 0x211728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211724u;
        // 0x211728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21172Cu;
        goto label_21172c;
    }
    ctx->pc = 0x211724u;
    SET_GPR_U32(ctx, 31, 0x21172Cu);
    ctx->pc = 0x211728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211724u;
    // 0x211728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x211724u, 0x21172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21172Cu;
label_21172c:
    // 0x21172c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x21172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211730:
    // 0x211730: 0xc0c48da  jal         func_312368
label_211734:
    if (ctx->pc == 0x211734u) {
        ctx->pc = 0x211734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211730u;
        // 0x211734: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211738u;
        goto label_211738;
    }
    ctx->pc = 0x211730u;
    SET_GPR_U32(ctx, 31, 0x211738u);
    ctx->pc = 0x211734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211730u;
    // 0x211734: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x211730u, 0x211738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211738u;
label_211738:
    // 0x211738: 0xc0843aa  jal         func_210EA8
label_21173c:
    if (ctx->pc == 0x21173Cu) {
        ctx->pc = 0x21173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211738u;
        // 0x21173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211740u;
        goto label_211740;
    }
    ctx->pc = 0x211738u;
    SET_GPR_U32(ctx, 31, 0x211740u);
    ctx->pc = 0x21173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211738u;
    // 0x21173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x211738u, 0x211740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211740u;
label_211740:
    // 0x211740: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x211740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_211744:
    // 0x211744: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x211744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_211748:
    // 0x211748: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x211748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21174c:
    // 0x21174c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x21174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_211750:
    // 0x211750: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x211750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_211754:
    // 0x211754: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x211754u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_211758:
    // 0x211758: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x211758u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_21175c:
    // 0x21175c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x21175cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_211760:
    // 0x211760: 0x46000004  c1          0x4
    ctx->pc = 0x211760u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_211764:
    // 0x211764: 0xc4620130  lwc1        $f2, 0x130($v1)
    ctx->pc = 0x211764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_211768:
    // 0x211768: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x211768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21176c:
    // 0x21176c: 0x0  nop
    ctx->pc = 0x21176cu;
    // NOP
label_211770:
    // 0x211770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_211774:
    if (ctx->pc == 0x211774u) {
        ctx->pc = 0x211774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211770u;
        // 0x211774: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211778u;
        goto label_211778;
    }
    ctx->pc = 0x211770u;
    {
        const bool branch_taken_0x211770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211770u;
        // 0x211774: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211770) {
            ctx->pc = 0x21177Cu;
            goto label_21177c;
        }
    }
    ctx->pc = 0x211778u;
label_211778:
    // 0x211778: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x211778u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_21177c:
    // 0x21177c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x21177cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_211780:
    // 0x211780: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x211780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_211784:
    // 0x211784: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x211784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_211788:
    // 0x211788: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x211788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_21178c:
    // 0x21178c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x21178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_211790:
    // 0x211790: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x211790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_211794:
    // 0x211794: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_211798:
    if (ctx->pc == 0x211798u) {
        ctx->pc = 0x211798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211794u;
        // 0x211798: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21179Cu;
        goto label_21179c;
    }
    ctx->pc = 0x211794u;
    {
        const bool branch_taken_0x211794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211794u;
        // 0x211798: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211794) {
            ctx->pc = 0x2117C8u;
            goto label_2117c8;
        }
    }
    ctx->pc = 0x21179Cu;
label_21179c:
    // 0x21179c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2117a0:
    // 0x2117a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2117a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2117a4:
    // 0x2117a4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2117a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2117a8:
    // 0x2117a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2117ac:
    if (ctx->pc == 0x2117ACu) {
        ctx->pc = 0x2117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117A8u;
        // 0x2117ac: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117B0u;
        goto label_2117b0;
    }
    ctx->pc = 0x2117A8u;
    {
        const bool branch_taken_0x2117a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2117a8) {
            ctx->pc = 0x2117ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2117A8u;
            // 0x2117ac: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2117ECu;
            goto label_2117ec;
        }
    }
    ctx->pc = 0x2117B0u;
label_2117b0:
    // 0x2117b0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2117b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2117b4:
    // 0x2117b4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2117b8:
    if (ctx->pc == 0x2117B8u) {
        ctx->pc = 0x2117B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117B4u;
        // 0x2117b8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117BCu;
        goto label_2117bc;
    }
    ctx->pc = 0x2117B4u;
    {
        const bool branch_taken_0x2117b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2117b4) {
            ctx->pc = 0x2117B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2117B4u;
            // 0x2117b8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2117ECu;
            goto label_2117ec;
        }
    }
    ctx->pc = 0x2117BCu;
label_2117bc:
    // 0x2117bc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2117bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2117c0:
    // 0x2117c0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2117c4:
    if (ctx->pc == 0x2117C4u) {
        ctx->pc = 0x2117C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117C0u;
        // 0x2117c4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117C8u;
        goto label_2117c8;
    }
    ctx->pc = 0x2117C0u;
    {
        const bool branch_taken_0x2117c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2117c0) {
            ctx->pc = 0x2117C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2117C0u;
            // 0x2117c4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2117ECu;
            goto label_2117ec;
        }
    }
    ctx->pc = 0x2117C8u;
label_2117c8:
    // 0x2117c8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2117cc:
    // 0x2117cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2117ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2117d0:
    // 0x2117d0: 0xc0f7676  jal         func_3DD9D8
label_2117d4:
    if (ctx->pc == 0x2117D4u) {
        ctx->pc = 0x2117D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D0u;
        // 0x2117d4: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117D8u;
        goto label_2117d8;
    }
    ctx->pc = 0x2117D0u;
    SET_GPR_U32(ctx, 31, 0x2117D8u);
    ctx->pc = 0x2117D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117D0u;
    // 0x2117d4: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x2117D0u, 0x2117D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117D8u;
label_2117d8:
    // 0x2117d8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2117dc:
    // 0x2117dc: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x2117dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_2117e0:
    // 0x2117e0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2117e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_2117e4:
    // 0x2117e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2117e8:
    if (ctx->pc == 0x2117E8u) {
        ctx->pc = 0x2117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E4u;
        // 0x2117e8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117ECu;
        goto label_2117ec;
    }
    ctx->pc = 0x2117E4u;
    {
        const bool branch_taken_0x2117e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117E4u;
        // 0x2117e8: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117e4) {
            ctx->pc = 0x211804u;
            goto label_211804;
        }
    }
    ctx->pc = 0x2117ECu;
label_2117ec:
    // 0x2117ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2117ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2117f0:
    // 0x2117f0: 0xc0f7676  jal         func_3DD9D8
label_2117f4:
    if (ctx->pc == 0x2117F4u) {
        ctx->pc = 0x2117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117F0u;
        // 0x2117f4: 0x24843500  addiu       $a0, $a0, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117F8u;
        goto label_2117f8;
    }
    ctx->pc = 0x2117F0u;
    SET_GPR_U32(ctx, 31, 0x2117F8u);
    ctx->pc = 0x2117F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117F0u;
    // 0x2117f4: 0x24843500  addiu       $a0, $a0, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x2117F0u, 0x2117F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117F8u;
label_2117f8:
    // 0x2117f8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2117fc:
    // 0x2117fc: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2117fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_211800:
    // 0x211800: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x211800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_211804:
    // 0x211804: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x211804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_211808:
    // 0x211808: 0xc08713e  jal         func_21C4F8
label_21180c:
    if (ctx->pc == 0x21180Cu) {
        ctx->pc = 0x21180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211808u;
        // 0x21180c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211810u;
        goto label_211810;
    }
    ctx->pc = 0x211808u;
    SET_GPR_U32(ctx, 31, 0x211810u);
    ctx->pc = 0x21180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211808u;
    // 0x21180c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C4F8u, 0x211808u, 0x211810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211810u;
label_211810:
    // 0x211810: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_211814:
    // 0x211814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211818:
    // 0x211818: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x211818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_21181c:
    // 0x21181c: 0x40f809  jalr        $v0
label_211820:
    if (ctx->pc == 0x211820u) {
        ctx->pc = 0x211820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21181Cu;
        // 0x211820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211824u;
        goto label_211824;
    }
    ctx->pc = 0x21181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211824u);
        ctx->pc = 0x211820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21181Cu;
        // 0x211820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21181Cu, 0x211824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211824u;
label_211824:
    // 0x211824: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211828:
    // 0x211828: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21182c:
    // 0x21182c: 0xc0c2e94  jal         func_30BA50
label_211830:
    if (ctx->pc == 0x211830u) {
        ctx->pc = 0x211830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21182Cu;
        // 0x211830: 0x24a51478  addiu       $a1, $a1, 0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211834u;
        goto label_211834;
    }
    ctx->pc = 0x21182Cu;
    SET_GPR_U32(ctx, 31, 0x211834u);
    ctx->pc = 0x211830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21182Cu;
    // 0x211830: 0x24a51478  addiu       $a1, $a1, 0x1478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x21182Cu, 0x211834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211834u;
label_211834:
    // 0x211834: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x211834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
label_211838:
    // 0x211838: 0xc08443c  jal         func_2110F0
label_21183c:
    if (ctx->pc == 0x21183Cu) {
        ctx->pc = 0x21183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211838u;
        // 0x21183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211840u;
        goto label_211840;
    }
    ctx->pc = 0x211838u;
    SET_GPR_U32(ctx, 31, 0x211840u);
    ctx->pc = 0x21183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211838u;
    // 0x21183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110F0u, 0x211838u, 0x211840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211840u;
label_211840:
    // 0x211840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x211840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211844:
    // 0x211844: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211848:
    // 0x211848: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21184c:
    // 0x21184c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_211850:
    if (ctx->pc == 0x211850u) {
        ctx->pc = 0x211854u;
        goto label_211854;
    }
    ctx->pc = 0x21184Cu;
    {
        const bool branch_taken_0x21184c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21184c) {
            ctx->pc = 0x21186Cu;
            goto label_21186c;
        }
    }
    ctx->pc = 0x211854u;
label_211854:
    // 0x211854: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_211858:
    if (ctx->pc == 0x211858u) {
        ctx->pc = 0x211858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211854u;
        // 0x211858: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21185Cu;
        goto label_21185c;
    }
    ctx->pc = 0x211854u;
    {
        const bool branch_taken_0x211854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x211858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211854u;
        // 0x211858: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211854) {
            ctx->pc = 0x21186Cu;
            goto label_21186c;
        }
    }
    ctx->pc = 0x21185Cu;
label_21185c:
    // 0x21185c: 0xc084492  jal         func_211248
label_211860:
    if (ctx->pc == 0x211860u) {
        ctx->pc = 0x211860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21185Cu;
        // 0x211860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211864u;
        goto label_211864;
    }
    ctx->pc = 0x21185Cu;
    SET_GPR_U32(ctx, 31, 0x211864u);
    ctx->pc = 0x211860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21185Cu;
    // 0x211860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x21185Cu, 0x211864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211864u;
label_211864:
    // 0x211864: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211868:
    // 0x211868: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x211868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_21186c:
    // 0x21186c: 0xc0c48da  jal         func_312368
label_211870:
    if (ctx->pc == 0x211870u) {
        ctx->pc = 0x211870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21186Cu;
        // 0x211870: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211874u;
        goto label_211874;
    }
    ctx->pc = 0x21186Cu;
    SET_GPR_U32(ctx, 31, 0x211874u);
    ctx->pc = 0x211870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21186Cu;
    // 0x211870: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x21186Cu, 0x211874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211874u;
label_211874:
    // 0x211874: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x211874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211878:
    // 0x211878: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21187c:
    // 0x21187c: 0xc0f70ce  jal         func_3DC338
label_211880:
    if (ctx->pc == 0x211880u) {
        ctx->pc = 0x211880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21187Cu;
        // 0x211880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211884u;
        goto label_211884;
    }
    ctx->pc = 0x21187Cu;
    SET_GPR_U32(ctx, 31, 0x211884u);
    ctx->pc = 0x211880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21187Cu;
    // 0x211880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x21187Cu, 0x211884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211884u;
label_211884:
    // 0x211884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_211888:
    if (ctx->pc == 0x211888u) {
        ctx->pc = 0x211888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211884u;
        // 0x211888: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21188Cu;
        goto label_21188c;
    }
    ctx->pc = 0x211884u;
    {
        const bool branch_taken_0x211884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211884u;
        // 0x211888: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211884) {
            ctx->pc = 0x211898u;
            goto label_211898;
        }
    }
    ctx->pc = 0x21188Cu;
label_21188c:
    // 0x21188c: 0xc0c4900  jal         func_312400
label_211890:
    if (ctx->pc == 0x211890u) {
        ctx->pc = 0x211890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21188Cu;
        // 0x211890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211894u;
        goto label_211894;
    }
    ctx->pc = 0x21188Cu;
    SET_GPR_U32(ctx, 31, 0x211894u);
    ctx->pc = 0x211890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21188Cu;
    // 0x211890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x21188Cu, 0x211894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211894u;
label_211894:
    // 0x211894: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_211898:
    // 0x211898: 0xc0b1680  jal         func_2C5A00
label_21189c:
    if (ctx->pc == 0x21189Cu) {
        ctx->pc = 0x21189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211898u;
        // 0x21189c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118A0u;
        goto label_2118a0;
    }
    ctx->pc = 0x211898u;
    SET_GPR_U32(ctx, 31, 0x2118A0u);
    ctx->pc = 0x21189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211898u;
    // 0x21189c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x211898u, 0x2118A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118A0u;
label_2118a0:
    // 0x2118a0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2118a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2118a4:
    // 0x2118a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2118a8:
    if (ctx->pc == 0x2118A8u) {
        ctx->pc = 0x2118A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A4u;
        // 0x2118a8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118ACu;
        goto label_2118ac;
    }
    ctx->pc = 0x2118A4u;
    {
        const bool branch_taken_0x2118a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2118a4) {
            ctx->pc = 0x2118A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2118A4u;
            // 0x2118a8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2118C0u;
            goto label_2118c0;
        }
    }
    ctx->pc = 0x2118ACu;
label_2118ac:
    // 0x2118ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2118acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2118b0:
    // 0x2118b0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2118b4:
    // 0x2118b4: 0x40f809  jalr        $v0
label_2118b8:
    if (ctx->pc == 0x2118B8u) {
        ctx->pc = 0x2118BCu;
        goto label_2118bc;
    }
    ctx->pc = 0x2118B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2118BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118B4u, 0x2118BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118BCu;
label_2118bc:
    // 0x2118bc: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2118c0:
    // 0x2118c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2118c4:
    if (ctx->pc == 0x2118C4u) {
        ctx->pc = 0x2118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118C0u;
        // 0x2118c4: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118C8u;
        goto label_2118c8;
    }
    ctx->pc = 0x2118C0u;
    {
        const bool branch_taken_0x2118c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2118c0) {
            ctx->pc = 0x2118C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2118C0u;
            // 0x2118c4: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2118DCu;
            goto label_2118dc;
        }
    }
    ctx->pc = 0x2118C8u;
label_2118c8:
    // 0x2118c8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2118cc:
    // 0x2118cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2118d0:
    // 0x2118d0: 0xc076508  jal         func_1D9420
label_2118d4:
    if (ctx->pc == 0x2118D4u) {
        ctx->pc = 0x2118D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118D0u;
        // 0x2118d4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118D8u;
        goto label_2118d8;
    }
    ctx->pc = 0x2118D0u;
    SET_GPR_U32(ctx, 31, 0x2118D8u);
    ctx->pc = 0x2118D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118D0u;
    // 0x2118d4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9420u, 0x2118D0u, 0x2118D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118D8u;
label_2118d8:
    // 0x2118d8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2118d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2118dc:
    // 0x2118dc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2118e0:
    // 0x2118e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2118e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2118e4:
    // 0x2118e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2118e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2118e8:
    // 0x2118e8: 0xc0846b0  jal         func_211AC0
label_2118ec:
    if (ctx->pc == 0x2118ECu) {
        ctx->pc = 0x2118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E8u;
        // 0x2118ec: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118F0u;
        goto label_2118f0;
    }
    ctx->pc = 0x2118E8u;
    SET_GPR_U32(ctx, 31, 0x2118F0u);
    ctx->pc = 0x2118ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118E8u;
    // 0x2118ec: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AC0u, 0x2118E8u, 0x2118F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118F0u;
label_2118f0:
    // 0x2118f0: 0xc0857b4  jal         func_215ED0
label_2118f4:
    if (ctx->pc == 0x2118F4u) {
        ctx->pc = 0x2118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F0u;
        // 0x2118f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118F8u;
        goto label_2118f8;
    }
    ctx->pc = 0x2118F0u;
    SET_GPR_U32(ctx, 31, 0x2118F8u);
    ctx->pc = 0x2118F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118F0u;
    // 0x2118f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215ED0u, 0x2118F0u, 0x2118F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118F8u;
label_2118f8:
    // 0x2118f8: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_2118fc:
    if (ctx->pc == 0x2118FCu) {
        ctx->pc = 0x2118FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F8u;
        // 0x2118fc: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211900u;
        goto label_211900;
    }
    ctx->pc = 0x2118F8u;
    {
        const bool branch_taken_0x2118f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2118f8) {
            ctx->pc = 0x2118FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2118F8u;
            // 0x2118fc: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21190Cu;
            goto label_21190c;
        }
    }
    ctx->pc = 0x211900u;
label_211900:
    // 0x211900: 0xc0cd9a4  jal         func_336690
label_211904:
    if (ctx->pc == 0x211904u) {
        ctx->pc = 0x211904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211900u;
        // 0x211904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211908u;
        goto label_211908;
    }
    ctx->pc = 0x211900u;
    SET_GPR_U32(ctx, 31, 0x211908u);
    ctx->pc = 0x211904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211900u;
    // 0x211904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336690u, 0x211900u, 0x211908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211908u;
label_211908:
    // 0x211908: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_21190c:
    // 0x21190c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x21190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_211910:
    // 0x211910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211914:
    // 0x211914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211918:
    // 0x211918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x211918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21191c:
    // 0x21191c: 0xc084288  jal         func_210A20
label_211920:
    if (ctx->pc == 0x211920u) {
        ctx->pc = 0x211920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21191Cu;
        // 0x211920: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211924u;
        goto label_211924;
    }
    ctx->pc = 0x21191Cu;
    SET_GPR_U32(ctx, 31, 0x211924u);
    ctx->pc = 0x211920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21191Cu;
    // 0x211920: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A20u, 0x21191Cu, 0x211924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211924u;
label_211924:
    // 0x211924: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x211924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_211928:
    // 0x211928: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_21192c:
    if (ctx->pc == 0x21192Cu) {
        ctx->pc = 0x211930u;
        goto label_211930;
    }
    ctx->pc = 0x211928u;
    {
        const bool branch_taken_0x211928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211928) {
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x211930u;
label_211930:
    // 0x211930: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x211930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_211934:
    // 0x211934: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x211934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211938:
    // 0x211938: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x211938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21193c:
    // 0x21193c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x21193cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_211940:
    // 0x211940: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_211944:
    if (ctx->pc == 0x211944u) {
        ctx->pc = 0x211944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211940u;
        // 0x211944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211948u;
        goto label_211948;
    }
    ctx->pc = 0x211940u;
    {
        const bool branch_taken_0x211940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211940u;
        // 0x211944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211940) {
            ctx->pc = 0x211960u;
            goto label_211960;
        }
    }
    ctx->pc = 0x211948u;
label_211948:
    // 0x211948: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x211948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21194c:
    // 0x21194c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_211950:
    if (ctx->pc == 0x211950u) {
        ctx->pc = 0x211950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21194Cu;
        // 0x211950: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211954u;
        goto label_211954;
    }
    ctx->pc = 0x21194Cu;
    {
        const bool branch_taken_0x21194c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21194Cu;
        // 0x211950: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21194c) {
            ctx->pc = 0x21195Cu;
            goto label_21195c;
        }
    }
    ctx->pc = 0x211954u;
label_211954:
    // 0x211954: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_211958:
    if (ctx->pc == 0x211958u) {
        ctx->pc = 0x211958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211954u;
        // 0x211958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21195Cu;
        goto label_21195c;
    }
    ctx->pc = 0x211954u;
    {
        const bool branch_taken_0x211954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211954u;
        // 0x211958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211954) {
            ctx->pc = 0x211960u;
            goto label_211960;
        }
    }
    ctx->pc = 0x21195Cu;
label_21195c:
    // 0x21195c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211960:
    // 0x211960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_211964:
    // 0x211964: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_211968:
    if (ctx->pc == 0x211968u) {
        ctx->pc = 0x211968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211964u;
        // 0x211968: 0x3c030006  lui         $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21196Cu;
        goto label_21196c;
    }
    ctx->pc = 0x211964u;
    {
        const bool branch_taken_0x211964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211964u;
        // 0x211968: 0x3c030006  lui         $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211964) {
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x21196Cu;
label_21196c:
    // 0x21196c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x21196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_211970:
    // 0x211970: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x211970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_211974:
    // 0x211974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_211978:
    // 0x211978: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
label_21197c:
    if (ctx->pc == 0x21197Cu) {
        ctx->pc = 0x211980u;
        goto label_211980;
    }
    ctx->pc = 0x211978u;
    {
        const bool branch_taken_0x211978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x211978) {
            ctx->pc = 0x211A60u;
            goto label_211a60;
        }
    }
    ctx->pc = 0x211980u;
label_211980:
    // 0x211980: 0xc079de6  jal         func_1E7798
label_211984:
    if (ctx->pc == 0x211984u) {
        ctx->pc = 0x211984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211980u;
        // 0x211984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211988u;
        goto label_211988;
    }
    ctx->pc = 0x211980u;
    SET_GPR_U32(ctx, 31, 0x211988u);
    ctx->pc = 0x211984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211980u;
    // 0x211984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7798u, 0x211980u, 0x211988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211988u;
label_211988:
    // 0x211988: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_21198c:
    // 0x21198c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_211990:
    // 0x211990: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_211994:
    // 0x211994: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x211994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_211998:
    // 0x211998: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_21199c:
    // 0x21199c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2119a0:
    // 0x2119a0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2119a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2119a4:
    // 0x2119a4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2119a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2119a8:
    // 0x2119a8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2119a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2119ac:
    // 0x2119ac: 0xc079f50  jal         func_1E7D40
label_2119b0:
    if (ctx->pc == 0x2119B0u) {
        ctx->pc = 0x2119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ACu;
        // 0x2119b0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119B4u;
        goto label_2119b4;
    }
    ctx->pc = 0x2119ACu;
    SET_GPR_U32(ctx, 31, 0x2119B4u);
    ctx->pc = 0x2119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119ACu;
    // 0x2119b0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D40u, 0x2119ACu, 0x2119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119B4u;
label_2119b4:
    // 0x2119b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2119b8:
    // 0x2119b8: 0x8c6291f0  lw          $v0, -0x6E10($v1)
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939120)));
label_2119bc:
    // 0x2119bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2119c0:
    if (ctx->pc == 0x2119C0u) {
        ctx->pc = 0x2119C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119BCu;
        // 0x2119c0: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119C4u;
        goto label_2119c4;
    }
    ctx->pc = 0x2119BCu;
    {
        const bool branch_taken_0x2119bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119BCu;
        // 0x2119c0: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119bc) {
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x2119C4u;
label_2119c4:
    // 0x2119c4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2119c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_2119c8:
    // 0x2119c8: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2119c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2119cc:
    // 0x2119cc: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2119d0:
    // 0x2119d0: 0x8e8291ec  lw          $v0, -0x6E14($s4)
    ctx->pc = 0x2119d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939116)));
label_2119d4:
    // 0x2119d4: 0x0  nop
    ctx->pc = 0x2119d4u;
    // NOP
label_2119d8:
    // 0x2119d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2119dc:
    // 0x2119dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2119dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2119e0:
    // 0x2119e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2119e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2119e4:
    // 0x2119e4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2119e8:
    // 0x2119e8: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2119e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2119ec:
    // 0x2119ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2119f0:
    if (ctx->pc == 0x2119F0u) {
        ctx->pc = 0x2119F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ECu;
        // 0x2119f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119F4u;
        goto label_2119f4;
    }
    ctx->pc = 0x2119ECu;
    {
        const bool branch_taken_0x2119ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ECu;
        // 0x2119f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119ec) {
            ctx->pc = 0x2119F8u;
            goto label_2119f8;
        }
    }
    ctx->pc = 0x2119F4u;
label_2119f4:
    // 0x2119f4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2119f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2119f8:
    // 0x2119f8: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x2119f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_2119fc:
    // 0x2119fc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_211a00:
    if (ctx->pc == 0x211A00u) {
        ctx->pc = 0x211A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119FCu;
        // 0x211a00: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A04u;
        goto label_211a04;
    }
    ctx->pc = 0x2119FCu;
    {
        const bool branch_taken_0x2119fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119fc) {
            ctx->pc = 0x211A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2119FCu;
            // 0x211a00: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A48u;
            goto label_211a48;
        }
    }
    ctx->pc = 0x211A04u;
label_211a04:
    // 0x211a04: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x211a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_211a08:
    // 0x211a08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211a0c:
    // 0x211a0c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_211a10:
    // 0x211a10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x211a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_211a14:
    // 0x211a14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_211a18:
    if (ctx->pc == 0x211A18u) {
        ctx->pc = 0x211A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A14u;
        // 0x211a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A1Cu;
        goto label_211a1c;
    }
    ctx->pc = 0x211A14u;
    {
        const bool branch_taken_0x211a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A14u;
        // 0x211a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a14) {
            ctx->pc = 0x211A30u;
            goto label_211a30;
        }
    }
    ctx->pc = 0x211A1Cu;
label_211a1c:
    // 0x211a1c: 0x50730005  beql        $v1, $s3, . + 4 + (0x5 << 2)
label_211a20:
    if (ctx->pc == 0x211A20u) {
        ctx->pc = 0x211A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A1Cu;
        // 0x211a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A24u;
        goto label_211a24;
    }
    ctx->pc = 0x211A1Cu;
    {
        const bool branch_taken_0x211a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x211a1c) {
            ctx->pc = 0x211A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A1Cu;
            // 0x211a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A34u;
            goto label_211a34;
        }
    }
    ctx->pc = 0x211A24u;
label_211a24:
    // 0x211a24: 0x14720002  bne         $v1, $s2, . + 4 + (0x2 << 2)
label_211a28:
    if (ctx->pc == 0x211A28u) {
        ctx->pc = 0x211A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A24u;
        // 0x211a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A2Cu;
        goto label_211a2c;
    }
    ctx->pc = 0x211A24u;
    {
        const bool branch_taken_0x211a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x211A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A24u;
        // 0x211a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a24) {
            ctx->pc = 0x211A30u;
            goto label_211a30;
        }
    }
    ctx->pc = 0x211A2Cu;
label_211a2c:
    // 0x211a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211a30:
    // 0x211a30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_211a34:
    // 0x211a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_211a38:
    if (ctx->pc == 0x211A38u) {
        ctx->pc = 0x211A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A34u;
        // 0x211a38: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A3Cu;
        goto label_211a3c;
    }
    ctx->pc = 0x211A34u;
    {
        const bool branch_taken_0x211a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A34u;
        // 0x211a38: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a34) {
            ctx->pc = 0x211A48u;
            goto label_211a48;
        }
    }
    ctx->pc = 0x211A3Cu;
label_211a3c:
    // 0x211a3c: 0xc0837b4  jal         func_20DED0
label_211a40:
    if (ctx->pc == 0x211A40u) {
        ctx->pc = 0x211A44u;
        goto label_211a44;
    }
    ctx->pc = 0x211A3Cu;
    SET_GPR_U32(ctx, 31, 0x211A44u);
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x211A3Cu, 0x211A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A44u;
label_211a44:
    // 0x211a44: 0x8ea291f0  lw          $v0, -0x6E10($s5)
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
label_211a48:
    // 0x211a48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211a4c:
    // 0x211a4c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x211a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_211a50:
    // 0x211a50: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_211a54:
    if (ctx->pc == 0x211A54u) {
        ctx->pc = 0x211A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A50u;
        // 0x211a54: 0x8e8291ec  lw          $v0, -0x6E14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A58u;
        goto label_211a58;
    }
    ctx->pc = 0x211A50u;
    {
        const bool branch_taken_0x211a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A50u;
        // 0x211a54: 0x8e8291ec  lw          $v0, -0x6E14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a50) {
            ctx->pc = 0x2119D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2119d8;
        }
    }
    ctx->pc = 0x211A58u;
label_211a58:
    // 0x211a58: 0x1000000e  b           . + 4 + (0xE << 2)
label_211a5c:
    if (ctx->pc == 0x211A5Cu) {
        ctx->pc = 0x211A60u;
        goto label_211a60;
    }
    ctx->pc = 0x211A58u;
    {
        const bool branch_taken_0x211a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a58) {
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x211A60u;
label_211a60:
    // 0x211a60: 0xc079686  jal         func_1E5A18
label_211a64:
    if (ctx->pc == 0x211A64u) {
        ctx->pc = 0x211A68u;
        goto label_211a68;
    }
    ctx->pc = 0x211A60u;
    SET_GPR_U32(ctx, 31, 0x211A68u);
    ctx->pc = 0x1E5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A18u, 0x211A60u, 0x211A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A68u;
label_211a68:
    // 0x211a68: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x211a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_211a6c:
    // 0x211a6c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x211a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
label_211a70:
    // 0x211a70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x211a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_211a74:
    // 0x211a74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x211a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_211a78:
    // 0x211a78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x211a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211a7c:
    // 0x211a7c: 0xc0798fc  jal         func_1E63F0
label_211a80:
    if (ctx->pc == 0x211A80u) {
        ctx->pc = 0x211A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A7Cu;
        // 0x211a80: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A84u;
        goto label_211a84;
    }
    ctx->pc = 0x211A7Cu;
    SET_GPR_U32(ctx, 31, 0x211A84u);
    ctx->pc = 0x211A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A7Cu;
    // 0x211a80: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63F0u, 0x211A7Cu, 0x211A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A84u;
label_211a84:
    // 0x211a84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_211a88:
    if (ctx->pc == 0x211A88u) {
        ctx->pc = 0x211A8Cu;
        goto label_211a8c;
    }
    ctx->pc = 0x211A84u;
    {
        const bool branch_taken_0x211a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a84) {
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x211A8Cu;
label_211a8c:
    // 0x211a8c: 0xc0837b4  jal         func_20DED0
label_211a90:
    if (ctx->pc == 0x211A90u) {
        ctx->pc = 0x211A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A8Cu;
        // 0x211a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A94u;
        goto label_211a94;
    }
    ctx->pc = 0x211A8Cu;
    SET_GPR_U32(ctx, 31, 0x211A94u);
    ctx->pc = 0x211A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A8Cu;
    // 0x211a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x211A8Cu, 0x211A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A94u;
label_211a94:
    // 0x211a94: 0xc0843ea  jal         func_210FA8
label_211a98:
    if (ctx->pc == 0x211A98u) {
        ctx->pc = 0x211A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A94u;
        // 0x211a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A9Cu;
        goto label_211a9c;
    }
    ctx->pc = 0x211A94u;
    SET_GPR_U32(ctx, 31, 0x211A9Cu);
    ctx->pc = 0x211A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A94u;
    // 0x211a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x211A94u, 0x211A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A9Cu;
label_211a9c:
    // 0x211a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211aa0:
    // 0x211aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_211aa4:
    // 0x211aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_211aa8:
    // 0x211aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_211aac:
    // 0x211aac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_211ab0:
    // 0x211ab0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x211ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_211ab4:
    // 0x211ab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x211ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_211ab8:
    // 0x211ab8: 0x3e00008  jr          $ra
label_211abc:
    if (ctx->pc == 0x211ABCu) {
        ctx->pc = 0x211ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB8u;
        // 0x211abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AC0u;
        goto label_fallthrough_0x211ab8;
    }
    ctx->pc = 0x211AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB8u;
        // 0x211abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x211ab8:
    ctx->pc = 0x211AC0u;
}
