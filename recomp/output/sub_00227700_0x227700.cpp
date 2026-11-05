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

// Function: sub_00227700
// Address: 0x227700 - 0x227b78
void sub_00227700_0x227700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227700_0x227700");
#endif

    switch (ctx->pc) {
        case 0x227700u: goto label_227700;
        case 0x227704u: goto label_227704;
        case 0x227708u: goto label_227708;
        case 0x22770cu: goto label_22770c;
        case 0x227710u: goto label_227710;
        case 0x227714u: goto label_227714;
        case 0x227718u: goto label_227718;
        case 0x22771cu: goto label_22771c;
        case 0x227720u: goto label_227720;
        case 0x227724u: goto label_227724;
        case 0x227728u: goto label_227728;
        case 0x22772cu: goto label_22772c;
        case 0x227730u: goto label_227730;
        case 0x227734u: goto label_227734;
        case 0x227738u: goto label_227738;
        case 0x22773cu: goto label_22773c;
        case 0x227740u: goto label_227740;
        case 0x227744u: goto label_227744;
        case 0x227748u: goto label_227748;
        case 0x22774cu: goto label_22774c;
        case 0x227750u: goto label_227750;
        case 0x227754u: goto label_227754;
        case 0x227758u: goto label_227758;
        case 0x22775cu: goto label_22775c;
        case 0x227760u: goto label_227760;
        case 0x227764u: goto label_227764;
        case 0x227768u: goto label_227768;
        case 0x22776cu: goto label_22776c;
        case 0x227770u: goto label_227770;
        case 0x227774u: goto label_227774;
        case 0x227778u: goto label_227778;
        case 0x22777cu: goto label_22777c;
        case 0x227780u: goto label_227780;
        case 0x227784u: goto label_227784;
        case 0x227788u: goto label_227788;
        case 0x22778cu: goto label_22778c;
        case 0x227790u: goto label_227790;
        case 0x227794u: goto label_227794;
        case 0x227798u: goto label_227798;
        case 0x22779cu: goto label_22779c;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277a4u: goto label_2277a4;
        case 0x2277a8u: goto label_2277a8;
        case 0x2277acu: goto label_2277ac;
        case 0x2277b0u: goto label_2277b0;
        case 0x2277b4u: goto label_2277b4;
        case 0x2277b8u: goto label_2277b8;
        case 0x2277bcu: goto label_2277bc;
        case 0x2277c0u: goto label_2277c0;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277c8u: goto label_2277c8;
        case 0x2277ccu: goto label_2277cc;
        case 0x2277d0u: goto label_2277d0;
        case 0x2277d4u: goto label_2277d4;
        case 0x2277d8u: goto label_2277d8;
        case 0x2277dcu: goto label_2277dc;
        case 0x2277e0u: goto label_2277e0;
        case 0x2277e4u: goto label_2277e4;
        case 0x2277e8u: goto label_2277e8;
        case 0x2277ecu: goto label_2277ec;
        case 0x2277f0u: goto label_2277f0;
        case 0x2277f4u: goto label_2277f4;
        case 0x2277f8u: goto label_2277f8;
        case 0x2277fcu: goto label_2277fc;
        case 0x227800u: goto label_227800;
        case 0x227804u: goto label_227804;
        case 0x227808u: goto label_227808;
        case 0x22780cu: goto label_22780c;
        case 0x227810u: goto label_227810;
        case 0x227814u: goto label_227814;
        case 0x227818u: goto label_227818;
        case 0x22781cu: goto label_22781c;
        case 0x227820u: goto label_227820;
        case 0x227824u: goto label_227824;
        case 0x227828u: goto label_227828;
        case 0x22782cu: goto label_22782c;
        case 0x227830u: goto label_227830;
        case 0x227834u: goto label_227834;
        case 0x227838u: goto label_227838;
        case 0x22783cu: goto label_22783c;
        case 0x227840u: goto label_227840;
        case 0x227844u: goto label_227844;
        case 0x227848u: goto label_227848;
        case 0x22784cu: goto label_22784c;
        case 0x227850u: goto label_227850;
        case 0x227854u: goto label_227854;
        case 0x227858u: goto label_227858;
        case 0x22785cu: goto label_22785c;
        case 0x227860u: goto label_227860;
        case 0x227864u: goto label_227864;
        case 0x227868u: goto label_227868;
        case 0x22786cu: goto label_22786c;
        case 0x227870u: goto label_227870;
        case 0x227874u: goto label_227874;
        case 0x227878u: goto label_227878;
        case 0x22787cu: goto label_22787c;
        case 0x227880u: goto label_227880;
        case 0x227884u: goto label_227884;
        case 0x227888u: goto label_227888;
        case 0x22788cu: goto label_22788c;
        case 0x227890u: goto label_227890;
        case 0x227894u: goto label_227894;
        case 0x227898u: goto label_227898;
        case 0x22789cu: goto label_22789c;
        case 0x2278a0u: goto label_2278a0;
        case 0x2278a4u: goto label_2278a4;
        case 0x2278a8u: goto label_2278a8;
        case 0x2278acu: goto label_2278ac;
        case 0x2278b0u: goto label_2278b0;
        case 0x2278b4u: goto label_2278b4;
        case 0x2278b8u: goto label_2278b8;
        case 0x2278bcu: goto label_2278bc;
        case 0x2278c0u: goto label_2278c0;
        case 0x2278c4u: goto label_2278c4;
        case 0x2278c8u: goto label_2278c8;
        case 0x2278ccu: goto label_2278cc;
        case 0x2278d0u: goto label_2278d0;
        case 0x2278d4u: goto label_2278d4;
        case 0x2278d8u: goto label_2278d8;
        case 0x2278dcu: goto label_2278dc;
        case 0x2278e0u: goto label_2278e0;
        case 0x2278e4u: goto label_2278e4;
        case 0x2278e8u: goto label_2278e8;
        case 0x2278ecu: goto label_2278ec;
        case 0x2278f0u: goto label_2278f0;
        case 0x2278f4u: goto label_2278f4;
        case 0x2278f8u: goto label_2278f8;
        case 0x2278fcu: goto label_2278fc;
        case 0x227900u: goto label_227900;
        case 0x227904u: goto label_227904;
        case 0x227908u: goto label_227908;
        case 0x22790cu: goto label_22790c;
        case 0x227910u: goto label_227910;
        case 0x227914u: goto label_227914;
        case 0x227918u: goto label_227918;
        case 0x22791cu: goto label_22791c;
        case 0x227920u: goto label_227920;
        case 0x227924u: goto label_227924;
        case 0x227928u: goto label_227928;
        case 0x22792cu: goto label_22792c;
        case 0x227930u: goto label_227930;
        case 0x227934u: goto label_227934;
        case 0x227938u: goto label_227938;
        case 0x22793cu: goto label_22793c;
        case 0x227940u: goto label_227940;
        case 0x227944u: goto label_227944;
        case 0x227948u: goto label_227948;
        case 0x22794cu: goto label_22794c;
        case 0x227950u: goto label_227950;
        case 0x227954u: goto label_227954;
        case 0x227958u: goto label_227958;
        case 0x22795cu: goto label_22795c;
        case 0x227960u: goto label_227960;
        case 0x227964u: goto label_227964;
        case 0x227968u: goto label_227968;
        case 0x22796cu: goto label_22796c;
        case 0x227970u: goto label_227970;
        case 0x227974u: goto label_227974;
        case 0x227978u: goto label_227978;
        case 0x22797cu: goto label_22797c;
        case 0x227980u: goto label_227980;
        case 0x227984u: goto label_227984;
        case 0x227988u: goto label_227988;
        case 0x22798cu: goto label_22798c;
        case 0x227990u: goto label_227990;
        case 0x227994u: goto label_227994;
        case 0x227998u: goto label_227998;
        case 0x22799cu: goto label_22799c;
        case 0x2279a0u: goto label_2279a0;
        case 0x2279a4u: goto label_2279a4;
        case 0x2279a8u: goto label_2279a8;
        case 0x2279acu: goto label_2279ac;
        case 0x2279b0u: goto label_2279b0;
        case 0x2279b4u: goto label_2279b4;
        case 0x2279b8u: goto label_2279b8;
        case 0x2279bcu: goto label_2279bc;
        case 0x2279c0u: goto label_2279c0;
        case 0x2279c4u: goto label_2279c4;
        case 0x2279c8u: goto label_2279c8;
        case 0x2279ccu: goto label_2279cc;
        case 0x2279d0u: goto label_2279d0;
        case 0x2279d4u: goto label_2279d4;
        case 0x2279d8u: goto label_2279d8;
        case 0x2279dcu: goto label_2279dc;
        case 0x2279e0u: goto label_2279e0;
        case 0x2279e4u: goto label_2279e4;
        case 0x2279e8u: goto label_2279e8;
        case 0x2279ecu: goto label_2279ec;
        case 0x2279f0u: goto label_2279f0;
        case 0x2279f4u: goto label_2279f4;
        case 0x2279f8u: goto label_2279f8;
        case 0x2279fcu: goto label_2279fc;
        case 0x227a00u: goto label_227a00;
        case 0x227a04u: goto label_227a04;
        case 0x227a08u: goto label_227a08;
        case 0x227a0cu: goto label_227a0c;
        case 0x227a10u: goto label_227a10;
        case 0x227a14u: goto label_227a14;
        case 0x227a18u: goto label_227a18;
        case 0x227a1cu: goto label_227a1c;
        case 0x227a20u: goto label_227a20;
        case 0x227a24u: goto label_227a24;
        case 0x227a28u: goto label_227a28;
        case 0x227a2cu: goto label_227a2c;
        case 0x227a30u: goto label_227a30;
        case 0x227a34u: goto label_227a34;
        case 0x227a38u: goto label_227a38;
        case 0x227a3cu: goto label_227a3c;
        case 0x227a40u: goto label_227a40;
        case 0x227a44u: goto label_227a44;
        case 0x227a48u: goto label_227a48;
        case 0x227a4cu: goto label_227a4c;
        case 0x227a50u: goto label_227a50;
        case 0x227a54u: goto label_227a54;
        case 0x227a58u: goto label_227a58;
        case 0x227a5cu: goto label_227a5c;
        case 0x227a60u: goto label_227a60;
        case 0x227a64u: goto label_227a64;
        case 0x227a68u: goto label_227a68;
        case 0x227a6cu: goto label_227a6c;
        case 0x227a70u: goto label_227a70;
        case 0x227a74u: goto label_227a74;
        case 0x227a78u: goto label_227a78;
        case 0x227a7cu: goto label_227a7c;
        case 0x227a80u: goto label_227a80;
        case 0x227a84u: goto label_227a84;
        case 0x227a88u: goto label_227a88;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a90u: goto label_227a90;
        case 0x227a94u: goto label_227a94;
        case 0x227a98u: goto label_227a98;
        case 0x227a9cu: goto label_227a9c;
        case 0x227aa0u: goto label_227aa0;
        case 0x227aa4u: goto label_227aa4;
        case 0x227aa8u: goto label_227aa8;
        case 0x227aacu: goto label_227aac;
        case 0x227ab0u: goto label_227ab0;
        case 0x227ab4u: goto label_227ab4;
        case 0x227ab8u: goto label_227ab8;
        case 0x227abcu: goto label_227abc;
        case 0x227ac0u: goto label_227ac0;
        case 0x227ac4u: goto label_227ac4;
        case 0x227ac8u: goto label_227ac8;
        case 0x227accu: goto label_227acc;
        case 0x227ad0u: goto label_227ad0;
        case 0x227ad4u: goto label_227ad4;
        case 0x227ad8u: goto label_227ad8;
        case 0x227adcu: goto label_227adc;
        case 0x227ae0u: goto label_227ae0;
        case 0x227ae4u: goto label_227ae4;
        case 0x227ae8u: goto label_227ae8;
        case 0x227aecu: goto label_227aec;
        case 0x227af0u: goto label_227af0;
        case 0x227af4u: goto label_227af4;
        case 0x227af8u: goto label_227af8;
        case 0x227afcu: goto label_227afc;
        case 0x227b00u: goto label_227b00;
        case 0x227b04u: goto label_227b04;
        case 0x227b08u: goto label_227b08;
        case 0x227b0cu: goto label_227b0c;
        case 0x227b10u: goto label_227b10;
        case 0x227b14u: goto label_227b14;
        case 0x227b18u: goto label_227b18;
        case 0x227b1cu: goto label_227b1c;
        case 0x227b20u: goto label_227b20;
        case 0x227b24u: goto label_227b24;
        case 0x227b28u: goto label_227b28;
        case 0x227b2cu: goto label_227b2c;
        case 0x227b30u: goto label_227b30;
        case 0x227b34u: goto label_227b34;
        case 0x227b38u: goto label_227b38;
        case 0x227b3cu: goto label_227b3c;
        case 0x227b40u: goto label_227b40;
        case 0x227b44u: goto label_227b44;
        case 0x227b48u: goto label_227b48;
        case 0x227b4cu: goto label_227b4c;
        case 0x227b50u: goto label_227b50;
        case 0x227b54u: goto label_227b54;
        case 0x227b58u: goto label_227b58;
        case 0x227b5cu: goto label_227b5c;
        case 0x227b60u: goto label_227b60;
        case 0x227b64u: goto label_227b64;
        case 0x227b68u: goto label_227b68;
        case 0x227b6cu: goto label_227b6c;
        case 0x227b70u: goto label_227b70;
        case 0x227b74u: goto label_227b74;
        default: break;
    }

    ctx->pc = 0x227700u;

