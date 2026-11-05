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

// Function: sub_002E8528
// Address: 0x2e8528 - 0x2e8f88
void sub_002E8528_0x2e8528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8528_0x2e8528");
#endif

    switch (ctx->pc) {
        case 0x2e8528u: goto label_2e8528;
        case 0x2e852cu: goto label_2e852c;
        case 0x2e8530u: goto label_2e8530;
        case 0x2e8534u: goto label_2e8534;
        case 0x2e8538u: goto label_2e8538;
        case 0x2e853cu: goto label_2e853c;
        case 0x2e8540u: goto label_2e8540;
        case 0x2e8544u: goto label_2e8544;
        case 0x2e8548u: goto label_2e8548;
        case 0x2e854cu: goto label_2e854c;
        case 0x2e8550u: goto label_2e8550;
        case 0x2e8554u: goto label_2e8554;
        case 0x2e8558u: goto label_2e8558;
        case 0x2e855cu: goto label_2e855c;
        case 0x2e8560u: goto label_2e8560;
        case 0x2e8564u: goto label_2e8564;
        case 0x2e8568u: goto label_2e8568;
        case 0x2e856cu: goto label_2e856c;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e8574u: goto label_2e8574;
        case 0x2e8578u: goto label_2e8578;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e8580u: goto label_2e8580;
        case 0x2e8584u: goto label_2e8584;
        case 0x2e8588u: goto label_2e8588;
        case 0x2e858cu: goto label_2e858c;
        case 0x2e8590u: goto label_2e8590;
        case 0x2e8594u: goto label_2e8594;
        case 0x2e8598u: goto label_2e8598;
        case 0x2e859cu: goto label_2e859c;
        case 0x2e85a0u: goto label_2e85a0;
        case 0x2e85a4u: goto label_2e85a4;
        case 0x2e85a8u: goto label_2e85a8;
        case 0x2e85acu: goto label_2e85ac;
        case 0x2e85b0u: goto label_2e85b0;
        case 0x2e85b4u: goto label_2e85b4;
        case 0x2e85b8u: goto label_2e85b8;
        case 0x2e85bcu: goto label_2e85bc;
        case 0x2e85c0u: goto label_2e85c0;
        case 0x2e85c4u: goto label_2e85c4;
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ccu: goto label_2e85cc;
        case 0x2e85d0u: goto label_2e85d0;
        case 0x2e85d4u: goto label_2e85d4;
        case 0x2e85d8u: goto label_2e85d8;
        case 0x2e85dcu: goto label_2e85dc;
        case 0x2e85e0u: goto label_2e85e0;
        case 0x2e85e4u: goto label_2e85e4;
        case 0x2e85e8u: goto label_2e85e8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e85f0u: goto label_2e85f0;
        case 0x2e85f4u: goto label_2e85f4;
        case 0x2e85f8u: goto label_2e85f8;
        case 0x2e85fcu: goto label_2e85fc;
        case 0x2e8600u: goto label_2e8600;
        case 0x2e8604u: goto label_2e8604;
        case 0x2e8608u: goto label_2e8608;
        case 0x2e860cu: goto label_2e860c;
        case 0x2e8610u: goto label_2e8610;
        case 0x2e8614u: goto label_2e8614;
        case 0x2e8618u: goto label_2e8618;
        case 0x2e861cu: goto label_2e861c;
        case 0x2e8620u: goto label_2e8620;
        case 0x2e8624u: goto label_2e8624;
        case 0x2e8628u: goto label_2e8628;
        case 0x2e862cu: goto label_2e862c;
        case 0x2e8630u: goto label_2e8630;
        case 0x2e8634u: goto label_2e8634;
        case 0x2e8638u: goto label_2e8638;
        case 0x2e863cu: goto label_2e863c;
        case 0x2e8640u: goto label_2e8640;
        case 0x2e8644u: goto label_2e8644;
        case 0x2e8648u: goto label_2e8648;
        case 0x2e864cu: goto label_2e864c;
        case 0x2e8650u: goto label_2e8650;
        case 0x2e8654u: goto label_2e8654;
        case 0x2e8658u: goto label_2e8658;
        case 0x2e865cu: goto label_2e865c;
        case 0x2e8660u: goto label_2e8660;
        case 0x2e8664u: goto label_2e8664;
        case 0x2e8668u: goto label_2e8668;
        case 0x2e866cu: goto label_2e866c;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e8674u: goto label_2e8674;
        case 0x2e8678u: goto label_2e8678;
        case 0x2e867cu: goto label_2e867c;
        case 0x2e8680u: goto label_2e8680;
        case 0x2e8684u: goto label_2e8684;
        case 0x2e8688u: goto label_2e8688;
        case 0x2e868cu: goto label_2e868c;
        case 0x2e8690u: goto label_2e8690;
        case 0x2e8694u: goto label_2e8694;
        case 0x2e8698u: goto label_2e8698;
        case 0x2e869cu: goto label_2e869c;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86a4u: goto label_2e86a4;
        case 0x2e86a8u: goto label_2e86a8;
        case 0x2e86acu: goto label_2e86ac;
        case 0x2e86b0u: goto label_2e86b0;
        case 0x2e86b4u: goto label_2e86b4;
        case 0x2e86b8u: goto label_2e86b8;
        case 0x2e86bcu: goto label_2e86bc;
        case 0x2e86c0u: goto label_2e86c0;
        case 0x2e86c4u: goto label_2e86c4;
        case 0x2e86c8u: goto label_2e86c8;
        case 0x2e86ccu: goto label_2e86cc;
        case 0x2e86d0u: goto label_2e86d0;
        case 0x2e86d4u: goto label_2e86d4;
        case 0x2e86d8u: goto label_2e86d8;
        case 0x2e86dcu: goto label_2e86dc;
        case 0x2e86e0u: goto label_2e86e0;
        case 0x2e86e4u: goto label_2e86e4;
        case 0x2e86e8u: goto label_2e86e8;
        case 0x2e86ecu: goto label_2e86ec;
        case 0x2e86f0u: goto label_2e86f0;
        case 0x2e86f4u: goto label_2e86f4;
        case 0x2e86f8u: goto label_2e86f8;
        case 0x2e86fcu: goto label_2e86fc;
        case 0x2e8700u: goto label_2e8700;
        case 0x2e8704u: goto label_2e8704;
        case 0x2e8708u: goto label_2e8708;
        case 0x2e870cu: goto label_2e870c;
        case 0x2e8710u: goto label_2e8710;
        case 0x2e8714u: goto label_2e8714;
        case 0x2e8718u: goto label_2e8718;
        case 0x2e871cu: goto label_2e871c;
        case 0x2e8720u: goto label_2e8720;
        case 0x2e8724u: goto label_2e8724;
        case 0x2e8728u: goto label_2e8728;
        case 0x2e872cu: goto label_2e872c;
        case 0x2e8730u: goto label_2e8730;
        case 0x2e8734u: goto label_2e8734;
        case 0x2e8738u: goto label_2e8738;
        case 0x2e873cu: goto label_2e873c;
        case 0x2e8740u: goto label_2e8740;
        case 0x2e8744u: goto label_2e8744;
        case 0x2e8748u: goto label_2e8748;
        case 0x2e874cu: goto label_2e874c;
        case 0x2e8750u: goto label_2e8750;
        case 0x2e8754u: goto label_2e8754;
        case 0x2e8758u: goto label_2e8758;
        case 0x2e875cu: goto label_2e875c;
        case 0x2e8760u: goto label_2e8760;
        case 0x2e8764u: goto label_2e8764;
        case 0x2e8768u: goto label_2e8768;
        case 0x2e876cu: goto label_2e876c;
        case 0x2e8770u: goto label_2e8770;
        case 0x2e8774u: goto label_2e8774;
        case 0x2e8778u: goto label_2e8778;
        case 0x2e877cu: goto label_2e877c;
        case 0x2e8780u: goto label_2e8780;
        case 0x2e8784u: goto label_2e8784;
        case 0x2e8788u: goto label_2e8788;
        case 0x2e878cu: goto label_2e878c;
        case 0x2e8790u: goto label_2e8790;
        case 0x2e8794u: goto label_2e8794;
        case 0x2e8798u: goto label_2e8798;
        case 0x2e879cu: goto label_2e879c;
        case 0x2e87a0u: goto label_2e87a0;
        case 0x2e87a4u: goto label_2e87a4;
        case 0x2e87a8u: goto label_2e87a8;
        case 0x2e87acu: goto label_2e87ac;
        case 0x2e87b0u: goto label_2e87b0;
        case 0x2e87b4u: goto label_2e87b4;
        case 0x2e87b8u: goto label_2e87b8;
        case 0x2e87bcu: goto label_2e87bc;
        case 0x2e87c0u: goto label_2e87c0;
        case 0x2e87c4u: goto label_2e87c4;
        case 0x2e87c8u: goto label_2e87c8;
        case 0x2e87ccu: goto label_2e87cc;
        case 0x2e87d0u: goto label_2e87d0;
        case 0x2e87d4u: goto label_2e87d4;
        case 0x2e87d8u: goto label_2e87d8;
        case 0x2e87dcu: goto label_2e87dc;
        case 0x2e87e0u: goto label_2e87e0;
        case 0x2e87e4u: goto label_2e87e4;
        case 0x2e87e8u: goto label_2e87e8;
        case 0x2e87ecu: goto label_2e87ec;
        case 0x2e87f0u: goto label_2e87f0;
        case 0x2e87f4u: goto label_2e87f4;
        case 0x2e87f8u: goto label_2e87f8;
        case 0x2e87fcu: goto label_2e87fc;
        case 0x2e8800u: goto label_2e8800;
        case 0x2e8804u: goto label_2e8804;
        case 0x2e8808u: goto label_2e8808;
        case 0x2e880cu: goto label_2e880c;
        case 0x2e8810u: goto label_2e8810;
        case 0x2e8814u: goto label_2e8814;
        case 0x2e8818u: goto label_2e8818;
        case 0x2e881cu: goto label_2e881c;
        case 0x2e8820u: goto label_2e8820;
        case 0x2e8824u: goto label_2e8824;
        case 0x2e8828u: goto label_2e8828;
        case 0x2e882cu: goto label_2e882c;
        case 0x2e8830u: goto label_2e8830;
        case 0x2e8834u: goto label_2e8834;
        case 0x2e8838u: goto label_2e8838;
        case 0x2e883cu: goto label_2e883c;
        case 0x2e8840u: goto label_2e8840;
        case 0x2e8844u: goto label_2e8844;
        case 0x2e8848u: goto label_2e8848;
        case 0x2e884cu: goto label_2e884c;
        case 0x2e8850u: goto label_2e8850;
        case 0x2e8854u: goto label_2e8854;
        case 0x2e8858u: goto label_2e8858;
        case 0x2e885cu: goto label_2e885c;
        case 0x2e8860u: goto label_2e8860;
        case 0x2e8864u: goto label_2e8864;
        case 0x2e8868u: goto label_2e8868;
        case 0x2e886cu: goto label_2e886c;
        case 0x2e8870u: goto label_2e8870;
        case 0x2e8874u: goto label_2e8874;
        case 0x2e8878u: goto label_2e8878;
        case 0x2e887cu: goto label_2e887c;
        case 0x2e8880u: goto label_2e8880;
        case 0x2e8884u: goto label_2e8884;
        case 0x2e8888u: goto label_2e8888;
        case 0x2e888cu: goto label_2e888c;
        case 0x2e8890u: goto label_2e8890;
        case 0x2e8894u: goto label_2e8894;
        case 0x2e8898u: goto label_2e8898;
        case 0x2e889cu: goto label_2e889c;
        case 0x2e88a0u: goto label_2e88a0;
        case 0x2e88a4u: goto label_2e88a4;
        case 0x2e88a8u: goto label_2e88a8;
        case 0x2e88acu: goto label_2e88ac;
        case 0x2e88b0u: goto label_2e88b0;
        case 0x2e88b4u: goto label_2e88b4;
        case 0x2e88b8u: goto label_2e88b8;
        case 0x2e88bcu: goto label_2e88bc;
        case 0x2e88c0u: goto label_2e88c0;
        case 0x2e88c4u: goto label_2e88c4;
        case 0x2e88c8u: goto label_2e88c8;
        case 0x2e88ccu: goto label_2e88cc;
        case 0x2e88d0u: goto label_2e88d0;
        case 0x2e88d4u: goto label_2e88d4;
        case 0x2e88d8u: goto label_2e88d8;
        case 0x2e88dcu: goto label_2e88dc;
        case 0x2e88e0u: goto label_2e88e0;
        case 0x2e88e4u: goto label_2e88e4;
        case 0x2e88e8u: goto label_2e88e8;
        case 0x2e88ecu: goto label_2e88ec;
        case 0x2e88f0u: goto label_2e88f0;
        case 0x2e88f4u: goto label_2e88f4;
        case 0x2e88f8u: goto label_2e88f8;
        case 0x2e88fcu: goto label_2e88fc;
        case 0x2e8900u: goto label_2e8900;
        case 0x2e8904u: goto label_2e8904;
        case 0x2e8908u: goto label_2e8908;
        case 0x2e890cu: goto label_2e890c;
        case 0x2e8910u: goto label_2e8910;
        case 0x2e8914u: goto label_2e8914;
        case 0x2e8918u: goto label_2e8918;
        case 0x2e891cu: goto label_2e891c;
        case 0x2e8920u: goto label_2e8920;
        case 0x2e8924u: goto label_2e8924;
        case 0x2e8928u: goto label_2e8928;
        case 0x2e892cu: goto label_2e892c;
        case 0x2e8930u: goto label_2e8930;
        case 0x2e8934u: goto label_2e8934;
        case 0x2e8938u: goto label_2e8938;
        case 0x2e893cu: goto label_2e893c;
        case 0x2e8940u: goto label_2e8940;
        case 0x2e8944u: goto label_2e8944;
        case 0x2e8948u: goto label_2e8948;
        case 0x2e894cu: goto label_2e894c;
        case 0x2e8950u: goto label_2e8950;
        case 0x2e8954u: goto label_2e8954;
        case 0x2e8958u: goto label_2e8958;
        case 0x2e895cu: goto label_2e895c;
        case 0x2e8960u: goto label_2e8960;
        case 0x2e8964u: goto label_2e8964;
        case 0x2e8968u: goto label_2e8968;
        case 0x2e896cu: goto label_2e896c;
        case 0x2e8970u: goto label_2e8970;
        case 0x2e8974u: goto label_2e8974;
        case 0x2e8978u: goto label_2e8978;
        case 0x2e897cu: goto label_2e897c;
        case 0x2e8980u: goto label_2e8980;
        case 0x2e8984u: goto label_2e8984;
        case 0x2e8988u: goto label_2e8988;
        case 0x2e898cu: goto label_2e898c;
        case 0x2e8990u: goto label_2e8990;
        case 0x2e8994u: goto label_2e8994;
        case 0x2e8998u: goto label_2e8998;
        case 0x2e899cu: goto label_2e899c;
        case 0x2e89a0u: goto label_2e89a0;
        case 0x2e89a4u: goto label_2e89a4;
        case 0x2e89a8u: goto label_2e89a8;
        case 0x2e89acu: goto label_2e89ac;
        case 0x2e89b0u: goto label_2e89b0;
        case 0x2e89b4u: goto label_2e89b4;
        case 0x2e89b8u: goto label_2e89b8;
        case 0x2e89bcu: goto label_2e89bc;
        case 0x2e89c0u: goto label_2e89c0;
        case 0x2e89c4u: goto label_2e89c4;
        case 0x2e89c8u: goto label_2e89c8;
        case 0x2e89ccu: goto label_2e89cc;
        case 0x2e89d0u: goto label_2e89d0;
        case 0x2e89d4u: goto label_2e89d4;
        case 0x2e89d8u: goto label_2e89d8;
        case 0x2e89dcu: goto label_2e89dc;
        case 0x2e89e0u: goto label_2e89e0;
        case 0x2e89e4u: goto label_2e89e4;
        case 0x2e89e8u: goto label_2e89e8;
        case 0x2e89ecu: goto label_2e89ec;
        case 0x2e89f0u: goto label_2e89f0;
        case 0x2e89f4u: goto label_2e89f4;
        case 0x2e89f8u: goto label_2e89f8;
        case 0x2e89fcu: goto label_2e89fc;
        case 0x2e8a00u: goto label_2e8a00;
        case 0x2e8a04u: goto label_2e8a04;
        case 0x2e8a08u: goto label_2e8a08;
        case 0x2e8a0cu: goto label_2e8a0c;
        case 0x2e8a10u: goto label_2e8a10;
        case 0x2e8a14u: goto label_2e8a14;
        case 0x2e8a18u: goto label_2e8a18;
        case 0x2e8a1cu: goto label_2e8a1c;
        case 0x2e8a20u: goto label_2e8a20;
        case 0x2e8a24u: goto label_2e8a24;
        case 0x2e8a28u: goto label_2e8a28;
        case 0x2e8a2cu: goto label_2e8a2c;
        case 0x2e8a30u: goto label_2e8a30;
        case 0x2e8a34u: goto label_2e8a34;
        case 0x2e8a38u: goto label_2e8a38;
        case 0x2e8a3cu: goto label_2e8a3c;
        case 0x2e8a40u: goto label_2e8a40;
        case 0x2e8a44u: goto label_2e8a44;
        case 0x2e8a48u: goto label_2e8a48;
        case 0x2e8a4cu: goto label_2e8a4c;
        case 0x2e8a50u: goto label_2e8a50;
        case 0x2e8a54u: goto label_2e8a54;
        case 0x2e8a58u: goto label_2e8a58;
        case 0x2e8a5cu: goto label_2e8a5c;
        case 0x2e8a60u: goto label_2e8a60;
        case 0x2e8a64u: goto label_2e8a64;
        case 0x2e8a68u: goto label_2e8a68;
        case 0x2e8a6cu: goto label_2e8a6c;
        case 0x2e8a70u: goto label_2e8a70;
        case 0x2e8a74u: goto label_2e8a74;
        case 0x2e8a78u: goto label_2e8a78;
        case 0x2e8a7cu: goto label_2e8a7c;
        case 0x2e8a80u: goto label_2e8a80;
        case 0x2e8a84u: goto label_2e8a84;
        case 0x2e8a88u: goto label_2e8a88;
        case 0x2e8a8cu: goto label_2e8a8c;
        case 0x2e8a90u: goto label_2e8a90;
        case 0x2e8a94u: goto label_2e8a94;
        case 0x2e8a98u: goto label_2e8a98;
        case 0x2e8a9cu: goto label_2e8a9c;
        case 0x2e8aa0u: goto label_2e8aa0;
        case 0x2e8aa4u: goto label_2e8aa4;
        case 0x2e8aa8u: goto label_2e8aa8;
        case 0x2e8aacu: goto label_2e8aac;
        case 0x2e8ab0u: goto label_2e8ab0;
        case 0x2e8ab4u: goto label_2e8ab4;
        case 0x2e8ab8u: goto label_2e8ab8;
        case 0x2e8abcu: goto label_2e8abc;
        case 0x2e8ac0u: goto label_2e8ac0;
        case 0x2e8ac4u: goto label_2e8ac4;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8accu: goto label_2e8acc;
        case 0x2e8ad0u: goto label_2e8ad0;
        case 0x2e8ad4u: goto label_2e8ad4;
        case 0x2e8ad8u: goto label_2e8ad8;
        case 0x2e8adcu: goto label_2e8adc;
        case 0x2e8ae0u: goto label_2e8ae0;
        case 0x2e8ae4u: goto label_2e8ae4;
        case 0x2e8ae8u: goto label_2e8ae8;
        case 0x2e8aecu: goto label_2e8aec;
        case 0x2e8af0u: goto label_2e8af0;
        case 0x2e8af4u: goto label_2e8af4;
        case 0x2e8af8u: goto label_2e8af8;
        case 0x2e8afcu: goto label_2e8afc;
        case 0x2e8b00u: goto label_2e8b00;
        case 0x2e8b04u: goto label_2e8b04;
        case 0x2e8b08u: goto label_2e8b08;
        case 0x2e8b0cu: goto label_2e8b0c;
        case 0x2e8b10u: goto label_2e8b10;
        case 0x2e8b14u: goto label_2e8b14;
        case 0x2e8b18u: goto label_2e8b18;
        case 0x2e8b1cu: goto label_2e8b1c;
        case 0x2e8b20u: goto label_2e8b20;
        case 0x2e8b24u: goto label_2e8b24;
        case 0x2e8b28u: goto label_2e8b28;
        case 0x2e8b2cu: goto label_2e8b2c;
        case 0x2e8b30u: goto label_2e8b30;
        case 0x2e8b34u: goto label_2e8b34;
        case 0x2e8b38u: goto label_2e8b38;
        case 0x2e8b3cu: goto label_2e8b3c;
        case 0x2e8b40u: goto label_2e8b40;
        case 0x2e8b44u: goto label_2e8b44;
        case 0x2e8b48u: goto label_2e8b48;
        case 0x2e8b4cu: goto label_2e8b4c;
        case 0x2e8b50u: goto label_2e8b50;
        case 0x2e8b54u: goto label_2e8b54;
        case 0x2e8b58u: goto label_2e8b58;
        case 0x2e8b5cu: goto label_2e8b5c;
        case 0x2e8b60u: goto label_2e8b60;
        case 0x2e8b64u: goto label_2e8b64;
        case 0x2e8b68u: goto label_2e8b68;
        case 0x2e8b6cu: goto label_2e8b6c;
        case 0x2e8b70u: goto label_2e8b70;
        case 0x2e8b74u: goto label_2e8b74;
        case 0x2e8b78u: goto label_2e8b78;
        case 0x2e8b7cu: goto label_2e8b7c;
        case 0x2e8b80u: goto label_2e8b80;
        case 0x2e8b84u: goto label_2e8b84;
        case 0x2e8b88u: goto label_2e8b88;
        case 0x2e8b8cu: goto label_2e8b8c;
        case 0x2e8b90u: goto label_2e8b90;
        case 0x2e8b94u: goto label_2e8b94;
        case 0x2e8b98u: goto label_2e8b98;
        case 0x2e8b9cu: goto label_2e8b9c;
        case 0x2e8ba0u: goto label_2e8ba0;
        case 0x2e8ba4u: goto label_2e8ba4;
        case 0x2e8ba8u: goto label_2e8ba8;
        case 0x2e8bacu: goto label_2e8bac;
        case 0x2e8bb0u: goto label_2e8bb0;
        case 0x2e8bb4u: goto label_2e8bb4;
        case 0x2e8bb8u: goto label_2e8bb8;
        case 0x2e8bbcu: goto label_2e8bbc;
        case 0x2e8bc0u: goto label_2e8bc0;
        case 0x2e8bc4u: goto label_2e8bc4;
        case 0x2e8bc8u: goto label_2e8bc8;
        case 0x2e8bccu: goto label_2e8bcc;
        case 0x2e8bd0u: goto label_2e8bd0;
        case 0x2e8bd4u: goto label_2e8bd4;
        case 0x2e8bd8u: goto label_2e8bd8;
        case 0x2e8bdcu: goto label_2e8bdc;
        case 0x2e8be0u: goto label_2e8be0;
        case 0x2e8be4u: goto label_2e8be4;
        case 0x2e8be8u: goto label_2e8be8;
        case 0x2e8becu: goto label_2e8bec;
        case 0x2e8bf0u: goto label_2e8bf0;
        case 0x2e8bf4u: goto label_2e8bf4;
        case 0x2e8bf8u: goto label_2e8bf8;
        case 0x2e8bfcu: goto label_2e8bfc;
        case 0x2e8c00u: goto label_2e8c00;
        case 0x2e8c04u: goto label_2e8c04;
        case 0x2e8c08u: goto label_2e8c08;
        case 0x2e8c0cu: goto label_2e8c0c;
        case 0x2e8c10u: goto label_2e8c10;
        case 0x2e8c14u: goto label_2e8c14;
        case 0x2e8c18u: goto label_2e8c18;
        case 0x2e8c1cu: goto label_2e8c1c;
        case 0x2e8c20u: goto label_2e8c20;
        case 0x2e8c24u: goto label_2e8c24;
        case 0x2e8c28u: goto label_2e8c28;
        case 0x2e8c2cu: goto label_2e8c2c;
        case 0x2e8c30u: goto label_2e8c30;
        case 0x2e8c34u: goto label_2e8c34;
        case 0x2e8c38u: goto label_2e8c38;
        case 0x2e8c3cu: goto label_2e8c3c;
        case 0x2e8c40u: goto label_2e8c40;
        case 0x2e8c44u: goto label_2e8c44;
        case 0x2e8c48u: goto label_2e8c48;
        case 0x2e8c4cu: goto label_2e8c4c;
        case 0x2e8c50u: goto label_2e8c50;
        case 0x2e8c54u: goto label_2e8c54;
        case 0x2e8c58u: goto label_2e8c58;
        case 0x2e8c5cu: goto label_2e8c5c;
        case 0x2e8c60u: goto label_2e8c60;
        case 0x2e8c64u: goto label_2e8c64;
        case 0x2e8c68u: goto label_2e8c68;
        case 0x2e8c6cu: goto label_2e8c6c;
        case 0x2e8c70u: goto label_2e8c70;
        case 0x2e8c74u: goto label_2e8c74;
        case 0x2e8c78u: goto label_2e8c78;
        case 0x2e8c7cu: goto label_2e8c7c;
        case 0x2e8c80u: goto label_2e8c80;
        case 0x2e8c84u: goto label_2e8c84;
        case 0x2e8c88u: goto label_2e8c88;
        case 0x2e8c8cu: goto label_2e8c8c;
        case 0x2e8c90u: goto label_2e8c90;
        case 0x2e8c94u: goto label_2e8c94;
        case 0x2e8c98u: goto label_2e8c98;
        case 0x2e8c9cu: goto label_2e8c9c;
        case 0x2e8ca0u: goto label_2e8ca0;
        case 0x2e8ca4u: goto label_2e8ca4;
        case 0x2e8ca8u: goto label_2e8ca8;
        case 0x2e8cacu: goto label_2e8cac;
        case 0x2e8cb0u: goto label_2e8cb0;
        case 0x2e8cb4u: goto label_2e8cb4;
        case 0x2e8cb8u: goto label_2e8cb8;
        case 0x2e8cbcu: goto label_2e8cbc;
        case 0x2e8cc0u: goto label_2e8cc0;
        case 0x2e8cc4u: goto label_2e8cc4;
        case 0x2e8cc8u: goto label_2e8cc8;
        case 0x2e8cccu: goto label_2e8ccc;
        case 0x2e8cd0u: goto label_2e8cd0;
        case 0x2e8cd4u: goto label_2e8cd4;
        case 0x2e8cd8u: goto label_2e8cd8;
        case 0x2e8cdcu: goto label_2e8cdc;
        case 0x2e8ce0u: goto label_2e8ce0;
        case 0x2e8ce4u: goto label_2e8ce4;
        case 0x2e8ce8u: goto label_2e8ce8;
        case 0x2e8cecu: goto label_2e8cec;
        case 0x2e8cf0u: goto label_2e8cf0;
        case 0x2e8cf4u: goto label_2e8cf4;
        case 0x2e8cf8u: goto label_2e8cf8;
        case 0x2e8cfcu: goto label_2e8cfc;
        case 0x2e8d00u: goto label_2e8d00;
        case 0x2e8d04u: goto label_2e8d04;
        case 0x2e8d08u: goto label_2e8d08;
        case 0x2e8d0cu: goto label_2e8d0c;
        case 0x2e8d10u: goto label_2e8d10;
        case 0x2e8d14u: goto label_2e8d14;
        case 0x2e8d18u: goto label_2e8d18;
        case 0x2e8d1cu: goto label_2e8d1c;
        case 0x2e8d20u: goto label_2e8d20;
        case 0x2e8d24u: goto label_2e8d24;
        case 0x2e8d28u: goto label_2e8d28;
        case 0x2e8d2cu: goto label_2e8d2c;
        case 0x2e8d30u: goto label_2e8d30;
        case 0x2e8d34u: goto label_2e8d34;
        case 0x2e8d38u: goto label_2e8d38;
        case 0x2e8d3cu: goto label_2e8d3c;
        case 0x2e8d40u: goto label_2e8d40;
        case 0x2e8d44u: goto label_2e8d44;
        case 0x2e8d48u: goto label_2e8d48;
        case 0x2e8d4cu: goto label_2e8d4c;
        case 0x2e8d50u: goto label_2e8d50;
        case 0x2e8d54u: goto label_2e8d54;
        case 0x2e8d58u: goto label_2e8d58;
        case 0x2e8d5cu: goto label_2e8d5c;
        case 0x2e8d60u: goto label_2e8d60;
        case 0x2e8d64u: goto label_2e8d64;
        case 0x2e8d68u: goto label_2e8d68;
        case 0x2e8d6cu: goto label_2e8d6c;
        case 0x2e8d70u: goto label_2e8d70;
        case 0x2e8d74u: goto label_2e8d74;
        case 0x2e8d78u: goto label_2e8d78;
        case 0x2e8d7cu: goto label_2e8d7c;
        case 0x2e8d80u: goto label_2e8d80;
        case 0x2e8d84u: goto label_2e8d84;
        case 0x2e8d88u: goto label_2e8d88;
        case 0x2e8d8cu: goto label_2e8d8c;
        case 0x2e8d90u: goto label_2e8d90;
        case 0x2e8d94u: goto label_2e8d94;
        case 0x2e8d98u: goto label_2e8d98;
        case 0x2e8d9cu: goto label_2e8d9c;
        case 0x2e8da0u: goto label_2e8da0;
        case 0x2e8da4u: goto label_2e8da4;
        case 0x2e8da8u: goto label_2e8da8;
        case 0x2e8dacu: goto label_2e8dac;
        case 0x2e8db0u: goto label_2e8db0;
        case 0x2e8db4u: goto label_2e8db4;
        case 0x2e8db8u: goto label_2e8db8;
        case 0x2e8dbcu: goto label_2e8dbc;
        case 0x2e8dc0u: goto label_2e8dc0;
        case 0x2e8dc4u: goto label_2e8dc4;
        case 0x2e8dc8u: goto label_2e8dc8;
        case 0x2e8dccu: goto label_2e8dcc;
        case 0x2e8dd0u: goto label_2e8dd0;
        case 0x2e8dd4u: goto label_2e8dd4;
        case 0x2e8dd8u: goto label_2e8dd8;
        case 0x2e8ddcu: goto label_2e8ddc;
        case 0x2e8de0u: goto label_2e8de0;
        case 0x2e8de4u: goto label_2e8de4;
        case 0x2e8de8u: goto label_2e8de8;
        case 0x2e8decu: goto label_2e8dec;
        case 0x2e8df0u: goto label_2e8df0;
        case 0x2e8df4u: goto label_2e8df4;
        case 0x2e8df8u: goto label_2e8df8;
        case 0x2e8dfcu: goto label_2e8dfc;
        case 0x2e8e00u: goto label_2e8e00;
        case 0x2e8e04u: goto label_2e8e04;
        case 0x2e8e08u: goto label_2e8e08;
        case 0x2e8e0cu: goto label_2e8e0c;
        case 0x2e8e10u: goto label_2e8e10;
        case 0x2e8e14u: goto label_2e8e14;
        case 0x2e8e18u: goto label_2e8e18;
        case 0x2e8e1cu: goto label_2e8e1c;
        case 0x2e8e20u: goto label_2e8e20;
        case 0x2e8e24u: goto label_2e8e24;
        case 0x2e8e28u: goto label_2e8e28;
        case 0x2e8e2cu: goto label_2e8e2c;
        case 0x2e8e30u: goto label_2e8e30;
        case 0x2e8e34u: goto label_2e8e34;
        case 0x2e8e38u: goto label_2e8e38;
        case 0x2e8e3cu: goto label_2e8e3c;
        case 0x2e8e40u: goto label_2e8e40;
        case 0x2e8e44u: goto label_2e8e44;
        case 0x2e8e48u: goto label_2e8e48;
        case 0x2e8e4cu: goto label_2e8e4c;
        case 0x2e8e50u: goto label_2e8e50;
        case 0x2e8e54u: goto label_2e8e54;
        case 0x2e8e58u: goto label_2e8e58;
        case 0x2e8e5cu: goto label_2e8e5c;
        case 0x2e8e60u: goto label_2e8e60;
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8e68u: goto label_2e8e68;
        case 0x2e8e6cu: goto label_2e8e6c;
        case 0x2e8e70u: goto label_2e8e70;
        case 0x2e8e74u: goto label_2e8e74;
        case 0x2e8e78u: goto label_2e8e78;
        case 0x2e8e7cu: goto label_2e8e7c;
        case 0x2e8e80u: goto label_2e8e80;
        case 0x2e8e84u: goto label_2e8e84;
        case 0x2e8e88u: goto label_2e8e88;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8e90u: goto label_2e8e90;
        case 0x2e8e94u: goto label_2e8e94;
        case 0x2e8e98u: goto label_2e8e98;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8ea0u: goto label_2e8ea0;
        case 0x2e8ea4u: goto label_2e8ea4;
        case 0x2e8ea8u: goto label_2e8ea8;
        case 0x2e8eacu: goto label_2e8eac;
        case 0x2e8eb0u: goto label_2e8eb0;
        case 0x2e8eb4u: goto label_2e8eb4;
        case 0x2e8eb8u: goto label_2e8eb8;
        case 0x2e8ebcu: goto label_2e8ebc;
        case 0x2e8ec0u: goto label_2e8ec0;
        case 0x2e8ec4u: goto label_2e8ec4;
        case 0x2e8ec8u: goto label_2e8ec8;
        case 0x2e8eccu: goto label_2e8ecc;
        case 0x2e8ed0u: goto label_2e8ed0;
        case 0x2e8ed4u: goto label_2e8ed4;
        case 0x2e8ed8u: goto label_2e8ed8;
        case 0x2e8edcu: goto label_2e8edc;
        case 0x2e8ee0u: goto label_2e8ee0;
        case 0x2e8ee4u: goto label_2e8ee4;
        case 0x2e8ee8u: goto label_2e8ee8;
        case 0x2e8eecu: goto label_2e8eec;
        case 0x2e8ef0u: goto label_2e8ef0;
        case 0x2e8ef4u: goto label_2e8ef4;
        case 0x2e8ef8u: goto label_2e8ef8;
        case 0x2e8efcu: goto label_2e8efc;
        case 0x2e8f00u: goto label_2e8f00;
        case 0x2e8f04u: goto label_2e8f04;
        case 0x2e8f08u: goto label_2e8f08;
        case 0x2e8f0cu: goto label_2e8f0c;
        case 0x2e8f10u: goto label_2e8f10;
        case 0x2e8f14u: goto label_2e8f14;
        case 0x2e8f18u: goto label_2e8f18;
        case 0x2e8f1cu: goto label_2e8f1c;
        case 0x2e8f20u: goto label_2e8f20;
        case 0x2e8f24u: goto label_2e8f24;
        case 0x2e8f28u: goto label_2e8f28;
        case 0x2e8f2cu: goto label_2e8f2c;
        case 0x2e8f30u: goto label_2e8f30;
        case 0x2e8f34u: goto label_2e8f34;
        case 0x2e8f38u: goto label_2e8f38;
        case 0x2e8f3cu: goto label_2e8f3c;
        case 0x2e8f40u: goto label_2e8f40;
        case 0x2e8f44u: goto label_2e8f44;
        case 0x2e8f48u: goto label_2e8f48;
        case 0x2e8f4cu: goto label_2e8f4c;
        case 0x2e8f50u: goto label_2e8f50;
        case 0x2e8f54u: goto label_2e8f54;
        case 0x2e8f58u: goto label_2e8f58;
        case 0x2e8f5cu: goto label_2e8f5c;
        case 0x2e8f60u: goto label_2e8f60;
        case 0x2e8f64u: goto label_2e8f64;
        case 0x2e8f68u: goto label_2e8f68;
        case 0x2e8f6cu: goto label_2e8f6c;
        case 0x2e8f70u: goto label_2e8f70;
        case 0x2e8f74u: goto label_2e8f74;
        case 0x2e8f78u: goto label_2e8f78;
        case 0x2e8f7cu: goto label_2e8f7c;
        case 0x2e8f80u: goto label_2e8f80;
        case 0x2e8f84u: goto label_2e8f84;
        default: break;
    }

    ctx->pc = 0x2e8528u;

