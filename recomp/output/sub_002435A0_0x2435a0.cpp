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

// Function: sub_002435A0
// Address: 0x2435a0 - 0x243b28
void sub_002435A0_0x2435a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435A0_0x2435a0");
#endif

    switch (ctx->pc) {
        case 0x2435a0u: goto label_2435a0;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435a8u: goto label_2435a8;
        case 0x2435acu: goto label_2435ac;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435b4u: goto label_2435b4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435bcu: goto label_2435bc;
        case 0x2435c0u: goto label_2435c0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435c8u: goto label_2435c8;
        case 0x2435ccu: goto label_2435cc;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435d4u: goto label_2435d4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435dcu: goto label_2435dc;
        case 0x2435e0u: goto label_2435e0;
        case 0x2435e4u: goto label_2435e4;
        case 0x2435e8u: goto label_2435e8;
        case 0x2435ecu: goto label_2435ec;
        case 0x2435f0u: goto label_2435f0;
        case 0x2435f4u: goto label_2435f4;
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        case 0x243624u: goto label_243624;
        case 0x243628u: goto label_243628;
        case 0x24362cu: goto label_24362c;
        case 0x243630u: goto label_243630;
        case 0x243634u: goto label_243634;
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        default: break;
    }

    ctx->pc = 0x2435a0u;

label_2435a0:
    // 0x2435a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2435a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2435a4:
    // 0x2435a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2435a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2435a8:
    // 0x2435a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2435a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2435ac:
    // 0x2435ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2435acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2435b0:
    // 0x2435b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2435b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2435b4:
    // 0x2435b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2435b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2435b8:
    // 0x2435b8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2435b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2435bc:
    // 0x2435bc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2435bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2435c0:
    // 0x2435c0: 0xc0899bc  jal         func_2266F0
label_2435c4:
    if (ctx->pc == 0x2435C4u) {
        ctx->pc = 0x2435C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435C0u;
        // 0x2435c4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435C8u;
        goto label_2435c8;
    }
    ctx->pc = 0x2435C0u;
    SET_GPR_U32(ctx, 31, 0x2435C8u);
    ctx->pc = 0x2435C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435C0u;
    // 0x2435c4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2435C0u, 0x2435C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435C8u;
label_2435c8:
    // 0x2435c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2435c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2435cc:
    // 0x2435cc: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2435ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_2435d0:
    // 0x2435d0: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x2435d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2435d4:
    // 0x2435d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2435d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2435d8:
    // 0x2435d8: 0x24a56b08  addiu       $a1, $a1, 0x6B08
    ctx->pc = 0x2435d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27400));
label_2435dc:
    // 0x2435dc: 0xc073fde  jal         func_1CFF78
label_2435e0:
    if (ctx->pc == 0x2435E0u) {
        ctx->pc = 0x2435E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435DCu;
        // 0x2435e0: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435E4u;
        goto label_2435e4;
    }
    ctx->pc = 0x2435DCu;
    SET_GPR_U32(ctx, 31, 0x2435E4u);
    ctx->pc = 0x2435E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435DCu;
    // 0x2435e0: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2435DCu, 0x2435E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435E4u;
label_2435e4:
    // 0x2435e4: 0x12200147  beqz        $s1, . + 4 + (0x147 << 2)
label_2435e8:
    if (ctx->pc == 0x2435E8u) {
        ctx->pc = 0x2435E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435E4u;
        // 0x2435e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435ECu;
        goto label_2435ec;
    }
    ctx->pc = 0x2435E4u;
    {
        const bool branch_taken_0x2435e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435E4u;
        // 0x2435e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435e4) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x2435ECu;
label_2435ec:
    // 0x2435ec: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x2435ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2435f0:
    // 0x2435f0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2435f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2435f4:
    // 0x2435f4: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x2435f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
label_2435f8:
    // 0x2435f8: 0xc4540648  lwc1        $f20, 0x648($v0)
    ctx->pc = 0x2435f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2435fc:
    // 0x2435fc: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x2435fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_243600:
    // 0x243600: 0xc097f26  jal         func_25FC98
label_243604:
    if (ctx->pc == 0x243604u) {
        ctx->pc = 0x243604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243600u;
        // 0x243604: 0x8e320274  lw          $s2, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243608u;
        goto label_243608;
    }
    ctx->pc = 0x243600u;
    SET_GPR_U32(ctx, 31, 0x243608u);
    ctx->pc = 0x243604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243600u;
    // 0x243604: 0x8e320274  lw          $s2, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x243600u, 0x243608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243608u;
label_243608:
    // 0x243608: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x243608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_24360c:
    // 0x24360c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_243610:
    if (ctx->pc == 0x243610u) {
        ctx->pc = 0x243610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24360Cu;
        // 0x243610: 0x8e020550  lw          $v0, 0x550($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243614u;
        goto label_243614;
    }
    ctx->pc = 0x24360Cu;
    {
        const bool branch_taken_0x24360c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24360c) {
            ctx->pc = 0x243610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24360Cu;
            // 0x243610: 0x8e020550  lw          $v0, 0x550($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24362Cu;
            goto label_24362c;
        }
    }
    ctx->pc = 0x243614u;
label_243614:
    // 0x243614: 0xc097f26  jal         func_25FC98
label_243618:
    if (ctx->pc == 0x243618u) {
        ctx->pc = 0x243618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243614u;
        // 0x243618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24361Cu;
        goto label_24361c;
    }
    ctx->pc = 0x243614u;
    SET_GPR_U32(ctx, 31, 0x24361Cu);
    ctx->pc = 0x243618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243614u;
    // 0x243618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x243614u, 0x24361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24361Cu;
label_24361c:
    // 0x24361c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_243620:
    // 0x243620: 0x14430079  bne         $v0, $v1, . + 4 + (0x79 << 2)
label_243624:
    if (ctx->pc == 0x243624u) {
        ctx->pc = 0x243628u;
        goto label_243628;
    }
    ctx->pc = 0x243620u;
    {
        const bool branch_taken_0x243620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x243620) {
            ctx->pc = 0x243808u;
            goto label_243808;
        }
    }
    ctx->pc = 0x243628u;
label_243628:
    // 0x243628: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x243628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_24362c:
    // 0x24362c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24362cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_243630:
    // 0x243630: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_243634:
    // 0x243634: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x243634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_243638:
    // 0x243638: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_24363c:
    if (ctx->pc == 0x24363Cu) {
        ctx->pc = 0x24363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243638u;
        // 0x24363c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243640u;
        goto label_243640;
    }
    ctx->pc = 0x243638u;
    {
        const bool branch_taken_0x243638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243638) {
            ctx->pc = 0x24363Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243638u;
            // 0x24363c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243664u;
            goto label_243664;
        }
    }
    ctx->pc = 0x243640u;
label_243640:
    // 0x243640: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_243644:
    // 0x243644: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x243644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_243648:
    // 0x243648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24364c:
    // 0x24364c: 0x0  nop
    ctx->pc = 0x24364cu;
    // NOP
