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

// Function: sub_0025B7E8
// Address: 0x25b7e8 - 0x25be78
void sub_0025B7E8_0x25b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B7E8_0x25b7e8");
#endif

    switch (ctx->pc) {
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        default: break;
    }

    ctx->pc = 0x25b7e8u;

label_25b7e8:
    // 0x25b7e8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x25b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_25b7ec:
    // 0x25b7ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25b7f0:
    // 0x25b7f0: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x25b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_25b7f4:
    // 0x25b7f4: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x25b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_25b7f8:
    // 0x25b7f8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x25b7f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25b7fc:
    // 0x25b7fc: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x25b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_25b800:
    // 0x25b800: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25b800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25b804:
    // 0x25b804: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x25b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_25b808:
    // 0x25b808: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x25b808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25b80c:
    // 0x25b80c: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x25b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_25b810:
    // 0x25b810: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x25b810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25b814:
    // 0x25b814: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x25b814u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_25b818:
    // 0x25b818: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x25b818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_25b81c:
    // 0x25b81c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x25b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_25b820:
    // 0x25b820: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x25b820u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_25b824:
    // 0x25b824: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x25b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_25b828:
    // 0x25b828: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x25b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_25b82c:
    // 0x25b82c: 0x7fbe01b0  sq          $fp, 0x1B0($sp)
    ctx->pc = 0x25b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 30));
label_25b830:
    // 0x25b830: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x25b830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_25b834:
    // 0x25b834: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x25b834u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_25b838:
    // 0x25b838: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x25b838u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_25b83c:
    // 0x25b83c: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x25b83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_25b840:
    // 0x25b840: 0xafab0120  sw          $t3, 0x120($sp)
    ctx->pc = 0x25b840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 11));
label_25b844:
    // 0x25b844: 0xc08a1f2  jal         func_2287C8
label_25b848:
    if (ctx->pc == 0x25B848u) {
        ctx->pc = 0x25B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B844u;
        // 0x25b848: 0x8fb101f0  lw          $s1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B84Cu;
        goto label_25b84c;
    }
    ctx->pc = 0x25B844u;
    SET_GPR_U32(ctx, 31, 0x25B84Cu);
    ctx->pc = 0x25B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B844u;
    // 0x25b848: 0x8fb101f0  lw          $s1, 0x1F0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x25B844u, 0x25B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B84Cu;
label_25b84c:
    // 0x25b84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b850:
    // 0x25b850: 0xc0f70ce  jal         func_3DC338
label_25b854:
    if (ctx->pc == 0x25B854u) {
        ctx->pc = 0x25B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B850u;
        // 0x25b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B858u;
        goto label_25b858;
    }
    ctx->pc = 0x25B850u;
    SET_GPR_U32(ctx, 31, 0x25B858u);
    ctx->pc = 0x25B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B850u;
    // 0x25b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x25B850u, 0x25B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B858u;
label_25b858:
    // 0x25b858: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_25b85c:
    if (ctx->pc == 0x25B85Cu) {
        ctx->pc = 0x25B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B858u;
        // 0x25b85c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B860u;
        goto label_25b860;
    }
    ctx->pc = 0x25B858u;
    {
        const bool branch_taken_0x25b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b858) {
            ctx->pc = 0x25B85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B858u;
            // 0x25b85c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B86Cu;
            goto label_25b86c;
        }
    }
    ctx->pc = 0x25B860u;
label_25b860:
    // 0x25b860: 0xc0c4900  jal         func_312400
label_25b864:
    if (ctx->pc == 0x25B864u) {
        ctx->pc = 0x25B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B860u;
        // 0x25b864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B868u;
        goto label_25b868;
    }
    ctx->pc = 0x25B860u;
    SET_GPR_U32(ctx, 31, 0x25B868u);
    ctx->pc = 0x25B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B860u;
    // 0x25b864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x25B860u, 0x25B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B868u;
label_25b868:
    // 0x25b868: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25b86c:
    // 0x25b86c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25b870:
    // 0x25b870: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25b874:
    if (ctx->pc == 0x25B874u) {
        ctx->pc = 0x25B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B870u;
        // 0x25b874: 0x26120080  addiu       $s2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B878u;
        goto label_25b878;
    }
    ctx->pc = 0x25B870u;
    {
        const bool branch_taken_0x25b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B870u;
        // 0x25b874: 0x26120080  addiu       $s2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b870) {
            ctx->pc = 0x25B8B4u;
            goto label_25b8b4;
        }
    }
    ctx->pc = 0x25B878u;
label_25b878:
    // 0x25b878: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x25b878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_25b87c:
    // 0x25b87c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25b880:
    // 0x25b880: 0x40f809  jalr        $v0
label_25b884:
    if (ctx->pc == 0x25B884u) {
        ctx->pc = 0x25B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B880u;
        // 0x25b884: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B888u;
        goto label_25b888;
    }
    ctx->pc = 0x25B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B888u);
        ctx->pc = 0x25B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B880u;
        // 0x25b884: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B880u, 0x25B888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B888u;
label_25b888:
    // 0x25b888: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b88c:
    // 0x25b88c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b890:
    // 0x25b890: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b894:
    // 0x25b894: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25b894u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25b898:
    // 0x25b898: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25b898u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25b89c:
    // 0x25b89c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x25b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_25b8a0:
    // 0x25b8a0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25b8a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_25b8a4:
    // 0x25b8a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25b8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_25b8a8:
    // 0x25b8a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x25b8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25b8ac:
    // 0x25b8ac: 0x1000000d  b           . + 4 + (0xD << 2)