label_2e8528:
    // 0x2e8528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e852c:
    // 0x2e852c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2e8530:
    // 0x2e8530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8534:
    // 0x2e8534: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2e8538:
    // 0x2e8538: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2e8538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2e853c:
    // 0x2e853c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2e8540:
    // 0x2e8540: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e8540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8544:
    // 0x2e8544: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e8548:
    // 0x2e8548: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x2e8548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_2e854c:
    // 0x2e854c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2e8550:
    // 0x2e8550: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2e8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2e8554:
    // 0x2e8554: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e8558:
    // 0x2e8558: 0xc04952c  jal         func_1254B0
label_2e855c:
    if (ctx->pc == 0x2E855Cu) {
        ctx->pc = 0x2E855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8558u;
        // 0x2e855c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8560u;
        goto label_2e8560;
    }
    ctx->pc = 0x2E8558u;
    SET_GPR_U32(ctx, 31, 0x2E8560u);
    ctx->pc = 0x2E855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8558u;
    // 0x2e855c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B0u, 0x2E8558u, 0x2E8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8560u;
label_2e8560:
    // 0x2e8560: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e8564:
    if (ctx->pc == 0x2E8564u) {
        ctx->pc = 0x2E8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8560u;
        // 0x2e8564: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8568u;
        goto label_2e8568;
    }
    ctx->pc = 0x2E8560u;
    {
        const bool branch_taken_0x2e8560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8560u;
        // 0x2e8564: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8560) {
            ctx->pc = 0x2E8584u;
            goto label_2e8584;
        }
    }
    ctx->pc = 0x2E8568u;