label_243650:
    // 0x243650: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x243650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243654:
    // 0x243654: 0x0  nop
    ctx->pc = 0x243654u;
    // NOP
label_243658:
    // 0x243658: 0x45020055  bc1fl       . + 4 + (0x55 << 2)
label_24365c:
    if (ctx->pc == 0x24365Cu) {
        ctx->pc = 0x24365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243658u;
        // 0x24365c: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243660u;
        goto label_243660;
    }
    ctx->pc = 0x243658u;
    {
        const bool branch_taken_0x243658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243658) {
            ctx->pc = 0x24365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243658u;
            // 0x24365c: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2437B0u;
            goto label_2437b0;
        }
    }
    ctx->pc = 0x243660u;
label_243660:
    // 0x243660: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x243660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_243664:
    // 0x243664: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_243668:
    if (ctx->pc == 0x243668u) {
        ctx->pc = 0x243668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243664u;
        // 0x243668: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24366Cu;
        goto label_24366c;
    }
    ctx->pc = 0x243664u;
    {
        const bool branch_taken_0x243664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243664) {
            ctx->pc = 0x243668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243664u;
            // 0x243668: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2437B0u;
            goto label_2437b0;
        }
    }
    ctx->pc = 0x24366Cu;
label_24366c:
    // 0x24366c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_243670:
    // 0x243670: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_243674:
    // 0x243674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_243678:
    if (ctx->pc == 0x243678u) {
        ctx->pc = 0x243678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243674u;
        // 0x243678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24367Cu;
        goto label_24367c;
    }
    ctx->pc = 0x243674u;
    {
        const bool branch_taken_0x243674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243674u;
        // 0x243678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243674) {
            ctx->pc = 0x24368Cu;
            goto label_24368c;
        }
    }
    ctx->pc = 0x24367Cu;
label_24367c:
    // 0x24367c: 0xe6140414  swc1        $f20, 0x414($s0)
    ctx->pc = 0x24367cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
label_243680:
    // 0x243680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x243680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243684:
    // 0x243684: 0xc08fed2  jal         func_23FB48
label_243688:
    if (ctx->pc == 0x243688u) {
        ctx->pc = 0x243688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243684u;
        // 0x243688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24368Cu;
        goto label_24368c;
    }
    ctx->pc = 0x243684u;
    SET_GPR_U32(ctx, 31, 0x24368Cu);
    ctx->pc = 0x243688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243684u;
    // 0x243688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x243684u, 0x24368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24368Cu;
label_24368c:
    // 0x24368c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x24368cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243690:
    // 0x243690: 0x0  nop
    ctx->pc = 0x243690u;
    // NOP
label_243694:
    // 0x243694: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
label_243698:
    if (ctx->pc == 0x243698u) {
        ctx->pc = 0x24369Cu;
        goto label_24369c;
    }
    ctx->pc = 0x243694u;
    {
        const bool branch_taken_0x243694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243694) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x24369Cu;
label_24369c:
    // 0x24369c: 0xc6010414  lwc1        $f1, 0x414($s0)
    ctx->pc = 0x24369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2436a0:
    // 0x2436a0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2436a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2436a4:
    // 0x2436a4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2436a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2436a8:
    // 0x2436a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2436a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2436ac:
    // 0x2436ac: 0x0  nop
    ctx->pc = 0x2436acu;
    // NOP
label_2436b0:
    // 0x2436b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2436b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436b4:
    // 0x2436b4: 0x0  nop
    ctx->pc = 0x2436b4u;
    // NOP
label_2436b8:
    // 0x2436b8: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2436bc:
    if (ctx->pc == 0x2436BCu) {
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436C0u;
        goto label_2436c0;
    }
    ctx->pc = 0x2436B8u;
    {
        const bool branch_taken_0x2436b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436b8) {
            ctx->pc = 0x2437A0u;
            goto label_2437a0;
        }
    }
    ctx->pc = 0x2436C0u;
label_2436c0:
    // 0x2436c0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2436c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436c4:
    // 0x2436c4: 0x0  nop
    ctx->pc = 0x2436c4u;
    // NOP
label_2436c8:
    // 0x2436c8: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_2436cc:
    if (ctx->pc == 0x2436CCu) {
        ctx->pc = 0x2436CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436C8u;
        // 0x2436cc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436D0u;
        goto label_2436d0;
    }
    ctx->pc = 0x2436C8u;
    {
        const bool branch_taken_0x2436c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2436c8) {
            ctx->pc = 0x2436CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2436C8u;
            // 0x2436cc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243710u;
            goto label_243710;
        }
    }
    ctx->pc = 0x2436D0u;
label_2436d0:
    // 0x2436d0: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2436d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2436d4:
    // 0x2436d4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2436d8:
    // 0x2436d8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2436dc:
    // 0x2436dc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2436e0:
    if (ctx->pc == 0x2436E0u) {
        ctx->pc = 0x2436E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436DCu;
        // 0x2436e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436E4u;
        goto label_2436e4;
    }
    ctx->pc = 0x2436DCu;
    {
        const bool branch_taken_0x2436dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2436E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436DCu;
        // 0x2436e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436dc) {
            ctx->pc = 0x24370Cu;
            goto label_24370c;
        }
    }
    ctx->pc = 0x2436E4u;
label_2436e4:
    // 0x2436e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2436e8:
    if (ctx->pc == 0x2436E8u) {
        ctx->pc = 0x2436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436E4u;
        // 0x2436e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436ECu;
        goto label_2436ec;
    }
    ctx->pc = 0x2436E4u;
    {
        const bool branch_taken_0x2436e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436E4u;
        // 0x2436e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436e4) {
            ctx->pc = 0x24370Cu;
            goto label_24370c;
        }
    }
    ctx->pc = 0x2436ECu;
label_2436ec:
    // 0x2436ec: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_2436f0:
    if (ctx->pc == 0x2436F0u) {
        ctx->pc = 0x2436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436ECu;
        // 0x2436f0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436F4u;
        goto label_2436f4;
    }
    ctx->pc = 0x2436ECu;
    {
        const bool branch_taken_0x2436ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2436ec) {
            ctx->pc = 0x2436F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2436ECu;
            // 0x2436f0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243710u;
            goto label_243710;
        }
    }
    ctx->pc = 0x2436F4u;
label_2436f4:
    // 0x2436f4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2436f8:
    if (ctx->pc == 0x2436F8u) {
        ctx->pc = 0x2436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436F4u;
        // 0x2436f8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436FCu;
        goto label_2436fc;
    }
    ctx->pc = 0x2436F4u;
    {
        const bool branch_taken_0x2436f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2436f4) {
            ctx->pc = 0x2436F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2436F4u;
            // 0x2436f8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243710u;
            goto label_243710;
        }
    }
    ctx->pc = 0x2436FCu;
