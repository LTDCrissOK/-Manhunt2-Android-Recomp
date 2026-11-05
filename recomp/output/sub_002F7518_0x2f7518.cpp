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

// Function: sub_002F7518
// Address: 0x2f7518 - 0x2f89d0
void sub_002F7518_0x2f7518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7518_0x2f7518");
#endif

    switch (ctx->pc) {
        case 0x2f7518u: goto label_2f7518;
        case 0x2f751cu: goto label_2f751c;
        case 0x2f7520u: goto label_2f7520;
        case 0x2f7524u: goto label_2f7524;
        case 0x2f7528u: goto label_2f7528;
        case 0x2f752cu: goto label_2f752c;
        case 0x2f7530u: goto label_2f7530;
        case 0x2f7534u: goto label_2f7534;
        case 0x2f7538u: goto label_2f7538;
        case 0x2f753cu: goto label_2f753c;
        case 0x2f7540u: goto label_2f7540;
        case 0x2f7544u: goto label_2f7544;
        case 0x2f7548u: goto label_2f7548;
        case 0x2f754cu: goto label_2f754c;
        case 0x2f7550u: goto label_2f7550;
        case 0x2f7554u: goto label_2f7554;
        case 0x2f7558u: goto label_2f7558;
        case 0x2f755cu: goto label_2f755c;
        case 0x2f7560u: goto label_2f7560;
        case 0x2f7564u: goto label_2f7564;
        case 0x2f7568u: goto label_2f7568;
        case 0x2f756cu: goto label_2f756c;
        case 0x2f7570u: goto label_2f7570;
        case 0x2f7574u: goto label_2f7574;
        case 0x2f7578u: goto label_2f7578;
        case 0x2f757cu: goto label_2f757c;
        case 0x2f7580u: goto label_2f7580;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f7588u: goto label_2f7588;
        case 0x2f758cu: goto label_2f758c;
        case 0x2f7590u: goto label_2f7590;
        case 0x2f7594u: goto label_2f7594;
        case 0x2f7598u: goto label_2f7598;
        case 0x2f759cu: goto label_2f759c;
        case 0x2f75a0u: goto label_2f75a0;
        case 0x2f75a4u: goto label_2f75a4;
        case 0x2f75a8u: goto label_2f75a8;
        case 0x2f75acu: goto label_2f75ac;
        case 0x2f75b0u: goto label_2f75b0;
        case 0x2f75b4u: goto label_2f75b4;
        case 0x2f75b8u: goto label_2f75b8;
        case 0x2f75bcu: goto label_2f75bc;
        case 0x2f75c0u: goto label_2f75c0;
        case 0x2f75c4u: goto label_2f75c4;
        case 0x2f75c8u: goto label_2f75c8;
        case 0x2f75ccu: goto label_2f75cc;
        case 0x2f75d0u: goto label_2f75d0;
        case 0x2f75d4u: goto label_2f75d4;
        case 0x2f75d8u: goto label_2f75d8;
        case 0x2f75dcu: goto label_2f75dc;
        case 0x2f75e0u: goto label_2f75e0;
        case 0x2f75e4u: goto label_2f75e4;
        case 0x2f75e8u: goto label_2f75e8;
        case 0x2f75ecu: goto label_2f75ec;
        case 0x2f75f0u: goto label_2f75f0;
        case 0x2f75f4u: goto label_2f75f4;
        case 0x2f75f8u: goto label_2f75f8;
        case 0x2f75fcu: goto label_2f75fc;
        case 0x2f7600u: goto label_2f7600;
        case 0x2f7604u: goto label_2f7604;
        case 0x2f7608u: goto label_2f7608;
        case 0x2f760cu: goto label_2f760c;
        case 0x2f7610u: goto label_2f7610;
        case 0x2f7614u: goto label_2f7614;
        case 0x2f7618u: goto label_2f7618;
        case 0x2f761cu: goto label_2f761c;
        case 0x2f7620u: goto label_2f7620;
        case 0x2f7624u: goto label_2f7624;
        case 0x2f7628u: goto label_2f7628;
        case 0x2f762cu: goto label_2f762c;
        case 0x2f7630u: goto label_2f7630;
        case 0x2f7634u: goto label_2f7634;
        case 0x2f7638u: goto label_2f7638;
        case 0x2f763cu: goto label_2f763c;
        case 0x2f7640u: goto label_2f7640;
        case 0x2f7644u: goto label_2f7644;
        case 0x2f7648u: goto label_2f7648;
        case 0x2f764cu: goto label_2f764c;
        case 0x2f7650u: goto label_2f7650;
        case 0x2f7654u: goto label_2f7654;
        case 0x2f7658u: goto label_2f7658;
        case 0x2f765cu: goto label_2f765c;
        case 0x2f7660u: goto label_2f7660;
        case 0x2f7664u: goto label_2f7664;
        case 0x2f7668u: goto label_2f7668;
        case 0x2f766cu: goto label_2f766c;
        case 0x2f7670u: goto label_2f7670;
        case 0x2f7674u: goto label_2f7674;
        case 0x2f7678u: goto label_2f7678;
        case 0x2f767cu: goto label_2f767c;
        case 0x2f7680u: goto label_2f7680;
        case 0x2f7684u: goto label_2f7684;
        case 0x2f7688u: goto label_2f7688;
        case 0x2f768cu: goto label_2f768c;
        case 0x2f7690u: goto label_2f7690;
        case 0x2f7694u: goto label_2f7694;
        case 0x2f7698u: goto label_2f7698;
        case 0x2f769cu: goto label_2f769c;
        case 0x2f76a0u: goto label_2f76a0;
        case 0x2f76a4u: goto label_2f76a4;
        case 0x2f76a8u: goto label_2f76a8;
        case 0x2f76acu: goto label_2f76ac;
        case 0x2f76b0u: goto label_2f76b0;
        case 0x2f76b4u: goto label_2f76b4;
        case 0x2f76b8u: goto label_2f76b8;
        case 0x2f76bcu: goto label_2f76bc;
        case 0x2f76c0u: goto label_2f76c0;
        case 0x2f76c4u: goto label_2f76c4;
        case 0x2f76c8u: goto label_2f76c8;
        case 0x2f76ccu: goto label_2f76cc;
        case 0x2f76d0u: goto label_2f76d0;
        case 0x2f76d4u: goto label_2f76d4;
        case 0x2f76d8u: goto label_2f76d8;
        case 0x2f76dcu: goto label_2f76dc;
        case 0x2f76e0u: goto label_2f76e0;
        case 0x2f76e4u: goto label_2f76e4;
        case 0x2f76e8u: goto label_2f76e8;
        case 0x2f76ecu: goto label_2f76ec;
        case 0x2f76f0u: goto label_2f76f0;
        case 0x2f76f4u: goto label_2f76f4;
        case 0x2f76f8u: goto label_2f76f8;
        case 0x2f76fcu: goto label_2f76fc;
        case 0x2f7700u: goto label_2f7700;
        case 0x2f7704u: goto label_2f7704;
        case 0x2f7708u: goto label_2f7708;
        case 0x2f770cu: goto label_2f770c;
        case 0x2f7710u: goto label_2f7710;
        case 0x2f7714u: goto label_2f7714;
        case 0x2f7718u: goto label_2f7718;
        case 0x2f771cu: goto label_2f771c;
        case 0x2f7720u: goto label_2f7720;
        case 0x2f7724u: goto label_2f7724;
        case 0x2f7728u: goto label_2f7728;
        case 0x2f772cu: goto label_2f772c;
        case 0x2f7730u: goto label_2f7730;
        case 0x2f7734u: goto label_2f7734;
        case 0x2f7738u: goto label_2f7738;
        case 0x2f773cu: goto label_2f773c;
        case 0x2f7740u: goto label_2f7740;
        case 0x2f7744u: goto label_2f7744;
        case 0x2f7748u: goto label_2f7748;
        case 0x2f774cu: goto label_2f774c;
        case 0x2f7750u: goto label_2f7750;
        case 0x2f7754u: goto label_2f7754;
        case 0x2f7758u: goto label_2f7758;
        case 0x2f775cu: goto label_2f775c;
        case 0x2f7760u: goto label_2f7760;
        case 0x2f7764u: goto label_2f7764;
        case 0x2f7768u: goto label_2f7768;
        case 0x2f776cu: goto label_2f776c;
        case 0x2f7770u: goto label_2f7770;
        case 0x2f7774u: goto label_2f7774;
        case 0x2f7778u: goto label_2f7778;
        case 0x2f777cu: goto label_2f777c;
        case 0x2f7780u: goto label_2f7780;
        case 0x2f7784u: goto label_2f7784;
        case 0x2f7788u: goto label_2f7788;
        case 0x2f778cu: goto label_2f778c;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f7794u: goto label_2f7794;
        case 0x2f7798u: goto label_2f7798;
        case 0x2f779cu: goto label_2f779c;
        case 0x2f77a0u: goto label_2f77a0;
        case 0x2f77a4u: goto label_2f77a4;
        case 0x2f77a8u: goto label_2f77a8;
        case 0x2f77acu: goto label_2f77ac;
        case 0x2f77b0u: goto label_2f77b0;
        case 0x2f77b4u: goto label_2f77b4;
        case 0x2f77b8u: goto label_2f77b8;
        case 0x2f77bcu: goto label_2f77bc;
        case 0x2f77c0u: goto label_2f77c0;
        case 0x2f77c4u: goto label_2f77c4;
        case 0x2f77c8u: goto label_2f77c8;
        case 0x2f77ccu: goto label_2f77cc;
        case 0x2f77d0u: goto label_2f77d0;
        case 0x2f77d4u: goto label_2f77d4;
        case 0x2f77d8u: goto label_2f77d8;
        case 0x2f77dcu: goto label_2f77dc;
        case 0x2f77e0u: goto label_2f77e0;
        case 0x2f77e4u: goto label_2f77e4;
        case 0x2f77e8u: goto label_2f77e8;
        case 0x2f77ecu: goto label_2f77ec;
        case 0x2f77f0u: goto label_2f77f0;
        case 0x2f77f4u: goto label_2f77f4;
        case 0x2f77f8u: goto label_2f77f8;
        case 0x2f77fcu: goto label_2f77fc;
        case 0x2f7800u: goto label_2f7800;
        case 0x2f7804u: goto label_2f7804;
        case 0x2f7808u: goto label_2f7808;
        case 0x2f780cu: goto label_2f780c;
        case 0x2f7810u: goto label_2f7810;
        case 0x2f7814u: goto label_2f7814;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f781cu: goto label_2f781c;
        case 0x2f7820u: goto label_2f7820;
        case 0x2f7824u: goto label_2f7824;
        case 0x2f7828u: goto label_2f7828;
        case 0x2f782cu: goto label_2f782c;
        case 0x2f7830u: goto label_2f7830;
        case 0x2f7834u: goto label_2f7834;
        case 0x2f7838u: goto label_2f7838;
        case 0x2f783cu: goto label_2f783c;
        case 0x2f7840u: goto label_2f7840;
        case 0x2f7844u: goto label_2f7844;
        case 0x2f7848u: goto label_2f7848;
        case 0x2f784cu: goto label_2f784c;
        case 0x2f7850u: goto label_2f7850;
        case 0x2f7854u: goto label_2f7854;
        case 0x2f7858u: goto label_2f7858;
        case 0x2f785cu: goto label_2f785c;
        case 0x2f7860u: goto label_2f7860;
        case 0x2f7864u: goto label_2f7864;
        case 0x2f7868u: goto label_2f7868;
        case 0x2f786cu: goto label_2f786c;
        case 0x2f7870u: goto label_2f7870;
        case 0x2f7874u: goto label_2f7874;
        case 0x2f7878u: goto label_2f7878;
        case 0x2f787cu: goto label_2f787c;
        case 0x2f7880u: goto label_2f7880;
        case 0x2f7884u: goto label_2f7884;
        case 0x2f7888u: goto label_2f7888;
        case 0x2f788cu: goto label_2f788c;
        case 0x2f7890u: goto label_2f7890;
        case 0x2f7894u: goto label_2f7894;
        case 0x2f7898u: goto label_2f7898;
        case 0x2f789cu: goto label_2f789c;
        case 0x2f78a0u: goto label_2f78a0;
        case 0x2f78a4u: goto label_2f78a4;
        case 0x2f78a8u: goto label_2f78a8;
        case 0x2f78acu: goto label_2f78ac;
        case 0x2f78b0u: goto label_2f78b0;
        case 0x2f78b4u: goto label_2f78b4;
        case 0x2f78b8u: goto label_2f78b8;
        case 0x2f78bcu: goto label_2f78bc;
        case 0x2f78c0u: goto label_2f78c0;
        case 0x2f78c4u: goto label_2f78c4;
        case 0x2f78c8u: goto label_2f78c8;
        case 0x2f78ccu: goto label_2f78cc;
        case 0x2f78d0u: goto label_2f78d0;
        case 0x2f78d4u: goto label_2f78d4;
        case 0x2f78d8u: goto label_2f78d8;
        case 0x2f78dcu: goto label_2f78dc;
        case 0x2f78e0u: goto label_2f78e0;
        case 0x2f78e4u: goto label_2f78e4;
        case 0x2f78e8u: goto label_2f78e8;
        case 0x2f78ecu: goto label_2f78ec;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f78f4u: goto label_2f78f4;
        case 0x2f78f8u: goto label_2f78f8;
        case 0x2f78fcu: goto label_2f78fc;
        case 0x2f7900u: goto label_2f7900;
        case 0x2f7904u: goto label_2f7904;
        case 0x2f7908u: goto label_2f7908;
        case 0x2f790cu: goto label_2f790c;
        case 0x2f7910u: goto label_2f7910;
        case 0x2f7914u: goto label_2f7914;
        case 0x2f7918u: goto label_2f7918;
        case 0x2f791cu: goto label_2f791c;
        case 0x2f7920u: goto label_2f7920;
        case 0x2f7924u: goto label_2f7924;
        case 0x2f7928u: goto label_2f7928;
        case 0x2f792cu: goto label_2f792c;
        case 0x2f7930u: goto label_2f7930;
        case 0x2f7934u: goto label_2f7934;
        case 0x2f7938u: goto label_2f7938;
        case 0x2f793cu: goto label_2f793c;
        case 0x2f7940u: goto label_2f7940;
        case 0x2f7944u: goto label_2f7944;
        case 0x2f7948u: goto label_2f7948;
        case 0x2f794cu: goto label_2f794c;
        case 0x2f7950u: goto label_2f7950;
        case 0x2f7954u: goto label_2f7954;
        case 0x2f7958u: goto label_2f7958;
        case 0x2f795cu: goto label_2f795c;
        case 0x2f7960u: goto label_2f7960;
        case 0x2f7964u: goto label_2f7964;
        case 0x2f7968u: goto label_2f7968;
        case 0x2f796cu: goto label_2f796c;
        case 0x2f7970u: goto label_2f7970;
        case 0x2f7974u: goto label_2f7974;
        case 0x2f7978u: goto label_2f7978;
        case 0x2f797cu: goto label_2f797c;
        case 0x2f7980u: goto label_2f7980;
        case 0x2f7984u: goto label_2f7984;
        case 0x2f7988u: goto label_2f7988;
        case 0x2f798cu: goto label_2f798c;
        case 0x2f7990u: goto label_2f7990;
        case 0x2f7994u: goto label_2f7994;
        case 0x2f7998u: goto label_2f7998;
        case 0x2f799cu: goto label_2f799c;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f79a4u: goto label_2f79a4;
        case 0x2f79a8u: goto label_2f79a8;
        case 0x2f79acu: goto label_2f79ac;
        case 0x2f79b0u: goto label_2f79b0;
        case 0x2f79b4u: goto label_2f79b4;
        case 0x2f79b8u: goto label_2f79b8;
        case 0x2f79bcu: goto label_2f79bc;
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f79c4u: goto label_2f79c4;
        case 0x2f79c8u: goto label_2f79c8;
        case 0x2f79ccu: goto label_2f79cc;
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f79d4u: goto label_2f79d4;
        case 0x2f79d8u: goto label_2f79d8;
        case 0x2f79dcu: goto label_2f79dc;
        case 0x2f79e0u: goto label_2f79e0;
        case 0x2f79e4u: goto label_2f79e4;
        case 0x2f79e8u: goto label_2f79e8;
        case 0x2f79ecu: goto label_2f79ec;
        case 0x2f79f0u: goto label_2f79f0;
        case 0x2f79f4u: goto label_2f79f4;
        case 0x2f79f8u: goto label_2f79f8;
        case 0x2f79fcu: goto label_2f79fc;
        case 0x2f7a00u: goto label_2f7a00;
        case 0x2f7a04u: goto label_2f7a04;
        case 0x2f7a08u: goto label_2f7a08;
        case 0x2f7a0cu: goto label_2f7a0c;
        case 0x2f7a10u: goto label_2f7a10;
        case 0x2f7a14u: goto label_2f7a14;
        case 0x2f7a18u: goto label_2f7a18;
        case 0x2f7a1cu: goto label_2f7a1c;
        case 0x2f7a20u: goto label_2f7a20;
        case 0x2f7a24u: goto label_2f7a24;
        case 0x2f7a28u: goto label_2f7a28;
        case 0x2f7a2cu: goto label_2f7a2c;
        case 0x2f7a30u: goto label_2f7a30;
        case 0x2f7a34u: goto label_2f7a34;
        case 0x2f7a38u: goto label_2f7a38;
        case 0x2f7a3cu: goto label_2f7a3c;
        case 0x2f7a40u: goto label_2f7a40;
        case 0x2f7a44u: goto label_2f7a44;
        case 0x2f7a48u: goto label_2f7a48;
        case 0x2f7a4cu: goto label_2f7a4c;
        case 0x2f7a50u: goto label_2f7a50;
        case 0x2f7a54u: goto label_2f7a54;
        case 0x2f7a58u: goto label_2f7a58;
        case 0x2f7a5cu: goto label_2f7a5c;
        case 0x2f7a60u: goto label_2f7a60;
        case 0x2f7a64u: goto label_2f7a64;
        case 0x2f7a68u: goto label_2f7a68;
        case 0x2f7a6cu: goto label_2f7a6c;
        case 0x2f7a70u: goto label_2f7a70;
        case 0x2f7a74u: goto label_2f7a74;
        case 0x2f7a78u: goto label_2f7a78;
        case 0x2f7a7cu: goto label_2f7a7c;
        case 0x2f7a80u: goto label_2f7a80;
        case 0x2f7a84u: goto label_2f7a84;
        case 0x2f7a88u: goto label_2f7a88;
        case 0x2f7a8cu: goto label_2f7a8c;
        case 0x2f7a90u: goto label_2f7a90;
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7a98u: goto label_2f7a98;
        case 0x2f7a9cu: goto label_2f7a9c;
        case 0x2f7aa0u: goto label_2f7aa0;
        case 0x2f7aa4u: goto label_2f7aa4;
        case 0x2f7aa8u: goto label_2f7aa8;
        case 0x2f7aacu: goto label_2f7aac;
        case 0x2f7ab0u: goto label_2f7ab0;
        case 0x2f7ab4u: goto label_2f7ab4;
        case 0x2f7ab8u: goto label_2f7ab8;
        case 0x2f7abcu: goto label_2f7abc;
        case 0x2f7ac0u: goto label_2f7ac0;
        case 0x2f7ac4u: goto label_2f7ac4;
        case 0x2f7ac8u: goto label_2f7ac8;
        case 0x2f7accu: goto label_2f7acc;
        case 0x2f7ad0u: goto label_2f7ad0;
        case 0x2f7ad4u: goto label_2f7ad4;
        case 0x2f7ad8u: goto label_2f7ad8;
        case 0x2f7adcu: goto label_2f7adc;
        case 0x2f7ae0u: goto label_2f7ae0;
        case 0x2f7ae4u: goto label_2f7ae4;
        case 0x2f7ae8u: goto label_2f7ae8;
        case 0x2f7aecu: goto label_2f7aec;
        case 0x2f7af0u: goto label_2f7af0;
        case 0x2f7af4u: goto label_2f7af4;
        case 0x2f7af8u: goto label_2f7af8;
        case 0x2f7afcu: goto label_2f7afc;
        case 0x2f7b00u: goto label_2f7b00;
        case 0x2f7b04u: goto label_2f7b04;
        case 0x2f7b08u: goto label_2f7b08;
        case 0x2f7b0cu: goto label_2f7b0c;
        case 0x2f7b10u: goto label_2f7b10;
        case 0x2f7b14u: goto label_2f7b14;
        case 0x2f7b18u: goto label_2f7b18;
        case 0x2f7b1cu: goto label_2f7b1c;
        case 0x2f7b20u: goto label_2f7b20;
        case 0x2f7b24u: goto label_2f7b24;
        case 0x2f7b28u: goto label_2f7b28;
        case 0x2f7b2cu: goto label_2f7b2c;
        case 0x2f7b30u: goto label_2f7b30;
        case 0x2f7b34u: goto label_2f7b34;
        case 0x2f7b38u: goto label_2f7b38;
        case 0x2f7b3cu: goto label_2f7b3c;
        case 0x2f7b40u: goto label_2f7b40;
        case 0x2f7b44u: goto label_2f7b44;
        case 0x2f7b48u: goto label_2f7b48;
        case 0x2f7b4cu: goto label_2f7b4c;
        case 0x2f7b50u: goto label_2f7b50;
        case 0x2f7b54u: goto label_2f7b54;
        case 0x2f7b58u: goto label_2f7b58;
        case 0x2f7b5cu: goto label_2f7b5c;
        case 0x2f7b60u: goto label_2f7b60;
        case 0x2f7b64u: goto label_2f7b64;
        case 0x2f7b68u: goto label_2f7b68;
        case 0x2f7b6cu: goto label_2f7b6c;
        case 0x2f7b70u: goto label_2f7b70;
        case 0x2f7b74u: goto label_2f7b74;
        case 0x2f7b78u: goto label_2f7b78;
        case 0x2f7b7cu: goto label_2f7b7c;
        case 0x2f7b80u: goto label_2f7b80;
        case 0x2f7b84u: goto label_2f7b84;
        case 0x2f7b88u: goto label_2f7b88;
        case 0x2f7b8cu: goto label_2f7b8c;
        case 0x2f7b90u: goto label_2f7b90;
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7b98u: goto label_2f7b98;
        case 0x2f7b9cu: goto label_2f7b9c;
        case 0x2f7ba0u: goto label_2f7ba0;
        case 0x2f7ba4u: goto label_2f7ba4;
        case 0x2f7ba8u: goto label_2f7ba8;
        case 0x2f7bacu: goto label_2f7bac;
        case 0x2f7bb0u: goto label_2f7bb0;
        case 0x2f7bb4u: goto label_2f7bb4;
        case 0x2f7bb8u: goto label_2f7bb8;
        case 0x2f7bbcu: goto label_2f7bbc;
        case 0x2f7bc0u: goto label_2f7bc0;
        case 0x2f7bc4u: goto label_2f7bc4;
        case 0x2f7bc8u: goto label_2f7bc8;
        case 0x2f7bccu: goto label_2f7bcc;
        case 0x2f7bd0u: goto label_2f7bd0;
        case 0x2f7bd4u: goto label_2f7bd4;
        case 0x2f7bd8u: goto label_2f7bd8;
        case 0x2f7bdcu: goto label_2f7bdc;
        case 0x2f7be0u: goto label_2f7be0;
        case 0x2f7be4u: goto label_2f7be4;
        case 0x2f7be8u: goto label_2f7be8;
        case 0x2f7becu: goto label_2f7bec;
        case 0x2f7bf0u: goto label_2f7bf0;
        case 0x2f7bf4u: goto label_2f7bf4;
        case 0x2f7bf8u: goto label_2f7bf8;
        case 0x2f7bfcu: goto label_2f7bfc;
        case 0x2f7c00u: goto label_2f7c00;
        case 0x2f7c04u: goto label_2f7c04;
        case 0x2f7c08u: goto label_2f7c08;
        case 0x2f7c0cu: goto label_2f7c0c;
        case 0x2f7c10u: goto label_2f7c10;
        case 0x2f7c14u: goto label_2f7c14;
        case 0x2f7c18u: goto label_2f7c18;
        case 0x2f7c1cu: goto label_2f7c1c;
        case 0x2f7c20u: goto label_2f7c20;
        case 0x2f7c24u: goto label_2f7c24;
        case 0x2f7c28u: goto label_2f7c28;
        case 0x2f7c2cu: goto label_2f7c2c;
        case 0x2f7c30u: goto label_2f7c30;
        case 0x2f7c34u: goto label_2f7c34;
        case 0x2f7c38u: goto label_2f7c38;
        case 0x2f7c3cu: goto label_2f7c3c;
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7c44u: goto label_2f7c44;
        case 0x2f7c48u: goto label_2f7c48;
        case 0x2f7c4cu: goto label_2f7c4c;
        case 0x2f7c50u: goto label_2f7c50;
        case 0x2f7c54u: goto label_2f7c54;
        case 0x2f7c58u: goto label_2f7c58;
        case 0x2f7c5cu: goto label_2f7c5c;
        case 0x2f7c60u: goto label_2f7c60;
        case 0x2f7c64u: goto label_2f7c64;
        case 0x2f7c68u: goto label_2f7c68;
        case 0x2f7c6cu: goto label_2f7c6c;
        case 0x2f7c70u: goto label_2f7c70;
        case 0x2f7c74u: goto label_2f7c74;
        case 0x2f7c78u: goto label_2f7c78;
        case 0x2f7c7cu: goto label_2f7c7c;
        case 0x2f7c80u: goto label_2f7c80;
        case 0x2f7c84u: goto label_2f7c84;
        case 0x2f7c88u: goto label_2f7c88;
        case 0x2f7c8cu: goto label_2f7c8c;
        case 0x2f7c90u: goto label_2f7c90;
        case 0x2f7c94u: goto label_2f7c94;
        case 0x2f7c98u: goto label_2f7c98;
        case 0x2f7c9cu: goto label_2f7c9c;
        case 0x2f7ca0u: goto label_2f7ca0;
        case 0x2f7ca4u: goto label_2f7ca4;
        case 0x2f7ca8u: goto label_2f7ca8;
        case 0x2f7cacu: goto label_2f7cac;
        case 0x2f7cb0u: goto label_2f7cb0;
        case 0x2f7cb4u: goto label_2f7cb4;
        case 0x2f7cb8u: goto label_2f7cb8;
        case 0x2f7cbcu: goto label_2f7cbc;
        case 0x2f7cc0u: goto label_2f7cc0;
        case 0x2f7cc4u: goto label_2f7cc4;
        case 0x2f7cc8u: goto label_2f7cc8;
        case 0x2f7cccu: goto label_2f7ccc;
        case 0x2f7cd0u: goto label_2f7cd0;
        case 0x2f7cd4u: goto label_2f7cd4;
        case 0x2f7cd8u: goto label_2f7cd8;
        case 0x2f7cdcu: goto label_2f7cdc;
        case 0x2f7ce0u: goto label_2f7ce0;
        case 0x2f7ce4u: goto label_2f7ce4;
        case 0x2f7ce8u: goto label_2f7ce8;
        case 0x2f7cecu: goto label_2f7cec;
        case 0x2f7cf0u: goto label_2f7cf0;
        case 0x2f7cf4u: goto label_2f7cf4;
        case 0x2f7cf8u: goto label_2f7cf8;
        case 0x2f7cfcu: goto label_2f7cfc;
        case 0x2f7d00u: goto label_2f7d00;
        case 0x2f7d04u: goto label_2f7d04;
        case 0x2f7d08u: goto label_2f7d08;
        case 0x2f7d0cu: goto label_2f7d0c;
        case 0x2f7d10u: goto label_2f7d10;
        case 0x2f7d14u: goto label_2f7d14;
        case 0x2f7d18u: goto label_2f7d18;
        case 0x2f7d1cu: goto label_2f7d1c;
        case 0x2f7d20u: goto label_2f7d20;
        case 0x2f7d24u: goto label_2f7d24;
        case 0x2f7d28u: goto label_2f7d28;
        case 0x2f7d2cu: goto label_2f7d2c;
        case 0x2f7d30u: goto label_2f7d30;
        case 0x2f7d34u: goto label_2f7d34;
        case 0x2f7d38u: goto label_2f7d38;
        case 0x2f7d3cu: goto label_2f7d3c;
        case 0x2f7d40u: goto label_2f7d40;
        case 0x2f7d44u: goto label_2f7d44;
        case 0x2f7d48u: goto label_2f7d48;
        case 0x2f7d4cu: goto label_2f7d4c;
        case 0x2f7d50u: goto label_2f7d50;
        case 0x2f7d54u: goto label_2f7d54;
        case 0x2f7d58u: goto label_2f7d58;
        case 0x2f7d5cu: goto label_2f7d5c;
        case 0x2f7d60u: goto label_2f7d60;
        case 0x2f7d64u: goto label_2f7d64;
        case 0x2f7d68u: goto label_2f7d68;
        case 0x2f7d6cu: goto label_2f7d6c;
        case 0x2f7d70u: goto label_2f7d70;
        case 0x2f7d74u: goto label_2f7d74;
        case 0x2f7d78u: goto label_2f7d78;
        case 0x2f7d7cu: goto label_2f7d7c;
        case 0x2f7d80u: goto label_2f7d80;
        case 0x2f7d84u: goto label_2f7d84;
        case 0x2f7d88u: goto label_2f7d88;
        case 0x2f7d8cu: goto label_2f7d8c;
        case 0x2f7d90u: goto label_2f7d90;
        case 0x2f7d94u: goto label_2f7d94;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7d9cu: goto label_2f7d9c;
        case 0x2f7da0u: goto label_2f7da0;
        case 0x2f7da4u: goto label_2f7da4;
        case 0x2f7da8u: goto label_2f7da8;
        case 0x2f7dacu: goto label_2f7dac;
        case 0x2f7db0u: goto label_2f7db0;
        case 0x2f7db4u: goto label_2f7db4;
        case 0x2f7db8u: goto label_2f7db8;
        case 0x2f7dbcu: goto label_2f7dbc;
        case 0x2f7dc0u: goto label_2f7dc0;
        case 0x2f7dc4u: goto label_2f7dc4;
        case 0x2f7dc8u: goto label_2f7dc8;
        case 0x2f7dccu: goto label_2f7dcc;
        case 0x2f7dd0u: goto label_2f7dd0;
        case 0x2f7dd4u: goto label_2f7dd4;
        case 0x2f7dd8u: goto label_2f7dd8;
        case 0x2f7ddcu: goto label_2f7ddc;
        case 0x2f7de0u: goto label_2f7de0;
        case 0x2f7de4u: goto label_2f7de4;
        case 0x2f7de8u: goto label_2f7de8;
        case 0x2f7decu: goto label_2f7dec;
        case 0x2f7df0u: goto label_2f7df0;
        case 0x2f7df4u: goto label_2f7df4;
        case 0x2f7df8u: goto label_2f7df8;
        case 0x2f7dfcu: goto label_2f7dfc;
        case 0x2f7e00u: goto label_2f7e00;
        case 0x2f7e04u: goto label_2f7e04;
        case 0x2f7e08u: goto label_2f7e08;
        case 0x2f7e0cu: goto label_2f7e0c;
        case 0x2f7e10u: goto label_2f7e10;
        case 0x2f7e14u: goto label_2f7e14;
        case 0x2f7e18u: goto label_2f7e18;
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e20u: goto label_2f7e20;
        case 0x2f7e24u: goto label_2f7e24;
        case 0x2f7e28u: goto label_2f7e28;
        case 0x2f7e2cu: goto label_2f7e2c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e34u: goto label_2f7e34;
        case 0x2f7e38u: goto label_2f7e38;
        case 0x2f7e3cu: goto label_2f7e3c;
        case 0x2f7e40u: goto label_2f7e40;
        case 0x2f7e44u: goto label_2f7e44;
        case 0x2f7e48u: goto label_2f7e48;
        case 0x2f7e4cu: goto label_2f7e4c;
        case 0x2f7e50u: goto label_2f7e50;
        case 0x2f7e54u: goto label_2f7e54;
        case 0x2f7e58u: goto label_2f7e58;
        case 0x2f7e5cu: goto label_2f7e5c;
        case 0x2f7e60u: goto label_2f7e60;
        case 0x2f7e64u: goto label_2f7e64;
        case 0x2f7e68u: goto label_2f7e68;
        case 0x2f7e6cu: goto label_2f7e6c;
        case 0x2f7e70u: goto label_2f7e70;
        case 0x2f7e74u: goto label_2f7e74;
        case 0x2f7e78u: goto label_2f7e78;
        case 0x2f7e7cu: goto label_2f7e7c;
        case 0x2f7e80u: goto label_2f7e80;
        case 0x2f7e84u: goto label_2f7e84;
        case 0x2f7e88u: goto label_2f7e88;
        case 0x2f7e8cu: goto label_2f7e8c;
        case 0x2f7e90u: goto label_2f7e90;
        case 0x2f7e94u: goto label_2f7e94;
        case 0x2f7e98u: goto label_2f7e98;
        case 0x2f7e9cu: goto label_2f7e9c;
        case 0x2f7ea0u: goto label_2f7ea0;
        case 0x2f7ea4u: goto label_2f7ea4;
        case 0x2f7ea8u: goto label_2f7ea8;
        case 0x2f7eacu: goto label_2f7eac;
        case 0x2f7eb0u: goto label_2f7eb0;
        case 0x2f7eb4u: goto label_2f7eb4;
        case 0x2f7eb8u: goto label_2f7eb8;
        case 0x2f7ebcu: goto label_2f7ebc;
        case 0x2f7ec0u: goto label_2f7ec0;
        case 0x2f7ec4u: goto label_2f7ec4;
        case 0x2f7ec8u: goto label_2f7ec8;
        case 0x2f7eccu: goto label_2f7ecc;
        case 0x2f7ed0u: goto label_2f7ed0;
        case 0x2f7ed4u: goto label_2f7ed4;
        case 0x2f7ed8u: goto label_2f7ed8;
        case 0x2f7edcu: goto label_2f7edc;
        case 0x2f7ee0u: goto label_2f7ee0;
        case 0x2f7ee4u: goto label_2f7ee4;
        case 0x2f7ee8u: goto label_2f7ee8;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7ef0u: goto label_2f7ef0;
        case 0x2f7ef4u: goto label_2f7ef4;
        case 0x2f7ef8u: goto label_2f7ef8;
        case 0x2f7efcu: goto label_2f7efc;
        case 0x2f7f00u: goto label_2f7f00;
        case 0x2f7f04u: goto label_2f7f04;
        case 0x2f7f08u: goto label_2f7f08;
        case 0x2f7f0cu: goto label_2f7f0c;
        case 0x2f7f10u: goto label_2f7f10;
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f18u: goto label_2f7f18;
        case 0x2f7f1cu: goto label_2f7f1c;
        case 0x2f7f20u: goto label_2f7f20;
        case 0x2f7f24u: goto label_2f7f24;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f2cu: goto label_2f7f2c;
        case 0x2f7f30u: goto label_2f7f30;
        case 0x2f7f34u: goto label_2f7f34;
        case 0x2f7f38u: goto label_2f7f38;
        case 0x2f7f3cu: goto label_2f7f3c;
        case 0x2f7f40u: goto label_2f7f40;
        case 0x2f7f44u: goto label_2f7f44;
        case 0x2f7f48u: goto label_2f7f48;
        case 0x2f7f4cu: goto label_2f7f4c;
        case 0x2f7f50u: goto label_2f7f50;
        case 0x2f7f54u: goto label_2f7f54;
        case 0x2f7f58u: goto label_2f7f58;
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f60u: goto label_2f7f60;
        case 0x2f7f64u: goto label_2f7f64;
        case 0x2f7f68u: goto label_2f7f68;
        case 0x2f7f6cu: goto label_2f7f6c;
        case 0x2f7f70u: goto label_2f7f70;
        case 0x2f7f74u: goto label_2f7f74;
        case 0x2f7f78u: goto label_2f7f78;
        case 0x2f7f7cu: goto label_2f7f7c;
        case 0x2f7f80u: goto label_2f7f80;
        case 0x2f7f84u: goto label_2f7f84;
        case 0x2f7f88u: goto label_2f7f88;
        case 0x2f7f8cu: goto label_2f7f8c;
        case 0x2f7f90u: goto label_2f7f90;
        case 0x2f7f94u: goto label_2f7f94;
        case 0x2f7f98u: goto label_2f7f98;
        case 0x2f7f9cu: goto label_2f7f9c;
        case 0x2f7fa0u: goto label_2f7fa0;
        case 0x2f7fa4u: goto label_2f7fa4;
        case 0x2f7fa8u: goto label_2f7fa8;
        case 0x2f7facu: goto label_2f7fac;
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fb4u: goto label_2f7fb4;
        case 0x2f7fb8u: goto label_2f7fb8;
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f7fc0u: goto label_2f7fc0;
        case 0x2f7fc4u: goto label_2f7fc4;
        case 0x2f7fc8u: goto label_2f7fc8;
        case 0x2f7fccu: goto label_2f7fcc;
        case 0x2f7fd0u: goto label_2f7fd0;
        case 0x2f7fd4u: goto label_2f7fd4;
        case 0x2f7fd8u: goto label_2f7fd8;
        case 0x2f7fdcu: goto label_2f7fdc;
        case 0x2f7fe0u: goto label_2f7fe0;
        case 0x2f7fe4u: goto label_2f7fe4;
        case 0x2f7fe8u: goto label_2f7fe8;
        case 0x2f7fecu: goto label_2f7fec;
        case 0x2f7ff0u: goto label_2f7ff0;
        case 0x2f7ff4u: goto label_2f7ff4;
        case 0x2f7ff8u: goto label_2f7ff8;
        case 0x2f7ffcu: goto label_2f7ffc;
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8004u: goto label_2f8004;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f800cu: goto label_2f800c;
        case 0x2f8010u: goto label_2f8010;
        case 0x2f8014u: goto label_2f8014;
        case 0x2f8018u: goto label_2f8018;
        case 0x2f801cu: goto label_2f801c;
        case 0x2f8020u: goto label_2f8020;
        case 0x2f8024u: goto label_2f8024;
        case 0x2f8028u: goto label_2f8028;
        case 0x2f802cu: goto label_2f802c;
        case 0x2f8030u: goto label_2f8030;
        case 0x2f8034u: goto label_2f8034;
        case 0x2f8038u: goto label_2f8038;
        case 0x2f803cu: goto label_2f803c;
        case 0x2f8040u: goto label_2f8040;
        case 0x2f8044u: goto label_2f8044;
        case 0x2f8048u: goto label_2f8048;
        case 0x2f804cu: goto label_2f804c;
        case 0x2f8050u: goto label_2f8050;
        case 0x2f8054u: goto label_2f8054;
        case 0x2f8058u: goto label_2f8058;
        case 0x2f805cu: goto label_2f805c;
        case 0x2f8060u: goto label_2f8060;
        case 0x2f8064u: goto label_2f8064;
        case 0x2f8068u: goto label_2f8068;
        case 0x2f806cu: goto label_2f806c;
        case 0x2f8070u: goto label_2f8070;
        case 0x2f8074u: goto label_2f8074;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f807cu: goto label_2f807c;
        case 0x2f8080u: goto label_2f8080;
        case 0x2f8084u: goto label_2f8084;
        case 0x2f8088u: goto label_2f8088;
        case 0x2f808cu: goto label_2f808c;
        case 0x2f8090u: goto label_2f8090;
        case 0x2f8094u: goto label_2f8094;
        case 0x2f8098u: goto label_2f8098;
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80a0u: goto label_2f80a0;
        case 0x2f80a4u: goto label_2f80a4;
        case 0x2f80a8u: goto label_2f80a8;
        case 0x2f80acu: goto label_2f80ac;
        case 0x2f80b0u: goto label_2f80b0;
        case 0x2f80b4u: goto label_2f80b4;
        case 0x2f80b8u: goto label_2f80b8;
        case 0x2f80bcu: goto label_2f80bc;
        case 0x2f80c0u: goto label_2f80c0;
        case 0x2f80c4u: goto label_2f80c4;
        case 0x2f80c8u: goto label_2f80c8;
        case 0x2f80ccu: goto label_2f80cc;
        case 0x2f80d0u: goto label_2f80d0;
        case 0x2f80d4u: goto label_2f80d4;
        case 0x2f80d8u: goto label_2f80d8;
        case 0x2f80dcu: goto label_2f80dc;
        case 0x2f80e0u: goto label_2f80e0;
        case 0x2f80e4u: goto label_2f80e4;
        case 0x2f80e8u: goto label_2f80e8;
        case 0x2f80ecu: goto label_2f80ec;
        case 0x2f80f0u: goto label_2f80f0;
        case 0x2f80f4u: goto label_2f80f4;
        case 0x2f80f8u: goto label_2f80f8;
        case 0x2f80fcu: goto label_2f80fc;
        case 0x2f8100u: goto label_2f8100;
        case 0x2f8104u: goto label_2f8104;
        case 0x2f8108u: goto label_2f8108;
        case 0x2f810cu: goto label_2f810c;
        case 0x2f8110u: goto label_2f8110;
        case 0x2f8114u: goto label_2f8114;
        case 0x2f8118u: goto label_2f8118;
        case 0x2f811cu: goto label_2f811c;
        case 0x2f8120u: goto label_2f8120;
        case 0x2f8124u: goto label_2f8124;
        case 0x2f8128u: goto label_2f8128;
        case 0x2f812cu: goto label_2f812c;
        case 0x2f8130u: goto label_2f8130;
        case 0x2f8134u: goto label_2f8134;
        case 0x2f8138u: goto label_2f8138;
        case 0x2f813cu: goto label_2f813c;
        case 0x2f8140u: goto label_2f8140;
        case 0x2f8144u: goto label_2f8144;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f814cu: goto label_2f814c;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f8154u: goto label_2f8154;
        case 0x2f8158u: goto label_2f8158;
        case 0x2f815cu: goto label_2f815c;
        case 0x2f8160u: goto label_2f8160;
        case 0x2f8164u: goto label_2f8164;
        case 0x2f8168u: goto label_2f8168;
        case 0x2f816cu: goto label_2f816c;
        case 0x2f8170u: goto label_2f8170;
        case 0x2f8174u: goto label_2f8174;
        case 0x2f8178u: goto label_2f8178;
        case 0x2f817cu: goto label_2f817c;
        case 0x2f8180u: goto label_2f8180;
        case 0x2f8184u: goto label_2f8184;
        case 0x2f8188u: goto label_2f8188;
        case 0x2f818cu: goto label_2f818c;
        case 0x2f8190u: goto label_2f8190;
        case 0x2f8194u: goto label_2f8194;
        case 0x2f8198u: goto label_2f8198;
        case 0x2f819cu: goto label_2f819c;
        case 0x2f81a0u: goto label_2f81a0;
        case 0x2f81a4u: goto label_2f81a4;
        case 0x2f81a8u: goto label_2f81a8;
        case 0x2f81acu: goto label_2f81ac;
        case 0x2f81b0u: goto label_2f81b0;
        case 0x2f81b4u: goto label_2f81b4;
        case 0x2f81b8u: goto label_2f81b8;
        case 0x2f81bcu: goto label_2f81bc;
        case 0x2f81c0u: goto label_2f81c0;
        case 0x2f81c4u: goto label_2f81c4;
        case 0x2f81c8u: goto label_2f81c8;
        case 0x2f81ccu: goto label_2f81cc;
        case 0x2f81d0u: goto label_2f81d0;
        case 0x2f81d4u: goto label_2f81d4;
        case 0x2f81d8u: goto label_2f81d8;
        case 0x2f81dcu: goto label_2f81dc;
        case 0x2f81e0u: goto label_2f81e0;
        case 0x2f81e4u: goto label_2f81e4;
        case 0x2f81e8u: goto label_2f81e8;
        case 0x2f81ecu: goto label_2f81ec;
        case 0x2f81f0u: goto label_2f81f0;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f81f8u: goto label_2f81f8;
        case 0x2f81fcu: goto label_2f81fc;
        case 0x2f8200u: goto label_2f8200;
        case 0x2f8204u: goto label_2f8204;
        case 0x2f8208u: goto label_2f8208;
        case 0x2f820cu: goto label_2f820c;
        case 0x2f8210u: goto label_2f8210;
        case 0x2f8214u: goto label_2f8214;
        case 0x2f8218u: goto label_2f8218;
        case 0x2f821cu: goto label_2f821c;
        case 0x2f8220u: goto label_2f8220;
        case 0x2f8224u: goto label_2f8224;
        case 0x2f8228u: goto label_2f8228;
        case 0x2f822cu: goto label_2f822c;
        case 0x2f8230u: goto label_2f8230;
        case 0x2f8234u: goto label_2f8234;
        case 0x2f8238u: goto label_2f8238;
        case 0x2f823cu: goto label_2f823c;
        case 0x2f8240u: goto label_2f8240;
        case 0x2f8244u: goto label_2f8244;
        case 0x2f8248u: goto label_2f8248;
        case 0x2f824cu: goto label_2f824c;
        case 0x2f8250u: goto label_2f8250;
        case 0x2f8254u: goto label_2f8254;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f825cu: goto label_2f825c;
        case 0x2f8260u: goto label_2f8260;
        case 0x2f8264u: goto label_2f8264;
        case 0x2f8268u: goto label_2f8268;
        case 0x2f826cu: goto label_2f826c;
        case 0x2f8270u: goto label_2f8270;
        case 0x2f8274u: goto label_2f8274;
        case 0x2f8278u: goto label_2f8278;
        case 0x2f827cu: goto label_2f827c;
        case 0x2f8280u: goto label_2f8280;
        case 0x2f8284u: goto label_2f8284;
        case 0x2f8288u: goto label_2f8288;
        case 0x2f828cu: goto label_2f828c;
        case 0x2f8290u: goto label_2f8290;
        case 0x2f8294u: goto label_2f8294;
        case 0x2f8298u: goto label_2f8298;
        case 0x2f829cu: goto label_2f829c;
        case 0x2f82a0u: goto label_2f82a0;
        case 0x2f82a4u: goto label_2f82a4;
        case 0x2f82a8u: goto label_2f82a8;
        case 0x2f82acu: goto label_2f82ac;
        case 0x2f82b0u: goto label_2f82b0;
        case 0x2f82b4u: goto label_2f82b4;
        case 0x2f82b8u: goto label_2f82b8;
        case 0x2f82bcu: goto label_2f82bc;
        case 0x2f82c0u: goto label_2f82c0;
        case 0x2f82c4u: goto label_2f82c4;
        case 0x2f82c8u: goto label_2f82c8;
        case 0x2f82ccu: goto label_2f82cc;
        case 0x2f82d0u: goto label_2f82d0;
        case 0x2f82d4u: goto label_2f82d4;
        case 0x2f82d8u: goto label_2f82d8;
        case 0x2f82dcu: goto label_2f82dc;
        case 0x2f82e0u: goto label_2f82e0;
        case 0x2f82e4u: goto label_2f82e4;
        case 0x2f82e8u: goto label_2f82e8;
        case 0x2f82ecu: goto label_2f82ec;
        case 0x2f82f0u: goto label_2f82f0;
        case 0x2f82f4u: goto label_2f82f4;
        case 0x2f82f8u: goto label_2f82f8;
        case 0x2f82fcu: goto label_2f82fc;
        case 0x2f8300u: goto label_2f8300;
        case 0x2f8304u: goto label_2f8304;
        case 0x2f8308u: goto label_2f8308;
        case 0x2f830cu: goto label_2f830c;
        case 0x2f8310u: goto label_2f8310;
        case 0x2f8314u: goto label_2f8314;
        case 0x2f8318u: goto label_2f8318;
        case 0x2f831cu: goto label_2f831c;
        case 0x2f8320u: goto label_2f8320;
        case 0x2f8324u: goto label_2f8324;
        case 0x2f8328u: goto label_2f8328;
        case 0x2f832cu: goto label_2f832c;
        case 0x2f8330u: goto label_2f8330;
        case 0x2f8334u: goto label_2f8334;
        case 0x2f8338u: goto label_2f8338;
        case 0x2f833cu: goto label_2f833c;
        case 0x2f8340u: goto label_2f8340;
        case 0x2f8344u: goto label_2f8344;
        case 0x2f8348u: goto label_2f8348;
        case 0x2f834cu: goto label_2f834c;
        case 0x2f8350u: goto label_2f8350;
        case 0x2f8354u: goto label_2f8354;
        case 0x2f8358u: goto label_2f8358;
        case 0x2f835cu: goto label_2f835c;
        case 0x2f8360u: goto label_2f8360;
        case 0x2f8364u: goto label_2f8364;
        case 0x2f8368u: goto label_2f8368;
        case 0x2f836cu: goto label_2f836c;
        case 0x2f8370u: goto label_2f8370;
        case 0x2f8374u: goto label_2f8374;
        case 0x2f8378u: goto label_2f8378;
        case 0x2f837cu: goto label_2f837c;
        case 0x2f8380u: goto label_2f8380;
        case 0x2f8384u: goto label_2f8384;
        case 0x2f8388u: goto label_2f8388;
        case 0x2f838cu: goto label_2f838c;
        case 0x2f8390u: goto label_2f8390;
        case 0x2f8394u: goto label_2f8394;
        case 0x2f8398u: goto label_2f8398;
        case 0x2f839cu: goto label_2f839c;
        case 0x2f83a0u: goto label_2f83a0;
        case 0x2f83a4u: goto label_2f83a4;
        case 0x2f83a8u: goto label_2f83a8;
        case 0x2f83acu: goto label_2f83ac;
        case 0x2f83b0u: goto label_2f83b0;
        case 0x2f83b4u: goto label_2f83b4;
        case 0x2f83b8u: goto label_2f83b8;
        case 0x2f83bcu: goto label_2f83bc;
        case 0x2f83c0u: goto label_2f83c0;
        case 0x2f83c4u: goto label_2f83c4;
        case 0x2f83c8u: goto label_2f83c8;
        case 0x2f83ccu: goto label_2f83cc;
        case 0x2f83d0u: goto label_2f83d0;
        case 0x2f83d4u: goto label_2f83d4;
        case 0x2f83d8u: goto label_2f83d8;
        case 0x2f83dcu: goto label_2f83dc;
        case 0x2f83e0u: goto label_2f83e0;
        case 0x2f83e4u: goto label_2f83e4;
        case 0x2f83e8u: goto label_2f83e8;
        case 0x2f83ecu: goto label_2f83ec;
        case 0x2f83f0u: goto label_2f83f0;
        case 0x2f83f4u: goto label_2f83f4;
        case 0x2f83f8u: goto label_2f83f8;
        case 0x2f83fcu: goto label_2f83fc;
        case 0x2f8400u: goto label_2f8400;
        case 0x2f8404u: goto label_2f8404;
        case 0x2f8408u: goto label_2f8408;
        case 0x2f840cu: goto label_2f840c;
        case 0x2f8410u: goto label_2f8410;
        case 0x2f8414u: goto label_2f8414;
        case 0x2f8418u: goto label_2f8418;
        case 0x2f841cu: goto label_2f841c;
        case 0x2f8420u: goto label_2f8420;
        case 0x2f8424u: goto label_2f8424;
        case 0x2f8428u: goto label_2f8428;
        case 0x2f842cu: goto label_2f842c;
        case 0x2f8430u: goto label_2f8430;
        case 0x2f8434u: goto label_2f8434;
        case 0x2f8438u: goto label_2f8438;
        case 0x2f843cu: goto label_2f843c;
        case 0x2f8440u: goto label_2f8440;
        case 0x2f8444u: goto label_2f8444;
        case 0x2f8448u: goto label_2f8448;
        case 0x2f844cu: goto label_2f844c;
        case 0x2f8450u: goto label_2f8450;
        case 0x2f8454u: goto label_2f8454;
        case 0x2f8458u: goto label_2f8458;
        case 0x2f845cu: goto label_2f845c;
        case 0x2f8460u: goto label_2f8460;
        case 0x2f8464u: goto label_2f8464;
        case 0x2f8468u: goto label_2f8468;
        case 0x2f846cu: goto label_2f846c;
        case 0x2f8470u: goto label_2f8470;
        case 0x2f8474u: goto label_2f8474;
        case 0x2f8478u: goto label_2f8478;
        case 0x2f847cu: goto label_2f847c;
        case 0x2f8480u: goto label_2f8480;
        case 0x2f8484u: goto label_2f8484;
        case 0x2f8488u: goto label_2f8488;
        case 0x2f848cu: goto label_2f848c;
        case 0x2f8490u: goto label_2f8490;
        case 0x2f8494u: goto label_2f8494;
        case 0x2f8498u: goto label_2f8498;
        case 0x2f849cu: goto label_2f849c;
        case 0x2f84a0u: goto label_2f84a0;
        case 0x2f84a4u: goto label_2f84a4;
        case 0x2f84a8u: goto label_2f84a8;
        case 0x2f84acu: goto label_2f84ac;
        case 0x2f84b0u: goto label_2f84b0;
        case 0x2f84b4u: goto label_2f84b4;
        case 0x2f84b8u: goto label_2f84b8;
        case 0x2f84bcu: goto label_2f84bc;
        case 0x2f84c0u: goto label_2f84c0;
        case 0x2f84c4u: goto label_2f84c4;
        case 0x2f84c8u: goto label_2f84c8;
        case 0x2f84ccu: goto label_2f84cc;
        case 0x2f84d0u: goto label_2f84d0;
        case 0x2f84d4u: goto label_2f84d4;
        case 0x2f84d8u: goto label_2f84d8;
        case 0x2f84dcu: goto label_2f84dc;
        case 0x2f84e0u: goto label_2f84e0;
        case 0x2f84e4u: goto label_2f84e4;
        case 0x2f84e8u: goto label_2f84e8;
        case 0x2f84ecu: goto label_2f84ec;
        case 0x2f84f0u: goto label_2f84f0;
        case 0x2f84f4u: goto label_2f84f4;
        case 0x2f84f8u: goto label_2f84f8;
        case 0x2f84fcu: goto label_2f84fc;
        case 0x2f8500u: goto label_2f8500;
        case 0x2f8504u: goto label_2f8504;
        case 0x2f8508u: goto label_2f8508;
        case 0x2f850cu: goto label_2f850c;
        case 0x2f8510u: goto label_2f8510;
        case 0x2f8514u: goto label_2f8514;
        case 0x2f8518u: goto label_2f8518;
        case 0x2f851cu: goto label_2f851c;
        case 0x2f8520u: goto label_2f8520;
        case 0x2f8524u: goto label_2f8524;
        case 0x2f8528u: goto label_2f8528;
        case 0x2f852cu: goto label_2f852c;
        case 0x2f8530u: goto label_2f8530;
        case 0x2f8534u: goto label_2f8534;
        case 0x2f8538u: goto label_2f8538;
        case 0x2f853cu: goto label_2f853c;
        case 0x2f8540u: goto label_2f8540;
        case 0x2f8544u: goto label_2f8544;
        case 0x2f8548u: goto label_2f8548;
        case 0x2f854cu: goto label_2f854c;
        case 0x2f8550u: goto label_2f8550;
        case 0x2f8554u: goto label_2f8554;
        case 0x2f8558u: goto label_2f8558;
        case 0x2f855cu: goto label_2f855c;
        case 0x2f8560u: goto label_2f8560;
        case 0x2f8564u: goto label_2f8564;
        case 0x2f8568u: goto label_2f8568;
        case 0x2f856cu: goto label_2f856c;
        case 0x2f8570u: goto label_2f8570;
        case 0x2f8574u: goto label_2f8574;
        case 0x2f8578u: goto label_2f8578;
        case 0x2f857cu: goto label_2f857c;
        case 0x2f8580u: goto label_2f8580;
        case 0x2f8584u: goto label_2f8584;
        case 0x2f8588u: goto label_2f8588;
        case 0x2f858cu: goto label_2f858c;
        case 0x2f8590u: goto label_2f8590;
        case 0x2f8594u: goto label_2f8594;
        case 0x2f8598u: goto label_2f8598;
        case 0x2f859cu: goto label_2f859c;
        case 0x2f85a0u: goto label_2f85a0;
        case 0x2f85a4u: goto label_2f85a4;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f85b0u: goto label_2f85b0;
        case 0x2f85b4u: goto label_2f85b4;
        case 0x2f85b8u: goto label_2f85b8;
        case 0x2f85bcu: goto label_2f85bc;
        case 0x2f85c0u: goto label_2f85c0;
        case 0x2f85c4u: goto label_2f85c4;
        case 0x2f85c8u: goto label_2f85c8;
        case 0x2f85ccu: goto label_2f85cc;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f85d4u: goto label_2f85d4;
        case 0x2f85d8u: goto label_2f85d8;
        case 0x2f85dcu: goto label_2f85dc;
        case 0x2f85e0u: goto label_2f85e0;
        case 0x2f85e4u: goto label_2f85e4;
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f85ecu: goto label_2f85ec;
        case 0x2f85f0u: goto label_2f85f0;
        case 0x2f85f4u: goto label_2f85f4;
        case 0x2f85f8u: goto label_2f85f8;
        case 0x2f85fcu: goto label_2f85fc;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8604u: goto label_2f8604;
        case 0x2f8608u: goto label_2f8608;
        case 0x2f860cu: goto label_2f860c;
        case 0x2f8610u: goto label_2f8610;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f8618u: goto label_2f8618;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f8620u: goto label_2f8620;
        case 0x2f8624u: goto label_2f8624;
        case 0x2f8628u: goto label_2f8628;
        case 0x2f862cu: goto label_2f862c;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f8634u: goto label_2f8634;
        case 0x2f8638u: goto label_2f8638;
        case 0x2f863cu: goto label_2f863c;
        case 0x2f8640u: goto label_2f8640;
        case 0x2f8644u: goto label_2f8644;
        case 0x2f8648u: goto label_2f8648;
        case 0x2f864cu: goto label_2f864c;
        case 0x2f8650u: goto label_2f8650;
        case 0x2f8654u: goto label_2f8654;
        case 0x2f8658u: goto label_2f8658;
        case 0x2f865cu: goto label_2f865c;
        case 0x2f8660u: goto label_2f8660;
        case 0x2f8664u: goto label_2f8664;
        case 0x2f8668u: goto label_2f8668;
        case 0x2f866cu: goto label_2f866c;
        case 0x2f8670u: goto label_2f8670;
        case 0x2f8674u: goto label_2f8674;
        case 0x2f8678u: goto label_2f8678;
        case 0x2f867cu: goto label_2f867c;
        case 0x2f8680u: goto label_2f8680;
        case 0x2f8684u: goto label_2f8684;
        case 0x2f8688u: goto label_2f8688;
        case 0x2f868cu: goto label_2f868c;
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8694u: goto label_2f8694;
        case 0x2f8698u: goto label_2f8698;
        case 0x2f869cu: goto label_2f869c;
        case 0x2f86a0u: goto label_2f86a0;
        case 0x2f86a4u: goto label_2f86a4;
        case 0x2f86a8u: goto label_2f86a8;
        case 0x2f86acu: goto label_2f86ac;
        case 0x2f86b0u: goto label_2f86b0;
        case 0x2f86b4u: goto label_2f86b4;
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86c0u: goto label_2f86c0;
        case 0x2f86c4u: goto label_2f86c4;
        case 0x2f86c8u: goto label_2f86c8;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86d8u: goto label_2f86d8;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86e0u: goto label_2f86e0;
        case 0x2f86e4u: goto label_2f86e4;
        case 0x2f86e8u: goto label_2f86e8;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86f0u: goto label_2f86f0;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f86f8u: goto label_2f86f8;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f8700u: goto label_2f8700;
        case 0x2f8704u: goto label_2f8704;
        case 0x2f8708u: goto label_2f8708;
        case 0x2f870cu: goto label_2f870c;
        case 0x2f8710u: goto label_2f8710;
        case 0x2f8714u: goto label_2f8714;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f871cu: goto label_2f871c;
        case 0x2f8720u: goto label_2f8720;
        case 0x2f8724u: goto label_2f8724;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8734u: goto label_2f8734;
        case 0x2f8738u: goto label_2f8738;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8740u: goto label_2f8740;
        case 0x2f8744u: goto label_2f8744;
        case 0x2f8748u: goto label_2f8748;
        case 0x2f874cu: goto label_2f874c;
        case 0x2f8750u: goto label_2f8750;
        case 0x2f8754u: goto label_2f8754;
        case 0x2f8758u: goto label_2f8758;
        case 0x2f875cu: goto label_2f875c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f8764u: goto label_2f8764;
        case 0x2f8768u: goto label_2f8768;
        case 0x2f876cu: goto label_2f876c;
        case 0x2f8770u: goto label_2f8770;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8778u: goto label_2f8778;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f8780u: goto label_2f8780;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8788u: goto label_2f8788;
        case 0x2f878cu: goto label_2f878c;
        case 0x2f8790u: goto label_2f8790;
        case 0x2f8794u: goto label_2f8794;
        case 0x2f8798u: goto label_2f8798;
        case 0x2f879cu: goto label_2f879c;
        case 0x2f87a0u: goto label_2f87a0;
        case 0x2f87a4u: goto label_2f87a4;
        case 0x2f87a8u: goto label_2f87a8;
        case 0x2f87acu: goto label_2f87ac;
        case 0x2f87b0u: goto label_2f87b0;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87b8u: goto label_2f87b8;
        case 0x2f87bcu: goto label_2f87bc;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87c4u: goto label_2f87c4;
        case 0x2f87c8u: goto label_2f87c8;
        case 0x2f87ccu: goto label_2f87cc;
        case 0x2f87d0u: goto label_2f87d0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87d8u: goto label_2f87d8;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87e0u: goto label_2f87e0;
        case 0x2f87e4u: goto label_2f87e4;
        case 0x2f87e8u: goto label_2f87e8;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f87f0u: goto label_2f87f0;
        case 0x2f87f4u: goto label_2f87f4;
        case 0x2f87f8u: goto label_2f87f8;
        case 0x2f87fcu: goto label_2f87fc;
        case 0x2f8800u: goto label_2f8800;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8808u: goto label_2f8808;
        case 0x2f880cu: goto label_2f880c;
        case 0x2f8810u: goto label_2f8810;
        case 0x2f8814u: goto label_2f8814;
        case 0x2f8818u: goto label_2f8818;
        case 0x2f881cu: goto label_2f881c;
        case 0x2f8820u: goto label_2f8820;
        case 0x2f8824u: goto label_2f8824;
        case 0x2f8828u: goto label_2f8828;
        case 0x2f882cu: goto label_2f882c;
        case 0x2f8830u: goto label_2f8830;
        case 0x2f8834u: goto label_2f8834;
        case 0x2f8838u: goto label_2f8838;
        case 0x2f883cu: goto label_2f883c;
        case 0x2f8840u: goto label_2f8840;
        case 0x2f8844u: goto label_2f8844;
        case 0x2f8848u: goto label_2f8848;
        case 0x2f884cu: goto label_2f884c;
        case 0x2f8850u: goto label_2f8850;
        case 0x2f8854u: goto label_2f8854;
        case 0x2f8858u: goto label_2f8858;
        case 0x2f885cu: goto label_2f885c;
        case 0x2f8860u: goto label_2f8860;
        case 0x2f8864u: goto label_2f8864;
        case 0x2f8868u: goto label_2f8868;
        case 0x2f886cu: goto label_2f886c;
        case 0x2f8870u: goto label_2f8870;
        case 0x2f8874u: goto label_2f8874;
        case 0x2f8878u: goto label_2f8878;
        case 0x2f887cu: goto label_2f887c;
        case 0x2f8880u: goto label_2f8880;
        case 0x2f8884u: goto label_2f8884;
        case 0x2f8888u: goto label_2f8888;
        case 0x2f888cu: goto label_2f888c;
        case 0x2f8890u: goto label_2f8890;
        case 0x2f8894u: goto label_2f8894;
        case 0x2f8898u: goto label_2f8898;
        case 0x2f889cu: goto label_2f889c;
        case 0x2f88a0u: goto label_2f88a0;
        case 0x2f88a4u: goto label_2f88a4;
        case 0x2f88a8u: goto label_2f88a8;
        case 0x2f88acu: goto label_2f88ac;
        case 0x2f88b0u: goto label_2f88b0;
        case 0x2f88b4u: goto label_2f88b4;
        case 0x2f88b8u: goto label_2f88b8;
        case 0x2f88bcu: goto label_2f88bc;
        case 0x2f88c0u: goto label_2f88c0;
        case 0x2f88c4u: goto label_2f88c4;
        case 0x2f88c8u: goto label_2f88c8;
        case 0x2f88ccu: goto label_2f88cc;
        case 0x2f88d0u: goto label_2f88d0;
        case 0x2f88d4u: goto label_2f88d4;
        case 0x2f88d8u: goto label_2f88d8;
        case 0x2f88dcu: goto label_2f88dc;
        case 0x2f88e0u: goto label_2f88e0;
        case 0x2f88e4u: goto label_2f88e4;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f88ecu: goto label_2f88ec;
        case 0x2f88f0u: goto label_2f88f0;
        case 0x2f88f4u: goto label_2f88f4;
        case 0x2f88f8u: goto label_2f88f8;
        case 0x2f88fcu: goto label_2f88fc;
        case 0x2f8900u: goto label_2f8900;
        case 0x2f8904u: goto label_2f8904;
        case 0x2f8908u: goto label_2f8908;
        case 0x2f890cu: goto label_2f890c;
        case 0x2f8910u: goto label_2f8910;
        case 0x2f8914u: goto label_2f8914;
        case 0x2f8918u: goto label_2f8918;
        case 0x2f891cu: goto label_2f891c;
        case 0x2f8920u: goto label_2f8920;
        case 0x2f8924u: goto label_2f8924;
        case 0x2f8928u: goto label_2f8928;
        case 0x2f892cu: goto label_2f892c;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8934u: goto label_2f8934;
        case 0x2f8938u: goto label_2f8938;
        case 0x2f893cu: goto label_2f893c;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8944u: goto label_2f8944;
        case 0x2f8948u: goto label_2f8948;
        case 0x2f894cu: goto label_2f894c;
        case 0x2f8950u: goto label_2f8950;
        case 0x2f8954u: goto label_2f8954;
        case 0x2f8958u: goto label_2f8958;
        case 0x2f895cu: goto label_2f895c;
        case 0x2f8960u: goto label_2f8960;
        case 0x2f8964u: goto label_2f8964;
        case 0x2f8968u: goto label_2f8968;
        case 0x2f896cu: goto label_2f896c;
        case 0x2f8970u: goto label_2f8970;
        case 0x2f8974u: goto label_2f8974;
        case 0x2f8978u: goto label_2f8978;
        case 0x2f897cu: goto label_2f897c;
        case 0x2f8980u: goto label_2f8980;
        case 0x2f8984u: goto label_2f8984;
        case 0x2f8988u: goto label_2f8988;
        case 0x2f898cu: goto label_2f898c;
        case 0x2f8990u: goto label_2f8990;
        case 0x2f8994u: goto label_2f8994;
        case 0x2f8998u: goto label_2f8998;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89a0u: goto label_2f89a0;
        case 0x2f89a4u: goto label_2f89a4;
        case 0x2f89a8u: goto label_2f89a8;
        case 0x2f89acu: goto label_2f89ac;
        case 0x2f89b0u: goto label_2f89b0;
        case 0x2f89b4u: goto label_2f89b4;
        case 0x2f89b8u: goto label_2f89b8;
        case 0x2f89bcu: goto label_2f89bc;
        case 0x2f89c0u: goto label_2f89c0;
        case 0x2f89c4u: goto label_2f89c4;
        case 0x2f89c8u: goto label_2f89c8;
        case 0x2f89ccu: goto label_2f89cc;
        default: break;
    }

    ctx->pc = 0x2f7518u;

