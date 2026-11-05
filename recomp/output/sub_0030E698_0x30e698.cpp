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

// Function: sub_0030E698
// Address: 0x30e698 - 0x30ee58
void sub_0030E698_0x30e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E698_0x30e698");
#endif

    switch (ctx->pc) {
        case 0x30e698u: goto label_30e698;
        case 0x30e69cu: goto label_30e69c;
        case 0x30e6a0u: goto label_30e6a0;
        case 0x30e6a4u: goto label_30e6a4;
        case 0x30e6a8u: goto label_30e6a8;
        case 0x30e6acu: goto label_30e6ac;
        case 0x30e6b0u: goto label_30e6b0;
        case 0x30e6b4u: goto label_30e6b4;
        case 0x30e6b8u: goto label_30e6b8;
        case 0x30e6bcu: goto label_30e6bc;
        case 0x30e6c0u: goto label_30e6c0;
        case 0x30e6c4u: goto label_30e6c4;
        case 0x30e6c8u: goto label_30e6c8;
        case 0x30e6ccu: goto label_30e6cc;
        case 0x30e6d0u: goto label_30e6d0;
        case 0x30e6d4u: goto label_30e6d4;
        case 0x30e6d8u: goto label_30e6d8;
        case 0x30e6dcu: goto label_30e6dc;
        case 0x30e6e0u: goto label_30e6e0;
        case 0x30e6e4u: goto label_30e6e4;
        case 0x30e6e8u: goto label_30e6e8;
        case 0x30e6ecu: goto label_30e6ec;
        case 0x30e6f0u: goto label_30e6f0;
        case 0x30e6f4u: goto label_30e6f4;
        case 0x30e6f8u: goto label_30e6f8;
        case 0x30e6fcu: goto label_30e6fc;
        case 0x30e700u: goto label_30e700;
        case 0x30e704u: goto label_30e704;
        case 0x30e708u: goto label_30e708;
        case 0x30e70cu: goto label_30e70c;
        case 0x30e710u: goto label_30e710;
        case 0x30e714u: goto label_30e714;
        case 0x30e718u: goto label_30e718;
        case 0x30e71cu: goto label_30e71c;
        case 0x30e720u: goto label_30e720;
        case 0x30e724u: goto label_30e724;
        case 0x30e728u: goto label_30e728;
        case 0x30e72cu: goto label_30e72c;
        case 0x30e730u: goto label_30e730;
        case 0x30e734u: goto label_30e734;
        case 0x30e738u: goto label_30e738;
        case 0x30e73cu: goto label_30e73c;
        case 0x30e740u: goto label_30e740;
        case 0x30e744u: goto label_30e744;
        case 0x30e748u: goto label_30e748;
        case 0x30e74cu: goto label_30e74c;
        case 0x30e750u: goto label_30e750;
        case 0x30e754u: goto label_30e754;
        case 0x30e758u: goto label_30e758;
        case 0x30e75cu: goto label_30e75c;
        case 0x30e760u: goto label_30e760;
        case 0x30e764u: goto label_30e764;
        case 0x30e768u: goto label_30e768;
        case 0x30e76cu: goto label_30e76c;
        case 0x30e770u: goto label_30e770;
        case 0x30e774u: goto label_30e774;
        case 0x30e778u: goto label_30e778;
        case 0x30e77cu: goto label_30e77c;
        case 0x30e780u: goto label_30e780;
        case 0x30e784u: goto label_30e784;
        case 0x30e788u: goto label_30e788;
        case 0x30e78cu: goto label_30e78c;
        case 0x30e790u: goto label_30e790;
        case 0x30e794u: goto label_30e794;
        case 0x30e798u: goto label_30e798;
        case 0x30e79cu: goto label_30e79c;
        case 0x30e7a0u: goto label_30e7a0;
        case 0x30e7a4u: goto label_30e7a4;
        case 0x30e7a8u: goto label_30e7a8;
        case 0x30e7acu: goto label_30e7ac;
        case 0x30e7b0u: goto label_30e7b0;
        case 0x30e7b4u: goto label_30e7b4;
        case 0x30e7b8u: goto label_30e7b8;
        case 0x30e7bcu: goto label_30e7bc;
        case 0x30e7c0u: goto label_30e7c0;
        case 0x30e7c4u: goto label_30e7c4;
        case 0x30e7c8u: goto label_30e7c8;
        case 0x30e7ccu: goto label_30e7cc;
        case 0x30e7d0u: goto label_30e7d0;
        case 0x30e7d4u: goto label_30e7d4;
        case 0x30e7d8u: goto label_30e7d8;
        case 0x30e7dcu: goto label_30e7dc;
        case 0x30e7e0u: goto label_30e7e0;
        case 0x30e7e4u: goto label_30e7e4;
        case 0x30e7e8u: goto label_30e7e8;
        case 0x30e7ecu: goto label_30e7ec;
        case 0x30e7f0u: goto label_30e7f0;
        case 0x30e7f4u: goto label_30e7f4;
        case 0x30e7f8u: goto label_30e7f8;
        case 0x30e7fcu: goto label_30e7fc;
        case 0x30e800u: goto label_30e800;
        case 0x30e804u: goto label_30e804;
        case 0x30e808u: goto label_30e808;
        case 0x30e80cu: goto label_30e80c;
        case 0x30e810u: goto label_30e810;
        case 0x30e814u: goto label_30e814;
        case 0x30e818u: goto label_30e818;
        case 0x30e81cu: goto label_30e81c;
        case 0x30e820u: goto label_30e820;
        case 0x30e824u: goto label_30e824;
        case 0x30e828u: goto label_30e828;
        case 0x30e82cu: goto label_30e82c;
        case 0x30e830u: goto label_30e830;
        case 0x30e834u: goto label_30e834;
        case 0x30e838u: goto label_30e838;
        case 0x30e83cu: goto label_30e83c;
        case 0x30e840u: goto label_30e840;
        case 0x30e844u: goto label_30e844;
        case 0x30e848u: goto label_30e848;
        case 0x30e84cu: goto label_30e84c;
        case 0x30e850u: goto label_30e850;
        case 0x30e854u: goto label_30e854;
        case 0x30e858u: goto label_30e858;
        case 0x30e85cu: goto label_30e85c;
        case 0x30e860u: goto label_30e860;
        case 0x30e864u: goto label_30e864;
        case 0x30e868u: goto label_30e868;
        case 0x30e86cu: goto label_30e86c;
        case 0x30e870u: goto label_30e870;
        case 0x30e874u: goto label_30e874;
        case 0x30e878u: goto label_30e878;
        case 0x30e87cu: goto label_30e87c;
        case 0x30e880u: goto label_30e880;
        case 0x30e884u: goto label_30e884;
        case 0x30e888u: goto label_30e888;
        case 0x30e88cu: goto label_30e88c;
        case 0x30e890u: goto label_30e890;
        case 0x30e894u: goto label_30e894;
        case 0x30e898u: goto label_30e898;
        case 0x30e89cu: goto label_30e89c;
        case 0x30e8a0u: goto label_30e8a0;
        case 0x30e8a4u: goto label_30e8a4;
        case 0x30e8a8u: goto label_30e8a8;
        case 0x30e8acu: goto label_30e8ac;
        case 0x30e8b0u: goto label_30e8b0;
        case 0x30e8b4u: goto label_30e8b4;
        case 0x30e8b8u: goto label_30e8b8;
        case 0x30e8bcu: goto label_30e8bc;
        case 0x30e8c0u: goto label_30e8c0;
        case 0x30e8c4u: goto label_30e8c4;
        case 0x30e8c8u: goto label_30e8c8;
        case 0x30e8ccu: goto label_30e8cc;
        case 0x30e8d0u: goto label_30e8d0;
        case 0x30e8d4u: goto label_30e8d4;
        case 0x30e8d8u: goto label_30e8d8;
        case 0x30e8dcu: goto label_30e8dc;
        case 0x30e8e0u: goto label_30e8e0;
        case 0x30e8e4u: goto label_30e8e4;
        case 0x30e8e8u: goto label_30e8e8;
        case 0x30e8ecu: goto label_30e8ec;
        case 0x30e8f0u: goto label_30e8f0;
        case 0x30e8f4u: goto label_30e8f4;
        case 0x30e8f8u: goto label_30e8f8;
        case 0x30e8fcu: goto label_30e8fc;
        case 0x30e900u: goto label_30e900;
        case 0x30e904u: goto label_30e904;
        case 0x30e908u: goto label_30e908;
        case 0x30e90cu: goto label_30e90c;
        case 0x30e910u: goto label_30e910;
        case 0x30e914u: goto label_30e914;
        case 0x30e918u: goto label_30e918;
        case 0x30e91cu: goto label_30e91c;
        case 0x30e920u: goto label_30e920;
        case 0x30e924u: goto label_30e924;
        case 0x30e928u: goto label_30e928;
        case 0x30e92cu: goto label_30e92c;
        case 0x30e930u: goto label_30e930;
        case 0x30e934u: goto label_30e934;
        case 0x30e938u: goto label_30e938;
        case 0x30e93cu: goto label_30e93c;
        case 0x30e940u: goto label_30e940;
        case 0x30e944u: goto label_30e944;
        case 0x30e948u: goto label_30e948;
        case 0x30e94cu: goto label_30e94c;
        case 0x30e950u: goto label_30e950;
        case 0x30e954u: goto label_30e954;
        case 0x30e958u: goto label_30e958;
        case 0x30e95cu: goto label_30e95c;
        case 0x30e960u: goto label_30e960;
        case 0x30e964u: goto label_30e964;
        case 0x30e968u: goto label_30e968;
        case 0x30e96cu: goto label_30e96c;
        case 0x30e970u: goto label_30e970;
        case 0x30e974u: goto label_30e974;
        case 0x30e978u: goto label_30e978;
        case 0x30e97cu: goto label_30e97c;
        case 0x30e980u: goto label_30e980;
        case 0x30e984u: goto label_30e984;
        case 0x30e988u: goto label_30e988;
        case 0x30e98cu: goto label_30e98c;
        case 0x30e990u: goto label_30e990;
        case 0x30e994u: goto label_30e994;
        case 0x30e998u: goto label_30e998;
        case 0x30e99cu: goto label_30e99c;
        case 0x30e9a0u: goto label_30e9a0;
        case 0x30e9a4u: goto label_30e9a4;
        case 0x30e9a8u: goto label_30e9a8;
        case 0x30e9acu: goto label_30e9ac;
        case 0x30e9b0u: goto label_30e9b0;
        case 0x30e9b4u: goto label_30e9b4;
        case 0x30e9b8u: goto label_30e9b8;
        case 0x30e9bcu: goto label_30e9bc;
        case 0x30e9c0u: goto label_30e9c0;
        case 0x30e9c4u: goto label_30e9c4;
        case 0x30e9c8u: goto label_30e9c8;
        case 0x30e9ccu: goto label_30e9cc;
        case 0x30e9d0u: goto label_30e9d0;
        case 0x30e9d4u: goto label_30e9d4;
        case 0x30e9d8u: goto label_30e9d8;
        case 0x30e9dcu: goto label_30e9dc;
        case 0x30e9e0u: goto label_30e9e0;
        case 0x30e9e4u: goto label_30e9e4;
        case 0x30e9e8u: goto label_30e9e8;
        case 0x30e9ecu: goto label_30e9ec;
        case 0x30e9f0u: goto label_30e9f0;
        case 0x30e9f4u: goto label_30e9f4;
        case 0x30e9f8u: goto label_30e9f8;
        case 0x30e9fcu: goto label_30e9fc;
        case 0x30ea00u: goto label_30ea00;
        case 0x30ea04u: goto label_30ea04;
        case 0x30ea08u: goto label_30ea08;
        case 0x30ea0cu: goto label_30ea0c;
        case 0x30ea10u: goto label_30ea10;
        case 0x30ea14u: goto label_30ea14;
        case 0x30ea18u: goto label_30ea18;
        case 0x30ea1cu: goto label_30ea1c;
        case 0x30ea20u: goto label_30ea20;
        case 0x30ea24u: goto label_30ea24;
        case 0x30ea28u: goto label_30ea28;
        case 0x30ea2cu: goto label_30ea2c;
        case 0x30ea30u: goto label_30ea30;
        case 0x30ea34u: goto label_30ea34;
        case 0x30ea38u: goto label_30ea38;
        case 0x30ea3cu: goto label_30ea3c;
        case 0x30ea40u: goto label_30ea40;
        case 0x30ea44u: goto label_30ea44;
        case 0x30ea48u: goto label_30ea48;
        case 0x30ea4cu: goto label_30ea4c;
        case 0x30ea50u: goto label_30ea50;
        case 0x30ea54u: goto label_30ea54;
        case 0x30ea58u: goto label_30ea58;
        case 0x30ea5cu: goto label_30ea5c;
        case 0x30ea60u: goto label_30ea60;
        case 0x30ea64u: goto label_30ea64;
        case 0x30ea68u: goto label_30ea68;
        case 0x30ea6cu: goto label_30ea6c;
        case 0x30ea70u: goto label_30ea70;
        case 0x30ea74u: goto label_30ea74;
        case 0x30ea78u: goto label_30ea78;
        case 0x30ea7cu: goto label_30ea7c;
        case 0x30ea80u: goto label_30ea80;
        case 0x30ea84u: goto label_30ea84;
        case 0x30ea88u: goto label_30ea88;
        case 0x30ea8cu: goto label_30ea8c;
        case 0x30ea90u: goto label_30ea90;
        case 0x30ea94u: goto label_30ea94;
        case 0x30ea98u: goto label_30ea98;
        case 0x30ea9cu: goto label_30ea9c;
        case 0x30eaa0u: goto label_30eaa0;
        case 0x30eaa4u: goto label_30eaa4;
        case 0x30eaa8u: goto label_30eaa8;
        case 0x30eaacu: goto label_30eaac;
        case 0x30eab0u: goto label_30eab0;
        case 0x30eab4u: goto label_30eab4;
        case 0x30eab8u: goto label_30eab8;
        case 0x30eabcu: goto label_30eabc;
        case 0x30eac0u: goto label_30eac0;
        case 0x30eac4u: goto label_30eac4;
        case 0x30eac8u: goto label_30eac8;
        case 0x30eaccu: goto label_30eacc;
        case 0x30ead0u: goto label_30ead0;
        case 0x30ead4u: goto label_30ead4;
        case 0x30ead8u: goto label_30ead8;
        case 0x30eadcu: goto label_30eadc;
        case 0x30eae0u: goto label_30eae0;
        case 0x30eae4u: goto label_30eae4;
        case 0x30eae8u: goto label_30eae8;
        case 0x30eaecu: goto label_30eaec;
        case 0x30eaf0u: goto label_30eaf0;
        case 0x30eaf4u: goto label_30eaf4;
        case 0x30eaf8u: goto label_30eaf8;
        case 0x30eafcu: goto label_30eafc;
        case 0x30eb00u: goto label_30eb00;
        case 0x30eb04u: goto label_30eb04;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb0cu: goto label_30eb0c;
        case 0x30eb10u: goto label_30eb10;
        case 0x30eb14u: goto label_30eb14;
        case 0x30eb18u: goto label_30eb18;
        case 0x30eb1cu: goto label_30eb1c;
        case 0x30eb20u: goto label_30eb20;
        case 0x30eb24u: goto label_30eb24;
        case 0x30eb28u: goto label_30eb28;
        case 0x30eb2cu: goto label_30eb2c;
        case 0x30eb30u: goto label_30eb30;
        case 0x30eb34u: goto label_30eb34;
        case 0x30eb38u: goto label_30eb38;
        case 0x30eb3cu: goto label_30eb3c;
        case 0x30eb40u: goto label_30eb40;
        case 0x30eb44u: goto label_30eb44;
        case 0x30eb48u: goto label_30eb48;
        case 0x30eb4cu: goto label_30eb4c;
        case 0x30eb50u: goto label_30eb50;
        case 0x30eb54u: goto label_30eb54;
        case 0x30eb58u: goto label_30eb58;
        case 0x30eb5cu: goto label_30eb5c;
        case 0x30eb60u: goto label_30eb60;
        case 0x30eb64u: goto label_30eb64;
        case 0x30eb68u: goto label_30eb68;
        case 0x30eb6cu: goto label_30eb6c;
        case 0x30eb70u: goto label_30eb70;
        case 0x30eb74u: goto label_30eb74;
        case 0x30eb78u: goto label_30eb78;
        case 0x30eb7cu: goto label_30eb7c;
        case 0x30eb80u: goto label_30eb80;
        case 0x30eb84u: goto label_30eb84;
        case 0x30eb88u: goto label_30eb88;
        case 0x30eb8cu: goto label_30eb8c;
        case 0x30eb90u: goto label_30eb90;
        case 0x30eb94u: goto label_30eb94;
        case 0x30eb98u: goto label_30eb98;
        case 0x30eb9cu: goto label_30eb9c;
        case 0x30eba0u: goto label_30eba0;
        case 0x30eba4u: goto label_30eba4;
        case 0x30eba8u: goto label_30eba8;
        case 0x30ebacu: goto label_30ebac;
        case 0x30ebb0u: goto label_30ebb0;
        case 0x30ebb4u: goto label_30ebb4;
        case 0x30ebb8u: goto label_30ebb8;
        case 0x30ebbcu: goto label_30ebbc;
        case 0x30ebc0u: goto label_30ebc0;
        case 0x30ebc4u: goto label_30ebc4;
        case 0x30ebc8u: goto label_30ebc8;
        case 0x30ebccu: goto label_30ebcc;
        case 0x30ebd0u: goto label_30ebd0;
        case 0x30ebd4u: goto label_30ebd4;
        case 0x30ebd8u: goto label_30ebd8;
        case 0x30ebdcu: goto label_30ebdc;
        case 0x30ebe0u: goto label_30ebe0;
        case 0x30ebe4u: goto label_30ebe4;
        case 0x30ebe8u: goto label_30ebe8;
        case 0x30ebecu: goto label_30ebec;
        case 0x30ebf0u: goto label_30ebf0;
        case 0x30ebf4u: goto label_30ebf4;
        case 0x30ebf8u: goto label_30ebf8;
        case 0x30ebfcu: goto label_30ebfc;
        case 0x30ec00u: goto label_30ec00;
        case 0x30ec04u: goto label_30ec04;
        case 0x30ec08u: goto label_30ec08;
        case 0x30ec0cu: goto label_30ec0c;
        case 0x30ec10u: goto label_30ec10;
        case 0x30ec14u: goto label_30ec14;
        case 0x30ec18u: goto label_30ec18;
        case 0x30ec1cu: goto label_30ec1c;
        case 0x30ec20u: goto label_30ec20;
        case 0x30ec24u: goto label_30ec24;
        case 0x30ec28u: goto label_30ec28;
        case 0x30ec2cu: goto label_30ec2c;
        case 0x30ec30u: goto label_30ec30;
        case 0x30ec34u: goto label_30ec34;
        case 0x30ec38u: goto label_30ec38;
        case 0x30ec3cu: goto label_30ec3c;
        case 0x30ec40u: goto label_30ec40;
        case 0x30ec44u: goto label_30ec44;
        case 0x30ec48u: goto label_30ec48;
        case 0x30ec4cu: goto label_30ec4c;
        case 0x30ec50u: goto label_30ec50;
        case 0x30ec54u: goto label_30ec54;
        case 0x30ec58u: goto label_30ec58;
        case 0x30ec5cu: goto label_30ec5c;
        case 0x30ec60u: goto label_30ec60;
        case 0x30ec64u: goto label_30ec64;
        case 0x30ec68u: goto label_30ec68;
        case 0x30ec6cu: goto label_30ec6c;
        case 0x30ec70u: goto label_30ec70;
        case 0x30ec74u: goto label_30ec74;
        case 0x30ec78u: goto label_30ec78;
        case 0x30ec7cu: goto label_30ec7c;
        case 0x30ec80u: goto label_30ec80;
        case 0x30ec84u: goto label_30ec84;
        case 0x30ec88u: goto label_30ec88;
        case 0x30ec8cu: goto label_30ec8c;
        case 0x30ec90u: goto label_30ec90;
        case 0x30ec94u: goto label_30ec94;
        case 0x30ec98u: goto label_30ec98;
        case 0x30ec9cu: goto label_30ec9c;
        case 0x30eca0u: goto label_30eca0;
        case 0x30eca4u: goto label_30eca4;
        case 0x30eca8u: goto label_30eca8;
        case 0x30ecacu: goto label_30ecac;
        case 0x30ecb0u: goto label_30ecb0;
        case 0x30ecb4u: goto label_30ecb4;
        case 0x30ecb8u: goto label_30ecb8;
        case 0x30ecbcu: goto label_30ecbc;
        case 0x30ecc0u: goto label_30ecc0;
        case 0x30ecc4u: goto label_30ecc4;
        case 0x30ecc8u: goto label_30ecc8;
        case 0x30ecccu: goto label_30eccc;
        case 0x30ecd0u: goto label_30ecd0;
        case 0x30ecd4u: goto label_30ecd4;
        case 0x30ecd8u: goto label_30ecd8;
        case 0x30ecdcu: goto label_30ecdc;
        case 0x30ece0u: goto label_30ece0;
        case 0x30ece4u: goto label_30ece4;
        case 0x30ece8u: goto label_30ece8;
        case 0x30ececu: goto label_30ecec;
        case 0x30ecf0u: goto label_30ecf0;
        case 0x30ecf4u: goto label_30ecf4;
        case 0x30ecf8u: goto label_30ecf8;
        case 0x30ecfcu: goto label_30ecfc;
        case 0x30ed00u: goto label_30ed00;
        case 0x30ed04u: goto label_30ed04;
        case 0x30ed08u: goto label_30ed08;
        case 0x30ed0cu: goto label_30ed0c;
        case 0x30ed10u: goto label_30ed10;
        case 0x30ed14u: goto label_30ed14;
        case 0x30ed18u: goto label_30ed18;
        case 0x30ed1cu: goto label_30ed1c;
        case 0x30ed20u: goto label_30ed20;
        case 0x30ed24u: goto label_30ed24;
        case 0x30ed28u: goto label_30ed28;
        case 0x30ed2cu: goto label_30ed2c;
        case 0x30ed30u: goto label_30ed30;
        case 0x30ed34u: goto label_30ed34;
        case 0x30ed38u: goto label_30ed38;
        case 0x30ed3cu: goto label_30ed3c;
        case 0x30ed40u: goto label_30ed40;
        case 0x30ed44u: goto label_30ed44;
        case 0x30ed48u: goto label_30ed48;
        case 0x30ed4cu: goto label_30ed4c;
        case 0x30ed50u: goto label_30ed50;
        case 0x30ed54u: goto label_30ed54;
        case 0x30ed58u: goto label_30ed58;
        case 0x30ed5cu: goto label_30ed5c;
        case 0x30ed60u: goto label_30ed60;
        case 0x30ed64u: goto label_30ed64;
        case 0x30ed68u: goto label_30ed68;
        case 0x30ed6cu: goto label_30ed6c;
        case 0x30ed70u: goto label_30ed70;
        case 0x30ed74u: goto label_30ed74;
        case 0x30ed78u: goto label_30ed78;
        case 0x30ed7cu: goto label_30ed7c;
        case 0x30ed80u: goto label_30ed80;
        case 0x30ed84u: goto label_30ed84;
        case 0x30ed88u: goto label_30ed88;
        case 0x30ed8cu: goto label_30ed8c;
        case 0x30ed90u: goto label_30ed90;
        case 0x30ed94u: goto label_30ed94;
        case 0x30ed98u: goto label_30ed98;
        case 0x30ed9cu: goto label_30ed9c;
        case 0x30eda0u: goto label_30eda0;
        case 0x30eda4u: goto label_30eda4;
        case 0x30eda8u: goto label_30eda8;
        case 0x30edacu: goto label_30edac;
        case 0x30edb0u: goto label_30edb0;
        case 0x30edb4u: goto label_30edb4;
        case 0x30edb8u: goto label_30edb8;
        case 0x30edbcu: goto label_30edbc;
        case 0x30edc0u: goto label_30edc0;
        case 0x30edc4u: goto label_30edc4;
        case 0x30edc8u: goto label_30edc8;
        case 0x30edccu: goto label_30edcc;
        case 0x30edd0u: goto label_30edd0;
        case 0x30edd4u: goto label_30edd4;
        case 0x30edd8u: goto label_30edd8;
        case 0x30eddcu: goto label_30eddc;
        case 0x30ede0u: goto label_30ede0;
        case 0x30ede4u: goto label_30ede4;
        case 0x30ede8u: goto label_30ede8;
        case 0x30edecu: goto label_30edec;
        case 0x30edf0u: goto label_30edf0;
        case 0x30edf4u: goto label_30edf4;
        case 0x30edf8u: goto label_30edf8;
        case 0x30edfcu: goto label_30edfc;
        case 0x30ee00u: goto label_30ee00;
        case 0x30ee04u: goto label_30ee04;
        case 0x30ee08u: goto label_30ee08;
        case 0x30ee0cu: goto label_30ee0c;
        case 0x30ee10u: goto label_30ee10;
        case 0x30ee14u: goto label_30ee14;
        case 0x30ee18u: goto label_30ee18;
        case 0x30ee1cu: goto label_30ee1c;
        case 0x30ee20u: goto label_30ee20;
        case 0x30ee24u: goto label_30ee24;
        case 0x30ee28u: goto label_30ee28;
        case 0x30ee2cu: goto label_30ee2c;
        case 0x30ee30u: goto label_30ee30;
        case 0x30ee34u: goto label_30ee34;
        case 0x30ee38u: goto label_30ee38;
        case 0x30ee3cu: goto label_30ee3c;
        case 0x30ee40u: goto label_30ee40;
        case 0x30ee44u: goto label_30ee44;
        case 0x30ee48u: goto label_30ee48;
        case 0x30ee4cu: goto label_30ee4c;
        case 0x30ee50u: goto label_30ee50;
        case 0x30ee54u: goto label_30ee54;
        default: break;
    }

    ctx->pc = 0x30e698u;