label_227700:
    // 0x227700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_227704:
    // 0x227704: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x227704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_227708:
    // 0x227708: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x227708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_22770c:
    // 0x22770c: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
label_227710:
    // 0x227710: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227714:
    // 0x227714: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x227714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_227718:
    // 0x227718: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x227718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_22771c:
    // 0x22771c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_227720:
    // 0x227720: 0x265304bc  addiu       $s3, $s2, 0x4BC
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1212));
label_227724:
    // 0x227724: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x227724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_227728:
    // 0x227728: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22772c:
    // 0x22772c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_227730:
    // 0x227730: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x227730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_227734:
    // 0x227734: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x227734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_227738:
    // 0x227738: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x227738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_22773c:
    // 0x22773c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x22773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_227740:
    // 0x227740: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x227740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_227744:
    // 0x227744: 0xc0837a0  jal         func_20DE80
label_227748:
    if (ctx->pc == 0x227748u) {
        ctx->pc = 0x227748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227744u;
        // 0x227748: 0xae420218  sw          $v0, 0x218($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22774Cu;
        goto label_22774c;
    }
    ctx->pc = 0x227744u;
    SET_GPR_U32(ctx, 31, 0x22774Cu);
    ctx->pc = 0x227748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227744u;
    // 0x227748: 0xae420218  sw          $v0, 0x218($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE80u, 0x227744u, 0x22774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22774Cu;