label_25b8b0:
    if (ctx->pc == 0x25B8B0u) {
        ctx->pc = 0x25B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8ACu;
        // 0x25b8b0: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8B4u;
        goto label_25b8b4;
    }
    ctx->pc = 0x25B8ACu;
    {
        const bool branch_taken_0x25b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8ACu;
        // 0x25b8b0: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8ac) {
            ctx->pc = 0x25B8E4u;
            goto label_25b8e4;
        }
    }
    ctx->pc = 0x25B8B4u;
label_25b8b4:
    // 0x25b8b4: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_25b8b8:
    // 0x25b8b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25b8bc:
    // 0x25b8bc: 0x40f809  jalr        $v0
label_25b8c0:
    if (ctx->pc == 0x25B8C0u) {
        ctx->pc = 0x25B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8BCu;
        // 0x25b8c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8C4u;
        goto label_25b8c4;
    }
    ctx->pc = 0x25B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B8C4u);
        ctx->pc = 0x25B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8BCu;
        // 0x25b8c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B8BCu, 0x25B8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B8C4u;
label_25b8c4:
    // 0x25b8c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8c8:
    // 0x25b8c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25b8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25b8cc:
    // 0x25b8cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b8d0:
    // 0x25b8d0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x25b8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_25b8d4:
    // 0x25b8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8d8:
    // 0x25b8d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25b8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_25b8dc:
    // 0x25b8dc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b8e0:
    // 0x25b8e0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x25b8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_25b8e4:
    // 0x25b8e4: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_25b8e8:
    // 0x25b8e8: 0x2e760001  sltiu       $s6, $s3, 0x1
    ctx->pc = 0x25b8e8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_25b8ec:
    // 0x25b8ec: 0x24a23d80  addiu       $v0, $a1, 0x3D80
    ctx->pc = 0x25b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
label_25b8f0:
    // 0x25b8f0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x25b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b8f4:
    // 0x25b8f4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x25b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b8f8:
    // 0x25b8f8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25b8f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b8fc:
    // 0x25b8fc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b900:
    // 0x25b900: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b904:
    // 0x25b904: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25b904u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_25b908:
    // 0x25b908: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b90c:
    // 0x25b90c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x25b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b910:
    // 0x25b910: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x25b910u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b914:
    // 0x25b914: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25b914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_25b918:
    // 0x25b918: 0x24823d60  addiu       $v0, $a0, 0x3D60
    ctx->pc = 0x25b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
label_25b91c:
    // 0x25b91c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x25b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b920:
    // 0x25b920: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x25b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b924:
    // 0x25b924: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25b924u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b928:
    // 0x25b928: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b92c:
    // 0x25b92c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b930:
    // 0x25b930: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25b930u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_25b934:
    // 0x25b934: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b938:
    // 0x25b938: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x25b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b93c:
    // 0x25b93c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x25b93cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b940:
    // 0x25b940: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x25b940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_25b944:
    // 0x25b944: 0x24623d70  addiu       $v0, $v1, 0x3D70
    ctx->pc = 0x25b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15728));
label_25b948:
    // 0x25b948: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x25b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b94c:
    // 0x25b94c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x25b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b950:
    // 0x25b950: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25b950u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b954:
    // 0x25b954: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b958:
    // 0x25b958: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b95c:
    // 0x25b95c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25b95cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_25b960:
    // 0x25b960: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25b964:
    // 0x25b964: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x25b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25b968:
    // 0x25b968: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x25b968u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_25b96c:
    // 0x25b96c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x25b96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_25b970:
    // 0x25b970: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x25b970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_25b974:
    // 0x25b974: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25b974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25b978:
    // 0x25b978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25b978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25b97c:
    // 0x25b97c: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x25b97cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b980:
    // 0x25b980: 0x0  nop
    ctx->pc = 0x25b980u;
    // NOP
label_25b984:
    // 0x25b984: 0x0  nop
    ctx->pc = 0x25b984u;
    // NOP
label_25b988:
    // 0x25b988: 0x46000504  c1          0x504
    ctx->pc = 0x25b988u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_25b98c:
    // 0x25b98c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25b990:
    if (ctx->pc == 0x25B990u) {
        ctx->pc = 0x25B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B98Cu;
        // 0x25b990: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B994u;
        goto label_25b994;
    }
    ctx->pc = 0x25B98Cu;
    {
        const bool branch_taken_0x25b98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B98Cu;
        // 0x25b990: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b98c) {
            ctx->pc = 0x25B9A4u;
            goto label_25b9a4;
        }
    }
    ctx->pc = 0x25B994u;
label_25b994:
    // 0x25b994: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x25b994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b998:
    // 0x25b998: 0x0  nop
    ctx->pc = 0x25b998u;
    // NOP
label_25b99c:
    // 0x25b99c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_25b9a0:
    if (ctx->pc == 0x25B9A0u) {
        ctx->pc = 0x25B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B99Cu;
        // 0x25b9a0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9A4u;
        goto label_25b9a4;
    }
    ctx->pc = 0x25B99Cu;
    {
        const bool branch_taken_0x25b99c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B99Cu;
        // 0x25b9a0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b99c) {
            ctx->pc = 0x25B9B0u;
            goto label_25b9b0;
        }
    }
    ctx->pc = 0x25B9A4u;
label_25b9a4:
    // 0x25b9a4: 0xc0e404c  jal         func_390130