label_30e698:
    // 0x30e698: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x30e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_30e69c:
    // 0x30e69c: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x30e69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_30e6a0:
    // 0x30e6a0: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x30e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
label_30e6a4:
    // 0x30e6a4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x30e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_30e6a8:
    // 0x30e6a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e6ac:
    // 0x30e6ac: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x30e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_30e6b0:
    // 0x30e6b0: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x30e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_30e6b4:
    // 0x30e6b4: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x30e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
label_30e6b8:
    // 0x30e6b8: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x30e6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
label_30e6bc:
    // 0x30e6bc: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x30e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
label_30e6c0:
    // 0x30e6c0: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x30e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
label_30e6c4:
    // 0x30e6c4: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x30e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
label_30e6c8:
    // 0x30e6c8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x30e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_30e6cc:
    // 0x30e6cc: 0x104001d6  beqz        $v0, . + 4 + (0x1D6 << 2)
label_30e6d0:
    if (ctx->pc == 0x30E6D0u) {
        ctx->pc = 0x30E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6CCu;
        // 0x30e6d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E6D4u;
        goto label_30e6d4;
    }
    ctx->pc = 0x30E6CCu;
    {
        const bool branch_taken_0x30e6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6CCu;
        // 0x30e6d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6cc) {
            ctx->pc = 0x30EE28u;
            goto label_30ee28;
        }
    }
    ctx->pc = 0x30E6D4u;