label_22774c:
    // 0x22774c: 0x0  nop
    ctx->pc = 0x22774cu;
    // NOP
label_227750:
    // 0x227750: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x227750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_227754:
    // 0x227754: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x227754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_227758:
    // 0x227758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22775c:
    // 0x22775c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_227760:
    // 0x227760: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227764:
    // 0x227764: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_227768:
    if (ctx->pc == 0x227768u) {
        ctx->pc = 0x227768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227764u;
        // 0x227768: 0x66310001  daddiu      $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22776Cu;
        goto label_22776c;
    }
    ctx->pc = 0x227764u;
    {
        const bool branch_taken_0x227764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227764u;
        // 0x227768: 0x66310001  daddiu      $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227764) {
            ctx->pc = 0x227778u;
            goto label_227778;
        }
    }
    ctx->pc = 0x22776Cu;
label_22776c:
    // 0x22776c: 0xc0b0f1a  jal         func_2C3C68
label_227770:
    if (ctx->pc == 0x227770u) {
        ctx->pc = 0x227774u;
        goto label_227774;
    }
    ctx->pc = 0x22776Cu;
    SET_GPR_U32(ctx, 31, 0x227774u);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x22776Cu, 0x227774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227774u;
label_227774:
    // 0x227774: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x227774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_227778:
    // 0x227778: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x227778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_22777c:
    // 0x22777c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_227780:
    if (ctx->pc == 0x227780u) {
        ctx->pc = 0x227780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22777Cu;
        // 0x227780: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227784u;
        goto label_227784;
    }
    ctx->pc = 0x22777Cu;
    {
        const bool branch_taken_0x22777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22777Cu;
        // 0x227780: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22777c) {
            ctx->pc = 0x227750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227750;
        }
    }
    ctx->pc = 0x227784u;
label_227784:
    // 0x227784: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x227784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_227788:
    // 0x227788: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_22778c:
    if (ctx->pc == 0x22778Cu) {
        ctx->pc = 0x22778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227788u;
        // 0x22778c: 0x8e440388  lw          $a0, 0x388($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227790u;
        goto label_227790;
    }
    ctx->pc = 0x227788u;
    {
        const bool branch_taken_0x227788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227788) {
            ctx->pc = 0x22778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227788u;
            // 0x22778c: 0x8e440388  lw          $a0, 0x388($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22779Cu;
            goto label_22779c;
        }
    }
    ctx->pc = 0x227790u;
label_227790:
    // 0x227790: 0xc0bda6c  jal         func_2F69B0
label_227794:
    if (ctx->pc == 0x227794u) {
        ctx->pc = 0x227794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227790u;
        // 0x227794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227798u;
        goto label_227798;
    }
    ctx->pc = 0x227790u;
    SET_GPR_U32(ctx, 31, 0x227798u);
    ctx->pc = 0x227794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227790u;
    // 0x227794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F69B0u, 0x227790u, 0x227798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227798u;
label_227798:
    // 0x227798: 0x8e440388  lw          $a0, 0x388($s2)
    ctx->pc = 0x227798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
label_22779c:
    // 0x22779c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2277a0:
    if (ctx->pc == 0x2277A0u) {
        ctx->pc = 0x2277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22779Cu;
        // 0x2277a0: 0x924206fc  lbu         $v0, 0x6FC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277A4u;
        goto label_2277a4;
    }
    ctx->pc = 0x22779Cu;
    {
        const bool branch_taken_0x22779c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22779c) {
            ctx->pc = 0x2277A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22779Cu;
            // 0x2277a0: 0x924206fc  lbu         $v0, 0x6FC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2277BCu;
            goto label_2277bc;
        }
    }
    ctx->pc = 0x2277A4u;
label_2277a4:
    // 0x2277a4: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2277a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2277a8:
    // 0x2277a8: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_2277ac:
    if (ctx->pc == 0x2277ACu) {
        ctx->pc = 0x2277ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277A8u;
        // 0x2277ac: 0x924206fc  lbu         $v0, 0x6FC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277B0u;
        goto label_2277b0;
    }
    ctx->pc = 0x2277A8u;
    {
        const bool branch_taken_0x2277a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2277a8) {
            ctx->pc = 0x2277ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2277A8u;
            // 0x2277ac: 0x924206fc  lbu         $v0, 0x6FC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2277BCu;
            goto label_2277bc;
        }
    }
    ctx->pc = 0x2277B0u;
label_2277b0:
    // 0x2277b0: 0xc09c07c  jal         func_2701F0
label_2277b4:
    if (ctx->pc == 0x2277B4u) {
        ctx->pc = 0x2277B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B0u;
        // 0x2277b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277B8u;
        goto label_2277b8;
    }
    ctx->pc = 0x2277B0u;
    SET_GPR_U32(ctx, 31, 0x2277B8u);
    ctx->pc = 0x2277B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277B0u;
    // 0x2277b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x2277B0u, 0x2277B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277B8u;
label_2277b8:
    // 0x2277b8: 0x924206fc  lbu         $v0, 0x6FC($s2)
    ctx->pc = 0x2277b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
label_2277bc:
    // 0x2277bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2277c0:
    if (ctx->pc == 0x2277C0u) {
        ctx->pc = 0x2277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277BCu;
        // 0x2277c0: 0x92420708  lbu         $v0, 0x708($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277C4u;
        goto label_2277c4;
    }
    ctx->pc = 0x2277BCu;
    {
        const bool branch_taken_0x2277bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2277bc) {
            ctx->pc = 0x2277C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2277BCu;
            // 0x2277c0: 0x92420708  lbu         $v0, 0x708($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2277D0u;
            goto label_2277d0;
        }
    }
    ctx->pc = 0x2277C4u;
label_2277c4:
    // 0x2277c4: 0xc089faa  jal         func_227EA8
label_2277c8:
    if (ctx->pc == 0x2277C8u) {
        ctx->pc = 0x2277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277C4u;
        // 0x2277c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277CCu;
        goto label_2277cc;
    }
    ctx->pc = 0x2277C4u;
    SET_GPR_U32(ctx, 31, 0x2277CCu);
    ctx->pc = 0x2277C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277C4u;
    // 0x2277c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EA8u, 0x2277C4u, 0x2277CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277CCu;
label_2277cc:
    // 0x2277cc: 0x92420708  lbu         $v0, 0x708($s2)
    ctx->pc = 0x2277ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1800)));
label_2277d0:
    // 0x2277d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2277d4:
    if (ctx->pc == 0x2277D4u) {
        ctx->pc = 0x2277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277D0u;
        // 0x2277d4: 0x8e45048c  lw          $a1, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277D8u;
        goto label_2277d8;
    }
    ctx->pc = 0x2277D0u;
    {
        const bool branch_taken_0x2277d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2277d0) {
            ctx->pc = 0x2277D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2277D0u;
            // 0x2277d4: 0x8e45048c  lw          $a1, 0x48C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2277E8u;
            goto label_2277e8;
        }
    }
    ctx->pc = 0x2277D8u;
label_2277d8:
    // 0x2277d8: 0xc089faa  jal         func_227EA8
label_2277dc:
    if (ctx->pc == 0x2277DCu) {
        ctx->pc = 0x2277DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277D8u;
        // 0x2277dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277E0u;
        goto label_2277e0;
    }
    ctx->pc = 0x2277D8u;
    SET_GPR_U32(ctx, 31, 0x2277E0u);
    ctx->pc = 0x2277DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277D8u;
    // 0x2277dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EA8u, 0x2277D8u, 0x2277E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277E0u;