label_25b9a8:
    if (ctx->pc == 0x25B9A8u) {
        ctx->pc = 0x25B9ACu;
        goto label_25b9ac;
    }
    ctx->pc = 0x25B9A4u;
    SET_GPR_U32(ctx, 31, 0x25B9ACu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x25B9A4u, 0x25B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9ACu;
label_25b9ac:
    // 0x25b9ac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25b9acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25b9b0:
    // 0x25b9b0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x25b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_25b9b4:
    // 0x25b9b4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x25b9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_25b9b8:
    // 0x25b9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b9bc:
    // 0x25b9bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25b9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25b9c0:
    // 0x25b9c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25b9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25b9c4:
    // 0x25b9c4: 0x4602a832  c.eq.s      $f21, $f2
    ctx->pc = 0x25b9c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b9c8:
    // 0x25b9c8: 0x0  nop
    ctx->pc = 0x25b9c8u;
    // NOP
label_25b9cc:
    // 0x25b9cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25b9d0:
    if (ctx->pc == 0x25B9D0u) {
        ctx->pc = 0x25B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9CCu;
        // 0x25b9d0: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9D4u;
        goto label_25b9d4;
    }
    ctx->pc = 0x25B9CCu;
    {
        const bool branch_taken_0x25b9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9CCu;
        // 0x25b9d0: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9cc) {
            ctx->pc = 0x25B9E4u;
            goto label_25b9e4;
        }
    }
    ctx->pc = 0x25B9D4u;
label_25b9d4:
    // 0x25b9d4: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x25b9d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b9d8:
    // 0x25b9d8: 0x0  nop
    ctx->pc = 0x25b9d8u;
    // NOP
label_25b9dc:
    // 0x25b9dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_25b9e0:
    if (ctx->pc == 0x25B9E0u) {
        ctx->pc = 0x25B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9DCu;
        // 0x25b9e0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9E4u;
        goto label_25b9e4;
    }
    ctx->pc = 0x25B9DCu;
    {
        const bool branch_taken_0x25b9dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9DCu;
        // 0x25b9e0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9dc) {
            ctx->pc = 0x25B9F4u;
            goto label_25b9f4;
        }
    }
    ctx->pc = 0x25B9E4u;
label_25b9e4:
    // 0x25b9e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25b9e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25b9e8:
    // 0x25b9e8: 0xc0e404c  jal         func_390130
label_25b9ec:
    if (ctx->pc == 0x25B9ECu) {
        ctx->pc = 0x25B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9E8u;
        // 0x25b9ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9F0u;
        goto label_25b9f0;
    }
    ctx->pc = 0x25B9E8u;
    SET_GPR_U32(ctx, 31, 0x25B9F0u);
    ctx->pc = 0x25B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9E8u;
    // 0x25b9ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x25B9E8u, 0x25B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9F0u;
label_25b9f0:
    // 0x25b9f0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25b9f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25b9f4:
    // 0x25b9f4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x25b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_25b9f8:
    // 0x25b9f8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x25b9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_25b9fc:
    // 0x25b9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ba00:
    // 0x25ba00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25ba04:
    // 0x25ba04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ba04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25ba08:
    // 0x25ba08: 0xc096bde  jal         func_25AF78
label_25ba0c:
    if (ctx->pc == 0x25BA0Cu) {
        ctx->pc = 0x25BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA08u;
        // 0x25ba0c: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA10u;
        goto label_25ba10;
    }
    ctx->pc = 0x25BA08u;
    SET_GPR_U32(ctx, 31, 0x25BA10u);
    ctx->pc = 0x25BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA08u;
    // 0x25ba0c: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AF78u, 0x25BA08u, 0x25BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA10u;
label_25ba10:
    // 0x25ba10: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x25ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25ba14:
    // 0x25ba14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_25ba18:
    // 0x25ba18: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x25ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ba1c:
    // 0x25ba1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ba20:
    // 0x25ba20: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x25ba20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
label_25ba24:
    // 0x25ba24: 0xc4432bb4  lwc1        $f3, 0x2BB4($v0)
    ctx->pc = 0x25ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25ba28:
    // 0x25ba28: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x25ba28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_25ba2c:
    // 0x25ba2c: 0x46030140  add.s       $f5, $f0, $f3
    ctx->pc = 0x25ba2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_25ba30:
    // 0x25ba30: 0x4602a100  add.s       $f4, $f20, $f2
    ctx->pc = 0x25ba30u;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_25ba34:
    // 0x25ba34: 0x4601b080  add.s       $f2, $f22, $f1
    ctx->pc = 0x25ba34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_25ba38:
    // 0x25ba38: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_25ba3c:
    if (ctx->pc == 0x25BA3Cu) {
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA40u;
        goto label_25ba40;
    }
    ctx->pc = 0x25BA38u;
    {
        const bool branch_taken_0x25ba38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba38) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA40u;
label_25ba40:
    // 0x25ba40: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x25ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba44:
    // 0x25ba44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25ba44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba48:
    // 0x25ba48: 0x0  nop
    ctx->pc = 0x25ba48u;
    // NOP
label_25ba4c:
    // 0x25ba4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ba50:
    if (ctx->pc == 0x25BA50u) {
        ctx->pc = 0x25BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA4Cu;
        // 0x25ba50: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA54u;
        goto label_25ba54;
    }
    ctx->pc = 0x25BA4Cu;
    {
        const bool branch_taken_0x25ba4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA4Cu;
        // 0x25ba50: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba4c) {
            ctx->pc = 0x25BA5Cu;
            goto label_25ba5c;
        }
    }
    ctx->pc = 0x25BA54u;
label_25ba54:
    // 0x25ba54: 0x10000005  b           . + 4 + (0x5 << 2)
