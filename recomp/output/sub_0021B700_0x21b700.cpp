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

// Function: sub_0021B700
// Address: 0x21b700 - 0x21bda0
void sub_0021B700_0x21b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B700_0x21b700");
#endif

    switch (ctx->pc) {
        case 0x21b700u: goto label_21b700;
        case 0x21b704u: goto label_21b704;
        case 0x21b708u: goto label_21b708;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b710u: goto label_21b710;
        case 0x21b714u: goto label_21b714;
        case 0x21b718u: goto label_21b718;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b720u: goto label_21b720;
        case 0x21b724u: goto label_21b724;
        case 0x21b728u: goto label_21b728;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b730u: goto label_21b730;
        case 0x21b734u: goto label_21b734;
        case 0x21b738u: goto label_21b738;
        case 0x21b73cu: goto label_21b73c;
        case 0x21b740u: goto label_21b740;
        case 0x21b744u: goto label_21b744;
        case 0x21b748u: goto label_21b748;
        case 0x21b74cu: goto label_21b74c;
        case 0x21b750u: goto label_21b750;
        case 0x21b754u: goto label_21b754;
        case 0x21b758u: goto label_21b758;
        case 0x21b75cu: goto label_21b75c;
        case 0x21b760u: goto label_21b760;
        case 0x21b764u: goto label_21b764;
        case 0x21b768u: goto label_21b768;
        case 0x21b76cu: goto label_21b76c;
        case 0x21b770u: goto label_21b770;
        case 0x21b774u: goto label_21b774;
        case 0x21b778u: goto label_21b778;
        case 0x21b77cu: goto label_21b77c;
        case 0x21b780u: goto label_21b780;
        case 0x21b784u: goto label_21b784;
        case 0x21b788u: goto label_21b788;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b790u: goto label_21b790;
        case 0x21b794u: goto label_21b794;
        case 0x21b798u: goto label_21b798;
        case 0x21b79cu: goto label_21b79c;
        case 0x21b7a0u: goto label_21b7a0;
        case 0x21b7a4u: goto label_21b7a4;
        case 0x21b7a8u: goto label_21b7a8;
        case 0x21b7acu: goto label_21b7ac;
        case 0x21b7b0u: goto label_21b7b0;
        case 0x21b7b4u: goto label_21b7b4;
        case 0x21b7b8u: goto label_21b7b8;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b7c0u: goto label_21b7c0;
        case 0x21b7c4u: goto label_21b7c4;
        case 0x21b7c8u: goto label_21b7c8;
        case 0x21b7ccu: goto label_21b7cc;
        case 0x21b7d0u: goto label_21b7d0;
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b7d8u: goto label_21b7d8;
        case 0x21b7dcu: goto label_21b7dc;
        case 0x21b7e0u: goto label_21b7e0;
        case 0x21b7e4u: goto label_21b7e4;
        case 0x21b7e8u: goto label_21b7e8;
        case 0x21b7ecu: goto label_21b7ec;
        case 0x21b7f0u: goto label_21b7f0;
        case 0x21b7f4u: goto label_21b7f4;
        case 0x21b7f8u: goto label_21b7f8;
        case 0x21b7fcu: goto label_21b7fc;
        case 0x21b800u: goto label_21b800;
        case 0x21b804u: goto label_21b804;
        case 0x21b808u: goto label_21b808;
        case 0x21b80cu: goto label_21b80c;
        case 0x21b810u: goto label_21b810;
        case 0x21b814u: goto label_21b814;
        case 0x21b818u: goto label_21b818;
        case 0x21b81cu: goto label_21b81c;
        case 0x21b820u: goto label_21b820;
        case 0x21b824u: goto label_21b824;
        case 0x21b828u: goto label_21b828;
        case 0x21b82cu: goto label_21b82c;
        case 0x21b830u: goto label_21b830;
        case 0x21b834u: goto label_21b834;
        case 0x21b838u: goto label_21b838;
        case 0x21b83cu: goto label_21b83c;
        case 0x21b840u: goto label_21b840;
        case 0x21b844u: goto label_21b844;
        case 0x21b848u: goto label_21b848;
        case 0x21b84cu: goto label_21b84c;
        case 0x21b850u: goto label_21b850;
        case 0x21b854u: goto label_21b854;
        case 0x21b858u: goto label_21b858;
        case 0x21b85cu: goto label_21b85c;
        case 0x21b860u: goto label_21b860;
        case 0x21b864u: goto label_21b864;
        case 0x21b868u: goto label_21b868;
        case 0x21b86cu: goto label_21b86c;
        case 0x21b870u: goto label_21b870;
        case 0x21b874u: goto label_21b874;
        case 0x21b878u: goto label_21b878;
        case 0x21b87cu: goto label_21b87c;
        case 0x21b880u: goto label_21b880;
        case 0x21b884u: goto label_21b884;
        case 0x21b888u: goto label_21b888;
        case 0x21b88cu: goto label_21b88c;
        case 0x21b890u: goto label_21b890;
        case 0x21b894u: goto label_21b894;
        case 0x21b898u: goto label_21b898;
        case 0x21b89cu: goto label_21b89c;
        case 0x21b8a0u: goto label_21b8a0;
        case 0x21b8a4u: goto label_21b8a4;
        case 0x21b8a8u: goto label_21b8a8;
        case 0x21b8acu: goto label_21b8ac;
        case 0x21b8b0u: goto label_21b8b0;
        case 0x21b8b4u: goto label_21b8b4;
        case 0x21b8b8u: goto label_21b8b8;
        case 0x21b8bcu: goto label_21b8bc;
        case 0x21b8c0u: goto label_21b8c0;
        case 0x21b8c4u: goto label_21b8c4;
        case 0x21b8c8u: goto label_21b8c8;
        case 0x21b8ccu: goto label_21b8cc;
        case 0x21b8d0u: goto label_21b8d0;
        case 0x21b8d4u: goto label_21b8d4;
        case 0x21b8d8u: goto label_21b8d8;
        case 0x21b8dcu: goto label_21b8dc;
        case 0x21b8e0u: goto label_21b8e0;
        case 0x21b8e4u: goto label_21b8e4;
        case 0x21b8e8u: goto label_21b8e8;
        case 0x21b8ecu: goto label_21b8ec;
        case 0x21b8f0u: goto label_21b8f0;
        case 0x21b8f4u: goto label_21b8f4;
        case 0x21b8f8u: goto label_21b8f8;
        case 0x21b8fcu: goto label_21b8fc;
        case 0x21b900u: goto label_21b900;
        case 0x21b904u: goto label_21b904;
        case 0x21b908u: goto label_21b908;
        case 0x21b90cu: goto label_21b90c;
        case 0x21b910u: goto label_21b910;
        case 0x21b914u: goto label_21b914;
        case 0x21b918u: goto label_21b918;
        case 0x21b91cu: goto label_21b91c;
        case 0x21b920u: goto label_21b920;
        case 0x21b924u: goto label_21b924;
        case 0x21b928u: goto label_21b928;
        case 0x21b92cu: goto label_21b92c;
        case 0x21b930u: goto label_21b930;
        case 0x21b934u: goto label_21b934;
        case 0x21b938u: goto label_21b938;
        case 0x21b93cu: goto label_21b93c;
        case 0x21b940u: goto label_21b940;
        case 0x21b944u: goto label_21b944;
        case 0x21b948u: goto label_21b948;
        case 0x21b94cu: goto label_21b94c;
        case 0x21b950u: goto label_21b950;
        case 0x21b954u: goto label_21b954;
        case 0x21b958u: goto label_21b958;
        case 0x21b95cu: goto label_21b95c;
        case 0x21b960u: goto label_21b960;
        case 0x21b964u: goto label_21b964;
        case 0x21b968u: goto label_21b968;
        case 0x21b96cu: goto label_21b96c;
        case 0x21b970u: goto label_21b970;
        case 0x21b974u: goto label_21b974;
        case 0x21b978u: goto label_21b978;
        case 0x21b97cu: goto label_21b97c;
        case 0x21b980u: goto label_21b980;
        case 0x21b984u: goto label_21b984;
        case 0x21b988u: goto label_21b988;
        case 0x21b98cu: goto label_21b98c;
        case 0x21b990u: goto label_21b990;
        case 0x21b994u: goto label_21b994;
        case 0x21b998u: goto label_21b998;
        case 0x21b99cu: goto label_21b99c;
        case 0x21b9a0u: goto label_21b9a0;
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9a8u: goto label_21b9a8;
        case 0x21b9acu: goto label_21b9ac;
        case 0x21b9b0u: goto label_21b9b0;
        case 0x21b9b4u: goto label_21b9b4;
        case 0x21b9b8u: goto label_21b9b8;
        case 0x21b9bcu: goto label_21b9bc;
        case 0x21b9c0u: goto label_21b9c0;
        case 0x21b9c4u: goto label_21b9c4;
        case 0x21b9c8u: goto label_21b9c8;
        case 0x21b9ccu: goto label_21b9cc;
        case 0x21b9d0u: goto label_21b9d0;
        case 0x21b9d4u: goto label_21b9d4;
        case 0x21b9d8u: goto label_21b9d8;
        case 0x21b9dcu: goto label_21b9dc;
        case 0x21b9e0u: goto label_21b9e0;
        case 0x21b9e4u: goto label_21b9e4;
        case 0x21b9e8u: goto label_21b9e8;
        case 0x21b9ecu: goto label_21b9ec;
        case 0x21b9f0u: goto label_21b9f0;
        case 0x21b9f4u: goto label_21b9f4;
        case 0x21b9f8u: goto label_21b9f8;
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba00u: goto label_21ba00;
        case 0x21ba04u: goto label_21ba04;
        case 0x21ba08u: goto label_21ba08;
        case 0x21ba0cu: goto label_21ba0c;
        case 0x21ba10u: goto label_21ba10;
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba18u: goto label_21ba18;
        case 0x21ba1cu: goto label_21ba1c;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba24u: goto label_21ba24;
        case 0x21ba28u: goto label_21ba28;
        case 0x21ba2cu: goto label_21ba2c;
        case 0x21ba30u: goto label_21ba30;
        case 0x21ba34u: goto label_21ba34;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba3cu: goto label_21ba3c;
        case 0x21ba40u: goto label_21ba40;
        case 0x21ba44u: goto label_21ba44;
        case 0x21ba48u: goto label_21ba48;
        case 0x21ba4cu: goto label_21ba4c;
        case 0x21ba50u: goto label_21ba50;
        case 0x21ba54u: goto label_21ba54;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba60u: goto label_21ba60;
        case 0x21ba64u: goto label_21ba64;
        case 0x21ba68u: goto label_21ba68;
        case 0x21ba6cu: goto label_21ba6c;
        case 0x21ba70u: goto label_21ba70;
        case 0x21ba74u: goto label_21ba74;
        case 0x21ba78u: goto label_21ba78;
        case 0x21ba7cu: goto label_21ba7c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21ba84u: goto label_21ba84;
        case 0x21ba88u: goto label_21ba88;
        case 0x21ba8cu: goto label_21ba8c;
        case 0x21ba90u: goto label_21ba90;
        case 0x21ba94u: goto label_21ba94;
        case 0x21ba98u: goto label_21ba98;
        case 0x21ba9cu: goto label_21ba9c;
        case 0x21baa0u: goto label_21baa0;
        case 0x21baa4u: goto label_21baa4;
        case 0x21baa8u: goto label_21baa8;
        case 0x21baacu: goto label_21baac;
        case 0x21bab0u: goto label_21bab0;
        case 0x21bab4u: goto label_21bab4;
        case 0x21bab8u: goto label_21bab8;
        case 0x21babcu: goto label_21babc;
        case 0x21bac0u: goto label_21bac0;
        case 0x21bac4u: goto label_21bac4;
        case 0x21bac8u: goto label_21bac8;
        case 0x21baccu: goto label_21bacc;
        case 0x21bad0u: goto label_21bad0;
        case 0x21bad4u: goto label_21bad4;
        case 0x21bad8u: goto label_21bad8;
        case 0x21badcu: goto label_21badc;
        case 0x21bae0u: goto label_21bae0;
        case 0x21bae4u: goto label_21bae4;
        case 0x21bae8u: goto label_21bae8;
        case 0x21baecu: goto label_21baec;
        case 0x21baf0u: goto label_21baf0;
        case 0x21baf4u: goto label_21baf4;
        case 0x21baf8u: goto label_21baf8;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb00u: goto label_21bb00;
        case 0x21bb04u: goto label_21bb04;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb0cu: goto label_21bb0c;
        case 0x21bb10u: goto label_21bb10;
        case 0x21bb14u: goto label_21bb14;
        case 0x21bb18u: goto label_21bb18;
        case 0x21bb1cu: goto label_21bb1c;
        case 0x21bb20u: goto label_21bb20;
        case 0x21bb24u: goto label_21bb24;
        case 0x21bb28u: goto label_21bb28;
        case 0x21bb2cu: goto label_21bb2c;
        case 0x21bb30u: goto label_21bb30;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bb38u: goto label_21bb38;
        case 0x21bb3cu: goto label_21bb3c;
        case 0x21bb40u: goto label_21bb40;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bb4cu: goto label_21bb4c;
        case 0x21bb50u: goto label_21bb50;
        case 0x21bb54u: goto label_21bb54;
        case 0x21bb58u: goto label_21bb58;
        case 0x21bb5cu: goto label_21bb5c;
        case 0x21bb60u: goto label_21bb60;
        case 0x21bb64u: goto label_21bb64;
        case 0x21bb68u: goto label_21bb68;
        case 0x21bb6cu: goto label_21bb6c;
        case 0x21bb70u: goto label_21bb70;
        case 0x21bb74u: goto label_21bb74;
        case 0x21bb78u: goto label_21bb78;
        case 0x21bb7cu: goto label_21bb7c;
        case 0x21bb80u: goto label_21bb80;
        case 0x21bb84u: goto label_21bb84;
        case 0x21bb88u: goto label_21bb88;
        case 0x21bb8cu: goto label_21bb8c;
        case 0x21bb90u: goto label_21bb90;
        case 0x21bb94u: goto label_21bb94;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bb9cu: goto label_21bb9c;
        case 0x21bba0u: goto label_21bba0;
        case 0x21bba4u: goto label_21bba4;
        case 0x21bba8u: goto label_21bba8;
        case 0x21bbacu: goto label_21bbac;
        case 0x21bbb0u: goto label_21bbb0;
        case 0x21bbb4u: goto label_21bbb4;
        case 0x21bbb8u: goto label_21bbb8;
        case 0x21bbbcu: goto label_21bbbc;
        case 0x21bbc0u: goto label_21bbc0;
        case 0x21bbc4u: goto label_21bbc4;
        case 0x21bbc8u: goto label_21bbc8;
        case 0x21bbccu: goto label_21bbcc;
        case 0x21bbd0u: goto label_21bbd0;
        case 0x21bbd4u: goto label_21bbd4;
        case 0x21bbd8u: goto label_21bbd8;
        case 0x21bbdcu: goto label_21bbdc;
        case 0x21bbe0u: goto label_21bbe0;
        case 0x21bbe4u: goto label_21bbe4;
        case 0x21bbe8u: goto label_21bbe8;
        case 0x21bbecu: goto label_21bbec;
        case 0x21bbf0u: goto label_21bbf0;
        case 0x21bbf4u: goto label_21bbf4;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bbfcu: goto label_21bbfc;
        case 0x21bc00u: goto label_21bc00;
        case 0x21bc04u: goto label_21bc04;
        case 0x21bc08u: goto label_21bc08;
        case 0x21bc0cu: goto label_21bc0c;
        case 0x21bc10u: goto label_21bc10;
        case 0x21bc14u: goto label_21bc14;
        case 0x21bc18u: goto label_21bc18;
        case 0x21bc1cu: goto label_21bc1c;
        case 0x21bc20u: goto label_21bc20;
        case 0x21bc24u: goto label_21bc24;
        case 0x21bc28u: goto label_21bc28;
        case 0x21bc2cu: goto label_21bc2c;
        case 0x21bc30u: goto label_21bc30;
        case 0x21bc34u: goto label_21bc34;
        case 0x21bc38u: goto label_21bc38;
        case 0x21bc3cu: goto label_21bc3c;
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc44u: goto label_21bc44;
        case 0x21bc48u: goto label_21bc48;
        case 0x21bc4cu: goto label_21bc4c;
        case 0x21bc50u: goto label_21bc50;
        case 0x21bc54u: goto label_21bc54;
        case 0x21bc58u: goto label_21bc58;
        case 0x21bc5cu: goto label_21bc5c;
        case 0x21bc60u: goto label_21bc60;
        case 0x21bc64u: goto label_21bc64;
        case 0x21bc68u: goto label_21bc68;
        case 0x21bc6cu: goto label_21bc6c;
        case 0x21bc70u: goto label_21bc70;
        case 0x21bc74u: goto label_21bc74;
        case 0x21bc78u: goto label_21bc78;
        case 0x21bc7cu: goto label_21bc7c;
        case 0x21bc80u: goto label_21bc80;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bc88u: goto label_21bc88;
        case 0x21bc8cu: goto label_21bc8c;
        case 0x21bc90u: goto label_21bc90;
        case 0x21bc94u: goto label_21bc94;
        case 0x21bc98u: goto label_21bc98;
        case 0x21bc9cu: goto label_21bc9c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bca4u: goto label_21bca4;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcb8u: goto label_21bcb8;
        case 0x21bcbcu: goto label_21bcbc;
        case 0x21bcc0u: goto label_21bcc0;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bcc8u: goto label_21bcc8;
        case 0x21bcccu: goto label_21bccc;
        case 0x21bcd0u: goto label_21bcd0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcd8u: goto label_21bcd8;
        case 0x21bcdcu: goto label_21bcdc;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bce8u: goto label_21bce8;
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd00u: goto label_21bd00;
        case 0x21bd04u: goto label_21bd04;
        case 0x21bd08u: goto label_21bd08;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd10u: goto label_21bd10;
        case 0x21bd14u: goto label_21bd14;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd1cu: goto label_21bd1c;
        case 0x21bd20u: goto label_21bd20;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd28u: goto label_21bd28;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd38u: goto label_21bd38;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd40u: goto label_21bd40;
        case 0x21bd44u: goto label_21bd44;
        case 0x21bd48u: goto label_21bd48;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd50u: goto label_21bd50;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd58u: goto label_21bd58;
        case 0x21bd5cu: goto label_21bd5c;
        case 0x21bd60u: goto label_21bd60;
        case 0x21bd64u: goto label_21bd64;
        case 0x21bd68u: goto label_21bd68;
        case 0x21bd6cu: goto label_21bd6c;
        case 0x21bd70u: goto label_21bd70;
        case 0x21bd74u: goto label_21bd74;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bd7cu: goto label_21bd7c;
        case 0x21bd80u: goto label_21bd80;
        case 0x21bd84u: goto label_21bd84;
        case 0x21bd88u: goto label_21bd88;
        case 0x21bd8cu: goto label_21bd8c;
        case 0x21bd90u: goto label_21bd90;
        case 0x21bd94u: goto label_21bd94;
        case 0x21bd98u: goto label_21bd98;
        case 0x21bd9cu: goto label_21bd9c;
        default: break;
    }

    ctx->pc = 0x21b700u;