label_2436fc:
    // 0x2436fc: 0xc06bfc8  jal         func_1AFF20
label_243700:
    if (ctx->pc == 0x243700u) {
        ctx->pc = 0x243700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436FCu;
        // 0x243700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243704u;
        goto label_243704;
    }
    ctx->pc = 0x2436FCu;
    SET_GPR_U32(ctx, 31, 0x243704u);
    ctx->pc = 0x243700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436FCu;
    // 0x243700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2436FCu, 0x243704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243704u;
label_243704:
    // 0x243704: 0x10000072  b           . + 4 + (0x72 << 2)
label_243708:
    if (ctx->pc == 0x243708u) {
        ctx->pc = 0x24370Cu;
        goto label_24370c;
    }
    ctx->pc = 0x243704u;
    {
        const bool branch_taken_0x243704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243704) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x24370Cu;
label_24370c:
    // 0x24370c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_243710:
    // 0x243710: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_243714:
    // 0x243714: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_243718:
    if (ctx->pc == 0x243718u) {
        ctx->pc = 0x243718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243714u;
        // 0x243718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24371Cu;
        goto label_24371c;
    }
    ctx->pc = 0x243714u;
    {
        const bool branch_taken_0x243714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243714u;
        // 0x243718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243714) {
            ctx->pc = 0x243754u;
            goto label_243754;
        }
    }
    ctx->pc = 0x24371Cu;
label_24371c:
    // 0x24371c: 0xc097f26  jal         func_25FC98
label_243720:
    if (ctx->pc == 0x243720u) {
        ctx->pc = 0x243720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24371Cu;
        // 0x243720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243724u;
        goto label_243724;
    }
    ctx->pc = 0x24371Cu;
    SET_GPR_U32(ctx, 31, 0x243724u);
    ctx->pc = 0x243720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24371Cu;
    // 0x243720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x24371Cu, 0x243724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243724u;
label_243724:
    // 0x243724: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x243724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_243728:
    // 0x243728: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_24372c:
    if (ctx->pc == 0x24372Cu) {
        ctx->pc = 0x24372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243728u;
        // 0x24372c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243730u;
        goto label_243730;
    }
    ctx->pc = 0x243728u;
    {
        const bool branch_taken_0x243728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243728u;
        // 0x24372c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243728) {
            ctx->pc = 0x243744u;
            goto label_243744;
        }
    }
    ctx->pc = 0x243730u;
label_243730:
    // 0x243730: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_243734:
    // 0x243734: 0xc0ae6b8  jal         func_2B9AE0
label_243738:
    if (ctx->pc == 0x243738u) {
        ctx->pc = 0x243738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243734u;
        // 0x243738: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24373Cu;
        goto label_24373c;
    }
    ctx->pc = 0x243734u;
    SET_GPR_U32(ctx, 31, 0x24373Cu);
    ctx->pc = 0x243738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243734u;
    // 0x243738: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243734u, 0x24373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24373Cu;
label_24373c:
    // 0x24373c: 0x10000005  b           . + 4 + (0x5 << 2)
label_243740:
    if (ctx->pc == 0x243740u) {
        ctx->pc = 0x243740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24373Cu;
        // 0x243740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243744u;
        goto label_243744;
    }
    ctx->pc = 0x24373Cu;
    {
        const bool branch_taken_0x24373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24373Cu;
        // 0x243740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24373c) {
            ctx->pc = 0x243754u;
            goto label_243754;
        }
    }
    ctx->pc = 0x243744u;
label_243744:
    // 0x243744: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243748:
    // 0x243748: 0xc0ae6b8  jal         func_2B9AE0
label_24374c:
    if (ctx->pc == 0x24374Cu) {
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243748u;
        // 0x24374c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243750u;
        goto label_243750;
    }
    ctx->pc = 0x243748u;
    SET_GPR_U32(ctx, 31, 0x243750u);
    ctx->pc = 0x24374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243748u;
    // 0x24374c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243748u, 0x243750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243750u;
label_243750:
    // 0x243750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243754:
    // 0x243754: 0xc0989a0  jal         func_262680
label_243758:
    if (ctx->pc == 0x243758u) {
        ctx->pc = 0x243758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243754u;
        // 0x243758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24375Cu;
        goto label_24375c;
    }
    ctx->pc = 0x243754u;
    SET_GPR_U32(ctx, 31, 0x24375Cu);
    ctx->pc = 0x243758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243754u;
    // 0x243758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x243754u, 0x24375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24375Cu;
label_24375c:
    // 0x24375c: 0x3c013d07  lui         $at, 0x3D07
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15623 << 16));
label_243760:
    // 0x243760: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x243760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
label_243764:
    // 0x243764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243768:
    // 0x243768: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x243768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24376c:
    // 0x24376c: 0xe6000414  swc1        $f0, 0x414($s0)
    ctx->pc = 0x24376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