label_2277e0:
    // 0x2277e0: 0xa2400708  sb          $zero, 0x708($s2)
    ctx->pc = 0x2277e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1800), (uint8_t)GPR_U32(ctx, 0));
label_2277e4:
    // 0x2277e4: 0x8e45048c  lw          $a1, 0x48C($s2)
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_2277e8:
    // 0x2277e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2277ec:
    if (ctx->pc == 0x2277ECu) {
        ctx->pc = 0x2277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277E8u;
        // 0x2277ec: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277F0u;
        goto label_2277f0;
    }
    ctx->pc = 0x2277E8u;
    {
        const bool branch_taken_0x2277e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277E8u;
        // 0x2277ec: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277e8) {
            ctx->pc = 0x2277F8u;
            goto label_2277f8;
        }
    }
    ctx->pc = 0x2277F0u;
label_2277f0:
    // 0x2277f0: 0xc0b2b08  jal         func_2CAC20
label_2277f4:
    if (ctx->pc == 0x2277F4u) {
        ctx->pc = 0x2277F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277F0u;
        // 0x2277f4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277F8u;
        goto label_2277f8;
    }
    ctx->pc = 0x2277F0u;
    SET_GPR_U32(ctx, 31, 0x2277F8u);
    ctx->pc = 0x2277F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277F0u;
    // 0x2277f4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2277F0u, 0x2277F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277F8u;
label_2277f8:
    // 0x2277f8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2277fc:
    // 0x2277fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_227800:
    if (ctx->pc == 0x227800u) {
        ctx->pc = 0x227800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277FCu;
        // 0x227800: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227804u;
        goto label_227804;
    }
    ctx->pc = 0x2277FCu;
    {
        const bool branch_taken_0x2277fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2277fc) {
            ctx->pc = 0x227800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2277FCu;
            // 0x227800: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227810u;
            goto label_227810;
        }
    }
    ctx->pc = 0x227804u;
label_227804:
    // 0x227804: 0xc06963e  jal         func_1A58F8
label_227808:
    if (ctx->pc == 0x227808u) {
        ctx->pc = 0x227808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227804u;
        // 0x227808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22780Cu;
        goto label_22780c;
    }
    ctx->pc = 0x227804u;
    SET_GPR_U32(ctx, 31, 0x22780Cu);
    ctx->pc = 0x227808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227804u;
    // 0x227808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58F8u, 0x227804u, 0x22780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22780Cu;
label_22780c:
    // 0x22780c: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_227810:
    // 0x227810: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_227814:
    if (ctx->pc == 0x227814u) {
        ctx->pc = 0x227814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227810u;
        // 0x227814: 0x8e450470  lw          $a1, 0x470($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227818u;
        goto label_227818;
    }
    ctx->pc = 0x227810u;
    {
        const bool branch_taken_0x227810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227810) {
            ctx->pc = 0x227814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227810u;
            // 0x227814: 0x8e450470  lw          $a1, 0x470($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227824u;
            goto label_227824;
        }
    }
    ctx->pc = 0x227818u;
label_227818:
    // 0x227818: 0xc06b7b2  jal         func_1ADEC8
label_22781c:
    if (ctx->pc == 0x22781Cu) {
        ctx->pc = 0x22781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227818u;
        // 0x22781c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227820u;
        goto label_227820;
    }
    ctx->pc = 0x227818u;
    SET_GPR_U32(ctx, 31, 0x227820u);
    ctx->pc = 0x22781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227818u;
    // 0x22781c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADEC8u, 0x227818u, 0x227820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227820u;
label_227820:
    // 0x227820: 0x8e450470  lw          $a1, 0x470($s2)
    ctx->pc = 0x227820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1136)));
label_227824:
    // 0x227824: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_227828:
    if (ctx->pc == 0x227828u) {
        ctx->pc = 0x227828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227824u;
        // 0x227828: 0x8e450474  lw          $a1, 0x474($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22782Cu;
        goto label_22782c;
    }
    ctx->pc = 0x227824u;
    {
        const bool branch_taken_0x227824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x227824) {
            ctx->pc = 0x227828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227824u;
            // 0x227828: 0x8e450474  lw          $a1, 0x474($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22783Cu;
            goto label_22783c;
        }
    }
    ctx->pc = 0x22782Cu;
label_22782c:
    // 0x22782c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_227830:
    // 0x227830: 0xc0b2b08  jal         func_2CAC20
label_227834:
    if (ctx->pc == 0x227834u) {
        ctx->pc = 0x227834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227830u;
        // 0x227834: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227838u;
        goto label_227838;
    }
    ctx->pc = 0x227830u;
    SET_GPR_U32(ctx, 31, 0x227838u);
    ctx->pc = 0x227834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227830u;
    // 0x227834: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x227830u, 0x227838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227838u;
label_227838:
    // 0x227838: 0x8e450474  lw          $a1, 0x474($s2)
    ctx->pc = 0x227838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
label_22783c:
    // 0x22783c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_227840:
    if (ctx->pc == 0x227840u) {
        ctx->pc = 0x227840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22783Cu;
        // 0x227840: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227844u;
        goto label_227844;
    }
    ctx->pc = 0x22783Cu;
    {
        const bool branch_taken_0x22783c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x227840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22783Cu;
        // 0x227840: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22783c) {
            ctx->pc = 0x22784Cu;
            goto label_22784c;
        }
    }
    ctx->pc = 0x227844u;
label_227844:
    // 0x227844: 0xc0b2b08  jal         func_2CAC20
label_227848:
    if (ctx->pc == 0x227848u) {
        ctx->pc = 0x227848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227844u;
        // 0x227848: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22784Cu;
        goto label_22784c;
    }
    ctx->pc = 0x227844u;
    SET_GPR_U32(ctx, 31, 0x22784Cu);
    ctx->pc = 0x227848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227844u;
    // 0x227848: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x227844u, 0x22784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22784Cu;
label_22784c:
    // 0x22784c: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x22784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_227850:
    // 0x227850: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_227854:
    if (ctx->pc == 0x227854u) {
        ctx->pc = 0x227854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227850u;
        // 0x227854: 0x8e440330  lw          $a0, 0x330($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227858u;
        goto label_227858;
    }
    ctx->pc = 0x227850u;
    {
        const bool branch_taken_0x227850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227850) {
            ctx->pc = 0x227854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227850u;
            // 0x227854: 0x8e440330  lw          $a0, 0x330($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22786Cu;
            goto label_22786c;
        }
    }
    ctx->pc = 0x227858u;
label_227858:
    // 0x227858: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x227858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_22785c:
    // 0x22785c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_227860:
    // 0x227860: 0x40f809  jalr        $v0
label_227864:
    if (ctx->pc == 0x227864u) {
        ctx->pc = 0x227864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227860u;
        // 0x227864: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227868u;
        goto label_227868;
    }
    ctx->pc = 0x227860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227868u);
        ctx->pc = 0x227864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227860u;
        // 0x227864: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227860u, 0x227868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227868u;
label_227868:
    // 0x227868: 0x8e440330  lw          $a0, 0x330($s2)
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
label_22786c:
    // 0x22786c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_227870:
    if (ctx->pc == 0x227870u) {
        ctx->pc = 0x227874u;
        goto label_227874;
    }
    ctx->pc = 0x22786Cu;
    {
        const bool branch_taken_0x22786c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22786c) {
            ctx->pc = 0x22787Cu;
            goto label_22787c;
        }
    }
    ctx->pc = 0x227874u;