label_30e6d4:
    // 0x30e6d4: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x30e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_30e6d8:
    // 0x30e6d8: 0x104001d3  beqz        $v0, . + 4 + (0x1D3 << 2)
label_30e6dc:
    if (ctx->pc == 0x30E6DCu) {
        ctx->pc = 0x30E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6D8u;
        // 0x30e6dc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E6E0u;
        goto label_30e6e0;
    }
    ctx->pc = 0x30E6D8u;
    {
        const bool branch_taken_0x30e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6D8u;
        // 0x30e6dc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6d8) {
            ctx->pc = 0x30EE28u;
            goto label_30ee28;
        }
    }
    ctx->pc = 0x30E6E0u;
label_30e6e0:
    // 0x30e6e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30e6e4:
    // 0x30e6e4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x30e6e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e6e8:
    // 0x30e6e8: 0xc0f6a96  jal         func_3DAA58
label_30e6ec:
    if (ctx->pc == 0x30E6ECu) {
        ctx->pc = 0x30E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6E8u;
        // 0x30e6ec: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E6F0u;
        goto label_30e6f0;
    }
    ctx->pc = 0x30E6E8u;
    SET_GPR_U32(ctx, 31, 0x30E6F0u);
    ctx->pc = 0x30E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E6E8u;
    // 0x30e6ec: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30E6E8u, 0x30E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E6F0u;
label_30e6f0:
    // 0x30e6f0: 0x12a0003e  beqz        $s5, . + 4 + (0x3E << 2)