label_243770:
    // 0x243770: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_243774:
    if (ctx->pc == 0x243774u) {
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243770u;
        // 0x243774: 0xae200270  sw          $zero, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243778u;
        goto label_243778;
    }
    ctx->pc = 0x243770u;
    {
        const bool branch_taken_0x243770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243770u;
        // 0x243774: 0xae200270  sw          $zero, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243770) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x243778u;
label_243778:
    // 0x243778: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x243778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_24377c:
    // 0x24377c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24377cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243780:
    // 0x243780: 0xc073ef8  jal         func_1CFBE0
label_243784:
    if (ctx->pc == 0x243784u) {
        ctx->pc = 0x243784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243780u;
        // 0x243784: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243788u;
        goto label_243788;
    }
    ctx->pc = 0x243780u;
    SET_GPR_U32(ctx, 31, 0x243788u);
    ctx->pc = 0x243784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243780u;
    // 0x243784: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x243780u, 0x243788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243788u;
label_243788:
    // 0x243788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24378c:
    // 0x24378c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243790:
    // 0x243790: 0xc08fed2  jal         func_23FB48
label_243794:
    if (ctx->pc == 0x243794u) {
        ctx->pc = 0x243794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243790u;
        // 0x243794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243798u;
        goto label_243798;
    }
    ctx->pc = 0x243790u;
    SET_GPR_U32(ctx, 31, 0x243798u);
    ctx->pc = 0x243794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243790u;
    // 0x243794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x243790u, 0x243798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243798u;
label_243798:
    // 0x243798: 0x1000004d  b           . + 4 + (0x4D << 2)
label_24379c:
    if (ctx->pc == 0x24379Cu) {
        ctx->pc = 0x2437A0u;
        goto label_2437a0;
    }
    ctx->pc = 0x243798u;
    {
        const bool branch_taken_0x243798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243798) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x2437A0u;
label_2437a0:
    // 0x2437a0: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2437a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437a4:
    // 0x2437a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2437a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2437a8:
    // 0x2437a8: 0x10000049  b           . + 4 + (0x49 << 2)
label_2437ac:
    if (ctx->pc == 0x2437ACu) {
        ctx->pc = 0x2437ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437A8u;
        // 0x2437ac: 0xe6000414  swc1        $f0, 0x414($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437B0u;
        goto label_2437b0;
    }
    ctx->pc = 0x2437A8u;
    {
        const bool branch_taken_0x2437a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437A8u;
        // 0x2437ac: 0xe6000414  swc1        $f0, 0x414($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437a8) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x2437B0u;
label_2437b0:
    // 0x2437b0: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_2437b4:
    // 0x2437b4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2437b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437b8:
    // 0x2437b8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2437b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437bc:
    // 0x2437bc: 0x0  nop
    ctx->pc = 0x2437bcu;
    // NOP
label_2437c0:
    // 0x2437c0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2437c4:
    if (ctx->pc == 0x2437C4u) {
        ctx->pc = 0x2437C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437C0u;
        // 0x2437c4: 0x8e220270  lw          $v0, 0x270($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437C8u;
        goto label_2437c8;
    }
    ctx->pc = 0x2437C0u;
    {
        const bool branch_taken_0x2437c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437c0) {
            ctx->pc = 0x2437C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2437C0u;
            // 0x2437c4: 0x8e220270  lw          $v0, 0x270($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2437DCu;
            goto label_2437dc;
        }
    }
    ctx->pc = 0x2437C8u;
label_2437c8:
    // 0x2437c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2437c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2437cc:
    // 0x2437cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2437ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2437d0:
    // 0x2437d0: 0xc073ef8  jal         func_1CFBE0
label_2437d4:
    if (ctx->pc == 0x2437D4u) {
        ctx->pc = 0x2437D8u;
        goto label_2437d8;
    }
    ctx->pc = 0x2437D0u;
    SET_GPR_U32(ctx, 31, 0x2437D8u);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x2437D0u, 0x2437D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437D8u;
label_2437d8:
    // 0x2437d8: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_2437dc:
    // 0x2437dc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_2437e0:
    if (ctx->pc == 0x2437E0u) {
        ctx->pc = 0x2437E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437DCu;
        // 0x2437e0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437E4u;
        goto label_2437e4;
    }
    ctx->pc = 0x2437DCu;
    {
        const bool branch_taken_0x2437dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2437E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437DCu;
        // 0x2437e0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437dc) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x2437E4u;
label_2437e4:
    // 0x2437e4: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2437e8:
    // 0x2437e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2437ec:
    // 0x2437ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2437ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2437f0:
    // 0x2437f0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2437f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2437f4:
    // 0x2437f4: 0xc07f4c2  jal         func_1FD308
label_2437f8:
    if (ctx->pc == 0x2437F8u) {
        ctx->pc = 0x2437F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437F4u;
        // 0x2437f8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437FCu;
        goto label_2437fc;
    }
    ctx->pc = 0x2437F4u;
    SET_GPR_U32(ctx, 31, 0x2437FCu);
    ctx->pc = 0x2437F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437F4u;
    // 0x2437f8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2437F4u, 0x2437FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437FCu;
label_2437fc:
    // 0x2437fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243800:
    // 0x243800: 0x10000033  b           . + 4 + (0x33 << 2)
label_243804:
    if (ctx->pc == 0x243804u) {
        ctx->pc = 0x243804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243800u;
        // 0x243804: 0xae220270  sw          $v0, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243808u;
        goto label_243808;
    }
    ctx->pc = 0x243800u;
    {
        const bool branch_taken_0x243800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243800u;
        // 0x243804: 0xae220270  sw          $v0, 0x270($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243800) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x243808u;
label_243808:
    // 0x243808: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x243808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24380c:
    // 0x24380c: 0x0  nop
    ctx->pc = 0x24380cu;
    // NOP
label_243810:
    // 0x243810: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_243814:
    if (ctx->pc == 0x243814u) {
        ctx->pc = 0x243814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243810u;
        // 0x243814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243818u;
        goto label_243818;
    }
    ctx->pc = 0x243810u;
    {
        const bool branch_taken_0x243810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243810u;
        // 0x243814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243810) {
            ctx->pc = 0x2438C4u;
            goto label_2438c4;
        }
    }
    ctx->pc = 0x243818u;
label_243818:
    // 0x243818: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x243818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_24381c:
    // 0x24381c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_243820:
    // 0x243820: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_243824:
    if (ctx->pc == 0x243824u) {
        ctx->pc = 0x243824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243820u;
        // 0x243824: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243828u;
        goto label_243828;
    }
    ctx->pc = 0x243820u;
    {
        const bool branch_taken_0x243820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243820) {
            ctx->pc = 0x243824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243820u;
            // 0x243824: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243844u;
            goto label_243844;
        }
    }
    ctx->pc = 0x243828u;
label_243828:
    // 0x243828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24382c:
    // 0x24382c: 0x0  nop
    ctx->pc = 0x24382cu;
    // NOP
label_243830:
    // 0x243830: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x243830u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243834:
    // 0x243834: 0x0  nop
    ctx->pc = 0x243834u;
    // NOP
label_243838:
    // 0x243838: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_24383c:
    if (ctx->pc == 0x24383Cu) {
        ctx->pc = 0x243840u;
        goto label_243840;
    }
    ctx->pc = 0x243838u;
    {
        const bool branch_taken_0x243838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243838) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x243840u;
label_243840:
    // 0x243840: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x243840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_243844:
    // 0x243844: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_243848:
    // 0x243848: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_24384c:
    if (ctx->pc == 0x24384Cu) {
        ctx->pc = 0x24384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243848u;
        // 0x24384c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243850u;
        goto label_243850;
    }
    ctx->pc = 0x243848u;
    {
        const bool branch_taken_0x243848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243848) {
            ctx->pc = 0x24384Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243848u;
            // 0x24384c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243884u;
            goto label_243884;
        }
    }
    ctx->pc = 0x243850u;
label_243850:
    // 0x243850: 0xc097f90  jal         func_25FE40
label_243854:
    if (ctx->pc == 0x243854u) {
        ctx->pc = 0x243854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243850u;
        // 0x243854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243858u;
        goto label_243858;
    }
    ctx->pc = 0x243850u;
    SET_GPR_U32(ctx, 31, 0x243858u);
    ctx->pc = 0x243854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243850u;
    // 0x243854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x243850u, 0x243858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243858u;
label_243858:
    // 0x243858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24385c:
    if (ctx->pc == 0x24385Cu) {
        ctx->pc = 0x24385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243858u;
        // 0x24385c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243860u;
        goto label_243860;
    }
    ctx->pc = 0x243858u;
    {
        const bool branch_taken_0x243858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243858u;
        // 0x24385c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243858) {
            ctx->pc = 0x243874u;
            goto label_243874;
        }
    }
    ctx->pc = 0x243860u;
label_243860:
    // 0x243860: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243864:
    // 0x243864: 0xc0ae6b8  jal         func_2B9AE0