label_227874:
    // 0x227874: 0xc0f5222  jal         func_3D4888
label_227878:
    if (ctx->pc == 0x227878u) {
        ctx->pc = 0x22787Cu;
        goto label_22787c;
    }
    ctx->pc = 0x227874u;
    SET_GPR_U32(ctx, 31, 0x22787Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x227874u, 0x22787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22787Cu;
label_22787c:
    // 0x22787c: 0xc0f5222  jal         func_3D4888
label_227880:
    if (ctx->pc == 0x227880u) {
        ctx->pc = 0x227880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22787Cu;
        // 0x227880: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227884u;
        goto label_227884;
    }
    ctx->pc = 0x22787Cu;
    SET_GPR_U32(ctx, 31, 0x227884u);
    ctx->pc = 0x227880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22787Cu;
    // 0x227880: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x22787Cu, 0x227884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227884u;
label_227884:
    // 0x227884: 0x8e440300  lw          $a0, 0x300($s2)
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 768)));
label_227888:
    // 0x227888: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_22788c:
    if (ctx->pc == 0x22788Cu) {
        ctx->pc = 0x227890u;
        goto label_227890;
    }
    ctx->pc = 0x227888u;
    {
        const bool branch_taken_0x227888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227888) {
            ctx->pc = 0x2278B4u;
            goto label_2278b4;
        }
    }
    ctx->pc = 0x227890u;
label_227890:
    // 0x227890: 0xc0b2524  jal         func_2C9490
label_227894:
    if (ctx->pc == 0x227894u) {
        ctx->pc = 0x227898u;
        goto label_227898;
    }
    ctx->pc = 0x227890u;
    SET_GPR_U32(ctx, 31, 0x227898u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x227890u, 0x227898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227898u;
label_227898:
    // 0x227898: 0x8e440304  lw          $a0, 0x304($s2)
    ctx->pc = 0x227898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_22789c:
    // 0x22789c: 0xc0b2524  jal         func_2C9490
label_2278a0:
    if (ctx->pc == 0x2278A0u) {
        ctx->pc = 0x2278A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22789Cu;
        // 0x2278a0: 0xae400300  sw          $zero, 0x300($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278A4u;
        goto label_2278a4;
    }
    ctx->pc = 0x22789Cu;
    SET_GPR_U32(ctx, 31, 0x2278A4u);
    ctx->pc = 0x2278A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22789Cu;
    // 0x2278a0: 0xae400300  sw          $zero, 0x300($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x22789Cu, 0x2278A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278A4u;
label_2278a4:
    // 0x2278a4: 0xae400304  sw          $zero, 0x304($s2)
    ctx->pc = 0x2278a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 0));
label_2278a8:
    // 0x2278a8: 0xc0b2524  jal         func_2C9490
label_2278ac:
    if (ctx->pc == 0x2278ACu) {
        ctx->pc = 0x2278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278A8u;
        // 0x2278ac: 0x8e440308  lw          $a0, 0x308($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278B0u;
        goto label_2278b0;
    }
    ctx->pc = 0x2278A8u;
    SET_GPR_U32(ctx, 31, 0x2278B0u);
    ctx->pc = 0x2278ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278A8u;
    // 0x2278ac: 0x8e440308  lw          $a0, 0x308($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2278A8u, 0x2278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278B0u;
label_2278b0:
    // 0x2278b0: 0xae400308  sw          $zero, 0x308($s2)
    ctx->pc = 0x2278b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 0));
label_2278b4:
    // 0x2278b4: 0x3c01c7c3  lui         $at, 0xC7C3
    ctx->pc = 0x2278b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51139 << 16));
label_2278b8:
    // 0x2278b8: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x2278b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
label_2278bc:
    // 0x2278bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2278bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2278c0:
    // 0x2278c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2278c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2278c4:
    // 0x2278c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2278c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2278c8:
    // 0x2278c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2278c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2278cc:
    // 0x2278cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2278ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2278d0:
    // 0x2278d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2278d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2278d4:
    // 0x2278d4: 0xfa4102f0  sqc2        $vf1, 0x2F0($s2)
    ctx->pc = 0x2278d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_2278d8:
    // 0x2278d8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_2278dc:
    // 0x2278dc: 0xae40030c  sw          $zero, 0x30C($s2)
    ctx->pc = 0x2278dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 0));
label_2278e0:
    // 0x2278e0: 0xae400310  sw          $zero, 0x310($s2)
    ctx->pc = 0x2278e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 784), GPR_U32(ctx, 0));
label_2278e4:
    // 0x2278e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2278e8:
    if (ctx->pc == 0x2278E8u) {
        ctx->pc = 0x2278E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278E4u;
        // 0x2278e8: 0xa2400314  sb          $zero, 0x314($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 788), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278ECu;
        goto label_2278ec;
    }
    ctx->pc = 0x2278E4u;
    {
        const bool branch_taken_0x2278e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2278E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278E4u;
        // 0x2278e8: 0xa2400314  sb          $zero, 0x314($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 788), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278e4) {
            ctx->pc = 0x2278F8u;
            goto label_2278f8;
        }
    }
    ctx->pc = 0x2278ECu;
label_2278ec:
    // 0x2278ec: 0x8e530104  lw          $s3, 0x104($s2)
    ctx->pc = 0x2278ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2278f0:
    // 0x2278f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2278f4:
    if (ctx->pc == 0x2278F4u) {
        ctx->pc = 0x2278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F0u;
        // 0x2278f4: 0x8e540328  lw          $s4, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278F8u;
        goto label_2278f8;
    }
    ctx->pc = 0x2278F0u;
    {
        const bool branch_taken_0x2278f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F0u;
        // 0x2278f4: 0x8e540328  lw          $s4, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278f0) {
            ctx->pc = 0x227900u;
            goto label_227900;
        }
    }
    ctx->pc = 0x2278F8u;
label_2278f8:
    // 0x2278f8: 0x8e530328  lw          $s3, 0x328($s2)
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_2278fc:
    // 0x2278fc: 0x8e540104  lw          $s4, 0x104($s2)
    ctx->pc = 0x2278fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_227900:
    // 0x227900: 0x8e44033c  lw          $a0, 0x33C($s2)
    ctx->pc = 0x227900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227904:
    // 0x227904: 0x26550344  addiu       $s5, $s2, 0x344
    ctx->pc = 0x227904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
label_227908:
    // 0x227908: 0x26560734  addiu       $s6, $s2, 0x734
    ctx->pc = 0x227908u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1844));
label_22790c:
    // 0x22790c: 0x26570718  addiu       $s7, $s2, 0x718
    ctx->pc = 0x22790cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1816));
label_227910:
    // 0x227910: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_227914:
    if (ctx->pc == 0x227914u) {
        ctx->pc = 0x227914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227910u;
        // 0x227914: 0x265e07a0  addiu       $fp, $s2, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227918u;
        goto label_227918;
    }
    ctx->pc = 0x227910u;
    {
        const bool branch_taken_0x227910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227910u;
        // 0x227914: 0x265e07a0  addiu       $fp, $s2, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227910) {
            ctx->pc = 0x227990u;
            goto label_227990;
        }
    }
    ctx->pc = 0x227918u;
label_227918:
    // 0x227918: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x227918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_22791c:
    // 0x22791c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227920:
    // 0x227920: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_227924:
    if (ctx->pc == 0x227924u) {
        ctx->pc = 0x227924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227920u;
        // 0x227924: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227928u;
        goto label_227928;
    }
    ctx->pc = 0x227920u;
    {
        const bool branch_taken_0x227920 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x227924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227920u;
        // 0x227924: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227920) {
            ctx->pc = 0x227980u;
            goto label_227980;
        }
    }
    ctx->pc = 0x227928u;