label_21b700:
    // 0x21b700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21b704:
    // 0x21b704: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_21b708:
    // 0x21b708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21b70c:
    // 0x21b70c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_21b710:
    // 0x21b710: 0x3c12004a  lui         $s2, 0x4A
    ctx->pc = 0x21b710u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
label_21b714:
    // 0x21b714: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_21b718:
    // 0x21b718: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b71c:
    // 0x21b71c: 0x8c4395d4  lw          $v1, -0x6A2C($v0)
    ctx->pc = 0x21b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940116)));
label_21b720:
    // 0x21b720: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x21b720u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
label_21b724:
    // 0x21b724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21b728:
    // 0x21b728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21b72c:
    // 0x21b72c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_21b730:
    // 0x21b730: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_21b734:
    // 0x21b734: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_21b738:
    // 0x21b738: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_21b73c:
    // 0x21b73c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_21b740:
    if (ctx->pc == 0x21B740u) {
        ctx->pc = 0x21B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B73Cu;
        // 0x21b740: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B744u;
        goto label_21b744;
    }
    ctx->pc = 0x21B73Cu;
    {
        const bool branch_taken_0x21b73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B73Cu;
        // 0x21b740: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b73c) {
            ctx->pc = 0x21B7F0u;
            goto label_21b7f0;
        }
    }
    ctx->pc = 0x21B744u;
label_21b744:
    // 0x21b744: 0x27c33500  addiu       $v1, $fp, 0x3500
    ctx->pc = 0x21b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
label_21b748:
    // 0x21b748: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21b74c:
    // 0x21b74c: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b750:
    if (ctx->pc == 0x21B750u) {
        ctx->pc = 0x21B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B74Cu;
        // 0x21b750: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B754u;
        goto label_21b754;
    }
    ctx->pc = 0x21B74Cu;
    {
        const bool branch_taken_0x21b74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B74Cu;
        // 0x21b750: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b74c) {
            ctx->pc = 0x21B76Cu;
            goto label_21b76c;
        }
    }
    ctx->pc = 0x21B754u;
label_21b754:
    // 0x21b754: 0x0  nop
    ctx->pc = 0x21b754u;
    // NOP
label_21b758:
    // 0x21b758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21b75c:
    if (ctx->pc == 0x21B75Cu) {
        ctx->pc = 0x21B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B758u;
        // 0x21b75c: 0x27c33500  addiu       $v1, $fp, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B760u;
        goto label_21b760;
    }
    ctx->pc = 0x21B758u;
    {
        const bool branch_taken_0x21b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B758u;
        // 0x21b75c: 0x27c33500  addiu       $v1, $fp, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b758) {
            ctx->pc = 0x21B76Cu;
            goto label_21b76c;
        }
    }
    ctx->pc = 0x21B760u;
label_21b760:
    // 0x21b760: 0xc085042  jal         func_214108
label_21b764:
    if (ctx->pc == 0x21B764u) {
        ctx->pc = 0x21B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B760u;
        // 0x21b764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B768u;
        goto label_21b768;
    }
    ctx->pc = 0x21B760u;
    SET_GPR_U32(ctx, 31, 0x21B768u);
    ctx->pc = 0x21B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B760u;
    // 0x21b764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214108u, 0x21B760u, 0x21B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B768u;