label_243868:
    if (ctx->pc == 0x243868u) {
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243864u;
        // 0x243868: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24386Cu;
        goto label_24386c;
    }
    ctx->pc = 0x243864u;
    SET_GPR_U32(ctx, 31, 0x24386Cu);
    ctx->pc = 0x243868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243864u;
    // 0x243868: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243864u, 0x24386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24386Cu;
label_24386c:
    // 0x24386c: 0x10000005  b           . + 4 + (0x5 << 2)
label_243870:
    if (ctx->pc == 0x243870u) {
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243874u;
        goto label_243874;
    }
    ctx->pc = 0x24386Cu;
    {
        const bool branch_taken_0x24386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24386c) {
            ctx->pc = 0x243884u;
            goto label_243884;
        }
    }
    ctx->pc = 0x243874u;
label_243874:
    // 0x243874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x243874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243878:
    // 0x243878: 0xc0ae6b8  jal         func_2B9AE0
label_24387c:
    if (ctx->pc == 0x24387Cu) {
        ctx->pc = 0x24387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243878u;
        // 0x24387c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243880u;
        goto label_243880;
    }
    ctx->pc = 0x243878u;
    SET_GPR_U32(ctx, 31, 0x243880u);
    ctx->pc = 0x24387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243878u;
    // 0x24387c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243878u, 0x243880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243880u;
label_243880:
    // 0x243880: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_243884:
    // 0x243884: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x243884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_243888:
    // 0x243888: 0x40f809  jalr        $v0
label_24388c:
    if (ctx->pc == 0x24388Cu) {
        ctx->pc = 0x24388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243888u;
        // 0x24388c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243890u;
        goto label_243890;
    }
    ctx->pc = 0x243888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243890u);
        ctx->pc = 0x24388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243888u;
        // 0x24388c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243888u, 0x243890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243890u;
label_243890:
    // 0x243890: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_243894:
    // 0x243894: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x243894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_243898:
    // 0x243898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24389c:
    // 0x24389c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2438a0:
    // 0x2438a0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2438a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2438a4:
    // 0x2438a4: 0xc07f4c2  jal         func_1FD308
label_2438a8:
    if (ctx->pc == 0x2438A8u) {
        ctx->pc = 0x2438A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A4u;
        // 0x2438a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438ACu;
        goto label_2438ac;
    }
    ctx->pc = 0x2438A4u;
    SET_GPR_U32(ctx, 31, 0x2438ACu);
    ctx->pc = 0x2438A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438A4u;
    // 0x2438a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2438A4u, 0x2438ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438ACu;
label_2438ac:
    // 0x2438ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2438acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2438b0:
    // 0x2438b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2438b4:
    // 0x2438b4: 0xc08fed2  jal         func_23FB48
label_2438b8:
    if (ctx->pc == 0x2438B8u) {
        ctx->pc = 0x2438B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438B4u;
        // 0x2438b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438BCu;
        goto label_2438bc;
    }
    ctx->pc = 0x2438B4u;
    SET_GPR_U32(ctx, 31, 0x2438BCu);
    ctx->pc = 0x2438B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438B4u;
    // 0x2438b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2438B4u, 0x2438BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438BCu;
label_2438bc:
    // 0x2438bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2438c0:
    if (ctx->pc == 0x2438C0u) {
        ctx->pc = 0x2438C4u;
        goto label_2438c4;
    }
    ctx->pc = 0x2438BCu;
    {
        const bool branch_taken_0x2438bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438bc) {
            ctx->pc = 0x2438D0u;
            goto label_2438d0;
        }
    }
    ctx->pc = 0x2438C4u;
label_2438c4:
    // 0x2438c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2438c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2438c8:
    // 0x2438c8: 0xc08fed2  jal         func_23FB48
label_2438cc:
    if (ctx->pc == 0x2438CCu) {
        ctx->pc = 0x2438CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438C8u;
        // 0x2438cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438D0u;
        goto label_2438d0;
    }
    ctx->pc = 0x2438C8u;
    SET_GPR_U32(ctx, 31, 0x2438D0u);
    ctx->pc = 0x2438CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438C8u;
    // 0x2438cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2438C8u, 0x2438D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438D0u;
label_2438d0:
    // 0x2438d0: 0xc0d8de2  jal         func_363788
label_2438d4:
    if (ctx->pc == 0x2438D4u) {
        ctx->pc = 0x2438D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438D0u;
        // 0x2438d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438D8u;
        goto label_2438d8;
    }
    ctx->pc = 0x2438D0u;
    SET_GPR_U32(ctx, 31, 0x2438D8u);
    ctx->pc = 0x2438D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438D0u;
    // 0x2438d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2438D0u, 0x2438D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438D8u;
label_2438d8:
    // 0x2438d8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2438d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2438dc:
    // 0x2438dc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2438e0:
    if (ctx->pc == 0x2438E0u) {
        ctx->pc = 0x2438E4u;
        goto label_2438e4;
    }
    ctx->pc = 0x2438DCu;
    {
        const bool branch_taken_0x2438dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2438dc) {
            ctx->pc = 0x2439B4u;
            goto label_2439b4;
        }
    }
    ctx->pc = 0x2438E4u;
label_2438e4:
    // 0x2438e4: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x2438e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2438e8:
    // 0x2438e8: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x2438e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_2438ec:
    // 0x2438ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2438f0:
    if (ctx->pc == 0x2438F0u) {
        ctx->pc = 0x2438F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438ECu;
        // 0x2438f0: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438F4u;
        goto label_2438f4;
    }
    ctx->pc = 0x2438ECu;
    {
        const bool branch_taken_0x2438ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2438F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438ECu;
        // 0x2438f0: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438ec) {
            ctx->pc = 0x243910u;
            goto label_243910;
        }
    }
    ctx->pc = 0x2438F4u;
label_2438f4:
    // 0x2438f4: 0x8ca500c0  lw          $a1, 0xC0($a1)
    ctx->pc = 0x2438f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_2438f8:
    // 0x2438f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2438fc:
    if (ctx->pc == 0x2438FCu) {
        ctx->pc = 0x2438FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438F8u;
        // 0x2438fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243900u;
        goto label_243900;
    }
    ctx->pc = 0x2438F8u;
    {
        const bool branch_taken_0x2438f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438F8u;
        // 0x2438fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438f8) {
            ctx->pc = 0x243910u;
            goto label_243910;
        }
    }
    ctx->pc = 0x243900u;
label_243900:
    // 0x243900: 0xc0984bc  jal         func_2612F0
label_243904:
    if (ctx->pc == 0x243904u) {
        ctx->pc = 0x243904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243900u;
        // 0x243904: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243908u;
        goto label_243908;
    }
    ctx->pc = 0x243900u;
    SET_GPR_U32(ctx, 31, 0x243908u);
    ctx->pc = 0x243904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243900u;
    // 0x243904: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x243900u, 0x243908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243908u;