label_2e8568:
    // 0x2e8568: 0xc0b9400  jal         func_2E5000
label_2e856c:
    if (ctx->pc == 0x2E856Cu) {
        ctx->pc = 0x2E856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8568u;
        // 0x2e856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8570u;
        goto label_2e8570;
    }
    ctx->pc = 0x2E8568u;
    SET_GPR_U32(ctx, 31, 0x2E8570u);
    ctx->pc = 0x2E856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8568u;
    // 0x2e856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2E8568u, 0x2E8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8570u;
label_2e8570:
    // 0x2e8570: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e8574:
    if (ctx->pc == 0x2E8574u) {
        ctx->pc = 0x2E8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8570u;
        // 0x2e8574: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8578u;
        goto label_2e8578;
    }
    ctx->pc = 0x2E8570u;
    {
        const bool branch_taken_0x2e8570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8570u;
        // 0x2e8574: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8570) {
            ctx->pc = 0x2E8584u;
            goto label_2e8584;
        }
    }
    ctx->pc = 0x2E8578u;
label_2e8578:
    // 0x2e8578: 0xc0b93fc  jal         func_2E4FF0
label_2e857c:
    if (ctx->pc == 0x2E857Cu) {
        ctx->pc = 0x2E857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8578u;
        // 0x2e857c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8580u;
        goto label_2e8580;
    }
    ctx->pc = 0x2E8578u;
    SET_GPR_U32(ctx, 31, 0x2E8580u);
    ctx->pc = 0x2E857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8578u;
    // 0x2e857c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF0u, 0x2E8578u, 0x2E8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8580u;
label_2e8580:
    // 0x2e8580: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e8580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2e8584:
    // 0x2e8584: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2e8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_2e8588:
    // 0x2e8588: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e858c:
    // 0x2e858c: 0x54400274  bnel        $v0, $zero, . + 4 + (0x274 << 2)
label_2e8590:
    if (ctx->pc == 0x2E8590u) {
        ctx->pc = 0x2E8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E858Cu;
        // 0x2e8590: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8594u;
        goto label_2e8594;
    }
    ctx->pc = 0x2E858Cu;
    {
        const bool branch_taken_0x2e858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e858c) {
            ctx->pc = 0x2E8590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E858Cu;
            // 0x2e8590: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F60u;
            goto label_2e8f60;
        }
    }
    ctx->pc = 0x2E8594u;
label_2e8594:
    // 0x2e8594: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2e8598:
    // 0x2e8598: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e8598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e859c:
    // 0x2e859c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2e85a0:
    if (ctx->pc == 0x2E85A0u) {
        ctx->pc = 0x2E85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E859Cu;
        // 0x2e85a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85A4u;
        goto label_2e85a4;
    }
    ctx->pc = 0x2E859Cu;
    {
        const bool branch_taken_0x2e859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E859Cu;
        // 0x2e85a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e859c) {
            ctx->pc = 0x2E85CCu;
            goto label_2e85cc;
        }
    }
    ctx->pc = 0x2E85A4u;
label_2e85a4:
    // 0x2e85a4: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2e85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
label_2e85a8:
    // 0x2e85a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e85ac:
    if (ctx->pc == 0x2E85ACu) {
        ctx->pc = 0x2E85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85A8u;
        // 0x2e85ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85B0u;
        goto label_2e85b0;
    }
    ctx->pc = 0x2E85A8u;
    {
        const bool branch_taken_0x2e85a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85A8u;
        // 0x2e85ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85a8) {
            ctx->pc = 0x2E85C0u;
            goto label_2e85c0;
        }
    }
    ctx->pc = 0x2E85B0u;
label_2e85b0:
    // 0x2e85b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2e85b4:
    // 0x2e85b4: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2e85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
label_2e85b8:
    // 0x2e85b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e85bc:
    // 0x2e85bc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2e85bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e85c0:
    // 0x2e85c0: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_2e85c4:
    if (ctx->pc == 0x2E85C4u) {
        ctx->pc = 0x2E85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85C0u;
        // 0x2e85c4: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85C8u;
        goto label_2e85c8;
    }
    ctx->pc = 0x2E85C0u;
    {
        const bool branch_taken_0x2e85c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e85c0) {
            ctx->pc = 0x2E85C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E85C0u;
            // 0x2e85c4: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E866Cu;
            goto label_2e866c;
        }
    }
    ctx->pc = 0x2E85C8u;
label_2e85c8:
    // 0x2e85c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e85cc:
    // 0x2e85cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e85ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e85d0:
    // 0x2e85d0: 0xc08f672  jal         func_23D9C8
label_2e85d4:
    if (ctx->pc == 0x2E85D4u) {
        ctx->pc = 0x2E85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D0u;
        // 0x2e85d4: 0xc45496b4  lwc1        $f20, -0x694C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85D8u;
        goto label_2e85d8;
    }
    ctx->pc = 0x2E85D0u;
    SET_GPR_U32(ctx, 31, 0x2E85D8u);
    ctx->pc = 0x2E85D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85D0u;
    // 0x2e85d4: 0xc45496b4  lwc1        $f20, -0x694C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2E85D0u, 0x2E85D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85D8u;
label_2e85d8:
    // 0x2e85d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2e85dc:
    if (ctx->pc == 0x2E85DCu) {
        ctx->pc = 0x2E85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D8u;
        // 0x2e85dc: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85E0u;
        goto label_2e85e0;
    }
    ctx->pc = 0x2E85D8u;
    {
        const bool branch_taken_0x2e85d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e85d8) {
            ctx->pc = 0x2E85DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E85D8u;
            // 0x2e85dc: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E85F0u;
            goto label_2e85f0;
        }
    }
    ctx->pc = 0x2E85E0u;
label_2e85e0:
    // 0x2e85e0: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2e85e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
label_2e85e4:
    // 0x2e85e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e85e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e85e8:
    // 0x2e85e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e85ec:
    if (ctx->pc == 0x2E85ECu) {
        ctx->pc = 0x2E85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E8u;
        // 0x2e85ec: 0xc60111d4  lwc1        $f1, 0x11D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85F0u;
        goto label_2e85f0;
    }
    ctx->pc = 0x2E85E8u;
    {
        const bool branch_taken_0x2e85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E8u;
        // 0x2e85ec: 0xc60111d4  lwc1        $f1, 0x11D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85e8) {
            ctx->pc = 0x2E860Cu;
            goto label_2e860c;
        }
    }
    ctx->pc = 0x2E85F0u;
label_2e85f0:
    // 0x2e85f0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2e85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2e85f4:
    // 0x2e85f4: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x2e85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
label_2e85f8:
    // 0x2e85f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e85f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e85fc:
    // 0x2e85fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8600:
    if (ctx->pc == 0x2E8600u) {
        ctx->pc = 0x2E8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85FCu;
        // 0x2e8600: 0xc60111d4  lwc1        $f1, 0x11D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8604u;
        goto label_2e8604;
    }
    ctx->pc = 0x2E85FCu;
    {
        const bool branch_taken_0x2e85fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85FCu;
        // 0x2e8600: 0xc60111d4  lwc1        $f1, 0x11D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85fc) {
            ctx->pc = 0x2E860Cu;
            goto label_2e860c;
        }
    }
    ctx->pc = 0x2E8604u;
label_2e8604:
    // 0x2e8604: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x2e8604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_2e8608:
    // 0x2e8608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e8608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e860c:
    // 0x2e860c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e8610:
    // 0x2e8610: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2e8610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8614:
    // 0x2e8614: 0x0  nop
    ctx->pc = 0x2e8614u;
    // NOP
label_2e8618:
    // 0x2e8618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e861c:
    if (ctx->pc == 0x2E861Cu) {
        ctx->pc = 0x2E861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8618u;
        // 0x2e861c: 0xc44096b8  lwc1        $f0, -0x6948($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8620u;
        goto label_2e8620;
    }
    ctx->pc = 0x2E8618u;
    {
        const bool branch_taken_0x2e8618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8618u;
        // 0x2e861c: 0xc44096b8  lwc1        $f0, -0x6948($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8618) {
            ctx->pc = 0x2E8628u;
            goto label_2e8628;
        }
    }
    ctx->pc = 0x2E8620u;
label_2e8620:
    // 0x2e8620: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e8624:
    if (ctx->pc == 0x2E8624u) {
        ctx->pc = 0x2E8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8620u;
        // 0x2e8624: 0xe61411d4  swc1        $f20, 0x11D4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8628u;
        goto label_2e8628;
    }
    ctx->pc = 0x2E8620u;
    {
        const bool branch_taken_0x2e8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8620u;
        // 0x2e8624: 0xe61411d4  swc1        $f20, 0x11D4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8620) {
            ctx->pc = 0x2E8638u;
            goto label_2e8638;
        }
    }
    ctx->pc = 0x2E8628u;
label_2e8628:
    // 0x2e8628: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e8628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e862c:
    // 0x2e862c: 0x0  nop
    ctx->pc = 0x2e862cu;
    // NOP
label_2e8630:
    // 0x2e8630: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e8634:
    if (ctx->pc == 0x2E8634u) {
        ctx->pc = 0x2E8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8630u;
        // 0x2e8634: 0xe60011d4  swc1        $f0, 0x11D4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8638u;
        goto label_2e8638;
    }
    ctx->pc = 0x2E8630u;
    {
        const bool branch_taken_0x2e8630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8630) {
            ctx->pc = 0x2E8634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8630u;
            // 0x2e8634: 0xe60011d4  swc1        $f0, 0x11D4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8638u;
            goto label_2e8638;
        }
    }
    ctx->pc = 0x2E8638u;
label_2e8638:
    // 0x2e8638: 0xc0899bc  jal         func_2266F0
label_2e863c:
    if (ctx->pc == 0x2E863Cu) {
        ctx->pc = 0x2E863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8638u;
        // 0x2e863c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8640u;
        goto label_2e8640;
    }
    ctx->pc = 0x2E8638u;
    SET_GPR_U32(ctx, 31, 0x2E8640u);
    ctx->pc = 0x2E863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8638u;
    // 0x2e863c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E8638u, 0x2E8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8640u;
label_2e8640:
    // 0x2e8640: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2e8644:
    if (ctx->pc == 0x2E8644u) {
        ctx->pc = 0x2E8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8640u;
        // 0x2e8644: 0xc60011d4  lwc1        $f0, 0x11D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8648u;
        goto label_2e8648;
    }
    ctx->pc = 0x2E8640u;
    {
        const bool branch_taken_0x2e8640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8640) {
            ctx->pc = 0x2E8644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8640u;
            // 0x2e8644: 0xc60011d4  lwc1        $f0, 0x11D4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8668u;
            goto label_2e8668;
        }
    }
    ctx->pc = 0x2E8648u;
label_2e8648:
    // 0x2e8648: 0xc0899bc  jal         func_2266F0
label_2e864c:
    if (ctx->pc == 0x2E864Cu) {
        ctx->pc = 0x2E864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8648u;
        // 0x2e864c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8650u;
        goto label_2e8650;
    }
    ctx->pc = 0x2E8648u;
    SET_GPR_U32(ctx, 31, 0x2E8650u);
    ctx->pc = 0x2E864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8648u;
    // 0x2e864c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E8648u, 0x2E8650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8650u;
label_2e8650:
    // 0x2e8650: 0xc097f26  jal         func_25FC98
label_2e8654:
    if (ctx->pc == 0x2E8654u) {
        ctx->pc = 0x2E8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8650u;
        // 0x2e8654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8658u;
        goto label_2e8658;
    }
    ctx->pc = 0x2E8650u;
    SET_GPR_U32(ctx, 31, 0x2E8658u);
    ctx->pc = 0x2E8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8650u;
    // 0x2e8654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E8650u, 0x2E8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8658u;
label_2e8658:
    // 0x2e8658: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2e8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2e865c:
    // 0x2e865c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_2e8660:
    if (ctx->pc == 0x2E8660u) {
        ctx->pc = 0x2E8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E865Cu;
        // 0x2e8660: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8664u;
        goto label_2e8664;
    }
    ctx->pc = 0x2E865Cu;
    {
        const bool branch_taken_0x2e865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e865c) {
            ctx->pc = 0x2E8660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E865Cu;
            // 0x2e8660: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8670u;
            goto label_2e8670;
        }
    }
    ctx->pc = 0x2E8664u;
label_2e8664:
    // 0x2e8664: 0xc60011d4  lwc1        $f0, 0x11D4($s0)
    ctx->pc = 0x2e8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8668:
    // 0x2e8668: 0xe600039c  swc1        $f0, 0x39C($s0)
    ctx->pc = 0x2e8668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_2e866c:
    // 0x2e866c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x2e866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8670:
    // 0x2e8670: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e8670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e8674:
    // 0x2e8674: 0x0  nop
    ctx->pc = 0x2e8674u;
    // NOP
label_2e8678:
    // 0x2e8678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e8678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e867c:
    // 0x2e867c: 0x0  nop
    ctx->pc = 0x2e867cu;
    // NOP
label_2e8680:
    // 0x2e8680: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2e8684:
    if (ctx->pc == 0x2E8684u) {
        ctx->pc = 0x2E8688u;
        goto label_2e8688;
    }
    ctx->pc = 0x2E8680u;
    {
        const bool branch_taken_0x2e8680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8680) {
            ctx->pc = 0x2E86D4u;
            goto label_2e86d4;
        }
    }
    ctx->pc = 0x2E8688u;
label_2e8688:
    // 0x2e8688: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e868c:
    // 0x2e868c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e868cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e8690:
    // 0x2e8690: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2e8694:
    if (ctx->pc == 0x2E8694u) {
        ctx->pc = 0x2E8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8690u;
        // 0x2e8694: 0x8e02121c  lw          $v0, 0x121C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8698u;
        goto label_2e8698;
    }
    ctx->pc = 0x2E8690u;
    {
        const bool branch_taken_0x2e8690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8690) {
            ctx->pc = 0x2E8694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8690u;
            // 0x2e8694: 0x8e02121c  lw          $v0, 0x121C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86A8u;
            goto label_2e86a8;
        }
    }
    ctx->pc = 0x2E8698u;
label_2e8698:
    // 0x2e8698: 0xc0bd68e  jal         func_2F5A38
label_2e869c:
    if (ctx->pc == 0x2E869Cu) {
        ctx->pc = 0x2E869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8698u;
        // 0x2e869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86A0u;
        goto label_2e86a0;
    }
    ctx->pc = 0x2E8698u;
    SET_GPR_U32(ctx, 31, 0x2E86A0u);
    ctx->pc = 0x2E869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8698u;
    // 0x2e869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5A38u, 0x2E8698u, 0x2E86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86A0u;
label_2e86a0:
    // 0x2e86a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e86a4:
    if (ctx->pc == 0x2E86A4u) {
        ctx->pc = 0x2E86A8u;
        goto label_2e86a8;
    }
    ctx->pc = 0x2E86A0u;
    {
        const bool branch_taken_0x2e86a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86a0) {
            ctx->pc = 0x2E86DCu;
            goto label_2e86dc;
        }
    }
    ctx->pc = 0x2E86A8u;
label_2e86a8:
    // 0x2e86a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2e86ac:
    if (ctx->pc == 0x2E86ACu) {
        ctx->pc = 0x2E86B0u;
        goto label_2e86b0;
    }
    ctx->pc = 0x2E86A8u;
    {
        const bool branch_taken_0x2e86a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86a8) {
            ctx->pc = 0x2E86DCu;
            goto label_2e86dc;
        }
    }
    ctx->pc = 0x2E86B0u;
label_2e86b0:
    // 0x2e86b0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2e86b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e86b4:
    // 0x2e86b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e86b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e86b8:
    // 0x2e86b8: 0x0  nop
    ctx->pc = 0x2e86b8u;
    // NOP
label_2e86bc:
    // 0x2e86bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2e86c0:
    if (ctx->pc == 0x2E86C0u) {
        ctx->pc = 0x2E86C4u;
        goto label_2e86c4;
    }
    ctx->pc = 0x2E86BCu;
    {
        const bool branch_taken_0x2e86bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e86bc) {
            ctx->pc = 0x2E86DCu;
            goto label_2e86dc;
        }
    }
    ctx->pc = 0x2E86C4u;
label_2e86c4:
    // 0x2e86c4: 0xc0bd62c  jal         func_2F58B0
label_2e86c8:
    if (ctx->pc == 0x2E86C8u) {
        ctx->pc = 0x2E86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86C4u;
        // 0x2e86c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86CCu;
        goto label_2e86cc;
    }
    ctx->pc = 0x2E86C4u;
    SET_GPR_U32(ctx, 31, 0x2E86CCu);
    ctx->pc = 0x2E86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86C4u;
    // 0x2e86c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2E86C4u, 0x2E86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86CCu;
label_2e86cc:
    // 0x2e86cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e86d0:
    if (ctx->pc == 0x2E86D0u) {
        ctx->pc = 0x2E86D4u;
        goto label_2e86d4;
    }
    ctx->pc = 0x2E86CCu;
    {
        const bool branch_taken_0x2e86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86cc) {
            ctx->pc = 0x2E86DCu;
            goto label_2e86dc;
        }
    }
    ctx->pc = 0x2E86D4u;
label_2e86d4:
    // 0x2e86d4: 0xc0bd62c  jal         func_2F58B0
label_2e86d8:
    if (ctx->pc == 0x2E86D8u) {
        ctx->pc = 0x2E86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D4u;
        // 0x2e86d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86DCu;
        goto label_2e86dc;
    }
    ctx->pc = 0x2E86D4u;
    SET_GPR_U32(ctx, 31, 0x2E86DCu);
    ctx->pc = 0x2E86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86D4u;
    // 0x2e86d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2E86D4u, 0x2E86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86DCu;
label_2e86dc:
    // 0x2e86dc: 0xc0a03d8  jal         func_280F60
label_2e86e0:
    if (ctx->pc == 0x2E86E0u) {
        ctx->pc = 0x2E86E4u;
        goto label_2e86e4;
    }
    ctx->pc = 0x2E86DCu;
    SET_GPR_U32(ctx, 31, 0x2E86E4u);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x2E86DCu, 0x2E86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86E4u;