label_21b768:
    // 0x21b768: 0x27c33500  addiu       $v1, $fp, 0x3500
    ctx->pc = 0x21b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
label_21b76c:
    // 0x21b76c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21b770:
    // 0x21b770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b774:
    if (ctx->pc == 0x21B774u) {
        ctx->pc = 0x21B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B770u;
        // 0x21b774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B778u;
        goto label_21b778;
    }
    ctx->pc = 0x21B770u;
    {
        const bool branch_taken_0x21b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B770u;
        // 0x21b774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b770) {
            ctx->pc = 0x21B77Cu;
            goto label_21b77c;
        }
    }
    ctx->pc = 0x21B778u;
label_21b778:
    // 0x21b778: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b77c:
    // 0x21b77c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b780:
    if (ctx->pc == 0x21B780u) {
        ctx->pc = 0x21B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B77Cu;
        // 0x21b780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B784u;
        goto label_21b784;
    }
    ctx->pc = 0x21B77Cu;
    {
        const bool branch_taken_0x21b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B77Cu;
        // 0x21b780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b77c) {
            ctx->pc = 0x21B78Cu;
            goto label_21b78c;
        }
    }
    ctx->pc = 0x21B784u;
label_21b784:
    // 0x21b784: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b788:
    // 0x21b788: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x21b788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_21b78c:
    // 0x21b78c: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
label_21b790:
    if (ctx->pc == 0x21B790u) {
        ctx->pc = 0x21B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B78Cu;
        // 0x21b790: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B794u;
        goto label_21b794;
    }
    ctx->pc = 0x21B78Cu;
    {
        const bool branch_taken_0x21b78c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b78c) {
            ctx->pc = 0x21B790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B78Cu;
            // 0x21b790: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b758;
        }
    }
    ctx->pc = 0x21B794u;
label_21b794:
    // 0x21b794: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_21b798:
    // 0x21b798: 0x24623510  addiu       $v0, $v1, 0x3510
    ctx->pc = 0x21b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13584));
label_21b79c:
    // 0x21b79c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b7a0:
    // 0x21b7a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b7a4:
    // 0x21b7a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_21b7a8:
    if (ctx->pc == 0x21B7A8u) {
        ctx->pc = 0x21B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7A4u;
        // 0x21b7a8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7ACu;
        goto label_21b7ac;
    }
    ctx->pc = 0x21B7A4u;
    {
        const bool branch_taken_0x21b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7A4u;
        // 0x21b7a8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7a4) {
            ctx->pc = 0x21B7C0u;
            goto label_21b7c0;
        }
    }
    ctx->pc = 0x21B7ACu;
label_21b7ac:
    // 0x21b7ac: 0x0  nop
    ctx->pc = 0x21b7acu;
    // NOP
label_21b7b0:
    // 0x21b7b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21b7b4:
    if (ctx->pc == 0x21B7B4u) {
        ctx->pc = 0x21B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7B0u;
        // 0x21b7b4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7B8u;
        goto label_21b7b8;
    }
    ctx->pc = 0x21B7B0u;
    {
        const bool branch_taken_0x21b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b7b0) {
            ctx->pc = 0x21B7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B7B0u;
            // 0x21b7b4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B7C4u;
            goto label_21b7c4;
        }
    }
    ctx->pc = 0x21B7B8u;
label_21b7b8:
    // 0x21b7b8: 0xc085042  jal         func_214108
label_21b7bc:
    if (ctx->pc == 0x21B7BCu) {
        ctx->pc = 0x21B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7B8u;
        // 0x21b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7C0u;
        goto label_21b7c0;
    }
    ctx->pc = 0x21B7B8u;
    SET_GPR_U32(ctx, 31, 0x21B7C0u);
    ctx->pc = 0x21B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7B8u;
    // 0x21b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214108u, 0x21B7B8u, 0x21B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7C0u;
label_21b7c0:
    // 0x21b7c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b7c4:
    // 0x21b7c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b7c8:
    if (ctx->pc == 0x21B7C8u) {
        ctx->pc = 0x21B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C4u;
        // 0x21b7c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7CCu;
        goto label_21b7cc;
    }
    ctx->pc = 0x21B7C4u;
    {
        const bool branch_taken_0x21b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C4u;
        // 0x21b7c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7c4) {
            ctx->pc = 0x21B7D0u;
            goto label_21b7d0;
        }
    }
    ctx->pc = 0x21B7CCu;
label_21b7cc:
    // 0x21b7cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b7d0:
    // 0x21b7d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b7d4:
    if (ctx->pc == 0x21B7D4u) {
        ctx->pc = 0x21B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D0u;
        // 0x21b7d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7D8u;
        goto label_21b7d8;
    }
    ctx->pc = 0x21B7D0u;
    {
        const bool branch_taken_0x21b7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D0u;
        // 0x21b7d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7d0) {
            ctx->pc = 0x21B7E0u;
            goto label_21b7e0;
        }
    }
    ctx->pc = 0x21B7D8u;
label_21b7d8:
    // 0x21b7d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b7dc:
    // 0x21b7dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21b7e0:
    // 0x21b7e0: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_21b7e4:
    if (ctx->pc == 0x21B7E4u) {
        ctx->pc = 0x21B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7E0u;
        // 0x21b7e4: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7E8u;
        goto label_21b7e8;
    }
    ctx->pc = 0x21B7E0u;
    {
        const bool branch_taken_0x21b7e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b7e0) {
            ctx->pc = 0x21B7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B7E0u;
            // 0x21b7e4: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b7b0;
        }
    }
    ctx->pc = 0x21B7E8u;
label_21b7e8:
    // 0x21b7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b7ec:
    // 0x21b7ec: 0xae6295d4  sw          $v0, -0x6A2C($s3)
    ctx->pc = 0x21b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294940116), GPR_U32(ctx, 2));
label_21b7f0:
    // 0x21b7f0: 0x27c23500  addiu       $v0, $fp, 0x3500
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
label_21b7f4:
    // 0x21b7f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b7f8:
    // 0x21b7f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b7fc:
    // 0x21b7fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_21b800:
    if (ctx->pc == 0x21B800u) {
        ctx->pc = 0x21B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7FCu;
        // 0x21b800: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B804u;
        goto label_21b804;
    }
    ctx->pc = 0x21B7FCu;
    {
        const bool branch_taken_0x21b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7FCu;
        // 0x21b800: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7fc) {
            ctx->pc = 0x21B820u;
            goto label_21b820;
        }
    }
    ctx->pc = 0x21B804u;
label_21b804:
    // 0x21b804: 0x0  nop
    ctx->pc = 0x21b804u;
    // NOP
label_21b808:
    // 0x21b808: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x21b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_21b80c:
    // 0x21b80c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x21b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_21b810:
    // 0x21b810: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21b814:
    if (ctx->pc == 0x21B814u) {
        ctx->pc = 0x21B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B810u;
        // 0x21b814: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B818u;
        goto label_21b818;
    }
    ctx->pc = 0x21B810u;
    {
        const bool branch_taken_0x21b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b810) {
            ctx->pc = 0x21B814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B810u;
            // 0x21b814: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B824u;
            goto label_21b824;
        }
    }
    ctx->pc = 0x21B818u;
label_21b818:
    // 0x21b818: 0xc0957ba  jal         func_255EE8
label_21b81c:
    if (ctx->pc == 0x21B81Cu) {
        ctx->pc = 0x21B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B818u;
        // 0x21b81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B820u;
        goto label_21b820;
    }
    ctx->pc = 0x21B818u;
    SET_GPR_U32(ctx, 31, 0x21B820u);
    ctx->pc = 0x21B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B818u;
    // 0x21b81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EE8u, 0x21B818u, 0x21B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B820u;
label_21b820:
    // 0x21b820: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b824:
    // 0x21b824: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b828:
    if (ctx->pc == 0x21B828u) {
        ctx->pc = 0x21B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B824u;
        // 0x21b828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B82Cu;
        goto label_21b82c;
    }
    ctx->pc = 0x21B824u;
    {
        const bool branch_taken_0x21b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B824u;
        // 0x21b828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b824) {
            ctx->pc = 0x21B830u;
            goto label_21b830;
        }
    }
    ctx->pc = 0x21B82Cu;
label_21b82c:
    // 0x21b82c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b830:
    // 0x21b830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b834:
    if (ctx->pc == 0x21B834u) {
        ctx->pc = 0x21B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B830u;
        // 0x21b834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B838u;
        goto label_21b838;
    }
    ctx->pc = 0x21B830u;
    {
        const bool branch_taken_0x21b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B830u;
        // 0x21b834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b830) {
            ctx->pc = 0x21B840u;
            goto label_21b840;
        }
    }
    ctx->pc = 0x21B838u;
label_21b838:
    // 0x21b838: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b83c:
    // 0x21b83c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21b840:
    // 0x21b840: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_21b844:
    if (ctx->pc == 0x21B844u) {
        ctx->pc = 0x21B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B840u;
        // 0x21b844: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B848u;
        goto label_21b848;
    }
    ctx->pc = 0x21B840u;
    {
        const bool branch_taken_0x21b840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b840) {
            ctx->pc = 0x21B844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B840u;
            // 0x21b844: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b808;
        }
    }
    ctx->pc = 0x21B848u;
label_21b848:
    // 0x21b848: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21b84c:
    // 0x21b84c: 0x24823510  addiu       $v0, $a0, 0x3510
    ctx->pc = 0x21b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
label_21b850:
    // 0x21b850: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b854:
    // 0x21b854: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b858:
    // 0x21b858: 0x10000014  b           . + 4 + (0x14 << 2)
label_21b85c:
    if (ctx->pc == 0x21B85Cu) {
        ctx->pc = 0x21B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B858u;
        // 0x21b85c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B860u;
        goto label_21b860;
    }
    ctx->pc = 0x21B858u;
    {
        const bool branch_taken_0x21b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B858u;
        // 0x21b85c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b858) {
            ctx->pc = 0x21B8ACu;
            goto label_21b8ac;
        }
    }
    ctx->pc = 0x21B860u;
label_21b860:
    // 0x21b860: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x21b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_21b864:
    // 0x21b864: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21b868:
    if (ctx->pc == 0x21B868u) {
        ctx->pc = 0x21B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B864u;
        // 0x21b868: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B86Cu;
        goto label_21b86c;
    }
    ctx->pc = 0x21B864u;
    {
        const bool branch_taken_0x21b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B864u;
        // 0x21b868: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b864) {
            ctx->pc = 0x21B874u;
            goto label_21b874;
        }
    }
    ctx->pc = 0x21B86Cu;
label_21b86c:
    // 0x21b86c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_21b870:
    if (ctx->pc == 0x21B870u) {
        ctx->pc = 0x21B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B86Cu;
        // 0x21b870: 0x92020116  lbu         $v0, 0x116($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B874u;
        goto label_21b874;
    }
    ctx->pc = 0x21B86Cu;
    {
        const bool branch_taken_0x21b86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b86c) {
            ctx->pc = 0x21B870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B86Cu;
            // 0x21b870: 0x92020116  lbu         $v0, 0x116($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B894u;
            goto label_21b894;
        }
    }
    ctx->pc = 0x21B874u;