label_25ba58:
    if (ctx->pc == 0x25BA58u) {
        ctx->pc = 0x25BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA54u;
        // 0x25ba58: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA5Cu;
        goto label_25ba5c;
    }
    ctx->pc = 0x25BA54u;
    {
        const bool branch_taken_0x25ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA54u;
        // 0x25ba58: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba54) {
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA5Cu;
label_25ba5c:
    // 0x25ba5c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x25ba5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba60:
    // 0x25ba60: 0x0  nop
    ctx->pc = 0x25ba60u;
    // NOP
label_25ba64:
    // 0x25ba64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_25ba68:
    if (ctx->pc == 0x25BA68u) {
        ctx->pc = 0x25BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA64u;
        // 0x25ba68: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA6Cu;
        goto label_25ba6c;
    }
    ctx->pc = 0x25BA64u;
    {
        const bool branch_taken_0x25ba64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ba64) {
            ctx->pc = 0x25BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BA64u;
            // 0x25ba68: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA6Cu;
label_25ba6c:
    // 0x25ba6c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x25ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba70:
    // 0x25ba70: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x25ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ba74:
    // 0x25ba74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25ba74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25ba78:
    // 0x25ba78: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25ba78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba7c:
    // 0x25ba7c: 0x0  nop
    ctx->pc = 0x25ba7cu;
    // NOP
label_25ba80:
    // 0x25ba80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_25ba84:
    if (ctx->pc == 0x25BA84u) {
        ctx->pc = 0x25BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA80u;
        // 0x25ba84: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA88u;
        goto label_25ba88;
    }
    ctx->pc = 0x25BA80u;
    {
        const bool branch_taken_0x25ba80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA80u;
        // 0x25ba84: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba80) {
            ctx->pc = 0x25BA90u;
            goto label_25ba90;
        }
    }
    ctx->pc = 0x25BA88u;
label_25ba88:
    // 0x25ba88: 0x10000005  b           . + 4 + (0x5 << 2)
label_25ba8c:
    if (ctx->pc == 0x25BA8Cu) {
        ctx->pc = 0x25BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA88u;
        // 0x25ba8c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA90u;
        goto label_25ba90;
    }
    ctx->pc = 0x25BA88u;
    {
        const bool branch_taken_0x25ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA88u;
        // 0x25ba8c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba88) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA90u;
label_25ba90:
    // 0x25ba90: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x25ba90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ba94:
    // 0x25ba94: 0x0  nop
    ctx->pc = 0x25ba94u;
    // NOP
label_25ba98:
    // 0x25ba98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_25ba9c:
    if (ctx->pc == 0x25BA9Cu) {
        ctx->pc = 0x25BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA98u;
        // 0x25ba9c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA0u;
        goto label_25baa0;
    }
    ctx->pc = 0x25BA98u;
    {
        const bool branch_taken_0x25ba98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ba98) {
            ctx->pc = 0x25BA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BA98u;
            // 0x25ba9c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BAA0u;
label_25baa0:
    // 0x25baa0: 0x46141d41  sub.s       $f21, $f3, $f20
    ctx->pc = 0x25baa0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
label_25baa4:
    // 0x25baa4: 0x16c0000f  bnez        $s6, . + 4 + (0xF << 2)
label_25baa8:
    if (ctx->pc == 0x25BAA8u) {
        ctx->pc = 0x25BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA4u;
        // 0x25baa8: 0x46161501  sub.s       $f20, $f2, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAACu;
        goto label_25baac;
    }
    ctx->pc = 0x25BAA4u;
    {
        const bool branch_taken_0x25baa4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA4u;
        // 0x25baa8: 0x46161501  sub.s       $f20, $f2, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baa4) {
            ctx->pc = 0x25BAE4u;
            goto label_25bae4;
        }
    }
    ctx->pc = 0x25BAACu;
label_25baac:
    // 0x25baac: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x25baacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_25bab0:
    // 0x25bab0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x25bab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_25bab4:
    // 0x25bab4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25bab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25bab8:
    // 0x25bab8: 0x0  nop
    ctx->pc = 0x25bab8u;
    // NOP
label_25babc:
    // 0x25babc: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x25babcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_25bac0:
    // 0x25bac0: 0xc0e3f1c  jal         func_38FC70
label_25bac4:
    if (ctx->pc == 0x25BAC4u) {
        ctx->pc = 0x25BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC0u;
        // 0x25bac4: 0x460c2b00  add.s       $f12, $f5, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAC8u;
        goto label_25bac8;
    }
    ctx->pc = 0x25BAC0u;
    SET_GPR_U32(ctx, 31, 0x25BAC8u);
    ctx->pc = 0x25BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAC0u;
    // 0x25bac4: 0x460c2b00  add.s       $f12, $f5, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x25BAC0u, 0x25BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAC8u;
label_25bac8:
    // 0x25bac8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25bac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bacc:
    // 0x25bacc: 0x0  nop
    ctx->pc = 0x25baccu;
    // NOP
label_25bad0:
    // 0x25bad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25bad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25bad4:
    // 0x25bad4: 0x0  nop
    ctx->pc = 0x25bad4u;
    // NOP
label_25bad8:
    // 0x25bad8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_25badc:
    if (ctx->pc == 0x25BADCu) {
        ctx->pc = 0x25BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAD8u;
        // 0x25badc: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAE0u;
        goto label_25bae0;
    }
    ctx->pc = 0x25BAD8u;
    {
        const bool branch_taken_0x25bad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bad8) {
            ctx->pc = 0x25BADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAD8u;
            // 0x25badc: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BAE4u;
            goto label_25bae4;
        }
    }
    ctx->pc = 0x25BAE0u;
label_25bae0:
    // 0x25bae0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25bae0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25bae4:
    // 0x25bae4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x25bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bae8:
    // 0x25bae8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_25baec:
    // 0x25baec: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x25baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_25baf0:
    // 0x25baf0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x25baf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_25baf4:
    // 0x25baf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25baf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25baf8:
    // 0x25baf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25bafc:
    // 0x25bafc: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25bafcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25bb00:
    // 0x25bb00: 0x4602a8c2  mul.s       $f3, $f21, $f2
    ctx->pc = 0x25bb00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_25bb04:
    // 0x25bb04: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x25bb04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_25bb08:
    // 0x25bb08: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x25bb08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_25bb0c:
    // 0x25bb0c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x25bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb10:
    // 0x25bb10: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25bb10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_25bb14:
    // 0x25bb14: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x25bb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_25bb18:
    // 0x25bb18: 0xc4412bb0  lwc1        $f1, 0x2BB0($v0)
    ctx->pc = 0x25bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bb1c:
    // 0x25bb1c: 0xc6002bb4  lwc1        $f0, 0x2BB4($s0)
    ctx->pc = 0x25bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb20:
    // 0x25bb20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25bb20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_25bb24:
    // 0x25bb24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x25bb24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_25bb28:
    // 0x25bb28: 0xe4412bb0  swc1        $f1, 0x2BB0($v0)
    ctx->pc = 0x25bb28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11184), bits); }