label_2e86e4:
    // 0x2e86e4: 0xc0a03d4  jal         func_280F50
label_2e86e8:
    if (ctx->pc == 0x2E86E8u) {
        ctx->pc = 0x2E86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86E4u;
        // 0x2e86e8: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86ECu;
        goto label_2e86ec;
    }
    ctx->pc = 0x2E86E4u;
    SET_GPR_U32(ctx, 31, 0x2E86ECu);
    ctx->pc = 0x2E86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86E4u;
    // 0x2e86e8: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F50u, 0x2E86E4u, 0x2E86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86ECu;
label_2e86ec:
    // 0x2e86ec: 0xc0a03bc  jal         func_280EF0
label_2e86f0:
    if (ctx->pc == 0x2E86F0u) {
        ctx->pc = 0x2E86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86ECu;
        // 0x2e86f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86F4u;
        goto label_2e86f4;
    }
    ctx->pc = 0x2E86ECu;
    SET_GPR_U32(ctx, 31, 0x2E86F4u);
    ctx->pc = 0x2E86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86ECu;
    // 0x2e86f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x2E86ECu, 0x2E86F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86F4u;
label_2e86f4:
    // 0x2e86f4: 0xc0a03dc  jal         func_280F70
label_2e86f8:
    if (ctx->pc == 0x2E86F8u) {
        ctx->pc = 0x2E86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86F4u;
        // 0x2e86f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86FCu;
        goto label_2e86fc;
    }
    ctx->pc = 0x2E86F4u;
    SET_GPR_U32(ctx, 31, 0x2E86FCu);
    ctx->pc = 0x2E86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86F4u;
    // 0x2e86f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F70u, 0x2E86F4u, 0x2E86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86FCu;
label_2e86fc:
    // 0x2e86fc: 0xa20010dc  sb          $zero, 0x10DC($s0)
    ctx->pc = 0x2e86fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4316), (uint8_t)GPR_U32(ctx, 0));
label_2e8700:
    // 0x2e8700: 0xc094516  jal         func_251458
label_2e8704:
    if (ctx->pc == 0x2E8704u) {
        ctx->pc = 0x2E8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8700u;
        // 0x2e8704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8708u;
        goto label_2e8708;
    }
    ctx->pc = 0x2E8700u;
    SET_GPR_U32(ctx, 31, 0x2E8708u);
    ctx->pc = 0x2E8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8700u;
    // 0x2e8704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251458u, 0x2E8700u, 0x2E8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8708u;
label_2e8708:
    // 0x2e8708: 0xde0210d8  ld          $v0, 0x10D8($s0)
    ctx->pc = 0x2e8708u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4312)));
label_2e870c:
    // 0x2e870c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2e8710:
    // 0x2e8710: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e8710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2e8714:
    // 0x2e8714: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e8714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e8718:
    // 0x2e8718: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x2e8718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
label_2e871c:
    // 0x2e871c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8720:
    // 0x2e8720: 0x54440012  bnel        $v0, $a0, . + 4 + (0x12 << 2)
label_2e8724:
    if (ctx->pc == 0x2E8724u) {
        ctx->pc = 0x2E8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8720u;
        // 0x2e8724: 0x920210dc  lbu         $v0, 0x10DC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8728u;
        goto label_2e8728;
    }
    ctx->pc = 0x2E8720u;
    {
        const bool branch_taken_0x2e8720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8720) {
            ctx->pc = 0x2E8724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8720u;
            // 0x2e8724: 0x920210dc  lbu         $v0, 0x10DC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E876Cu;
            goto label_2e876c;
        }
    }
    ctx->pc = 0x2E8728u;
label_2e8728:
    // 0x2e8728: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e8728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e872c:
    // 0x2e872c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e872cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e8730:
    // 0x2e8730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8734:
    // 0x2e8734: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2e8738:
    // 0x2e8738: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e8738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e873c:
    // 0x2e873c: 0xc0bff42  jal         func_2FFD08
label_2e8740:
    if (ctx->pc == 0x2E8740u) {
        ctx->pc = 0x2E8744u;
        goto label_2e8744;
    }
    ctx->pc = 0x2E873Cu;
    SET_GPR_U32(ctx, 31, 0x2E8744u);
    ctx->pc = 0x2FFD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD08u, 0x2E873Cu, 0x2E8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8744u;
label_2e8744:
    // 0x2e8744: 0xc0899bc  jal         func_2266F0
label_2e8748:
    if (ctx->pc == 0x2E8748u) {
        ctx->pc = 0x2E8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8744u;
        // 0x2e8748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E874Cu;
        goto label_2e874c;
    }
    ctx->pc = 0x2E8744u;
    SET_GPR_U32(ctx, 31, 0x2E874Cu);
    ctx->pc = 0x2E8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8744u;
    // 0x2e8748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E8744u, 0x2E874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E874Cu;
label_2e874c:
    // 0x2e874c: 0xc097f76  jal         func_25FDD8
label_2e8750:
    if (ctx->pc == 0x2E8750u) {
        ctx->pc = 0x2E8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E874Cu;
        // 0x2e8750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8754u;
        goto label_2e8754;
    }
    ctx->pc = 0x2E874Cu;
    SET_GPR_U32(ctx, 31, 0x2E8754u);
    ctx->pc = 0x2E8750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E874Cu;
    // 0x2e8750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x2E874Cu, 0x2E8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8754u;
label_2e8754:
    // 0x2e8754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e8758:
    if (ctx->pc == 0x2E8758u) {
        ctx->pc = 0x2E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8754u;
        // 0x2e8758: 0x2403bfff  addiu       $v1, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E875Cu;
        goto label_2e875c;
    }
    ctx->pc = 0x2E8754u;
    {
        const bool branch_taken_0x2e8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8754u;
        // 0x2e8758: 0x2403bfff  addiu       $v1, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8754) {
            ctx->pc = 0x2E8768u;
            goto label_2e8768;
        }
    }
    ctx->pc = 0x2E875Cu;
label_2e875c:
    // 0x2e875c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e8760:
    // 0x2e8760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8764:
    // 0x2e8764: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
label_2e8768:
    // 0x2e8768: 0x920210dc  lbu         $v0, 0x10DC($s0)
    ctx->pc = 0x2e8768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4316)));
label_2e876c:
    // 0x2e876c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2e876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2e8770:
    // 0x2e8770: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2e8770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e8774:
    // 0x2e8774: 0xa20210dd  sb          $v0, 0x10DD($s0)
    ctx->pc = 0x2e8774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4317), (uint8_t)GPR_U32(ctx, 2));
label_2e8778:
    // 0x2e8778: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x2e8778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
label_2e877c:
    // 0x2e877c: 0x9062027d  lbu         $v0, 0x27D($v1)
    ctx->pc = 0x2e877cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 637)));
label_2e8780:
    // 0x2e8780: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_2e8784:
    if (ctx->pc == 0x2E8784u) {
        ctx->pc = 0x2E8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8780u;
        // 0x2e8784: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8788u;
        goto label_2e8788;
    }
    ctx->pc = 0x2E8780u;
    {
        const bool branch_taken_0x2e8780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8780u;
        // 0x2e8784: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8780) {
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E8788u;
label_2e8788:
    // 0x2e8788: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x2e8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e878c:
    // 0x2e878c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e878cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e8790:
    // 0x2e8790: 0x0  nop
    ctx->pc = 0x2e8790u;
    // NOP
label_2e8794:
    // 0x2e8794: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e8794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8798:
    // 0x2e8798: 0x0  nop
    ctx->pc = 0x2e8798u;
    // NOP
label_2e879c:
    // 0x2e879c: 0x45000049  bc1f        . + 4 + (0x49 << 2)
label_2e87a0:
    if (ctx->pc == 0x2E87A0u) {
        ctx->pc = 0x2E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E879Cu;
        // 0x2e87a0: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87A4u;
        goto label_2e87a4;
    }
    ctx->pc = 0x2E879Cu;
    {
        const bool branch_taken_0x2e879c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E879Cu;
        // 0x2e87a0: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e879c) {
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E87A4u;
label_2e87a4:
    // 0x2e87a4: 0x2471cb28  addiu       $s1, $v1, -0x34D8
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
label_2e87a8:
    // 0x2e87a8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e87ac:
    // 0x2e87ac: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2e87b0:
    if (ctx->pc == 0x2E87B0u) {
        ctx->pc = 0x2E87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87ACu;
        // 0x2e87b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87B4u;
        goto label_2e87b4;
    }
    ctx->pc = 0x2E87ACu;
    {
        const bool branch_taken_0x2e87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87ACu;
        // 0x2e87b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87ac) {
            ctx->pc = 0x2E885Cu;
            goto label_2e885c;
        }
    }
    ctx->pc = 0x2E87B4u;
label_2e87b4:
    // 0x2e87b4: 0xc60310c0  lwc1        $f3, 0x10C0($s0)
    ctx->pc = 0x2e87b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e87b8:
    // 0x2e87b8: 0xc6021260  lwc1        $f2, 0x1260($s0)
    ctx->pc = 0x2e87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e87bc:
    // 0x2e87bc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2e87bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e87c0:
    // 0x2e87c0: 0x0  nop
    ctx->pc = 0x2e87c0u;
    // NOP
label_2e87c4:
    // 0x2e87c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2e87c8:
    if (ctx->pc == 0x2E87C8u) {
        ctx->pc = 0x2E87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87C4u;
        // 0x2e87c8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87CCu;
        goto label_2e87cc;
    }
    ctx->pc = 0x2E87C4u;
    {
        const bool branch_taken_0x2e87c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87C4u;
        // 0x2e87c8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87c4) {
            ctx->pc = 0x2E87ECu;
            goto label_2e87ec;
        }
    }
    ctx->pc = 0x2E87CCu;
label_2e87cc:
    // 0x2e87cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e87d0:
    // 0x2e87d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e87d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e87d4:
    // 0x2e87d4: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e87d8:
    // 0x2e87d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e87d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e87dc:
    // 0x2e87dc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e87dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e87e0:
    // 0x2e87e0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e87e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e87e4:
    // 0x2e87e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e87e8:
    if (ctx->pc == 0x2E87E8u) {
        ctx->pc = 0x2E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E4u;
        // 0x2e87e8: 0xe6001260  swc1        $f0, 0x1260($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87ECu;
        goto label_2e87ec;
    }
    ctx->pc = 0x2E87E4u;
    {
        const bool branch_taken_0x2e87e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E4u;
        // 0x2e87e8: 0xe6001260  swc1        $f0, 0x1260($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87e4) {
            ctx->pc = 0x2E8818u;
            goto label_2e8818;
        }
    }
    ctx->pc = 0x2E87ECu;
label_2e87ec:
    // 0x2e87ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2e87ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e87f0:
    // 0x2e87f0: 0x0  nop
    ctx->pc = 0x2e87f0u;
    // NOP
label_2e87f4:
    // 0x2e87f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2e87f8:
    if (ctx->pc == 0x2E87F8u) {
        ctx->pc = 0x2E87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87F4u;
        // 0x2e87f8: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87FCu;
        goto label_2e87fc;
    }
    ctx->pc = 0x2E87F4u;
    {
        const bool branch_taken_0x2e87f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87F4u;
        // 0x2e87f8: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87f4) {
            ctx->pc = 0x2E8820u;
            goto label_2e8820;
        }
    }
    ctx->pc = 0x2E87FCu;
label_2e87fc:
    // 0x2e87fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e87fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e8800:
    // 0x2e8800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e8800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e8804:
    // 0x2e8804: 0x0  nop
    ctx->pc = 0x2e8804u;
    // NOP
label_2e8808:
    // 0x2e8808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e880c:
    // 0x2e880c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2e880cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2e8810:
    // 0x2e8810: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e8810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8814:
    // 0x2e8814: 0xe6001260  swc1        $f0, 0x1260($s0)
    ctx->pc = 0x2e8814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
label_2e8818:
    // 0x2e8818: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e881c:
    if (ctx->pc == 0x2E881Cu) {
        ctx->pc = 0x2E881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8818u;
        // 0x2e881c: 0xe6031260  swc1        $f3, 0x1260($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8820u;
        goto label_2e8820;
    }
    ctx->pc = 0x2E8818u;
    {
        const bool branch_taken_0x2e8818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8818) {
            ctx->pc = 0x2E881Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8818u;
            // 0x2e881c: 0xe6031260  swc1        $f3, 0x1260($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8820u;
            goto label_2e8820;
        }
    }
    ctx->pc = 0x2E8820u;
label_2e8820:
    // 0x2e8820: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e8824:
    // 0x2e8824: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2e8828:
    // 0x2e8828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e882c:
    // 0x2e882c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2e8830:
    if (ctx->pc == 0x2E8830u) {
        ctx->pc = 0x2E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E882Cu;
        // 0x2e8830: 0x2482cb28  addiu       $v0, $a0, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8834u;
        goto label_2e8834;
    }
    ctx->pc = 0x2E882Cu;
    {
        const bool branch_taken_0x2e882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E882Cu;
        // 0x2e8830: 0x2482cb28  addiu       $v0, $a0, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e882c) {
            ctx->pc = 0x2E8844u;
            goto label_2e8844;
        }
    }
    ctx->pc = 0x2E8834u;
label_2e8834:
    // 0x2e8834: 0x2483cb28  addiu       $v1, $a0, -0x34D8
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953768));
label_2e8838:
    // 0x2e8838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e883c:
    // 0x2e883c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e8840:
    if (ctx->pc == 0x2E8840u) {
        ctx->pc = 0x2E8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E883Cu;
        // 0x2e8840: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8844u;
        goto label_2e8844;
    }
    ctx->pc = 0x2E883Cu;
    {
        const bool branch_taken_0x2e883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E883Cu;
        // 0x2e8840: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e883c) {
            ctx->pc = 0x2E8848u;
            goto label_2e8848;
        }
    }
    ctx->pc = 0x2E8844u;
label_2e8844:
    // 0x2e8844: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2e8844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_2e8848:
    // 0x2e8848: 0xc60c1260  lwc1        $f12, 0x1260($s0)
    ctx->pc = 0x2e8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e884c:
    // 0x2e884c: 0xc0a03c4  jal         func_280F10
label_2e8850:
    if (ctx->pc == 0x2E8850u) {
        ctx->pc = 0x2E8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E884Cu;
        // 0x2e8850: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8854u;
        goto label_2e8854;
    }
    ctx->pc = 0x2E884Cu;
    SET_GPR_U32(ctx, 31, 0x2E8854u);
    ctx->pc = 0x2E8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E884Cu;
    // 0x2e8850: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F10u, 0x2E884Cu, 0x2E8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8854u;
label_2e8854:
    // 0x2e8854: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2e8858:
    if (ctx->pc == 0x2E8858u) {
        ctx->pc = 0x2E885Cu;
        goto label_2e885c;
    }
    ctx->pc = 0x2E8854u;
    {
        const bool branch_taken_0x2e8854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8854) {
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E885Cu;
label_2e885c:
    // 0x2e885c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2e885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
label_2e8860:
    // 0x2e8860: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_2e8864:
    if (ctx->pc == 0x2E8864u) {
        ctx->pc = 0x2E8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8860u;
        // 0x2e8864: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8868u;
        goto label_2e8868;
    }
    ctx->pc = 0x2E8860u;
    {
        const bool branch_taken_0x2e8860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8860) {
            ctx->pc = 0x2E8864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8860u;
            // 0x2e8864: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E8868u;
label_2e8868:
    // 0x2e8868: 0xc08dab6  jal         func_236AD8
label_2e886c:
    if (ctx->pc == 0x2E886Cu) {
        ctx->pc = 0x2E886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8868u;
        // 0x2e886c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8870u;
        goto label_2e8870;
    }
    ctx->pc = 0x2E8868u;
    SET_GPR_U32(ctx, 31, 0x2E8870u);
    ctx->pc = 0x2E886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8868u;
    // 0x2e886c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2E8868u, 0x2E8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8870u;
label_2e8870:
    // 0x2e8870: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2e8874:
    if (ctx->pc == 0x2E8874u) {
        ctx->pc = 0x2E8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8870u;
        // 0x2e8874: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8878u;
        goto label_2e8878;
    }
    ctx->pc = 0x2E8870u;
    {
        const bool branch_taken_0x2e8870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8870u;
        // 0x2e8874: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8870) {
            ctx->pc = 0x2E88C0u;
            goto label_2e88c0;
        }
    }
    ctx->pc = 0x2E8878u;
label_2e8878:
    // 0x2e8878: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e887c:
    // 0x2e887c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8880:
    // 0x2e8880: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_2e8884:
    if (ctx->pc == 0x2E8884u) {
        ctx->pc = 0x2E8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8880u;
        // 0x2e8884: 0x8e82be30  lw          $v0, -0x41D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8888u;
        goto label_2e8888;
    }
    ctx->pc = 0x2E8880u;
    {
        const bool branch_taken_0x2e8880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8880u;
        // 0x2e8884: 0x8e82be30  lw          $v0, -0x41D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8880) {
            ctx->pc = 0x2E88C0u;
            goto label_2e88c0;
        }
    }
    ctx->pc = 0x2E8888u;
label_2e8888:
    // 0x2e8888: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2e888c:
    if (ctx->pc == 0x2E888Cu) {
        ctx->pc = 0x2E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8888u;
        // 0x2e888c: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8890u;
        goto label_2e8890;
    }
    ctx->pc = 0x2E8888u;
    {
        const bool branch_taken_0x2e8888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8888) {
            ctx->pc = 0x2E888Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8888u;
            // 0x2e888c: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E8890u;
label_2e8890:
    // 0x2e8890: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e8890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e8894:
    // 0x2e8894: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_2e8898:
    // 0x2e8898: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2e889c:
    if (ctx->pc == 0x2E889Cu) {
        ctx->pc = 0x2E889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8898u;
        // 0x2e889c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88A0u;
        goto label_2e88a0;
    }
    ctx->pc = 0x2E8898u;
    {
        const bool branch_taken_0x2e8898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8898u;
        // 0x2e889c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8898) {
            ctx->pc = 0x2E88C0u;
            goto label_2e88c0;
        }
    }
    ctx->pc = 0x2E88A0u;
label_2e88a0:
    // 0x2e88a0: 0xe6141260  swc1        $f20, 0x1260($s0)
    ctx->pc = 0x2e88a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4704), bits); }
label_2e88a4:
    // 0x2e88a4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2e88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2e88a8:
    // 0x2e88a8: 0xc0a03c4  jal         func_280F10
label_2e88ac:
    if (ctx->pc == 0x2E88ACu) {
        ctx->pc = 0x2E88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88A8u;
        // 0x2e88ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88B0u;
        goto label_2e88b0;
    }
    ctx->pc = 0x2E88A8u;
    SET_GPR_U32(ctx, 31, 0x2E88B0u);
    ctx->pc = 0x2E88ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88A8u;
    // 0x2e88ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F10u, 0x2E88A8u, 0x2E88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88B0u;