label_2f7518:
    // 0x2f7518: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2f7518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_2f751c:
    // 0x2f751c: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x2f751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
label_2f7520:
    // 0x2f7520: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x2f7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
label_2f7524:
    // 0x2f7524: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f7524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7528:
    // 0x2f7528: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x2f7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
label_2f752c:
    // 0x2f752c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f752cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7530:
    // 0x2f7530: 0xffb70278  sd          $s7, 0x278($sp)
    ctx->pc = 0x2f7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 23));
label_2f7534:
    // 0x2f7534: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f7538:
    // 0x2f7538: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x2f7538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
label_2f753c:
    // 0x2f753c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f753cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f7540:
    // 0x2f7540: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x2f7540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
label_2f7544:
    // 0x2f7544: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2f7544u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f7548:
    // 0x2f7548: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x2f7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
label_2f754c:
    // 0x2f754c: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x2f754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
label_2f7550:
    // 0x2f7550: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x2f7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
label_2f7554:
    // 0x2f7554: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x2f7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_2f7558:
    // 0x2f7558: 0xe7b50298  swc1        $f21, 0x298($sp)
    ctx->pc = 0x2f7558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_2f755c:
    // 0x2f755c: 0xe7b40290  swc1        $f20, 0x290($sp)
    ctx->pc = 0x2f755cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2f7560:
    // 0x2f7560: 0xc0f6a96  jal         func_3DAA58