label_30e6f4:
    if (ctx->pc == 0x30E6F4u) {
        ctx->pc = 0x30E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6F0u;
        // 0x30e6f4: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E6F8u;
        goto label_30e6f8;
    }
    ctx->pc = 0x30E6F0u;
    {
        const bool branch_taken_0x30e6f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6F0u;
        // 0x30e6f4: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6f0) {
            ctx->pc = 0x30E7ECu;
            goto label_30e7ec;
        }
    }
    ctx->pc = 0x30E6F8u;
label_30e6f8:
    // 0x30e6f8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x30e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_30e6fc:
    // 0x30e6fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x30e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_30e700:
    // 0x30e700: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_30e704:
    // 0x30e704: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x30e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_30e708:
    // 0x30e708: 0x40f809  jalr        $v0
label_30e70c:
    if (ctx->pc == 0x30E70Cu) {
        ctx->pc = 0x30E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E708u;
        // 0x30e70c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E710u;
        goto label_30e710;
    }
    ctx->pc = 0x30E708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E710u);
        ctx->pc = 0x30E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E708u;
        // 0x30e70c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E708u, 0x30E710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E710u;
label_30e710:
    // 0x30e710: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e714:
    // 0x30e714: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x30e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_30e718:
    // 0x30e718: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_30e71c:
    // 0x30e71c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x30e71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_30e720:
    // 0x30e720: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e724:
    // 0x30e724: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x30e724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_30e728:
    // 0x30e728: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e72c:
    // 0x30e72c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x30e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_30e730:
    // 0x30e730: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x30e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30e734:
    // 0x30e734: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x30e734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_30e738:
    // 0x30e738: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x30e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e73c:
    // 0x30e73c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30e73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e740:
    // 0x30e740: 0x0  nop
    ctx->pc = 0x30e740u;
    // NOP
label_30e744:
    // 0x30e744: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30e748:
    if (ctx->pc == 0x30E748u) {
        ctx->pc = 0x30E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E744u;
        // 0x30e748: 0x24650024  addiu       $a1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E74Cu;
        goto label_30e74c;
    }
    ctx->pc = 0x30E744u;
    {
        const bool branch_taken_0x30e744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E744u;
        // 0x30e748: 0x24650024  addiu       $a1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e744) {
            ctx->pc = 0x30E750u;
            goto label_30e750;
        }
    }
    ctx->pc = 0x30E74Cu;
label_30e74c:
    // 0x30e74c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30e74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30e750:
    // 0x30e750: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30e754:
    // 0x30e754: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x30e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30e758:
    // 0x30e758: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e75c:
    // 0x30e75c: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x30e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
label_30e760:
    // 0x30e760: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x30e760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_30e764:
    // 0x30e764: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30e764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_30e768:
    // 0x30e768: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x30e768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30e76c:
    // 0x30e76c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30e76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_30e770:
    // 0x30e770: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x30e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_30e774:
    // 0x30e774: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x30e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e778:
    // 0x30e778: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x30e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30e77c:
    // 0x30e77c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x30e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e780:
    // 0x30e780: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x30e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30e784:
    // 0x30e784: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x30e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e788:
    // 0x30e788: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x30e788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_30e78c:
    // 0x30e78c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x30e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_30e790:
    // 0x30e790: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x30e790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_30e794:
    // 0x30e794: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x30e794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_30e798:
    // 0x30e798: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30e79c:
    // 0x30e79c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x30e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_30e7a0:
    // 0x30e7a0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x30e7a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_30e7a4:
    // 0x30e7a4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x30e7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_30e7a8:
    // 0x30e7a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x30e7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_30e7ac:
    // 0x30e7ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x30e7acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_30e7b0:
    // 0x30e7b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x30e7b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_30e7b4:
    // 0x30e7b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x30e7b4u;
    // VWAITQ (Q already resolved in this runtime)
label_30e7b8:
    // 0x30e7b8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x30e7b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_30e7bc:
    // 0x30e7bc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x30e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_30e7c0:
    // 0x30e7c0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x30e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e7c4:
    // 0x30e7c4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e7c8:
    // 0x30e7c8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x30e7c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_30e7cc:
    // 0x30e7cc: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x30e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e7d0:
    // 0x30e7d0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x30e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e7d4:
    // 0x30e7d4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x30e7d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_30e7d8:
    // 0x30e7d8: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x30e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e7dc:
    // 0x30e7dc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x30e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e7e0:
    // 0x30e7e0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x30e7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_30e7e4:
    // 0x30e7e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_30e7e8:
    // 0x30e7e8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x30e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_30e7ec:
    // 0x30e7ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e7f0:
    // 0x30e7f0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x30e7f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e7f4:
    // 0x30e7f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e7f8:
    // 0x30e7f8: 0xc0dc1ea  jal         func_3707A8
label_30e7fc:
    if (ctx->pc == 0x30E7FCu) {
        ctx->pc = 0x30E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7F8u;
        // 0x30e7fc: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E800u;
        goto label_30e800;
    }
    ctx->pc = 0x30E7F8u;
    SET_GPR_U32(ctx, 31, 0x30E800u);
    ctx->pc = 0x30E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E7F8u;
    // 0x30e7fc: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3707A8u, 0x30E7F8u, 0x30E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E800u;
label_30e800:
    // 0x30e800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e804:
    // 0x30e804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30e804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30e808:
    // 0x30e808: 0xc0dab74  jal         func_36ADD0
label_30e80c:
    if (ctx->pc == 0x30E80Cu) {
        ctx->pc = 0x30E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E808u;
        // 0x30e80c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E810u;
        goto label_30e810;
    }
    ctx->pc = 0x30E808u;
    SET_GPR_U32(ctx, 31, 0x30E810u);
    ctx->pc = 0x30E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E808u;
    // 0x30e80c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x30E808u, 0x30E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E810u;
label_30e810:
    // 0x30e810: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x30e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_30e814:
    // 0x30e814: 0x1840017e  blez        $v0, . + 4 + (0x17E << 2)
label_30e818:
    if (ctx->pc == 0x30E818u) {
        ctx->pc = 0x30E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E814u;
        // 0x30e818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E81Cu;
        goto label_30e81c;
    }
    ctx->pc = 0x30E814u;
    {
        const bool branch_taken_0x30e814 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E814u;
        // 0x30e818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e814) {
            ctx->pc = 0x30EE10u;
            goto label_30ee10;
        }
    }
    ctx->pc = 0x30E81Cu;
label_30e81c:
    // 0x30e81c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x30e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_30e820:
    // 0x30e820: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_30e824:
    // 0x30e824: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x30e824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30e828:
    // 0x30e828: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x30e828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_30e82c:
    // 0x30e82c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30e830:
    // 0x30e830: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x30e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_30e834:
    // 0x30e834: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x30e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_30e838:
    // 0x30e838: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30e838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30e83c:
    // 0x30e83c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30e840:
    // 0x30e840: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_30e844:
    // 0x30e844: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x30e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_30e848:
    // 0x30e848: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x30e848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_30e84c:
    // 0x30e84c: 0x12a00029  beqz        $s5, . + 4 + (0x29 << 2)
label_30e850:
    if (ctx->pc == 0x30E850u) {
        ctx->pc = 0x30E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E84Cu;
        // 0x30e850: 0xafa50088  sw          $a1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E854u;
        goto label_30e854;
    }
    ctx->pc = 0x30E84Cu;
    {
        const bool branch_taken_0x30e84c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E84Cu;
        // 0x30e850: 0xafa50088  sw          $a1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e84c) {
            ctx->pc = 0x30E8F4u;
            goto label_30e8f4;
        }
    }
    ctx->pc = 0x30E854u;
label_30e854:
    // 0x30e854: 0x27b80090  addiu       $t8, $sp, 0x90
    ctx->pc = 0x30e854u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30e858:
    // 0x30e858: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x30e858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30e85c:
    // 0x30e85c: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x30e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_30e860:
    // 0x30e860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30e864:
    // 0x30e864: 0x0  nop
    ctx->pc = 0x30e864u;
    // NOP
label_30e868:
    // 0x30e868: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30e86c:
    // 0x30e86c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_30e870:
    // 0x30e870: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x30e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30e874:
    // 0x30e874: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x30e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_30e878:
    // 0x30e878: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e87c:
    // 0x30e87c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x30e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e880:
    // 0x30e880: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x30e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30e884:
    // 0x30e884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30e884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30e888:
    // 0x30e888: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x30e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30e88c:
    // 0x30e88c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x30e88cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_30e890:
    // 0x30e890: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x30e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e894:
    // 0x30e894: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x30e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30e898:
    // 0x30e898: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30e898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_30e89c:
    // 0x30e89c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30e8a0:
    // 0x30e8a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30e8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_30e8a4:
    // 0x30e8a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30e8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_30e8a8:
    // 0x30e8a8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30e8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_30e8ac:
    // 0x30e8ac: 0x461ffee  bgez        $v1, . + 4 + (-0x12 << 2)
label_30e8b0:
    if (ctx->pc == 0x30E8B0u) {
        ctx->pc = 0x30E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8ACu;
        // 0x30e8b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8B4u;
        goto label_30e8b4;
    }
    ctx->pc = 0x30E8ACu;
    {
        const bool branch_taken_0x30e8ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8ACu;
        // 0x30e8b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8ac) {
            ctx->pc = 0x30E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e868;
        }
    }
    ctx->pc = 0x30E8B4u;
label_30e8b4:
    // 0x30e8b4: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_30e8b8:
    if (ctx->pc == 0x30E8B8u) {
        ctx->pc = 0x30E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8B4u;
        // 0x30e8b8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8BCu;
        goto label_30e8bc;
    }
    ctx->pc = 0x30E8B4u;
    {
        const bool branch_taken_0x30e8b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8B4u;
        // 0x30e8b8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8b4) {
            ctx->pc = 0x30E8F4u;
            goto label_30e8f4;
        }
    }
    ctx->pc = 0x30E8BCu;
label_30e8bc:
    // 0x30e8bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e8bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30e8c0:
    // 0x30e8c0: 0x0  nop
    ctx->pc = 0x30e8c0u;
    // NOP