label_227928:
    // 0x227928: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x227928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_22792c:
    // 0x22792c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x22792cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_227930:
    // 0x227930: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_227934:
    // 0x227934: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227938:
    // 0x227938: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_22793c:
    if (ctx->pc == 0x22793Cu) {
        ctx->pc = 0x22793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227938u;
        // 0x22793c: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227940u;
        goto label_227940;
    }
    ctx->pc = 0x227938u;
    {
        const bool branch_taken_0x227938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227938) {
            ctx->pc = 0x22793Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227938u;
            // 0x22793c: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22796Cu;
            goto label_22796c;
        }
    }
    ctx->pc = 0x227940u;
label_227940:
    // 0x227940: 0xc0c4858  jal         func_312160
label_227944:
    if (ctx->pc == 0x227944u) {
        ctx->pc = 0x227944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227940u;
        // 0x227944: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227948u;
        goto label_227948;
    }
    ctx->pc = 0x227940u;
    SET_GPR_U32(ctx, 31, 0x227948u);
    ctx->pc = 0x227944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227940u;
    // 0x227944: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x227940u, 0x227948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227948u;
label_227948:
    // 0x227948: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x227948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_22794c:
    // 0x22794c: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x22794cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_227950:
    // 0x227950: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_227954:
    // 0x227954: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_227958:
    // 0x227958: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_22795c:
    // 0x22795c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_227960:
    // 0x227960: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_227964:
    // 0x227964: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x227964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_227968:
    // 0x227968: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_22796c:
    // 0x22796c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_227970:
    // 0x227970: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x227970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227974:
    // 0x227974: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x227974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_227978:
    // 0x227978: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_22797c:
    if (ctx->pc == 0x22797Cu) {
        ctx->pc = 0x22797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227978u;
        // 0x22797c: 0x8e44033c  lw          $a0, 0x33C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227980u;
        goto label_227980;
    }
    ctx->pc = 0x227978u;
    {
        const bool branch_taken_0x227978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227978u;
        // 0x22797c: 0x8e44033c  lw          $a0, 0x33C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227978) {
            ctx->pc = 0x227928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227928;
        }
    }
    ctx->pc = 0x227980u;
label_227980:
    // 0x227980: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_227984:
    if (ctx->pc == 0x227984u) {
        ctx->pc = 0x227988u;
        goto label_227988;
    }
    ctx->pc = 0x227980u;
    {
        const bool branch_taken_0x227980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227980) {
            ctx->pc = 0x227990u;
            goto label_227990;
        }
    }
    ctx->pc = 0x227988u;
label_227988:
    // 0x227988: 0xc0f528a  jal         func_3D4A28
label_22798c:
    if (ctx->pc == 0x22798Cu) {
        ctx->pc = 0x227990u;
        goto label_227990;
    }
    ctx->pc = 0x227988u;
    SET_GPR_U32(ctx, 31, 0x227990u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x227988u, 0x227990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227990u;
label_227990:
    // 0x227990: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
label_227994:
    if (ctx->pc == 0x227994u) {
        ctx->pc = 0x227994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227990u;
        // 0x227994: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227998u;
        goto label_227998;
    }
    ctx->pc = 0x227990u;
    {
        const bool branch_taken_0x227990 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x227994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227990u;
        // 0x227994: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227990) {
            ctx->pc = 0x227A30u;
            goto label_227a30;
        }
    }
    ctx->pc = 0x227998u;
label_227998:
    // 0x227998: 0x8e440340  lw          $a0, 0x340($s2)
    ctx->pc = 0x227998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_22799c:
    // 0x22799c: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
label_2279a0:
    if (ctx->pc == 0x2279A0u) {
        ctx->pc = 0x2279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22799Cu;
        // 0x2279a0: 0x8e450328  lw          $a1, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279A4u;
        goto label_2279a4;
    }
    ctx->pc = 0x22799Cu;
    {
        const bool branch_taken_0x22799c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22799c) {
            ctx->pc = 0x2279A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22799Cu;
            // 0x2279a0: 0x8e450328  lw          $a1, 0x328($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227A1Cu;
            goto label_227a1c;
        }
    }
    ctx->pc = 0x2279A4u;
label_2279a4:
    // 0x2279a4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2279a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2279a8:
    // 0x2279a8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2279a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2279ac:
    // 0x2279ac: 0x1a600016  blez        $s3, . + 4 + (0x16 << 2)
label_2279b0:
    if (ctx->pc == 0x2279B0u) {
        ctx->pc = 0x2279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279ACu;
        // 0x2279b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279B4u;
        goto label_2279b4;
    }
    ctx->pc = 0x2279ACu;
    {
        const bool branch_taken_0x2279ac = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279ACu;
        // 0x2279b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279ac) {
            ctx->pc = 0x227A08u;
            goto label_227a08;
        }
    }
    ctx->pc = 0x2279B4u;
label_2279b4:
    // 0x2279b4: 0x0  nop
    ctx->pc = 0x2279b4u;
    // NOP
label_2279b8:
    // 0x2279b8: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_2279bc:
    // 0x2279bc: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2279bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2279c0:
    // 0x2279c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2279c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2279c4:
    // 0x2279c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2279c8:
    // 0x2279c8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_2279cc:
    if (ctx->pc == 0x2279CCu) {
        ctx->pc = 0x2279CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279C8u;
        // 0x2279cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279D0u;
        goto label_2279d0;
    }
    ctx->pc = 0x2279C8u;
    {
        const bool branch_taken_0x2279c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2279c8) {
            ctx->pc = 0x2279CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2279C8u;
            // 0x2279cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2279FCu;
            goto label_2279fc;
        }
    }
    ctx->pc = 0x2279D0u;
label_2279d0:
    // 0x2279d0: 0xc0c4858  jal         func_312160
label_2279d4:
    if (ctx->pc == 0x2279D4u) {
        ctx->pc = 0x2279D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D0u;
        // 0x2279d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279D8u;
        goto label_2279d8;
    }
    ctx->pc = 0x2279D0u;
    SET_GPR_U32(ctx, 31, 0x2279D8u);
    ctx->pc = 0x2279D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2279D0u;
    // 0x2279d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x2279D0u, 0x2279D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279D8u;
label_2279d8:
    // 0x2279d8: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x2279d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_2279dc:
    // 0x2279dc: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2279dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2279e0:
    // 0x2279e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2279e4:
    // 0x2279e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2279e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2279e8:
    // 0x2279e8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2279e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2279ec:
    // 0x2279ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2279f0:
    // 0x2279f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2279f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2279f4:
    // 0x2279f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2279f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2279f8:
    // 0x2279f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2279f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2279fc:
    // 0x2279fc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2279fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_227a00:
    // 0x227a00: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_227a04:
    if (ctx->pc == 0x227A04u) {
        ctx->pc = 0x227A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A00u;
        // 0x227a04: 0x8e440340  lw          $a0, 0x340($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A08u;
        goto label_227a08;
    }
    ctx->pc = 0x227A00u;
    {
        const bool branch_taken_0x227a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A00u;
        // 0x227a04: 0x8e440340  lw          $a0, 0x340($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a00) {
            ctx->pc = 0x2279B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2279b8;
        }
    }
    ctx->pc = 0x227A08u;