label_2f7564:
    if (ctx->pc == 0x2F7564u) {
        ctx->pc = 0x2F7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7560u;
        // 0x2f7564: 0xafa70224  sw          $a3, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7568u;
        goto label_2f7568;
    }
    ctx->pc = 0x2F7560u;
    SET_GPR_U32(ctx, 31, 0x2F7568u);
    ctx->pc = 0x2F7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7560u;
    // 0x2f7564: 0xafa70224  sw          $a3, 0x224($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F7560u, 0x2F7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7568u;
label_2f7568:
    // 0x2f7568: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x2f7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f756c:
    // 0x2f756c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f7570:
    // 0x2f7570: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7574:
    // 0x2f7574: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7578:
    // 0x2f7578: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2f7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f757c:
    // 0x2f757c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f7580:
    // 0x2f7580: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f7580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f7584:
    // 0x2f7584: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7588:
    // 0x2f7588: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f7588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f758c:
    // 0x2f758c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7590:
    // 0x2f7590: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f7590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f7594:
    // 0x2f7594: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7598:
    // 0x2f7598: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f7598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f759c:
    // 0x2f759c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f75a0:
    // 0x2f75a0: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2f75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f75a4:
    // 0x2f75a4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f75a8:
    // 0x2f75a8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2f75a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2f75ac:
    // 0x2f75ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f75acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f75b0:
    // 0x2f75b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2f75b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f75b4:
    // 0x2f75b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f75b8:
    // 0x2f75b8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2f75b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f75bc:
    // 0x2f75bc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f75bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f75c0:
    // 0x2f75c0: 0xc07a8b2  jal         func_1EA2C8
label_2f75c4:
    if (ctx->pc == 0x2F75C4u) {
        ctx->pc = 0x2F75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C0u;
        // 0x2f75c4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75C8u;
        goto label_2f75c8;
    }
    ctx->pc = 0x2F75C0u;
    SET_GPR_U32(ctx, 31, 0x2F75C8u);
    ctx->pc = 0x2F75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75C0u;
    // 0x2f75c4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F75C0u, 0x2F75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C8u;
label_2f75c8:
    // 0x2f75c8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f75cc:
    // 0x2f75cc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f75d0:
    // 0x2f75d0: 0xc4601b84  lwc1        $f0, 0x1B84($v1)
    ctx->pc = 0x2f75d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f75d4:
    // 0x2f75d4: 0x8e421004  lw          $v0, 0x1004($s2)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4100)));
label_2f75d8:
    // 0x2f75d8: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2f75d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_2f75dc:
    // 0x2f75dc: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
label_2f75e0:
    if (ctx->pc == 0x2F75E0u) {
        ctx->pc = 0x2F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75DCu;
        // 0x2f75e0: 0x8c950150  lw          $s5, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75E4u;
        goto label_2f75e4;
    }
    ctx->pc = 0x2F75DCu;
    {
        const bool branch_taken_0x2f75dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75DCu;
        // 0x2f75e0: 0x8c950150  lw          $s5, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75dc) {
            ctx->pc = 0x2F7614u;
            goto label_2f7614;
        }
    }
    ctx->pc = 0x2F75E4u;
label_2f75e4:
    // 0x2f75e4: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x2f75e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
label_2f75e8:
    // 0x2f75e8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2f75ec:
    if (ctx->pc == 0x2F75ECu) {
        ctx->pc = 0x2F75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75E8u;
        // 0x2f75ec: 0x8e44036c  lw          $a0, 0x36C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75F0u;
        goto label_2f75f0;
    }
    ctx->pc = 0x2F75E8u;
    {
        const bool branch_taken_0x2f75e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f75e8) {
            ctx->pc = 0x2F75ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F75E8u;
            // 0x2f75ec: 0x8e44036c  lw          $a0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7618u;
            goto label_2f7618;
        }
    }
    ctx->pc = 0x2F75F0u;
label_2f75f0:
    // 0x2f75f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2f75f4:
    // 0x2f75f4: 0x8e451084  lw          $a1, 0x1084($s2)
    ctx->pc = 0x2f75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4228)));
label_2f75f8:
    // 0x2f75f8: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x2f75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_2f75fc:
    // 0x2f75fc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2f75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f7600:
    // 0x2f7600: 0x12a40004  beq         $s5, $a0, . + 4 + (0x4 << 2)
label_2f7604:
    if (ctx->pc == 0x2F7604u) {
        ctx->pc = 0x2F7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7600u;
        // 0x2f7604: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7608u;
        goto label_2f7608;
    }
    ctx->pc = 0x2F7600u;
    {
        const bool branch_taken_0x2f7600 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7600u;
        // 0x2f7604: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7600) {
            ctx->pc = 0x2F7614u;
            goto label_2f7614;
        }
    }
    ctx->pc = 0x2F7608u;
label_2f7608:
    // 0x2f7608: 0x2c4200fb  sltiu       $v0, $v0, 0xFB
    ctx->pc = 0x2f7608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)251) ? 1 : 0);
label_2f760c:
    // 0x2f760c: 0x104004e1  beqz        $v0, . + 4 + (0x4E1 << 2)