label_30e8c4:
    // 0x30e8c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e8c8:
    // 0x30e8c8: 0x0  nop
    ctx->pc = 0x30e8c8u;
    // NOP
label_30e8cc:
    // 0x30e8cc: 0x45000065  bc1f        . + 4 + (0x65 << 2)
label_30e8d0:
    if (ctx->pc == 0x30E8D0u) {
        ctx->pc = 0x30E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8CCu;
        // 0x30e8d0: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8D4u;
        goto label_30e8d4;
    }
    ctx->pc = 0x30E8CCu;
    {
        const bool branch_taken_0x30e8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8CCu;
        // 0x30e8d0: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8cc) {
            ctx->pc = 0x30EA64u;
            goto label_30ea64;
        }
    }
    ctx->pc = 0x30E8D4u;
label_30e8d4:
    // 0x30e8d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e8d8:
    // 0x30e8d8: 0x0  nop
    ctx->pc = 0x30e8d8u;
    // NOP
label_30e8dc:
    // 0x30e8dc: 0x45000061  bc1f        . + 4 + (0x61 << 2)
label_30e8e0:
    if (ctx->pc == 0x30E8E0u) {
        ctx->pc = 0x30E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8DCu;
        // 0x30e8e0: 0xc7a00098  lwc1        $f0, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8E4u;
        goto label_30e8e4;
    }
    ctx->pc = 0x30E8DCu;
    {
        const bool branch_taken_0x30e8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8DCu;
        // 0x30e8e0: 0xc7a00098  lwc1        $f0, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8dc) {
            ctx->pc = 0x30EA64u;
            goto label_30ea64;
        }
    }
    ctx->pc = 0x30E8E4u;
label_30e8e4:
    // 0x30e8e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e8e8:
    // 0x30e8e8: 0x0  nop
    ctx->pc = 0x30e8e8u;
    // NOP
label_30e8ec:
    // 0x30e8ec: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_30e8f0:
    if (ctx->pc == 0x30E8F0u) {
        ctx->pc = 0x30E8F4u;
        goto label_30e8f4;
    }
    ctx->pc = 0x30E8ECu;
    {
        const bool branch_taken_0x30e8ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e8ec) {
            ctx->pc = 0x30EA64u;
            goto label_30ea64;
        }
    }
    ctx->pc = 0x30E8F4u;
label_30e8f4:
    // 0x30e8f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30e8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_30e8f8:
    // 0x30e8f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30e8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30e8fc:
    // 0x30e8fc: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x30e8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_30e900:
    // 0x30e900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30e904:
    // 0x30e904: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30e904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30e908:
    // 0x30e908: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x30e908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_30e90c:
    // 0x30e90c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30e910:
    // 0x30e910: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30e914:
    // 0x30e914: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x30e914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_30e918:
    // 0x30e918: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30e918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30e91c:
    // 0x30e91c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30e920:
    // 0x30e920: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x30e920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30e924:
    // 0x30e924: 0x0  nop
    ctx->pc = 0x30e924u;
    // NOP
label_30e928:
    // 0x30e928: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e92c:
    // 0x30e92c: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x30e92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_30e930:
    // 0x30e930: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_30e934:
    if (ctx->pc == 0x30E934u) {
        ctx->pc = 0x30E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E930u;
        // 0x30e934: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E938u;
        goto label_30e938;
    }
    ctx->pc = 0x30E930u;
    {
        const bool branch_taken_0x30e930 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E930u;
        // 0x30e934: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e930) {
            ctx->pc = 0x30E9A0u;
            goto label_30e9a0;
        }
    }
    ctx->pc = 0x30E938u;
label_30e938:
    // 0x30e938: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e93c:
    // 0x30e93c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x30e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_30e940:
    // 0x30e940: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x30e940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_30e944:
    // 0x30e944: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x30e944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_30e948:
    // 0x30e948: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x30e948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_30e94c:
    // 0x30e94c: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x30e94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_30e950:
    // 0x30e950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e954:
    // 0x30e954: 0x0  nop
    ctx->pc = 0x30e954u;
    // NOP
label_30e958:
    // 0x30e958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30e95c:
    if (ctx->pc == 0x30E95Cu) {
        ctx->pc = 0x30E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E958u;
        // 0x30e95c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E960u;
        goto label_30e960;
    }
    ctx->pc = 0x30E958u;
    {
        const bool branch_taken_0x30e958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E958u;
        // 0x30e95c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e958) {
            ctx->pc = 0x30E964u;
            goto label_30e964;
        }
    }
    ctx->pc = 0x30E960u;
label_30e960:
    // 0x30e960: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30e960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e964:
    // 0x30e964: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e968:
    // 0x30e968: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30e968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30e96c:
    // 0x30e96c: 0x0  nop
    ctx->pc = 0x30e96cu;
    // NOP
label_30e970:
    // 0x30e970: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30e974:
    if (ctx->pc == 0x30E974u) {
        ctx->pc = 0x30E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E970u;
        // 0x30e974: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E978u;
        goto label_30e978;
    }
    ctx->pc = 0x30E970u;
    {
        const bool branch_taken_0x30e970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E970u;
        // 0x30e974: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e970) {
            ctx->pc = 0x30E97Cu;
            goto label_30e97c;
        }
    }
    ctx->pc = 0x30E978u;
label_30e978:
    // 0x30e978: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x30e978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e97c:
    // 0x30e97c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e980:
    // 0x30e980: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30e980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30e984:
    // 0x30e984: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x30e984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_30e988:
    // 0x30e988: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
label_30e98c:
    // 0x30e98c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x30e98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30e990:
    // 0x30e990: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30e994:
    // 0x30e994: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x30e994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30e998:
    // 0x30e998: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x30e998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_30e99c:
    // 0x30e99c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30e9a0:
    // 0x30e9a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_30e9a4:
    // 0x30e9a4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x30e9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_30e9a8:
    // 0x30e9a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x30e9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_30e9ac:
    // 0x30e9ac: 0x4e1ffde  bgez        $a3, . + 4 + (-0x22 << 2)
label_30e9b0:
    if (ctx->pc == 0x30E9B0u) {
        ctx->pc = 0x30E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ACu;
        // 0x30e9b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E9B4u;
        goto label_30e9b4;
    }
    ctx->pc = 0x30E9ACu;
    {
        const bool branch_taken_0x30e9ac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x30E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ACu;
        // 0x30e9b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9ac) {
            ctx->pc = 0x30E928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e928;
        }
    }
    ctx->pc = 0x30E9B4u;
label_30e9b4:
    // 0x30e9b4: 0x8fae0088  lw          $t6, 0x88($sp)
    ctx->pc = 0x30e9b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_30e9b8:
    // 0x30e9b8: 0x8fac0080  lw          $t4, 0x80($sp)
    ctx->pc = 0x30e9b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_30e9bc:
    // 0x30e9bc: 0x8fad0084  lw          $t5, 0x84($sp)
    ctx->pc = 0x30e9bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_30e9c0:
    // 0x30e9c0: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x30e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e9c4:
    // 0x30e9c4: 0x9184000a  lbu         $a0, 0xA($t4)
    ctx->pc = 0x30e9c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
label_30e9c8:
    // 0x30e9c8: 0x91850009  lbu         $a1, 0x9($t4)
    ctx->pc = 0x30e9c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
label_30e9cc:
    // 0x30e9cc: 0x91860008  lbu         $a2, 0x8($t4)
    ctx->pc = 0x30e9ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
label_30e9d0:
    // 0x30e9d0: 0x91a8000a  lbu         $t0, 0xA($t5)
    ctx->pc = 0x30e9d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
label_30e9d4:
    // 0x30e9d4: 0x91a90009  lbu         $t1, 0x9($t5)
    ctx->pc = 0x30e9d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
label_30e9d8:
    // 0x30e9d8: 0x91aa0008  lbu         $t2, 0x8($t5)
    ctx->pc = 0x30e9d8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
label_30e9dc:
    // 0x30e9dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30e9e0:
    // 0x30e9e0: 0x8faf00a8  lw          $t7, 0xA8($sp)
    ctx->pc = 0x30e9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_30e9e4:
    // 0x30e9e4: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x30e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e9e8:
    // 0x30e9e8: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x30e9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_30e9ec:
    // 0x30e9ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_30e9f0:
    // 0x30e9f0: 0x8fab00a4  lw          $t3, 0xA4($sp)
    ctx->pc = 0x30e9f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_30e9f4:
    // 0x30e9f4: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x30e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30e9f8:
    // 0x30e9f8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_30e9fc:
    // 0x30e9fc: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x30e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ea00:
    // 0x30ea00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x30ea00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_30ea04:
    // 0x30ea04: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x30ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ea08:
    // 0x30ea08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x30ea08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30ea0c:
    // 0x30ea0c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x30ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ea10:
    // 0x30ea10: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x30ea10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30ea14:
    // 0x30ea14: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x30ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ea18:
    // 0x30ea18: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_30ea1c:
    // 0x30ea1c: 0x91c2000a  lbu         $v0, 0xA($t6)
    ctx->pc = 0x30ea1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 10)));
label_30ea20:
    // 0x30ea20: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x30ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_30ea24:
    // 0x30ea24: 0x91c30009  lbu         $v1, 0x9($t6)
    ctx->pc = 0x30ea24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 9)));
label_30ea28:
    // 0x30ea28: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x30ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_30ea2c:
    // 0x30ea2c: 0x91c20008  lbu         $v0, 0x8($t6)
    ctx->pc = 0x30ea2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8)));
label_30ea30:
    // 0x30ea30: 0xafaf0050  sw          $t7, 0x50($sp)
    ctx->pc = 0x30ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 15));