label_25bb2c:
    // 0x25bb2c: 0xc0b1488  jal         func_2C5220
label_25bb30:
    if (ctx->pc == 0x25BB30u) {
        ctx->pc = 0x25BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB2Cu;
        // 0x25bb30: 0xe6002bb4  swc1        $f0, 0x2BB4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB34u;
        goto label_25bb34;
    }
    ctx->pc = 0x25BB2Cu;
    SET_GPR_U32(ctx, 31, 0x25BB34u);
    ctx->pc = 0x25BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB2Cu;
    // 0x25bb30: 0xe6002bb4  swc1        $f0, 0x2BB4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25BB2Cu, 0x25BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB34u;
label_25bb34:
    // 0x25bb34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25bb38:
    // 0x25bb38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25bb3c:
    // 0x25bb3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25bb40:
    if (ctx->pc == 0x25BB40u) {
        ctx->pc = 0x25BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB3Cu;
        // 0x25bb40: 0x86240008  lh          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB44u;
        goto label_25bb44;
    }
    ctx->pc = 0x25BB3Cu;
    {
        const bool branch_taken_0x25bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB3Cu;
        // 0x25bb40: 0x86240008  lh          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb3c) {
            ctx->pc = 0x25BB7Cu;
            goto label_25bb7c;
        }
    }
    ctx->pc = 0x25BB44u;
label_25bb44:
    // 0x25bb44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25bb48:
    // 0x25bb48: 0x40f809  jalr        $v0
label_25bb4c:
    if (ctx->pc == 0x25BB4Cu) {
        ctx->pc = 0x25BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB48u;
        // 0x25bb4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB50u;
        goto label_25bb50;
    }
    ctx->pc = 0x25BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BB50u);
        ctx->pc = 0x25BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB48u;
        // 0x25bb4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB48u, 0x25BB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BB50u;
label_25bb50:
    // 0x25bb50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb54:
    // 0x25bb54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bb58:
    // 0x25bb58: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bb5c:
    // 0x25bb5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25bb5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25bb60:
    // 0x25bb60: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25bb60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25bb64:
    // 0x25bb64: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x25bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_25bb68:
    // 0x25bb68: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25bb68u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_25bb6c:
    // 0x25bb6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bb70:
    // 0x25bb70: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25bb70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bb74:
    // 0x25bb74: 0x1000000c  b           . + 4 + (0xC << 2)
label_25bb78:
    if (ctx->pc == 0x25BB78u) {
        ctx->pc = 0x25BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB74u;
        // 0x25bb78: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB7Cu;
        goto label_25bb7c;
    }
    ctx->pc = 0x25BB74u;
    {
        const bool branch_taken_0x25bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB74u;
        // 0x25bb78: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb74) {
            ctx->pc = 0x25BBA8u;
            goto label_25bba8;
        }
    }
    ctx->pc = 0x25BB7Cu;
label_25bb7c:
    // 0x25bb7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25bb80:
    // 0x25bb80: 0x40f809  jalr        $v0
label_25bb84:
    if (ctx->pc == 0x25BB84u) {
        ctx->pc = 0x25BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB80u;
        // 0x25bb84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB88u;
        goto label_25bb88;
    }
    ctx->pc = 0x25BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BB88u);
        ctx->pc = 0x25BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB80u;
        // 0x25bb84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB80u, 0x25BB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BB88u;
label_25bb88:
    // 0x25bb88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb8c:
    // 0x25bb8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25bb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bb90:
    // 0x25bb90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bb94:
    // 0x25bb94: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25bb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_25bb98:
    // 0x25bb98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb9c:
    // 0x25bb9c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bba0:
    // 0x25bba0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bba4:
    // 0x25bba4: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x25bba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_25bba8:
    // 0x25bba8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x25bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_25bbac:
    // 0x25bbac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25bbacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25bbb0:
    // 0x25bbb0: 0xfbc13d60  sqc2        $vf1, 0x3D60($fp)
    ctx->pc = 0x25bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 15712), _mm_castps_si128(ctx->vu0_vf[1]));