label_21b874:
    // 0x21b874: 0xc0cdaee  jal         func_336BB8
label_21b878:
    if (ctx->pc == 0x21B878u) {
        ctx->pc = 0x21B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B874u;
        // 0x21b878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B87Cu;
        goto label_21b87c;
    }
    ctx->pc = 0x21B874u;
    SET_GPR_U32(ctx, 31, 0x21B87Cu);
    ctx->pc = 0x21B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B874u;
    // 0x21b878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x21B874u, 0x21B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B87Cu;
label_21b87c:
    // 0x21b87c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_21b880:
    if (ctx->pc == 0x21B880u) {
        ctx->pc = 0x21B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B87Cu;
        // 0x21b880: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B884u;
        goto label_21b884;
    }
    ctx->pc = 0x21B87Cu;
    {
        const bool branch_taken_0x21b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b87c) {
            ctx->pc = 0x21B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B87Cu;
            // 0x21b880: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B8B0u;
            goto label_21b8b0;
        }
    }
    ctx->pc = 0x21B884u;
label_21b884:
    // 0x21b884: 0xc086d88  jal         func_21B620
label_21b888:
    if (ctx->pc == 0x21B888u) {
        ctx->pc = 0x21B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B884u;
        // 0x21b888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B88Cu;
        goto label_21b88c;
    }
    ctx->pc = 0x21B884u;
    SET_GPR_U32(ctx, 31, 0x21B88Cu);
    ctx->pc = 0x21B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B884u;
    // 0x21b888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B620u, 0x21B884u, 0x21B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B88Cu;
label_21b88c:
    // 0x21b88c: 0x10000008  b           . + 4 + (0x8 << 2)
label_21b890:
    if (ctx->pc == 0x21B890u) {
        ctx->pc = 0x21B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B88Cu;
        // 0x21b890: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B894u;
        goto label_21b894;
    }
    ctx->pc = 0x21B88Cu;
    {
        const bool branch_taken_0x21b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B88Cu;
        // 0x21b890: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b88c) {
            ctx->pc = 0x21B8B0u;
            goto label_21b8b0;
        }
    }
    ctx->pc = 0x21B894u;
label_21b894:
    // 0x21b894: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21b894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_21b898:
    // 0x21b898: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x21b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_21b89c:
    // 0x21b89c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21b8a0:
    if (ctx->pc == 0x21B8A0u) {
        ctx->pc = 0x21B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B89Cu;
        // 0x21b8a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8A4u;
        goto label_21b8a4;
    }
    ctx->pc = 0x21B89Cu;
    {
        const bool branch_taken_0x21b89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b89c) {
            ctx->pc = 0x21B8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B89Cu;
            // 0x21b8a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B8B0u;
            goto label_21b8b0;
        }
    }
    ctx->pc = 0x21B8A4u;
label_21b8a4:
    // 0x21b8a4: 0xc0838fe  jal         func_20E3F8
label_21b8a8:
    if (ctx->pc == 0x21B8A8u) {
        ctx->pc = 0x21B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8A4u;
        // 0x21b8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8ACu;
        goto label_21b8ac;
    }
    ctx->pc = 0x21B8A4u;
    SET_GPR_U32(ctx, 31, 0x21B8ACu);
    ctx->pc = 0x21B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8A4u;
    // 0x21b8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E3F8u, 0x21B8A4u, 0x21B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8ACu;
label_21b8ac:
    // 0x21b8ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b8b0:
    // 0x21b8b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b8b4:
    if (ctx->pc == 0x21B8B4u) {
        ctx->pc = 0x21B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8B0u;
        // 0x21b8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8B8u;
        goto label_21b8b8;
    }
    ctx->pc = 0x21B8B0u;
    {
        const bool branch_taken_0x21b8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8B0u;
        // 0x21b8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8b0) {
            ctx->pc = 0x21B8BCu;
            goto label_21b8bc;
        }
    }
    ctx->pc = 0x21B8B8u;
label_21b8b8:
    // 0x21b8b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b8bc:
    // 0x21b8bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b8c0:
    if (ctx->pc == 0x21B8C0u) {
        ctx->pc = 0x21B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8BCu;
        // 0x21b8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8C4u;
        goto label_21b8c4;
    }
    ctx->pc = 0x21B8BCu;
    {
        const bool branch_taken_0x21b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8BCu;
        // 0x21b8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8bc) {
            ctx->pc = 0x21B8CCu;
            goto label_21b8cc;
        }
    }
    ctx->pc = 0x21B8C4u;
label_21b8c4:
    // 0x21b8c4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b8c8:
    // 0x21b8c8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21b8cc:
    // 0x21b8cc: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
label_21b8d0:
    if (ctx->pc == 0x21B8D0u) {
        ctx->pc = 0x21B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8CCu;
        // 0x21b8d0: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8D4u;
        goto label_21b8d4;
    }
    ctx->pc = 0x21B8CCu;
    {
        const bool branch_taken_0x21b8cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b8cc) {
            ctx->pc = 0x21B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B8CCu;
            // 0x21b8d0: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b860;
        }
    }
    ctx->pc = 0x21B8D4u;
label_21b8d4:
    // 0x21b8d4: 0x26423520  addiu       $v0, $s2, 0x3520
    ctx->pc = 0x21b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13600));
label_21b8d8:
    // 0x21b8d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b8dc:
    // 0x21b8dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b8e0:
    // 0x21b8e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b8e4:
    if (ctx->pc == 0x21B8E4u) {
        ctx->pc = 0x21B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E0u;
        // 0x21b8e4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8E8u;
        goto label_21b8e8;
    }
    ctx->pc = 0x21B8E0u;
    {
        const bool branch_taken_0x21b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E0u;
        // 0x21b8e4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8e0) {
            ctx->pc = 0x21B900u;
            goto label_21b900;
        }
    }
    ctx->pc = 0x21B8E8u;
label_21b8e8:
    // 0x21b8e8: 0xc0cdaee  jal         func_336BB8
label_21b8ec:
    if (ctx->pc == 0x21B8ECu) {
        ctx->pc = 0x21B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8E8u;
        // 0x21b8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8F0u;
        goto label_21b8f0;
    }
    ctx->pc = 0x21B8E8u;
    SET_GPR_U32(ctx, 31, 0x21B8F0u);
    ctx->pc = 0x21B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8E8u;
    // 0x21b8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x21B8E8u, 0x21B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8F0u;
label_21b8f0:
    // 0x21b8f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21b8f4:
    if (ctx->pc == 0x21B8F4u) {
        ctx->pc = 0x21B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8F0u;
        // 0x21b8f4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8F8u;
        goto label_21b8f8;
    }
    ctx->pc = 0x21B8F0u;
    {
        const bool branch_taken_0x21b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b8f0) {
            ctx->pc = 0x21B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B8F0u;
            // 0x21b8f4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B904u;
            goto label_21b904;
        }
    }
    ctx->pc = 0x21B8F8u;
label_21b8f8:
    // 0x21b8f8: 0xc086d88  jal         func_21B620
label_21b8fc:
    if (ctx->pc == 0x21B8FCu) {
        ctx->pc = 0x21B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8F8u;
        // 0x21b8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B900u;
        goto label_21b900;
    }
    ctx->pc = 0x21B8F8u;
    SET_GPR_U32(ctx, 31, 0x21B900u);
    ctx->pc = 0x21B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8F8u;
    // 0x21b8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B620u, 0x21B8F8u, 0x21B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B900u;
label_21b900:
    // 0x21b900: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b904:
    // 0x21b904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b908:
    if (ctx->pc == 0x21B908u) {
        ctx->pc = 0x21B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B904u;
        // 0x21b908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B90Cu;
        goto label_21b90c;
    }
    ctx->pc = 0x21B904u;
    {
        const bool branch_taken_0x21b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B904u;
        // 0x21b908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b904) {
            ctx->pc = 0x21B910u;
            goto label_21b910;
        }
    }
    ctx->pc = 0x21B90Cu;
label_21b90c:
    // 0x21b90c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b910:
    // 0x21b910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b914:
    if (ctx->pc == 0x21B914u) {
        ctx->pc = 0x21B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B910u;
        // 0x21b914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B918u;
        goto label_21b918;
    }
    ctx->pc = 0x21B910u;
    {
        const bool branch_taken_0x21b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B910u;
        // 0x21b914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b910) {
            ctx->pc = 0x21B920u;
            goto label_21b920;
        }
    }
    ctx->pc = 0x21B918u;
label_21b918:
    // 0x21b918: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b91c:
    // 0x21b91c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21b920:
    // 0x21b920: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
label_21b924:
    if (ctx->pc == 0x21B924u) {
        ctx->pc = 0x21B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B920u;
        // 0x21b924: 0x27c23500  addiu       $v0, $fp, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B928u;
        goto label_21b928;
    }
    ctx->pc = 0x21B920u;
    {
        const bool branch_taken_0x21b920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B920u;
        // 0x21b924: 0x27c23500  addiu       $v0, $fp, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b920) {
            ctx->pc = 0x21B8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b8e8;
        }
    }
    ctx->pc = 0x21B928u;
label_21b928:
    // 0x21b928: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b92c:
    // 0x21b92c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b930:
    // 0x21b930: 0x10000014  b           . + 4 + (0x14 << 2)
label_21b934:
    if (ctx->pc == 0x21B934u) {
        ctx->pc = 0x21B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B930u;
        // 0x21b934: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B938u;
        goto label_21b938;
    }
    ctx->pc = 0x21B930u;
    {
        const bool branch_taken_0x21b930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B930u;
        // 0x21b934: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b930) {
            ctx->pc = 0x21B984u;
            goto label_21b984;
        }
    }
    ctx->pc = 0x21B938u;
label_21b938:
    // 0x21b938: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x21b938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_21b93c:
    // 0x21b93c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21b940:
    if (ctx->pc == 0x21B940u) {
        ctx->pc = 0x21B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B93Cu;
        // 0x21b940: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B944u;
        goto label_21b944;
    }
    ctx->pc = 0x21B93Cu;
    {
        const bool branch_taken_0x21b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B93Cu;
        // 0x21b940: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b93c) {
            ctx->pc = 0x21B94Cu;
            goto label_21b94c;
        }
    }
    ctx->pc = 0x21B944u;
label_21b944:
    // 0x21b944: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_21b948:
    if (ctx->pc == 0x21B948u) {
        ctx->pc = 0x21B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B944u;
        // 0x21b948: 0x92020116  lbu         $v0, 0x116($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B94Cu;
        goto label_21b94c;
    }
    ctx->pc = 0x21B944u;
    {
        const bool branch_taken_0x21b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b944) {
            ctx->pc = 0x21B948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B944u;
            // 0x21b948: 0x92020116  lbu         $v0, 0x116($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B96Cu;
            goto label_21b96c;
        }
    }
    ctx->pc = 0x21B94Cu;
label_21b94c:
    // 0x21b94c: 0xc0cdaee  jal         func_336BB8