label_30ea34:
    // 0x30ea34: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x30ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_30ea38:
    // 0x30ea38: 0xc58e0014  lwc1        $f14, 0x14($t4)
    ctx->pc = 0x30ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_30ea3c:
    // 0x30ea3c: 0xc5b10014  lwc1        $f17, 0x14($t5)
    ctx->pc = 0x30ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_30ea40:
    // 0x30ea40: 0xc5d30010  lwc1        $f19, 0x10($t6)
    ctx->pc = 0x30ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_30ea44:
    // 0x30ea44: 0xc58c000c  lwc1        $f12, 0xC($t4)
    ctx->pc = 0x30ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30ea48:
    // 0x30ea48: 0xc58d0010  lwc1        $f13, 0x10($t4)
    ctx->pc = 0x30ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_30ea4c:
    // 0x30ea4c: 0xc5af000c  lwc1        $f15, 0xC($t5)
    ctx->pc = 0x30ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_30ea50:
    // 0x30ea50: 0xc5b00010  lwc1        $f16, 0x10($t5)
    ctx->pc = 0x30ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_30ea54:
    // 0x30ea54: 0xc0dabf6  jal         func_36AFD8
label_30ea58:
    if (ctx->pc == 0x30EA58u) {
        ctx->pc = 0x30EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA54u;
        // 0x30ea58: 0xc5d2000c  lwc1        $f18, 0xC($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA5Cu;
        goto label_30ea5c;
    }
    ctx->pc = 0x30EA54u;
    SET_GPR_U32(ctx, 31, 0x30EA5Cu);
    ctx->pc = 0x30EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA54u;
    // 0x30ea58: 0xc5d2000c  lwc1        $f18, 0xC($t6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x30EA54u, 0x30EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA5Cu;
label_30ea5c:
    // 0x30ea5c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_30ea60:
    if (ctx->pc == 0x30EA60u) {
        ctx->pc = 0x30EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA5Cu;
        // 0x30ea60: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EA64u;
        goto label_30ea64;
    }
    ctx->pc = 0x30EA5Cu;
    {
        const bool branch_taken_0x30ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA5Cu;
        // 0x30ea60: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea5c) {
            ctx->pc = 0x30EE00u;
            goto label_30ee00;
        }
    }
    ctx->pc = 0x30EA64u;
label_30ea64:
    // 0x30ea64: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x30ea64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30ea68:
    // 0x30ea68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30ea68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30ea6c:
    // 0x30ea6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30ea70:
    // 0x30ea70: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30ea70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30ea74:
    // 0x30ea74: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x30ea74u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ea78:
    // 0x30ea78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30ea78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ea7c:
    // 0x30ea7c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30ea80:
    // 0x30ea80: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x30ea80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ea84:
    // 0x30ea84: 0x27b200b8  addiu       $s2, $sp, 0xB8
    ctx->pc = 0x30ea84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_30ea88:
    // 0x30ea88: 0x27b4011c  addiu       $s4, $sp, 0x11C
    ctx->pc = 0x30ea88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_30ea8c:
    // 0x30ea8c: 0x27b90124  addiu       $t9, $sp, 0x124
    ctx->pc = 0x30ea8cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_30ea90:
    // 0x30ea90: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x30ea90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_30ea94:
    // 0x30ea94: 0x0  nop
    ctx->pc = 0x30ea94u;
    // NOP
label_30ea98:
    // 0x30ea98: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x30ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_30ea9c:
    // 0x30ea9c: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eaa0:
    if (ctx->pc == 0x30EAA0u) {
        ctx->pc = 0x30EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA9Cu;
        // 0x30eaa0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAA4u;
        goto label_30eaa4;
    }
    ctx->pc = 0x30EA9Cu;
    {
        const bool branch_taken_0x30ea9c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30ea9c) {
            ctx->pc = 0x30EAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EA9Cu;
            // 0x30eaa0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EAA4u;
            goto label_30eaa4;
        }
    }
    ctx->pc = 0x30EAA4u;
label_30eaa4:
    // 0x30eaa4: 0x4b001a  div         $zero, $v0, $t3
    ctx->pc = 0x30eaa4u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_30eaa8:
    // 0x30eaa8: 0x1810  mfhi        $v1
    ctx->pc = 0x30eaa8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30eaac:
    // 0x30eaac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30eab0:
    // 0x30eab0: 0x3031021  addu        $v0, $t8, $v1
    ctx->pc = 0x30eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
label_30eab4:
    // 0x30eab4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30eab8:
    // 0x30eab8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x30eab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30eabc:
    // 0x30eabc: 0x0  nop
    ctx->pc = 0x30eabcu;
    // NOP
label_30eac0:
    // 0x30eac0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30eac4:
    if (ctx->pc == 0x30EAC4u) {
        ctx->pc = 0x30EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAC0u;
        // 0x30eac4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAC8u;
        goto label_30eac8;
    }
    ctx->pc = 0x30EAC0u;
    {
        const bool branch_taken_0x30eac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAC0u;
        // 0x30eac4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eac0) {
            ctx->pc = 0x30EACCu;
            goto label_30eacc;
        }
    }
    ctx->pc = 0x30EAC8u;
label_30eac8:
    // 0x30eac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30eacc:
    // 0x30eacc: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x30eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ead0:
    // 0x30ead0: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x30ead0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30ead4:
    // 0x30ead4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x30ead4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ead8:
    // 0x30ead8: 0x0  nop
    ctx->pc = 0x30ead8u;
    // NOP
label_30eadc:
    // 0x30eadc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30eae0:
    if (ctx->pc == 0x30EAE0u) {
        ctx->pc = 0x30EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EADCu;
        // 0x30eae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAE4u;
        goto label_30eae4;
    }
    ctx->pc = 0x30EADCu;
    {
        const bool branch_taken_0x30eadc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EADCu;
        // 0x30eae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eadc) {
            ctx->pc = 0x30EAE8u;
            goto label_30eae8;
        }
    }
    ctx->pc = 0x30EAE4u;
label_30eae4:
    // 0x30eae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30eae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30eae8:
    // 0x30eae8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x30eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_30eaec:
    // 0x30eaec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30eaf0:
    // 0x30eaf0: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_30eaf4:
    if (ctx->pc == 0x30EAF4u) {
        ctx->pc = 0x30EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAF0u;
        // 0x30eaf4: 0xc5800000  lwc1        $f0, 0x0($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EAF8u;
        goto label_30eaf8;
    }
    ctx->pc = 0x30EAF0u;
    {
        const bool branch_taken_0x30eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eaf0) {
            ctx->pc = 0x30EAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EAF0u;
            // 0x30eaf4: 0xc5800000  lwc1        $f0, 0x0($t4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EC20u;
            goto label_30ec20;
        }
    }
    ctx->pc = 0x30EAF8u;
label_30eaf8:
    // 0x30eaf8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x30eaf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30eafc:
    // 0x30eafc: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eb00:
    if (ctx->pc == 0x30EB00u) {
        ctx->pc = 0x30EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAFCu;
        // 0x30eb00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB04u;
        goto label_30eb04;
    }
    ctx->pc = 0x30EAFCu;
    {
        const bool branch_taken_0x30eafc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30eafc) {
            ctx->pc = 0x30EB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EAFCu;
            // 0x30eb00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB04u;
            goto label_30eb04;
        }
    }
    ctx->pc = 0x30EB04u;
label_30eb04:
    // 0x30eb04: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eb08:
    if (ctx->pc == 0x30EB08u) {
        ctx->pc = 0x30EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB04u;
        // 0x30eb08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB0Cu;
        goto label_30eb0c;
    }
    ctx->pc = 0x30EB04u;
    {
        const bool branch_taken_0x30eb04 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30eb04) {
            ctx->pc = 0x30EB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB04u;
            // 0x30eb08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB0Cu;
            goto label_30eb0c;
        }
    }
    ctx->pc = 0x30EB0Cu;
label_30eb0c:
    // 0x30eb0c: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x30eb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_30eb10:
    // 0x30eb10: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eb14:
    if (ctx->pc == 0x30EB14u) {
        ctx->pc = 0x30EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB10u;
        // 0x30eb14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB18u;
        goto label_30eb18;
    }
    ctx->pc = 0x30EB10u;
    {
        const bool branch_taken_0x30eb10 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30eb10) {
            ctx->pc = 0x30EB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB10u;
            // 0x30eb14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB18u;
            goto label_30eb18;
        }
    }
    ctx->pc = 0x30EB18u;
label_30eb18:
    // 0x30eb18: 0x22f2821  addu        $a1, $s1, $t7
    ctx->pc = 0x30eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
label_30eb1c:
    // 0x30eb1c: 0x0  nop
    ctx->pc = 0x30eb1cu;
    // NOP
label_30eb20:
    // 0x30eb20: 0x0  nop
    ctx->pc = 0x30eb20u;
    // NOP
label_30eb24:
    // 0x30eb24: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x30eb24u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_30eb28:
    // 0x30eb28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30eb2c:
    // 0x30eb2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30eb30:
    // 0x30eb30: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x30eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_30eb34:
    // 0x30eb34: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30eb38:
    // 0x30eb38: 0x1c42018  mult        $a0, $t6, $a0
    ctx->pc = 0x30eb38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_30eb3c:
    // 0x30eb3c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x30eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30eb40:
    // 0x30eb40: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30eb40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_30eb44:
    // 0x30eb44: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x30eb44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_30eb48:
    // 0x30eb48: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_30eb4c:
    // 0x30eb4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30eb4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30eb50:
    // 0x30eb50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30eb50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30eb54:
    // 0x30eb54: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30eb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30eb58:
    // 0x30eb58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x30eb58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30eb5c:
    // 0x30eb5c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30eb5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30eb60:
    // 0x30eb60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x30eb60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30eb64:
    // 0x30eb64: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_30eb68:
    // 0x30eb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30eb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30eb6c:
    // 0x30eb6c: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x30eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_30eb70:
    // 0x30eb70: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eb74:
    if (ctx->pc == 0x30EB74u) {
        ctx->pc = 0x30EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB70u;
        // 0x30eb74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EB78u;
        goto label_30eb78;
    }
    ctx->pc = 0x30EB70u;
    {
        const bool branch_taken_0x30eb70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30eb70) {
            ctx->pc = 0x30EB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB70u;
            // 0x30eb74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB78u;
            goto label_30eb78;
        }
    }
    ctx->pc = 0x30EB78u;