label_2e88b0:
    // 0x2e88b0: 0xc0a03bc  jal         func_280EF0
label_2e88b4:
    if (ctx->pc == 0x2E88B4u) {
        ctx->pc = 0x2E88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88B0u;
        // 0x2e88b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88B8u;
        goto label_2e88b8;
    }
    ctx->pc = 0x2E88B0u;
    SET_GPR_U32(ctx, 31, 0x2E88B8u);
    ctx->pc = 0x2E88B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88B0u;
    // 0x2e88b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x2E88B0u, 0x2E88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88B8u;
label_2e88b8:
    // 0x2e88b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e88bc:
    if (ctx->pc == 0x2E88BCu) {
        ctx->pc = 0x2E88C0u;
        goto label_2e88c0;
    }
    ctx->pc = 0x2E88B8u;
    {
        const bool branch_taken_0x2e88b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88b8) {
            ctx->pc = 0x2E88C4u;
            goto label_2e88c4;
        }
    }
    ctx->pc = 0x2E88C0u;
label_2e88c0:
    // 0x2e88c0: 0xae001260  sw          $zero, 0x1260($s0)
    ctx->pc = 0x2e88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
label_2e88c4:
    // 0x2e88c4: 0xc0a03d8  jal         func_280F60
label_2e88c8:
    if (ctx->pc == 0x2E88C8u) {
        ctx->pc = 0x2E88CCu;
        goto label_2e88cc;
    }
    ctx->pc = 0x2E88C4u;
    SET_GPR_U32(ctx, 31, 0x2E88CCu);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x2E88C4u, 0x2E88CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88CCu;
label_2e88cc:
    // 0x2e88cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e88d0:
    // 0x2e88d0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2e88d4:
    if (ctx->pc == 0x2E88D4u) {
        ctx->pc = 0x2E88D8u;
        goto label_2e88d8;
    }
    ctx->pc = 0x2E88D0u;
    {
        const bool branch_taken_0x2e88d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e88d0) {
            ctx->pc = 0x2E88F4u;
            goto label_2e88f4;
        }
    }
    ctx->pc = 0x2E88D8u;
label_2e88d8:
    // 0x2e88d8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_2e88dc:
    if (ctx->pc == 0x2E88DCu) {
        ctx->pc = 0x2E88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88D8u;
        // 0x2e88dc: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88E0u;
        goto label_2e88e0;
    }
    ctx->pc = 0x2E88D8u;
    {
        const bool branch_taken_0x2e88d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88D8u;
        // 0x2e88dc: 0xae001260  sw          $zero, 0x1260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88d8) {
            ctx->pc = 0x2E8904u;
            goto label_2e8904;
        }
    }
    ctx->pc = 0x2E88E0u;
label_2e88e0:
    // 0x2e88e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e88e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e88e4:
    // 0x2e88e4: 0xc0b93ac  jal         func_2E4EB0
label_2e88e8:
    if (ctx->pc == 0x2E88E8u) {
        ctx->pc = 0x2E88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88E4u;
        // 0x2e88e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88ECu;
        goto label_2e88ec;
    }
    ctx->pc = 0x2E88E4u;
    SET_GPR_U32(ctx, 31, 0x2E88ECu);
    ctx->pc = 0x2E88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88E4u;
    // 0x2e88e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EB0u, 0x2E88E4u, 0x2E88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88ECu;
label_2e88ec:
    // 0x2e88ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e88f0:
    if (ctx->pc == 0x2E88F0u) {
        ctx->pc = 0x2E88F4u;
        goto label_2e88f4;
    }
    ctx->pc = 0x2E88ECu;
    {
        const bool branch_taken_0x2e88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88ec) {
            ctx->pc = 0x2E8904u;
            goto label_2e8904;
        }
    }
    ctx->pc = 0x2E88F4u;
label_2e88f4:
    // 0x2e88f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2e88f8:
    if (ctx->pc == 0x2E88F8u) {
        ctx->pc = 0x2E88FCu;
        goto label_2e88fc;
    }
    ctx->pc = 0x2E88F4u;
    {
        const bool branch_taken_0x2e88f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e88f4) {
            ctx->pc = 0x2E8904u;
            goto label_2e8904;
        }
    }
    ctx->pc = 0x2E88FCu;
label_2e88fc:
    // 0x2e88fc: 0xc0b93c6  jal         func_2E4F18
label_2e8900:
    if (ctx->pc == 0x2E8900u) {
        ctx->pc = 0x2E8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88FCu;
        // 0x2e8900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8904u;
        goto label_2e8904;
    }
    ctx->pc = 0x2E88FCu;
    SET_GPR_U32(ctx, 31, 0x2E8904u);
    ctx->pc = 0x2E8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88FCu;
    // 0x2e8900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F18u, 0x2E88FCu, 0x2E8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8904u;
label_2e8904:
    // 0x2e8904: 0xc0bdccc  jal         func_2F7330
label_2e8908:
    if (ctx->pc == 0x2E8908u) {
        ctx->pc = 0x2E8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8904u;
        // 0x2e8908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E890Cu;
        goto label_2e890c;
    }
    ctx->pc = 0x2E8904u;
    SET_GPR_U32(ctx, 31, 0x2E890Cu);
    ctx->pc = 0x2E8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8904u;
    // 0x2e8908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7330u, 0x2E8904u, 0x2E890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E890Cu;
label_2e890c:
    // 0x2e890c: 0x8e82be30  lw          $v0, -0x41D0($s4)
    ctx->pc = 0x2e890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950448)));
label_2e8910:
    // 0x2e8910: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_2e8914:
    if (ctx->pc == 0x2E8914u) {
        ctx->pc = 0x2E8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8910u;
        // 0x2e8914: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8918u;
        goto label_2e8918;
    }
    ctx->pc = 0x2E8910u;
    {
        const bool branch_taken_0x2e8910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8910) {
            ctx->pc = 0x2E8914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8910u;
            // 0x2e8914: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E8918u;
label_2e8918:
    // 0x2e8918: 0xc0494ea  jal         func_1253A8
label_2e891c:
    if (ctx->pc == 0x2E891Cu) {
        ctx->pc = 0x2E891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8918u;
        // 0x2e891c: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8920u;
        goto label_2e8920;
    }
    ctx->pc = 0x2E8918u;
    SET_GPR_U32(ctx, 31, 0x2E8920u);
    ctx->pc = 0x2E891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8918u;
    // 0x2e891c: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2E8918u, 0x2E8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8920u;
label_2e8920:
    // 0x2e8920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e8924:
    if (ctx->pc == 0x2E8924u) {
        ctx->pc = 0x2E8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8920u;
        // 0x2e8924: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8928u;
        goto label_2e8928;
    }
    ctx->pc = 0x2E8920u;
    {
        const bool branch_taken_0x2e8920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8920u;
        // 0x2e8924: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8920) {
            ctx->pc = 0x2E8938u;
            goto label_2e8938;
        }
    }
    ctx->pc = 0x2E8928u;
label_2e8928:
    // 0x2e8928: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e892c:
    // 0x2e892c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e8930:
    // 0x2e8930: 0x10000020  b           . + 4 + (0x20 << 2)
label_2e8934:
    if (ctx->pc == 0x2E8934u) {
        ctx->pc = 0x2E8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8930u;
        // 0x2e8934: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8938u;
        goto label_2e8938;
    }
    ctx->pc = 0x2E8930u;
    {
        const bool branch_taken_0x2e8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8930u;
        // 0x2e8934: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8930) {
            ctx->pc = 0x2E89B4u;
            goto label_2e89b4;
        }
    }
    ctx->pc = 0x2E8938u;
label_2e8938:
    // 0x2e8938: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e893c:
    // 0x2e893c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8940:
    // 0x2e8940: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
label_2e8944:
    if (ctx->pc == 0x2E8944u) {
        ctx->pc = 0x2E8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8940u;
        // 0x2e8944: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8948u;
        goto label_2e8948;
    }
    ctx->pc = 0x2E8940u;
    {
        const bool branch_taken_0x2e8940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8940) {
            ctx->pc = 0x2E8944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8940u;
            // 0x2e8944: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E8948u;
label_2e8948:
    // 0x2e8948: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e894c:
    // 0x2e894c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2e894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2e8950:
    // 0x2e8950: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e8950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2e8954:
    // 0x2e8954: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e8954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e8958:
    // 0x2e8958: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2e895c:
    if (ctx->pc == 0x2E895Cu) {
        ctx->pc = 0x2E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8958u;
        // 0x2e895c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8960u;
        goto label_2e8960;
    }
    ctx->pc = 0x2E8958u;
    {
        const bool branch_taken_0x2e8958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8958u;
        // 0x2e895c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8958) {
            ctx->pc = 0x2E8994u;
            goto label_2e8994;
        }
    }
    ctx->pc = 0x2E8960u;
label_2e8960:
    // 0x2e8960: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e8960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2e8964:
    // 0x2e8964: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2e8968:
    if (ctx->pc == 0x2E8968u) {
        ctx->pc = 0x2E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8964u;
        // 0x2e8968: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E896Cu;
        goto label_2e896c;
    }
    ctx->pc = 0x2E8964u;
    {
        const bool branch_taken_0x2e8964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8964) {
            ctx->pc = 0x2E8968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8964u;
            // 0x2e8968: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8998u;
            goto label_2e8998;
        }
    }
    ctx->pc = 0x2E896Cu;
label_2e896c:
    // 0x2e896c: 0xc0924a8  jal         func_2492A0
label_2e8970:
    if (ctx->pc == 0x2E8970u) {
        ctx->pc = 0x2E8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E896Cu;
        // 0x2e8970: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8974u;
        goto label_2e8974;
    }
    ctx->pc = 0x2E896Cu;
    SET_GPR_U32(ctx, 31, 0x2E8974u);
    ctx->pc = 0x2E8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E896Cu;
    // 0x2e8970: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E896Cu, 0x2E8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8974u;
label_2e8974:
    // 0x2e8974: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2e8978:
    if (ctx->pc == 0x2E8978u) {
        ctx->pc = 0x2E8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8974u;
        // 0x2e8978: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E897Cu;
        goto label_2e897c;
    }
    ctx->pc = 0x2E8974u;
    {
        const bool branch_taken_0x2e8974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8974) {
            ctx->pc = 0x2E8978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8974u;
            // 0x2e8978: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8998u;
            goto label_2e8998;
        }
    }
    ctx->pc = 0x2E897Cu;
label_2e897c:
    // 0x2e897c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2e897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2e8980:
    // 0x2e8980: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2e8984:
    // 0x2e8984: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2e8988:
    if (ctx->pc == 0x2E8988u) {
        ctx->pc = 0x2E8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8984u;
        // 0x2e8988: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E898Cu;
        goto label_2e898c;
    }
    ctx->pc = 0x2E8984u;
    {
        const bool branch_taken_0x2e8984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8984u;
        // 0x2e8988: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8984) {
            ctx->pc = 0x2E8994u;
            goto label_2e8994;
        }
    }
    ctx->pc = 0x2E898Cu;
label_2e898c:
    // 0x2e898c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2e8990:
    if (ctx->pc == 0x2E8990u) {
        ctx->pc = 0x2E8994u;
        goto label_2e8994;
    }
    ctx->pc = 0x2E898Cu;
    {
        const bool branch_taken_0x2e898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e898c) {
            ctx->pc = 0x2E8998u;
            goto label_2e8998;
        }
    }
    ctx->pc = 0x2E8994u;
label_2e8994:
    // 0x2e8994: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e8994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8998:
    // 0x2e8998: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
label_2e899c:
    if (ctx->pc == 0x2E899Cu) {
        ctx->pc = 0x2E899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8998u;
        // 0x2e899c: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89A0u;
        goto label_2e89a0;
    }
    ctx->pc = 0x2E8998u;
    {
        const bool branch_taken_0x2e8998 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8998) {
            ctx->pc = 0x2E899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8998u;
            // 0x2e899c: 0xc60011c8  lwc1        $f0, 0x11C8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E89A0u;
label_2e89a0:
    // 0x2e89a0: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2e89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e89a4:
    // 0x2e89a4: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x2e89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_2e89a8:
    // 0x2e89a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e89a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e89ac:
    // 0x2e89ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e89acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e89b0:
    // 0x2e89b0: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2e89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2e89b4:
    // 0x2e89b4: 0xc60011c8  lwc1        $f0, 0x11C8($s0)
    ctx->pc = 0x2e89b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e89b8:
    // 0x2e89b8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2e89bc:
    // 0x2e89bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e89bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e89c0:
    // 0x2e89c0: 0xc0ba5b6  jal         func_2E96D8
label_2e89c4:
    if (ctx->pc == 0x2E89C4u) {
        ctx->pc = 0x2E89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89C0u;
        // 0x2e89c4: 0xe440f15c  swc1        $f0, -0xEA4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89C8u;
        goto label_2e89c8;
    }
    ctx->pc = 0x2E89C0u;
    SET_GPR_U32(ctx, 31, 0x2E89C8u);
    ctx->pc = 0x2E89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89C0u;
    // 0x2e89c4: 0xe440f15c  swc1        $f0, -0xEA4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E96D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E96D8u, 0x2E89C0u, 0x2E89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89C8u;
label_2e89c8:
    // 0x2e89c8: 0xc0ba6a0  jal         func_2E9A80
label_2e89cc:
    if (ctx->pc == 0x2E89CCu) {
        ctx->pc = 0x2E89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89C8u;
        // 0x2e89cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89D0u;
        goto label_2e89d0;
    }
    ctx->pc = 0x2E89C8u;
    SET_GPR_U32(ctx, 31, 0x2E89D0u);
    ctx->pc = 0x2E89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89C8u;
    // 0x2e89cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9A80u, 0x2E89C8u, 0x2E89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89D0u;
label_2e89d0:
    // 0x2e89d0: 0xc08dab6  jal         func_236AD8
label_2e89d4:
    if (ctx->pc == 0x2E89D4u) {
        ctx->pc = 0x2E89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89D0u;
        // 0x2e89d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89D8u;
        goto label_2e89d8;
    }
    ctx->pc = 0x2E89D0u;
    SET_GPR_U32(ctx, 31, 0x2E89D8u);
    ctx->pc = 0x2E89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89D0u;
    // 0x2e89d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2E89D0u, 0x2E89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89D8u;
label_2e89d8:
    // 0x2e89d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2e89dc:
    if (ctx->pc == 0x2E89DCu) {
        ctx->pc = 0x2E89E0u;
        goto label_2e89e0;
    }
    ctx->pc = 0x2E89D8u;
    {
        const bool branch_taken_0x2e89d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89d8) {
            ctx->pc = 0x2E8A44u;
            goto label_2e8a44;
        }
    }
    ctx->pc = 0x2E89E0u;
label_2e89e0:
    // 0x2e89e0: 0xc0899bc  jal         func_2266F0
label_2e89e4:
    if (ctx->pc == 0x2E89E4u) {
        ctx->pc = 0x2E89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89E0u;
        // 0x2e89e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89E8u;
        goto label_2e89e8;
    }
    ctx->pc = 0x2E89E0u;
    SET_GPR_U32(ctx, 31, 0x2E89E8u);
    ctx->pc = 0x2E89E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89E0u;
    // 0x2e89e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E89E0u, 0x2E89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89E8u;
label_2e89e8:
    // 0x2e89e8: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2e89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2e89ec:
    // 0x2e89ec: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2e89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2e89f0:
    // 0x2e89f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e89f4:
    if (ctx->pc == 0x2E89F4u) {
        ctx->pc = 0x2E89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F0u;
        // 0x2e89f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89F8u;
        goto label_2e89f8;
    }
    ctx->pc = 0x2E89F0u;
    {
        const bool branch_taken_0x2e89f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F0u;
        // 0x2e89f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89f0) {
            ctx->pc = 0x2E8A08u;
            goto label_2e8a08;
        }
    }
    ctx->pc = 0x2E89F8u;
label_2e89f8:
    // 0x2e89f8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2e89fc:
    // 0x2e89fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2e8a00:
    if (ctx->pc == 0x2E8A00u) {
        ctx->pc = 0x2E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89FCu;
        // 0x2e8a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A04u;
        goto label_2e8a04;
    }
    ctx->pc = 0x2E89FCu;
    {
        const bool branch_taken_0x2e89fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89FCu;
        // 0x2e8a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89fc) {
            ctx->pc = 0x2E8A08u;
            goto label_2e8a08;
        }
    }
    ctx->pc = 0x2E8A04u;
label_2e8a04:
    // 0x2e8a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8a08:
    // 0x2e8a08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2e8a0c:
    if (ctx->pc == 0x2E8A0Cu) {
        ctx->pc = 0x2E8A10u;
        goto label_2e8a10;
    }
    ctx->pc = 0x2E8A08u;
    {
        const bool branch_taken_0x2e8a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a08) {
            ctx->pc = 0x2E8A44u;
            goto label_2e8a44;
        }
    }
    ctx->pc = 0x2E8A10u;
label_2e8a10:
    // 0x2e8a10: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2e8a14:
    // 0x2e8a14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2e8a18:
    if (ctx->pc == 0x2E8A18u) {
        ctx->pc = 0x2E8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A14u;
        // 0x2e8a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A1Cu;
        goto label_2e8a1c;
    }
    ctx->pc = 0x2E8A14u;
    {
        const bool branch_taken_0x2e8a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A14u;
        // 0x2e8a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a14) {
            ctx->pc = 0x2E8A44u;
            goto label_2e8a44;
        }
    }
    ctx->pc = 0x2E8A1Cu;
label_2e8a1c:
    // 0x2e8a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a20:
    // 0x2e8a20: 0xc08be16  jal         func_22F858
label_2e8a24:
    if (ctx->pc == 0x2E8A24u) {
        ctx->pc = 0x2E8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A20u;
        // 0x2e8a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A28u;
        goto label_2e8a28;
    }
    ctx->pc = 0x2E8A20u;
    SET_GPR_U32(ctx, 31, 0x2E8A28u);
    ctx->pc = 0x2E8A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A20u;
    // 0x2e8a24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F858u, 0x2E8A20u, 0x2E8A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A28u;
label_2e8a28:
    // 0x2e8a28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e8a2c:
    if (ctx->pc == 0x2E8A2Cu) {
        ctx->pc = 0x2E8A30u;
        goto label_2e8a30;
    }
    ctx->pc = 0x2E8A28u;
    {
        const bool branch_taken_0x2e8a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a28) {
            ctx->pc = 0x2E8A44u;
            goto label_2e8a44;
        }
    }
    ctx->pc = 0x2E8A30u;