label_21b950:
    if (ctx->pc == 0x21B950u) {
        ctx->pc = 0x21B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B94Cu;
        // 0x21b950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B954u;
        goto label_21b954;
    }
    ctx->pc = 0x21B94Cu;
    SET_GPR_U32(ctx, 31, 0x21B954u);
    ctx->pc = 0x21B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B94Cu;
    // 0x21b950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x21B94Cu, 0x21B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B954u;
label_21b954:
    // 0x21b954: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_21b958:
    if (ctx->pc == 0x21B958u) {
        ctx->pc = 0x21B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B954u;
        // 0x21b958: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B95Cu;
        goto label_21b95c;
    }
    ctx->pc = 0x21B954u;
    {
        const bool branch_taken_0x21b954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b954) {
            ctx->pc = 0x21B958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B954u;
            // 0x21b958: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B95Cu;
label_21b95c:
    // 0x21b95c: 0xc086d88  jal         func_21B620
label_21b960:
    if (ctx->pc == 0x21B960u) {
        ctx->pc = 0x21B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B95Cu;
        // 0x21b960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B964u;
        goto label_21b964;
    }
    ctx->pc = 0x21B95Cu;
    SET_GPR_U32(ctx, 31, 0x21B964u);
    ctx->pc = 0x21B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B95Cu;
    // 0x21b960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B620u, 0x21B95Cu, 0x21B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B964u;
label_21b964:
    // 0x21b964: 0x10000008  b           . + 4 + (0x8 << 2)
label_21b968:
    if (ctx->pc == 0x21B968u) {
        ctx->pc = 0x21B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B964u;
        // 0x21b968: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B96Cu;
        goto label_21b96c;
    }
    ctx->pc = 0x21B964u;
    {
        const bool branch_taken_0x21b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B964u;
        // 0x21b968: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b964) {
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B96Cu;
label_21b96c:
    // 0x21b96c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_21b970:
    // 0x21b970: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x21b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_21b974:
    // 0x21b974: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21b978:
    if (ctx->pc == 0x21B978u) {
        ctx->pc = 0x21B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B974u;
        // 0x21b978: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B97Cu;
        goto label_21b97c;
    }
    ctx->pc = 0x21B974u;
    {
        const bool branch_taken_0x21b974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b974) {
            ctx->pc = 0x21B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B974u;
            // 0x21b978: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B97Cu;
label_21b97c:
    // 0x21b97c: 0xc0838fe  jal         func_20E3F8
label_21b980:
    if (ctx->pc == 0x21B980u) {
        ctx->pc = 0x21B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B97Cu;
        // 0x21b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B984u;
        goto label_21b984;
    }
    ctx->pc = 0x21B97Cu;
    SET_GPR_U32(ctx, 31, 0x21B984u);
    ctx->pc = 0x21B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B97Cu;
    // 0x21b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E3F8u, 0x21B97Cu, 0x21B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B984u;
label_21b984:
    // 0x21b984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b988:
    // 0x21b988: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21b98c:
    if (ctx->pc == 0x21B98Cu) {
        ctx->pc = 0x21B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B988u;
        // 0x21b98c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B990u;
        goto label_21b990;
    }
    ctx->pc = 0x21B988u;
    {
        const bool branch_taken_0x21b988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B988u;
        // 0x21b98c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b988) {
            ctx->pc = 0x21B994u;
            goto label_21b994;
        }
    }
    ctx->pc = 0x21B990u;
label_21b990:
    // 0x21b990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b994:
    // 0x21b994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21b998:
    if (ctx->pc == 0x21B998u) {
        ctx->pc = 0x21B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B994u;
        // 0x21b998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B99Cu;
        goto label_21b99c;
    }
    ctx->pc = 0x21B994u;
    {
        const bool branch_taken_0x21b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B994u;
        // 0x21b998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b994) {
            ctx->pc = 0x21B9A4u;
            goto label_21b9a4;
        }
    }
    ctx->pc = 0x21B99Cu;
label_21b99c:
    // 0x21b99c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21b9a0:
    // 0x21b9a0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21b9a4:
    // 0x21b9a4: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
label_21b9a8:
    if (ctx->pc == 0x21B9A8u) {
        ctx->pc = 0x21B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9A4u;
        // 0x21b9a8: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9ACu;
        goto label_21b9ac;
    }
    ctx->pc = 0x21B9A4u;
    {
        const bool branch_taken_0x21b9a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9a4) {
            ctx->pc = 0x21B9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9A4u;
            // 0x21b9a8: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b938;
        }
    }
    ctx->pc = 0x21B9ACu;
label_21b9ac:
    // 0x21b9ac: 0x27c23500  addiu       $v0, $fp, 0x3500
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
label_21b9b0:
    // 0x21b9b0: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x21b9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_21b9b4:
    // 0x21b9b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b9b8:
    // 0x21b9b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b9bc:
    // 0x21b9bc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x21b9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_21b9c0:
    // 0x21b9c0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_21b9c4:
    if (ctx->pc == 0x21B9C4u) {
        ctx->pc = 0x21B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9C0u;
        // 0x21b9c4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9C8u;
        goto label_21b9c8;
    }
    ctx->pc = 0x21B9C0u;
    {
        const bool branch_taken_0x21b9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9C0u;
        // 0x21b9c4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9c0) {
            ctx->pc = 0x21BA34u;
            goto label_21ba34;
        }
    }
    ctx->pc = 0x21B9C8u;
label_21b9c8:
    // 0x21b9c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x21b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_21b9cc:
    // 0x21b9cc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_21b9d0:
    if (ctx->pc == 0x21B9D0u) {
        ctx->pc = 0x21B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9CCu;
        // 0x21b9d0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9D4u;
        goto label_21b9d4;
    }
    ctx->pc = 0x21B9CCu;
    {
        const bool branch_taken_0x21b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9cc) {
            ctx->pc = 0x21B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9CCu;
            // 0x21b9d0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA38u;
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21B9D4u;
label_21b9d4:
    // 0x21b9d4: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x21b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_21b9d8:
    // 0x21b9d8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21b9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21b9dc:
    // 0x21b9dc: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x21b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_21b9e0:
    // 0x21b9e0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_21b9e4:
    if (ctx->pc == 0x21B9E4u) {
        ctx->pc = 0x21B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9E0u;
        // 0x21b9e4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9E8u;
        goto label_21b9e8;
    }
    ctx->pc = 0x21B9E0u;
    {
        const bool branch_taken_0x21b9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9e0) {
            ctx->pc = 0x21B9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9E0u;
            // 0x21b9e4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA18u;
            goto label_21ba18;
        }
    }
    ctx->pc = 0x21B9E8u;
label_21b9e8:
    // 0x21b9e8: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x21b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_21b9ec:
    // 0x21b9ec: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x21b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_21b9f0:
    // 0x21b9f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_21b9f4:
    if (ctx->pc == 0x21B9F4u) {
        ctx->pc = 0x21B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9F0u;
        // 0x21b9f4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9F8u;
        goto label_21b9f8;
    }
    ctx->pc = 0x21B9F0u;
    {
        const bool branch_taken_0x21b9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9f0) {
            ctx->pc = 0x21B9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9F0u;
            // 0x21b9f4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA08u;
            goto label_21ba08;
        }
    }
    ctx->pc = 0x21B9F8u;
label_21b9f8:
    // 0x21b9f8: 0x8e829620  lw          $v0, -0x69E0($s4)
    ctx->pc = 0x21b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940192)));
label_21b9fc:
    // 0x21b9fc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_21ba00:
    if (ctx->pc == 0x21BA00u) {
        ctx->pc = 0x21BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9FCu;
        // 0x21ba00: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA04u;
        goto label_21ba04;
    }
    ctx->pc = 0x21B9FCu;
    {
        const bool branch_taken_0x21b9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9fc) {
            ctx->pc = 0x21BA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9FCu;
            // 0x21ba00: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA38u;
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21BA04u;
label_21ba04:
    // 0x21ba04: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x21ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_21ba08:
    // 0x21ba08: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x21ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_21ba0c:
    // 0x21ba0c: 0x5052000a  beql        $v0, $s2, . + 4 + (0xA << 2)
label_21ba10:
    if (ctx->pc == 0x21BA10u) {
        ctx->pc = 0x21BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA0Cu;
        // 0x21ba10: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA14u;
        goto label_21ba14;
    }
    ctx->pc = 0x21BA0Cu;
    {
        const bool branch_taken_0x21ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x21ba0c) {
            ctx->pc = 0x21BA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BA0Cu;
            // 0x21ba10: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA38u;
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21BA14u;
label_21ba14:
    // 0x21ba14: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x21ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_21ba18:
    // 0x21ba18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x21ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_21ba1c:
    // 0x21ba1c: 0x40f809  jalr        $v0
label_21ba20:
    if (ctx->pc == 0x21BA20u) {
        ctx->pc = 0x21BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA1Cu;
        // 0x21ba20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA24u;
        goto label_21ba24;
    }
    ctx->pc = 0x21BA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BA24u);
        ctx->pc = 0x21BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA1Cu;
        // 0x21ba20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BA1Cu, 0x21BA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BA24u;
label_21ba24:
    // 0x21ba24: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x21ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_21ba28:
    // 0x21ba28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21ba2c:
    if (ctx->pc == 0x21BA2Cu) {
        ctx->pc = 0x21BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA28u;
        // 0x21ba2c: 0xa2200114  sb          $zero, 0x114($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA30u;
        goto label_21ba30;
    }
    ctx->pc = 0x21BA28u;
    {
        const bool branch_taken_0x21ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA28u;
        // 0x21ba2c: 0xa2200114  sb          $zero, 0x114($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba28) {
            ctx->pc = 0x21BA34u;
            goto label_21ba34;
        }
    }
    ctx->pc = 0x21BA30u;
label_21ba30:
    // 0x21ba30: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x21ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_21ba34:
    // 0x21ba34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x21ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_21ba38:
    // 0x21ba38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21ba3c:
    if (ctx->pc == 0x21BA3Cu) {
        ctx->pc = 0x21BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA38u;
        // 0x21ba3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA40u;
        goto label_21ba40;
    }
    ctx->pc = 0x21BA38u;
    {
        const bool branch_taken_0x21ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA38u;
        // 0x21ba3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba38) {
            ctx->pc = 0x21BA44u;
            goto label_21ba44;
        }
    }
    ctx->pc = 0x21BA40u;
label_21ba40:
    // 0x21ba40: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21ba40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ba44:
    // 0x21ba44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21ba48:
    if (ctx->pc == 0x21BA48u) {
        ctx->pc = 0x21BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA44u;
        // 0x21ba48: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA4Cu;
        goto label_21ba4c;
    }
    ctx->pc = 0x21BA44u;
    {
        const bool branch_taken_0x21ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA44u;
        // 0x21ba48: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba44) {
            ctx->pc = 0x21BA54u;
            goto label_21ba54;
        }
    }
    ctx->pc = 0x21BA4Cu;
label_21ba4c:
    // 0x21ba4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21ba50:
    // 0x21ba50: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x21ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_21ba54:
    // 0x21ba54: 0x5600ffdc  bnel        $s0, $zero, . + 4 + (-0x24 << 2)
label_21ba58:
    if (ctx->pc == 0x21BA58u) {
        ctx->pc = 0x21BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA54u;
        // 0x21ba58: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA5Cu;
        goto label_21ba5c;
    }
    ctx->pc = 0x21BA54u;
    {
        const bool branch_taken_0x21ba54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ba54) {
            ctx->pc = 0x21BA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BA54u;
            // 0x21ba58: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b9c8;
        }
    }
    ctx->pc = 0x21BA5Cu;