label_25bbb4:
    // 0x25bbb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25bbb8:
    // 0x25bbb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25bbbc:
    // 0x25bbbc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25bbc0:
    if (ctx->pc == 0x25BBC0u) {
        ctx->pc = 0x25BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBBCu;
        // 0x25bbc0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBC4u;
        goto label_25bbc4;
    }
    ctx->pc = 0x25BBBCu;
    {
        const bool branch_taken_0x25bbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBBCu;
        // 0x25bbc0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbbc) {
            ctx->pc = 0x25BC00u;
            goto label_25bc00;
        }
    }
    ctx->pc = 0x25BBC4u;
label_25bbc4:
    // 0x25bbc4: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x25bbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_25bbc8:
    // 0x25bbc8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x25bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_25bbcc:
    // 0x25bbcc: 0x40f809  jalr        $v0
label_25bbd0:
    if (ctx->pc == 0x25BBD0u) {
        ctx->pc = 0x25BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBCCu;
        // 0x25bbd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBD4u;
        goto label_25bbd4;
    }
    ctx->pc = 0x25BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BBD4u);
        ctx->pc = 0x25BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBCCu;
        // 0x25bbd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBCCu, 0x25BBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BBD4u;
label_25bbd4:
    // 0x25bbd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bbd8:
    // 0x25bbd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bbdc:
    // 0x25bbdc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bbe0:
    // 0x25bbe0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25bbe0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25bbe4:
    // 0x25bbe4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25bbe4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25bbe8:
    // 0x25bbe8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x25bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_25bbec:
    // 0x25bbec: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25bbecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_25bbf0:
    // 0x25bbf0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bbf4:
    // 0x25bbf4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25bbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bbf8:
    // 0x25bbf8: 0x1000000d  b           . + 4 + (0xD << 2)
label_25bbfc:
    if (ctx->pc == 0x25BBFCu) {
        ctx->pc = 0x25BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF8u;
        // 0x25bbfc: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC00u;
        goto label_25bc00;
    }
    ctx->pc = 0x25BBF8u;
    {
        const bool branch_taken_0x25bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF8u;
        // 0x25bbfc: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbf8) {
            ctx->pc = 0x25BC30u;
            goto label_25bc30;
        }
    }
    ctx->pc = 0x25BC00u;
label_25bc00:
    // 0x25bc00: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x25bc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_25bc04:
    // 0x25bc04: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x25bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_25bc08:
    // 0x25bc08: 0x40f809  jalr        $v0
label_25bc0c:
    if (ctx->pc == 0x25BC0Cu) {
        ctx->pc = 0x25BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC08u;
        // 0x25bc0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC10u;
        goto label_25bc10;
    }
    ctx->pc = 0x25BC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BC10u);
        ctx->pc = 0x25BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC08u;
        // 0x25bc0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC08u, 0x25BC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BC10u;
label_25bc10:
    // 0x25bc10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc14:
    // 0x25bc14: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25bc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bc18:
    // 0x25bc18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc1c:
    // 0x25bc1c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25bc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_25bc20:
    // 0x25bc20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc24:
    // 0x25bc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bc28:
    // 0x25bc28: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc2c:
    // 0x25bc2c: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x25bc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_25bc30:
    // 0x25bc30: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_25bc34:
    // 0x25bc34: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25bc34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_25bc38:
    // 0x25bc38: 0xf8413d70  sqc2        $vf1, 0x3D70($v0)
    ctx->pc = 0x25bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 15728), _mm_castps_si128(ctx->vu0_vf[1]));
label_25bc3c:
    // 0x25bc3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25bc40:
    // 0x25bc40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25bc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_25bc44:
    // 0x25bc44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25bc48:
    if (ctx->pc == 0x25BC48u) {
        ctx->pc = 0x25BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC44u;
        // 0x25bc48: 0x86240018  lh          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC4Cu;
        goto label_25bc4c;
    }
    ctx->pc = 0x25BC44u;
    {
        const bool branch_taken_0x25bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC44u;
        // 0x25bc48: 0x86240018  lh          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc44) {
            ctx->pc = 0x25BC84u;
            goto label_25bc84;
        }
    }
    ctx->pc = 0x25BC4Cu;
label_25bc4c:
    // 0x25bc4c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x25bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_25bc50:
    // 0x25bc50: 0x40f809  jalr        $v0
label_25bc54:
    if (ctx->pc == 0x25BC54u) {
        ctx->pc = 0x25BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC50u;
        // 0x25bc54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC58u;
        goto label_25bc58;
    }
    ctx->pc = 0x25BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BC58u);
        ctx->pc = 0x25BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC50u;
        // 0x25bc54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC50u, 0x25BC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BC58u;
label_25bc58:
    // 0x25bc58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc5c:
    // 0x25bc5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc60:
    // 0x25bc60: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bc64:
    // 0x25bc64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25bc64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25bc68:
    // 0x25bc68: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25bc68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25bc6c:
    // 0x25bc6c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x25bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_25bc70:
    // 0x25bc70: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25bc70u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_25bc74:
    // 0x25bc74: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bc78:
    // 0x25bc78: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25bc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bc7c:
    // 0x25bc7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_25bc80:
    if (ctx->pc == 0x25BC80u) {
        ctx->pc = 0x25BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC7Cu;
        // 0x25bc80: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC84u;
        goto label_25bc84;
    }
    ctx->pc = 0x25BC7Cu;
    {
        const bool branch_taken_0x25bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC7Cu;
        // 0x25bc80: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc7c) {
            ctx->pc = 0x25BCB0u;
            goto label_25bcb0;
        }
    }
    ctx->pc = 0x25BC84u;
label_25bc84:
    // 0x25bc84: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x25bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_25bc88:
    // 0x25bc88: 0x40f809  jalr        $v0