label_2e8a30:
    // 0x2e8a30: 0xc06be68  jal         func_1AF9A0
label_2e8a34:
    if (ctx->pc == 0x2E8A34u) {
        ctx->pc = 0x2E8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A30u;
        // 0x2e8a34: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A38u;
        goto label_2e8a38;
    }
    ctx->pc = 0x2E8A30u;
    SET_GPR_U32(ctx, 31, 0x2E8A38u);
    ctx->pc = 0x2E8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A30u;
    // 0x2e8a34: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x2E8A30u, 0x2E8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A38u;
label_2e8a38:
    // 0x2e8a38: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2e8a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2e8a3c:
    // 0x2e8a3c: 0xc06c546  jal         func_1B1518
label_2e8a40:
    if (ctx->pc == 0x2E8A40u) {
        ctx->pc = 0x2E8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A3Cu;
        // 0x2e8a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A44u;
        goto label_2e8a44;
    }
    ctx->pc = 0x2E8A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A44u);
    ctx->pc = 0x2E8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A3Cu;
    // 0x2e8a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x2E8A3Cu, 0x2E8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A44u;
label_2e8a44:
    // 0x2e8a44: 0xc0bcba8  jal         func_2F2EA0
label_2e8a48:
    if (ctx->pc == 0x2E8A48u) {
        ctx->pc = 0x2E8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A44u;
        // 0x2e8a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A4Cu;
        goto label_2e8a4c;
    }
    ctx->pc = 0x2E8A44u;
    SET_GPR_U32(ctx, 31, 0x2E8A4Cu);
    ctx->pc = 0x2E8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A44u;
    // 0x2e8a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2EA0u, 0x2E8A44u, 0x2E8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A4Cu;
label_2e8a4c:
    // 0x2e8a4c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2e8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2e8a50:
    // 0x2e8a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a54:
    // 0x2e8a54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8a58:
    // 0x2e8a58: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2e8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2e8a5c:
    // 0x2e8a5c: 0x40f809  jalr        $v0
label_2e8a60:
    if (ctx->pc == 0x2E8A60u) {
        ctx->pc = 0x2E8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A5Cu;
        // 0x2e8a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A64u;
        goto label_2e8a64;
    }
    ctx->pc = 0x2E8A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8A64u);
        ctx->pc = 0x2E8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A5Cu;
        // 0x2e8a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A5Cu, 0x2E8A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8A64u;
label_2e8a64:
    // 0x2e8a64: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2e8a68:
    if (ctx->pc == 0x2E8A68u) {
        ctx->pc = 0x2E8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A64u;
        // 0x2e8a68: 0xc60112c0  lwc1        $f1, 0x12C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A6Cu;
        goto label_2e8a6c;
    }
    ctx->pc = 0x2E8A64u;
    {
        const bool branch_taken_0x2e8a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a64) {
            ctx->pc = 0x2E8A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8A64u;
            // 0x2e8a68: 0xc60112c0  lwc1        $f1, 0x12C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A90u;
            goto label_2e8a90;
        }
    }
    ctx->pc = 0x2E8A6Cu;
label_2e8a6c:
    // 0x2e8a6c: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2e8a70:
    // 0x2e8a70: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2e8a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2e8a74:
    // 0x2e8a74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2e8a78:
    if (ctx->pc == 0x2E8A78u) {
        ctx->pc = 0x2E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A74u;
        // 0x2e8a78: 0xc60112c0  lwc1        $f1, 0x12C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A7Cu;
        goto label_2e8a7c;
    }
    ctx->pc = 0x2E8A74u;
    {
        const bool branch_taken_0x2e8a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a74) {
            ctx->pc = 0x2E8A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8A74u;
            // 0x2e8a78: 0xc60112c0  lwc1        $f1, 0x12C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A90u;
            goto label_2e8a90;
        }
    }
    ctx->pc = 0x2E8A7Cu;
label_2e8a7c:
    // 0x2e8a7c: 0xc0b9f42  jal         func_2E7D08
label_2e8a80:
    if (ctx->pc == 0x2E8A80u) {
        ctx->pc = 0x2E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A7Cu;
        // 0x2e8a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A84u;
        goto label_2e8a84;
    }
    ctx->pc = 0x2E8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A84u);
    ctx->pc = 0x2E8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A7Cu;
    // 0x2e8a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D08u, 0x2E8A7Cu, 0x2E8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A84u;
label_2e8a84:
    // 0x2e8a84: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8a88:
    // 0x2e8a88: 0x10000030  b           . + 4 + (0x30 << 2)
label_2e8a8c:
    if (ctx->pc == 0x2E8A8Cu) {
        ctx->pc = 0x2E8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A88u;
        // 0x2e8a8c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A90u;
        goto label_2e8a90;
    }
    ctx->pc = 0x2E8A88u;
    {
        const bool branch_taken_0x2e8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A88u;
        // 0x2e8a8c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a88) {
            ctx->pc = 0x2E8B4Cu;
            goto label_2e8b4c;
        }
    }
    ctx->pc = 0x2E8A90u;
label_2e8a90:
    // 0x2e8a90: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8a94:
    // 0x2e8a94: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8a98:
    // 0x2e8a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8a9c:
    // 0x2e8a9c: 0x0  nop
    ctx->pc = 0x2e8a9cu;
    // NOP
label_2e8aa0:
    // 0x2e8aa0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e8aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8aa4:
    // 0x2e8aa4: 0x0  nop
    ctx->pc = 0x2e8aa4u;
    // NOP
label_2e8aa8:
    // 0x2e8aa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e8aac:
    if (ctx->pc == 0x2E8AACu) {
        ctx->pc = 0x2E8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AA8u;
        // 0x2e8aac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AB0u;
        goto label_2e8ab0;
    }
    ctx->pc = 0x2E8AA8u;
    {
        const bool branch_taken_0x2e8aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AA8u;
        // 0x2e8aac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8aa8) {
            ctx->pc = 0x2E8AB8u;
            goto label_2e8ab8;
        }
    }
    ctx->pc = 0x2E8AB0u;
label_2e8ab0:
    // 0x2e8ab0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e8ab4:
    if (ctx->pc == 0x2E8AB4u) {
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB0u;
        // 0x2e8ab4: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AB8u;
        goto label_2e8ab8;
    }
    ctx->pc = 0x2E8AB0u;
    {
        const bool branch_taken_0x2e8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB0u;
        // 0x2e8ab4: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ab0) {
            ctx->pc = 0x2E8AC4u;
            goto label_2e8ac4;
        }
    }
    ctx->pc = 0x2E8AB8u;
label_2e8ab8:
    // 0x2e8ab8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8abc:
    // 0x2e8abc: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8ac0:
    // 0x2e8ac0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e8ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e8ac4:
    // 0x2e8ac4: 0xe60012c0  swc1        $f0, 0x12C0($s0)
    ctx->pc = 0x2e8ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4800), bits); }
label_2e8ac8:
    // 0x2e8ac8: 0xc60112c4  lwc1        $f1, 0x12C4($s0)
    ctx->pc = 0x2e8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8acc:
    // 0x2e8acc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8ad0:
    // 0x2e8ad0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8ad4:
    // 0x2e8ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8ad8:
    // 0x2e8ad8: 0x0  nop
    ctx->pc = 0x2e8ad8u;
    // NOP
label_2e8adc:
    // 0x2e8adc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e8adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8ae0:
    // 0x2e8ae0: 0x0  nop
    ctx->pc = 0x2e8ae0u;
    // NOP
label_2e8ae4:
    // 0x2e8ae4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e8ae8:
    if (ctx->pc == 0x2E8AE8u) {
        ctx->pc = 0x2E8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AE4u;
        // 0x2e8ae8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AECu;
        goto label_2e8aec;
    }
    ctx->pc = 0x2E8AE4u;
    {
        const bool branch_taken_0x2e8ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AE4u;
        // 0x2e8ae8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ae4) {
            ctx->pc = 0x2E8AF4u;
            goto label_2e8af4;
        }
    }
    ctx->pc = 0x2E8AECu;
label_2e8aec:
    // 0x2e8aec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e8af0:
    if (ctx->pc == 0x2E8AF0u) {
        ctx->pc = 0x2E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AECu;
        // 0x2e8af0: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AF4u;
        goto label_2e8af4;
    }
    ctx->pc = 0x2E8AECu;
    {
        const bool branch_taken_0x2e8aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AECu;
        // 0x2e8af0: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8aec) {
            ctx->pc = 0x2E8B00u;
            goto label_2e8b00;
        }
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8af8:
    // 0x2e8af8: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8afc:
    // 0x2e8afc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e8afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e8b00:
    // 0x2e8b00: 0xe60012c4  swc1        $f0, 0x12C4($s0)
    ctx->pc = 0x2e8b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4804), bits); }
label_2e8b04:
    // 0x2e8b04: 0xc60112c8  lwc1        $f1, 0x12C8($s0)
    ctx->pc = 0x2e8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8b08:
    // 0x2e8b08: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8b0c:
    // 0x2e8b0c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8b10:
    // 0x2e8b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8b14:
    // 0x2e8b14: 0x0  nop
    ctx->pc = 0x2e8b14u;
    // NOP
label_2e8b18:
    // 0x2e8b18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e8b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8b1c:
    // 0x2e8b1c: 0x0  nop
    ctx->pc = 0x2e8b1cu;
    // NOP
label_2e8b20:
    // 0x2e8b20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e8b24:
    if (ctx->pc == 0x2E8B24u) {
        ctx->pc = 0x2E8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B20u;
        // 0x2e8b24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B28u;
        goto label_2e8b28;
    }
    ctx->pc = 0x2E8B20u;
    {
        const bool branch_taken_0x2e8b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B20u;
        // 0x2e8b24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b20) {
            ctx->pc = 0x2E8B30u;
            goto label_2e8b30;
        }
    }
    ctx->pc = 0x2E8B28u;
label_2e8b28:
    // 0x2e8b28: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e8b2c:
    if (ctx->pc == 0x2E8B2Cu) {
        ctx->pc = 0x2E8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B28u;
        // 0x2e8b2c: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B30u;
        goto label_2e8b30;
    }
    ctx->pc = 0x2E8B28u;
    {
        const bool branch_taken_0x2e8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B28u;
        // 0x2e8b2c: 0xc440b7f8  lwc1        $f0, -0x4808($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b28) {
            ctx->pc = 0x2E8B3Cu;
            goto label_2e8b3c;
        }
    }
    ctx->pc = 0x2E8B30u;
label_2e8b30:
    // 0x2e8b30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8b34:
    // 0x2e8b34: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8b38:
    // 0x2e8b38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e8b3c:
    // 0x2e8b3c: 0xe60012c8  swc1        $f0, 0x12C8($s0)
    ctx->pc = 0x2e8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4808), bits); }
label_2e8b40:
    // 0x2e8b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b44:
    // 0x2e8b44: 0xc0b9f4e  jal         func_2E7D38
label_2e8b48:
    if (ctx->pc == 0x2E8B48u) {
        ctx->pc = 0x2E8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B44u;
        // 0x2e8b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B4Cu;
        goto label_2e8b4c;
    }
    ctx->pc = 0x2E8B44u;
    SET_GPR_U32(ctx, 31, 0x2E8B4Cu);
    ctx->pc = 0x2E8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B44u;
    // 0x2e8b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D38u, 0x2E8B44u, 0x2E8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B4Cu;
label_2e8b4c:
    // 0x2e8b4c: 0xc60112cc  lwc1        $f1, 0x12CC($s0)
    ctx->pc = 0x2e8b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8b50:
    // 0x2e8b50: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8b54:
    // 0x2e8b54: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8b58:
    // 0x2e8b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8b5c:
    // 0x2e8b5c: 0x0  nop
    ctx->pc = 0x2e8b5cu;
    // NOP
label_2e8b60:
    // 0x2e8b60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e8b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8b64:
    // 0x2e8b64: 0x0  nop
    ctx->pc = 0x2e8b64u;
    // NOP
label_2e8b68:
    // 0x2e8b68: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_2e8b6c:
    if (ctx->pc == 0x2E8B6Cu) {
        ctx->pc = 0x2E8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B68u;
        // 0x2e8b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B70u;
        goto label_2e8b70;
    }
    ctx->pc = 0x2E8B68u;
    {
        const bool branch_taken_0x2e8b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B68u;
        // 0x2e8b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b68) {
            ctx->pc = 0x2E8BC0u;
            goto label_2e8bc0;
        }
    }
    ctx->pc = 0x2E8B70u;
label_2e8b70:
    // 0x2e8b70: 0xc0be274  jal         func_2F89D0
label_2e8b74:
    if (ctx->pc == 0x2E8B74u) {
        ctx->pc = 0x2E8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B70u;
        // 0x2e8b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B78u;
        goto label_2e8b78;
    }
    ctx->pc = 0x2E8B70u;
    SET_GPR_U32(ctx, 31, 0x2E8B78u);
    ctx->pc = 0x2E8B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B70u;
    // 0x2e8b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F89D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F89D0u, 0x2E8B70u, 0x2E8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B78u;
label_2e8b78:
    // 0x2e8b78: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2e8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
label_2e8b7c:
    // 0x2e8b7c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2e8b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2e8b80:
    // 0x2e8b80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e8b84:
    if (ctx->pc == 0x2E8B84u) {
        ctx->pc = 0x2E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B80u;
        // 0x2e8b84: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B88u;
        goto label_2e8b88;
    }
    ctx->pc = 0x2E8B80u;
    {
        const bool branch_taken_0x2e8b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B80u;
        // 0x2e8b84: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b80) {
            ctx->pc = 0x2E8BB8u;
            goto label_2e8bb8;
        }
    }
    ctx->pc = 0x2E8B88u;
label_2e8b88:
    // 0x2e8b88: 0x920210cd  lbu         $v0, 0x10CD($s0)
    ctx->pc = 0x2e8b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4301)));
label_2e8b8c:
    // 0x2e8b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8b90:
    if (ctx->pc == 0x2E8B90u) {
        ctx->pc = 0x2E8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B8Cu;
        // 0x2e8b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B94u;
        goto label_2e8b94;
    }
    ctx->pc = 0x2E8B8Cu;
    {
        const bool branch_taken_0x2e8b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B8Cu;
        // 0x2e8b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b8c) {
            ctx->pc = 0x2E8B9Cu;
            goto label_2e8b9c;
        }
    }
    ctx->pc = 0x2E8B94u;
label_2e8b94:
    // 0x2e8b94: 0xc0be372  jal         func_2F8DC8
label_2e8b98:
    if (ctx->pc == 0x2E8B98u) {
        ctx->pc = 0x2E8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B94u;
        // 0x2e8b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B9Cu;
        goto label_2e8b9c;
    }
    ctx->pc = 0x2E8B94u;
    SET_GPR_U32(ctx, 31, 0x2E8B9Cu);
    ctx->pc = 0x2E8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B94u;
    // 0x2e8b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8DC8u, 0x2E8B94u, 0x2E8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B9Cu;
label_2e8b9c:
    // 0x2e8b9c: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2e8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
label_2e8ba0:
    // 0x2e8ba0: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2e8ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2e8ba4:
    // 0x2e8ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8ba8:
    if (ctx->pc == 0x2E8BA8u) {
        ctx->pc = 0x2E8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BA4u;
        // 0x2e8ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BACu;
        goto label_2e8bac;
    }
    ctx->pc = 0x2E8BA4u;
    {
        const bool branch_taken_0x2e8ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BA4u;
        // 0x2e8ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ba4) {
            ctx->pc = 0x2E8BB4u;
            goto label_2e8bb4;
        }
    }
    ctx->pc = 0x2E8BACu;
label_2e8bac:
    // 0x2e8bac: 0xc0be4c4  jal         func_2F9310
label_2e8bb0:
    if (ctx->pc == 0x2E8BB0u) {
        ctx->pc = 0x2E8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BACu;
        // 0x2e8bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BB4u;
        goto label_2e8bb4;
    }
    ctx->pc = 0x2E8BACu;
    SET_GPR_U32(ctx, 31, 0x2E8BB4u);
    ctx->pc = 0x2E8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BACu;
    // 0x2e8bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9310u, 0x2E8BACu, 0x2E8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BB4u;
label_2e8bb4:
    // 0x2e8bb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e8bb8:
    // 0x2e8bb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e8bbc:
    if (ctx->pc == 0x2E8BBCu) {
        ctx->pc = 0x2E8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB8u;
        // 0x2e8bbc: 0xc440b7fc  lwc1        $f0, -0x4804($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BC0u;
        goto label_2e8bc0;
    }
    ctx->pc = 0x2E8BB8u;
    {
        const bool branch_taken_0x2e8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB8u;
        // 0x2e8bbc: 0xc440b7fc  lwc1        $f0, -0x4804($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bb8) {
            ctx->pc = 0x2E8BCCu;
            goto label_2e8bcc;
        }
    }
    ctx->pc = 0x2E8BC0u;
label_2e8bc0:
    // 0x2e8bc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8bc4:
    // 0x2e8bc4: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8bc8:
    // 0x2e8bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e8bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e8bcc:
    // 0x2e8bcc: 0xe60012cc  swc1        $f0, 0x12CC($s0)
    ctx->pc = 0x2e8bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4812), bits); }
label_2e8bd0:
    // 0x2e8bd0: 0xc6031204  lwc1        $f3, 0x1204($s0)
    ctx->pc = 0x2e8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e8bd4:
    // 0x2e8bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e8bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e8bd8:
    // 0x2e8bd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e8bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e8bdc:
    // 0x2e8bdc: 0x0  nop
    ctx->pc = 0x2e8bdcu;
    // NOP
label_2e8be0:
    // 0x2e8be0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2e8be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8be4:
    // 0x2e8be4: 0x0  nop
    ctx->pc = 0x2e8be4u;
    // NOP
label_2e8be8:
    // 0x2e8be8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2e8bec:
    if (ctx->pc == 0x2E8BECu) {
        ctx->pc = 0x2E8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BE8u;
        // 0x2e8bec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BF0u;
        goto label_2e8bf0;
    }
    ctx->pc = 0x2E8BE8u;
    {
        const bool branch_taken_0x2e8be8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BE8u;
        // 0x2e8bec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8be8) {
            ctx->pc = 0x2E8C18u;
            goto label_2e8c18;
        }
    }
    ctx->pc = 0x2E8BF0u;
label_2e8bf0:
    // 0x2e8bf0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2e8bf4:
    // 0x2e8bf4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2e8bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8bf8:
    // 0x2e8bf8: 0xc460b810  lwc1        $f0, -0x47F0($v1)
    ctx->pc = 0x2e8bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8bfc:
    // 0x2e8bfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e8c00:
    // 0x2e8c00: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2e8c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2e8c04:
    // 0x2e8c04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e8c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8c08:
    // 0x2e8c08: 0x0  nop
    ctx->pc = 0x2e8c08u;
    // NOP