label_21ba5c:
    // 0x21ba5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ba60:
    // 0x21ba60: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_21ba64:
    // 0x21ba64: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_21ba68:
    // 0x21ba68: 0x3c150010  lui         $s5, 0x10
    ctx->pc = 0x21ba68u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16 << 16));
label_21ba6c:
    // 0x21ba6c: 0xac8291ac  sw          $v0, -0x6E54($a0)
    ctx->pc = 0x21ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294939052), GPR_U32(ctx, 2));
label_21ba70:
    // 0x21ba70: 0x24733500  addiu       $s3, $v1, 0x3500
    ctx->pc = 0x21ba70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
label_21ba74:
    // 0x21ba74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ba74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ba78:
    // 0x21ba78: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x21ba78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_21ba7c:
    // 0x21ba7c: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x21ba7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
label_21ba80:
    // 0x21ba80: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x21ba80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_21ba84:
    // 0x21ba84: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x21ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21ba88:
    // 0x21ba88: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21ba88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ba8c:
    // 0x21ba8c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ba8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21ba90:
    // 0x21ba90: 0x10000031  b           . + 4 + (0x31 << 2)
label_21ba94:
    if (ctx->pc == 0x21BA94u) {
        ctx->pc = 0x21BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA90u;
        // 0x21ba94: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA98u;
        goto label_21ba98;
    }
    ctx->pc = 0x21BA90u;
    {
        const bool branch_taken_0x21ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA90u;
        // 0x21ba94: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba90) {
            ctx->pc = 0x21BB58u;
            goto label_21bb58;
        }
    }
    ctx->pc = 0x21BA98u;
label_21ba98:
    // 0x21ba98: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x21ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_21ba9c:
    // 0x21ba9c: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_21baa0:
    if (ctx->pc == 0x21BAA0u) {
        ctx->pc = 0x21BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA9Cu;
        // 0x21baa0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAA4u;
        goto label_21baa4;
    }
    ctx->pc = 0x21BA9Cu;
    {
        const bool branch_taken_0x21ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ba9c) {
            ctx->pc = 0x21BAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BA9Cu;
            // 0x21baa0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BAA4u;
label_21baa4:
    // 0x21baa4: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x21baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_21baa8:
    // 0x21baa8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21baac:
    // 0x21baac: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x21baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_21bab0:
    // 0x21bab0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_21bab4:
    if (ctx->pc == 0x21BAB4u) {
        ctx->pc = 0x21BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAB0u;
        // 0x21bab4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAB8u;
        goto label_21bab8;
    }
    ctx->pc = 0x21BAB0u;
    {
        const bool branch_taken_0x21bab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAB0u;
        // 0x21bab4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bab0) {
            ctx->pc = 0x21BAE4u;
            goto label_21bae4;
        }
    }
    ctx->pc = 0x21BAB8u;
label_21bab8:
    // 0x21bab8: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x21bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_21babc:
    // 0x21babc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x21babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_21bac0:
    // 0x21bac0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_21bac4:
    if (ctx->pc == 0x21BAC4u) {
        ctx->pc = 0x21BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAC0u;
        // 0x21bac4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAC8u;
        goto label_21bac8;
    }
    ctx->pc = 0x21BAC0u;
    {
        const bool branch_taken_0x21bac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bac0) {
            ctx->pc = 0x21BAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BAC0u;
            // 0x21bac4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BAD8u;
            goto label_21bad8;
        }
    }
    ctx->pc = 0x21BAC8u;
label_21bac8:
    // 0x21bac8: 0x8ee29620  lw          $v0, -0x69E0($s7)
    ctx->pc = 0x21bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294940192)));
label_21bacc:
    // 0x21bacc: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_21bad0:
    if (ctx->pc == 0x21BAD0u) {
        ctx->pc = 0x21BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BACCu;
        // 0x21bad0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAD4u;
        goto label_21bad4;
    }
    ctx->pc = 0x21BACCu;
    {
        const bool branch_taken_0x21bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bacc) {
            ctx->pc = 0x21BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BACCu;
            // 0x21bad0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BAD4u;
label_21bad4:
    // 0x21bad4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_21bad8:
    // 0x21bad8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x21bad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_21badc:
    // 0x21badc: 0x5056001f  beql        $v0, $s6, . + 4 + (0x1F << 2)
label_21bae0:
    if (ctx->pc == 0x21BAE0u) {
        ctx->pc = 0x21BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BADCu;
        // 0x21bae0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAE4u;
        goto label_21bae4;
    }
    ctx->pc = 0x21BADCu;
    {
        const bool branch_taken_0x21badc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x21badc) {
            ctx->pc = 0x21BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BADCu;
            // 0x21bae0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BAE4u;
label_21bae4:
    // 0x21bae4: 0x3882020f  xori        $v0, $a0, 0x20F
    ctx->pc = 0x21bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_21bae8:
    // 0x21bae8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21baec:
    if (ctx->pc == 0x21BAECu) {
        ctx->pc = 0x21BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAE8u;
        // 0x21baec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAF0u;
        goto label_21baf0;
    }
    ctx->pc = 0x21BAE8u;
    {
        const bool branch_taken_0x21bae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAE8u;
        // 0x21baec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bae8) {
            ctx->pc = 0x21BAFCu;
            goto label_21bafc;
        }
    }
    ctx->pc = 0x21BAF0u;
label_21baf0:
    // 0x21baf0: 0xc0b9400  jal         func_2E5000
label_21baf4:
    if (ctx->pc == 0x21BAF4u) {
        ctx->pc = 0x21BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAF0u;
        // 0x21baf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAF8u;
        goto label_21baf8;
    }
    ctx->pc = 0x21BAF0u;
    SET_GPR_U32(ctx, 31, 0x21BAF8u);
    ctx->pc = 0x21BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAF0u;
    // 0x21baf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x21BAF0u, 0x21BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAF8u;
label_21baf8:
    // 0x21baf8: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x21baf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_21bafc:
    // 0x21bafc: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_21bb00:
    if (ctx->pc == 0x21BB00u) {
        ctx->pc = 0x21BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAFCu;
        // 0x21bb00: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB04u;
        goto label_21bb04;
    }
    ctx->pc = 0x21BAFCu;
    {
        const bool branch_taken_0x21bafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bafc) {
            ctx->pc = 0x21BB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BAFCu;
            // 0x21bb00: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BB04u;
label_21bb04:
    // 0x21bb04: 0x8e3000c4  lw          $s0, 0xC4($s1)
    ctx->pc = 0x21bb04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_21bb08:
    // 0x21bb08: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_21bb0c:
    if (ctx->pc == 0x21BB0Cu) {
        ctx->pc = 0x21BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB08u;
        // 0x21bb0c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB10u;
        goto label_21bb10;
    }
    ctx->pc = 0x21BB08u;
    {
        const bool branch_taken_0x21bb08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb08) {
            ctx->pc = 0x21BB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB08u;
            // 0x21bb0c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BB10u;
label_21bb10:
    // 0x21bb10: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x21bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21bb14:
    // 0x21bb14: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_21bb18:
    if (ctx->pc == 0x21BB18u) {
        ctx->pc = 0x21BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB14u;
        // 0x21bb18: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB1Cu;
        goto label_21bb1c;
    }
    ctx->pc = 0x21BB14u;
    {
        const bool branch_taken_0x21bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb14) {
            ctx->pc = 0x21BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB14u;
            // 0x21bb18: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BB1Cu;
label_21bb1c:
    // 0x21bb1c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21bb20:
    // 0x21bb20: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_21bb24:
    if (ctx->pc == 0x21BB24u) {
        ctx->pc = 0x21BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB20u;
        // 0x21bb24: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB28u;
        goto label_21bb28;
    }
    ctx->pc = 0x21BB20u;
    {
        const bool branch_taken_0x21bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb20) {
            ctx->pc = 0x21BB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB20u;
            // 0x21bb24: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB5Cu;
            goto label_21bb5c;
        }
    }
    ctx->pc = 0x21BB28u;
label_21bb28:
    // 0x21bb28: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x21bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_21bb2c:
    // 0x21bb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21bb30:
    // 0x21bb30: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21bb34:
    // 0x21bb34: 0x40f809  jalr        $v0
label_21bb38:
    if (ctx->pc == 0x21BB38u) {
        ctx->pc = 0x21BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB34u;
        // 0x21bb38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB3Cu;
        goto label_21bb3c;
    }
    ctx->pc = 0x21BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BB3Cu);
        ctx->pc = 0x21BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB34u;
        // 0x21bb38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BB34u, 0x21BB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BB3Cu;
label_21bb3c:
    // 0x21bb3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21bb40:
    if (ctx->pc == 0x21BB40u) {
        ctx->pc = 0x21BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB3Cu;
        // 0x21bb40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB44u;
        goto label_21bb44;
    }
    ctx->pc = 0x21BB3Cu;
    {
        const bool branch_taken_0x21bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB3Cu;
        // 0x21bb40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb3c) {
            ctx->pc = 0x21BB4Cu;
            goto label_21bb4c;
        }
    }
    ctx->pc = 0x21BB44u;
label_21bb44:
    // 0x21bb44: 0x10000004  b           . + 4 + (0x4 << 2)
label_21bb48:
    if (ctx->pc == 0x21BB48u) {
        ctx->pc = 0x21BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB44u;
        // 0x21bb48: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB4Cu;
        goto label_21bb4c;
    }
    ctx->pc = 0x21BB44u;
    {
        const bool branch_taken_0x21bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB44u;
        // 0x21bb48: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb44) {
            ctx->pc = 0x21BB58u;
            goto label_21bb58;
        }
    }
    ctx->pc = 0x21BB4Cu;
label_21bb4c:
    // 0x21bb4c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_21bb50:
    // 0x21bb50: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x21bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_21bb54:
    // 0x21bb54: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x21bb54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_21bb58:
    // 0x21bb58: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x21bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_21bb5c:
    // 0x21bb5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21bb60:
    if (ctx->pc == 0x21BB60u) {
        ctx->pc = 0x21BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB5Cu;
        // 0x21bb60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB64u;
        goto label_21bb64;
    }
    ctx->pc = 0x21BB5Cu;
    {
        const bool branch_taken_0x21bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB5Cu;
        // 0x21bb60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb5c) {
            ctx->pc = 0x21BB68u;
            goto label_21bb68;
        }
    }
    ctx->pc = 0x21BB64u;
label_21bb64:
    // 0x21bb64: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bb68:
    // 0x21bb68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21bb6c:
    if (ctx->pc == 0x21BB6Cu) {
        ctx->pc = 0x21BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB68u;
        // 0x21bb6c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB70u;
        goto label_21bb70;
    }
    ctx->pc = 0x21BB68u;
    {
        const bool branch_taken_0x21bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB68u;
        // 0x21bb6c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb68) {
            ctx->pc = 0x21BB78u;
            goto label_21bb78;
        }
    }
    ctx->pc = 0x21BB70u;
label_21bb70:
    // 0x21bb70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21bb74:
    // 0x21bb74: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x21bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_21bb78:
    // 0x21bb78: 0x5600ffc7  bnel        $s0, $zero, . + 4 + (-0x39 << 2)