label_243908:
    // 0x243908: 0x10000006  b           . + 4 + (0x6 << 2)
label_24390c:
    if (ctx->pc == 0x24390Cu) {
        ctx->pc = 0x24390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243908u;
        // 0x24390c: 0x8e24025c  lw          $a0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243910u;
        goto label_243910;
    }
    ctx->pc = 0x243908u;
    {
        const bool branch_taken_0x243908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243908u;
        // 0x24390c: 0x8e24025c  lw          $a0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243908) {
            ctx->pc = 0x243924u;
            goto label_243924;
        }
    }
    ctx->pc = 0x243910u;
label_243910:
    // 0x243910: 0x8e250260  lw          $a1, 0x260($s1)
    ctx->pc = 0x243910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_243914:
    // 0x243914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243918:
    // 0x243918: 0xc0984bc  jal         func_2612F0
label_24391c:
    if (ctx->pc == 0x24391Cu) {
        ctx->pc = 0x24391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243918u;
        // 0x24391c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243920u;
        goto label_243920;
    }
    ctx->pc = 0x243918u;
    SET_GPR_U32(ctx, 31, 0x243920u);
    ctx->pc = 0x24391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243918u;
    // 0x24391c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x243918u, 0x243920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243920u;
label_243920:
    // 0x243920: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_243924:
    // 0x243924: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_243928:
    if (ctx->pc == 0x243928u) {
        ctx->pc = 0x243928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243924u;
        // 0x243928: 0x86420038  lh          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24392Cu;
        goto label_24392c;
    }
    ctx->pc = 0x243924u;
    {
        const bool branch_taken_0x243924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243924) {
            ctx->pc = 0x243928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243924u;
            // 0x243928: 0x86420038  lh          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243950u;
            goto label_243950;
        }
    }
    ctx->pc = 0x24392Cu;
label_24392c:
    // 0x24392c: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x24392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_243930:
    // 0x243930: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_243934:
    // 0x243934: 0xc073e86  jal         func_1CFA18
label_243938:
    if (ctx->pc == 0x243938u) {
        ctx->pc = 0x243938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243934u;
        // 0x243938: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24393Cu;
        goto label_24393c;
    }
    ctx->pc = 0x243934u;
    SET_GPR_U32(ctx, 31, 0x24393Cu);
    ctx->pc = 0x243938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243934u;
    // 0x243938: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x243934u, 0x24393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24393Cu;
label_24393c:
    // 0x24393c: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x24393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_243940:
    // 0x243940: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243944:
    // 0x243944: 0xc073f08  jal         func_1CFC20
label_243948:
    if (ctx->pc == 0x243948u) {
        ctx->pc = 0x243948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243944u;
        // 0x243948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24394Cu;
        goto label_24394c;
    }
    ctx->pc = 0x243944u;
    SET_GPR_U32(ctx, 31, 0x24394Cu);
    ctx->pc = 0x243948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243944u;
    // 0x243948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x243944u, 0x24394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24394Cu;
label_24394c:
    // 0x24394c: 0x86420038  lh          $v0, 0x38($s2)
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_243950:
    // 0x243950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_243954:
    if (ctx->pc == 0x243954u) {
        ctx->pc = 0x243954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243950u;
        // 0x243954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243958u;
        goto label_243958;
    }
    ctx->pc = 0x243950u;
    {
        const bool branch_taken_0x243950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243950u;
        // 0x243954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243950) {
            ctx->pc = 0x24395Cu;
            goto label_24395c;
        }
    }
    ctx->pc = 0x243958u;
label_243958:
    // 0x243958: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x243958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_24395c:
    // 0x24395c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_243960:
    if (ctx->pc == 0x243960u) {
        ctx->pc = 0x243964u;
        goto label_243964;
    }
    ctx->pc = 0x24395Cu;
    {
        const bool branch_taken_0x24395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24395c) {
            ctx->pc = 0x2439B4u;
            goto label_2439b4;
        }
    }
    ctx->pc = 0x243964u;
label_243964:
    // 0x243964: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_243968:
    // 0x243968: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_24396c:
    // 0x24396c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_243970:
    if (ctx->pc == 0x243970u) {
        ctx->pc = 0x243974u;
        goto label_243974;
    }
    ctx->pc = 0x24396Cu;
    {
        const bool branch_taken_0x24396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24396c) {
            ctx->pc = 0x2439B4u;
            goto label_2439b4;
        }
    }
    ctx->pc = 0x243974u;
label_243974:
    // 0x243974: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x243974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_243978:
    // 0x243978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24397c:
    // 0x24397c: 0xc4410594  lwc1        $f1, 0x594($v0)
    ctx->pc = 0x24397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243980:
    // 0x243980: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243984:
    // 0x243984: 0x0  nop
    ctx->pc = 0x243984u;
    // NOP
label_243988:
    // 0x243988: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_24398c:
    if (ctx->pc == 0x24398Cu) {
        ctx->pc = 0x243990u;
        goto label_243990;
    }
    ctx->pc = 0x243988u;
    {
        const bool branch_taken_0x243988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243988) {
            ctx->pc = 0x2439B4u;
            goto label_2439b4;
        }
    }
    ctx->pc = 0x243990u;
label_243990:
    // 0x243990: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x243990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_243994:
    // 0x243994: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x243994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_243998:
    // 0x243998: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x243998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24399c:
    // 0x24399c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24399cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2439a0:
    // 0x2439a0: 0x0  nop
    ctx->pc = 0x2439a0u;
    // NOP
label_2439a4:
    // 0x2439a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2439a8:
    if (ctx->pc == 0x2439A8u) {
        ctx->pc = 0x2439A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439A4u;
        // 0x2439a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439ACu;
        goto label_2439ac;
    }
    ctx->pc = 0x2439A4u;
    {
        const bool branch_taken_0x2439a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2439A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439A4u;
        // 0x2439a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439a4) {
            ctx->pc = 0x2439B4u;
            goto label_2439b4;
        }
    }
    ctx->pc = 0x2439ACu;
label_2439ac:
    // 0x2439ac: 0xc098bf2  jal         func_262FC8
label_2439b0:
    if (ctx->pc == 0x2439B0u) {
        ctx->pc = 0x2439B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439ACu;
        // 0x2439b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439B4u;
        goto label_2439b4;
    }
    ctx->pc = 0x2439ACu;
    SET_GPR_U32(ctx, 31, 0x2439B4u);
    ctx->pc = 0x2439B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439ACu;
    // 0x2439b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262FC8u, 0x2439ACu, 0x2439B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439B4u;
label_2439b4:
    // 0x2439b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2439b8:
    // 0x2439b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2439b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2439bc:
    // 0x2439bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2439bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2439c0:
    // 0x2439c0: 0x0  nop
    ctx->pc = 0x2439c0u;
    // NOP