label_2f7610:
    if (ctx->pc == 0x2F7610u) {
        ctx->pc = 0x2F7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F760Cu;
        // 0x2f7610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7614u;
        goto label_2f7614;
    }
    ctx->pc = 0x2F760Cu;
    {
        const bool branch_taken_0x2f760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F760Cu;
        // 0x2f7610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f760c) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7614u;
label_2f7614:
    // 0x2f7614: 0x8e44036c  lw          $a0, 0x36C($s2)
    ctx->pc = 0x2f7614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_2f7618:
    // 0x2f7618: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x2f7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_2f761c:
    // 0x2f761c: 0x144004dd  bnez        $v0, . + 4 + (0x4DD << 2)
label_2f7620:
    if (ctx->pc == 0x2F7620u) {
        ctx->pc = 0x2F7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F761Cu;
        // 0x2f7620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7624u;
        goto label_2f7624;
    }
    ctx->pc = 0x2F761Cu;
    {
        const bool branch_taken_0x2f761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F761Cu;
        // 0x2f7620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f761c) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7624u;
label_2f7624:
    // 0x2f7624: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2f7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_2f7628:
    // 0x2f7628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f762c:
    // 0x2f762c: 0x144004d9  bnez        $v0, . + 4 + (0x4D9 << 2)
label_2f7630:
    if (ctx->pc == 0x2F7630u) {
        ctx->pc = 0x2F7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F762Cu;
        // 0x2f7630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7634u;
        goto label_2f7634;
    }
    ctx->pc = 0x2F762Cu;
    {
        const bool branch_taken_0x2f762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F762Cu;
        // 0x2f7630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f762c) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7634u;
label_2f7634:
    // 0x2f7634: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2f7634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2f7638:
    // 0x2f7638: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2f7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2f763c:
    // 0x2f763c: 0x104304d5  beq         $v0, $v1, . + 4 + (0x4D5 << 2)
label_2f7640:
    if (ctx->pc == 0x2F7640u) {
        ctx->pc = 0x2F7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F763Cu;
        // 0x2f7640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7644u;
        goto label_2f7644;
    }
    ctx->pc = 0x2F763Cu;
    {
        const bool branch_taken_0x2f763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F763Cu;
        // 0x2f7640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f763c) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7644u;
label_2f7644:
    // 0x2f7644: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f7644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7648:
    // 0x2f7648: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x2f7648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f764c:
    // 0x2f764c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7650:
    // 0x2f7650: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7654:
    // 0x2f7654: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f7654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f7658:
    // 0x2f7658: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f765c:
    // 0x2f765c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f765cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7660:
    // 0x2f7660: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f7660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7664:
    // 0x2f7664: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7668:
    // 0x2f7668: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f766c:
    // 0x2f766c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2f766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7670:
    // 0x2f7670: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2f7670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f7674:
    // 0x2f7674: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7678:
    // 0x2f7678: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2f7678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f767c:
    // 0x2f767c: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x2f767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7680:
    // 0x2f7680: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2f7680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2f7684:
    // 0x2f7684: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2f7684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2f7688:
    // 0x2f7688: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2f7688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2f768c:
    // 0x2f768c: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x2f768cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2f7690:
    // 0x2f7690: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f7690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7694:
    // 0x2f7694: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f7694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7698:
    // 0x2f7698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f769c:
    // 0x2f769c: 0x16c20014  bne         $s6, $v0, . + 4 + (0x14 << 2)
label_2f76a0:
    if (ctx->pc == 0x2F76A0u) {
        ctx->pc = 0x2F76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F769Cu;
        // 0x2f76a0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F76A4u;
        goto label_2f76a4;
    }
    ctx->pc = 0x2F769Cu;
    {
        const bool branch_taken_0x2f769c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F769Cu;
        // 0x2f76a0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f769c) {
            ctx->pc = 0x2F76F0u;
            goto label_2f76f0;
        }
    }
    ctx->pc = 0x2F76A4u;
label_2f76a4:
    // 0x2f76a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f76a8:
    // 0x2f76a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f76ac:
    // 0x2f76ac: 0xc440b994  lwc1        $f0, -0x466C($v0)
    ctx->pc = 0x2f76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f76b0:
    // 0x2f76b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f76b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f76b4:
    // 0x2f76b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f76b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f76b8:
    // 0x2f76b8: 0x0  nop
    ctx->pc = 0x2f76b8u;
    // NOP
label_2f76bc:
    // 0x2f76bc: 0x450104b5  bc1t        . + 4 + (0x4B5 << 2)
label_2f76c0:
    if (ctx->pc == 0x2F76C0u) {
        ctx->pc = 0x2F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76BCu;
        // 0x2f76c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F76C4u;
        goto label_2f76c4;
    }
    ctx->pc = 0x2F76BCu;
    {
        const bool branch_taken_0x2f76bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76BCu;
        // 0x2f76c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76bc) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F76C4u;
label_2f76c4:
    // 0x2f76c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f76c8:
    // 0x2f76c8: 0xc440b998  lwc1        $f0, -0x4668($v0)
    ctx->pc = 0x2f76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f76cc:
    // 0x2f76cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f76ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f76d0:
    // 0x2f76d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f76d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f76d4:
    // 0x2f76d4: 0x0  nop
    ctx->pc = 0x2f76d4u;
    // NOP
label_2f76d8:
    // 0x2f76d8: 0x450104ae  bc1t        . + 4 + (0x4AE << 2)
label_2f76dc:
    if (ctx->pc == 0x2F76DCu) {
        ctx->pc = 0x2F76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76D8u;
        // 0x2f76dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F76E0u;
        goto label_2f76e0;
    }
    ctx->pc = 0x2F76D8u;
    {
        const bool branch_taken_0x2f76d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76D8u;
        // 0x2f76dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76d8) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F76E0u;
label_2f76e0:
    // 0x2f76e0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2f76e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_2f76e4:
    // 0x2f76e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f76e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f76e8:
    // 0x2f76e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f76ec:
    if (ctx->pc == 0x2F76ECu) {
        ctx->pc = 0x2F76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76E8u;
        // 0x2f76ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F76F0u;
        goto label_2f76f0;
    }
    ctx->pc = 0x2F76E8u;
    {
        const bool branch_taken_0x2f76e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76E8u;
        // 0x2f76ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76e8) {
            ctx->pc = 0x2F771Cu;
            goto label_2f771c;
        }
    }
    ctx->pc = 0x2F76F0u;
label_2f76f0:
    // 0x2f76f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f76f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f76f4:
    // 0x2f76f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f76f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2f76f8:
    // 0x2f76f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f76f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f76fc:
    // 0x2f76fc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f76fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2f7700:
    // 0x2f7700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f7700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7704:
    // 0x2f7704: 0x0  nop
    ctx->pc = 0x2f7704u;
    // NOP
label_2f7708:
    // 0x2f7708: 0x450104a2  bc1t        . + 4 + (0x4A2 << 2)
label_2f770c:
    if (ctx->pc == 0x2F770Cu) {
        ctx->pc = 0x2F770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7708u;
        // 0x2f770c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7710u;
        goto label_2f7710;
    }
    ctx->pc = 0x2F7708u;
    {
        const bool branch_taken_0x2f7708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7708u;
        // 0x2f770c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7708) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7710u;
label_2f7710:
    // 0x2f7710: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2f7710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_2f7714:
    // 0x2f7714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7718:
    // 0x2f7718: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f7718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f771c:
    // 0x2f771c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_2f7720:
    if (ctx->pc == 0x2F7720u) {
        ctx->pc = 0x2F7724u;
        goto label_2f7724;
    }
    ctx->pc = 0x2F771Cu;
    {
        const bool branch_taken_0x2f771c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f771c) {
            ctx->pc = 0x2F7734u;
            goto label_2f7734;
        }
    }
    ctx->pc = 0x2F7724u;
label_2f7724:
    // 0x2f7724: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f7724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f7728:
    // 0x2f7728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f772c:
    // 0x2f772c: 0x0  nop
    ctx->pc = 0x2f772cu;
    // NOP
label_2f7730:
    // 0x2f7730: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f7730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f7734:
    // 0x2f7734: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7738:
    // 0x2f7738: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f773c:
    // 0x2f773c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f7740:
    // 0x2f7740: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f7740u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f7744:
    // 0x2f7744: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f7744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f7748:
    // 0x2f7748: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f7748u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f774c:
    // 0x2f774c: 0x46000004  c1          0x4
    ctx->pc = 0x2f774cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2f7750:
    // 0x2f7750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f7750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7754:
    // 0x2f7754: 0x0  nop
    ctx->pc = 0x2f7754u;
    // NOP
label_2f7758:
    // 0x2f7758: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_2f775c:
    if (ctx->pc == 0x2F775Cu) {
        ctx->pc = 0x2F775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7758u;
        // 0x2f775c: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7760u;
        goto label_2f7760;
    }
    ctx->pc = 0x2F7758u;
    {
        const bool branch_taken_0x2f7758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7758u;
        // 0x2f775c: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7758) {
            ctx->pc = 0x2F77D0u;
            goto label_2f77d0;
        }
    }
    ctx->pc = 0x2F7760u;
label_2f7760:
    // 0x2f7760: 0x1240048c  beqz        $s2, . + 4 + (0x48C << 2)
label_2f7764:
    if (ctx->pc == 0x2F7764u) {
        ctx->pc = 0x2F7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7760u;
        // 0x2f7764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7768u;
        goto label_2f7768;
    }
    ctx->pc = 0x2F7760u;
    {
        const bool branch_taken_0x2f7760 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7760u;
        // 0x2f7764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7760) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7768u;
label_2f7768:
    // 0x2f7768: 0x8e441100  lw          $a0, 0x1100($s2)
    ctx->pc = 0x2f7768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
label_2f776c:
    // 0x2f776c: 0x1080048a  beqz        $a0, . + 4 + (0x48A << 2)
label_2f7770:
    if (ctx->pc == 0x2F7770u) {
        ctx->pc = 0x2F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F776Cu;
        // 0x2f7770: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7774u;
        goto label_2f7774;
    }
    ctx->pc = 0x2F776Cu;
    {
        const bool branch_taken_0x2f776c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F776Cu;
        // 0x2f7770: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f776c) {
            ctx->pc = 0x2F8998u;
            goto label_2f8998;
        }
    }
    ctx->pc = 0x2F7774u;
label_2f7774:
    // 0x2f7774: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2f7774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f7778:
    // 0x2f7778: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2f7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2f777c:
    // 0x2f777c: 0x40f809  jalr        $v0
label_2f7780:
    if (ctx->pc == 0x2F7780u) {
        ctx->pc = 0x2F7784u;
        goto label_2f7784;
    }
    ctx->pc = 0x2F777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F7784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F777Cu, 0x2F7784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F7784u;
label_2f7784:
    // 0x2f7784: 0x50400483  beql        $v0, $zero, . + 4 + (0x483 << 2)
label_2f7788:
    if (ctx->pc == 0x2F7788u) {
        ctx->pc = 0x2F7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7784u;
        // 0x2f7788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F778Cu;
        goto label_2f778c;
    }
    ctx->pc = 0x2F7784u;
    {
        const bool branch_taken_0x2f7784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7784) {
            ctx->pc = 0x2F7788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7784u;
            // 0x2f7788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F778Cu;
label_2f778c:
    // 0x2f778c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7790:
    // 0x2f7790: 0x8e501100  lw          $s0, 0x1100($s2)
    ctx->pc = 0x2f7790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
label_2f7794:
    // 0x2f7794: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2f7794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7798:
    // 0x2f7798: 0x26100230  addiu       $s0, $s0, 0x230
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_2f779c:
    // 0x2f779c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2f779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2f77a0:
    // 0x2f77a0: 0xc0b4bc6  jal         func_2D2F18
label_2f77a4:
    if (ctx->pc == 0x2F77A4u) {
        ctx->pc = 0x2F77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77A0u;
        // 0x2f77a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77A8u;
        goto label_2f77a8;
    }
    ctx->pc = 0x2F77A0u;
    SET_GPR_U32(ctx, 31, 0x2F77A8u);
    ctx->pc = 0x2F77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77A0u;
    // 0x2f77a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2F77A0u, 0x2F77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77A8u;
label_2f77a8:
    // 0x2f77a8: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x2f77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f77ac:
    // 0x2f77ac: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2f77acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f77b0:
    // 0x2f77b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f77b4:
    // 0x2f77b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f77b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f77b8:
    // 0x2f77b8: 0xc0b4bc6  jal         func_2D2F18
label_2f77bc:
    if (ctx->pc == 0x2F77BCu) {
        ctx->pc = 0x2F77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77B8u;
        // 0x2f77bc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77C0u;
        goto label_2f77c0;
    }
    ctx->pc = 0x2F77B8u;
    SET_GPR_U32(ctx, 31, 0x2F77C0u);
    ctx->pc = 0x2F77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77B8u;
    // 0x2f77bc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2F77B8u, 0x2F77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77C0u;
label_2f77c0:
    // 0x2f77c0: 0x12200473  beqz        $s1, . + 4 + (0x473 << 2)
label_2f77c4:
    if (ctx->pc == 0x2F77C4u) {
        ctx->pc = 0x2F77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C0u;
        // 0x2f77c4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77C8u;
        goto label_2f77c8;
    }
    ctx->pc = 0x2F77C0u;
    {
        const bool branch_taken_0x2f77c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C0u;
        // 0x2f77c4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c0) {
            ctx->pc = 0x2F8990u;
            goto label_2f8990;
        }
    }
    ctx->pc = 0x2F77C8u;
label_2f77c8:
    // 0x2f77c8: 0x10400471  beqz        $v0, . + 4 + (0x471 << 2)
label_2f77cc:
    if (ctx->pc == 0x2F77CCu) {
        ctx->pc = 0x2F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C8u;
        // 0x2f77cc: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77D0u;
        goto label_2f77d0;
    }
    ctx->pc = 0x2F77C8u;
    {
        const bool branch_taken_0x2f77c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C8u;
        // 0x2f77cc: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c8) {
            ctx->pc = 0x2F8990u;
            goto label_2f8990;
        }
    }
    ctx->pc = 0x2F77D0u;
label_2f77d0:
    // 0x2f77d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f77d4:
    // 0x2f77d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f77d8:
    // 0x2f77d8: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f77dc:
    // 0x2f77dc: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2f77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f77e0:
    // 0x2f77e0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2f77e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f77e4:
    // 0x2f77e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2f77e8:
    if (ctx->pc == 0x2F77E8u) {
        ctx->pc = 0x2F77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77E4u;
        // 0x2f77e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77ECu;
        goto label_2f77ec;
    }
    ctx->pc = 0x2F77E4u;
    {
        const bool branch_taken_0x2f77e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77E4u;
        // 0x2f77e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77e4) {
            ctx->pc = 0x2F7818u;
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F77ECu;
label_2f77ec:
    // 0x2f77ec: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2f77f0:
    // 0x2f77f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2f77f4:
    if (ctx->pc == 0x2F77F4u) {
        ctx->pc = 0x2F77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F0u;
        // 0x2f77f4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77F8u;
        goto label_2f77f8;
    }
    ctx->pc = 0x2F77F0u;
    {
        const bool branch_taken_0x2f77f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F0u;
        // 0x2f77f4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77f0) {
            ctx->pc = 0x2F7818u;
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F77F8u;
label_2f77f8:
    // 0x2f77f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f77fc:
    if (ctx->pc == 0x2F77FCu) {
        ctx->pc = 0x2F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F8u;
        // 0x2f77fc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7800u;
        goto label_2f7800;
    }
    ctx->pc = 0x2F77F8u;
    {
        const bool branch_taken_0x2f77f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F8u;
        // 0x2f77fc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77f8) {
            ctx->pc = 0x2F7818u;
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F7800u;
label_2f7800:
    // 0x2f7800: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f7804:
    if (ctx->pc == 0x2F7804u) {
        ctx->pc = 0x2F7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7800u;
        // 0x2f7804: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7808u;
        goto label_2f7808;
    }
    ctx->pc = 0x2F7800u;
    {
        const bool branch_taken_0x2f7800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7800u;
        // 0x2f7804: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7800) {
            ctx->pc = 0x2F7818u;
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F7808u;
label_2f7808:
    // 0x2f7808: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f780c:
    if (ctx->pc == 0x2F780Cu) {
        ctx->pc = 0x2F780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7808u;
        // 0x2f780c: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7810u;
        goto label_2f7810;
    }
    ctx->pc = 0x2F7808u;
    {
        const bool branch_taken_0x2f7808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7808u;
        // 0x2f780c: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7808) {
            ctx->pc = 0x2F7818u;
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F7810u;
label_2f7810:
    // 0x2f7810: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f7814:
    if (ctx->pc == 0x2F7814u) {
        ctx->pc = 0x2F7818u;
        goto label_2f7818;
    }
    ctx->pc = 0x2F7810u;
    {
        const bool branch_taken_0x2f7810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7810) {
            ctx->pc = 0x2F781Cu;
            goto label_2f781c;
        }
    }
    ctx->pc = 0x2F7818u;
label_2f7818:
    // 0x2f7818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f781c:
    // 0x2f781c: 0x5480005c  bnel        $a0, $zero, . + 4 + (0x5C << 2)
label_2f7820:
    if (ctx->pc == 0x2F7820u) {
        ctx->pc = 0x2F7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F781Cu;
        // 0x2f7820: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7824u;
        goto label_2f7824;
    }
    ctx->pc = 0x2F781Cu;
    {
        const bool branch_taken_0x2f781c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f781c) {
            ctx->pc = 0x2F7820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F781Cu;
            // 0x2f7820: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7990u;
            goto label_2f7990;
        }
    }
    ctx->pc = 0x2F7824u;
label_2f7824:
    // 0x2f7824: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f7828:
    // 0x2f7828: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f782c:
    // 0x2f782c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f7830:
    // 0x2f7830: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2f7834:
    if (ctx->pc == 0x2F7834u) {
        ctx->pc = 0x2F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7830u;
        // 0x2f7834: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7838u;
        goto label_2f7838;
    }
    ctx->pc = 0x2F7830u;
    {
        const bool branch_taken_0x2f7830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7830u;
        // 0x2f7834: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7830) {
            ctx->pc = 0x2F787Cu;
            goto label_2f787c;
        }
    }
    ctx->pc = 0x2F7838u;
label_2f7838:
    // 0x2f7838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f783c:
    // 0x2f783c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2f7840:
    if (ctx->pc == 0x2F7840u) {
        ctx->pc = 0x2F7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F783Cu;
        // 0x2f7840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7844u;
        goto label_2f7844;
    }
    ctx->pc = 0x2F783Cu;
    {
        const bool branch_taken_0x2f783c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F783Cu;
        // 0x2f7840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f783c) {
            ctx->pc = 0x2F787Cu;
            goto label_2f787c;
        }
    }
    ctx->pc = 0x2F7844u;
label_2f7844:
    // 0x2f7844: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2f7848:
    if (ctx->pc == 0x2F7848u) {
        ctx->pc = 0x2F7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7844u;
        // 0x2f7848: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F784Cu;
        goto label_2f784c;
    }
    ctx->pc = 0x2F7844u;
    {
        const bool branch_taken_0x2f7844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7844u;
        // 0x2f7848: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7844) {
            ctx->pc = 0x2F787Cu;
            goto label_2f787c;
        }
    }
    ctx->pc = 0x2F784Cu;
label_2f784c:
    // 0x2f784c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2f7850:
    if (ctx->pc == 0x2F7850u) {
        ctx->pc = 0x2F7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F784Cu;
        // 0x2f7850: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7854u;
        goto label_2f7854;
    }
    ctx->pc = 0x2F784Cu;
    {
        const bool branch_taken_0x2f784c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F784Cu;
        // 0x2f7850: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f784c) {
            ctx->pc = 0x2F787Cu;
            goto label_2f787c;
        }
    }
    ctx->pc = 0x2F7854u;
label_2f7854:
    // 0x2f7854: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_2f7858:
    if (ctx->pc == 0x2F7858u) {
        ctx->pc = 0x2F7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7854u;
        // 0x2f7858: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F785Cu;
        goto label_2f785c;
    }
    ctx->pc = 0x2F7854u;
    {
        const bool branch_taken_0x2f7854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7854) {
            ctx->pc = 0x2F7858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7854u;
            // 0x2f7858: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7880u;
            goto label_2f7880;
        }
    }
    ctx->pc = 0x2F785Cu;
label_2f785c:
    // 0x2f785c: 0xc0924a6  jal         func_249298
label_2f7860:
    if (ctx->pc == 0x2F7860u) {
        ctx->pc = 0x2F7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F785Cu;
        // 0x2f7860: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7864u;
        goto label_2f7864;
    }
    ctx->pc = 0x2F785Cu;
    SET_GPR_U32(ctx, 31, 0x2F7864u);
    ctx->pc = 0x2F7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F785Cu;
    // 0x2f7860: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x2F785Cu, 0x2F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7864u;
label_2f7864:
    // 0x2f7864: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f7868:
    if (ctx->pc == 0x2F7868u) {
        ctx->pc = 0x2F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7864u;
        // 0x2f7868: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F786Cu;
        goto label_2f786c;
    }
    ctx->pc = 0x2F7864u;
    {
        const bool branch_taken_0x2f7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7864) {
            ctx->pc = 0x2F7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7864u;
            // 0x2f7868: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7880u;
            goto label_2f7880;
        }
    }
    ctx->pc = 0x2F786Cu;
label_2f786c:
    // 0x2f786c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f7870:
    // 0x2f7870: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f7870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2f7874:
    // 0x2f7874: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f7878:
    if (ctx->pc == 0x2F7878u) {
        ctx->pc = 0x2F787Cu;
        goto label_2f787c;
    }
    ctx->pc = 0x2F7874u;
    {
        const bool branch_taken_0x2f7874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7874) {
            ctx->pc = 0x2F7880u;
            goto label_2f7880;
        }
    }
    ctx->pc = 0x2F787Cu;
label_2f787c:
    // 0x2f787c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f787cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7880:
    // 0x2f7880: 0x56200043  bnel        $s1, $zero, . + 4 + (0x43 << 2)
label_2f7884:
    if (ctx->pc == 0x2F7884u) {
        ctx->pc = 0x2F7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7880u;
        // 0x2f7884: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7888u;
        goto label_2f7888;
    }
    ctx->pc = 0x2F7880u;
    {
        const bool branch_taken_0x2f7880 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7880) {
            ctx->pc = 0x2F7884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7880u;
            // 0x2f7884: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7990u;
            goto label_2f7990;
        }
    }
    ctx->pc = 0x2F7888u;
label_2f7888:
    // 0x2f7888: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x2f7888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f788c:
    // 0x2f788c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f7890:
    // 0x2f7890: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f7890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2f7894:
    // 0x2f7894: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f7894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f7898:
    // 0x2f7898: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f789c:
    if (ctx->pc == 0x2F789Cu) {
        ctx->pc = 0x2F789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7898u;
        // 0x2f789c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78A0u;
        goto label_2f78a0;
    }
    ctx->pc = 0x2F7898u;
    {
        const bool branch_taken_0x2f7898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7898u;
        // 0x2f789c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7898) {
            ctx->pc = 0x2F78D4u;
            goto label_2f78d4;
        }
    }
    ctx->pc = 0x2F78A0u;
label_2f78a0:
    // 0x2f78a0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2f78a4:
    // 0x2f78a4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2f78a8:
    if (ctx->pc == 0x2F78A8u) {
        ctx->pc = 0x2F78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78A4u;
        // 0x2f78a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78ACu;
        goto label_2f78ac;
    }
    ctx->pc = 0x2F78A4u;
    {
        const bool branch_taken_0x2f78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f78a4) {
            ctx->pc = 0x2F78A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F78A4u;
            // 0x2f78a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F78D8u;
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F78ACu;
label_2f78ac:
    // 0x2f78ac: 0xc0924a8  jal         func_2492A0
label_2f78b0:
    if (ctx->pc == 0x2F78B0u) {
        ctx->pc = 0x2F78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78ACu;
        // 0x2f78b0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78B4u;
        goto label_2f78b4;
    }
    ctx->pc = 0x2F78ACu;
    SET_GPR_U32(ctx, 31, 0x2F78B4u);
    ctx->pc = 0x2F78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78ACu;
    // 0x2f78b0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F78ACu, 0x2F78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78B4u;
label_2f78b4:
    // 0x2f78b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2f78b8:
    if (ctx->pc == 0x2F78B8u) {
        ctx->pc = 0x2F78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78B4u;
        // 0x2f78b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78BCu;
        goto label_2f78bc;
    }
    ctx->pc = 0x2F78B4u;
    {
        const bool branch_taken_0x2f78b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f78b4) {
            ctx->pc = 0x2F78B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F78B4u;
            // 0x2f78b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F78D8u;
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F78BCu;
label_2f78bc:
    // 0x2f78bc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f78c0:
    // 0x2f78c0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2f78c4:
    // 0x2f78c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f78c8:
    if (ctx->pc == 0x2F78C8u) {
        ctx->pc = 0x2F78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78C4u;
        // 0x2f78c8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78CCu;
        goto label_2f78cc;
    }
    ctx->pc = 0x2F78C4u;
    {
        const bool branch_taken_0x2f78c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78C4u;
        // 0x2f78c8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78c4) {
            ctx->pc = 0x2F78D4u;
            goto label_2f78d4;
        }
    }
    ctx->pc = 0x2F78CCu;
label_2f78cc:
    // 0x2f78cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f78d0:
    if (ctx->pc == 0x2F78D0u) {
        ctx->pc = 0x2F78D4u;
        goto label_2f78d4;
    }
    ctx->pc = 0x2F78CCu;
    {
        const bool branch_taken_0x2f78cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f78cc) {
            ctx->pc = 0x2F78D8u;
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F78D4u;
label_2f78d4:
    // 0x2f78d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f78d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f78d8:
    // 0x2f78d8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_2f78dc:
    if (ctx->pc == 0x2F78DCu) {
        ctx->pc = 0x2F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78D8u;
        // 0x2f78dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78E0u;
        goto label_2f78e0;
    }
    ctx->pc = 0x2F78D8u;
    {
        const bool branch_taken_0x2f78d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78D8u;
        // 0x2f78dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78d8) {
            ctx->pc = 0x2F7958u;
            goto label_2f7958;
        }
    }
    ctx->pc = 0x2F78E0u;
label_2f78e0:
    // 0x2f78e0: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x2f78e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f78e4:
    // 0x2f78e4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f78e8:
    // 0x2f78e8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2f78ec:
    // 0x2f78ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f78ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f78f0:
    // 0x2f78f0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f78f4:
    if (ctx->pc == 0x2F78F4u) {
        ctx->pc = 0x2F78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78F0u;
        // 0x2f78f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78F8u;
        goto label_2f78f8;
    }
    ctx->pc = 0x2F78F0u;
    {
        const bool branch_taken_0x2f78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78F0u;
        // 0x2f78f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78f0) {
            ctx->pc = 0x2F792Cu;
            goto label_2f792c;
        }
    }
    ctx->pc = 0x2F78F8u;
label_2f78f8:
    // 0x2f78f8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2f78fc:
    // 0x2f78fc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2f7900:
    if (ctx->pc == 0x2F7900u) {
        ctx->pc = 0x2F7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78FCu;
        // 0x2f7900: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7904u;
        goto label_2f7904;
    }
    ctx->pc = 0x2F78FCu;
    {
        const bool branch_taken_0x2f78fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f78fc) {
            ctx->pc = 0x2F7900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F78FCu;
            // 0x2f7900: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7930u;
            goto label_2f7930;
        }
    }
    ctx->pc = 0x2F7904u;
label_2f7904:
    // 0x2f7904: 0xc0924a8  jal         func_2492A0
label_2f7908:
    if (ctx->pc == 0x2F7908u) {
        ctx->pc = 0x2F7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7904u;
        // 0x2f7908: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F790Cu;
        goto label_2f790c;
    }
    ctx->pc = 0x2F7904u;
    SET_GPR_U32(ctx, 31, 0x2F790Cu);
    ctx->pc = 0x2F7908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7904u;
    // 0x2f7908: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F7904u, 0x2F790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F790Cu;
label_2f790c:
    // 0x2f790c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2f7910:
    if (ctx->pc == 0x2F7910u) {
        ctx->pc = 0x2F7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F790Cu;
        // 0x2f7910: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7914u;
        goto label_2f7914;
    }
    ctx->pc = 0x2F790Cu;
    {
        const bool branch_taken_0x2f790c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f790c) {
            ctx->pc = 0x2F7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F790Cu;
            // 0x2f7910: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7930u;
            goto label_2f7930;
        }
    }
    ctx->pc = 0x2F7914u;