label_30eb78:
    // 0x30eb78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30eb7c:
    // 0x30eb7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30eb80:
    // 0x30eb80: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x30eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30eb84:
    // 0x30eb84: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x30eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30eb88:
    // 0x30eb88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30eb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30eb8c:
    // 0x30eb8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30eb8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30eb90:
    // 0x30eb90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30eb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30eb94:
    // 0x30eb94: 0xe4e000c0  swc1        $f0, 0xC0($a3)
    ctx->pc = 0x30eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 192), bits); }
label_30eb98:
    // 0x30eb98: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30eb9c:
    if (ctx->pc == 0x30EB9Cu) {
        ctx->pc = 0x30EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB98u;
        // 0x30eb9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBA0u;
        goto label_30eba0;
    }
    ctx->pc = 0x30EB98u;
    {
        const bool branch_taken_0x30eb98 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30eb98) {
            ctx->pc = 0x30EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EB98u;
            // 0x30eb9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EBA0u;
label_30eba0:
    // 0x30eba0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30eba4:
    // 0x30eba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30eba8:
    // 0x30eba8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x30eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ebac:
    // 0x30ebac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x30ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ebb0:
    // 0x30ebb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ebb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30ebb4:
    // 0x30ebb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30ebb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30ebb8:
    // 0x30ebb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30ebb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30ebbc:
    // 0x30ebbc: 0xe50000c4  swc1        $f0, 0xC4($t0)
    ctx->pc = 0x30ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
label_30ebc0:
    // 0x30ebc0: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30ebc4:
    if (ctx->pc == 0x30EBC4u) {
        ctx->pc = 0x30EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBC0u;
        // 0x30ebc4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBC8u;
        goto label_30ebc8;
    }
    ctx->pc = 0x30EBC0u;
    {
        const bool branch_taken_0x30ebc0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30ebc0) {
            ctx->pc = 0x30EBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EBC0u;
            // 0x30ebc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EBC8u;
            goto label_30ebc8;
        }
    }
    ctx->pc = 0x30EBC8u;
label_30ebc8:
    // 0x30ebc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30ebcc:
    // 0x30ebcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30ebd0:
    // 0x30ebd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ebd4:
    // 0x30ebd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ebd8:
    // 0x30ebd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ebd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30ebdc:
    // 0x30ebdc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30ebdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30ebe0:
    // 0x30ebe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30ebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30ebe4:
    // 0x30ebe4: 0xe52000b0  swc1        $f0, 0xB0($t1)
    ctx->pc = 0x30ebe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 176), bits); }
label_30ebe8:
    // 0x30ebe8: 0x516d0001  beql        $t3, $t5, . + 4 + (0x1 << 2)
label_30ebec:
    if (ctx->pc == 0x30EBECu) {
        ctx->pc = 0x30EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBE8u;
        // 0x30ebec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EBF0u;
        goto label_30ebf0;
    }
    ctx->pc = 0x30EBE8u;
    {
        const bool branch_taken_0x30ebe8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 13));
        if (branch_taken_0x30ebe8) {
            ctx->pc = 0x30EBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EBE8u;
            // 0x30ebec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EBF0u;
            goto label_30ebf0;
        }
    }
    ctx->pc = 0x30EBF0u;
label_30ebf0:
    // 0x30ebf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30ebf4:
    // 0x30ebf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30ebf8:
    // 0x30ebf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ebfc:
    // 0x30ebfc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ec00:
    // 0x30ec00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_30ec04:
    // 0x30ec04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30ec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30ec08:
    // 0x30ec08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30ec08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30ec0c:
    // 0x30ec0c: 0xe54000b4  swc1        $f0, 0xB4($t2)
    ctx->pc = 0x30ec0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 180), bits); }
label_30ec10:
    // 0x30ec10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x30ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30ec14:
    // 0x30ec14: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x30ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30ec18:
    // 0x30ec18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_30ec1c:
    // 0x30ec1c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x30ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ec20:
    // 0x30ec20: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x30ec20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ec24:
    // 0x30ec24: 0x0  nop
    ctx->pc = 0x30ec24u;
    // NOP
label_30ec28:
    // 0x30ec28: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_30ec2c:
    if (ctx->pc == 0x30EC2Cu) {
        ctx->pc = 0x30EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC28u;
        // 0x30ec2c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EC30u;
        goto label_30ec30;
    }
    ctx->pc = 0x30EC28u;
    {
        const bool branch_taken_0x30ec28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC28u;
        // 0x30ec2c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec28) {
            ctx->pc = 0x30ED14u;
            goto label_30ed14;
        }
    }
    ctx->pc = 0x30EC30u;
label_30ec30:
    // 0x30ec30: 0x22f1021  addu        $v0, $s1, $t7
    ctx->pc = 0x30ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
label_30ec34:
    // 0x30ec34: 0x1c61818  mult        $v1, $t6, $a2
    ctx->pc = 0x30ec34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_30ec38:
    // 0x30ec38: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_30ec3c:
    // 0x30ec3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30ec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ec40:
    // 0x30ec40: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30ec40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_30ec44:
    // 0x30ec44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30ec44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30ec48:
    // 0x30ec48: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x30ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_30ec4c:
    // 0x30ec4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30ec50:
    // 0x30ec50: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x30ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30ec54:
    // 0x30ec54: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x30ec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_30ec58:
    // 0x30ec58: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x30ec58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_30ec5c:
    // 0x30ec5c: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x30ec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_30ec60:
    // 0x30ec60: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x30ec60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_30ec64:
    // 0x30ec64: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x30ec64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_30ec68:
    // 0x30ec68: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x30ec68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_30ec6c:
    // 0x30ec6c: 0xb0870057  sdl         $a3, 0x57($a0)
    ctx->pc = 0x30ec6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec70:
    // 0x30ec70: 0xb4870050  sdr         $a3, 0x50($a0)
    ctx->pc = 0x30ec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec74:
    // 0x30ec74: 0xb088005f  sdl         $t0, 0x5F($a0)
    ctx->pc = 0x30ec74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec78:
    // 0x30ec78: 0xb4880058  sdr         $t0, 0x58($a0)
    ctx->pc = 0x30ec78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec7c:
    // 0x30ec7c: 0xb0890067  sdl         $t1, 0x67($a0)
    ctx->pc = 0x30ec7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec80:
    // 0x30ec80: 0xb4890060  sdr         $t1, 0x60($a0)
    ctx->pc = 0x30ec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30ec84:
    // 0x30ec84: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x30ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ec88:
    // 0x30ec88: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x30ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_30ec8c:
    // 0x30ec8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30ec8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30ec90:
    // 0x30ec90: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x30ec90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_30ec94:
    // 0x30ec94: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x30ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ec98:
    // 0x30ec98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30ec98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ec9c:
    // 0x30ec9c: 0x0  nop
    ctx->pc = 0x30ec9cu;
    // NOP
label_30eca0:
    // 0x30eca0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30eca4:
    if (ctx->pc == 0x30ECA4u) {
        ctx->pc = 0x30ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECA0u;
        // 0x30eca4: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ECA8u;
        goto label_30eca8;
    }
    ctx->pc = 0x30ECA0u;
    {
        const bool branch_taken_0x30eca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECA0u;
        // 0x30eca4: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eca0) {
            ctx->pc = 0x30ECACu;
            goto label_30ecac;
        }
    }
    ctx->pc = 0x30ECA8u;
label_30eca8:
    // 0x30eca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ecac:
    // 0x30ecac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ecb0:
    // 0x30ecb0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x30ecb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ecb4:
    // 0x30ecb4: 0x0  nop
    ctx->pc = 0x30ecb4u;
    // NOP
label_30ecb8:
    // 0x30ecb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30ecbc:
    if (ctx->pc == 0x30ECBCu) {
        ctx->pc = 0x30ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECB8u;
        // 0x30ecbc: 0x320102d  daddu       $v0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ECC0u;
        goto label_30ecc0;
    }
    ctx->pc = 0x30ECB8u;
    {
        const bool branch_taken_0x30ecb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECB8u;
        // 0x30ecbc: 0x320102d  daddu       $v0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ecb8) {
            ctx->pc = 0x30ECC4u;
            goto label_30ecc4;
        }
    }
    ctx->pc = 0x30ECC0u;
label_30ecc0:
    // 0x30ecc0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x30ecc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30ecc4:
    // 0x30ecc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ecc8:
    // 0x30ecc8: 0x25c5ffff  addiu       $a1, $t6, -0x1
    ctx->pc = 0x30ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_30eccc:
    // 0x30eccc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x30ecccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_30ecd0:
    // 0x30ecd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30ecd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ecd4:
    // 0x30ecd4: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x30ecd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30ecd8:
    // 0x30ecd8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_30ecdc:
    // 0x30ecdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30ecdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30ece0:
    // 0x30ece0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30ece0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_30ece4:
    // 0x30ece4: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x30ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30ece8:
    // 0x30ece8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x30ece8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_30ecec:
    // 0x30ecec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ececu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_30ecf0:
    // 0x30ecf0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x30ecf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_30ecf4:
    // 0x30ecf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30ecf8:
    // 0x30ecf8: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x30ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_30ecfc:
    // 0x30ecfc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x30ecfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30ed00:
    // 0x30ed00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30ed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_30ed04:
    // 0x30ed04: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x30ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_30ed08:
    // 0x30ed08: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x30ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_30ed0c:
    // 0x30ed0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30ed10:
    // 0x30ed10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_30ed14:
    // 0x30ed14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30ed18:
    // 0x30ed18: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x30ed18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_30ed1c:
    // 0x30ed1c: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