label_227a08:
    // 0x227a08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_227a0c:
    if (ctx->pc == 0x227A0Cu) {
        ctx->pc = 0x227A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A08u;
        // 0x227a0c: 0x8e450328  lw          $a1, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A10u;
        goto label_227a10;
    }
    ctx->pc = 0x227A08u;
    {
        const bool branch_taken_0x227a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227a08) {
            ctx->pc = 0x227A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227A08u;
            // 0x227a0c: 0x8e450328  lw          $a1, 0x328($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227A1Cu;
            goto label_227a1c;
        }
    }
    ctx->pc = 0x227A10u;
label_227a10:
    // 0x227a10: 0xc0f528a  jal         func_3D4A28
label_227a14:
    if (ctx->pc == 0x227A14u) {
        ctx->pc = 0x227A18u;
        goto label_227a18;
    }
    ctx->pc = 0x227A10u;
    SET_GPR_U32(ctx, 31, 0x227A18u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x227A10u, 0x227A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A18u;
label_227a18:
    // 0x227a18: 0x8e450328  lw          $a1, 0x328($s2)
    ctx->pc = 0x227a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_227a1c:
    // 0x227a1c: 0xc084a46  jal         func_212918
label_227a20:
    if (ctx->pc == 0x227A20u) {
        ctx->pc = 0x227A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A1Cu;
        // 0x227a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A24u;
        goto label_227a24;
    }
    ctx->pc = 0x227A1Cu;
    SET_GPR_U32(ctx, 31, 0x227A24u);
    ctx->pc = 0x227A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A1Cu;
    // 0x227a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x227A1Cu, 0x227A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A24u;
label_227a24:
    // 0x227a24: 0xc0c3212  jal         func_30C848
label_227a28:
    if (ctx->pc == 0x227A28u) {
        ctx->pc = 0x227A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A24u;
        // 0x227a28: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A2Cu;
        goto label_227a2c;
    }
    ctx->pc = 0x227A24u;
    SET_GPR_U32(ctx, 31, 0x227A2Cu);
    ctx->pc = 0x227A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A24u;
    // 0x227a28: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x227A24u, 0x227A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A2Cu;
label_227a2c:
    // 0x227a2c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x227a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_227a30:
    // 0x227a30: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x227a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_227a34:
    // 0x227a34: 0x0  nop
    ctx->pc = 0x227a34u;
    // NOP
label_227a38:
    // 0x227a38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227a3c:
    // 0x227a3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_227a40:
    if (ctx->pc == 0x227A40u) {
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A44u;
        goto label_227a44;
    }
    ctx->pc = 0x227A3Cu;
    {
        const bool branch_taken_0x227a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a3c) {
            ctx->pc = 0x227A50u;
            goto label_227a50;
        }
    }
    ctx->pc = 0x227A44u;
label_227a44:
    // 0x227a44: 0xc0f5222  jal         func_3D4888
label_227a48:
    if (ctx->pc == 0x227A48u) {
        ctx->pc = 0x227A4Cu;
        goto label_227a4c;
    }
    ctx->pc = 0x227A44u;
    SET_GPR_U32(ctx, 31, 0x227A4Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x227A44u, 0x227A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A4Cu;
label_227a4c:
    // 0x227a4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x227a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_227a50:
    // 0x227a50: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_227a54:
    if (ctx->pc == 0x227A54u) {
        ctx->pc = 0x227A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A50u;
        // 0x227a54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A58u;
        goto label_227a58;
    }
    ctx->pc = 0x227A50u;
    {
        const bool branch_taken_0x227a50 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x227A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A50u;
        // 0x227a54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a50) {
            ctx->pc = 0x227A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227a38;
        }
    }
    ctx->pc = 0x227A58u;
label_227a58:
    // 0x227a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227a5c:
    // 0x227a5c: 0xc08f86c  jal         func_23E1B0
label_227a60:
    if (ctx->pc == 0x227A60u) {
        ctx->pc = 0x227A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A5Cu;
        // 0x227a60: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A64u;
        goto label_227a64;
    }
    ctx->pc = 0x227A5Cu;
    SET_GPR_U32(ctx, 31, 0x227A64u);
    ctx->pc = 0x227A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A5Cu;
    // 0x227a60: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E1B0u, 0x227A5Cu, 0x227A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A64u;
label_227a64:
    // 0x227a64: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x227a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_227a68:
    // 0x227a68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227a6c:
    // 0x227a6c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_227a70:
    if (ctx->pc == 0x227A70u) {
        ctx->pc = 0x227A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A6Cu;
        // 0x227a70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A74u;
        goto label_227a74;
    }
    ctx->pc = 0x227A6Cu;
    {
        const bool branch_taken_0x227a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227a6c) {
            ctx->pc = 0x227A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227A6Cu;
            // 0x227a70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227A8Cu;
            goto label_227a8c;
        }
    }
    ctx->pc = 0x227A74u;
label_227a74:
    // 0x227a74: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x227a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_227a78:
    // 0x227a78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_227a7c:
    // 0x227a7c: 0x40f809  jalr        $v0
label_227a80:
    if (ctx->pc == 0x227A80u) {
        ctx->pc = 0x227A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A7Cu;
        // 0x227a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A84u;
        goto label_227a84;
    }
    ctx->pc = 0x227A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227A84u);
        ctx->pc = 0x227A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A7Cu;
        // 0x227a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A7Cu, 0x227A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227A84u;
label_227a84:
    // 0x227a84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x227a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_227a88:
    // 0x227a88: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x227a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_227a8c:
    // 0x227a8c: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
label_227a90:
    if (ctx->pc == 0x227A90u) {
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A94u;
        goto label_227a94;
    }
    ctx->pc = 0x227A8Cu;
    {
        const bool branch_taken_0x227a8c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a8c) {
            ctx->pc = 0x227A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227a68;
        }
    }
    ctx->pc = 0x227A94u;
label_227a94:
    // 0x227a94: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x227a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_227a98:
    // 0x227a98: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_227a9c:
    // 0x227a9c: 0x0  nop
    ctx->pc = 0x227a9cu;
    // NOP
label_227aa0:
    // 0x227aa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227aa4:
    // 0x227aa4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_227aa8:
    if (ctx->pc == 0x227AA8u) {
        ctx->pc = 0x227AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AA4u;
        // 0x227aa8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AACu;
        goto label_227aac;
    }
    ctx->pc = 0x227AA4u;
    {
        const bool branch_taken_0x227aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227aa4) {
            ctx->pc = 0x227AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227AA4u;
            // 0x227aa8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227AC4u;
            goto label_227ac4;
        }
    }
    ctx->pc = 0x227AACu;
label_227aac:
    // 0x227aac: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x227aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_227ab0:
    // 0x227ab0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_227ab4:
    // 0x227ab4: 0x40f809  jalr        $v0
label_227ab8:
    if (ctx->pc == 0x227AB8u) {
        ctx->pc = 0x227AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AB4u;
        // 0x227ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227ABCu;
        goto label_227abc;
    }
    ctx->pc = 0x227AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227ABCu);
        ctx->pc = 0x227AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AB4u;
        // 0x227ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AB4u, 0x227ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227ABCu;
label_227abc:
    // 0x227abc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x227abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_227ac0:
    // 0x227ac0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x227ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_227ac4:
    // 0x227ac4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
label_227ac8:
    if (ctx->pc == 0x227AC8u) {
        ctx->pc = 0x227AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC4u;
        // 0x227ac8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227ACCu;
        goto label_227acc;
    }
    ctx->pc = 0x227AC4u;
    {
        const bool branch_taken_0x227ac4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x227AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC4u;
        // 0x227ac8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ac4) {
            ctx->pc = 0x227AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227aa0;
        }
    }
    ctx->pc = 0x227ACCu;