label_2e8c0c:
    // 0x2e8c0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e8c10:
    if (ctx->pc == 0x2E8C10u) {
        ctx->pc = 0x2E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C0Cu;
        // 0x2e8c10: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C14u;
        goto label_2e8c14;
    }
    ctx->pc = 0x2E8C0Cu;
    {
        const bool branch_taken_0x2e8c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8c0c) {
            ctx->pc = 0x2E8C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C0Cu;
            // 0x2e8c10: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C14u;
            goto label_2e8c14;
        }
    }
    ctx->pc = 0x2E8C14u;
label_2e8c14:
    // 0x2e8c14: 0xe6001204  swc1        $f0, 0x1204($s0)
    ctx->pc = 0x2e8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4612), bits); }
label_2e8c18:
    // 0x2e8c18: 0x92021170  lbu         $v0, 0x1170($s0)
    ctx->pc = 0x2e8c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4464)));
label_2e8c1c:
    // 0x2e8c1c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2e8c20:
    if (ctx->pc == 0x2E8C20u) {
        ctx->pc = 0x2E8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C1Cu;
        // 0x2e8c20: 0x26a25870  addiu       $v0, $s5, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C24u;
        goto label_2e8c24;
    }
    ctx->pc = 0x2E8C1Cu;
    {
        const bool branch_taken_0x2e8c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C1Cu;
        // 0x2e8c20: 0x26a25870  addiu       $v0, $s5, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c1c) {
            ctx->pc = 0x2E8CBCu;
            goto label_2e8cbc;
        }
    }
    ctx->pc = 0x2E8C24u;
label_2e8c24:
    // 0x2e8c24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e8c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e8c28:
    // 0x2e8c28: 0xc440043c  lwc1        $f0, 0x43C($v0)
    ctx->pc = 0x2e8c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8c2c:
    // 0x2e8c2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e8c2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8c30:
    // 0x2e8c30: 0x0  nop
    ctx->pc = 0x2e8c30u;
    // NOP
label_2e8c34:
    // 0x2e8c34: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_2e8c38:
    if (ctx->pc == 0x2E8C38u) {
        ctx->pc = 0x2E8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C34u;
        // 0x2e8c38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C3Cu;
        goto label_2e8c3c;
    }
    ctx->pc = 0x2E8C34u;
    {
        const bool branch_taken_0x2e8c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C34u;
        // 0x2e8c38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c34) {
            ctx->pc = 0x2E8CBCu;
            goto label_2e8cbc;
        }
    }
    ctx->pc = 0x2E8C3Cu;
label_2e8c3c:
    // 0x2e8c3c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2e8c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e8c40:
    // 0x2e8c40: 0xa20313d4  sb          $v1, 0x13D4($s0)
    ctx->pc = 0x2e8c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5076), (uint8_t)GPR_U32(ctx, 3));
label_2e8c44:
    // 0x2e8c44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8c48:
    // 0x2e8c48: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2e8c4c:
    // 0x2e8c4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e8c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8c50:
    // 0x2e8c50: 0xfa0113e0  sqc2        $vf1, 0x13E0($s0)
    ctx->pc = 0x2e8c50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5088), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e8c54:
    // 0x2e8c54: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2e8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e8c58:
    // 0x2e8c58: 0x3c013ea6  lui         $at, 0x3EA6
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16038 << 16));
label_2e8c5c:
    // 0x2e8c5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2e8c60:
    // 0x2e8c60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e8c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e8c64:
    // 0x2e8c64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e8c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8c68:
    // 0x2e8c68: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2e8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2e8c6c:
    // 0x2e8c6c: 0xc4830060  lwc1        $f3, 0x60($a0)
    ctx->pc = 0x2e8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e8c70:
    // 0x2e8c70: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2e8c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e8c74:
    // 0x2e8c74: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2e8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2e8c78:
    // 0x2e8c78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8c7c:
    // 0x2e8c7c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2e8c7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2e8c80:
    // 0x2e8c80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8c84:
    // 0x2e8c84: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2e8c84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2e8c88:
    // 0x2e8c88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e8c88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2e8c8c:
    // 0x2e8c8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e8c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2e8c90:
    // 0x2e8c90: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2e8c90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e8c94:
    // 0x2e8c94: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2e8c94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2e8c98:
    // 0x2e8c98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e8c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e8c9c:
    // 0x2e8c9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e8c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e8ca0:
    // 0x2e8ca0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e8ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8ca4:
    // 0x2e8ca4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2e8ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8ca8:
    // 0x2e8ca8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e8ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e8cac:
    // 0x2e8cac: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2e8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e8cb0:
    // 0x2e8cb0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e8cb4:
    // 0x2e8cb4: 0xc0c48da  jal         func_312368
label_2e8cb8:
    if (ctx->pc == 0x2E8CB8u) {
        ctx->pc = 0x2E8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CB4u;
        // 0x2e8cb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CBCu;
        goto label_2e8cbc;
    }
    ctx->pc = 0x2E8CB4u;
    SET_GPR_U32(ctx, 31, 0x2E8CBCu);
    ctx->pc = 0x2E8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8CB4u;
    // 0x2e8cb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2E8CB4u, 0x2E8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CBCu;
label_2e8cbc:
    // 0x2e8cbc: 0xc0bf86a  jal         func_2FE1A8
label_2e8cc0:
    if (ctx->pc == 0x2E8CC0u) {
        ctx->pc = 0x2E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CBCu;
        // 0x2e8cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CC4u;
        goto label_2e8cc4;
    }
    ctx->pc = 0x2E8CBCu;
    SET_GPR_U32(ctx, 31, 0x2E8CC4u);
    ctx->pc = 0x2E8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8CBCu;
    // 0x2e8cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A8u, 0x2E8CBCu, 0x2E8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CC4u;
label_2e8cc4:
    // 0x2e8cc4: 0x920213f4  lbu         $v0, 0x13F4($s0)
    ctx->pc = 0x2e8cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
label_2e8cc8:
    // 0x2e8cc8: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
label_2e8ccc:
    if (ctx->pc == 0x2E8CCCu) {
        ctx->pc = 0x2E8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CC8u;
        // 0x2e8ccc: 0xc6001400  lwc1        $f0, 0x1400($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CD0u;
        goto label_2e8cd0;
    }
    ctx->pc = 0x2E8CC8u;
    {
        const bool branch_taken_0x2e8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cc8) {
            ctx->pc = 0x2E8CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8CC8u;
            // 0x2e8ccc: 0xc6001400  lwc1        $f0, 0x1400($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8EF0u;
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8CD0u;
label_2e8cd0:
    // 0x2e8cd0: 0x8e021410  lw          $v0, 0x1410($s0)
    ctx->pc = 0x2e8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
label_2e8cd4:
    // 0x2e8cd4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e8cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e8cd8:
    // 0x2e8cd8: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2e8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8cdc:
    // 0x2e8cdc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e8cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8ce0:
    // 0x2e8ce0: 0x0  nop
    ctx->pc = 0x2e8ce0u;
    // NOP
label_2e8ce4:
    // 0x2e8ce4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_2e8ce8:
    if (ctx->pc == 0x2E8CE8u) {
        ctx->pc = 0x2E8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CE4u;
        // 0x2e8ce8: 0xe6141400  swc1        $f20, 0x1400($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CECu;
        goto label_2e8cec;
    }
    ctx->pc = 0x2E8CE4u;
    {
        const bool branch_taken_0x2e8ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8ce4) {
            ctx->pc = 0x2E8CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8CE4u;
            // 0x2e8ce8: 0xe6141400  swc1        $f20, 0x1400($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D04u;
            goto label_2e8d04;
        }
    }
    ctx->pc = 0x2E8CECu;
label_2e8cec:
    // 0x2e8cec: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2e8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2e8cf0:
    // 0x2e8cf0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2e8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2e8cf4:
    // 0x2e8cf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8cf8:
    // 0x2e8cf8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_2e8cfc:
    if (ctx->pc == 0x2E8CFCu) {
        ctx->pc = 0x2E8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CF8u;
        // 0x2e8cfc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D00u;
        goto label_2e8d00;
    }
    ctx->pc = 0x2E8CF8u;
    {
        const bool branch_taken_0x2e8cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CF8u;
        // 0x2e8cfc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cf8) {
            ctx->pc = 0x2E8D20u;
            goto label_2e8d20;
        }
    }
    ctx->pc = 0x2E8D00u;
label_2e8d00:
    // 0x2e8d00: 0xe6141400  swc1        $f20, 0x1400($s0)
    ctx->pc = 0x2e8d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
label_2e8d04:
    // 0x2e8d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d08:
    // 0x2e8d08: 0xc0c11da  jal         func_304768
label_2e8d0c:
    if (ctx->pc == 0x2E8D0Cu) {
        ctx->pc = 0x2E8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D08u;
        // 0x2e8d0c: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D10u;
        goto label_2e8d10;
    }
    ctx->pc = 0x2E8D08u;
    SET_GPR_U32(ctx, 31, 0x2E8D10u);
    ctx->pc = 0x2E8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D08u;
    // 0x2e8d0c: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E8D08u, 0x2E8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D10u;
label_2e8d10:
    // 0x2e8d10: 0xc0abe24  jal         func_2AF890
label_2e8d14:
    if (ctx->pc == 0x2E8D14u) {
        ctx->pc = 0x2E8D18u;
        goto label_2e8d18;
    }
    ctx->pc = 0x2E8D10u;
    SET_GPR_U32(ctx, 31, 0x2E8D18u);
    ctx->pc = 0x2AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF890u, 0x2E8D10u, 0x2E8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D18u;
label_2e8d18:
    // 0x2e8d18: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2e8d1c:
    if (ctx->pc == 0x2E8D1Cu) {
        ctx->pc = 0x2E8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D18u;
        // 0x2e8d1c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D20u;
        goto label_2e8d20;
    }
    ctx->pc = 0x2E8D18u;
    {
        const bool branch_taken_0x2e8d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D18u;
        // 0x2e8d1c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d18) {
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8D20u;
label_2e8d20:
    // 0x2e8d20: 0x9043b820  lbu         $v1, -0x47E0($v0)
    ctx->pc = 0x2e8d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948896)));
label_2e8d24:
    // 0x2e8d24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2e8d28:
    if (ctx->pc == 0x2E8D28u) {
        ctx->pc = 0x2E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D24u;
        // 0x2e8d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D2Cu;
        goto label_2e8d2c;
    }
    ctx->pc = 0x2E8D24u;
    {
        const bool branch_taken_0x2e8d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D24u;
        // 0x2e8d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d24) {
            ctx->pc = 0x2E8D40u;
            goto label_2e8d40;
        }
    }
    ctx->pc = 0x2E8D2Cu;
label_2e8d2c:
    // 0x2e8d2c: 0xe6141400  swc1        $f20, 0x1400($s0)
    ctx->pc = 0x2e8d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
label_2e8d30:
    // 0x2e8d30: 0xc0c11da  jal         func_304768
label_2e8d34:
    if (ctx->pc == 0x2E8D34u) {
        ctx->pc = 0x2E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D30u;
        // 0x2e8d34: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D38u;
        goto label_2e8d38;
    }
    ctx->pc = 0x2E8D30u;
    SET_GPR_U32(ctx, 31, 0x2E8D38u);
    ctx->pc = 0x2E8D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D30u;
    // 0x2e8d34: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E8D30u, 0x2E8D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D38u;
label_2e8d38:
    // 0x2e8d38: 0x10000086  b           . + 4 + (0x86 << 2)
label_2e8d3c:
    if (ctx->pc == 0x2E8D3Cu) {
        ctx->pc = 0x2E8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D38u;
        // 0x2e8d3c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D40u;
        goto label_2e8d40;
    }
    ctx->pc = 0x2E8D38u;
    {
        const bool branch_taken_0x2e8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D38u;
        // 0x2e8d3c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d38) {
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8D40u;
label_2e8d40:
    // 0x2e8d40: 0xc0494ea  jal         func_1253A8
label_2e8d44:
    if (ctx->pc == 0x2E8D44u) {
        ctx->pc = 0x2E8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D40u;
        // 0x2e8d44: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D48u;
        goto label_2e8d48;
    }
    ctx->pc = 0x2E8D40u;
    SET_GPR_U32(ctx, 31, 0x2E8D48u);
    ctx->pc = 0x2E8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D40u;
    // 0x2e8d44: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2E8D40u, 0x2E8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D48u;
label_2e8d48:
    // 0x2e8d48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e8d4c:
    if (ctx->pc == 0x2E8D4Cu) {
        ctx->pc = 0x2E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D48u;
        // 0x2e8d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D50u;
        goto label_2e8d50;
    }
    ctx->pc = 0x2E8D48u;
    {
        const bool branch_taken_0x2e8d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D48u;
        // 0x2e8d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d48) {
            ctx->pc = 0x2E8D70u;
            goto label_2e8d70;
        }
    }
    ctx->pc = 0x2E8D50u;
label_2e8d50:
    // 0x2e8d50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e8d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e8d54:
    // 0x2e8d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8d58:
    // 0x2e8d58: 0xe61413f8  swc1        $f20, 0x13F8($s0)
    ctx->pc = 0x2e8d58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5112), bits); }
label_2e8d5c:
    // 0x2e8d5c: 0xa20013f4  sb          $zero, 0x13F4($s0)
    ctx->pc = 0x2e8d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
label_2e8d60:
    // 0x2e8d60: 0xc0c11da  jal         func_304768
label_2e8d64:
    if (ctx->pc == 0x2E8D64u) {
        ctx->pc = 0x2E8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D60u;
        // 0x2e8d64: 0xe6001400  swc1        $f0, 0x1400($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D68u;
        goto label_2e8d68;
    }
    ctx->pc = 0x2E8D60u;
    SET_GPR_U32(ctx, 31, 0x2E8D68u);
    ctx->pc = 0x2E8D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D60u;
    // 0x2e8d64: 0xe6001400  swc1        $f0, 0x1400($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E8D60u, 0x2E8D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D68u;
label_2e8d68:
    // 0x2e8d68: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2e8d6c:
    if (ctx->pc == 0x2E8D6Cu) {
        ctx->pc = 0x2E8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D68u;
        // 0x2e8d6c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D70u;
        goto label_2e8d70;
    }
    ctx->pc = 0x2E8D68u;
    {
        const bool branch_taken_0x2e8d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D68u;
        // 0x2e8d6c: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d68) {
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8D70u;
label_2e8d70:
    // 0x2e8d70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8d74:
    // 0x2e8d74: 0xc60013f8  lwc1        $f0, 0x13F8($s0)
    ctx->pc = 0x2e8d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8d78:
    // 0x2e8d78: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2e8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8d7c:
    // 0x2e8d7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d80:
    // 0x2e8d80: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2e8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e8d84:
    // 0x2e8d84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e8d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e8d88:
    // 0x2e8d88: 0xe60013f8  swc1        $f0, 0x13F8($s0)
    ctx->pc = 0x2e8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5112), bits); }
label_2e8d8c:
    // 0x2e8d8c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2e8d90:
    // 0x2e8d90: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e8d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e8d94:
    // 0x2e8d94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2e8d98:
    if (ctx->pc == 0x2E8D98u) {
        ctx->pc = 0x2E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D94u;
        // 0x2e8d98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D9Cu;
        goto label_2e8d9c;
    }
    ctx->pc = 0x2E8D94u;
    {
        const bool branch_taken_0x2e8d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D94u;
        // 0x2e8d98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d94) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8D9Cu;
label_2e8d9c:
    // 0x2e8d9c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2e8da0:
    // 0x2e8da0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2e8da4:
    if (ctx->pc == 0x2E8DA4u) {
        ctx->pc = 0x2E8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA0u;
        // 0x2e8da4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DA8u;
        goto label_2e8da8;
    }
    ctx->pc = 0x2E8DA0u;
    {
        const bool branch_taken_0x2e8da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA0u;
        // 0x2e8da4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da0) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8DA8u;
label_2e8da8:
    // 0x2e8da8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2e8dac:
    if (ctx->pc == 0x2E8DACu) {
        ctx->pc = 0x2E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA8u;
        // 0x2e8dac: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DB0u;
        goto label_2e8db0;
    }
    ctx->pc = 0x2E8DA8u;
    {
        const bool branch_taken_0x2e8da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DA8u;
        // 0x2e8dac: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da8) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8DB0u;
label_2e8db0:
    // 0x2e8db0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8db4:
    if (ctx->pc == 0x2E8DB4u) {
        ctx->pc = 0x2E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB0u;
        // 0x2e8db4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DB8u;
        goto label_2e8db8;
    }
    ctx->pc = 0x2E8DB0u;
    {
        const bool branch_taken_0x2e8db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB0u;
        // 0x2e8db4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8db0) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8DB8u;
label_2e8db8:
    // 0x2e8db8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2e8dbc:
    if (ctx->pc == 0x2E8DBCu) {
        ctx->pc = 0x2E8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB8u;
        // 0x2e8dbc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DC0u;
        goto label_2e8dc0;
    }
    ctx->pc = 0x2E8DB8u;
    {
        const bool branch_taken_0x2e8db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DB8u;
        // 0x2e8dbc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8db8) {
            ctx->pc = 0x2E8DC8u;
            goto label_2e8dc8;
        }
    }
    ctx->pc = 0x2E8DC0u;
label_2e8dc0:
    // 0x2e8dc0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2e8dc4:
    if (ctx->pc == 0x2E8DC4u) {
        ctx->pc = 0x2E8DC8u;
        goto label_2e8dc8;
    }
    ctx->pc = 0x2E8DC0u;
    {
        const bool branch_taken_0x2e8dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8dc0) {
            ctx->pc = 0x2E8DCCu;
            goto label_2e8dcc;
        }
    }
    ctx->pc = 0x2E8DC8u;
label_2e8dc8:
    // 0x2e8dc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8dcc:
    // 0x2e8dcc: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8dd0:
    if (ctx->pc == 0x2E8DD0u) {
        ctx->pc = 0x2E8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DCCu;
        // 0x2e8dd0: 0xc60013f8  lwc1        $f0, 0x13F8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DD4u;
        goto label_2e8dd4;
    }
    ctx->pc = 0x2E8DCCu;
    {
        const bool branch_taken_0x2e8dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8dcc) {
            ctx->pc = 0x2E8DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8DCCu;
            // 0x2e8dd0: 0xc60013f8  lwc1        $f0, 0x13F8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8DE8u;
            goto label_2e8de8;
        }
    }
    ctx->pc = 0x2E8DD4u;
label_2e8dd4:
    // 0x2e8dd4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e8dd8:
    // 0x2e8dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8ddc:
    // 0x2e8ddc: 0x0  nop
    ctx->pc = 0x2e8ddcu;
    // NOP
label_2e8de0:
    // 0x2e8de0: 0xe60013f8  swc1        $f0, 0x13F8($s0)
    ctx->pc = 0x2e8de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5112), bits); }