label_30ed20:
    if (ctx->pc == 0x30ED20u) {
        ctx->pc = 0x30ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED1Cu;
        // 0x30ed20: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ED24u;
        goto label_30ed24;
    }
    ctx->pc = 0x30ED1Cu;
    {
        const bool branch_taken_0x30ed1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED1Cu;
        // 0x30ed20: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed1c) {
            ctx->pc = 0x30EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea98;
        }
    }
    ctx->pc = 0x30ED24u;
label_30ed24:
    // 0x30ed24: 0x25c2fffe  addiu       $v0, $t6, -0x2
    ctx->pc = 0x30ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
label_30ed28:
    // 0x30ed28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30ed28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ed2c:
    // 0x30ed2c: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
label_30ed30:
    if (ctx->pc == 0x30ED30u) {
        ctx->pc = 0x30ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED2Cu;
        // 0x30ed30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ED34u;
        goto label_30ed34;
    }
    ctx->pc = 0x30ED2Cu;
    {
        const bool branch_taken_0x30ed2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED2Cu;
        // 0x30ed30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed2c) {
            ctx->pc = 0x30EDFCu;
            goto label_30edfc;
        }
    }
    ctx->pc = 0x30ED34u;
label_30ed34:
    // 0x30ed34: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x30ed34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_30ed38:
    // 0x30ed38: 0x8e22fff8  lw          $v0, -0x8($s1)
    ctx->pc = 0x30ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_30ed3c:
    // 0x30ed3c: 0x0  nop
    ctx->pc = 0x30ed3cu;
    // NOP
label_30ed40:
    // 0x30ed40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30ed40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30ed44:
    // 0x30ed44: 0x8e2affe0  lw          $t2, -0x20($s1)
    ctx->pc = 0x30ed44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
label_30ed48:
    // 0x30ed48: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x30ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30ed4c:
    // 0x30ed4c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x30ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_30ed50:
    // 0x30ed50: 0xc626ffd8  lwc1        $f6, -0x28($s1)
    ctx->pc = 0x30ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_30ed54:
    // 0x30ed54: 0x26e02  srl         $t5, $v0, 24
    ctx->pc = 0x30ed54u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
label_30ed58:
    // 0x30ed58: 0xc625ffdc  lwc1        $f5, -0x24($s1)
    ctx->pc = 0x30ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30ed5c:
    // 0x30ed5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30ed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_30ed60:
    // 0x30ed60: 0xc623fff0  lwc1        $f3, -0x10($s1)
    ctx->pc = 0x30ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30ed64:
    // 0x30ed64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30ed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30ed68:
    // 0x30ed68: 0xc622fff4  lwc1        $f2, -0xC($s1)
    ctx->pc = 0x30ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ed6c:
    // 0x30ed6c: 0xa5e02  srl         $t3, $t2, 24
    ctx->pc = 0x30ed6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
label_30ed70:
    // 0x30ed70: 0x922cfffa  lbu         $t4, -0x6($s1)
    ctx->pc = 0x30ed70u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967290)));
label_30ed74:
    // 0x30ed74: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x30ed74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_30ed78:
    // 0x30ed78: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x30ed78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_30ed7c:
    // 0x30ed7c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x30ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ed80:
    // 0x30ed80: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x30ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ed84:
    // 0x30ed84: 0x63e02  srl         $a3, $a2, 24
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
label_30ed88:
    // 0x30ed88: 0x9228ffe2  lbu         $t0, -0x1E($s1)
    ctx->pc = 0x30ed88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967266)));
label_30ed8c:
    // 0x30ed8c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x30ed8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_30ed90:
    // 0x30ed90: 0x9229ffe1  lbu         $t1, -0x1F($s1)
    ctx->pc = 0x30ed90u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967265)));
label_30ed94:
    // 0x30ed94: 0xc62fffe4  lwc1        $f15, -0x1C($s1)
    ctx->pc = 0x30ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_30ed98:
    // 0x30ed98: 0xc630ffe8  lwc1        $f16, -0x18($s1)
    ctx->pc = 0x30ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_30ed9c:
    // 0x30ed9c: 0xc631ffec  lwc1        $f17, -0x14($s1)
    ctx->pc = 0x30ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_30eda0:
    // 0x30eda0: 0xc632fffc  lwc1        $f18, -0x4($s1)
    ctx->pc = 0x30eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_30eda4:
    // 0x30eda4: 0xc6330000  lwc1        $f19, 0x0($s1)
    ctx->pc = 0x30eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_30eda8:
    // 0x30eda8: 0x93a400ba  lbu         $a0, 0xBA($sp)
    ctx->pc = 0x30eda8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 186)));
label_30edac:
    // 0x30edac: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_30edb0:
    // 0x30edb0: 0x93a500b9  lbu         $a1, 0xB9($sp)
    ctx->pc = 0x30edb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 185)));
label_30edb4:
    // 0x30edb4: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x30edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30edb8:
    // 0x30edb8: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x30edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_30edbc:
    // 0x30edbc: 0xc7ae00c4  lwc1        $f14, 0xC4($sp)
    ctx->pc = 0x30edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_30edc0:
    // 0x30edc0: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x30edc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30edc4:
    // 0x30edc4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30edc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_30edc8:
    // 0x30edc8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30edc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_30edcc:
    // 0x30edcc: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x30edccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_30edd0:
    // 0x30edd0: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x30edd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30edd4:
    // 0x30edd4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x30edd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30edd8:
    // 0x30edd8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x30edd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_30eddc:
    // 0x30eddc: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x30eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
label_30ede0:
    // 0x30ede0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x30ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_30ede4:
    // 0x30ede4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x30ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_30ede8:
    // 0x30ede8: 0xc0dabf6  jal         func_36AFD8
label_30edec:
    if (ctx->pc == 0x30EDECu) {
        ctx->pc = 0x30EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDE8u;
        // 0x30edec: 0xafad0050  sw          $t5, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EDF0u;
        goto label_30edf0;
    }
    ctx->pc = 0x30EDE8u;
    SET_GPR_U32(ctx, 31, 0x30EDF0u);
    ctx->pc = 0x30EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDE8u;
    // 0x30edec: 0xafad0050  sw          $t5, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x30EDE8u, 0x30EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDF0u;
label_30edf0:
    // 0x30edf0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x30edf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_30edf4:
    // 0x30edf4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
label_30edf8:
    if (ctx->pc == 0x30EDF8u) {
        ctx->pc = 0x30EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDF4u;
        // 0x30edf8: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EDFCu;
        goto label_30edfc;
    }
    ctx->pc = 0x30EDF4u;
    {
        const bool branch_taken_0x30edf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30edf4) {
            ctx->pc = 0x30EDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EDF4u;
            // 0x30edf8: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ed40;
        }
    }
    ctx->pc = 0x30EDFCu;
label_30edfc:
    // 0x30edfc: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x30edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_30ee00:
    // 0x30ee00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ee04:
    // 0x30ee04: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x30ee04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_30ee08:
    // 0x30ee08: 0x1440fe85  bnez        $v0, . + 4 + (-0x17B << 2)
label_30ee0c:
    if (ctx->pc == 0x30EE0Cu) {
        ctx->pc = 0x30EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE08u;
        // 0x30ee0c: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EE10u;
        goto label_30ee10;
    }
    ctx->pc = 0x30EE08u;
    {
        const bool branch_taken_0x30ee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE08u;
        // 0x30ee0c: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee08) {
            ctx->pc = 0x30E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e820;
        }
    }
    ctx->pc = 0x30EE10u;
label_30ee10:
    // 0x30ee10: 0xc0dab7e  jal         func_36ADF8
label_30ee14:
    if (ctx->pc == 0x30EE14u) {
        ctx->pc = 0x30EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE10u;
        // 0x30ee14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EE18u;
        goto label_30ee18;
    }
    ctx->pc = 0x30EE10u;
    SET_GPR_U32(ctx, 31, 0x30EE18u);
    ctx->pc = 0x30EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE10u;
    // 0x30ee14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x30EE10u, 0x30EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE18u;
label_30ee18:
    // 0x30ee18: 0x27c4f8c8  addiu       $a0, $fp, -0x738
    ctx->pc = 0x30ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965448));
label_30ee1c:
    // 0x30ee1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ee20:
    // 0x30ee20: 0xc0dc1ea  jal         func_3707A8
label_30ee24:
    if (ctx->pc == 0x30EE24u) {
        ctx->pc = 0x30EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE20u;
        // 0x30ee24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EE28u;
        goto label_30ee28;
    }
    ctx->pc = 0x30EE20u;
    SET_GPR_U32(ctx, 31, 0x30EE28u);
    ctx->pc = 0x30EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE20u;
    // 0x30ee24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3707A8u, 0x30EE20u, 0x30EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE28u;
label_30ee28:
    // 0x30ee28: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x30ee28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_30ee2c:
    // 0x30ee2c: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x30ee2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_30ee30:
    // 0x30ee30: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x30ee30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_30ee34:
    // 0x30ee34: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x30ee34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_30ee38:
    // 0x30ee38: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x30ee38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_30ee3c:
    // 0x30ee3c: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x30ee3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_30ee40:
    // 0x30ee40: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x30ee40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_30ee44:
    // 0x30ee44: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x30ee44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_30ee48:
    // 0x30ee48: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x30ee48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_30ee4c:
    // 0x30ee4c: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x30ee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_30ee50:
    // 0x30ee50: 0x3e00008  jr          $ra
label_30ee54:
    if (ctx->pc == 0x30EE54u) {
        ctx->pc = 0x30EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE50u;
        // 0x30ee54: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EE58u;
        goto label_fallthrough_0x30ee50;
    }
    ctx->pc = 0x30EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE50u;
        // 0x30ee54: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30ee50:
    ctx->pc = 0x30EE58u;
}