label_227acc:
    // 0x227acc: 0x8e4206f4  lw          $v0, 0x6F4($s2)
    ctx->pc = 0x227accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
label_227ad0:
    // 0x227ad0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x227ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227ad4:
    // 0x227ad4: 0x50500008  beql        $v0, $s0, . + 4 + (0x8 << 2)
label_227ad8:
    if (ctx->pc == 0x227AD8u) {
        ctx->pc = 0x227AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AD4u;
        // 0x227ad8: 0x8e440fc4  lw          $a0, 0xFC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227ADCu;
        goto label_227adc;
    }
    ctx->pc = 0x227AD4u;
    {
        const bool branch_taken_0x227ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x227ad4) {
            ctx->pc = 0x227AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227AD4u;
            // 0x227ad8: 0x8e440fc4  lw          $a0, 0xFC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227AF8u;
            goto label_227af8;
        }
    }
    ctx->pc = 0x227ADCu;
label_227adc:
    // 0x227adc: 0xc081d36  jal         func_2074D8
label_227ae0:
    if (ctx->pc == 0x227AE0u) {
        ctx->pc = 0x227AE4u;
        goto label_227ae4;
    }
    ctx->pc = 0x227ADCu;
    SET_GPR_U32(ctx, 31, 0x227AE4u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x227ADCu, 0x227AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AE4u;
label_227ae4:
    // 0x227ae4: 0x8e4506f4  lw          $a1, 0x6F4($s2)
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
label_227ae8:
    // 0x227ae8: 0xc081e8e  jal         func_207A38
label_227aec:
    if (ctx->pc == 0x227AECu) {
        ctx->pc = 0x227AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AE8u;
        // 0x227aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AF0u;
        goto label_227af0;
    }
    ctx->pc = 0x227AE8u;
    SET_GPR_U32(ctx, 31, 0x227AF0u);
    ctx->pc = 0x227AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AE8u;
    // 0x227aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x227AE8u, 0x227AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AF0u;
label_227af0:
    // 0x227af0: 0xae5006f4  sw          $s0, 0x6F4($s2)
    ctx->pc = 0x227af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 16));
label_227af4:
    // 0x227af4: 0x8e440fc4  lw          $a0, 0xFC4($s2)
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4036)));
label_227af8:
    // 0x227af8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_227afc:
    if (ctx->pc == 0x227AFCu) {
        ctx->pc = 0x227B00u;
        goto label_227b00;
    }
    ctx->pc = 0x227AF8u;
    {
        const bool branch_taken_0x227af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227af8) {
            ctx->pc = 0x227B08u;
            goto label_227b08;
        }
    }
    ctx->pc = 0x227B00u;
label_227b00:
    // 0x227b00: 0xc0f5222  jal         func_3D4888
label_227b04:
    if (ctx->pc == 0x227B04u) {
        ctx->pc = 0x227B08u;
        goto label_227b08;
    }
    ctx->pc = 0x227B00u;
    SET_GPR_U32(ctx, 31, 0x227B08u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x227B00u, 0x227B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B08u;
label_227b08:
    // 0x227b08: 0xc0d453c  jal         func_3514F0
label_227b0c:
    if (ctx->pc == 0x227B0Cu) {
        ctx->pc = 0x227B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B08u;
        // 0x227b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B10u;
        goto label_227b10;
    }
    ctx->pc = 0x227B08u;
    SET_GPR_U32(ctx, 31, 0x227B10u);
    ctx->pc = 0x227B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B08u;
    // 0x227b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3514F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3514F0u, 0x227B08u, 0x227B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B10u;
label_227b10:
    // 0x227b10: 0xc0f5222  jal         func_3D4888
label_227b14:
    if (ctx->pc == 0x227B14u) {
        ctx->pc = 0x227B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B10u;
        // 0x227b14: 0x8e440fc8  lw          $a0, 0xFC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B18u;
        goto label_227b18;
    }
    ctx->pc = 0x227B10u;
    SET_GPR_U32(ctx, 31, 0x227B18u);
    ctx->pc = 0x227B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B10u;
    // 0x227b14: 0x8e440fc8  lw          $a0, 0xFC8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x227B10u, 0x227B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B18u;
label_227b18:
    // 0x227b18: 0x8e440fcc  lw          $a0, 0xFCC($s2)
    ctx->pc = 0x227b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4044)));
label_227b1c:
    // 0x227b1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_227b20:
    if (ctx->pc == 0x227B20u) {
        ctx->pc = 0x227B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B1Cu;
        // 0x227b20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B24u;
        goto label_227b24;
    }
    ctx->pc = 0x227B1Cu;
    {
        const bool branch_taken_0x227b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b1c) {
            ctx->pc = 0x227B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B1Cu;
            // 0x227b20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B30u;
            goto label_227b30;
        }
    }
    ctx->pc = 0x227B24u;
label_227b24:
    // 0x227b24: 0xc096fce  jal         func_25BF38
label_227b28:
    if (ctx->pc == 0x227B28u) {
        ctx->pc = 0x227B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B24u;
        // 0x227b28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B2Cu;
        goto label_227b2c;
    }
    ctx->pc = 0x227B24u;
    SET_GPR_U32(ctx, 31, 0x227B2Cu);
    ctx->pc = 0x227B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B24u;
    // 0x227b28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF38u, 0x227B24u, 0x227B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B2Cu;
label_227b2c:
    // 0x227b2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x227b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_227b30:
    // 0x227b30: 0xc093160  jal         func_24C580
label_227b34:
    if (ctx->pc == 0x227B34u) {
        ctx->pc = 0x227B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B30u;
        // 0x227b34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B38u;
        goto label_227b38;
    }
    ctx->pc = 0x227B30u;
    SET_GPR_U32(ctx, 31, 0x227B38u);
    ctx->pc = 0x227B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B30u;
    // 0x227b34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C580u, 0x227B30u, 0x227B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B38u;
label_227b38:
    // 0x227b38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x227b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_227b3c:
    // 0x227b3c: 0xc0894d8  jal         func_225360
label_227b40:
    if (ctx->pc == 0x227B40u) {
        ctx->pc = 0x227B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B3Cu;
        // 0x227b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B44u;
        goto label_227b44;
    }
    ctx->pc = 0x227B3Cu;
    SET_GPR_U32(ctx, 31, 0x227B44u);
    ctx->pc = 0x227B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B3Cu;
    // 0x227b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225360u, 0x227B3Cu, 0x227B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B44u;
label_227b44:
    // 0x227b44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x227b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227b48:
    // 0x227b48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x227b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_227b4c:
    // 0x227b4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x227b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_227b50:
    // 0x227b50: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x227b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_227b54:
    // 0x227b54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x227b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_227b58:
    // 0x227b58: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x227b58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_227b5c:
    // 0x227b5c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x227b5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_227b60:
    // 0x227b60: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x227b60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_227b64:
    // 0x227b64: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x227b64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_227b68:
    // 0x227b68: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x227b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_227b6c:
    // 0x227b6c: 0x3e00008  jr          $ra
label_227b70:
    if (ctx->pc == 0x227B70u) {
        ctx->pc = 0x227B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B6Cu;
        // 0x227b70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B74u;
        goto label_227b74;
    }
    ctx->pc = 0x227B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B6Cu;
        // 0x227b70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B74u;
label_227b74:
    // 0x227b74: 0x0  nop
    ctx->pc = 0x227b74u;
    // NOP
    ctx->pc = 0x227b78u;
}