label_2e8de4:
    // 0x2e8de4: 0xc60013f8  lwc1        $f0, 0x13F8($s0)
    ctx->pc = 0x2e8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8de8:
    // 0x2e8de8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e8de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e8dec:
    // 0x2e8dec: 0x0  nop
    ctx->pc = 0x2e8decu;
    // NOP
label_2e8df0:
    // 0x2e8df0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e8df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8df4:
    // 0x2e8df4: 0x0  nop
    ctx->pc = 0x2e8df4u;
    // NOP
label_2e8df8:
    // 0x2e8df8: 0x45020056  bc1fl       . + 4 + (0x56 << 2)
label_2e8dfc:
    if (ctx->pc == 0x2E8DFCu) {
        ctx->pc = 0x2E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DF8u;
        // 0x2e8dfc: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E00u;
        goto label_2e8e00;
    }
    ctx->pc = 0x2E8DF8u;
    {
        const bool branch_taken_0x2e8df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8df8) {
            ctx->pc = 0x2E8DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8DF8u;
            // 0x2e8dfc: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8E00u;
label_2e8e00:
    // 0x2e8e00: 0x8e051410  lw          $a1, 0x1410($s0)
    ctx->pc = 0x2e8e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
label_2e8e04:
    // 0x2e8e04: 0xc0c11be  jal         func_3046F8
label_2e8e08:
    if (ctx->pc == 0x2E8E08u) {
        ctx->pc = 0x2E8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E04u;
        // 0x2e8e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E0Cu;
        goto label_2e8e0c;
    }
    ctx->pc = 0x2E8E04u;
    SET_GPR_U32(ctx, 31, 0x2E8E0Cu);
    ctx->pc = 0x2E8E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E04u;
    // 0x2e8e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3046F8u, 0x2E8E04u, 0x2E8E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E0Cu;
label_2e8e0c:
    // 0x2e8e0c: 0xe61413f8  swc1        $f20, 0x13F8($s0)
    ctx->pc = 0x2e8e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5112), bits); }
label_2e8e10:
    // 0x2e8e10: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x2e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_2e8e14:
    // 0x2e8e14: 0xc60013fc  lwc1        $f0, 0x13FC($s0)
    ctx->pc = 0x2e8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8e18:
    // 0x2e8e18: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x2e8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_2e8e1c:
    // 0x2e8e1c: 0xc6212b30  lwc1        $f1, 0x2B30($s1)
    ctx->pc = 0x2e8e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8e20:
    // 0x2e8e20: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e8e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e8e24:
    // 0x2e8e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e8e28:
    // 0x2e8e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e2c:
    // 0x2e8e2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e8e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e8e30:
    // 0x2e8e30: 0xe60013fc  swc1        $f0, 0x13FC($s0)
    ctx->pc = 0x2e8e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5116), bits); }
label_2e8e34:
    // 0x2e8e34: 0xc0ba550  jal         func_2E9540
label_2e8e38:
    if (ctx->pc == 0x2E8E38u) {
        ctx->pc = 0x2E8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E34u;
        // 0x2e8e38: 0xc46c1668  lwc1        $f12, 0x1668($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E3Cu;
        goto label_2e8e3c;
    }
    ctx->pc = 0x2E8E34u;
    SET_GPR_U32(ctx, 31, 0x2E8E3Cu);
    ctx->pc = 0x2E8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E34u;
    // 0x2e8e38: 0xc46c1668  lwc1        $f12, 0x1668($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9540u, 0x2E8E34u, 0x2E8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E3Cu;
label_2e8e3c:
    // 0x2e8e3c: 0xc60013fc  lwc1        $f0, 0x13FC($s0)
    ctx->pc = 0x2e8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8e40:
    // 0x2e8e40: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e8e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8e44:
    // 0x2e8e44: 0x0  nop
    ctx->pc = 0x2e8e44u;
    // NOP
label_2e8e48:
    // 0x2e8e48: 0x45000041  bc1f        . + 4 + (0x41 << 2)
label_2e8e4c:
    if (ctx->pc == 0x2E8E4Cu) {
        ctx->pc = 0x2E8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E48u;
        // 0x2e8e4c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E50u;
        goto label_2e8e50;
    }
    ctx->pc = 0x2E8E48u;
    {
        const bool branch_taken_0x2e8e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E48u;
        // 0x2e8e4c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e48) {
            ctx->pc = 0x2E8F50u;
            goto label_2e8f50;
        }
    }
    ctx->pc = 0x2E8E50u;
label_2e8e50:
    // 0x2e8e50: 0x8e051410  lw          $a1, 0x1410($s0)
    ctx->pc = 0x2e8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
label_2e8e54:
    // 0x2e8e54: 0xc04785a  jal         func_11E168
label_2e8e58:
    if (ctx->pc == 0x2E8E58u) {
        ctx->pc = 0x2E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E54u;
        // 0x2e8e58: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E5Cu;
        goto label_2e8e5c;
    }
    ctx->pc = 0x2E8E54u;
    SET_GPR_U32(ctx, 31, 0x2E8E5Cu);
    ctx->pc = 0x2E8E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E54u;
    // 0x2e8e58: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x2E8E54u, 0x2E8E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E5Cu;
label_2e8e5c:
    // 0x2e8e5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e60:
    // 0x2e8e60: 0x920213f5  lbu         $v0, 0x13F5($s0)
    ctx->pc = 0x2e8e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5109)));
label_2e8e64:
    // 0x2e8e64: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2e8e68:
    if (ctx->pc == 0x2E8E68u) {
        ctx->pc = 0x2E8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E64u;
        // 0x2e8e68: 0xe6141400  swc1        $f20, 0x1400($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E6Cu;
        goto label_2e8e6c;
    }
    ctx->pc = 0x2E8E64u;
    {
        const bool branch_taken_0x2e8e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e64) {
            ctx->pc = 0x2E8E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8E64u;
            // 0x2e8e68: 0xe6141400  swc1        $f20, 0x1400($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8ECCu;
            goto label_2e8ecc;
        }
    }
    ctx->pc = 0x2E8E6Cu;
label_2e8e6c:
    // 0x2e8e6c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2e8e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_2e8e70:
    // 0x2e8e70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8e74:
    // 0x2e8e74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e8e78:
    // 0x2e8e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e7c:
    // 0x2e8e7c: 0xc043b94  jal         func_10EE50
label_2e8e80:
    if (ctx->pc == 0x2E8E80u) {
        ctx->pc = 0x2E8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E7Cu;
        // 0x2e8e80: 0xe44089c0  swc1        $f0, -0x7640($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E84u;
        goto label_2e8e84;
    }
    ctx->pc = 0x2E8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E84u);
    ctx->pc = 0x2E8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E7Cu;
    // 0x2e8e80: 0xe44089c0  swc1        $f0, -0x7640($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE50u, 0x2E8E7Cu, 0x2E8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E84u;
label_2e8e84:
    // 0x2e8e84: 0xc0454dc  jal         func_115370
label_2e8e88:
    if (ctx->pc == 0x2E8E88u) {
        ctx->pc = 0x2E8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E84u;
        // 0x2e8e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8E8Cu;
        goto label_2e8e8c;
    }
    ctx->pc = 0x2E8E84u;
    SET_GPR_U32(ctx, 31, 0x2E8E8Cu);
    ctx->pc = 0x2E8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E84u;
    // 0x2e8e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115370u, 0x2E8E84u, 0x2E8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E8Cu;
label_2e8e8c:
    // 0x2e8e8c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e8e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e8e90:
    // 0x2e8e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8e94:
    // 0x2e8e94: 0x2663a080  addiu       $v1, $s3, -0x5F80
    ctx->pc = 0x2e8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
label_2e8e98:
    // 0x2e8e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8e9c:
    // 0x2e8e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ea0:
    // 0x2e8ea0: 0xe6001400  swc1        $f0, 0x1400($s0)
    ctx->pc = 0x2e8ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
label_2e8ea4:
    // 0x2e8ea4: 0xac620428  sw          $v0, 0x428($v1)
    ctx->pc = 0x2e8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1064), GPR_U32(ctx, 2));
label_2e8ea8:
    // 0x2e8ea8: 0xc0bfab2  jal         func_2FEAC8
label_2e8eac:
    if (ctx->pc == 0x2E8EACu) {
        ctx->pc = 0x2E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA8u;
        // 0x2e8eac: 0x8e051410  lw          $a1, 0x1410($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EB0u;
        goto label_2e8eb0;
    }
    ctx->pc = 0x2E8EA8u;
    SET_GPR_U32(ctx, 31, 0x2E8EB0u);
    ctx->pc = 0x2E8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EA8u;
    // 0x2e8eac: 0x8e051410  lw          $a1, 0x1410($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAC8u, 0x2E8EA8u, 0x2E8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB0u;
label_2e8eb0:
    // 0x2e8eb0: 0xc0c11da  jal         func_304768
label_2e8eb4:
    if (ctx->pc == 0x2E8EB4u) {
        ctx->pc = 0x2E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EB0u;
        // 0x2e8eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EB8u;
        goto label_2e8eb8;
    }
    ctx->pc = 0x2E8EB0u;
    SET_GPR_U32(ctx, 31, 0x2E8EB8u);
    ctx->pc = 0x2E8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EB0u;
    // 0x2e8eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E8EB0u, 0x2E8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB8u;
label_2e8eb8:
    // 0x2e8eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ebc:
    // 0x2e8ebc: 0xc0cda26  jal         func_336898
label_2e8ec0:
    if (ctx->pc == 0x2E8EC0u) {
        ctx->pc = 0x2E8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EBCu;
        // 0x2e8ec0: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EC4u;
        goto label_2e8ec4;
    }
    ctx->pc = 0x2E8EBCu;
    SET_GPR_U32(ctx, 31, 0x2E8EC4u);
    ctx->pc = 0x2E8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EBCu;
    // 0x2e8ec0: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2E8EBCu, 0x2E8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EC4u;
label_2e8ec4:
    // 0x2e8ec4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e8ec8:
    if (ctx->pc == 0x2E8EC8u) {
        ctx->pc = 0x2E8ECCu;
        goto label_2e8ecc;
    }
    ctx->pc = 0x2E8EC4u;
    {
        const bool branch_taken_0x2e8ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ec4) {
            ctx->pc = 0x2E8EE0u;
            goto label_2e8ee0;
        }
    }
    ctx->pc = 0x2E8ECCu;
label_2e8ecc:
    // 0x2e8ecc: 0xc0c11da  jal         func_304768
label_2e8ed0:
    if (ctx->pc == 0x2E8ED0u) {
        ctx->pc = 0x2E8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ECCu;
        // 0x2e8ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8ED4u;
        goto label_2e8ed4;
    }
    ctx->pc = 0x2E8ECCu;
    SET_GPR_U32(ctx, 31, 0x2E8ED4u);
    ctx->pc = 0x2E8ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8ECCu;
    // 0x2e8ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E8ECCu, 0x2E8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8ED4u;
label_2e8ed4:
    // 0x2e8ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ed8:
    // 0x2e8ed8: 0xc0cda26  jal         func_336898
label_2e8edc:
    if (ctx->pc == 0x2E8EDCu) {
        ctx->pc = 0x2E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED8u;
        // 0x2e8edc: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EE0u;
        goto label_2e8ee0;
    }
    ctx->pc = 0x2E8ED8u;
    SET_GPR_U32(ctx, 31, 0x2E8EE0u);
    ctx->pc = 0x2E8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8ED8u;
    // 0x2e8edc: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2E8ED8u, 0x2E8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EE0u;
label_2e8ee0:
    // 0x2e8ee0: 0xc0abe24  jal         func_2AF890
label_2e8ee4:
    if (ctx->pc == 0x2E8EE4u) {
        ctx->pc = 0x2E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE0u;
        // 0x2e8ee4: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EE8u;
        goto label_2e8ee8;
    }
    ctx->pc = 0x2E8EE0u;
    SET_GPR_U32(ctx, 31, 0x2E8EE8u);
    ctx->pc = 0x2E8EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EE0u;
    // 0x2e8ee4: 0xa20013f4  sb          $zero, 0x13F4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF890u, 0x2E8EE0u, 0x2E8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EE8u;
label_2e8ee8:
    // 0x2e8ee8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2e8eec:
    if (ctx->pc == 0x2E8EECu) {
        ctx->pc = 0x2E8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE8u;
        // 0x2e8eec: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8EF0u;
        goto label_2e8ef0;
    }
    ctx->pc = 0x2E8EE8u;
    {
        const bool branch_taken_0x2e8ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EE8u;
        // 0x2e8eec: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ee8) {
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8EF0u;
label_2e8ef0:
    // 0x2e8ef0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e8ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e8ef4:
    // 0x2e8ef4: 0x0  nop
    ctx->pc = 0x2e8ef4u;
    // NOP
label_2e8ef8:
    // 0x2e8ef8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e8ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8efc:
    // 0x2e8efc: 0x0  nop
    ctx->pc = 0x2e8efcu;
    // NOP
label_2e8f00:
    // 0x2e8f00: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2e8f04:
    if (ctx->pc == 0x2E8F04u) {
        ctx->pc = 0x2E8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F00u;
        // 0x2e8f04: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F08u;
        goto label_2e8f08;
    }
    ctx->pc = 0x2E8F00u;
    {
        const bool branch_taken_0x2e8f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8f00) {
            ctx->pc = 0x2E8F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8F00u;
            // 0x2e8f04: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8F08u;
label_2e8f08:
    // 0x2e8f08: 0xc06b692  jal         func_1ADA48
label_2e8f0c:
    if (ctx->pc == 0x2E8F0Cu) {
        ctx->pc = 0x2E8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F08u;
        // 0x2e8f0c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F10u;
        goto label_2e8f10;
    }
    ctx->pc = 0x2E8F08u;
    SET_GPR_U32(ctx, 31, 0x2E8F10u);
    ctx->pc = 0x2E8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F08u;
    // 0x2e8f0c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA48u, 0x2E8F08u, 0x2E8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F10u;
label_2e8f10:
    // 0x2e8f10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2e8f14:
    if (ctx->pc == 0x2E8F14u) {
        ctx->pc = 0x2E8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F10u;
        // 0x2e8f14: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F18u;
        goto label_2e8f18;
    }
    ctx->pc = 0x2E8F10u;
    {
        const bool branch_taken_0x2e8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f10) {
            ctx->pc = 0x2E8F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8F10u;
            // 0x2e8f14: 0x8e041454  lw          $a0, 0x1454($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F54u;
            goto label_2e8f54;
        }
    }
    ctx->pc = 0x2E8F18u;
label_2e8f18:
    // 0x2e8f18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e8f1c:
    // 0x2e8f1c: 0xc6001400  lwc1        $f0, 0x1400($s0)
    ctx->pc = 0x2e8f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8f20:
    // 0x2e8f20: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2e8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8f24:
    // 0x2e8f24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e8f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e8f28:
    // 0x2e8f28: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e8f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8f2c:
    // 0x2e8f2c: 0x0  nop
    ctx->pc = 0x2e8f2cu;
    // NOP
label_2e8f30:
    // 0x2e8f30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2e8f34:
    if (ctx->pc == 0x2E8F34u) {
        ctx->pc = 0x2E8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F30u;
        // 0x2e8f34: 0xe6001400  swc1        $f0, 0x1400($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F38u;
        goto label_2e8f38;
    }
    ctx->pc = 0x2E8F30u;
    {
        const bool branch_taken_0x2e8f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F30u;
        // 0x2e8f34: 0xe6001400  swc1        $f0, 0x1400($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f30) {
            ctx->pc = 0x2E8F50u;
            goto label_2e8f50;
        }
    }
    ctx->pc = 0x2E8F38u;
label_2e8f38:
    // 0x2e8f38: 0x8e021414  lw          $v0, 0x1414($s0)
    ctx->pc = 0x2e8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5140)));
label_2e8f3c:
    // 0x2e8f3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8f40:
    if (ctx->pc == 0x2E8F40u) {
        ctx->pc = 0x2E8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F3Cu;
        // 0x2e8f40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F44u;
        goto label_2e8f44;
    }
    ctx->pc = 0x2E8F3Cu;
    {
        const bool branch_taken_0x2e8f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F3Cu;
        // 0x2e8f40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f3c) {
            ctx->pc = 0x2E8F4Cu;
            goto label_2e8f4c;
        }
    }
    ctx->pc = 0x2E8F44u;
label_2e8f44:
    // 0x2e8f44: 0xe45489c0  swc1        $f20, -0x7640($v0)
    ctx->pc = 0x2e8f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), bits); }
label_2e8f48:
    // 0x2e8f48: 0xae001414  sw          $zero, 0x1414($s0)
    ctx->pc = 0x2e8f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5140), GPR_U32(ctx, 0));
label_2e8f4c:
    // 0x2e8f4c: 0xe6141400  swc1        $f20, 0x1400($s0)
    ctx->pc = 0x2e8f4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
label_2e8f50:
    // 0x2e8f50: 0x8e041454  lw          $a0, 0x1454($s0)
    ctx->pc = 0x2e8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5204)));
label_2e8f54:
    // 0x2e8f54: 0xc0d5d0a  jal         func_357428
label_2e8f58:
    if (ctx->pc == 0x2E8F58u) {
        ctx->pc = 0x2E8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F54u;
        // 0x2e8f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F5Cu;
        goto label_2e8f5c;
    }
    ctx->pc = 0x2E8F54u;
    SET_GPR_U32(ctx, 31, 0x2E8F5Cu);
    ctx->pc = 0x2E8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F54u;
    // 0x2e8f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357428u, 0x2E8F54u, 0x2E8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F5Cu;
label_2e8f5c:
    // 0x2e8f5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e8f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8f60:
    // 0x2e8f60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e8f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e8f64:
    // 0x2e8f64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8f68:
    // 0x2e8f68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e8f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e8f6c:
    // 0x2e8f6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e8f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8f70:
    // 0x2e8f70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2e8f70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e8f74:
    // 0x2e8f74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e8f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8f78:
    // 0x2e8f78: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e8f7c:
    // 0x2e8f7c: 0x3e00008  jr          $ra
label_2e8f80:
    if (ctx->pc == 0x2E8F80u) {
        ctx->pc = 0x2E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F7Cu;
        // 0x2e8f80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8F84u;
        goto label_2e8f84;
    }
    ctx->pc = 0x2E8F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F7Cu;
        // 0x2e8f80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F84u;
label_2e8f84:
    // 0x2e8f84: 0x0  nop
    ctx->pc = 0x2e8f84u;
    // NOP
    ctx->pc = 0x2e8f88u;
}