label_2f7914:
    // 0x2f7914: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f7918:
    // 0x2f7918: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2f791c:
    // 0x2f791c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f7920:
    if (ctx->pc == 0x2F7920u) {
        ctx->pc = 0x2F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F791Cu;
        // 0x2f7920: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7924u;
        goto label_2f7924;
    }
    ctx->pc = 0x2F791Cu;
    {
        const bool branch_taken_0x2f791c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F791Cu;
        // 0x2f7920: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f791c) {
            ctx->pc = 0x2F792Cu;
            goto label_2f792c;
        }
    }
    ctx->pc = 0x2F7924u;
label_2f7924:
    // 0x2f7924: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f7928:
    if (ctx->pc == 0x2F7928u) {
        ctx->pc = 0x2F792Cu;
        goto label_2f792c;
    }
    ctx->pc = 0x2F7924u;
    {
        const bool branch_taken_0x2f7924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7924) {
            ctx->pc = 0x2F7930u;
            goto label_2f7930;
        }
    }
    ctx->pc = 0x2F792Cu;
label_2f792c:
    // 0x2f792c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f792cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7930:
    // 0x2f7930: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2f7934:
    if (ctx->pc == 0x2F7934u) {
        ctx->pc = 0x2F7938u;
        goto label_2f7938;
    }
    ctx->pc = 0x2F7930u;
    {
        const bool branch_taken_0x2f7930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7930) {
            ctx->pc = 0x2F7950u;
            goto label_2f7950;
        }
    }
    ctx->pc = 0x2F7938u;
label_2f7938:
    // 0x2f7938: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f793c:
    // 0x2f793c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f793cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7940:
    // 0x2f7940: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f7944:
    // 0x2f7944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7948:
    // 0x2f7948: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2f7948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
label_2f794c:
    // 0x2f794c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f794cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f7950:
    // 0x2f7950: 0x5260000f  beql        $s3, $zero, . + 4 + (0xF << 2)
label_2f7954:
    if (ctx->pc == 0x2F7954u) {
        ctx->pc = 0x2F7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7950u;
        // 0x2f7954: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7958u;
        goto label_2f7958;
    }
    ctx->pc = 0x2F7950u;
    {
        const bool branch_taken_0x2f7950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7950) {
            ctx->pc = 0x2F7954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7950u;
            // 0x2f7954: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7990u;
            goto label_2f7990;
        }
    }
    ctx->pc = 0x2F7958u;
label_2f7958:
    // 0x2f7958: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f795c:
    // 0x2f795c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f7960:
    // 0x2f7960: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x2f7960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_2f7964:
    // 0x2f7964: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2f7964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2f7968:
    // 0x2f7968: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2f796c:
    if (ctx->pc == 0x2F796Cu) {
        ctx->pc = 0x2F796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7968u;
        // 0x2f796c: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7970u;
        goto label_2f7970;
    }
    ctx->pc = 0x2F7968u;
    {
        const bool branch_taken_0x2f7968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7968) {
            ctx->pc = 0x2F796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7968u;
            // 0x2f796c: 0x8e441100  lw          $a0, 0x1100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7990u;
            goto label_2f7990;
        }
    }
    ctx->pc = 0x2F7970u;
label_2f7970:
    // 0x2f7970: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f7974:
    // 0x2f7974: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
label_2f7978:
    if (ctx->pc == 0x2F7978u) {
        ctx->pc = 0x2F7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7974u;
        // 0x2f7978: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F797Cu;
        goto label_2f797c;
    }
    ctx->pc = 0x2F7974u;
    {
        const bool branch_taken_0x2f7974 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7974u;
        // 0x2f7978: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7974) {
            ctx->pc = 0x2F798Cu;
            goto label_2f798c;
        }
    }
    ctx->pc = 0x2F797Cu;
label_2f797c:
    // 0x2f797c: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_2f7980:
    if (ctx->pc == 0x2F7980u) {
        ctx->pc = 0x2F7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F797Cu;
        // 0x2f7980: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7984u;
        goto label_2f7984;
    }
    ctx->pc = 0x2F797Cu;
    {
        const bool branch_taken_0x2f797c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F797Cu;
        // 0x2f7980: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f797c) {
            ctx->pc = 0x2F798Cu;
            goto label_2f798c;
        }
    }
    ctx->pc = 0x2F7984u;
label_2f7984:
    // 0x2f7984: 0x16a20403  bne         $s5, $v0, . + 4 + (0x403 << 2)
label_2f7988:
    if (ctx->pc == 0x2F7988u) {
        ctx->pc = 0x2F7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7984u;
        // 0x2f7988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F798Cu;
        goto label_2f798c;
    }
    ctx->pc = 0x2F7984u;
    {
        const bool branch_taken_0x2f7984 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7984u;
        // 0x2f7988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7984) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F798Cu;
label_2f798c:
    // 0x2f798c: 0x8e441100  lw          $a0, 0x1100($s2)
    ctx->pc = 0x2f798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4352)));
label_2f7990:
    // 0x2f7990: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2f7994:
    if (ctx->pc == 0x2F7994u) {
        ctx->pc = 0x2F7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7990u;
        // 0x2f7994: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7998u;
        goto label_2f7998;
    }
    ctx->pc = 0x2F7990u;
    {
        const bool branch_taken_0x2f7990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7990) {
            ctx->pc = 0x2F7994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7990u;
            // 0x2f7994: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F79C0u;
            goto label_2f79c0;
        }
    }
    ctx->pc = 0x2F7998u;
label_2f7998:
    // 0x2f7998: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2f7998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f799c:
    // 0x2f799c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2f799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2f79a0:
    // 0x2f79a0: 0x40f809  jalr        $v0
label_2f79a4:
    if (ctx->pc == 0x2F79A4u) {
        ctx->pc = 0x2F79A8u;
        goto label_2f79a8;
    }
    ctx->pc = 0x2F79A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F79A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F79A0u, 0x2F79A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F79A8u;
label_2f79a8:
    // 0x2f79a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f79ac:
    if (ctx->pc == 0x2F79ACu) {
        ctx->pc = 0x2F79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79A8u;
        // 0x2f79ac: 0x8fa20224  lw          $v0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79B0u;
        goto label_2f79b0;
    }
    ctx->pc = 0x2F79A8u;
    {
        const bool branch_taken_0x2f79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79A8u;
        // 0x2f79ac: 0x8fa20224  lw          $v0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79a8) {
            ctx->pc = 0x2F79BCu;
            goto label_2f79bc;
        }
    }
    ctx->pc = 0x2F79B0u;
label_2f79b0:
    // 0x2f79b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2f79b4:
    // 0x2f79b4: 0x100003f7  b           . + 4 + (0x3F7 << 2)
label_2f79b8:
    if (ctx->pc == 0x2F79B8u) {
        ctx->pc = 0x2F79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79B4u;
        // 0x2f79b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79BCu;
        goto label_2f79bc;
    }
    ctx->pc = 0x2F79B4u;
    {
        const bool branch_taken_0x2f79b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79B4u;
        // 0x2f79b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79b4) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F79BCu;
label_2f79bc:
    // 0x2f79bc: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f79c0:
    // 0x2f79c0: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f79c4:
    // 0x2f79c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f79c8:
    // 0x2f79c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f79cc:
    // 0x2f79cc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f79d0:
    // 0x2f79d0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f79d4:
    // 0x2f79d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f79d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f79d8:
    // 0x2f79d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f79d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f79dc:
    // 0x2f79dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f79dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f79e0:
    // 0x2f79e0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f79e4:
    // 0x2f79e4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f79e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f79e8:
    // 0x2f79e8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2f79e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f79ec:
    // 0x2f79ec: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x2f79ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f79f0:
    // 0x2f79f0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2f79f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2f79f4:
    // 0x2f79f4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2f79f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2f79f8:
    // 0x2f79f8: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x2f79f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2f79fc:
    // 0x2f79fc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2f79fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_2f7a00:
    // 0x2f7a00: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f7a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f7a04:
    // 0x2f7a04: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f7a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f7a08:
    // 0x2f7a08: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f7a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f7a0c:
    // 0x2f7a0c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f7a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f7a10:
    // 0x2f7a10: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f7a10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f7a14:
    // 0x2f7a14: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f7a14u;
    // VWAITQ (Q already resolved in this runtime)
label_2f7a18:
    // 0x2f7a18: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f7a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7a1c:
    // 0x2f7a1c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f7a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7a20:
    // 0x2f7a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f7a24:
    // 0x2f7a24: 0x12c2002f  beq         $s6, $v0, . + 4 + (0x2F << 2)
label_2f7a28:
    if (ctx->pc == 0x2F7A28u) {
        ctx->pc = 0x2F7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A24u;
        // 0x2f7a28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A2Cu;
        goto label_2f7a2c;
    }
    ctx->pc = 0x2F7A24u;
    {
        const bool branch_taken_0x2f7a24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A24u;
        // 0x2f7a28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a24) {
            ctx->pc = 0x2F7AE4u;
            goto label_2f7ae4;
        }
    }
    ctx->pc = 0x2F7A2Cu;
label_2f7a2c:
    // 0x2f7a2c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f7a30:
    // 0x2f7a30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7a34:
    // 0x2f7a34: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x2f7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7a38:
    // 0x2f7a38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f7a38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f7a3c:
    // 0x2f7a3c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7a40:
    // 0x2f7a40: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x2f7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7a44:
    // 0x2f7a44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f7a44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f7a48:
    // 0x2f7a48: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f7a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7a4c:
    // 0x2f7a4c: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x2f7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7a50:
    // 0x2f7a50: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f7a50u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f7a54:
    // 0x2f7a54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f7a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f7a58:
    // 0x2f7a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7a5c:
    // 0x2f7a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7a60:
    // 0x2f7a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7a64:
    // 0x2f7a64: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f7a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7a68:
    // 0x2f7a68: 0x0  nop
    ctx->pc = 0x2f7a68u;
    // NOP
label_2f7a6c:
    // 0x2f7a6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f7a70:
    if (ctx->pc == 0x2F7A70u) {
        ctx->pc = 0x2F7A74u;
        goto label_2f7a74;
    }
    ctx->pc = 0x2F7A6Cu;
    {
        const bool branch_taken_0x2f7a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7a6c) {
            ctx->pc = 0x2F7A7Cu;
            goto label_2f7a7c;
        }
    }
    ctx->pc = 0x2F7A74u;
label_2f7a74:
    // 0x2f7a74: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f7a78:
    if (ctx->pc == 0x2F7A78u) {
        ctx->pc = 0x2F7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A74u;
        // 0x2f7a78: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A7Cu;
        goto label_2f7a7c;
    }
    ctx->pc = 0x2F7A74u;
    {
        const bool branch_taken_0x2f7a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A74u;
        // 0x2f7a78: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a74) {
            ctx->pc = 0x2F7A8Cu;
            goto label_2f7a8c;
        }
    }
    ctx->pc = 0x2F7A7Cu;
label_2f7a7c:
    // 0x2f7a7c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f7a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7a80:
    // 0x2f7a80: 0x0  nop
    ctx->pc = 0x2f7a80u;
    // NOP
label_2f7a84:
    // 0x2f7a84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f7a88:
    if (ctx->pc == 0x2F7A88u) {
        ctx->pc = 0x2F7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A84u;
        // 0x2f7a88: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A8Cu;
        goto label_2f7a8c;
    }
    ctx->pc = 0x2F7A84u;
    {
        const bool branch_taken_0x2f7a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7a84) {
            ctx->pc = 0x2F7A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7A84u;
            // 0x2f7a88: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7A8Cu;
            goto label_2f7a8c;
        }
    }
    ctx->pc = 0x2F7A8Cu;
label_2f7a8c:
    // 0x2f7a8c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2f7a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_2f7a90:
    // 0x2f7a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7a94:
    // 0x2f7a94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7a98:
    // 0x2f7a98: 0x0  nop
    ctx->pc = 0x2f7a98u;
    // NOP
label_2f7a9c:
    // 0x2f7a9c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f7a9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f7aa0:
    // 0x2f7aa0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f7aa0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f7aa4:
    // 0x2f7aa4: 0xc0e404c  jal         func_390130
label_2f7aa8:
    if (ctx->pc == 0x2F7AA8u) {
        ctx->pc = 0x2F7AACu;
        goto label_2f7aac;
    }
    ctx->pc = 0x2F7AA4u;
    SET_GPR_U32(ctx, 31, 0x2F7AACu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F7AA4u, 0x2F7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AACu;
label_2f7aac:
    // 0x2f7aac: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f7aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f7ab0:
    // 0x2f7ab0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f7ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f7ab4:
    // 0x2f7ab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7ab8:
    // 0x2f7ab8: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x2f7ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
label_2f7abc:
    // 0x2f7abc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f7abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7ac0:
    // 0x2f7ac0: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_2f7ac4:
    if (ctx->pc == 0x2F7AC4u) {
        ctx->pc = 0x2F7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AC0u;
        // 0x2f7ac4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AC8u;
        goto label_2f7ac8;
    }
    ctx->pc = 0x2F7AC0u;
    {
        const bool branch_taken_0x2f7ac0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AC0u;
        // 0x2f7ac4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ac0) {
            ctx->pc = 0x2F7AD0u;
            goto label_2f7ad0;
        }
    }
    ctx->pc = 0x2F7AC8u;
label_2f7ac8:
    // 0x2f7ac8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2f7ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2f7acc:
    // 0x2f7acc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f7accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7ad0:
    // 0x2f7ad0: 0x0  nop
    ctx->pc = 0x2f7ad0u;
    // NOP
label_2f7ad4:
    // 0x2f7ad4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f7ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7ad8:
    // 0x2f7ad8: 0x0  nop
    ctx->pc = 0x2f7ad8u;
    // NOP
label_2f7adc:
    // 0x2f7adc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f7ae0:
    if (ctx->pc == 0x2F7AE0u) {
        ctx->pc = 0x2F7AE4u;
        goto label_2f7ae4;
    }
    ctx->pc = 0x2F7ADCu;
    {
        const bool branch_taken_0x2f7adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7adc) {
            ctx->pc = 0x2F7AE8u;
            goto label_2f7ae8;
        }
    }
    ctx->pc = 0x2F7AE4u;
label_2f7ae4:
    // 0x2f7ae4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f7ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7ae8:
    // 0x2f7ae8: 0x120003a9  beqz        $s0, . + 4 + (0x3A9 << 2)
label_2f7aec:
    if (ctx->pc == 0x2F7AECu) {
        ctx->pc = 0x2F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AE8u;
        // 0x2f7aec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AF0u;
        goto label_2f7af0;
    }
    ctx->pc = 0x2F7AE8u;
    {
        const bool branch_taken_0x2f7ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AE8u;
        // 0x2f7aec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ae8) {
            ctx->pc = 0x2F8990u;
            goto label_2f8990;
        }
    }
    ctx->pc = 0x2F7AF0u;
label_2f7af0:
    // 0x2f7af0: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_2f7af4:
    if (ctx->pc == 0x2F7AF4u) {
        ctx->pc = 0x2F7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF0u;
        // 0x2f7af4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AF8u;
        goto label_2f7af8;
    }
    ctx->pc = 0x2F7AF0u;
    {
        const bool branch_taken_0x2f7af0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF0u;
        // 0x2f7af4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7af0) {
            ctx->pc = 0x2F7B00u;
            goto label_2f7b00;
        }
    }
    ctx->pc = 0x2F7AF8u;
label_2f7af8:
    // 0x2f7af8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f7afc:
    if (ctx->pc == 0x2F7AFCu) {
        ctx->pc = 0x2F7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF8u;
        // 0x2f7afc: 0xc454b9a0  lwc1        $f20, -0x4660($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B00u;
        goto label_2f7b00;
    }
    ctx->pc = 0x2F7AF8u;
    {
        const bool branch_taken_0x2f7af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF8u;
        // 0x2f7afc: 0xc454b9a0  lwc1        $f20, -0x4660($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7af8) {
            ctx->pc = 0x2F7B08u;
            goto label_2f7b08;
        }
    }
    ctx->pc = 0x2F7B00u;
label_2f7b00:
    // 0x2f7b00: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2f7b04:
    // 0x2f7b04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f7b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f7b08:
    // 0x2f7b08: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f7b0c:
    // 0x2f7b0c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7b10:
    // 0x2f7b10: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x2f7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7b14:
    // 0x2f7b14: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f7b14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f7b18:
    // 0x2f7b18: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f7b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7b1c:
    // 0x2f7b1c: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x2f7b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7b20:
    // 0x2f7b20: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f7b20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f7b24:
    // 0x2f7b24: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f7b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7b28:
    // 0x2f7b28: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x2f7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7b2c:
    // 0x2f7b2c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f7b2cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f7b30:
    // 0x2f7b30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f7b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f7b34:
    // 0x2f7b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7b38:
    // 0x2f7b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7b3c:
    // 0x2f7b3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7b40:
    // 0x2f7b40: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f7b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7b44:
    // 0x2f7b44: 0x0  nop
    ctx->pc = 0x2f7b44u;
    // NOP
label_2f7b48:
    // 0x2f7b48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f7b4c:
    if (ctx->pc == 0x2F7B4Cu) {
        ctx->pc = 0x2F7B50u;
        goto label_2f7b50;
    }
    ctx->pc = 0x2F7B48u;
    {
        const bool branch_taken_0x2f7b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7b48) {
            ctx->pc = 0x2F7B58u;
            goto label_2f7b58;
        }
    }
    ctx->pc = 0x2F7B50u;
label_2f7b50:
    // 0x2f7b50: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f7b54:
    if (ctx->pc == 0x2F7B54u) {
        ctx->pc = 0x2F7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B50u;
        // 0x2f7b54: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B58u;
        goto label_2f7b58;
    }
    ctx->pc = 0x2F7B50u;
    {
        const bool branch_taken_0x2f7b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B50u;
        // 0x2f7b54: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b50) {
            ctx->pc = 0x2F7B68u;
            goto label_2f7b68;
        }
    }
    ctx->pc = 0x2F7B58u;
label_2f7b58:
    // 0x2f7b58: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f7b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7b5c:
    // 0x2f7b5c: 0x0  nop
    ctx->pc = 0x2f7b5cu;
    // NOP
label_2f7b60:
    // 0x2f7b60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f7b64:
    if (ctx->pc == 0x2F7B64u) {
        ctx->pc = 0x2F7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B60u;
        // 0x2f7b64: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B68u;
        goto label_2f7b68;
    }
    ctx->pc = 0x2F7B60u;
    {
        const bool branch_taken_0x2f7b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7b60) {
            ctx->pc = 0x2F7B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B60u;
            // 0x2f7b64: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B68u;
            goto label_2f7b68;
        }
    }
    ctx->pc = 0x2F7B68u;
label_2f7b68:
    // 0x2f7b68: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_2f7b6c:
    if (ctx->pc == 0x2F7B6Cu) {
        ctx->pc = 0x2F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B68u;
        // 0x2f7b6c: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B70u;
        goto label_2f7b70;
    }
    ctx->pc = 0x2F7B68u;
    {
        const bool branch_taken_0x2f7b68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B68u;
        // 0x2f7b6c: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b68) {
            ctx->pc = 0x2F7B80u;
            goto label_2f7b80;
        }
    }
    ctx->pc = 0x2F7B70u;
label_2f7b70:
    // 0x2f7b70: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2f7b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2f7b74:
    // 0x2f7b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7b78:
    // 0x2f7b78: 0x0  nop
    ctx->pc = 0x2f7b78u;
    // NOP
label_2f7b7c:
    // 0x2f7b7c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2f7b7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2f7b80:
    // 0x2f7b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7b84:
    // 0x2f7b84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f7b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f7b88:
    // 0x2f7b88: 0x0  nop
    ctx->pc = 0x2f7b88u;
    // NOP
label_2f7b8c:
    // 0x2f7b8c: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x2f7b8cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
label_2f7b90:
    // 0x2f7b90: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f7b90u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f7b94:
    // 0x2f7b94: 0xc0e404c  jal         func_390130
label_2f7b98:
    if (ctx->pc == 0x2F7B98u) {
        ctx->pc = 0x2F7B9Cu;
        goto label_2f7b9c;
    }
    ctx->pc = 0x2F7B94u;
    SET_GPR_U32(ctx, 31, 0x2F7B9Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F7B94u, 0x2F7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B9Cu;
label_2f7b9c:
    // 0x2f7b9c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f7b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f7ba0:
    // 0x2f7ba0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f7ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f7ba4:
    // 0x2f7ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7ba8:
    // 0x2f7ba8: 0x0  nop
    ctx->pc = 0x2f7ba8u;
    // NOP
label_2f7bac:
    // 0x2f7bac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f7bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f7bb0:
    // 0x2f7bb0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f7bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7bb4:
    // 0x2f7bb4: 0x0  nop
    ctx->pc = 0x2f7bb4u;
    // NOP
label_2f7bb8:
    // 0x2f7bb8: 0x45000375  bc1f        . + 4 + (0x375 << 2)
label_2f7bbc:
    if (ctx->pc == 0x2F7BBCu) {
        ctx->pc = 0x2F7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BB8u;
        // 0x2f7bbc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7BC0u;
        goto label_2f7bc0;
    }
    ctx->pc = 0x2F7BB8u;
    {
        const bool branch_taken_0x2f7bb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BB8u;
        // 0x2f7bbc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bb8) {
            ctx->pc = 0x2F8990u;
            goto label_2f8990;
        }
    }
    ctx->pc = 0x2F7BC0u;
label_2f7bc0:
    // 0x2f7bc0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7bc4:
    // 0x2f7bc4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x2f7bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_2f7bc8:
    // 0x2f7bc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f7bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2f7bcc:
    // 0x2f7bcc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f7bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f7bd0:
    // 0x2f7bd0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f7bd4:
    // 0x2f7bd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7bd8:
    // 0x2f7bd8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2f7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2f7bdc:
    // 0x2f7bdc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2f7bdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2f7be0:
    // 0x2f7be0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f7be4:
    // 0x2f7be4: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x2f7be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_2f7be8:
    // 0x2f7be8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2f7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_2f7bec:
    // 0x2f7bec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f7becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7bf0:
    // 0x2f7bf0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f7bf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7bf4:
    // 0x2f7bf4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7bf8:
    // 0x2f7bf8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2f7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7bfc:
    // 0x2f7bfc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2f7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7c00:
    // 0x2f7c00: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7c04:
    // 0x2f7c04: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x2f7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7c08:
    // 0x2f7c08: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2f7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7c0c:
    // 0x2f7c0c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2f7c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f7c10:
    // 0x2f7c10: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f7c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2f7c14:
    // 0x2f7c14: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2f7c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f7c18:
    // 0x2f7c18: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x2f7c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2f7c1c:
    // 0x2f7c1c: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2f7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f7c20:
    // 0x2f7c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7c24:
    // 0x2f7c24: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2f7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2f7c28:
    // 0x2f7c28: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x2f7c28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2f7c2c:
    // 0x2f7c2c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f7c30:
    // 0x2f7c30: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2f7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_2f7c34:
    // 0x2f7c34: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2f7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_2f7c38:
    // 0x2f7c38: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f7c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7c3c:
    // 0x2f7c3c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2f7c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f7c40:
    // 0x2f7c40: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7c44:
    // 0x2f7c44: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7c48:
    // 0x2f7c48: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2f7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7c4c:
    // 0x2f7c4c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2f7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2f7c50:
    // 0x2f7c50: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2f7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7c54:
    // 0x2f7c54: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2f7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7c58:
    // 0x2f7c58: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x2f7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7c5c:
    // 0x2f7c5c: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2f7c5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f7c60:
    // 0x2f7c60: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2f7c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2f7c64:
    // 0x2f7c64: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2f7c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2f7c68:
    // 0x2f7c68: 0xc0f6a96  jal         func_3DAA58
label_2f7c6c:
    if (ctx->pc == 0x2F7C6Cu) {
        ctx->pc = 0x2F7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C68u;
        // 0x2f7c6c: 0xe7a200bc  swc1        $f2, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7C70u;
        goto label_2f7c70;
    }
    ctx->pc = 0x2F7C68u;
    SET_GPR_U32(ctx, 31, 0x2F7C70u);
    ctx->pc = 0x2F7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C68u;
    // 0x2f7c6c: 0xe7a200bc  swc1        $f2, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F7C68u, 0x2F7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C70u;
label_2f7c70:
    // 0x2f7c70: 0xc0f6a96  jal         func_3DAA58
label_2f7c74:
    if (ctx->pc == 0x2F7C74u) {
        ctx->pc = 0x2F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C70u;
        // 0x2f7c74: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7C78u;
        goto label_2f7c78;
    }
    ctx->pc = 0x2F7C70u;
    SET_GPR_U32(ctx, 31, 0x2F7C78u);
    ctx->pc = 0x2F7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C70u;
    // 0x2f7c74: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F7C70u, 0x2F7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C78u;
label_2f7c78:
    // 0x2f7c78: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f7c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f7c7c:
    // 0x2f7c7c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2f7c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2f7c80:
    // 0x2f7c80: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f7c80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f7c84:
    // 0x2f7c84: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2f7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f7c88:
    // 0x2f7c88: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f7c8c:
    // 0x2f7c8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2f7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2f7c90:
    // 0x2f7c90: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f7c94:
    // 0x2f7c94: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f7c94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7c98:
    // 0x2f7c98: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f7c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7c9c:
    // 0x2f7c9c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7c9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7ca0:
    // 0x2f7ca0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f7ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7ca4:
    // 0x2f7ca4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f7ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7ca8:
    // 0x2f7ca8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7cac:
    // 0x2f7cac: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f7cb0:
    // 0x2f7cb0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f7cb0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f7cb4:
    // 0x2f7cb4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f7cb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f7cb8:
    // 0x2f7cb8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f7cb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f7cbc:
    // 0x2f7cbc: 0x0  nop
    ctx->pc = 0x2f7cbcu;
    // NOP