label_21bb7c:
    if (ctx->pc == 0x21BB7Cu) {
        ctx->pc = 0x21BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB78u;
        // 0x21bb7c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB80u;
        goto label_21bb80;
    }
    ctx->pc = 0x21BB78u;
    {
        const bool branch_taken_0x21bb78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb78) {
            ctx->pc = 0x21BB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB78u;
            // 0x21bb7c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba98;
        }
    }
    ctx->pc = 0x21BB80u;
label_21bb80:
    // 0x21bb80: 0x5240ffc1  beql        $s2, $zero, . + 4 + (-0x3F << 2)
label_21bb84:
    if (ctx->pc == 0x21BB84u) {
        ctx->pc = 0x21BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB80u;
        // 0x21bb84: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB88u;
        goto label_21bb88;
    }
    ctx->pc = 0x21BB80u;
    {
        const bool branch_taken_0x21bb80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb80) {
            ctx->pc = 0x21BB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB80u;
            // 0x21bb84: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba88;
        }
    }
    ctx->pc = 0x21BB88u;
label_21bb88:
    // 0x21bb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bb8c:
    // 0x21bb8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21bb90:
    // 0x21bb90: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x21bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_21bb94:
    // 0x21bb94: 0xac6091ac  sw          $zero, -0x6E54($v1)
    ctx->pc = 0x21bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939052), GPR_U32(ctx, 0));
label_21bb98:
    // 0x21bb98: 0xa08295d0  sb          $v0, -0x6A30($a0)
    ctx->pc = 0x21bb98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294940112), (uint8_t)GPR_U32(ctx, 2));
label_21bb9c:
    // 0x21bb9c: 0xc09c8ba  jal         func_2722E8
label_21bba0:
    if (ctx->pc == 0x21BBA0u) {
        ctx->pc = 0x21BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB9Cu;
        // 0x21bba0: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBA4u;
        goto label_21bba4;
    }
    ctx->pc = 0x21BB9Cu;
    SET_GPR_U32(ctx, 31, 0x21BBA4u);
    ctx->pc = 0x21BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB9Cu;
    // 0x21bba0: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722E8u, 0x21BB9Cu, 0x21BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBA4u;
label_21bba4:
    // 0x21bba4: 0xc096492  jal         func_259248
label_21bba8:
    if (ctx->pc == 0x21BBA8u) {
        ctx->pc = 0x21BBACu;
        goto label_21bbac;
    }
    ctx->pc = 0x21BBA4u;
    SET_GPR_U32(ctx, 31, 0x21BBACu);
    ctx->pc = 0x259248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259248u, 0x21BBA4u, 0x21BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBACu;
label_21bbac:
    // 0x21bbac: 0x27c23500  addiu       $v0, $fp, 0x3500
    ctx->pc = 0x21bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 13568));
label_21bbb0:
    // 0x21bbb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21bbb4:
    // 0x21bbb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21bbb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bbb8:
    // 0x21bbb8: 0x10000044  b           . + 4 + (0x44 << 2)
label_21bbbc:
    if (ctx->pc == 0x21BBBCu) {
        ctx->pc = 0x21BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB8u;
        // 0x21bbbc: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBC0u;
        goto label_21bbc0;
    }
    ctx->pc = 0x21BBB8u;
    {
        const bool branch_taken_0x21bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB8u;
        // 0x21bbbc: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb8) {
            ctx->pc = 0x21BCCCu;
            goto label_21bccc;
        }
    }
    ctx->pc = 0x21BBC0u;
label_21bbc0:
    // 0x21bbc0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21bbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21bbc4:
    // 0x21bbc4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x21bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_21bbc8:
    // 0x21bbc8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_21bbcc:
    if (ctx->pc == 0x21BBCCu) {
        ctx->pc = 0x21BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBC8u;
        // 0x21bbcc: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBD0u;
        goto label_21bbd0;
    }
    ctx->pc = 0x21BBC8u;
    {
        const bool branch_taken_0x21bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bbc8) {
            ctx->pc = 0x21BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBC8u;
            // 0x21bbcc: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC2Cu;
            goto label_21bc2c;
        }
    }
    ctx->pc = 0x21BBD0u;
label_21bbd0:
    // 0x21bbd0: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_21bbd4:
    // 0x21bbd4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x21bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_21bbd8:
    // 0x21bbd8: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
label_21bbdc:
    if (ctx->pc == 0x21BBDCu) {
        ctx->pc = 0x21BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBD8u;
        // 0x21bbdc: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBE0u;
        goto label_21bbe0;
    }
    ctx->pc = 0x21BBD8u;
    {
        const bool branch_taken_0x21bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x21BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBD8u;
        // 0x21bbdc: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbd8) {
            ctx->pc = 0x21BBFCu;
            goto label_21bbfc;
        }
    }
    ctx->pc = 0x21BBE0u;
label_21bbe0:
    // 0x21bbe0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x21bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_21bbe4:
    // 0x21bbe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21bbe8:
    // 0x21bbe8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_21bbec:
    // 0x21bbec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21bbecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21bbf0:
    // 0x21bbf0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x21bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_21bbf4:
    // 0x21bbf4: 0x10000036  b           . + 4 + (0x36 << 2)
label_21bbf8:
    if (ctx->pc == 0x21BBF8u) {
        ctx->pc = 0x21BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBF4u;
        // 0x21bbf8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBFCu;
        goto label_21bbfc;
    }
    ctx->pc = 0x21BBF4u;
    {
        const bool branch_taken_0x21bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBF4u;
        // 0x21bbf8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbf4) {
            ctx->pc = 0x21BCD0u;
            goto label_21bcd0;
        }
    }
    ctx->pc = 0x21BBFCu;
label_21bbfc:
    // 0x21bbfc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x21bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_21bc00:
    // 0x21bc00: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_21bc04:
    if (ctx->pc == 0x21BC04u) {
        ctx->pc = 0x21BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC00u;
        // 0x21bc04: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC08u;
        goto label_21bc08;
    }
    ctx->pc = 0x21BC00u;
    {
        const bool branch_taken_0x21bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc00) {
            ctx->pc = 0x21BC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC00u;
            // 0x21bc04: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC2Cu;
            goto label_21bc2c;
        }
    }
    ctx->pc = 0x21BC08u;
label_21bc08:
    // 0x21bc08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_21bc0c:
    // 0x21bc0c: 0x8c439620  lw          $v1, -0x69E0($v0)
    ctx->pc = 0x21bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940192)));
label_21bc10:
    // 0x21bc10: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
label_21bc14:
    if (ctx->pc == 0x21BC14u) {
        ctx->pc = 0x21BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC10u;
        // 0x21bc14: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC18u;
        goto label_21bc18;
    }
    ctx->pc = 0x21BC10u;
    {
        const bool branch_taken_0x21bc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc10) {
            ctx->pc = 0x21BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC10u;
            // 0x21bc14: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCD0u;
            goto label_21bcd0;
        }
    }
    ctx->pc = 0x21BC18u;
label_21bc18:
    // 0x21bc18: 0xc0963a0  jal         func_258E80
label_21bc1c:
    if (ctx->pc == 0x21BC1Cu) {
        ctx->pc = 0x21BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC18u;
        // 0x21bc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC20u;
        goto label_21bc20;
    }
    ctx->pc = 0x21BC18u;
    SET_GPR_U32(ctx, 31, 0x21BC20u);
    ctx->pc = 0x21BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC18u;
    // 0x21bc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E80u, 0x21BC18u, 0x21BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC20u;
label_21bc20:
    // 0x21bc20: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_21bc24:
    if (ctx->pc == 0x21BC24u) {
        ctx->pc = 0x21BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC20u;
        // 0x21bc24: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC28u;
        goto label_21bc28;
    }
    ctx->pc = 0x21BC20u;
    {
        const bool branch_taken_0x21bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc20) {
            ctx->pc = 0x21BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC20u;
            // 0x21bc24: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCD0u;
            goto label_21bcd0;
        }
    }
    ctx->pc = 0x21BC28u;
label_21bc28:
    // 0x21bc28: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x21bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_21bc2c:
    // 0x21bc2c: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x21bc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_21bc30:
    // 0x21bc30: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
label_21bc34:
    if (ctx->pc == 0x21BC34u) {
        ctx->pc = 0x21BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC30u;
        // 0x21bc34: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC38u;
        goto label_21bc38;
    }
    ctx->pc = 0x21BC30u;
    {
        const bool branch_taken_0x21bc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc30) {
            ctx->pc = 0x21BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC30u;
            // 0x21bc34: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCACu;
            goto label_21bcac;
        }
    }
    ctx->pc = 0x21BC38u;
label_21bc38:
    // 0x21bc38: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x21bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_21bc3c:
    // 0x21bc3c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_21bc40:
    // 0x21bc40: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x21bc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_21bc44:
    // 0x21bc44: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_21bc48:
    if (ctx->pc == 0x21BC48u) {
        ctx->pc = 0x21BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC44u;
        // 0x21bc48: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC4Cu;
        goto label_21bc4c;
    }
    ctx->pc = 0x21BC44u;
    {
        const bool branch_taken_0x21bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc44) {
            ctx->pc = 0x21BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC44u;
            // 0x21bc48: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCA0u;
            goto label_21bca0;
        }
    }
    ctx->pc = 0x21BC4Cu;
label_21bc4c:
    // 0x21bc4c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_21bc50:
    // 0x21bc50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21bc54:
    if (ctx->pc == 0x21BC54u) {
        ctx->pc = 0x21BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC50u;
        // 0x21bc54: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC58u;
        goto label_21bc58;
    }
    ctx->pc = 0x21BC50u;
    {
        const bool branch_taken_0x21bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc50) {
            ctx->pc = 0x21BC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC50u;
            // 0x21bc54: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC68u;
            goto label_21bc68;
        }
    }
    ctx->pc = 0x21BC58u;
label_21bc58:
    // 0x21bc58: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21bc5c:
    // 0x21bc5c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_21bc60:
    if (ctx->pc == 0x21BC60u) {
        ctx->pc = 0x21BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC5Cu;
        // 0x21bc60: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC64u;
        goto label_21bc64;
    }
    ctx->pc = 0x21BC5Cu;
    {
        const bool branch_taken_0x21bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc5c) {
            ctx->pc = 0x21BC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC5Cu;
            // 0x21bc60: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCA0u;
            goto label_21bca0;
        }
    }
    ctx->pc = 0x21BC64u;
label_21bc64:
    // 0x21bc64: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_21bc68:
    // 0x21bc68: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x21bc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_21bc6c:
    // 0x21bc6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21bc70:
    if (ctx->pc == 0x21BC70u) {
        ctx->pc = 0x21BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC6Cu;
        // 0x21bc70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC74u;
        goto label_21bc74;
    }
    ctx->pc = 0x21BC6Cu;
    {
        const bool branch_taken_0x21bc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC6Cu;
        // 0x21bc70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc6c) {
            ctx->pc = 0x21BC80u;
            goto label_21bc80;
        }
    }
    ctx->pc = 0x21BC74u;