label_25bc8c:
    if (ctx->pc == 0x25BC8Cu) {
        ctx->pc = 0x25BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC88u;
        // 0x25bc8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC90u;
        goto label_25bc90;
    }
    ctx->pc = 0x25BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BC90u);
        ctx->pc = 0x25BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC88u;
        // 0x25bc8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC88u, 0x25BC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BC90u;
label_25bc90:
    // 0x25bc90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc94:
    // 0x25bc94: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25bc98:
    // 0x25bc98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bc9c:
    // 0x25bc9c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25bc9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_25bca0:
    // 0x25bca0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bca4:
    // 0x25bca4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25bca8:
    // 0x25bca8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bcac:
    // 0x25bcac: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x25bcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_25bcb0:
    // 0x25bcb0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_25bcb4:
    // 0x25bcb4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25bcb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_25bcb8:
    // 0x25bcb8: 0xf8413d80  sqc2        $vf1, 0x3D80($v0)
    ctx->pc = 0x25bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 15744), _mm_castps_si128(ctx->vu0_vf[1]));
label_25bcbc:
    // 0x25bcbc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bcc0:
    // 0x25bcc0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_25bcc4:
    // 0x25bcc4: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x25bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_25bcc8:
    // 0x25bcc8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x25bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_25bccc:
    // 0x25bccc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25bcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_25bcd0:
    // 0x25bcd0: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x25bcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_25bcd4:
    // 0x25bcd4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x25bcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25bcd8:
    // 0x25bcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bcdc:
    // 0x25bcdc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x25bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bce0:
    // 0x25bce0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_25bce4:
    // 0x25bce4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x25bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bce8:
    // 0x25bce8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x25bce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_25bcec:
    // 0x25bcec: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x25bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bcf0:
    // 0x25bcf0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x25bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_25bcf4:
    // 0x25bcf4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x25bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bcf8:
    // 0x25bcf8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x25bcf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25bcfc:
    // 0x25bcfc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd00:
    // 0x25bd00: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25bd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_25bd04:
    // 0x25bd04: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd08:
    // 0x25bd08: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x25bd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_25bd0c:
    // 0x25bd0c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd10:
    // 0x25bd10: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x25bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_25bd14:
    // 0x25bd14: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x25bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd18:
    // 0x25bd18: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x25bd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25bd1c:
    // 0x25bd1c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd20:
    // 0x25bd20: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x25bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_25bd24:
    // 0x25bd24: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x25bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd28:
    // 0x25bd28: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x25bd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_25bd2c:
    // 0x25bd2c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x25bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd30:
    // 0x25bd30: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x25bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_25bd34:
    // 0x25bd34: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x25bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd38:
    // 0x25bd38: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x25bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_25bd3c:
    // 0x25bd3c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd40:
    // 0x25bd40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x25bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_25bd44:
    // 0x25bd44: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd48:
    // 0x25bd48: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x25bd48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_25bd4c:
    // 0x25bd4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd50:
    // 0x25bd50: 0xc0b1488  jal         func_2C5220
label_25bd54:
    if (ctx->pc == 0x25BD54u) {
        ctx->pc = 0x25BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD50u;
        // 0x25bd54: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD58u;
        goto label_25bd58;
    }
    ctx->pc = 0x25BD50u;
    SET_GPR_U32(ctx, 31, 0x25BD58u);
    ctx->pc = 0x25BD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD50u;
    // 0x25bd54: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25BD50u, 0x25BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD58u;
label_25bd58:
    // 0x25bd58: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x25bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25bd5c:
    // 0x25bd5c: 0xc0b1680  jal         func_2C5A00
label_25bd60:
    if (ctx->pc == 0x25BD60u) {
        ctx->pc = 0x25BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD5Cu;
        // 0x25bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD64u;
        goto label_25bd64;
    }
    ctx->pc = 0x25BD5Cu;
    SET_GPR_U32(ctx, 31, 0x25BD64u);
    ctx->pc = 0x25BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD5Cu;
    // 0x25bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x25BD5Cu, 0x25BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD64u;
label_25bd64:
    // 0x25bd64: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_25bd68:
    // 0x25bd68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25bd68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25bd6c:
    // 0x25bd6c: 0x24a53d50  addiu       $a1, $a1, 0x3D50
    ctx->pc = 0x25bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
label_25bd70:
    // 0x25bd70: 0xc0b15a0  jal         func_2C5680
label_25bd74:
    if (ctx->pc == 0x25BD74u) {
        ctx->pc = 0x25BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD70u;
        // 0x25bd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD78u;
        goto label_25bd78;
    }
    ctx->pc = 0x25BD70u;
    SET_GPR_U32(ctx, 31, 0x25BD78u);
    ctx->pc = 0x25BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD70u;
    // 0x25bd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5680u, 0x25BD70u, 0x25BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD78u;
label_25bd78:
    // 0x25bd78: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x25bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_25bd7c:
    // 0x25bd7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25bd7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25bd80:
    // 0x25bd80: 0x24a53d40  addiu       $a1, $a1, 0x3D40
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15680));
label_25bd84:
    // 0x25bd84: 0xc0b15a0  jal         func_2C5680
label_25bd88:
    if (ctx->pc == 0x25BD88u) {
        ctx->pc = 0x25BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD84u;
        // 0x25bd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD8Cu;
        goto label_25bd8c;
    }
    ctx->pc = 0x25BD84u;
    SET_GPR_U32(ctx, 31, 0x25BD8Cu);
    ctx->pc = 0x25BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD84u;
    // 0x25bd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5680u, 0x25BD84u, 0x25BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD8Cu;
label_25bd8c:
    // 0x25bd8c: 0xc0b1488  jal         func_2C5220