label_2f7cc0:
    // 0x2f7cc0: 0x0  nop
    ctx->pc = 0x2f7cc0u;
    // NOP
label_2f7cc4:
    // 0x2f7cc4: 0x46010304  c1          0x10304
    ctx->pc = 0x2f7cc4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f7cc8:
    // 0x2f7cc8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2f7cc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ccc:
    // 0x2f7ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f7cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7cd0:
    // 0x2f7cd0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2f7cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_2f7cd4:
    // 0x2f7cd4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f7cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7cd8:
    // 0x2f7cd8: 0x0  nop
    ctx->pc = 0x2f7cd8u;
    // NOP
label_2f7cdc:
    // 0x2f7cdc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2f7ce0:
    if (ctx->pc == 0x2F7CE0u) {
        ctx->pc = 0x2F7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CDCu;
        // 0x2f7ce0: 0xe7ac0130  swc1        $f12, 0x130($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7CE4u;
        goto label_2f7ce4;
    }
    ctx->pc = 0x2F7CDCu;
    {
        const bool branch_taken_0x2f7cdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CDCu;
        // 0x2f7ce0: 0xe7ac0130  swc1        $f12, 0x130($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cdc) {
            ctx->pc = 0x2F7D04u;
            goto label_2f7d04;
        }
    }
    ctx->pc = 0x2F7CE4u;
label_2f7ce4:
    // 0x2f7ce4: 0x0  nop
    ctx->pc = 0x2f7ce4u;
    // NOP
label_2f7ce8:
    // 0x2f7ce8: 0x0  nop
    ctx->pc = 0x2f7ce8u;
    // NOP
label_2f7cec:
    // 0x2f7cec: 0x460ca803  div.s       $f0, $f21, $f12
    ctx->pc = 0x2f7cecu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_2f7cf0:
    // 0x2f7cf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f7cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f7cf4:
    // 0x2f7cf4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f7cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f7cf8:
    // 0x2f7cf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f7cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f7cfc:
    // 0x2f7cfc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f7cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7d00:
    // 0x2f7d00: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7d04:
    // 0x2f7d04: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x2f7d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2f7d08:
    // 0x2f7d08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f7d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d0c:
    // 0x2f7d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d10:
    // 0x2f7d10: 0xc076e46  jal         func_1DB918
label_2f7d14:
    if (ctx->pc == 0x2F7D14u) {
        ctx->pc = 0x2F7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D10u;
        // 0x2f7d14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D18u;
        goto label_2f7d18;
    }
    ctx->pc = 0x2F7D10u;
    SET_GPR_U32(ctx, 31, 0x2F7D18u);
    ctx->pc = 0x2F7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D10u;
    // 0x2f7d14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F7D10u, 0x2F7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D18u;
label_2f7d18:
    // 0x2f7d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d1c:
    // 0x2f7d1c: 0xc076e46  jal         func_1DB918
label_2f7d20:
    if (ctx->pc == 0x2F7D20u) {
        ctx->pc = 0x2F7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D1Cu;
        // 0x2f7d20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D24u;
        goto label_2f7d24;
    }
    ctx->pc = 0x2F7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F7D24u);
    ctx->pc = 0x2F7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D1Cu;
    // 0x2f7d20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F7D1Cu, 0x2F7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D24u;
label_2f7d24:
    // 0x2f7d24: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f7d28:
    // 0x2f7d28: 0xc07788a  jal         func_1DE228
label_2f7d2c:
    if (ctx->pc == 0x2F7D2Cu) {
        ctx->pc = 0x2F7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D28u;
        // 0x2f7d2c: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D30u;
        goto label_2f7d30;
    }
    ctx->pc = 0x2F7D28u;
    SET_GPR_U32(ctx, 31, 0x2F7D30u);
    ctx->pc = 0x2F7D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D28u;
    // 0x2f7d2c: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2F7D28u, 0x2F7D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D30u;
label_2f7d30:
    // 0x2f7d30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f7d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d34:
    // 0x2f7d34: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2f7d38:
    if (ctx->pc == 0x2F7D38u) {
        ctx->pc = 0x2F7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D34u;
        // 0x2f7d38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D3Cu;
        goto label_2f7d3c;
    }
    ctx->pc = 0x2F7D34u;
    {
        const bool branch_taken_0x2f7d34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D34u;
        // 0x2f7d38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d34) {
            ctx->pc = 0x2F7D44u;
            goto label_2f7d44;
        }
    }
    ctx->pc = 0x2F7D3Cu;
label_2f7d3c:
    // 0x2f7d3c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2f7d40:
    if (ctx->pc == 0x2F7D40u) {
        ctx->pc = 0x2F7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D3Cu;
        // 0x2f7d40: 0x27b00141  addiu       $s0, $sp, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D44u;
        goto label_2f7d44;
    }
    ctx->pc = 0x2F7D3Cu;
    {
        const bool branch_taken_0x2f7d3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D3Cu;
        // 0x2f7d40: 0x27b00141  addiu       $s0, $sp, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d3c) {
            ctx->pc = 0x2F7D50u;
            goto label_2f7d50;
        }
    }
    ctx->pc = 0x2F7D44u;
label_2f7d44:
    // 0x2f7d44: 0x56c20076  bnel        $s6, $v0, . + 4 + (0x76 << 2)
label_2f7d48:
    if (ctx->pc == 0x2F7D48u) {
        ctx->pc = 0x2F7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D44u;
        // 0x2f7d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D4Cu;
        goto label_2f7d4c;
    }
    ctx->pc = 0x2F7D44u;
    {
        const bool branch_taken_0x2f7d44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7d44) {
            ctx->pc = 0x2F7D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7D44u;
            // 0x2f7d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7F20u;
            goto label_2f7f20;
        }
    }
    ctx->pc = 0x2F7D4Cu;
label_2f7d4c:
    // 0x2f7d4c: 0x27b00141  addiu       $s0, $sp, 0x141
    ctx->pc = 0x2f7d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
label_2f7d50:
    // 0x2f7d50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f7d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d54:
    // 0x2f7d54: 0xc076e46  jal         func_1DB918
label_2f7d58:
    if (ctx->pc == 0x2F7D58u) {
        ctx->pc = 0x2F7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D54u;
        // 0x2f7d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D5Cu;
        goto label_2f7d5c;
    }
    ctx->pc = 0x2F7D54u;
    SET_GPR_U32(ctx, 31, 0x2F7D5Cu);
    ctx->pc = 0x2F7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D54u;
    // 0x2f7d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F7D54u, 0x2F7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D5Cu;
label_2f7d5c:
    // 0x2f7d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7d60:
    // 0x2f7d60: 0xc076e46  jal         func_1DB918
label_2f7d64:
    if (ctx->pc == 0x2F7D64u) {
        ctx->pc = 0x2F7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D60u;
        // 0x2f7d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7D68u;
        goto label_2f7d68;
    }
    ctx->pc = 0x2F7D60u;
    SET_GPR_U32(ctx, 31, 0x2F7D68u);
    ctx->pc = 0x2F7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D60u;
    // 0x2f7d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F7D60u, 0x2F7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D68u;
label_2f7d68:
    // 0x2f7d68: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7d6c:
    // 0x2f7d6c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2f7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f7d70:
    // 0x2f7d70: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2f7d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2f7d74:
    // 0x2f7d74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f7d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f7d78:
    // 0x2f7d78: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f7d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f7d7c:
    // 0x2f7d7c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2f7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2f7d80:
    // 0x2f7d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7d84:
    // 0x2f7d84: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2f7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2f7d88:
    // 0x2f7d88: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2f7d88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2f7d8c:
    // 0x2f7d8c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f7d90:
    // 0x2f7d90: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f7d94:
    // 0x2f7d94: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x2f7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_2f7d98:
    // 0x2f7d98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f7d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7d9c:
    // 0x2f7d9c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f7d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7da0:
    // 0x2f7da0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7da4:
    // 0x2f7da4: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2f7da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7da8:
    // 0x2f7da8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2f7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7dac:
    // 0x2f7dac: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2f7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7db0:
    // 0x2f7db0: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x2f7db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7db4:
    // 0x2f7db4: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x2f7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7db8:
    // 0x2f7db8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2f7db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f7dbc:
    // 0x2f7dbc: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f7dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f7dc0:
    // 0x2f7dc0: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f7dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f7dc4:
    // 0x2f7dc4: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x2f7dc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2f7dc8:
    // 0x2f7dc8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f7dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f7dcc:
    // 0x2f7dcc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f7dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7dd0:
    // 0x2f7dd0: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2f7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f7dd4:
    // 0x2f7dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7dd8:
    // 0x2f7dd8: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x2f7dd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_2f7ddc:
    // 0x2f7ddc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f7ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f7de0:
    // 0x2f7de0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2f7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2f7de4:
    // 0x2f7de4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2f7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_2f7de8:
    // 0x2f7de8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2f7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_2f7dec:
    // 0x2f7dec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f7decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7df0:
    // 0x2f7df0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2f7df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f7df4:
    // 0x2f7df4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7df8:
    // 0x2f7df8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7dfc:
    // 0x2f7dfc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7e00:
    // 0x2f7e00: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7e04:
    // 0x2f7e04: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7e08:
    // 0x2f7e08: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7e0c:
    // 0x2f7e0c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2f7e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f7e10:
    // 0x2f7e10: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2f7e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f7e14:
    // 0x2f7e14: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x2f7e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f7e18:
    // 0x2f7e18: 0xe7a3015c  swc1        $f3, 0x15C($sp)
    ctx->pc = 0x2f7e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2f7e1c:
    // 0x2f7e1c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f7e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7e20:
    // 0x2f7e20: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7e24:
    // 0x2f7e24: 0xc0f6a96  jal         func_3DAA58
label_2f7e28:
    if (ctx->pc == 0x2F7E28u) {
        ctx->pc = 0x2F7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E24u;
        // 0x2f7e28: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7E2Cu;
        goto label_2f7e2c;
    }
    ctx->pc = 0x2F7E24u;
    SET_GPR_U32(ctx, 31, 0x2F7E2Cu);
    ctx->pc = 0x2F7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E24u;
    // 0x2f7e28: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F7E24u, 0x2F7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E2Cu;
label_2f7e2c:
    // 0x2f7e2c: 0xc0f6a96  jal         func_3DAA58
label_2f7e30:
    if (ctx->pc == 0x2F7E30u) {
        ctx->pc = 0x2F7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E2Cu;
        // 0x2f7e30: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7E34u;
        goto label_2f7e34;
    }
    ctx->pc = 0x2F7E2Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E34u);
    ctx->pc = 0x2F7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E2Cu;
    // 0x2f7e30: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F7E2Cu, 0x2F7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E34u;
label_2f7e34:
    // 0x2f7e34: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f7e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f7e38:
    // 0x2f7e38: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2f7e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2f7e3c:
    // 0x2f7e3c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f7e3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f7e40:
    // 0x2f7e40: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2f7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2f7e44:
    // 0x2f7e44: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x2f7e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_2f7e48:
    // 0x2f7e48: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2f7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2f7e4c:
    // 0x2f7e4c: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x2f7e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
label_2f7e50:
    // 0x2f7e50: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f7e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7e54:
    // 0x2f7e54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f7e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7e58:
    // 0x2f7e58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f7e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7e5c:
    // 0x2f7e5c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f7e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7e60:
    // 0x2f7e60: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7e64:
    // 0x2f7e64: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7e68:
    // 0x2f7e68: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f7e6c:
    // 0x2f7e6c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f7e6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f7e70:
    // 0x2f7e70: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f7e70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f7e74:
    // 0x2f7e74: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f7e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f7e78:
    // 0x2f7e78: 0x0  nop
    ctx->pc = 0x2f7e78u;
    // NOP
label_2f7e7c:
    // 0x2f7e7c: 0x0  nop
    ctx->pc = 0x2f7e7cu;
    // NOP
label_2f7e80:
    // 0x2f7e80: 0x46010084  c1          0x10084
    ctx->pc = 0x2f7e80u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f7e84:
    // 0x2f7e84: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2f7e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2f7e88:
    // 0x2f7e88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f7e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7e8c:
    // 0x2f7e8c: 0x0  nop
    ctx->pc = 0x2f7e8cu;
    // NOP
label_2f7e90:
    // 0x2f7e90: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f7e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7e94:
    // 0x2f7e94: 0x0  nop
    ctx->pc = 0x2f7e94u;
    // NOP
label_2f7e98:
    // 0x2f7e98: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f7e9c:
    if (ctx->pc == 0x2F7E9Cu) {
        ctx->pc = 0x2F7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E98u;
        // 0x2f7e9c: 0xe7a201b0  swc1        $f2, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7EA0u;
        goto label_2f7ea0;
    }
    ctx->pc = 0x2F7E98u;
    {
        const bool branch_taken_0x2f7e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E98u;
        // 0x2f7e9c: 0xe7a201b0  swc1        $f2, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e98) {
            ctx->pc = 0x2F7EC4u;
            goto label_2f7ec4;
        }
    }
    ctx->pc = 0x2F7EA0u;
label_2f7ea0:
    // 0x2f7ea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7ea4:
    // 0x2f7ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7ea8:
    // 0x2f7ea8: 0x0  nop
    ctx->pc = 0x2f7ea8u;
    // NOP
label_2f7eac:
    // 0x2f7eac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f7eacu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f7eb0:
    // 0x2f7eb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f7eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f7eb4:
    // 0x2f7eb4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f7eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f7eb8:
    // 0x2f7eb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f7eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f7ebc:
    // 0x2f7ebc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f7ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f7ec0:
    // 0x2f7ec0: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2f7ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7ec4:
    // 0x2f7ec4: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x2f7ec4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_2f7ec8:
    // 0x2f7ec8: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2f7ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f7ecc:
    // 0x2f7ecc: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x2f7eccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f7ed0:
    // 0x2f7ed0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f7ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f7ed4:
    // 0x2f7ed4: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f7ed8:
    // 0x2f7ed8: 0xa3a40150  sb          $a0, 0x150($sp)
    ctx->pc = 0x2f7ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 4));
label_2f7edc:
    // 0x2f7edc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f7edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f7ee0:
    // 0x2f7ee0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7ee4:
    // 0x2f7ee4: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2f7ee8:
    // 0x2f7ee8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f7ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7eec:
    // 0x2f7eec: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f7eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f7ef0:
    // 0x2f7ef0: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2f7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7ef4:
    // 0x2f7ef4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2f7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f7ef8:
    // 0x2f7ef8: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2f7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7efc:
    // 0x2f7efc: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x2f7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2f7f00:
    // 0x2f7f00: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2f7f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f7f04:
    // 0x2f7f04: 0xc07788a  jal         func_1DE228
label_2f7f08:
    if (ctx->pc == 0x2F7F08u) {
        ctx->pc = 0x2F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F04u;
        // 0x2f7f08: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F0Cu;
        goto label_2f7f0c;
    }
    ctx->pc = 0x2F7F04u;
    SET_GPR_U32(ctx, 31, 0x2F7F0Cu);
    ctx->pc = 0x2F7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F04u;
    // 0x2f7f08: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2F7F04u, 0x2F7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F0Cu;
label_2f7f0c:
    // 0x2f7f0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f7f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f10:
    // 0x2f7f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f14:
    // 0x2f7f14: 0xc076e38  jal         func_1DB8E0
label_2f7f18:
    if (ctx->pc == 0x2F7F18u) {
        ctx->pc = 0x2F7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F14u;
        // 0x2f7f18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F1Cu;
        goto label_2f7f1c;
    }
    ctx->pc = 0x2F7F14u;
    SET_GPR_U32(ctx, 31, 0x2F7F1Cu);
    ctx->pc = 0x2F7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F14u;
    // 0x2f7f18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F7F14u, 0x2F7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F1Cu;
label_2f7f1c:
    // 0x2f7f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f20:
    // 0x2f7f20: 0xc076e38  jal         func_1DB8E0
label_2f7f24:
    if (ctx->pc == 0x2F7F24u) {
        ctx->pc = 0x2F7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F20u;
        // 0x2f7f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F28u;
        goto label_2f7f28;
    }
    ctx->pc = 0x2F7F20u;
    SET_GPR_U32(ctx, 31, 0x2F7F28u);
    ctx->pc = 0x2F7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F20u;
    // 0x2f7f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F7F20u, 0x2F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F28u;
label_2f7f28:
    // 0x2f7f28: 0x1620029a  bnez        $s1, . + 4 + (0x29A << 2)
label_2f7f2c:
    if (ctx->pc == 0x2F7F2Cu) {
        ctx->pc = 0x2F7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F28u;
        // 0x2f7f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F30u;
        goto label_2f7f30;
    }
    ctx->pc = 0x2F7F28u;
    {
        const bool branch_taken_0x2f7f28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F28u;
        // 0x2f7f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f28) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F7F30u;
label_2f7f30:
    // 0x2f7f30: 0x8e480104  lw          $t0, 0x104($s2)
    ctx->pc = 0x2f7f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f7f34:
    // 0x2f7f34: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f7f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f7f38:
    // 0x2f7f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7f3c:
    // 0x2f7f3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f7f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f7f40:
    // 0x2f7f40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2f7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2f7f44:
    // 0x2f7f44: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2f7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f48:
    // 0x2f7f48: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2f7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f7f4c:
    // 0x2f7f4c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2f7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f7f50:
    // 0x2f7f50: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x2f7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f7f54:
    // 0x2f7f54: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2f7f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f7f58:
    // 0x2f7f58: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x2f7f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f7f5c:
    // 0x2f7f5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f60:
    // 0x2f7f60: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2f7f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f7f64:
    // 0x2f7f64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f7f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f68:
    // 0x2f7f68: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x2f7f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f7f6c:
    // 0x2f7f6c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f70:
    // 0x2f7f70: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2f7f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2f7f74:
    // 0x2f7f74: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2f7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f78:
    // 0x2f7f78: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x2f7f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2f7f7c:
    // 0x2f7f7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2f7f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f80:
    // 0x2f7f80: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2f7f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2f7f84:
    // 0x2f7f84: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2f7f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f88:
    // 0x2f7f88: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x2f7f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2f7f8c:
    // 0x2f7f8c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f90:
    // 0x2f7f90: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2f7f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_2f7f94:
    // 0x2f7f94: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2f7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f98:
    // 0x2f7f98: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x2f7f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2f7f9c:
    // 0x2f7f9c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2f7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7fa0:
    // 0x2f7fa0: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x2f7fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_2f7fa4:
    // 0x2f7fa4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f7fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7fa8:
    // 0x2f7fa8: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x2f7fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2f7fac:
    // 0x2f7fac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f7facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7fb0:
    // 0x2f7fb0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2f7fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_2f7fb4:
    // 0x2f7fb4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7fb8:
    // 0x2f7fb8: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x2f7fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2f7fbc:
    // 0x2f7fbc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2f7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7fc0:
    // 0x2f7fc0: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2f7fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_2f7fc4:
    // 0x2f7fc4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2f7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7fc8:
    // 0x2f7fc8: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x2f7fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2f7fcc:
    // 0x2f7fcc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2f7fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7fd0:
    // 0x2f7fd0: 0x16c7001f  bne         $s6, $a3, . + 4 + (0x1F << 2)
label_2f7fd4:
    if (ctx->pc == 0x2F7FD4u) {
        ctx->pc = 0x2F7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FD0u;
        // 0x2f7fd4: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FD8u;
        goto label_2f7fd8;
    }
    ctx->pc = 0x2F7FD0u;
    {
        const bool branch_taken_0x2f7fd0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x2F7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FD0u;
        // 0x2f7fd4: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fd0) {
            ctx->pc = 0x2F8050u;
            goto label_2f8050;
        }
    }
    ctx->pc = 0x2F7FD8u;
label_2f7fd8:
    // 0x2f7fd8: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f7fdc:
    // 0x2f7fdc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2f7fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f7fe0:
    // 0x2f7fe0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2f7fe4:
    // 0x2f7fe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7fe8:
    // 0x2f7fe8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f7fec:
    // 0x2f7fec: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f7ff0:
    // 0x2f7ff0: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x2f7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7ff4:
    // 0x2f7ff4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2f7ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7ff8:
    // 0x2f7ff8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7ffc:
    // 0x2f7ffc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8000:
    // 0x2f8000: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2f8000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f8004:
    // 0x2f8004: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2f8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8008:
    // 0x2f8008: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2f8008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f800c:
    // 0x2f800c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f800cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8010:
    // 0x2f8010: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f8010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8014:
    // 0x2f8014: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2f8014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8018:
    // 0x2f8018: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f801c:
    // 0x2f801c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8020:
    // 0x2f8020: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8024:
    // 0x2f8024: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8028:
    // 0x2f8028: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f802c:
    // 0x2f802c: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8030:
    // 0x2f8030: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2f8030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f8034:
    // 0x2f8034: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f8034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f8038:
    // 0x2f8038: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f8038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f803c:
    // 0x2f803c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x2f803cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2f8040:
    // 0x2f8040: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f8040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f8044:
    // 0x2f8044: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x2f8044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8048:
    // 0x2f8048: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2f804c:
    if (ctx->pc == 0x2F804Cu) {
        ctx->pc = 0x2F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8048u;
        // 0x2f804c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8050u;
        goto label_2f8050;
    }
    ctx->pc = 0x2F8048u;
    {
        const bool branch_taken_0x2f8048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8048u;
        // 0x2f804c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8048) {
            ctx->pc = 0x2F80BCu;
            goto label_2f80bc;
        }
    }
    ctx->pc = 0x2F8050u;
label_2f8050:
    // 0x2f8050: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2f8050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2f8054:
    // 0x2f8054: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2f8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f8058:
    // 0x2f8058: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f805c:
    // 0x2f805c: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x2f805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8060:
    // 0x2f8060: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8064:
    // 0x2f8064: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f8068:
    // 0x2f8068: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f806c:
    // 0x2f806c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8070:
    // 0x2f8070: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2f8070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f8074:
    // 0x2f8074: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2f8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8078:
    // 0x2f8078: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2f8078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f807c:
    // 0x2f807c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f807cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8080:
    // 0x2f8080: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8084:
    // 0x2f8084: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f8084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8088:
    // 0x2f8088: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f808c:
    // 0x2f808c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8090:
    // 0x2f8090: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f8090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8094:
    // 0x2f8094: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8098:
    // 0x2f8098: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f809c:
    // 0x2f809c: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f80a0:
    // 0x2f80a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2f80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f80a4:
    // 0x2f80a4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f80a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f80a8:
    // 0x2f80a8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f80a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f80ac:
    // 0x2f80ac: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x2f80acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2f80b0:
    // 0x2f80b0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f80b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f80b4:
    // 0x2f80b4: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x2f80b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f80b8:
    // 0x2f80b8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2f80b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f80bc:
    // 0x2f80bc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f80bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f80c0:
    // 0x2f80c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f80c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f80c4:
    // 0x2f80c4: 0x27b10180  addiu       $s1, $sp, 0x180
    ctx->pc = 0x2f80c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2f80c8:
    // 0x2f80c8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2f80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2f80cc:
    // 0x2f80cc: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x2f80ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_2f80d0:
    // 0x2f80d0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f80d4:
    // 0x2f80d4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x2f80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_2f80d8:
    // 0x2f80d8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f80d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f80dc:
    // 0x2f80dc: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x2f80dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f80e0:
    // 0x2f80e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f80e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f80e4:
    // 0x2f80e4: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f80e8:
    // 0x2f80e8: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x2f80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f80ec:
    // 0x2f80ec: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2f80ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f80f0:
    // 0x2f80f0: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2f80f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f80f4:
    // 0x2f80f4: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2f80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f80f8:
    // 0x2f80f8: 0xc7a2019c  lwc1        $f2, 0x19C($sp)
    ctx->pc = 0x2f80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f80fc:
    // 0x2f80fc: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2f80fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f8100:
    // 0x2f8100: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2f8100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f8104:
    // 0x2f8104: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2f8104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f8108:
    // 0x2f8108: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x2f8108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2f810c:
    // 0x2f810c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f810cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f8110:
    // 0x2f8110: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8114:
    // 0x2f8114: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2f8114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2f8118:
    // 0x2f8118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f811c:
    // 0x2f811c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2f811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2f8120:
    // 0x2f8120: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x2f8120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_2f8124:
    // 0x2f8124: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f8124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f8128:
    // 0x2f8128: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x2f8128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_2f812c:
    // 0x2f812c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f812cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8130:
    // 0x2f8130: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x2f8130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f8134:
    // 0x2f8134: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8138:
    // 0x2f8138: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f813c:
    // 0x2f813c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8140:
    // 0x2f8140: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8144:
    // 0x2f8144: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8148:
    // 0x2f8148: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f814c:
    // 0x2f814c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2f814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f8150:
    // 0x2f8150: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f8150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f8154:
    // 0x2f8154: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f8154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f8158:
    // 0x2f8158: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x2f8158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2f815c:
    // 0x2f815c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f815cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f8160:
    // 0x2f8160: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f8160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8164:
    // 0x2f8164: 0xc0f6a96  jal         func_3DAA58
label_2f8168:
    if (ctx->pc == 0x2F8168u) {
        ctx->pc = 0x2F8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8164u;
        // 0x2f8168: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F816Cu;
        goto label_2f816c;
    }
    ctx->pc = 0x2F8164u;
    SET_GPR_U32(ctx, 31, 0x2F816Cu);
    ctx->pc = 0x2F8168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8164u;
    // 0x2f8168: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8164u, 0x2F816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F816Cu;
label_2f816c:
    // 0x2f816c: 0xc0f6a96  jal         func_3DAA58