label_2439c4:
    // 0x2439c4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2439c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2439c8:
    // 0x2439c8: 0x0  nop
    ctx->pc = 0x2439c8u;
    // NOP
label_2439cc:
    // 0x2439cc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2439d0:
    if (ctx->pc == 0x2439D0u) {
        ctx->pc = 0x2439D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439CCu;
        // 0x2439d0: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439D4u;
        goto label_2439d4;
    }
    ctx->pc = 0x2439CCu;
    {
        const bool branch_taken_0x2439cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2439D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439CCu;
        // 0x2439d0: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439cc) {
            ctx->pc = 0x243A14u;
            goto label_243a14;
        }
    }
    ctx->pc = 0x2439D4u;
label_2439d4:
    // 0x2439d4: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
label_2439d8:
    // 0x2439d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2439dc:
    if (ctx->pc == 0x2439DCu) {
        ctx->pc = 0x2439DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439D8u;
        // 0x2439dc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439E0u;
        goto label_2439e0;
    }
    ctx->pc = 0x2439D8u;
    {
        const bool branch_taken_0x2439d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439D8u;
        // 0x2439dc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439d8) {
            ctx->pc = 0x243A14u;
            goto label_243a14;
        }
    }
    ctx->pc = 0x2439E0u;
label_2439e0:
    // 0x2439e0: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2439e4:
    // 0x2439e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2439e8:
    if (ctx->pc == 0x2439E8u) {
        ctx->pc = 0x2439E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E4u;
        // 0x2439e8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439ECu;
        goto label_2439ec;
    }
    ctx->pc = 0x2439E4u;
    {
        const bool branch_taken_0x2439e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2439E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439E4u;
        // 0x2439e8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439e4) {
            ctx->pc = 0x2439F4u;
            goto label_2439f4;
        }
    }
    ctx->pc = 0x2439ECu;
label_2439ec:
    // 0x2439ec: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2439f0:
    if (ctx->pc == 0x2439F0u) {
        ctx->pc = 0x2439F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439ECu;
        // 0x2439f0: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439F4u;
        goto label_2439f4;
    }
    ctx->pc = 0x2439ECu;
    {
        const bool branch_taken_0x2439ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2439F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439ECu;
        // 0x2439f0: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439ec) {
            ctx->pc = 0x243A1Cu;
            goto label_243a1c;
        }
    }
    ctx->pc = 0x2439F4u;
label_2439f4:
    // 0x2439f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2439f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2439f8:
    // 0x2439f8: 0xc0699de  jal         func_1A6778
label_2439fc:
    if (ctx->pc == 0x2439FCu) {
        ctx->pc = 0x2439FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439F8u;
        // 0x2439fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A00u;
        goto label_243a00;
    }
    ctx->pc = 0x2439F8u;
    SET_GPR_U32(ctx, 31, 0x243A00u);
    ctx->pc = 0x2439FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439F8u;
    // 0x2439fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6778u, 0x2439F8u, 0x243A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A00u;
label_243a00:
    // 0x243a00: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_243a04:
    // 0x243a04: 0xc06a23e  jal         func_1A88F8
label_243a08:
    if (ctx->pc == 0x243A08u) {
        ctx->pc = 0x243A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A04u;
        // 0x243a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A0Cu;
        goto label_243a0c;
    }
    ctx->pc = 0x243A04u;
    SET_GPR_U32(ctx, 31, 0x243A0Cu);
    ctx->pc = 0x243A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A04u;
    // 0x243a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x243A04u, 0x243A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A0Cu;
label_243a0c:
    // 0x243a0c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_243a10:
    if (ctx->pc == 0x243A10u) {
        ctx->pc = 0x243A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A0Cu;
        // 0x243a10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A14u;
        goto label_243a14;
    }
    ctx->pc = 0x243A0Cu;
    {
        const bool branch_taken_0x243a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A0Cu;
        // 0x243a10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a0c) {
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243A14u;
label_243a14:
    // 0x243a14: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x243a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_243a18:
    // 0x243a18: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x243a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_243a1c:
    // 0x243a1c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_243a20:
    if (ctx->pc == 0x243A20u) {
        ctx->pc = 0x243A24u;
        goto label_243a24;
    }
    ctx->pc = 0x243A1Cu;
    {
        const bool branch_taken_0x243a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243a1c) {
            ctx->pc = 0x243AACu;
            goto label_243aac;
        }
    }
    ctx->pc = 0x243A24u;
label_243a24:
    // 0x243a24: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_243a28:
    // 0x243a28: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_243a2c:
    if (ctx->pc == 0x243A2Cu) {
        ctx->pc = 0x243A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A28u;
        // 0x243a2c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A30u;
        goto label_243a30;
    }
    ctx->pc = 0x243A28u;
    {
        const bool branch_taken_0x243a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a28) {
            ctx->pc = 0x243A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A28u;
            // 0x243a2c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243A5Cu;
            goto label_243a5c;
        }
    }
    ctx->pc = 0x243A30u;
label_243a30:
    // 0x243a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243a34:
    // 0x243a34: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x243a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_243a38:
    // 0x243a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243a3c:
    // 0x243a3c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_243a40:
    if (ctx->pc == 0x243A40u) {
        ctx->pc = 0x243A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A3Cu;
        // 0x243a40: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A44u;
        goto label_243a44;
    }
    ctx->pc = 0x243A3Cu;
    {
        const bool branch_taken_0x243a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a3c) {
            ctx->pc = 0x243A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A3Cu;
            // 0x243a40: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243A5Cu;
            goto label_243a5c;
        }
    }
    ctx->pc = 0x243A44u;
label_243a44:
    // 0x243a44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_243a48:
    // 0x243a48: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x243a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_243a4c:
    // 0x243a4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_243a50:
    if (ctx->pc == 0x243A50u) {
        ctx->pc = 0x243A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A4Cu;
        // 0x243a50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A54u;
        goto label_243a54;
    }
    ctx->pc = 0x243A4Cu;
    {
        const bool branch_taken_0x243a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A4Cu;
        // 0x243a50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a4c) {
            ctx->pc = 0x243A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243a38;
        }
    }
    ctx->pc = 0x243A54u;
label_243a54:
    // 0x243a54: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_243a58:
    // 0x243a58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x243a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_243a5c:
    // 0x243a5c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x243a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243a60:
    // 0x243a60: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x243a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243a64:
    // 0x243a64: 0x0  nop
    ctx->pc = 0x243a64u;
    // NOP