label_21bc74:
    // 0x21bc74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x21bc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_21bc78:
    // 0x21bc78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21bc7c:
    if (ctx->pc == 0x21BC7Cu) {
        ctx->pc = 0x21BC80u;
        goto label_21bc80;
    }
    ctx->pc = 0x21BC78u;
    {
        const bool branch_taken_0x21bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc78) {
            ctx->pc = 0x21BC84u;
            goto label_21bc84;
        }
    }
    ctx->pc = 0x21BC80u;
label_21bc80:
    // 0x21bc80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bc84:
    // 0x21bc84: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_21bc88:
    if (ctx->pc == 0x21BC88u) {
        ctx->pc = 0x21BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC84u;
        // 0x21bc88: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC8Cu;
        goto label_21bc8c;
    }
    ctx->pc = 0x21BC84u;
    {
        const bool branch_taken_0x21bc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc84) {
            ctx->pc = 0x21BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC84u;
            // 0x21bc88: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BCACu;
            goto label_21bcac;
        }
    }
    ctx->pc = 0x21BC8Cu;
label_21bc8c:
    // 0x21bc8c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_21bc90:
    // 0x21bc90: 0xc0c48de  jal         func_312378
label_21bc94:
    if (ctx->pc == 0x21BC94u) {
        ctx->pc = 0x21BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC90u;
        // 0x21bc94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC98u;
        goto label_21bc98;
    }
    ctx->pc = 0x21BC90u;
    SET_GPR_U32(ctx, 31, 0x21BC98u);
    ctx->pc = 0x21BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC90u;
    // 0x21bc94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312378u, 0x21BC90u, 0x21BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC98u;
label_21bc98:
    // 0x21bc98: 0x10000004  b           . + 4 + (0x4 << 2)
label_21bc9c:
    if (ctx->pc == 0x21BC9Cu) {
        ctx->pc = 0x21BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC98u;
        // 0x21bc9c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCA0u;
        goto label_21bca0;
    }
    ctx->pc = 0x21BC98u;
    {
        const bool branch_taken_0x21bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC98u;
        // 0x21bc9c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc98) {
            ctx->pc = 0x21BCACu;
            goto label_21bcac;
        }
    }
    ctx->pc = 0x21BCA0u;
label_21bca0:
    // 0x21bca0: 0xc0c48da  jal         func_312368
label_21bca4:
    if (ctx->pc == 0x21BCA4u) {
        ctx->pc = 0x21BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCA0u;
        // 0x21bca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCA8u;
        goto label_21bca8;
    }
    ctx->pc = 0x21BCA0u;
    SET_GPR_U32(ctx, 31, 0x21BCA8u);
    ctx->pc = 0x21BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCA0u;
    // 0x21bca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x21BCA0u, 0x21BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCA8u;
label_21bca8:
    // 0x21bca8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x21bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_21bcac:
    // 0x21bcac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21bcb0:
    // 0x21bcb0: 0x40f809  jalr        $v0
label_21bcb4:
    if (ctx->pc == 0x21BCB4u) {
        ctx->pc = 0x21BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCB0u;
        // 0x21bcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCB8u;
        goto label_21bcb8;
    }
    ctx->pc = 0x21BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BCB8u);
        ctx->pc = 0x21BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCB0u;
        // 0x21bcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BCB0u, 0x21BCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BCB8u;
label_21bcb8:
    // 0x21bcb8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x21bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_21bcbc:
    // 0x21bcbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21bcc0:
    // 0x21bcc0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_21bcc4:
    // 0x21bcc4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21bcc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21bcc8:
    // 0x21bcc8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_21bccc:
    // 0x21bccc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x21bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_21bcd0:
    // 0x21bcd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21bcd4:
    if (ctx->pc == 0x21BCD4u) {
        ctx->pc = 0x21BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD0u;
        // 0x21bcd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCD8u;
        goto label_21bcd8;
    }
    ctx->pc = 0x21BCD0u;
    {
        const bool branch_taken_0x21bcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD0u;
        // 0x21bcd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcd0) {
            ctx->pc = 0x21BCDCu;
            goto label_21bcdc;
        }
    }
    ctx->pc = 0x21BCD8u;
label_21bcd8:
    // 0x21bcd8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21bcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bcdc:
    // 0x21bcdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21bce0:
    if (ctx->pc == 0x21BCE0u) {
        ctx->pc = 0x21BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCDCu;
        // 0x21bce0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCE4u;
        goto label_21bce4;
    }
    ctx->pc = 0x21BCDCu;
    {
        const bool branch_taken_0x21bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCDCu;
        // 0x21bce0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcdc) {
            ctx->pc = 0x21BCECu;
            goto label_21bcec;
        }
    }
    ctx->pc = 0x21BCE4u;
label_21bce4:
    // 0x21bce4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21bce8:
    // 0x21bce8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x21bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_21bcec:
    // 0x21bcec: 0x5600ffb4  bnel        $s0, $zero, . + 4 + (-0x4C << 2)
label_21bcf0:
    if (ctx->pc == 0x21BCF0u) {
        ctx->pc = 0x21BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCECu;
        // 0x21bcf0: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCF4u;
        goto label_21bcf4;
    }
    ctx->pc = 0x21BCECu;
    {
        const bool branch_taken_0x21bcec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bcec) {
            ctx->pc = 0x21BCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BCECu;
            // 0x21bcf0: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bbc0;
        }
    }
    ctx->pc = 0x21BCF4u;
label_21bcf4:
    // 0x21bcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bcf8:
    // 0x21bcf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21bcfc:
    // 0x21bcfc: 0xa06295d0  sb          $v0, -0x6A30($v1)
    ctx->pc = 0x21bcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940112), (uint8_t)GPR_U32(ctx, 2));
label_21bd00:
    // 0x21bd00: 0xc0cd8fc  jal         func_3363F0
label_21bd04:
    if (ctx->pc == 0x21BD04u) {
        ctx->pc = 0x21BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD00u;
        // 0x21bd04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD08u;
        goto label_21bd08;
    }
    ctx->pc = 0x21BD00u;
    SET_GPR_U32(ctx, 31, 0x21BD08u);
    ctx->pc = 0x21BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD00u;
    // 0x21bd04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363F0u, 0x21BD00u, 0x21BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD08u;
label_21bd08:
    // 0x21bd08: 0xc09a132  jal         func_2684C8
label_21bd0c:
    if (ctx->pc == 0x21BD0Cu) {
        ctx->pc = 0x21BD10u;
        goto label_21bd10;
    }
    ctx->pc = 0x21BD08u;
    SET_GPR_U32(ctx, 31, 0x21BD10u);
    ctx->pc = 0x2684C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684C8u, 0x21BD08u, 0x21BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD10u;
label_21bd10:
    // 0x21bd10: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21bd14:
    // 0x21bd14: 0x24823510  addiu       $v0, $a0, 0x3510
    ctx->pc = 0x21bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
label_21bd18:
    // 0x21bd18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21bd1c:
    // 0x21bd1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21bd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bd20:
    // 0x21bd20: 0x10000004  b           . + 4 + (0x4 << 2)
label_21bd24:
    if (ctx->pc == 0x21BD24u) {
        ctx->pc = 0x21BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD20u;
        // 0x21bd24: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD28u;
        goto label_21bd28;
    }
    ctx->pc = 0x21BD20u;
    {
        const bool branch_taken_0x21bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD20u;
        // 0x21bd24: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd20) {
            ctx->pc = 0x21BD34u;
            goto label_21bd34;
        }
    }
    ctx->pc = 0x21BD28u;
label_21bd28:
    // 0x21bd28: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x21bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_21bd2c:
    // 0x21bd2c: 0x40f809  jalr        $v0
label_21bd30:
    if (ctx->pc == 0x21BD30u) {
        ctx->pc = 0x21BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD2Cu;
        // 0x21bd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD34u;
        goto label_21bd34;
    }
    ctx->pc = 0x21BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BD34u);
        ctx->pc = 0x21BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD2Cu;
        // 0x21bd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD2Cu, 0x21BD34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BD34u;
label_21bd34:
    // 0x21bd34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21bd38:
    // 0x21bd38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21bd3c:
    if (ctx->pc == 0x21BD3Cu) {
        ctx->pc = 0x21BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD38u;
        // 0x21bd3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD40u;
        goto label_21bd40;
    }
    ctx->pc = 0x21BD38u;
    {
        const bool branch_taken_0x21bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD38u;
        // 0x21bd3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd38) {
            ctx->pc = 0x21BD44u;
            goto label_21bd44;
        }
    }
    ctx->pc = 0x21BD40u;
label_21bd40:
    // 0x21bd40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bd44:
    // 0x21bd44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21bd48:
    if (ctx->pc == 0x21BD48u) {
        ctx->pc = 0x21BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD44u;
        // 0x21bd48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD4Cu;
        goto label_21bd4c;
    }
    ctx->pc = 0x21BD44u;
    {
        const bool branch_taken_0x21bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD44u;
        // 0x21bd48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd44) {
            ctx->pc = 0x21BD54u;
            goto label_21bd54;
        }
    }
    ctx->pc = 0x21BD4Cu;
label_21bd4c:
    // 0x21bd4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21bd50:
    // 0x21bd50: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_21bd54:
    // 0x21bd54: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_21bd58:
    if (ctx->pc == 0x21BD58u) {
        ctx->pc = 0x21BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD54u;
        // 0x21bd58: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD5Cu;
        goto label_21bd5c;
    }
    ctx->pc = 0x21BD54u;
    {
        const bool branch_taken_0x21bd54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bd54) {
            ctx->pc = 0x21BD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BD54u;
            // 0x21bd58: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bd28;
        }
    }
    ctx->pc = 0x21BD5Cu;
label_21bd5c:
    // 0x21bd5c: 0xc09a156  jal         func_268558
label_21bd60:
    if (ctx->pc == 0x21BD60u) {
        ctx->pc = 0x21BD64u;
        goto label_21bd64;
    }
    ctx->pc = 0x21BD5Cu;
    SET_GPR_U32(ctx, 31, 0x21BD64u);
    ctx->pc = 0x268558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268558u, 0x21BD5Cu, 0x21BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD64u;
label_21bd64:
    // 0x21bd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21bd68:
    // 0x21bd68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bd68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21bd6c:
    // 0x21bd6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bd6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21bd70:
    // 0x21bd70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bd70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21bd74:
    // 0x21bd74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bd74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21bd78:
    // 0x21bd78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21bd78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_21bd7c:
    // 0x21bd7c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21bd7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21bd80:
    // 0x21bd80: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21bd80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_21bd84:
    // 0x21bd84: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21bd84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21bd88:
    // 0x21bd88: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_21bd8c:
    // 0x21bd8c: 0x3e00008  jr          $ra
label_21bd90:
    if (ctx->pc == 0x21BD90u) {
        ctx->pc = 0x21BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD8Cu;
        // 0x21bd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD94u;
        goto label_21bd94;
    }
    ctx->pc = 0x21BD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD8Cu;
        // 0x21bd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD94u;
label_21bd94:
    // 0x21bd94: 0x0  nop
    ctx->pc = 0x21bd94u;
    // NOP
label_21bd98:
    // 0x21bd98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21bd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_21bd9c:
    // 0x21bd9c: 0x0  nop
    ctx->pc = 0x21bd9cu;
    // NOP
    ctx->pc = 0x21bda0u;
}