label_2f8170:
    if (ctx->pc == 0x2F8170u) {
        ctx->pc = 0x2F8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F816Cu;
        // 0x2f8170: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8174u;
        goto label_2f8174;
    }
    ctx->pc = 0x2F816Cu;
    SET_GPR_U32(ctx, 31, 0x2F8174u);
    ctx->pc = 0x2F8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F816Cu;
    // 0x2f8170: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F816Cu, 0x2F8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8174u;
label_2f8174:
    // 0x2f8174: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f8174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f8178:
    // 0x2f8178: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2f8178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2f817c:
    // 0x2f817c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f817cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f8180:
    // 0x2f8180: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2f8180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2f8184:
    // 0x2f8184: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x2f8184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_2f8188:
    // 0x2f8188: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2f8188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2f818c:
    // 0x2f818c: 0x7fa301e0  sq          $v1, 0x1E0($sp)
    ctx->pc = 0x2f818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
label_2f8190:
    // 0x2f8190: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f8190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8194:
    // 0x2f8194: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2f8194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8198:
    // 0x2f8198: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f819c:
    // 0x2f819c: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x2f819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f81a0:
    // 0x2f81a0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f81a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f81a4:
    // 0x2f81a4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f81a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f81a8:
    // 0x2f81a8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f81ac:
    // 0x2f81ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f81acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f81b0:
    // 0x2f81b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f81b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f81b4:
    // 0x2f81b4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f81b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f81b8:
    // 0x2f81b8: 0x0  nop
    ctx->pc = 0x2f81b8u;
    // NOP
label_2f81bc:
    // 0x2f81bc: 0x0  nop
    ctx->pc = 0x2f81bcu;
    // NOP
label_2f81c0:
    // 0x2f81c0: 0x46010084  c1          0x10084
    ctx->pc = 0x2f81c0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f81c4:
    // 0x2f81c4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2f81c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f81c8:
    // 0x2f81c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f81c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f81cc:
    // 0x2f81cc: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x2f81ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_2f81d0:
    // 0x2f81d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f81d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f81d4:
    // 0x2f81d4: 0x0  nop
    ctx->pc = 0x2f81d4u;
    // NOP
label_2f81d8:
    // 0x2f81d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f81dc:
    if (ctx->pc == 0x2F81DCu) {
        ctx->pc = 0x2F81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81D8u;
        // 0x2f81dc: 0xe7a20210  swc1        $f2, 0x210($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F81E0u;
        goto label_2f81e0;
    }
    ctx->pc = 0x2F81D8u;
    {
        const bool branch_taken_0x2f81d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81D8u;
        // 0x2f81dc: 0xe7a20210  swc1        $f2, 0x210($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81d8) {
            ctx->pc = 0x2F8204u;
            goto label_2f8204;
        }
    }
    ctx->pc = 0x2F81E0u;
label_2f81e0:
    // 0x2f81e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f81e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f81e4:
    // 0x2f81e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f81e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f81e8:
    // 0x2f81e8: 0x0  nop
    ctx->pc = 0x2f81e8u;
    // NOP
label_2f81ec:
    // 0x2f81ec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f81ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f81f0:
    // 0x2f81f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f81f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f81f4:
    // 0x2f81f4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f81f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f81f8:
    // 0x2f81f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f81f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f81fc:
    // 0x2f81fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f81fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8200:
    // 0x2f8200: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x2f8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8204:
    // 0x2f8204: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x2f8204u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_2f8208:
    // 0x2f8208: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2f8208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f820c:
    // 0x2f820c: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x2f820cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f8210:
    // 0x2f8210: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f8214:
    // 0x2f8214: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f8218:
    // 0x2f8218: 0xa3a400c0  sb          $a0, 0xC0($sp)
    ctx->pc = 0x2f8218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 4));
label_2f821c:
    // 0x2f821c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f821cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8220:
    // 0x2f8220: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8224:
    // 0x2f8224: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2f8228:
    // 0x2f8228: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f8228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f822c:
    // 0x2f822c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8230:
    // 0x2f8230: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x2f8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8234:
    // 0x2f8234: 0x27b00141  addiu       $s0, $sp, 0x141
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
label_2f8238:
    // 0x2f8238: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x2f8238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f823c:
    // 0x2f823c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8240:
    // 0x2f8240: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2f8240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f8244:
    // 0x2f8244: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8248:
    // 0x2f8248: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2f8248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_2f824c:
    // 0x2f824c: 0xc076e46  jal         func_1DB918
label_2f8250:
    if (ctx->pc == 0x2F8250u) {
        ctx->pc = 0x2F8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F824Cu;
        // 0x2f8250: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8254u;
        goto label_2f8254;
    }
    ctx->pc = 0x2F824Cu;
    SET_GPR_U32(ctx, 31, 0x2F8254u);
    ctx->pc = 0x2F8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F824Cu;
    // 0x2f8250: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F824Cu, 0x2F8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8254u;
label_2f8254:
    // 0x2f8254: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x2f8254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
label_2f8258:
    // 0x2f8258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f825c:
    // 0x2f825c: 0xc076e46  jal         func_1DB918
label_2f8260:
    if (ctx->pc == 0x2F8260u) {
        ctx->pc = 0x2F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F825Cu;
        // 0x2f8260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8264u;
        goto label_2f8264;
    }
    ctx->pc = 0x2F825Cu;
    SET_GPR_U32(ctx, 31, 0x2F8264u);
    ctx->pc = 0x2F8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F825Cu;
    // 0x2f8260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F825Cu, 0x2F8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8264u;
label_2f8264:
    // 0x2f8264: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2f8264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2f8268:
    // 0x2f8268: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f826c:
    // 0x2f826c: 0x27a90220  addiu       $t1, $sp, 0x220
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2f8270:
    // 0x2f8270: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2f8270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2f8274:
    // 0x2f8274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f8274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8278:
    // 0x2f8278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f827c:
    // 0x2f827c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f8280:
    // 0x2f8280: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f8280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8284:
    // 0x2f8284: 0xc077940  jal         func_1DE500
label_2f8288:
    if (ctx->pc == 0x2F8288u) {
        ctx->pc = 0x2F8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8284u;
        // 0x2f8288: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F828Cu;
        goto label_2f828c;
    }
    ctx->pc = 0x2F8284u;
    SET_GPR_U32(ctx, 31, 0x2F828Cu);
    ctx->pc = 0x2F8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8284u;
    // 0x2f8288: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F8284u, 0x2F828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F828Cu;
label_2f828c:
    // 0x2f828c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f828cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8290:
    // 0x2f8290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8294:
    // 0x2f8294: 0xc076e38  jal         func_1DB8E0
label_2f8298:
    if (ctx->pc == 0x2F8298u) {
        ctx->pc = 0x2F8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8294u;
        // 0x2f8298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F829Cu;
        goto label_2f829c;
    }
    ctx->pc = 0x2F8294u;
    SET_GPR_U32(ctx, 31, 0x2F829Cu);
    ctx->pc = 0x2F8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8294u;
    // 0x2f8298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F8294u, 0x2F829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F829Cu;
label_2f829c:
    // 0x2f829c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f82a0:
    // 0x2f82a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f82a4:
    // 0x2f82a4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2f82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f82a8:
    // 0x2f82a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f82ac:
    // 0x2f82ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2f82acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2f82b0:
    // 0x2f82b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f82b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f82b4:
    // 0x2f82b4: 0xc4420070  lwc1        $f2, 0x70($v0)
    ctx->pc = 0x2f82b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f82b8:
    // 0x2f82b8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f82bc:
    // 0x2f82bc: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x2f82bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f82c0:
    // 0x2f82c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f82c4:
    // 0x2f82c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2f82c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f82c8:
    // 0x2f82c8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2f82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2f82cc:
    // 0x2f82cc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f82d0:
    // 0x2f82d0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2f82d0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_2f82d4:
    // 0x2f82d4: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2f82d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2f82d8:
    // 0x2f82d8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2f82d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f82dc:
    // 0x2f82dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f82e0:
    // 0x2f82e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f82e4:
    if (ctx->pc == 0x2F82E4u) {
        ctx->pc = 0x2F82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E0u;
        // 0x2f82e4: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82E8u;
        goto label_2f82e8;
    }
    ctx->pc = 0x2F82E0u;
    {
        const bool branch_taken_0x2f82e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E0u;
        // 0x2f82e4: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82e0) {
            ctx->pc = 0x2F82ECu;
            goto label_2f82ec;
        }
    }
    ctx->pc = 0x2F82E8u;
label_2f82e8:
    // 0x2f82e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f82e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f82ec:
    // 0x2f82ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2f82f0:
    if (ctx->pc == 0x2F82F0u) {
        ctx->pc = 0x2F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82ECu;
        // 0x2f82f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82F4u;
        goto label_2f82f4;
    }
    ctx->pc = 0x2F82ECu;
    {
        const bool branch_taken_0x2f82ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82ECu;
        // 0x2f82f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82ec) {
            ctx->pc = 0x2F82FCu;
            goto label_2f82fc;
        }
    }
    ctx->pc = 0x2F82F4u;
label_2f82f4:
    // 0x2f82f4: 0x12c201a7  beq         $s6, $v0, . + 4 + (0x1A7 << 2)
label_2f82f8:
    if (ctx->pc == 0x2F82F8u) {
        ctx->pc = 0x2F82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F4u;
        // 0x2f82f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82FCu;
        goto label_2f82fc;
    }
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F4u;
        // 0x2f82f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F82FCu;
label_2f82fc:
    // 0x2f82fc: 0x12200075  beqz        $s1, . + 4 + (0x75 << 2)
label_2f8300:
    if (ctx->pc == 0x2F8300u) {
        ctx->pc = 0x2F8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82FCu;
        // 0x2f8300: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8304u;
        goto label_2f8304;
    }
    ctx->pc = 0x2F82FCu;
    {
        const bool branch_taken_0x2f82fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82FCu;
        // 0x2f8300: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82fc) {
            ctx->pc = 0x2F84D4u;
            goto label_2f84d4;
        }
    }
    ctx->pc = 0x2F8304u;
label_2f8304:
    // 0x2f8304: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2f8304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2f8308:
    // 0x2f8308: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f8308u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f830c:
    // 0x2f830c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f830cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8310:
    // 0x2f8310: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8314:
    // 0x2f8314: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f8314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8318:
    // 0x2f8318: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f8318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f831c:
    // 0x2f831c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8320:
    // 0x2f8320: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8324:
    // 0x2f8324: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8328:
    // 0x2f8328: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f832c:
    // 0x2f832c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f832cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8330:
    // 0x2f8330: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f8334:
    // 0x2f8334: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f8334u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8338:
    // 0x2f8338: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f8338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f833c:
    // 0x2f833c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8340:
    // 0x2f8340: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f8340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f8344:
    // 0x2f8344: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8348:
    // 0x2f8348: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f8348u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f834c:
    // 0x2f834c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f834cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8350:
    // 0x2f8350: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f8350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8354:
    // 0x2f8354: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f8354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8358:
    // 0x2f8358: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f835c:
    // 0x2f835c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8360:
    // 0x2f8360: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f8360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8364:
    // 0x2f8364: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f8368:
    // 0x2f8368: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f8368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f836c:
    // 0x2f836c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f836cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f8370:
    // 0x2f8370: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f8370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8374:
    // 0x2f8374: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f8374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f8378:
    // 0x2f8378: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f837c:
    // 0x2f837c: 0xc0f6a96  jal         func_3DAA58
label_2f8380:
    if (ctx->pc == 0x2F8380u) {
        ctx->pc = 0x2F8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F837Cu;
        // 0x2f8380: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8384u;
        goto label_2f8384;
    }
    ctx->pc = 0x2F837Cu;
    SET_GPR_U32(ctx, 31, 0x2F8384u);
    ctx->pc = 0x2F8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F837Cu;
    // 0x2f8380: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F837Cu, 0x2F8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8384u;
label_2f8384:
    // 0x2f8384: 0xc0f6a96  jal         func_3DAA58
label_2f8388:
    if (ctx->pc == 0x2F8388u) {
        ctx->pc = 0x2F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8384u;
        // 0x2f8388: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F838Cu;
        goto label_2f838c;
    }
    ctx->pc = 0x2F8384u;
    SET_GPR_U32(ctx, 31, 0x2F838Cu);
    ctx->pc = 0x2F8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8384u;
    // 0x2f8388: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8384u, 0x2F838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F838Cu;
label_2f838c:
    // 0x2f838c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f838cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f8390:
    // 0x2f8390: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2f8390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2f8394:
    // 0x2f8394: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f8394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f8398:
    // 0x2f8398: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2f8398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2f839c:
    // 0x2f839c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_2f83a0:
    // 0x2f83a0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2f83a4:
    // 0x2f83a4: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f83a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
label_2f83a8:
    // 0x2f83a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f83a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f83ac:
    // 0x2f83ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f83acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f83b0:
    // 0x2f83b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f83b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f83b4:
    // 0x2f83b4: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x2f83b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f83b8:
    // 0x2f83b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f83bc:
    // 0x2f83bc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f83bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f83c0:
    // 0x2f83c0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f83c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f83c4:
    // 0x2f83c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f83c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f83c8:
    // 0x2f83c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f83c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f83cc:
    // 0x2f83cc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f83ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f83d0:
    // 0x2f83d0: 0x0  nop
    ctx->pc = 0x2f83d0u;
    // NOP
label_2f83d4:
    // 0x2f83d4: 0x0  nop
    ctx->pc = 0x2f83d4u;
    // NOP
label_2f83d8:
    // 0x2f83d8: 0x46010084  c1          0x10084
    ctx->pc = 0x2f83d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f83dc:
    // 0x2f83dc: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2f83dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2f83e0:
    // 0x2f83e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f83e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f83e4:
    // 0x2f83e4: 0x0  nop
    ctx->pc = 0x2f83e4u;
    // NOP
label_2f83e8:
    // 0x2f83e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f83e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f83ec:
    // 0x2f83ec: 0x0  nop
    ctx->pc = 0x2f83ecu;
    // NOP
label_2f83f0:
    // 0x2f83f0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f83f4:
    if (ctx->pc == 0x2F83F4u) {
        ctx->pc = 0x2F83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83F0u;
        // 0x2f83f4: 0xe7a201e0  swc1        $f2, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83F8u;
        goto label_2f83f8;
    }
    ctx->pc = 0x2F83F0u;
    {
        const bool branch_taken_0x2f83f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83F0u;
        // 0x2f83f4: 0xe7a201e0  swc1        $f2, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83f0) {
            ctx->pc = 0x2F841Cu;
            goto label_2f841c;
        }
    }
    ctx->pc = 0x2F83F8u;
label_2f83f8:
    // 0x2f83f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f83f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f83fc:
    // 0x2f83fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f83fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8400:
    // 0x2f8400: 0x0  nop
    ctx->pc = 0x2f8400u;
    // NOP
label_2f8404:
    // 0x2f8404: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f8404u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f8408:
    // 0x2f8408: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f8408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f840c:
    // 0x2f840c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f840cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8410:
    // 0x2f8410: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f8410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f8414:
    // 0x2f8414: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f8414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8418:
    // 0x2f8418: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x2f8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f841c:
    // 0x2f841c: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x2f841cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_2f8420:
    // 0x2f8420: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f8420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f8424:
    // 0x2f8424: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f8424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f8428:
    // 0x2f8428: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f842c:
    // 0x2f842c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f8430:
    // 0x2f8430: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x2f8430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
label_2f8434:
    // 0x2f8434: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f8434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8438:
    // 0x2f8438: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f843c:
    // 0x2f843c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x2f843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2f8440:
    // 0x2f8440: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8444:
    // 0x2f8444: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f8444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8448:
    // 0x2f8448: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2f8448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f844c:
    // 0x2f844c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8450:
    // 0x2f8450: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2f8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8454:
    // 0x2f8454: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8458:
    // 0x2f8458: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2f8458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f845c:
    // 0x2f845c: 0xc076e46  jal         func_1DB918
label_2f8460:
    if (ctx->pc == 0x2F8460u) {
        ctx->pc = 0x2F8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F845Cu;
        // 0x2f8460: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8464u;
        goto label_2f8464;
    }
    ctx->pc = 0x2F845Cu;
    SET_GPR_U32(ctx, 31, 0x2F8464u);
    ctx->pc = 0x2F8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F845Cu;
    // 0x2f8460: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F845Cu, 0x2F8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8464u;
label_2f8464:
    // 0x2f8464: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f8464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8468:
    // 0x2f8468: 0xc076e46  jal         func_1DB918
label_2f846c:
    if (ctx->pc == 0x2F846Cu) {
        ctx->pc = 0x2F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8468u;
        // 0x2f846c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8470u;
        goto label_2f8470;
    }
    ctx->pc = 0x2F8468u;
    SET_GPR_U32(ctx, 31, 0x2F8470u);
    ctx->pc = 0x2F846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8468u;
    // 0x2f846c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8468u, 0x2F8470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8470u;
label_2f8470:
    // 0x2f8470: 0xc07783e  jal         func_1DE0F8
label_2f8474:
    if (ctx->pc == 0x2F8474u) {
        ctx->pc = 0x2F8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8470u;
        // 0x2f8474: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8478u;
        goto label_2f8478;
    }
    ctx->pc = 0x2F8470u;
    SET_GPR_U32(ctx, 31, 0x2F8478u);
    ctx->pc = 0x2F8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8470u;
    // 0x2f8474: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x2F8470u, 0x2F8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8478u;
label_2f8478:
    // 0x2f8478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f8478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f847c:
    // 0x2f847c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8480:
    // 0x2f8480: 0xc076e38  jal         func_1DB8E0
label_2f8484:
    if (ctx->pc == 0x2F8484u) {
        ctx->pc = 0x2F8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8480u;
        // 0x2f8484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8488u;
        goto label_2f8488;
    }
    ctx->pc = 0x2F8480u;
    SET_GPR_U32(ctx, 31, 0x2F8488u);
    ctx->pc = 0x2F8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8480u;
    // 0x2f8484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F8480u, 0x2F8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8488u;
label_2f8488:
    // 0x2f8488: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
label_2f848c:
    if (ctx->pc == 0x2F848Cu) {
        ctx->pc = 0x2F848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8488u;
        // 0x2f848c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8490u;
        goto label_2f8490;
    }
    ctx->pc = 0x2F8488u;
    {
        const bool branch_taken_0x2f8488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8488u;
        // 0x2f848c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8488) {
            ctx->pc = 0x2F84D8u;
            goto label_2f84d8;
        }
    }
    ctx->pc = 0x2F8490u;
label_2f8490:
    // 0x2f8490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8494:
    // 0x2f8494: 0xc076e46  jal         func_1DB918
label_2f8498:
    if (ctx->pc == 0x2F8498u) {
        ctx->pc = 0x2F8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8494u;
        // 0x2f8498: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F849Cu;
        goto label_2f849c;
    }
    ctx->pc = 0x2F8494u;
    SET_GPR_U32(ctx, 31, 0x2F849Cu);
    ctx->pc = 0x2F8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8494u;
    // 0x2f8498: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8494u, 0x2F849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F849Cu;
label_2f849c:
    // 0x2f849c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f84a0:
    // 0x2f84a0: 0xc076e46  jal         func_1DB918
label_2f84a4:
    if (ctx->pc == 0x2F84A4u) {
        ctx->pc = 0x2F84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84A0u;
        // 0x2f84a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84A8u;
        goto label_2f84a8;
    }
    ctx->pc = 0x2F84A0u;
    SET_GPR_U32(ctx, 31, 0x2F84A8u);
    ctx->pc = 0x2F84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84A0u;
    // 0x2f84a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F84A0u, 0x2F84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84A8u;
label_2f84a8:
    // 0x2f84a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f84ac:
    // 0x2f84ac: 0xc08e0fa  jal         func_2383E8
label_2f84b0:
    if (ctx->pc == 0x2F84B0u) {
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ACu;
        // 0x2f84b0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84B4u;
        goto label_2f84b4;
    }
    ctx->pc = 0x2F84ACu;
    SET_GPR_U32(ctx, 31, 0x2F84B4u);
    ctx->pc = 0x2F84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84ACu;
    // 0x2f84b0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2F84ACu, 0x2F84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84B4u;
label_2f84b4:
    // 0x2f84b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f84b8:
    if (ctx->pc == 0x2F84B8u) {
        ctx->pc = 0x2F84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84B4u;
        // 0x2f84b8: 0x8fa20224  lw          $v0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84BCu;
        goto label_2f84bc;
    }
    ctx->pc = 0x2F84B4u;
    {
        const bool branch_taken_0x2f84b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84B4u;
        // 0x2f84b8: 0x8fa20224  lw          $v0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84b4) {
            ctx->pc = 0x2F84C8u;
            goto label_2f84c8;
        }
    }
    ctx->pc = 0x2F84BCu;
label_2f84bc:
    // 0x2f84bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f84c0:
    // 0x2f84c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2f84c4:
    // 0x2f84c4: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x2f84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
label_2f84c8:
    // 0x2f84c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f84c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f84cc:
    // 0x2f84cc: 0xc076e38  jal         func_1DB8E0
label_2f84d0:
    if (ctx->pc == 0x2F84D0u) {
        ctx->pc = 0x2F84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84CCu;
        // 0x2f84d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84D4u;
        goto label_2f84d4;
    }
    ctx->pc = 0x2F84CCu;
    SET_GPR_U32(ctx, 31, 0x2F84D4u);
    ctx->pc = 0x2F84D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84CCu;
    // 0x2f84d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F84CCu, 0x2F84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84D4u;
label_2f84d4:
    // 0x2f84d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f84d8:
    // 0x2f84d8: 0x16c2012e  bne         $s6, $v0, . + 4 + (0x12E << 2)
label_2f84dc:
    if (ctx->pc == 0x2F84DCu) {
        ctx->pc = 0x2F84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84D8u;
        // 0x2f84dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84E0u;
        goto label_2f84e0;
    }
    ctx->pc = 0x2F84D8u;
    {
        const bool branch_taken_0x2f84d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84D8u;
        // 0x2f84dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84d8) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F84E0u;
label_2f84e0:
    // 0x2f84e0: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_2f84e4:
    // 0x2f84e4: 0x14400126  bnez        $v0, . + 4 + (0x126 << 2)
label_2f84e8:
    if (ctx->pc == 0x2F84E8u) {
        ctx->pc = 0x2F84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84E4u;
        // 0x2f84e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84ECu;
        goto label_2f84ec;
    }
    ctx->pc = 0x2F84E4u;
    {
        const bool branch_taken_0x2f84e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84E4u;
        // 0x2f84e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84e4) {
            ctx->pc = 0x2F8980u;
            goto label_2f8980;
        }
    }
    ctx->pc = 0x2F84ECu;
label_2f84ec:
    // 0x2f84ec: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f84f0:
    // 0x2f84f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f84f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f84f4:
    // 0x2f84f4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2f84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f84f8:
    // 0x2f84f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f84f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f84fc:
    // 0x2f84fc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2f84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8500:
    // 0x2f8500: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2f8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f8504:
    // 0x2f8504: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f8504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8508:
    // 0x2f8508: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x2f8508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f850c:
    // 0x2f850c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2f850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f8510:
    // 0x2f8510: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8514:
    // 0x2f8514: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x2f8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8518:
    // 0x2f8518: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f851c:
    // 0x2f851c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f851cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8520:
    // 0x2f8520: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x2f8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8524:
    // 0x2f8524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8528:
    // 0x2f8528: 0xc076e46  jal         func_1DB918
label_2f852c:
    if (ctx->pc == 0x2F852Cu) {
        ctx->pc = 0x2F852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8528u;
        // 0x2f852c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8530u;
        goto label_2f8530;
    }
    ctx->pc = 0x2F8528u;
    SET_GPR_U32(ctx, 31, 0x2F8530u);
    ctx->pc = 0x2F852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8528u;
    // 0x2f852c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8528u, 0x2F8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8530u;
label_2f8530:
    // 0x2f8530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8534:
    // 0x2f8534: 0xc076e46  jal         func_1DB918
label_2f8538:
    if (ctx->pc == 0x2F8538u) {
        ctx->pc = 0x2F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8534u;
        // 0x2f8538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F853Cu;
        goto label_2f853c;
    }
    ctx->pc = 0x2F8534u;
    SET_GPR_U32(ctx, 31, 0x2F853Cu);
    ctx->pc = 0x2F8538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8534u;
    // 0x2f8538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8534u, 0x2F853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F853Cu;
label_2f853c:
    // 0x2f853c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x2f853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2f8540:
    // 0x2f8540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f8540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8544:
    // 0x2f8544: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2f8544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8548:
    // 0x2f8548: 0xc08e0fa  jal         func_2383E8
label_2f854c:
    if (ctx->pc == 0x2F854Cu) {
        ctx->pc = 0x2F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8548u;
        // 0x2f854c: 0xafa3022c  sw          $v1, 0x22C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8550u;
        goto label_2f8550;
    }
    ctx->pc = 0x2F8548u;
    SET_GPR_U32(ctx, 31, 0x2F8550u);
    ctx->pc = 0x2F854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8548u;
    // 0x2f854c: 0xafa3022c  sw          $v1, 0x22C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2F8548u, 0x2F8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8550u;
label_2f8550:
    // 0x2f8550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8554:
    // 0x2f8554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8558:
    // 0x2f8558: 0xc076e38  jal         func_1DB8E0
label_2f855c:
    if (ctx->pc == 0x2F855Cu) {
        ctx->pc = 0x2F855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8558u;
        // 0x2f855c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8560u;
        goto label_2f8560;
    }
    ctx->pc = 0x2F8558u;
    SET_GPR_U32(ctx, 31, 0x2F8560u);
    ctx->pc = 0x2F855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8558u;
    // 0x2f855c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F8558u, 0x2F8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8560u;