label_243a68:
    // 0x243a68: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_243a6c:
    if (ctx->pc == 0x243A6Cu) {
        ctx->pc = 0x243A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A68u;
        // 0x243a6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A70u;
        goto label_243a70;
    }
    ctx->pc = 0x243A68u;
    {
        const bool branch_taken_0x243a68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243a68) {
            ctx->pc = 0x243A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A68u;
            // 0x243a6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243A70u;
label_243a70:
    // 0x243a70: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x243a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_243a74:
    // 0x243a74: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_243a78:
    if (ctx->pc == 0x243A78u) {
        ctx->pc = 0x243A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A74u;
        // 0x243a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A7Cu;
        goto label_243a7c;
    }
    ctx->pc = 0x243A74u;
    {
        const bool branch_taken_0x243a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A74u;
        // 0x243a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a74) {
            ctx->pc = 0x243A9Cu;
            goto label_243a9c;
        }
    }
    ctx->pc = 0x243A7Cu;
label_243a7c:
    // 0x243a7c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x243a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_243a80:
    // 0x243a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x243a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243a84:
    // 0x243a84: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_243a88:
    if (ctx->pc == 0x243A88u) {
        ctx->pc = 0x243A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A84u;
        // 0x243a88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A8Cu;
        goto label_243a8c;
    }
    ctx->pc = 0x243A84u;
    {
        const bool branch_taken_0x243a84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A84u;
        // 0x243a88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a84) {
            ctx->pc = 0x243A9Cu;
            goto label_243a9c;
        }
    }
    ctx->pc = 0x243A8Cu;
label_243a8c:
    // 0x243a8c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x243a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_243a90:
    // 0x243a90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_243a94:
    if (ctx->pc == 0x243A94u) {
        ctx->pc = 0x243A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A90u;
        // 0x243a94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A98u;
        goto label_243a98;
    }
    ctx->pc = 0x243A90u;
    {
        const bool branch_taken_0x243a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A90u;
        // 0x243a94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a90) {
            ctx->pc = 0x243A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243a80;
        }
    }
    ctx->pc = 0x243A98u;
label_243a98:
    // 0x243a98: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x243a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_243a9c:
    // 0x243a9c: 0xc073ef8  jal         func_1CFBE0
label_243aa0:
    if (ctx->pc == 0x243AA0u) {
        ctx->pc = 0x243AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A9Cu;
        // 0x243aa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AA4u;
        goto label_243aa4;
    }
    ctx->pc = 0x243A9Cu;
    SET_GPR_U32(ctx, 31, 0x243AA4u);
    ctx->pc = 0x243AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A9Cu;
    // 0x243aa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x243A9Cu, 0x243AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AA4u;
label_243aa4:
    // 0x243aa4: 0x10000018  b           . + 4 + (0x18 << 2)
label_243aa8:
    if (ctx->pc == 0x243AA8u) {
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA4u;
        // 0x243aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AACu;
        goto label_243aac;
    }
    ctx->pc = 0x243AA4u;
    {
        const bool branch_taken_0x243aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA4u;
        // 0x243aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243aa4) {
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243AACu;
label_243aac:
    // 0x243aac: 0xc097f90  jal         func_25FE40
label_243ab0:
    if (ctx->pc == 0x243AB0u) {
        ctx->pc = 0x243AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AACu;
        // 0x243ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AB4u;
        goto label_243ab4;
    }
    ctx->pc = 0x243AACu;
    SET_GPR_U32(ctx, 31, 0x243AB4u);
    ctx->pc = 0x243AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AACu;
    // 0x243ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x243AACu, 0x243AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AB4u;
label_243ab4:
    // 0x243ab4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_243ab8:
    if (ctx->pc == 0x243AB8u) {
        ctx->pc = 0x243AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AB4u;
        // 0x243ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ABCu;
        goto label_243abc;
    }
    ctx->pc = 0x243AB4u;
    {
        const bool branch_taken_0x243ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ab4) {
            ctx->pc = 0x243AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243AB4u;
            // 0x243ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243ABCu;
label_243abc:
    // 0x243abc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_243ac0:
    // 0x243ac0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_243ac4:
    // 0x243ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243ac8:
    // 0x243ac8: 0x0  nop
    ctx->pc = 0x243ac8u;
    // NOP
label_243acc:
    // 0x243acc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x243accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ad0:
    // 0x243ad0: 0x0  nop
    ctx->pc = 0x243ad0u;
    // NOP
label_243ad4:
    // 0x243ad4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_243ad8:
    if (ctx->pc == 0x243AD8u) {
        ctx->pc = 0x243AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AD4u;
        // 0x243ad8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ADCu;
        goto label_243adc;
    }
    ctx->pc = 0x243AD4u;
    {
        const bool branch_taken_0x243ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243ad4) {
            ctx->pc = 0x243AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243AD4u;
            // 0x243ad8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243ADCu;
label_243adc:
    // 0x243adc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x243adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_243ae0:
    // 0x243ae0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x243ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_243ae4:
    // 0x243ae4: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x243ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_243ae8:
    // 0x243ae8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_243aec:
    if (ctx->pc == 0x243AECu) {
        ctx->pc = 0x243AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AE8u;
        // 0x243aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AF0u;
        goto label_243af0;
    }
    ctx->pc = 0x243AE8u;
    {
        const bool branch_taken_0x243ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ae8) {
            ctx->pc = 0x243AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243AE8u;
            // 0x243aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243B08u;
            goto label_243b08;
        }
    }
    ctx->pc = 0x243AF0u;
label_243af0:
    // 0x243af0: 0xc069a50  jal         func_1A6940
label_243af4:
    if (ctx->pc == 0x243AF4u) {
        ctx->pc = 0x243AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AF0u;
        // 0x243af4: 0x240504e4  addiu       $a1, $zero, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AF8u;
        goto label_243af8;
    }
    ctx->pc = 0x243AF0u;
    SET_GPR_U32(ctx, 31, 0x243AF8u);
    ctx->pc = 0x243AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AF0u;
    // 0x243af4: 0x240504e4  addiu       $a1, $zero, 0x4E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6940u, 0x243AF0u, 0x243AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF8u;
label_243af8:
    // 0x243af8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_243afc:
    // 0x243afc: 0xc06a23e  jal         func_1A88F8
label_243b00:
    if (ctx->pc == 0x243B00u) {
        ctx->pc = 0x243B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AFCu;
        // 0x243b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B04u;
        goto label_243b04;
    }
    ctx->pc = 0x243AFCu;
    SET_GPR_U32(ctx, 31, 0x243B04u);
    ctx->pc = 0x243B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AFCu;
    // 0x243b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x243AFCu, 0x243B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B04u;
label_243b04:
    // 0x243b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243b08:
    // 0x243b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_243b0c:
    // 0x243b0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243b10:
    // 0x243b10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x243b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_243b14:
    // 0x243b14: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x243b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_243b18:
    // 0x243b18: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x243b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_243b1c:
    // 0x243b1c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x243b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_243b20:
    // 0x243b20: 0x3e00008  jr          $ra
label_243b24:
    if (ctx->pc == 0x243B24u) {
        ctx->pc = 0x243B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B20u;
        // 0x243b24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B28u;
        goto label_fallthrough_0x243b20;
    }
    ctx->pc = 0x243B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B20u;
        // 0x243b24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243b20:
    ctx->pc = 0x243B28u;
}