label_25bd90:
    if (ctx->pc == 0x25BD90u) {
        ctx->pc = 0x25BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD8Cu;
        // 0x25bd90: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BD94u;
        goto label_25bd94;
    }
    ctx->pc = 0x25BD8Cu;
    SET_GPR_U32(ctx, 31, 0x25BD94u);
    ctx->pc = 0x25BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD8Cu;
    // 0x25bd90: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25BD8Cu, 0x25BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD94u;
label_25bd94:
    // 0x25bd94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_25bd98:
    // 0x25bd98: 0xc0b184c  jal         func_2C6130
label_25bd9c:
    if (ctx->pc == 0x25BD9Cu) {
        ctx->pc = 0x25BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD98u;
        // 0x25bd9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDA0u;
        goto label_25bda0;
    }
    ctx->pc = 0x25BD98u;
    SET_GPR_U32(ctx, 31, 0x25BDA0u);
    ctx->pc = 0x25BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD98u;
    // 0x25bd9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6130u, 0x25BD98u, 0x25BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDA0u;
label_25bda0:
    // 0x25bda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25bda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bda4:
    // 0x25bda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25bda8:
    // 0x25bda8: 0xc0b163c  jal         func_2C58F0
label_25bdac:
    if (ctx->pc == 0x25BDACu) {
        ctx->pc = 0x25BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BDA8u;
        // 0x25bdac: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BDB0u;
        goto label_25bdb0;
    }
    ctx->pc = 0x25BDA8u;
    SET_GPR_U32(ctx, 31, 0x25BDB0u);
    ctx->pc = 0x25BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDA8u;
    // 0x25bdac: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x25BDA8u, 0x25BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDB0u;
label_25bdb0:
    // 0x25bdb0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x25bdb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_25bdb4:
    // 0x25bdb4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25bdb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bdb8:
    // 0x25bdb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25bdb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bdbc:
    // 0x25bdbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25bdbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bdc0:
    // 0x25bdc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25bdc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_25bdc4:
    // 0x25bdc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x25bdc4u;
    // VWAITQ (Q already resolved in this runtime)
label_25bdc8:
    // 0x25bdc8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25bdc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25bdcc:
    // 0x25bdcc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_25bdd0:
    // 0x25bdd0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x25bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25bdd4:
    // 0x25bdd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25bdd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25bdd8:
    // 0x25bdd8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25bdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bddc:
    // 0x25bddc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25bddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bde0:
    // 0x25bde0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25bde0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25bde4:
    // 0x25bde4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25bde4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_25bde8:
    // 0x25bde8: 0x4a0003bf  vwaitq
    ctx->pc = 0x25bde8u;
    // VWAITQ (Q already resolved in this runtime)
label_25bdec:
    // 0x25bdec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25bdecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25bdf0:
    // 0x25bdf0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x25bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_25bdf4:
    // 0x25bdf4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25bdf8:
    // 0x25bdf8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25bdf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25bdfc:
    // 0x25bdfc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25bdfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25be00:
    // 0x25be00: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25be00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25be04:
    // 0x25be04: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25be04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25be08:
    // 0x25be08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25be08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_25be0c:
    // 0x25be0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25be0cu;
    // VWAITQ (Q already resolved in this runtime)
label_25be10:
    // 0x25be10: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25be10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25be14:
    // 0x25be14: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x25be14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_25be18:
    // 0x25be18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_25be1c:
    // 0x25be1c: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x25be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_25be20:
    // 0x25be20: 0x8c449cf8  lw          $a0, -0x6308($v0)
    ctx->pc = 0x25be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941944)));
label_25be24:
    // 0x25be24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25be28:
    // 0x25be28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25be28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25be2c:
    // 0x25be2c: 0xc096b66  jal         func_25AD98
label_25be30:
    if (ctx->pc == 0x25BE30u) {
        ctx->pc = 0x25BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE2Cu;
        // 0x25be30: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE34u;
        goto label_25be34;
    }
    ctx->pc = 0x25BE2Cu;
    SET_GPR_U32(ctx, 31, 0x25BE34u);
    ctx->pc = 0x25BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE2Cu;
    // 0x25be30: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD98u, 0x25BE2Cu, 0x25BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE34u;
label_25be34:
    // 0x25be34: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x25be34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_25be38:
    // 0x25be38: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x25be38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_25be3c:
    // 0x25be3c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x25be3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_25be40:
    // 0x25be40: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x25be40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_25be44:
    // 0x25be44: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x25be44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_25be48:
    // 0x25be48: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x25be48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_25be4c:
    // 0x25be4c: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x25be4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_25be50:
    // 0x25be50: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x25be50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_25be54:
    // 0x25be54: 0x7bbe01b0  lq          $fp, 0x1B0($sp)
    ctx->pc = 0x25be54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_25be58:
    // 0x25be58: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x25be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_25be5c:
    // 0x25be5c: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x25be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_25be60:
    // 0x25be60: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x25be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25be64:
    // 0x25be64: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x25be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25be68:
    // 0x25be68: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x25be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25be6c:
    // 0x25be6c: 0x3e00008  jr          $ra
label_25be70:
    if (ctx->pc == 0x25BE70u) {
        ctx->pc = 0x25BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE6Cu;
        // 0x25be70: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BE74u;
        goto label_25be74;
    }
    ctx->pc = 0x25BE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE6Cu;
        // 0x25be70: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BE74u;
label_25be74:
    // 0x25be74: 0x0  nop
    ctx->pc = 0x25be74u;
    // NOP
    ctx->pc = 0x25be78u;
}