label_2f8560:
    // 0x2f8560: 0x12000106  beqz        $s0, . + 4 + (0x106 << 2)
label_2f8564:
    if (ctx->pc == 0x2F8564u) {
        ctx->pc = 0x2F8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8560u;
        // 0x2f8564: 0x27a301a0  addiu       $v1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8568u;
        goto label_2f8568;
    }
    ctx->pc = 0x2F8560u;
    {
        const bool branch_taken_0x2f8560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8560u;
        // 0x2f8564: 0x27a301a0  addiu       $v1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8560) {
            ctx->pc = 0x2F897Cu;
            goto label_2f897c;
        }
    }
    ctx->pc = 0x2F8568u;
label_2f8568:
    // 0x2f8568: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2f8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f856c:
    // 0x2f856c: 0xafa30230  sw          $v1, 0x230($sp)
    ctx->pc = 0x2f856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 3));
label_2f8570:
    // 0x2f8570: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2f8570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2f8574:
    // 0x2f8574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8578:
    // 0x2f8578: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f857c:
    // 0x2f857c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f8580:
    // 0x2f8580: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x2f8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8584:
    // 0x2f8584: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8588:
    // 0x2f8588: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f858c:
    // 0x2f858c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2f858cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_2f8590:
    // 0x2f8590: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8594:
    // 0x2f8594: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2f8594u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_2f8598:
    // 0x2f8598: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2f8598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2f859c:
    // 0x2f859c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f859cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f85a0:
    // 0x2f85a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f85a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f85a4:
    // 0x2f85a4: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x2f85a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2f85a8:
    // 0x2f85a8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2f85ac:
    // 0x2f85ac: 0xe7a3019c  swc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f85acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_2f85b0:
    // 0x2f85b0: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x2f85b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_2f85b4:
    // 0x2f85b4: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2f85b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2f85b8:
    // 0x2f85b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f85b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f85bc:
    // 0x2f85bc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2f85bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f85c0:
    // 0x2f85c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f85c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f85c4:
    // 0x2f85c4: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2f85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f85c8:
    // 0x2f85c8: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2f85c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f85cc:
    // 0x2f85cc: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2f85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f85d0:
    // 0x2f85d0: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2f85d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f85d4:
    // 0x2f85d4: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x2f85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f85d8:
    // 0x2f85d8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f85d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f85dc:
    // 0x2f85dc: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f85dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f85e0:
    // 0x2f85e0: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f85e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f85e4:
    // 0x2f85e4: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f85e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f85e8:
    // 0x2f85e8: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f85e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f85ec:
    // 0x2f85ec: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x2f85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f85f0:
    // 0x2f85f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f85f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f85f4:
    // 0x2f85f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f85f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f85f8:
    // 0x2f85f8: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x2f85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_2f85fc:
    // 0x2f85fc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2f85fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2f8600:
    // 0x2f8600: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2f8600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
label_2f8604:
    // 0x2f8604: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2f8604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_2f8608:
    // 0x2f8608: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f8608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f860c:
    // 0x2f860c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2f860cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8610:
    // 0x2f8610: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8614:
    // 0x2f8614: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2f8614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8618:
    // 0x2f8618: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2f8618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f861c:
    // 0x2f861c: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2f861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8620:
    // 0x2f8620: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2f8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8624:
    // 0x2f8624: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x2f8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8628:
    // 0x2f8628: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f862c:
    // 0x2f862c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f862cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8630:
    // 0x2f8630: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f8634:
    // 0x2f8634: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f8634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8638:
    // 0x2f8638: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f8638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f863c:
    // 0x2f863c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8640:
    // 0x2f8640: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2f8640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2f8644:
    // 0x2f8644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8648:
    // 0x2f8648: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2f8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f864c:
    // 0x2f864c: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x2f864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_2f8650:
    // 0x2f8650: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2f8650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2f8654:
    // 0x2f8654: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2f8654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
label_2f8658:
    // 0x2f8658: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2f8658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_2f865c:
    // 0x2f865c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f865cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8660:
    // 0x2f8660: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2f8660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8664:
    // 0x2f8664: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8668:
    // 0x2f8668: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x2f8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f866c:
    // 0x2f866c: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2f866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8670:
    // 0x2f8670: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2f8670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8674:
    // 0x2f8674: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2f8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8678:
    // 0x2f8678: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x2f8678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f867c:
    // 0x2f867c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f8680:
    // 0x2f8680: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f8680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8684:
    // 0x2f8684: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f8688:
    // 0x2f8688: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f8688u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f868c:
    // 0x2f868c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f868cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f8690:
    // 0x2f8690: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f8690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8694:
    // 0x2f8694: 0xc0f6a96  jal         func_3DAA58
label_2f8698:
    if (ctx->pc == 0x2F8698u) {
        ctx->pc = 0x2F8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8694u;
        // 0x2f8698: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F869Cu;
        goto label_2f869c;
    }
    ctx->pc = 0x2F8694u;
    SET_GPR_U32(ctx, 31, 0x2F869Cu);
    ctx->pc = 0x2F8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8694u;
    // 0x2f8698: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8694u, 0x2F869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F869Cu;
label_2f869c:
    // 0x2f869c: 0xc0f6a96  jal         func_3DAA58
label_2f86a0:
    if (ctx->pc == 0x2F86A0u) {
        ctx->pc = 0x2F86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F869Cu;
        // 0x2f86a0: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F86A4u;
        goto label_2f86a4;
    }
    ctx->pc = 0x2F869Cu;
    SET_GPR_U32(ctx, 31, 0x2F86A4u);
    ctx->pc = 0x2F86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F869Cu;
    // 0x2f86a0: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F869Cu, 0x2F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86A4u;
label_2f86a4:
    // 0x2f86a4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f86a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f86a8:
    // 0x2f86a8: 0x27b001c0  addiu       $s0, $sp, 0x1C0
    ctx->pc = 0x2f86a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2f86ac:
    // 0x2f86ac: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f86acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f86b0:
    // 0x2f86b0: 0x27b501b0  addiu       $s5, $sp, 0x1B0
    ctx->pc = 0x2f86b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2f86b4:
    // 0x2f86b4: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f86b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
label_2f86b8:
    // 0x2f86b8: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f86b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_2f86bc:
    // 0x2f86bc: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2f86c0:
    // 0x2f86c0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f86c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f86c4:
    // 0x2f86c4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2f86c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f86c8:
    // 0x2f86c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f86c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f86cc:
    // 0x2f86cc: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x2f86ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f86d0:
    // 0x2f86d0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2f86d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f86d4:
    // 0x2f86d4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2f86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f86d8:
    // 0x2f86d8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2f86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f86dc:
    // 0x2f86dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f86dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f86e0:
    // 0x2f86e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f86e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f86e4:
    // 0x2f86e4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f86e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f86e8:
    // 0x2f86e8: 0x0  nop
    ctx->pc = 0x2f86e8u;
    // NOP
label_2f86ec:
    // 0x2f86ec: 0x0  nop
    ctx->pc = 0x2f86ecu;
    // NOP
label_2f86f0:
    // 0x2f86f0: 0x46000044  c1          0x44
    ctx->pc = 0x2f86f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f86f4:
    // 0x2f86f4: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2f86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2f86f8:
    // 0x2f86f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f86f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f86fc:
    // 0x2f86fc: 0x0  nop
    ctx->pc = 0x2f86fcu;
    // NOP
label_2f8700:
    // 0x2f8700: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f8700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8704:
    // 0x2f8704: 0x0  nop
    ctx->pc = 0x2f8704u;
    // NOP
label_2f8708:
    // 0x2f8708: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f870c:
    if (ctx->pc == 0x2F870Cu) {
        ctx->pc = 0x2F870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8708u;
        // 0x2f870c: 0xe7a101e0  swc1        $f1, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8710u;
        goto label_2f8710;
    }
    ctx->pc = 0x2F8708u;
    {
        const bool branch_taken_0x2f8708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8708u;
        // 0x2f870c: 0xe7a101e0  swc1        $f1, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8708) {
            ctx->pc = 0x2F8734u;
            goto label_2f8734;
        }
    }
    ctx->pc = 0x2F8710u;
label_2f8710:
    // 0x2f8710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8714:
    // 0x2f8714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8718:
    // 0x2f8718: 0x0  nop
    ctx->pc = 0x2f8718u;
    // NOP
label_2f871c:
    // 0x2f871c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f871cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2f8720:
    // 0x2f8720: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f8720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f8724:
    // 0x2f8724: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f8724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8728:
    // 0x2f8728: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f8728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f872c:
    // 0x2f872c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f872cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8730:
    // 0x2f8730: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x2f8730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8734:
    // 0x2f8734: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x2f8734u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_2f8738:
    // 0x2f8738: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f8738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f873c:
    // 0x2f873c: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f873cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f8740:
    // 0x2f8740: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f8740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f8744:
    // 0x2f8744: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f8744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f8748:
    // 0x2f8748: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x2f8748u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
label_2f874c:
    // 0x2f874c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f874cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8750:
    // 0x2f8750: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f8750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8754:
    // 0x2f8754: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x2f8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2f8758:
    // 0x2f8758: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f875c:
    // 0x2f875c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8760:
    // 0x2f8760: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2f8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8764:
    // 0x2f8764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8768:
    // 0x2f8768: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2f8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f876c:
    // 0x2f876c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8770:
    // 0x2f8770: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2f8770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f8774:
    // 0x2f8774: 0xc076e46  jal         func_1DB918
label_2f8778:
    if (ctx->pc == 0x2F8778u) {
        ctx->pc = 0x2F8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8774u;
        // 0x2f8778: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F877Cu;
        goto label_2f877c;
    }
    ctx->pc = 0x2F8774u;
    SET_GPR_U32(ctx, 31, 0x2F877Cu);
    ctx->pc = 0x2F8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8774u;
    // 0x2f8778: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8774u, 0x2F877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8780:
    // 0x2f8780: 0xc076e46  jal         func_1DB918
label_2f8784:
    if (ctx->pc == 0x2F8784u) {
        ctx->pc = 0x2F8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8780u;
        // 0x2f8784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8788u;
        goto label_2f8788;
    }
    ctx->pc = 0x2F8780u;
    SET_GPR_U32(ctx, 31, 0x2F8788u);
    ctx->pc = 0x2F8784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8780u;
    // 0x2f8784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8780u, 0x2F8788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8788u;
label_2f8788:
    // 0x2f8788: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2f8788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2f878c:
    // 0x2f878c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f8790:
    // 0x2f8790: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2f8790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2f8794:
    // 0x2f8794: 0x27a90220  addiu       $t1, $sp, 0x220
    ctx->pc = 0x2f8794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2f8798:
    // 0x2f8798: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f8798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f879c:
    // 0x2f879c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f879cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f87a0:
    // 0x2f87a0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f87a4:
    // 0x2f87a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f87a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f87a8:
    // 0x2f87a8: 0xc077940  jal         func_1DE500
label_2f87ac:
    if (ctx->pc == 0x2F87ACu) {
        ctx->pc = 0x2F87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87A8u;
        // 0x2f87ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87B0u;
        goto label_2f87b0;
    }
    ctx->pc = 0x2F87A8u;
    SET_GPR_U32(ctx, 31, 0x2F87B0u);
    ctx->pc = 0x2F87ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87A8u;
    // 0x2f87ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F87A8u, 0x2F87B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87B0u;
label_2f87b0:
    // 0x2f87b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f87b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f87b4:
    // 0x2f87b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f87b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f87b8:
    // 0x2f87b8: 0xc076e38  jal         func_1DB8E0
label_2f87bc:
    if (ctx->pc == 0x2F87BCu) {
        ctx->pc = 0x2F87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87B8u;
        // 0x2f87bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87C0u;
        goto label_2f87c0;
    }
    ctx->pc = 0x2F87B8u;
    SET_GPR_U32(ctx, 31, 0x2F87C0u);
    ctx->pc = 0x2F87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87B8u;
    // 0x2f87bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F87B8u, 0x2F87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87C0u;
label_2f87c0:
    // 0x2f87c0: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
label_2f87c4:
    if (ctx->pc == 0x2F87C4u) {
        ctx->pc = 0x2F87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C0u;
        // 0x2f87c4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87C8u;
        goto label_2f87c8;
    }
    ctx->pc = 0x2F87C0u;
    {
        const bool branch_taken_0x2f87c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C0u;
        // 0x2f87c4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87c0) {
            ctx->pc = 0x2F897Cu;
            goto label_2f897c;
        }
    }
    ctx->pc = 0x2F87C8u;
label_2f87c8:
    // 0x2f87c8: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2f87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2f87cc:
    // 0x2f87cc: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f87ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f87d0:
    // 0x2f87d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f87d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f87d4:
    // 0x2f87d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f87d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f87d8:
    // 0x2f87d8: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f87d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f87dc:
    // 0x2f87dc: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f87e0:
    // 0x2f87e0: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f87e4:
    // 0x2f87e4: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f87e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f87e8:
    // 0x2f87e8: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f87e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f87ec:
    // 0x2f87ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f87ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f87f0:
    // 0x2f87f0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f87f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f87f4:
    // 0x2f87f4: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f87f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f87f8:
    // 0x2f87f8: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f87f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f87fc:
    // 0x2f87fc: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f87fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f8800:
    // 0x2f8800: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8804:
    // 0x2f8804: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f8804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f8808:
    // 0x2f8808: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f880c:
    // 0x2f880c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f880cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8810:
    // 0x2f8810: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8814:
    // 0x2f8814: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2f8814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8818:
    // 0x2f8818: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f8818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f881c:
    // 0x2f881c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2f881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8820:
    // 0x2f8820: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2f8820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8824:
    // 0x2f8824: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x2f8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8828:
    // 0x2f8828: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f882c:
    // 0x2f882c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f882cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2f8830:
    // 0x2f8830: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f8834:
    // 0x2f8834: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2f8834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2f8838:
    // 0x2f8838: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f8838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f883c:
    // 0x2f883c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8840:
    // 0x2f8840: 0xc0f6a96  jal         func_3DAA58
label_2f8844:
    if (ctx->pc == 0x2F8844u) {
        ctx->pc = 0x2F8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8840u;
        // 0x2f8844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8848u;
        goto label_2f8848;
    }
    ctx->pc = 0x2F8840u;
    SET_GPR_U32(ctx, 31, 0x2F8848u);
    ctx->pc = 0x2F8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8840u;
    // 0x2f8844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8840u, 0x2F8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8848u;
label_2f8848:
    // 0x2f8848: 0xc0f6a96  jal         func_3DAA58
label_2f884c:
    if (ctx->pc == 0x2F884Cu) {
        ctx->pc = 0x2F884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8848u;
        // 0x2f884c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8850u;
        goto label_2f8850;
    }
    ctx->pc = 0x2F8848u;
    SET_GPR_U32(ctx, 31, 0x2F8850u);
    ctx->pc = 0x2F884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8848u;
    // 0x2f884c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8848u, 0x2F8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8850u;
label_2f8850:
    // 0x2f8850: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f8850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f8854:
    // 0x2f8854: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2f8854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f8858:
    // 0x2f8858: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f8858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_2f885c:
    // 0x2f885c: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
label_2f8860:
    // 0x2f8860: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2f8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2f8864:
    // 0x2f8864: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f8864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f8868:
    // 0x2f8868: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f8868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f886c:
    // 0x2f886c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f886cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8870:
    // 0x2f8870: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x2f8870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8874:
    // 0x2f8874: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2f8874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8878:
    // 0x2f8878: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2f8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f887c:
    // 0x2f887c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2f887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f8880:
    // 0x2f8880: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f8880u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f8884:
    // 0x2f8884: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f8884u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f8888:
    // 0x2f8888: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f8888u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f888c:
    // 0x2f888c: 0x0  nop
    ctx->pc = 0x2f888cu;
    // NOP
label_2f8890:
    // 0x2f8890: 0x0  nop
    ctx->pc = 0x2f8890u;
    // NOP
label_2f8894:
    // 0x2f8894: 0x46000044  c1          0x44
    ctx->pc = 0x2f8894u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f8898:
    // 0x2f8898: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2f8898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2f889c:
    // 0x2f889c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f889cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f88a0:
    // 0x2f88a0: 0x0  nop
    ctx->pc = 0x2f88a0u;
    // NOP
label_2f88a4:
    // 0x2f88a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f88a8:
    if (ctx->pc == 0x2F88A8u) {
        ctx->pc = 0x2F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88A4u;
        // 0x2f88a8: 0xe7a101e0  swc1        $f1, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88ACu;
        goto label_2f88ac;
    }
    ctx->pc = 0x2F88A4u;
    {
        const bool branch_taken_0x2f88a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88A4u;
        // 0x2f88a8: 0xe7a101e0  swc1        $f1, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88a4) {
            ctx->pc = 0x2F88D0u;
            goto label_2f88d0;
        }
    }
    ctx->pc = 0x2F88ACu;
label_2f88ac:
    // 0x2f88ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f88b0:
    // 0x2f88b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f88b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f88b4:
    // 0x2f88b4: 0x0  nop
    ctx->pc = 0x2f88b4u;
    // NOP
label_2f88b8:
    // 0x2f88b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f88b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2f88bc:
    // 0x2f88bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f88bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f88c0:
    // 0x2f88c0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f88c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f88c4:
    // 0x2f88c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f88c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f88c8:
    // 0x2f88c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f88c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f88cc:
    // 0x2f88cc: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x2f88ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f88d0:
    // 0x2f88d0: 0x93a400e0  lbu         $a0, 0xE0($sp)
    ctx->pc = 0x2f88d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_2f88d4:
    // 0x2f88d4: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f88d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f88d8:
    // 0x2f88d8: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f88d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f88dc:
    // 0x2f88dc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f88dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f88e0:
    // 0x2f88e0: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f88e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_2f88e4:
    // 0x2f88e4: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x2f88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
label_2f88e8:
    // 0x2f88e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f88e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f88ec:
    // 0x2f88ec: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f88ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f88f0:
    // 0x2f88f0: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x2f88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2f88f4:
    // 0x2f88f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f88f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f88f8:
    // 0x2f88f8: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f88fc:
    // 0x2f88fc: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2f88fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8900:
    // 0x2f8900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8904:
    // 0x2f8904: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2f8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8908:
    // 0x2f8908: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f890c:
    // 0x2f890c: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2f890cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f8910:
    // 0x2f8910: 0xc076e46  jal         func_1DB918
label_2f8914:
    if (ctx->pc == 0x2F8914u) {
        ctx->pc = 0x2F8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8910u;
        // 0x2f8914: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8918u;
        goto label_2f8918;
    }
    ctx->pc = 0x2F8910u;
    SET_GPR_U32(ctx, 31, 0x2F8918u);
    ctx->pc = 0x2F8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8910u;
    // 0x2f8914: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8910u, 0x2F8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8918u;
label_2f8918:
    // 0x2f8918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f8918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f891c:
    // 0x2f891c: 0xc076e46  jal         func_1DB918
label_2f8920:
    if (ctx->pc == 0x2F8920u) {
        ctx->pc = 0x2F8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F891Cu;
        // 0x2f8920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8924u;
        goto label_2f8924;
    }
    ctx->pc = 0x2F891Cu;
    SET_GPR_U32(ctx, 31, 0x2F8924u);
    ctx->pc = 0x2F8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F891Cu;
    // 0x2f8920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F891Cu, 0x2F8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8924u;
label_2f8924:
    // 0x2f8924: 0xc07783e  jal         func_1DE0F8
label_2f8928:
    if (ctx->pc == 0x2F8928u) {
        ctx->pc = 0x2F8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8924u;
        // 0x2f8928: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F892Cu;
        goto label_2f892c;
    }
    ctx->pc = 0x2F8924u;
    SET_GPR_U32(ctx, 31, 0x2F892Cu);
    ctx->pc = 0x2F8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8924u;
    // 0x2f8928: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x2F8924u, 0x2F892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F892Cu;
label_2f892c:
    // 0x2f892c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f892cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8930:
    // 0x2f8930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8934:
    // 0x2f8934: 0xc076e38  jal         func_1DB8E0
label_2f8938:
    if (ctx->pc == 0x2F8938u) {
        ctx->pc = 0x2F8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8934u;
        // 0x2f8938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F893Cu;
        goto label_2f893c;
    }
    ctx->pc = 0x2F8934u;
    SET_GPR_U32(ctx, 31, 0x2F893Cu);
    ctx->pc = 0x2F8938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8934u;
    // 0x2f8938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F8934u, 0x2F893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F893Cu;
label_2f893c:
    // 0x2f893c: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
label_2f8940:
    if (ctx->pc == 0x2F8940u) {
        ctx->pc = 0x2F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F893Cu;
        // 0x2f8940: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8944u;
        goto label_2f8944;
    }
    ctx->pc = 0x2F893Cu;
    {
        const bool branch_taken_0x2f893c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F893Cu;
        // 0x2f8940: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f893c) {
            ctx->pc = 0x2F8980u;
            goto label_2f8980;
        }
    }
    ctx->pc = 0x2F8944u;
label_2f8944:
    // 0x2f8944: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8948:
    // 0x2f8948: 0xc076e46  jal         func_1DB918
label_2f894c:
    if (ctx->pc == 0x2F894Cu) {
        ctx->pc = 0x2F894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8948u;
        // 0x2f894c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8950u;
        goto label_2f8950;
    }
    ctx->pc = 0x2F8948u;
    SET_GPR_U32(ctx, 31, 0x2F8950u);
    ctx->pc = 0x2F894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8948u;
    // 0x2f894c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8948u, 0x2F8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8950u;
label_2f8950:
    // 0x2f8950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8954:
    // 0x2f8954: 0xc076e46  jal         func_1DB918
label_2f8958:
    if (ctx->pc == 0x2F8958u) {
        ctx->pc = 0x2F8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8954u;
        // 0x2f8958: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F895Cu;
        goto label_2f895c;
    }
    ctx->pc = 0x2F8954u;
    SET_GPR_U32(ctx, 31, 0x2F895Cu);
    ctx->pc = 0x2F8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8954u;
    // 0x2f8958: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F8954u, 0x2F895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F895Cu;
label_2f895c:
    // 0x2f895c: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x2f895cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_2f8960:
    // 0x2f8960: 0xc08e0fa  jal         func_2383E8
label_2f8964:
    if (ctx->pc == 0x2F8964u) {
        ctx->pc = 0x2F8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8960u;
        // 0x2f8964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8968u;
        goto label_2f8968;
    }
    ctx->pc = 0x2F8960u;
    SET_GPR_U32(ctx, 31, 0x2F8968u);
    ctx->pc = 0x2F8964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8960u;
    // 0x2f8964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2F8960u, 0x2F8968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8968u;
label_2f8968:
    // 0x2f8968: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f8968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f896c:
    // 0x2f896c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8970:
    // 0x2f8970: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x2f8970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_2f8974:
    // 0x2f8974: 0xc076e38  jal         func_1DB8E0
label_2f8978:
    if (ctx->pc == 0x2F8978u) {
        ctx->pc = 0x2F8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8974u;
        // 0x2f8978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F897Cu;
        goto label_2f897c;
    }
    ctx->pc = 0x2F8974u;
    SET_GPR_U32(ctx, 31, 0x2F897Cu);
    ctx->pc = 0x2F8978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8974u;
    // 0x2f8978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F8974u, 0x2F897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F897Cu;
label_2f897c:
    // 0x2f897c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8980:
    // 0x2f8980: 0x12c30004  beq         $s6, $v1, . + 4 + (0x4 << 2)
label_2f8984:
    if (ctx->pc == 0x2F8984u) {
        ctx->pc = 0x2F8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8980u;
        // 0x2f8984: 0x8fa20228  lw          $v0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8988u;
        goto label_2f8988;
    }
    ctx->pc = 0x2F8980u;
    {
        const bool branch_taken_0x2f8980 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8980u;
        // 0x2f8984: 0x8fa20228  lw          $v0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8980) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F8988u;
label_2f8988:
    // 0x2f8988: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f898c:
    if (ctx->pc == 0x2F898Cu) {
        ctx->pc = 0x2F898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8988u;
        // 0x2f898c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8990u;
        goto label_2f8990;
    }
    ctx->pc = 0x2F8988u;
    {
        const bool branch_taken_0x2f8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8988u;
        // 0x2f898c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8988) {
            ctx->pc = 0x2F8994u;
            goto label_2f8994;
        }
    }
    ctx->pc = 0x2F8990u;
label_2f8990:
    // 0x2f8990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8994:
    // 0x2f8994: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x2f8994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2f8998:
    // 0x2f8998: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x2f8998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
label_2f899c:
    // 0x2f899c: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x2f899cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_2f89a0:
    // 0x2f89a0: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x2f89a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
label_2f89a4:
    // 0x2f89a4: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x2f89a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2f89a8:
    // 0x2f89a8: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x2f89a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2f89ac:
    // 0x2f89ac: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x2f89acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2f89b0:
    // 0x2f89b0: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x2f89b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_2f89b4:
    // 0x2f89b4: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x2f89b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_2f89b8:
    // 0x2f89b8: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x2f89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_2f89bc:
    // 0x2f89bc: 0xc7b50298  lwc1        $f21, 0x298($sp)
    ctx->pc = 0x2f89bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f89c0:
    // 0x2f89c0: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x2f89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f89c4:
    // 0x2f89c4: 0x3e00008  jr          $ra
label_2f89c8:
    if (ctx->pc == 0x2F89C8u) {
        ctx->pc = 0x2F89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89C4u;
        // 0x2f89c8: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89CCu;
        goto label_2f89cc;
    }
    ctx->pc = 0x2F89C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89C4u;
        // 0x2f89c8: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F89C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F89CCu;
label_2f89cc:
    // 0x2f89cc: 0x0  nop
    ctx->pc = 0x2f89ccu;
    // NOP
    ctx->pc = 0x2f89d0u;
}
