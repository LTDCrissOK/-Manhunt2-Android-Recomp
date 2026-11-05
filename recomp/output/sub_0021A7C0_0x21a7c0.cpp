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

// Function: sub_0021A7C0
// Address: 0x21a7c0 - 0x21b198
void sub_0021A7C0_0x21a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A7C0_0x21a7c0");
#endif

    switch (ctx->pc) {
        case 0x21a7c0u: goto label_21a7c0;
        case 0x21a7c4u: goto label_21a7c4;
        case 0x21a7c8u: goto label_21a7c8;
        case 0x21a7ccu: goto label_21a7cc;
        case 0x21a7d0u: goto label_21a7d0;
        case 0x21a7d4u: goto label_21a7d4;
        case 0x21a7d8u: goto label_21a7d8;
        case 0x21a7dcu: goto label_21a7dc;
        case 0x21a7e0u: goto label_21a7e0;
        case 0x21a7e4u: goto label_21a7e4;
        case 0x21a7e8u: goto label_21a7e8;
        case 0x21a7ecu: goto label_21a7ec;
        case 0x21a7f0u: goto label_21a7f0;
        case 0x21a7f4u: goto label_21a7f4;
        case 0x21a7f8u: goto label_21a7f8;
        case 0x21a7fcu: goto label_21a7fc;
        case 0x21a800u: goto label_21a800;
        case 0x21a804u: goto label_21a804;
        case 0x21a808u: goto label_21a808;
        case 0x21a80cu: goto label_21a80c;
        case 0x21a810u: goto label_21a810;
        case 0x21a814u: goto label_21a814;
        case 0x21a818u: goto label_21a818;
        case 0x21a81cu: goto label_21a81c;
        case 0x21a820u: goto label_21a820;
        case 0x21a824u: goto label_21a824;
        case 0x21a828u: goto label_21a828;
        case 0x21a82cu: goto label_21a82c;
        case 0x21a830u: goto label_21a830;
        case 0x21a834u: goto label_21a834;
        case 0x21a838u: goto label_21a838;
        case 0x21a83cu: goto label_21a83c;
        case 0x21a840u: goto label_21a840;
        case 0x21a844u: goto label_21a844;
        case 0x21a848u: goto label_21a848;
        case 0x21a84cu: goto label_21a84c;
        case 0x21a850u: goto label_21a850;
        case 0x21a854u: goto label_21a854;
        case 0x21a858u: goto label_21a858;
        case 0x21a85cu: goto label_21a85c;
        case 0x21a860u: goto label_21a860;
        case 0x21a864u: goto label_21a864;
        case 0x21a868u: goto label_21a868;
        case 0x21a86cu: goto label_21a86c;
        case 0x21a870u: goto label_21a870;
        case 0x21a874u: goto label_21a874;
        case 0x21a878u: goto label_21a878;
        case 0x21a87cu: goto label_21a87c;
        case 0x21a880u: goto label_21a880;
        case 0x21a884u: goto label_21a884;
        case 0x21a888u: goto label_21a888;
        case 0x21a88cu: goto label_21a88c;
        case 0x21a890u: goto label_21a890;
        case 0x21a894u: goto label_21a894;
        case 0x21a898u: goto label_21a898;
        case 0x21a89cu: goto label_21a89c;
        case 0x21a8a0u: goto label_21a8a0;
        case 0x21a8a4u: goto label_21a8a4;
        case 0x21a8a8u: goto label_21a8a8;
        case 0x21a8acu: goto label_21a8ac;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8b4u: goto label_21a8b4;
        case 0x21a8b8u: goto label_21a8b8;
        case 0x21a8bcu: goto label_21a8bc;
        case 0x21a8c0u: goto label_21a8c0;
        case 0x21a8c4u: goto label_21a8c4;
        case 0x21a8c8u: goto label_21a8c8;
        case 0x21a8ccu: goto label_21a8cc;
        case 0x21a8d0u: goto label_21a8d0;
        case 0x21a8d4u: goto label_21a8d4;
        case 0x21a8d8u: goto label_21a8d8;
        case 0x21a8dcu: goto label_21a8dc;
        case 0x21a8e0u: goto label_21a8e0;
        case 0x21a8e4u: goto label_21a8e4;
        case 0x21a8e8u: goto label_21a8e8;
        case 0x21a8ecu: goto label_21a8ec;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a8f4u: goto label_21a8f4;
        case 0x21a8f8u: goto label_21a8f8;
        case 0x21a8fcu: goto label_21a8fc;
        case 0x21a900u: goto label_21a900;
        case 0x21a904u: goto label_21a904;
        case 0x21a908u: goto label_21a908;
        case 0x21a90cu: goto label_21a90c;
        case 0x21a910u: goto label_21a910;
        case 0x21a914u: goto label_21a914;
        case 0x21a918u: goto label_21a918;
        case 0x21a91cu: goto label_21a91c;
        case 0x21a920u: goto label_21a920;
        case 0x21a924u: goto label_21a924;
        case 0x21a928u: goto label_21a928;
        case 0x21a92cu: goto label_21a92c;
        case 0x21a930u: goto label_21a930;
        case 0x21a934u: goto label_21a934;
        case 0x21a938u: goto label_21a938;
        case 0x21a93cu: goto label_21a93c;
        case 0x21a940u: goto label_21a940;
        case 0x21a944u: goto label_21a944;
        case 0x21a948u: goto label_21a948;
        case 0x21a94cu: goto label_21a94c;
        case 0x21a950u: goto label_21a950;
        case 0x21a954u: goto label_21a954;
        case 0x21a958u: goto label_21a958;
        case 0x21a95cu: goto label_21a95c;
        case 0x21a960u: goto label_21a960;
        case 0x21a964u: goto label_21a964;
        case 0x21a968u: goto label_21a968;
        case 0x21a96cu: goto label_21a96c;
        case 0x21a970u: goto label_21a970;
        case 0x21a974u: goto label_21a974;
        case 0x21a978u: goto label_21a978;
        case 0x21a97cu: goto label_21a97c;
        case 0x21a980u: goto label_21a980;
        case 0x21a984u: goto label_21a984;
        case 0x21a988u: goto label_21a988;
        case 0x21a98cu: goto label_21a98c;
        case 0x21a990u: goto label_21a990;
        case 0x21a994u: goto label_21a994;
        case 0x21a998u: goto label_21a998;
        case 0x21a99cu: goto label_21a99c;
        case 0x21a9a0u: goto label_21a9a0;
        case 0x21a9a4u: goto label_21a9a4;
        case 0x21a9a8u: goto label_21a9a8;
        case 0x21a9acu: goto label_21a9ac;
        case 0x21a9b0u: goto label_21a9b0;
        case 0x21a9b4u: goto label_21a9b4;
        case 0x21a9b8u: goto label_21a9b8;
        case 0x21a9bcu: goto label_21a9bc;
        case 0x21a9c0u: goto label_21a9c0;
        case 0x21a9c4u: goto label_21a9c4;
        case 0x21a9c8u: goto label_21a9c8;
        case 0x21a9ccu: goto label_21a9cc;
        case 0x21a9d0u: goto label_21a9d0;
        case 0x21a9d4u: goto label_21a9d4;
        case 0x21a9d8u: goto label_21a9d8;
        case 0x21a9dcu: goto label_21a9dc;
        case 0x21a9e0u: goto label_21a9e0;
        case 0x21a9e4u: goto label_21a9e4;
        case 0x21a9e8u: goto label_21a9e8;
        case 0x21a9ecu: goto label_21a9ec;
        case 0x21a9f0u: goto label_21a9f0;
        case 0x21a9f4u: goto label_21a9f4;
        case 0x21a9f8u: goto label_21a9f8;
        case 0x21a9fcu: goto label_21a9fc;
        case 0x21aa00u: goto label_21aa00;
        case 0x21aa04u: goto label_21aa04;
        case 0x21aa08u: goto label_21aa08;
        case 0x21aa0cu: goto label_21aa0c;
        case 0x21aa10u: goto label_21aa10;
        case 0x21aa14u: goto label_21aa14;
        case 0x21aa18u: goto label_21aa18;
        case 0x21aa1cu: goto label_21aa1c;
        case 0x21aa20u: goto label_21aa20;
        case 0x21aa24u: goto label_21aa24;
        case 0x21aa28u: goto label_21aa28;
        case 0x21aa2cu: goto label_21aa2c;
        case 0x21aa30u: goto label_21aa30;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa38u: goto label_21aa38;
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aa40u: goto label_21aa40;
        case 0x21aa44u: goto label_21aa44;
        case 0x21aa48u: goto label_21aa48;
        case 0x21aa4cu: goto label_21aa4c;
        case 0x21aa50u: goto label_21aa50;
        case 0x21aa54u: goto label_21aa54;
        case 0x21aa58u: goto label_21aa58;
        case 0x21aa5cu: goto label_21aa5c;
        case 0x21aa60u: goto label_21aa60;
        case 0x21aa64u: goto label_21aa64;
        case 0x21aa68u: goto label_21aa68;
        case 0x21aa6cu: goto label_21aa6c;
        case 0x21aa70u: goto label_21aa70;
        case 0x21aa74u: goto label_21aa74;
        case 0x21aa78u: goto label_21aa78;
        case 0x21aa7cu: goto label_21aa7c;
        case 0x21aa80u: goto label_21aa80;
        case 0x21aa84u: goto label_21aa84;
        case 0x21aa88u: goto label_21aa88;
        case 0x21aa8cu: goto label_21aa8c;
        case 0x21aa90u: goto label_21aa90;
        case 0x21aa94u: goto label_21aa94;
        case 0x21aa98u: goto label_21aa98;
        case 0x21aa9cu: goto label_21aa9c;
        case 0x21aaa0u: goto label_21aaa0;
        case 0x21aaa4u: goto label_21aaa4;
        case 0x21aaa8u: goto label_21aaa8;
        case 0x21aaacu: goto label_21aaac;
        case 0x21aab0u: goto label_21aab0;
        case 0x21aab4u: goto label_21aab4;
        case 0x21aab8u: goto label_21aab8;
        case 0x21aabcu: goto label_21aabc;
        case 0x21aac0u: goto label_21aac0;
        case 0x21aac4u: goto label_21aac4;
        case 0x21aac8u: goto label_21aac8;
        case 0x21aaccu: goto label_21aacc;
        case 0x21aad0u: goto label_21aad0;
        case 0x21aad4u: goto label_21aad4;
        case 0x21aad8u: goto label_21aad8;
        case 0x21aadcu: goto label_21aadc;
        case 0x21aae0u: goto label_21aae0;
        case 0x21aae4u: goto label_21aae4;
        case 0x21aae8u: goto label_21aae8;
        case 0x21aaecu: goto label_21aaec;
        case 0x21aaf0u: goto label_21aaf0;
        case 0x21aaf4u: goto label_21aaf4;
        case 0x21aaf8u: goto label_21aaf8;
        case 0x21aafcu: goto label_21aafc;
        case 0x21ab00u: goto label_21ab00;
        case 0x21ab04u: goto label_21ab04;
        case 0x21ab08u: goto label_21ab08;
        case 0x21ab0cu: goto label_21ab0c;
        case 0x21ab10u: goto label_21ab10;
        case 0x21ab14u: goto label_21ab14;
        case 0x21ab18u: goto label_21ab18;
        case 0x21ab1cu: goto label_21ab1c;
        case 0x21ab20u: goto label_21ab20;
        case 0x21ab24u: goto label_21ab24;
        case 0x21ab28u: goto label_21ab28;
        case 0x21ab2cu: goto label_21ab2c;
        case 0x21ab30u: goto label_21ab30;
        case 0x21ab34u: goto label_21ab34;
        case 0x21ab38u: goto label_21ab38;
        case 0x21ab3cu: goto label_21ab3c;
        case 0x21ab40u: goto label_21ab40;
        case 0x21ab44u: goto label_21ab44;
        case 0x21ab48u: goto label_21ab48;
        case 0x21ab4cu: goto label_21ab4c;
        case 0x21ab50u: goto label_21ab50;
        case 0x21ab54u: goto label_21ab54;
        case 0x21ab58u: goto label_21ab58;
        case 0x21ab5cu: goto label_21ab5c;
        case 0x21ab60u: goto label_21ab60;
        case 0x21ab64u: goto label_21ab64;
        case 0x21ab68u: goto label_21ab68;
        case 0x21ab6cu: goto label_21ab6c;
        case 0x21ab70u: goto label_21ab70;
        case 0x21ab74u: goto label_21ab74;
        case 0x21ab78u: goto label_21ab78;
        case 0x21ab7cu: goto label_21ab7c;
        case 0x21ab80u: goto label_21ab80;
        case 0x21ab84u: goto label_21ab84;
        case 0x21ab88u: goto label_21ab88;
        case 0x21ab8cu: goto label_21ab8c;
        case 0x21ab90u: goto label_21ab90;
        case 0x21ab94u: goto label_21ab94;
        case 0x21ab98u: goto label_21ab98;
        case 0x21ab9cu: goto label_21ab9c;
        case 0x21aba0u: goto label_21aba0;
        case 0x21aba4u: goto label_21aba4;
        case 0x21aba8u: goto label_21aba8;
        case 0x21abacu: goto label_21abac;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abb4u: goto label_21abb4;
        case 0x21abb8u: goto label_21abb8;
        case 0x21abbcu: goto label_21abbc;
        case 0x21abc0u: goto label_21abc0;
        case 0x21abc4u: goto label_21abc4;
        case 0x21abc8u: goto label_21abc8;
        case 0x21abccu: goto label_21abcc;
        case 0x21abd0u: goto label_21abd0;
        case 0x21abd4u: goto label_21abd4;
        case 0x21abd8u: goto label_21abd8;
        case 0x21abdcu: goto label_21abdc;
        case 0x21abe0u: goto label_21abe0;
        case 0x21abe4u: goto label_21abe4;
        case 0x21abe8u: goto label_21abe8;
        case 0x21abecu: goto label_21abec;
        case 0x21abf0u: goto label_21abf0;
        case 0x21abf4u: goto label_21abf4;
        case 0x21abf8u: goto label_21abf8;
        case 0x21abfcu: goto label_21abfc;
        case 0x21ac00u: goto label_21ac00;
        case 0x21ac04u: goto label_21ac04;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac0cu: goto label_21ac0c;
        case 0x21ac10u: goto label_21ac10;
        case 0x21ac14u: goto label_21ac14;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac1cu: goto label_21ac1c;
        case 0x21ac20u: goto label_21ac20;
        case 0x21ac24u: goto label_21ac24;
        case 0x21ac28u: goto label_21ac28;
        case 0x21ac2cu: goto label_21ac2c;
        case 0x21ac30u: goto label_21ac30;
        case 0x21ac34u: goto label_21ac34;
        case 0x21ac38u: goto label_21ac38;
        case 0x21ac3cu: goto label_21ac3c;
        case 0x21ac40u: goto label_21ac40;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac48u: goto label_21ac48;
        case 0x21ac4cu: goto label_21ac4c;
        case 0x21ac50u: goto label_21ac50;
        case 0x21ac54u: goto label_21ac54;
        case 0x21ac58u: goto label_21ac58;
        case 0x21ac5cu: goto label_21ac5c;
        case 0x21ac60u: goto label_21ac60;
        case 0x21ac64u: goto label_21ac64;
        case 0x21ac68u: goto label_21ac68;
        case 0x21ac6cu: goto label_21ac6c;
        case 0x21ac70u: goto label_21ac70;
        case 0x21ac74u: goto label_21ac74;
        case 0x21ac78u: goto label_21ac78;
        case 0x21ac7cu: goto label_21ac7c;
        case 0x21ac80u: goto label_21ac80;
        case 0x21ac84u: goto label_21ac84;
        case 0x21ac88u: goto label_21ac88;
        case 0x21ac8cu: goto label_21ac8c;
        case 0x21ac90u: goto label_21ac90;
        case 0x21ac94u: goto label_21ac94;
        case 0x21ac98u: goto label_21ac98;
        case 0x21ac9cu: goto label_21ac9c;
        case 0x21aca0u: goto label_21aca0;
        case 0x21aca4u: goto label_21aca4;
        case 0x21aca8u: goto label_21aca8;
        case 0x21acacu: goto label_21acac;
        case 0x21acb0u: goto label_21acb0;
        case 0x21acb4u: goto label_21acb4;
        case 0x21acb8u: goto label_21acb8;
        case 0x21acbcu: goto label_21acbc;
        case 0x21acc0u: goto label_21acc0;
        case 0x21acc4u: goto label_21acc4;
        case 0x21acc8u: goto label_21acc8;
        case 0x21acccu: goto label_21accc;
        case 0x21acd0u: goto label_21acd0;
        case 0x21acd4u: goto label_21acd4;
        case 0x21acd8u: goto label_21acd8;
        case 0x21acdcu: goto label_21acdc;
        case 0x21ace0u: goto label_21ace0;
        case 0x21ace4u: goto label_21ace4;
        case 0x21ace8u: goto label_21ace8;
        case 0x21acecu: goto label_21acec;
        case 0x21acf0u: goto label_21acf0;
        case 0x21acf4u: goto label_21acf4;
        case 0x21acf8u: goto label_21acf8;
        case 0x21acfcu: goto label_21acfc;
        case 0x21ad00u: goto label_21ad00;
        case 0x21ad04u: goto label_21ad04;
        case 0x21ad08u: goto label_21ad08;
        case 0x21ad0cu: goto label_21ad0c;
        case 0x21ad10u: goto label_21ad10;
        case 0x21ad14u: goto label_21ad14;
        case 0x21ad18u: goto label_21ad18;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad20u: goto label_21ad20;
        case 0x21ad24u: goto label_21ad24;
        case 0x21ad28u: goto label_21ad28;
        case 0x21ad2cu: goto label_21ad2c;
        case 0x21ad30u: goto label_21ad30;
        case 0x21ad34u: goto label_21ad34;
        case 0x21ad38u: goto label_21ad38;
        case 0x21ad3cu: goto label_21ad3c;
        case 0x21ad40u: goto label_21ad40;
        case 0x21ad44u: goto label_21ad44;
        case 0x21ad48u: goto label_21ad48;
        case 0x21ad4cu: goto label_21ad4c;
        case 0x21ad50u: goto label_21ad50;
        case 0x21ad54u: goto label_21ad54;
        case 0x21ad58u: goto label_21ad58;
        case 0x21ad5cu: goto label_21ad5c;
        case 0x21ad60u: goto label_21ad60;
        case 0x21ad64u: goto label_21ad64;
        case 0x21ad68u: goto label_21ad68;
        case 0x21ad6cu: goto label_21ad6c;
        case 0x21ad70u: goto label_21ad70;
        case 0x21ad74u: goto label_21ad74;
        case 0x21ad78u: goto label_21ad78;
        case 0x21ad7cu: goto label_21ad7c;
        case 0x21ad80u: goto label_21ad80;
        case 0x21ad84u: goto label_21ad84;
        case 0x21ad88u: goto label_21ad88;
        case 0x21ad8cu: goto label_21ad8c;
        case 0x21ad90u: goto label_21ad90;
        case 0x21ad94u: goto label_21ad94;
        case 0x21ad98u: goto label_21ad98;
        case 0x21ad9cu: goto label_21ad9c;
        case 0x21ada0u: goto label_21ada0;
        case 0x21ada4u: goto label_21ada4;
        case 0x21ada8u: goto label_21ada8;
        case 0x21adacu: goto label_21adac;
        case 0x21adb0u: goto label_21adb0;
        case 0x21adb4u: goto label_21adb4;
        case 0x21adb8u: goto label_21adb8;
        case 0x21adbcu: goto label_21adbc;
        case 0x21adc0u: goto label_21adc0;
        case 0x21adc4u: goto label_21adc4;
        case 0x21adc8u: goto label_21adc8;
        case 0x21adccu: goto label_21adcc;
        case 0x21add0u: goto label_21add0;
        case 0x21add4u: goto label_21add4;
        case 0x21add8u: goto label_21add8;
        case 0x21addcu: goto label_21addc;
        case 0x21ade0u: goto label_21ade0;
        case 0x21ade4u: goto label_21ade4;
        case 0x21ade8u: goto label_21ade8;
        case 0x21adecu: goto label_21adec;
        case 0x21adf0u: goto label_21adf0;
        case 0x21adf4u: goto label_21adf4;
        case 0x21adf8u: goto label_21adf8;
        case 0x21adfcu: goto label_21adfc;
        case 0x21ae00u: goto label_21ae00;
        case 0x21ae04u: goto label_21ae04;
        case 0x21ae08u: goto label_21ae08;
        case 0x21ae0cu: goto label_21ae0c;
        case 0x21ae10u: goto label_21ae10;
        case 0x21ae14u: goto label_21ae14;
        case 0x21ae18u: goto label_21ae18;
        case 0x21ae1cu: goto label_21ae1c;
        case 0x21ae20u: goto label_21ae20;
        case 0x21ae24u: goto label_21ae24;
        case 0x21ae28u: goto label_21ae28;
        case 0x21ae2cu: goto label_21ae2c;
        case 0x21ae30u: goto label_21ae30;
        case 0x21ae34u: goto label_21ae34;
        case 0x21ae38u: goto label_21ae38;
        case 0x21ae3cu: goto label_21ae3c;
        case 0x21ae40u: goto label_21ae40;
        case 0x21ae44u: goto label_21ae44;
        case 0x21ae48u: goto label_21ae48;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae50u: goto label_21ae50;
        case 0x21ae54u: goto label_21ae54;
        case 0x21ae58u: goto label_21ae58;
        case 0x21ae5cu: goto label_21ae5c;
        case 0x21ae60u: goto label_21ae60;
        case 0x21ae64u: goto label_21ae64;
        case 0x21ae68u: goto label_21ae68;
        case 0x21ae6cu: goto label_21ae6c;
        case 0x21ae70u: goto label_21ae70;
        case 0x21ae74u: goto label_21ae74;
        case 0x21ae78u: goto label_21ae78;
        case 0x21ae7cu: goto label_21ae7c;
        case 0x21ae80u: goto label_21ae80;
        case 0x21ae84u: goto label_21ae84;
        case 0x21ae88u: goto label_21ae88;
        case 0x21ae8cu: goto label_21ae8c;
        case 0x21ae90u: goto label_21ae90;
        case 0x21ae94u: goto label_21ae94;
        case 0x21ae98u: goto label_21ae98;
        case 0x21ae9cu: goto label_21ae9c;
        case 0x21aea0u: goto label_21aea0;
        case 0x21aea4u: goto label_21aea4;
        case 0x21aea8u: goto label_21aea8;
        case 0x21aeacu: goto label_21aeac;
        case 0x21aeb0u: goto label_21aeb0;
        case 0x21aeb4u: goto label_21aeb4;
        case 0x21aeb8u: goto label_21aeb8;
        case 0x21aebcu: goto label_21aebc;
        case 0x21aec0u: goto label_21aec0;
        case 0x21aec4u: goto label_21aec4;
        case 0x21aec8u: goto label_21aec8;
        case 0x21aeccu: goto label_21aecc;
        case 0x21aed0u: goto label_21aed0;
        case 0x21aed4u: goto label_21aed4;
        case 0x21aed8u: goto label_21aed8;
        case 0x21aedcu: goto label_21aedc;
        case 0x21aee0u: goto label_21aee0;
        case 0x21aee4u: goto label_21aee4;
        case 0x21aee8u: goto label_21aee8;
        case 0x21aeecu: goto label_21aeec;
        case 0x21aef0u: goto label_21aef0;
        case 0x21aef4u: goto label_21aef4;
        case 0x21aef8u: goto label_21aef8;
        case 0x21aefcu: goto label_21aefc;
        case 0x21af00u: goto label_21af00;
        case 0x21af04u: goto label_21af04;
        case 0x21af08u: goto label_21af08;
        case 0x21af0cu: goto label_21af0c;
        case 0x21af10u: goto label_21af10;
        case 0x21af14u: goto label_21af14;
        case 0x21af18u: goto label_21af18;
        case 0x21af1cu: goto label_21af1c;
        case 0x21af20u: goto label_21af20;
        case 0x21af24u: goto label_21af24;
        case 0x21af28u: goto label_21af28;
        case 0x21af2cu: goto label_21af2c;
        case 0x21af30u: goto label_21af30;
        case 0x21af34u: goto label_21af34;
        case 0x21af38u: goto label_21af38;
        case 0x21af3cu: goto label_21af3c;
        case 0x21af40u: goto label_21af40;
        case 0x21af44u: goto label_21af44;
        case 0x21af48u: goto label_21af48;
        case 0x21af4cu: goto label_21af4c;
        case 0x21af50u: goto label_21af50;
        case 0x21af54u: goto label_21af54;
        case 0x21af58u: goto label_21af58;
        case 0x21af5cu: goto label_21af5c;
        case 0x21af60u: goto label_21af60;
        case 0x21af64u: goto label_21af64;
        case 0x21af68u: goto label_21af68;
        case 0x21af6cu: goto label_21af6c;
        case 0x21af70u: goto label_21af70;
        case 0x21af74u: goto label_21af74;
        case 0x21af78u: goto label_21af78;
        case 0x21af7cu: goto label_21af7c;
        case 0x21af80u: goto label_21af80;
        case 0x21af84u: goto label_21af84;
        case 0x21af88u: goto label_21af88;
        case 0x21af8cu: goto label_21af8c;
        case 0x21af90u: goto label_21af90;
        case 0x21af94u: goto label_21af94;
        case 0x21af98u: goto label_21af98;
        case 0x21af9cu: goto label_21af9c;
        case 0x21afa0u: goto label_21afa0;
        case 0x21afa4u: goto label_21afa4;
        case 0x21afa8u: goto label_21afa8;
        case 0x21afacu: goto label_21afac;
        case 0x21afb0u: goto label_21afb0;
        case 0x21afb4u: goto label_21afb4;
        case 0x21afb8u: goto label_21afb8;
        case 0x21afbcu: goto label_21afbc;
        case 0x21afc0u: goto label_21afc0;
        case 0x21afc4u: goto label_21afc4;
        case 0x21afc8u: goto label_21afc8;
        case 0x21afccu: goto label_21afcc;
        case 0x21afd0u: goto label_21afd0;
        case 0x21afd4u: goto label_21afd4;
        case 0x21afd8u: goto label_21afd8;
        case 0x21afdcu: goto label_21afdc;
        case 0x21afe0u: goto label_21afe0;
        case 0x21afe4u: goto label_21afe4;
        case 0x21afe8u: goto label_21afe8;
        case 0x21afecu: goto label_21afec;
        case 0x21aff0u: goto label_21aff0;
        case 0x21aff4u: goto label_21aff4;
        case 0x21aff8u: goto label_21aff8;
        case 0x21affcu: goto label_21affc;
        case 0x21b000u: goto label_21b000;
        case 0x21b004u: goto label_21b004;
        case 0x21b008u: goto label_21b008;
        case 0x21b00cu: goto label_21b00c;
        case 0x21b010u: goto label_21b010;
        case 0x21b014u: goto label_21b014;
        case 0x21b018u: goto label_21b018;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b020u: goto label_21b020;
        case 0x21b024u: goto label_21b024;
        case 0x21b028u: goto label_21b028;
        case 0x21b02cu: goto label_21b02c;
        case 0x21b030u: goto label_21b030;
        case 0x21b034u: goto label_21b034;
        case 0x21b038u: goto label_21b038;
        case 0x21b03cu: goto label_21b03c;
        case 0x21b040u: goto label_21b040;
        case 0x21b044u: goto label_21b044;
        case 0x21b048u: goto label_21b048;
        case 0x21b04cu: goto label_21b04c;
        case 0x21b050u: goto label_21b050;
        case 0x21b054u: goto label_21b054;
        case 0x21b058u: goto label_21b058;
        case 0x21b05cu: goto label_21b05c;
        case 0x21b060u: goto label_21b060;
        case 0x21b064u: goto label_21b064;
        case 0x21b068u: goto label_21b068;
        case 0x21b06cu: goto label_21b06c;
        case 0x21b070u: goto label_21b070;
        case 0x21b074u: goto label_21b074;
        case 0x21b078u: goto label_21b078;
        case 0x21b07cu: goto label_21b07c;
        case 0x21b080u: goto label_21b080;
        case 0x21b084u: goto label_21b084;
        case 0x21b088u: goto label_21b088;
        case 0x21b08cu: goto label_21b08c;
        case 0x21b090u: goto label_21b090;
        case 0x21b094u: goto label_21b094;
        case 0x21b098u: goto label_21b098;
        case 0x21b09cu: goto label_21b09c;
        case 0x21b0a0u: goto label_21b0a0;
        case 0x21b0a4u: goto label_21b0a4;
        case 0x21b0a8u: goto label_21b0a8;
        case 0x21b0acu: goto label_21b0ac;
        case 0x21b0b0u: goto label_21b0b0;
        case 0x21b0b4u: goto label_21b0b4;
        case 0x21b0b8u: goto label_21b0b8;
        case 0x21b0bcu: goto label_21b0bc;
        case 0x21b0c0u: goto label_21b0c0;
        case 0x21b0c4u: goto label_21b0c4;
        case 0x21b0c8u: goto label_21b0c8;
        case 0x21b0ccu: goto label_21b0cc;
        case 0x21b0d0u: goto label_21b0d0;
        case 0x21b0d4u: goto label_21b0d4;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b0dcu: goto label_21b0dc;
        case 0x21b0e0u: goto label_21b0e0;
        case 0x21b0e4u: goto label_21b0e4;
        case 0x21b0e8u: goto label_21b0e8;
        case 0x21b0ecu: goto label_21b0ec;
        case 0x21b0f0u: goto label_21b0f0;
        case 0x21b0f4u: goto label_21b0f4;
        case 0x21b0f8u: goto label_21b0f8;
        case 0x21b0fcu: goto label_21b0fc;
        case 0x21b100u: goto label_21b100;
        case 0x21b104u: goto label_21b104;
        case 0x21b108u: goto label_21b108;
        case 0x21b10cu: goto label_21b10c;
        case 0x21b110u: goto label_21b110;
        case 0x21b114u: goto label_21b114;
        case 0x21b118u: goto label_21b118;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b120u: goto label_21b120;
        case 0x21b124u: goto label_21b124;
        case 0x21b128u: goto label_21b128;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b130u: goto label_21b130;
        case 0x21b134u: goto label_21b134;
        case 0x21b138u: goto label_21b138;
        case 0x21b13cu: goto label_21b13c;
        case 0x21b140u: goto label_21b140;
        case 0x21b144u: goto label_21b144;
        case 0x21b148u: goto label_21b148;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b150u: goto label_21b150;
        case 0x21b154u: goto label_21b154;
        case 0x21b158u: goto label_21b158;
        case 0x21b15cu: goto label_21b15c;
        case 0x21b160u: goto label_21b160;
        case 0x21b164u: goto label_21b164;
        case 0x21b168u: goto label_21b168;
        case 0x21b16cu: goto label_21b16c;
        case 0x21b170u: goto label_21b170;
        case 0x21b174u: goto label_21b174;
        case 0x21b178u: goto label_21b178;
        case 0x21b17cu: goto label_21b17c;
        case 0x21b180u: goto label_21b180;
        case 0x21b184u: goto label_21b184;
        case 0x21b188u: goto label_21b188;
        case 0x21b18cu: goto label_21b18c;
        case 0x21b190u: goto label_21b190;
        case 0x21b194u: goto label_21b194;
        default: break;
    }

    ctx->pc = 0x21a7c0u;

label_21a7c0:
    // 0x21a7c0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x21a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_21a7c4:
    // 0x21a7c4: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x21a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
label_21a7c8:
    // 0x21a7c8: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x21a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
label_21a7cc:
    // 0x21a7cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21a7d0:
    // 0x21a7d0: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x21a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
label_21a7d4:
    // 0x21a7d4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x21a7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_21a7d8:
    // 0x21a7d8: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x21a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
label_21a7dc:
    // 0x21a7dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21a7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21a7e0:
    // 0x21a7e0: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x21a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
label_21a7e4:
    // 0x21a7e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x21a7e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21a7e8:
    // 0x21a7e8: 0xffb501a8  sd          $s5, 0x1A8($sp)
    ctx->pc = 0x21a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 21));
label_21a7ec:
    // 0x21a7ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21a7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21a7f0:
    // 0x21a7f0: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x21a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
label_21a7f4:
    // 0x21a7f4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x21a7f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21a7f8:
    // 0x21a7f8: 0xffb701b8  sd          $s7, 0x1B8($sp)
    ctx->pc = 0x21a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 23));
label_21a7fc:
    // 0x21a7fc: 0xffbe01c0  sd          $fp, 0x1C0($sp)
    ctx->pc = 0x21a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 30));
label_21a800:
    // 0x21a800: 0xffbf01c8  sd          $ra, 0x1C8($sp)
    ctx->pc = 0x21a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 31));
label_21a804:
    // 0x21a804: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21a804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_21a808:
    // 0x21a808: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a80c:
    // 0x21a80c: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
label_21a810:
    if (ctx->pc == 0x21A810u) {
        ctx->pc = 0x21A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A80Cu;
        // 0x21a810: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A814u;
        goto label_21a814;
    }
    ctx->pc = 0x21A80Cu;
    {
        const bool branch_taken_0x21a80c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A80Cu;
        // 0x21a810: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a80c) {
            ctx->pc = 0x21A81Cu;
            goto label_21a81c;
        }
    }
    ctx->pc = 0x21A814u;
label_21a814:
    // 0x21a814: 0x10000007  b           . + 4 + (0x7 << 2)
label_21a818:
    if (ctx->pc == 0x21A818u) {
        ctx->pc = 0x21A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A814u;
        // 0x21a818: 0xae6b0000  sw          $t3, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A81Cu;
        goto label_21a81c;
    }
    ctx->pc = 0x21A814u;
    {
        const bool branch_taken_0x21a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A814u;
        // 0x21a818: 0xae6b0000  sw          $t3, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a814) {
            ctx->pc = 0x21A834u;
            goto label_21a834;
        }
    }
    ctx->pc = 0x21A81Cu;
label_21a81c:
    // 0x21a81c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_21a820:
    // 0x21a820: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_21a824:
    // 0x21a824: 0x8c8395a8  lw          $v1, -0x6A58($a0)
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940072)));
label_21a828:
    // 0x21a828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a82c:
    // 0x21a82c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21a830:
    // 0x21a830: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x21a830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_21a834:
    // 0x21a834: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a838:
    // 0x21a838: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_21a83c:
    if (ctx->pc == 0x21A83Cu) {
        ctx->pc = 0x21A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A838u;
        // 0x21a83c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A840u;
        goto label_21a840;
    }
    ctx->pc = 0x21A838u;
    {
        const bool branch_taken_0x21a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a838) {
            ctx->pc = 0x21A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A838u;
            // 0x21a83c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A874u;
            goto label_21a874;
        }
    }
    ctx->pc = 0x21A840u;
label_21a840:
    // 0x21a840: 0xc0971f0  jal         func_25C7C0
label_21a844:
    if (ctx->pc == 0x21A844u) {
        ctx->pc = 0x21A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A840u;
        // 0x21a844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A848u;
        goto label_21a848;
    }
    ctx->pc = 0x21A840u;
    SET_GPR_U32(ctx, 31, 0x21A848u);
    ctx->pc = 0x21A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A840u;
    // 0x21a844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C7C0u, 0x21A840u, 0x21A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A848u;
label_21a848:
    // 0x21a848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21a84c:
    if (ctx->pc == 0x21A84Cu) {
        ctx->pc = 0x21A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A848u;
        // 0x21a84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A850u;
        goto label_21a850;
    }
    ctx->pc = 0x21A848u;
    {
        const bool branch_taken_0x21a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A848u;
        // 0x21a84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a848) {
            ctx->pc = 0x21A864u;
            goto label_21a864;
        }
    }
    ctx->pc = 0x21A850u;
label_21a850:
    // 0x21a850: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21a854:
    // 0x21a854: 0xc097202  jal         func_25C808
label_21a858:
    if (ctx->pc == 0x21A858u) {
        ctx->pc = 0x21A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A854u;
        // 0x21a858: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A85Cu;
        goto label_21a85c;
    }
    ctx->pc = 0x21A854u;
    SET_GPR_U32(ctx, 31, 0x21A85Cu);
    ctx->pc = 0x21A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A854u;
    // 0x21a858: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C808u, 0x21A854u, 0x21A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A85Cu;
label_21a85c:
    // 0x21a85c: 0x10000243  b           . + 4 + (0x243 << 2)
label_21a860:
    if (ctx->pc == 0x21A860u) {
        ctx->pc = 0x21A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A85Cu;
        // 0x21a860: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A864u;
        goto label_21a864;
    }
    ctx->pc = 0x21A85Cu;
    {
        const bool branch_taken_0x21a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A85Cu;
        // 0x21a860: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a85c) {
            ctx->pc = 0x21B16Cu;
            goto label_21b16c;
        }
    }
    ctx->pc = 0x21A864u;
label_21a864:
    // 0x21a864: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a868:
    // 0x21a868: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_21a86c:
    if (ctx->pc == 0x21A86Cu) {
        ctx->pc = 0x21A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A868u;
        // 0x21a86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A870u;
        goto label_21a870;
    }
    ctx->pc = 0x21A868u;
    {
        const bool branch_taken_0x21a868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A868u;
        // 0x21a86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a868) {
            ctx->pc = 0x21A8BCu;
            goto label_21a8bc;
        }
    }
    ctx->pc = 0x21A870u;
label_21a870:
    // 0x21a870: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a874:
    // 0x21a874: 0x8c6400bc  lw          $a0, 0xBC($v1)
    ctx->pc = 0x21a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_21a878:
    // 0x21a878: 0x3882020f  xori        $v0, $a0, 0x20F
    ctx->pc = 0x21a878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_21a87c:
    // 0x21a87c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_21a880:
    if (ctx->pc == 0x21A880u) {
        ctx->pc = 0x21A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A87Cu;
        // 0x21a880: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A884u;
        goto label_21a884;
    }
    ctx->pc = 0x21A87Cu;
    {
        const bool branch_taken_0x21a87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a87c) {
            ctx->pc = 0x21A880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A87Cu;
            // 0x21a880: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A8C4u;
            goto label_21a8c4;
        }
    }
    ctx->pc = 0x21A884u;
label_21a884:
    // 0x21a884: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x21a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a888:
    // 0x21a888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a88c:
    // 0x21a88c: 0x0  nop
    ctx->pc = 0x21a88cu;
    // NOP
label_21a890:
    // 0x21a890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21a890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a894:
    // 0x21a894: 0x0  nop
    ctx->pc = 0x21a894u;
    // NOP
label_21a898:
    // 0x21a898: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_21a89c:
    if (ctx->pc == 0x21A89Cu) {
        ctx->pc = 0x21A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A898u;
        // 0x21a89c: 0x3882001f  xori        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8A0u;
        goto label_21a8a0;
    }
    ctx->pc = 0x21A898u;
    {
        const bool branch_taken_0x21a898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A898u;
        // 0x21a89c: 0x3882001f  xori        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a898) {
            ctx->pc = 0x21A8C0u;
            goto label_21a8c0;
        }
    }
    ctx->pc = 0x21A8A0u;
label_21a8a0:
    // 0x21a8a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21a8a4:
    if (ctx->pc == 0x21A8A4u) {
        ctx->pc = 0x21A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8A0u;
        // 0x21a8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8A8u;
        goto label_21a8a8;
    }
    ctx->pc = 0x21A8A0u;
    {
        const bool branch_taken_0x21a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8A0u;
        // 0x21a8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8a0) {
            ctx->pc = 0x21A8BCu;
            goto label_21a8bc;
        }
    }
    ctx->pc = 0x21A8A8u;
label_21a8a8:
    // 0x21a8a8: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x21a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
label_21a8ac:
    // 0x21a8ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x21a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_21a8b0:
    // 0x21a8b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a8b4:
    // 0x21a8b4: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_21a8b8:
    if (ctx->pc == 0x21A8B8u) {
        ctx->pc = 0x21A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8B4u;
        // 0x21a8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8BCu;
        goto label_21a8bc;
    }
    ctx->pc = 0x21A8B4u;
    {
        const bool branch_taken_0x21a8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8B4u;
        // 0x21a8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8b4) {
            ctx->pc = 0x21A8C0u;
            goto label_21a8c0;
        }
    }
    ctx->pc = 0x21A8BCu;
label_21a8bc:
    // 0x21a8bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a8c0:
    // 0x21a8c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a8c4:
    // 0x21a8c4: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
label_21a8c8:
    if (ctx->pc == 0x21A8C8u) {
        ctx->pc = 0x21A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8C4u;
        // 0x21a8c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8CCu;
        goto label_21a8cc;
    }
    ctx->pc = 0x21A8C4u;
    {
        const bool branch_taken_0x21a8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a8c4) {
            ctx->pc = 0x21A8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A8C4u;
            // 0x21a8c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A940u;
            goto label_21a940;
        }
    }
    ctx->pc = 0x21A8CCu;
label_21a8cc:
    // 0x21a8cc: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_21a8d0:
    // 0x21a8d0: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x21a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_21a8d4:
    // 0x21a8d4: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x21a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_21a8d8:
    // 0x21a8d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_21a8dc:
    if (ctx->pc == 0x21A8DCu) {
        ctx->pc = 0x21A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8D8u;
        // 0x21a8dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8E0u;
        goto label_21a8e0;
    }
    ctx->pc = 0x21A8D8u;
    {
        const bool branch_taken_0x21a8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a8d8) {
            ctx->pc = 0x21A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A8D8u;
            // 0x21a8dc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A900u;
            goto label_21a900;
        }
    }
    ctx->pc = 0x21A8E0u;
label_21a8e0:
    // 0x21a8e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21a8e4:
    // 0x21a8e4: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x21a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_21a8e8:
    // 0x21a8e8: 0xc0ac91c  jal         func_2B2470
label_21a8ec:
    if (ctx->pc == 0x21A8ECu) {
        ctx->pc = 0x21A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E8u;
        // 0x21a8ec: 0x8c440224  lw          $a0, 0x224($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8F0u;
        goto label_21a8f0;
    }
    ctx->pc = 0x21A8E8u;
    SET_GPR_U32(ctx, 31, 0x21A8F0u);
    ctx->pc = 0x21A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A8E8u;
    // 0x21a8ec: 0x8c440224  lw          $a0, 0x224($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2470u, 0x21A8E8u, 0x21A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8F0u;
label_21a8f0:
    // 0x21a8f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21a8f4:
    if (ctx->pc == 0x21A8F4u) {
        ctx->pc = 0x21A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F0u;
        // 0x21a8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8F8u;
        goto label_21a8f8;
    }
    ctx->pc = 0x21A8F0u;
    {
        const bool branch_taken_0x21a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F0u;
        // 0x21a8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f0) {
            ctx->pc = 0x21A8FCu;
            goto label_21a8fc;
        }
    }
    ctx->pc = 0x21A8F8u;
label_21a8f8:
    // 0x21a8f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a8fc:
    // 0x21a8fc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a900:
    // 0x21a900: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_21a904:
    if (ctx->pc == 0x21A904u) {
        ctx->pc = 0x21A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A900u;
        // 0x21a904: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A908u;
        goto label_21a908;
    }
    ctx->pc = 0x21A900u;
    {
        const bool branch_taken_0x21a900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A900u;
        // 0x21a904: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a900) {
            ctx->pc = 0x21A93Cu;
            goto label_21a93c;
        }
    }
    ctx->pc = 0x21A908u;
label_21a908:
    // 0x21a908: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x21a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_21a90c:
    // 0x21a90c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x21a90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_21a910:
    // 0x21a910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a914:
    // 0x21a914: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_21a918:
    if (ctx->pc == 0x21A918u) {
        ctx->pc = 0x21A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A914u;
        // 0x21a918: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A91Cu;
        goto label_21a91c;
    }
    ctx->pc = 0x21A914u;
    {
        const bool branch_taken_0x21a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a914) {
            ctx->pc = 0x21A918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A914u;
            // 0x21a918: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A940u;
            goto label_21a940;
        }
    }
    ctx->pc = 0x21A91Cu;
label_21a91c:
    // 0x21a91c: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x21a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_21a920:
    // 0x21a920: 0x8c430208  lw          $v1, 0x208($v0)
    ctx->pc = 0x21a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
label_21a924:
    // 0x21a924: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_21a928:
    if (ctx->pc == 0x21A928u) {
        ctx->pc = 0x21A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A924u;
        // 0x21a928: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A92Cu;
        goto label_21a92c;
    }
    ctx->pc = 0x21A924u;
    {
        const bool branch_taken_0x21a924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a924) {
            ctx->pc = 0x21A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A924u;
            // 0x21a928: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A940u;
            goto label_21a940;
        }
    }
    ctx->pc = 0x21A92Cu;
label_21a92c:
    // 0x21a92c: 0x8c820240  lw          $v0, 0x240($a0)
    ctx->pc = 0x21a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 576)));
label_21a930:
    // 0x21a930: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21a934:
    if (ctx->pc == 0x21A934u) {
        ctx->pc = 0x21A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A930u;
        // 0x21a934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A938u;
        goto label_21a938;
    }
    ctx->pc = 0x21A930u;
    {
        const bool branch_taken_0x21a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A930u;
        // 0x21a934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a930) {
            ctx->pc = 0x21A93Cu;
            goto label_21a93c;
        }
    }
    ctx->pc = 0x21A938u;
label_21a938:
    // 0x21a938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a93c:
    // 0x21a93c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21a940:
    // 0x21a940: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_21a944:
    if (ctx->pc == 0x21A944u) {
        ctx->pc = 0x21A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A940u;
        // 0x21a944: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A948u;
        goto label_21a948;
    }
    ctx->pc = 0x21A940u;
    {
        const bool branch_taken_0x21a940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A940u;
        // 0x21a944: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a940) {
            ctx->pc = 0x21A9B8u;
            goto label_21a9b8;
        }
    }
    ctx->pc = 0x21A948u;
label_21a948:
    // 0x21a948: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a94c:
    // 0x21a94c: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x21a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_21a950:
    // 0x21a950: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x21a950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_21a954:
    // 0x21a954: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21a954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21a958:
    // 0x21a958: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x21a958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_21a95c:
    // 0x21a95c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a960:
    // 0x21a960: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21a964:
    // 0x21a964: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a968:
    // 0x21a968: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x21a968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_21a96c:
    // 0x21a96c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a970:
    // 0x21a970: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x21a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21a974:
    // 0x21a974: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a978:
    // 0x21a978: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x21a978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
label_21a97c:
    // 0x21a97c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a980:
    // 0x21a980: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21a984:
    // 0x21a984: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a988:
    // 0x21a988: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x21a988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_21a98c:
    // 0x21a98c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a990:
    // 0x21a990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21a994:
    // 0x21a994: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a998:
    // 0x21a998: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21a99c:
    // 0x21a99c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21a9a0:
    // 0x21a9a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_21a9a4:
    // 0x21a9a4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21a9a8:
    // 0x21a9a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21a9ac:
    // 0x21a9ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x21a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_21a9b0:
    // 0x21a9b0: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_21a9b4:
    if (ctx->pc == 0x21A9B4u) {
        ctx->pc = 0x21A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9B0u;
        // 0x21a9b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9B8u;
        goto label_21a9b8;
    }
    ctx->pc = 0x21A9B0u;
    {
        const bool branch_taken_0x21a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9B0u;
        // 0x21a9b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9b0) {
            ctx->pc = 0x21B168u;
            goto label_21b168;
        }
    }
    ctx->pc = 0x21A9B8u;
label_21a9b8:
    // 0x21a9b8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x21a9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21a9bc:
    // 0x21a9bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21a9c0:
    // 0x21a9c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x21a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_21a9c4:
    // 0x21a9c4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_21a9c8:
    // 0x21a9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a9cc:
    // 0x21a9cc: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_21a9d0:
    if (ctx->pc == 0x21A9D0u) {
        ctx->pc = 0x21A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9CCu;
        // 0x21a9d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9D4u;
        goto label_21a9d4;
    }
    ctx->pc = 0x21A9CCu;
    {
        const bool branch_taken_0x21a9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a9cc) {
            ctx->pc = 0x21A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A9CCu;
            // 0x21a9d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA14u;
            goto label_21aa14;
        }
    }
    ctx->pc = 0x21A9D4u;
label_21a9d4:
    // 0x21a9d4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_21a9d8:
    // 0x21a9d8: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x21a9d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_21a9dc:
    // 0x21a9dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_21a9e0:
    if (ctx->pc == 0x21A9E0u) {
        ctx->pc = 0x21A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9DCu;
        // 0x21a9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9E4u;
        goto label_21a9e4;
    }
    ctx->pc = 0x21A9DCu;
    {
        const bool branch_taken_0x21a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a9dc) {
            ctx->pc = 0x21A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A9DCu;
            // 0x21a9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A9E8u;
            goto label_21a9e8;
        }
    }
    ctx->pc = 0x21A9E4u;
label_21a9e4:
    // 0x21a9e4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x21a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_21a9e8:
    // 0x21a9e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21a9ec:
    // 0x21a9ec: 0xc0efb95  jal         func_3BEE54
label_21a9f0:
    if (ctx->pc == 0x21A9F0u) {
        ctx->pc = 0x21A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9ECu;
        // 0x21a9f0: 0x24a515a0  addiu       $a1, $a1, 0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9F4u;
        goto label_21a9f4;
    }
    ctx->pc = 0x21A9ECu;
    SET_GPR_U32(ctx, 31, 0x21A9F4u);
    ctx->pc = 0x21A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9ECu;
    // 0x21a9f0: 0x24a515a0  addiu       $a1, $a1, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21A9ECu, 0x21A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A9F4u;
label_21a9f4:
    // 0x21a9f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_21a9f8:
    if (ctx->pc == 0x21A9F8u) {
        ctx->pc = 0x21A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9F4u;
        // 0x21a9f8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9FCu;
        goto label_21a9fc;
    }
    ctx->pc = 0x21A9F4u;
    {
        const bool branch_taken_0x21a9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a9f4) {
            ctx->pc = 0x21A9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A9F4u;
            // 0x21a9f8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA14u;
            goto label_21aa14;
        }
    }
    ctx->pc = 0x21A9FCu;
label_21a9fc:
    // 0x21a9fc: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_21aa00:
    // 0x21aa00: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_21aa04:
    // 0x21aa04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21aa08:
    // 0x21aa08: 0xc0b1972  jal         func_2C65C8
label_21aa0c:
    if (ctx->pc == 0x21AA0Cu) {
        ctx->pc = 0x21AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA08u;
        // 0x21aa0c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA10u;
        goto label_21aa10;
    }
    ctx->pc = 0x21AA08u;
    SET_GPR_U32(ctx, 31, 0x21AA10u);
    ctx->pc = 0x21AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA08u;
    // 0x21aa0c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x21AA08u, 0x21AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA10u;
label_21aa10:
    // 0x21aa10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21aa14:
    // 0x21aa14: 0x14f080  sll         $fp, $s4, 2
    ctx->pc = 0x21aa14u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_21aa18:
    // 0x21aa18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21aa18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21aa1c:
    // 0x21aa1c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21aa20:
    // 0x21aa20: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x21aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_21aa24:
    // 0x21aa24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21aa28:
    // 0x21aa28: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21aa28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21aa2c:
    // 0x21aa2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_21aa30:
    if (ctx->pc == 0x21AA30u) {
        ctx->pc = 0x21AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA2Cu;
        // 0x21aa30: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA34u;
        goto label_21aa34;
    }
    ctx->pc = 0x21AA2Cu;
    {
        const bool branch_taken_0x21aa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA2Cu;
        // 0x21aa30: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa2c) {
            ctx->pc = 0x21AA74u;
            goto label_21aa74;
        }
    }
    ctx->pc = 0x21AA34u;
label_21aa34:
    // 0x21aa34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aa38:
    // 0x21aa38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21aa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21aa3c:
    // 0x21aa3c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21aa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21aa40:
    // 0x21aa40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aa44:
    // 0x21aa44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21aa48:
    // 0x21aa48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21aa4c:
    // 0x21aa4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21aa50:
    // 0x21aa50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21aa54:
    // 0x21aa54: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_21aa58:
    // 0x21aa58: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21aa5c:
    // 0x21aa5c: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x21aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_21aa60:
    // 0x21aa60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21aa64:
    // 0x21aa64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21aa68:
    // 0x21aa68: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21aa6c:
    // 0x21aa6c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_21aa70:
    if (ctx->pc == 0x21AA70u) {
        ctx->pc = 0x21AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA6Cu;
        // 0x21aa70: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA74u;
        goto label_21aa74;
    }
    ctx->pc = 0x21AA6Cu;
    {
        const bool branch_taken_0x21aa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa6c) {
            ctx->pc = 0x21AA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AA6Cu;
            // 0x21aa70: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa38;
        }
    }
    ctx->pc = 0x21AA74u;
label_21aa74:
    // 0x21aa74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aa78:
    // 0x21aa78: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21aa7c:
    // 0x21aa7c: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x21aa7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_21aa80:
    // 0x21aa80: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x21aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_21aa84:
    // 0x21aa84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aa88:
    // 0x21aa88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21aa8c:
    // 0x21aa8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21aa90:
    // 0x21aa90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21aa94:
    // 0x21aa94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21aa98:
    // 0x21aa98: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_21aa9c:
    if (ctx->pc == 0x21AA9Cu) {
        ctx->pc = 0x21AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA98u;
        // 0x21aa9c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAA0u;
        goto label_21aaa0;
    }
    ctx->pc = 0x21AA98u;
    {
        const bool branch_taken_0x21aa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA98u;
        // 0x21aa9c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa98) {
            ctx->pc = 0x21AADCu;
            goto label_21aadc;
        }
    }
    ctx->pc = 0x21AAA0u;
label_21aaa0:
    // 0x21aaa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21aaa4:
    // 0x21aaa4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21aaa8:
    // 0x21aaa8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x21aaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21aaac:
    // 0x21aaac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aab0:
    // 0x21aab0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x21aab0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_21aab4:
    // 0x21aab4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21aab4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21aab8:
    // 0x21aab8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21aabc:
    // 0x21aabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21aac0:
    // 0x21aac0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x21aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21aac4:
    // 0x21aac4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21aac8:
    // 0x21aac8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x21aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_21aacc:
    // 0x21aacc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21aad0:
    // 0x21aad0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21aad4:
    // 0x21aad4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21aad8:
    // 0x21aad8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21aadc:
    // 0x21aadc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21aae0:
    // 0x21aae0: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
label_21aae4:
    // 0x21aae4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21aae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21aae8:
    // 0x21aae8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_21aaec:
    if (ctx->pc == 0x21AAECu) {
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAF0u;
        goto label_21aaf0;
    }
    ctx->pc = 0x21AAE8u;
    {
        const bool branch_taken_0x21aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aae8) {
            ctx->pc = 0x21AB30u;
            goto label_21ab30;
        }
    }
    ctx->pc = 0x21AAF0u;
label_21aaf0:
    // 0x21aaf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21aaf4:
    // 0x21aaf4: 0x0  nop
    ctx->pc = 0x21aaf4u;
    // NOP
label_21aaf8:
    // 0x21aaf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21aafc:
    // 0x21aafc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21ab00:
    // 0x21ab00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ab04:
    // 0x21ab04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21ab08:
    // 0x21ab08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21ab0c:
    // 0x21ab0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ab10:
    // 0x21ab10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21ab14:
    // 0x21ab14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_21ab18:
    // 0x21ab18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21ab1c:
    // 0x21ab1c: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x21ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_21ab20:
    // 0x21ab20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21ab24:
    // 0x21ab24: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21ab24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21ab28:
    // 0x21ab28: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_21ab2c:
    if (ctx->pc == 0x21AB2Cu) {
        ctx->pc = 0x21AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB28u;
        // 0x21ab2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB30u;
        goto label_21ab30;
    }
    ctx->pc = 0x21AB28u;
    {
        const bool branch_taken_0x21ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ab28) {
            ctx->pc = 0x21AB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AB28u;
            // 0x21ab2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aaf8;
        }
    }
    ctx->pc = 0x21AB30u;
label_21ab30:
    // 0x21ab30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ab34:
    // 0x21ab34: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ab38:
    // 0x21ab38: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x21ab38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_21ab3c:
    // 0x21ab3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x21ab3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_21ab40:
    // 0x21ab40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ab44:
    // 0x21ab44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21ab48:
    // 0x21ab48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21ab4c:
    // 0x21ab4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ab50:
    // 0x21ab50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21ab54:
    // 0x21ab54: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_21ab58:
    if (ctx->pc == 0x21AB58u) {
        ctx->pc = 0x21AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB54u;
        // 0x21ab58: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB5Cu;
        goto label_21ab5c;
    }
    ctx->pc = 0x21AB54u;
    {
        const bool branch_taken_0x21ab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB54u;
        // 0x21ab58: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab54) {
            ctx->pc = 0x21AB98u;
            goto label_21ab98;
        }
    }
    ctx->pc = 0x21AB5Cu;
label_21ab5c:
    // 0x21ab5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ab60:
    // 0x21ab60: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21ab64:
    // 0x21ab64: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x21ab64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21ab68:
    // 0x21ab68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ab6c:
    // 0x21ab6c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x21ab6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_21ab70:
    // 0x21ab70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21ab70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21ab74:
    // 0x21ab74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21ab78:
    // 0x21ab78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21ab7c:
    // 0x21ab7c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x21ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21ab80:
    // 0x21ab80: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21ab84:
    // 0x21ab84: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x21ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_21ab88:
    // 0x21ab88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ab8c:
    // 0x21ab8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21ab90:
    // 0x21ab90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21ab94:
    // 0x21ab94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21ab98:
    // 0x21ab98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21ab9c:
    // 0x21ab9c: 0xc0b1488  jal         func_2C5220
label_21aba0:
    if (ctx->pc == 0x21ABA0u) {
        ctx->pc = 0x21ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB9Cu;
        // 0x21aba0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABA4u;
        goto label_21aba4;
    }
    ctx->pc = 0x21AB9Cu;
    SET_GPR_U32(ctx, 31, 0x21ABA4u);
    ctx->pc = 0x21ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB9Cu;
    // 0x21aba0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x21AB9Cu, 0x21ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ABA4u;
label_21aba4:
    // 0x21aba4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21aba8:
    // 0x21aba8: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x21aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_21abac:
    // 0x21abac: 0x3862001f  xori        $v0, $v1, 0x1F
    ctx->pc = 0x21abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
label_21abb0:
    // 0x21abb0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_21abb4:
    if (ctx->pc == 0x21ABB4u) {
        ctx->pc = 0x21ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABB0u;
        // 0x21abb4: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABB8u;
        goto label_21abb8;
    }
    ctx->pc = 0x21ABB0u;
    {
        const bool branch_taken_0x21abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abb0) {
            ctx->pc = 0x21ABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ABB0u;
            // 0x21abb4: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AC20u;
            goto label_21ac20;
        }
    }
    ctx->pc = 0x21ABB8u;
label_21abb8:
    // 0x21abb8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x21abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_21abbc:
    // 0x21abbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_21abc0:
    if (ctx->pc == 0x21ABC0u) {
        ctx->pc = 0x21ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABBCu;
        // 0x21abc0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABC4u;
        goto label_21abc4;
    }
    ctx->pc = 0x21ABBCu;
    {
        const bool branch_taken_0x21abbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABBCu;
        // 0x21abc0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abbc) {
            ctx->pc = 0x21AC1Cu;
            goto label_21ac1c;
        }
    }
    ctx->pc = 0x21ABC4u;
label_21abc4:
    // 0x21abc4: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x21abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
label_21abc8:
    // 0x21abc8: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x21abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21abcc:
    // 0x21abcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21abccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21abd0:
    // 0x21abd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21abd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21abd4:
    // 0x21abd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_21abd8:
    // 0x21abd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21abdc:
    // 0x21abdc: 0x0  nop
    ctx->pc = 0x21abdcu;
    // NOP
label_21abe0:
    // 0x21abe0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_21abe4:
    if (ctx->pc == 0x21ABE4u) {
        ctx->pc = 0x21ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABE0u;
        // 0x21abe4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABE8u;
        goto label_21abe8;
    }
    ctx->pc = 0x21ABE0u;
    {
        const bool branch_taken_0x21abe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABE0u;
        // 0x21abe4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abe0) {
            ctx->pc = 0x21ABF0u;
            goto label_21abf0;
        }
    }
    ctx->pc = 0x21ABE8u;
label_21abe8:
    // 0x21abe8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21abec:
    if (ctx->pc == 0x21ABECu) {
        ctx->pc = 0x21ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABE8u;
        // 0x21abec: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABF0u;
        goto label_21abf0;
    }
    ctx->pc = 0x21ABE8u;
    {
        const bool branch_taken_0x21abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abe8) {
            ctx->pc = 0x21ABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ABE8u;
            // 0x21abec: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ABF8u;
            goto label_21abf8;
        }
    }
    ctx->pc = 0x21ABF0u;
label_21abf0:
    // 0x21abf0: 0x100000de  b           . + 4 + (0xDE << 2)
label_21abf4:
    if (ctx->pc == 0x21ABF4u) {
        ctx->pc = 0x21ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABF0u;
        // 0x21abf4: 0x8c8510e0  lw          $a1, 0x10E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABF8u;
        goto label_21abf8;
    }
    ctx->pc = 0x21ABF0u;
    {
        const bool branch_taken_0x21abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABF0u;
        // 0x21abf4: 0x8c8510e0  lw          $a1, 0x10E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abf0) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21ABF8u;
label_21abf8:
    // 0x21abf8: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x21abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_21abfc:
    // 0x21abfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21ac00:
    // 0x21ac00: 0x108000da  beqz        $a0, . + 4 + (0xDA << 2)
label_21ac04:
    if (ctx->pc == 0x21AC04u) {
        ctx->pc = 0x21AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC00u;
        // 0x21ac04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC08u;
        goto label_21ac08;
    }
    ctx->pc = 0x21AC00u;
    {
        const bool branch_taken_0x21ac00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC00u;
        // 0x21ac04: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac00) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AC08u;
label_21ac08:
    // 0x21ac08: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x21ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_21ac0c:
    // 0x21ac0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21ac10:
    // 0x21ac10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21ac14:
    // 0x21ac14: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_21ac18:
    if (ctx->pc == 0x21AC18u) {
        ctx->pc = 0x21AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC14u;
        // 0x21ac18: 0x94570000  lhu         $s7, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC1Cu;
        goto label_21ac1c;
    }
    ctx->pc = 0x21AC14u;
    {
        const bool branch_taken_0x21ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC14u;
        // 0x21ac18: 0x94570000  lhu         $s7, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac14) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AC1Cu;
label_21ac1c:
    // 0x21ac1c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x21ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21ac20:
    // 0x21ac20: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_21ac24:
    // 0x21ac24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_21ac28:
    // 0x21ac28: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x21ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_21ac2c:
    // 0x21ac2c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_21ac30:
    if (ctx->pc == 0x21AC30u) {
        ctx->pc = 0x21AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC2Cu;
        // 0x21ac30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC34u;
        goto label_21ac34;
    }
    ctx->pc = 0x21AC2Cu;
    {
        const bool branch_taken_0x21ac2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC2Cu;
        // 0x21ac30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac2c) {
            ctx->pc = 0x21AC3Cu;
            goto label_21ac3c;
        }
    }
    ctx->pc = 0x21AC34u;
label_21ac34:
    // 0x21ac34: 0x100000cd  b           . + 4 + (0xCD << 2)
label_21ac38:
    if (ctx->pc == 0x21AC38u) {
        ctx->pc = 0x21AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC34u;
        // 0x21ac38: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC3Cu;
        goto label_21ac3c;
    }
    ctx->pc = 0x21AC34u;
    {
        const bool branch_taken_0x21ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC34u;
        // 0x21ac38: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac34) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AC3Cu;
label_21ac3c:
    // 0x21ac3c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_21ac40:
    // 0x21ac40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_21ac44:
    // 0x21ac44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_21ac48:
    if (ctx->pc == 0x21AC48u) {
        ctx->pc = 0x21AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC44u;
        // 0x21ac48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC4Cu;
        goto label_21ac4c;
    }
    ctx->pc = 0x21AC44u;
    {
        const bool branch_taken_0x21ac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC44u;
        // 0x21ac48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac44) {
            ctx->pc = 0x21AC54u;
            goto label_21ac54;
        }
    }
    ctx->pc = 0x21AC4Cu;
label_21ac4c:
    // 0x21ac4c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_21ac50:
    if (ctx->pc == 0x21AC50u) {
        ctx->pc = 0x21AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC4Cu;
        // 0x21ac50: 0x8c850280  lw          $a1, 0x280($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC54u;
        goto label_21ac54;
    }
    ctx->pc = 0x21AC4Cu;
    {
        const bool branch_taken_0x21ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC4Cu;
        // 0x21ac50: 0x8c850280  lw          $a1, 0x280($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac4c) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AC54u;
label_21ac54:
    // 0x21ac54: 0x8e0595b4  lw          $a1, -0x6A4C($s0)
    ctx->pc = 0x21ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940084)));
label_21ac58:
    // 0x21ac58: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
label_21ac5c:
    if (ctx->pc == 0x21AC5Cu) {
        ctx->pc = 0x21AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC58u;
        // 0x21ac5c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC60u;
        goto label_21ac60;
    }
    ctx->pc = 0x21AC58u;
    {
        const bool branch_taken_0x21ac58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC58u;
        // 0x21ac5c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac58) {
            ctx->pc = 0x21AF5Cu;
            goto label_21af5c;
        }
    }
    ctx->pc = 0x21AC60u;
label_21ac60:
    // 0x21ac60: 0x8ca30418  lw          $v1, 0x418($a1)
    ctx->pc = 0x21ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1048)));
label_21ac64:
    // 0x21ac64: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_21ac68:
    if (ctx->pc == 0x21AC68u) {
        ctx->pc = 0x21AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC64u;
        // 0x21ac68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC6Cu;
        goto label_21ac6c;
    }
    ctx->pc = 0x21AC64u;
    {
        const bool branch_taken_0x21ac64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC64u;
        // 0x21ac68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac64) {
            ctx->pc = 0x21AC70u;
            goto label_21ac70;
        }
    }
    ctx->pc = 0x21AC6Cu;
label_21ac6c:
    // 0x21ac6c: 0x8ca411e4  lw          $a0, 0x11E4($a1)
    ctx->pc = 0x21ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4580)));
label_21ac70:
    // 0x21ac70: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
label_21ac74:
    if (ctx->pc == 0x21AC74u) {
        ctx->pc = 0x21AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC70u;
        // 0x21ac74: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC78u;
        goto label_21ac78;
    }
    ctx->pc = 0x21AC70u;
    {
        const bool branch_taken_0x21ac70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC70u;
        // 0x21ac74: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac70) {
            ctx->pc = 0x21AF5Cu;
            goto label_21af5c;
        }
    }
    ctx->pc = 0x21AC78u;
label_21ac78:
    // 0x21ac78: 0x24c400f8  addiu       $a0, $a2, 0xF8
    ctx->pc = 0x21ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 248));
label_21ac7c:
    // 0x21ac7c: 0xc0d73cc  jal         func_35CF30
label_21ac80:
    if (ctx->pc == 0x21AC80u) {
        ctx->pc = 0x21AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC7Cu;
        // 0x21ac80: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC84u;
        goto label_21ac84;
    }
    ctx->pc = 0x21AC7Cu;
    SET_GPR_U32(ctx, 31, 0x21AC84u);
    ctx->pc = 0x21AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC7Cu;
    // 0x21ac80: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21AC7Cu, 0x21AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC84u;
label_21ac84:
    // 0x21ac84: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_21ac88:
    if (ctx->pc == 0x21AC88u) {
        ctx->pc = 0x21AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC84u;
        // 0x21ac88: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC8Cu;
        goto label_21ac8c;
    }
    ctx->pc = 0x21AC84u;
    {
        const bool branch_taken_0x21ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC84u;
        // 0x21ac88: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac84) {
            ctx->pc = 0x21AF5Cu;
            goto label_21af5c;
        }
    }
    ctx->pc = 0x21AC8Cu;
label_21ac8c:
    // 0x21ac8c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x21ac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_21ac90:
    // 0x21ac90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x21ac90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_21ac94:
    // 0x21ac94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ac94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ac98:
    // 0x21ac98: 0x24625b40  addiu       $v0, $v1, 0x5B40
    ctx->pc = 0x21ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
label_21ac9c:
    // 0x21ac9c: 0xc4675b40  lwc1        $f7, 0x5B40($v1)
    ctx->pc = 0x21ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_21aca0:
    // 0x21aca0: 0xc448000c  lwc1        $f8, 0xC($v0)
    ctx->pc = 0x21aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_21aca4:
    // 0x21aca4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x21aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21aca8:
    // 0x21aca8: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x21aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_21acac:
    // 0x21acac: 0x46003842  mul.s       $f1, $f7, $f0
    ctx->pc = 0x21acacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_21acb0:
    // 0x21acb0: 0x8e0495b4  lw          $a0, -0x6A4C($s0)
    ctx->pc = 0x21acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940084)));
label_21acb4:
    // 0x21acb4: 0x460040c2  mul.s       $f3, $f8, $f0
    ctx->pc = 0x21acb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_21acb8:
    // 0x21acb8: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x21acb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_21acbc:
    // 0x21acbc: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x21acbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_21acc0:
    // 0x21acc0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x21acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_21acc4:
    // 0x21acc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21acc8:
    // 0x21acc8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x21acc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_21accc:
    // 0x21accc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21acccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21acd0:
    // 0x21acd0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x21acd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_21acd4:
    // 0x21acd4: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x21acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_21acd8:
    // 0x21acd8: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x21acd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_21acdc:
    // 0x21acdc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x21acdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_21ace0:
    // 0x21ace0: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x21ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_21ace4:
    // 0x21ace4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x21ace4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_21ace8:
    // 0x21ace8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21ace8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21acec:
    // 0x21acec: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x21acecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21acf0:
    // 0x21acf0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21acf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21acf4:
    // 0x21acf4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x21acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_21acf8:
    // 0x21acf8: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x21acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21acfc:
    // 0x21acfc: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_21ad00:
    // 0x21ad00: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x21ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ad04:
    // 0x21ad04: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_21ad08:
    // 0x21ad08: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x21ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad0c:
    // 0x21ad0c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x21ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ad10:
    // 0x21ad10: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x21ad10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_21ad14:
    // 0x21ad14: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x21ad14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_21ad18:
    // 0x21ad18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x21ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_21ad1c:
    // 0x21ad1c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x21ad1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_21ad20:
    // 0x21ad20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_21ad24:
    // 0x21ad24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x21ad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_21ad28:
    // 0x21ad28: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x21ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ad2c:
    // 0x21ad2c: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x21ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ad30:
    // 0x21ad30: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x21ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ad34:
    // 0x21ad34: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x21ad34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_21ad38:
    // 0x21ad38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad3c:
    // 0x21ad3c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x21ad3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_21ad40:
    // 0x21ad40: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x21ad40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_21ad44:
    // 0x21ad44: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21ad44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_21ad48:
    // 0x21ad48: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x21ad48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_21ad4c:
    // 0x21ad4c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x21ad4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_21ad50:
    // 0x21ad50: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x21ad50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_21ad54:
    // 0x21ad54: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21ad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_21ad58:
    // 0x21ad58: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x21ad58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_21ad5c:
    // 0x21ad5c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x21ad5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_21ad60:
    // 0x21ad60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21ad60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ad64:
    // 0x21ad64: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x21ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_21ad68:
    // 0x21ad68: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x21ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad6c:
    // 0x21ad6c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x21ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ad70:
    // 0x21ad70: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x21ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ad74:
    // 0x21ad74: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x21ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ad78:
    // 0x21ad78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x21ad78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_21ad7c:
    // 0x21ad7c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x21ad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_21ad80:
    // 0x21ad80: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x21ad80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_21ad84:
    // 0x21ad84: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x21ad84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_21ad88:
    // 0x21ad88: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x21ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ad8c:
    // 0x21ad8c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x21ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ad90:
    // 0x21ad90: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x21ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ad94:
    // 0x21ad94: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x21ad94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_21ad98:
    // 0x21ad98: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad9c:
    // 0x21ad9c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x21ad9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_21ada0:
    // 0x21ada0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x21ada0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_21ada4:
    // 0x21ada4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21ada4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_21ada8:
    // 0x21ada8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x21ada8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_21adac:
    // 0x21adac: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x21adacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_21adb0:
    // 0x21adb0: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x21adb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_21adb4:
    // 0x21adb4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x21adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_21adb8:
    // 0x21adb8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x21adb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_21adbc:
    // 0x21adbc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x21adbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21adc0:
    // 0x21adc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21adc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21adc4:
    // 0x21adc4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x21adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_21adc8:
    // 0x21adc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21adc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_21adcc:
    // 0x21adcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21adccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21add0:
    // 0x21add0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21add4:
    // 0x21add4: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x21add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_21add8:
    // 0x21add8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x21add8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_21addc:
    // 0x21addc: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x21addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ade0:
    // 0x21ade0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x21ade0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_21ade4:
    // 0x21ade4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x21ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ade8:
    // 0x21ade8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x21ade8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_21adec:
    // 0x21adec: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x21adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21adf0:
    // 0x21adf0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x21adf0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_21adf4:
    // 0x21adf4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x21adf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_21adf8:
    // 0x21adf8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x21adf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_21adfc:
    // 0x21adfc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x21adfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_21ae00:
    // 0x21ae00: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x21ae00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_21ae04:
    // 0x21ae04: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x21ae04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_21ae08:
    // 0x21ae08: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x21ae08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_21ae0c:
    // 0x21ae0c: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x21ae0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_21ae10:
    // 0x21ae10: 0xe7a8006c  swc1        $f8, 0x6C($sp)
    ctx->pc = 0x21ae10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_21ae14:
    // 0x21ae14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21ae14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21ae18:
    // 0x21ae18: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x21ae18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_21ae1c:
    // 0x21ae1c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21ae1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ae20:
    // 0x21ae20: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x21ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_21ae24:
    // 0x21ae24: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x21ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ae28:
    // 0x21ae28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x21ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_21ae2c:
    // 0x21ae2c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ae30:
    // 0x21ae30: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x21ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ae34:
    // 0x21ae34: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x21ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ae38:
    // 0x21ae38: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x21ae38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_21ae3c:
    // 0x21ae3c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x21ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_21ae40:
    // 0x21ae40: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x21ae40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_21ae44:
    // 0x21ae44: 0xc0f6a96  jal         func_3DAA58
label_21ae48:
    if (ctx->pc == 0x21AE48u) {
        ctx->pc = 0x21AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE44u;
        // 0x21ae48: 0xe7a2005c  swc1        $f2, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE4Cu;
        goto label_21ae4c;
    }
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x21AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE44u;
    // 0x21ae48: 0xe7a2005c  swc1        $f2, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21AE44u, 0x21AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE4Cu;
label_21ae4c:
    // 0x21ae4c: 0xc0f6a96  jal         func_3DAA58
label_21ae50:
    if (ctx->pc == 0x21AE50u) {
        ctx->pc = 0x21AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE4Cu;
        // 0x21ae50: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE54u;
        goto label_21ae54;
    }
    ctx->pc = 0x21AE4Cu;
    SET_GPR_U32(ctx, 31, 0x21AE54u);
    ctx->pc = 0x21AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE4Cu;
    // 0x21ae50: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21AE4Cu, 0x21AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE54u;
label_21ae54:
    // 0x21ae54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x21ae54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21ae58:
    // 0x21ae58: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_21ae5c:
    // 0x21ae5c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x21ae5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21ae60:
    // 0x21ae60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x21ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_21ae64:
    // 0x21ae64: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x21ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_21ae68:
    // 0x21ae68: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21ae6c:
    // 0x21ae6c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x21ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_21ae70:
    // 0x21ae70: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21ae70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21ae74:
    // 0x21ae74: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x21ae74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21ae78:
    // 0x21ae78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21ae78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ae7c:
    // 0x21ae7c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x21ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_21ae80:
    // 0x21ae80: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x21ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ae84:
    // 0x21ae84: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x21ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21ae88:
    // 0x21ae88: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x21ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_21ae8c:
    // 0x21ae8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21ae8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_21ae90:
    // 0x21ae90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x21ae90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_21ae94:
    // 0x21ae94: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x21ae94u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_21ae98:
    // 0x21ae98: 0x0  nop
    ctx->pc = 0x21ae98u;
    // NOP
label_21ae9c:
    // 0x21ae9c: 0x0  nop
    ctx->pc = 0x21ae9cu;
    // NOP
label_21aea0:
    // 0x21aea0: 0x46010084  c1          0x10084
    ctx->pc = 0x21aea0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_21aea4:
    // 0x21aea4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x21aea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_21aea8:
    // 0x21aea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21aea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21aeac:
    // 0x21aeac: 0x0  nop
    ctx->pc = 0x21aeacu;
    // NOP
label_21aeb0:
    // 0x21aeb0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21aeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21aeb4:
    // 0x21aeb4: 0x0  nop
    ctx->pc = 0x21aeb4u;
    // NOP
label_21aeb8:
    // 0x21aeb8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_21aebc:
    if (ctx->pc == 0x21AEBCu) {
        ctx->pc = 0x21AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB8u;
        // 0x21aebc: 0xe7a20100  swc1        $f2, 0x100($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEC0u;
        goto label_21aec0;
    }
    ctx->pc = 0x21AEB8u;
    {
        const bool branch_taken_0x21aeb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB8u;
        // 0x21aebc: 0xe7a20100  swc1        $f2, 0x100($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeb8) {
            ctx->pc = 0x21AEE4u;
            goto label_21aee4;
        }
    }
    ctx->pc = 0x21AEC0u;
label_21aec0:
    // 0x21aec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21aec4:
    // 0x21aec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21aec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21aec8:
    // 0x21aec8: 0x0  nop
    ctx->pc = 0x21aec8u;
    // NOP
label_21aecc:
    // 0x21aecc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x21aeccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_21aed0:
    // 0x21aed0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21aed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_21aed4:
    // 0x21aed4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x21aed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_21aed8:
    // 0x21aed8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21aed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21aedc:
    // 0x21aedc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21aedcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21aee0:
    // 0x21aee0: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x21aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_21aee4:
    // 0x21aee4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_21aee8:
    // 0x21aee8: 0xc07a8b2  jal         func_1EA2C8
label_21aeec:
    if (ctx->pc == 0x21AEECu) {
        ctx->pc = 0x21AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEE8u;
        // 0x21aeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEF0u;
        goto label_21aef0;
    }
    ctx->pc = 0x21AEE8u;
    SET_GPR_U32(ctx, 31, 0x21AEF0u);
    ctx->pc = 0x21AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEE8u;
    // 0x21aeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x21AEE8u, 0x21AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AEF0u;
label_21aef0:
    // 0x21aef0: 0x3c014124  lui         $at, 0x4124
    ctx->pc = 0x21aef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16676 << 16));
label_21aef4:
    // 0x21aef4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21aef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21aef8:
    // 0x21aef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21aef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21aefc:
    // 0x21aefc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21af00:
    // 0x21af00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21af00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21af04:
    // 0x21af04: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x21af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_21af08:
    // 0x21af08: 0xc077824  jal         func_1DE090
label_21af0c:
    if (ctx->pc == 0x21AF0Cu) {
        ctx->pc = 0x21AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF08u;
        // 0x21af0c: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF10u;
        goto label_21af10;
    }
    ctx->pc = 0x21AF08u;
    SET_GPR_U32(ctx, 31, 0x21AF10u);
    ctx->pc = 0x21AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF08u;
    // 0x21af0c: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x21AF08u, 0x21AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF10u;
label_21af10:
    // 0x21af10: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21af14:
    // 0x21af14: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x21af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_21af18:
    // 0x21af18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21af1c:
    // 0x21af1c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_21af20:
    // 0x21af20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x21af20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21af24:
    // 0x21af24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_21af28:
    // 0x21af28: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x21af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_21af2c:
    // 0x21af2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21af2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21af30:
    // 0x21af30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x21af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_21af34:
    // 0x21af34: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x21af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_21af38:
    // 0x21af38: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x21af38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21af3c:
    // 0x21af3c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x21af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_21af40:
    // 0x21af40: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_21af44:
    // 0x21af44: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x21af44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21af48:
    // 0x21af48: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x21af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_21af4c:
    // 0x21af4c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x21af4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21af50:
    // 0x21af50: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x21af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_21af54:
    // 0x21af54: 0x10000005  b           . + 4 + (0x5 << 2)
label_21af58:
    if (ctx->pc == 0x21AF58u) {
        ctx->pc = 0x21AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF54u;
        // 0x21af58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF5Cu;
        goto label_21af5c;
    }
    ctx->pc = 0x21AF54u;
    {
        const bool branch_taken_0x21af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF54u;
        // 0x21af58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af54) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AF5Cu;
label_21af5c:
    // 0x21af5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21af60:
    // 0x21af60: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_21af64:
    // 0x21af64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21af68:
    // 0x21af68: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_21af6c:
    // 0x21af6c: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x21af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21af70:
    // 0x21af70: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x21af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_21af74:
    // 0x21af74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21af78:
    // 0x21af78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21af7c:
    // 0x21af7c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x21af7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_21af80:
    // 0x21af80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21af80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21af84:
    // 0x21af84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21af88:
    // 0x21af88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21af88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_21af8c:
    // 0x21af8c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x21af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21af90:
    // 0x21af90: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x21af90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_21af94:
    // 0x21af94: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21af98:
    // 0x21af98: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x21af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_21af9c:
    // 0x21af9c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x21af9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_21afa0:
    // 0x21afa0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x21afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21afa4:
    // 0x21afa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21afa8:
    // 0x21afa8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21afa8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_21afac:
    // 0x21afac: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21afb0:
    // 0x21afb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21afb4:
    // 0x21afb4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21afb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_21afb8:
    // 0x21afb8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21afbc:
    // 0x21afbc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x21afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21afc0:
    // 0x21afc0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x21afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_21afc4:
    // 0x21afc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21afc8:
    // 0x21afc8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x21afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_21afcc:
    // 0x21afcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21afd0:
    // 0x21afd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21afd4:
    // 0x21afd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21afd8:
    // 0x21afd8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21afdc:
    // 0x21afdc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x21afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_21afe0:
    // 0x21afe0: 0xc0b189c  jal         func_2C6270
label_21afe4:
    if (ctx->pc == 0x21AFE4u) {
        ctx->pc = 0x21AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE0u;
        // 0x21afe4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AFE8u;
        goto label_21afe8;
    }
    ctx->pc = 0x21AFE0u;
    SET_GPR_U32(ctx, 31, 0x21AFE8u);
    ctx->pc = 0x21AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AFE0u;
    // 0x21afe4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x21AFE0u, 0x21AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AFE8u;
label_21afe8:
    // 0x21afe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21afec:
    // 0x21afec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21afecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_21aff0:
    // 0x21aff0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x21aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21aff4:
    // 0x21aff4: 0x24a517e0  addiu       $a1, $a1, 0x17E0
    ctx->pc = 0x21aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
label_21aff8:
    // 0x21aff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21affc:
    // 0x21affc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_21b000:
    // 0x21b000: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b004:
    // 0x21b004: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x21b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b008:
    // 0x21b008: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21b00c:
    // 0x21b00c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b010:
    // 0x21b010: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_21b014:
    // 0x21b014: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x21b014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b018:
    // 0x21b018: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x21b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b01c:
    // 0x21b01c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_21b020:
    // 0x21b020: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b024:
    // 0x21b024: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x21b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_21b028:
    // 0x21b028: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b02c:
    // 0x21b02c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x21b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b030:
    // 0x21b030: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x21b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21b034:
    // 0x21b034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b038:
    // 0x21b038: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_21b03c:
    // 0x21b03c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b040:
    // 0x21b040: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21b044:
    // 0x21b044: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b048:
    // 0x21b048: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b04c:
    // 0x21b04c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21b050:
    // 0x21b050: 0xc0d7424  jal         func_35D090
label_21b054:
    if (ctx->pc == 0x21B054u) {
        ctx->pc = 0x21B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B050u;
        // 0x21b054: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B058u;
        goto label_21b058;
    }
    ctx->pc = 0x21B050u;
    SET_GPR_U32(ctx, 31, 0x21B058u);
    ctx->pc = 0x21B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B050u;
    // 0x21b054: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21B050u, 0x21B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B058u;
label_21b058:
    // 0x21b058: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21b05c:
    // 0x21b05c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21b060:
    // 0x21b060: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_21b064:
    if (ctx->pc == 0x21B064u) {
        ctx->pc = 0x21B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B060u;
        // 0x21b064: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B068u;
        goto label_21b068;
    }
    ctx->pc = 0x21B060u;
    {
        const bool branch_taken_0x21b060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b060) {
            ctx->pc = 0x21B064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B060u;
            // 0x21b064: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B0A8u;
            goto label_21b0a8;
        }
    }
    ctx->pc = 0x21B068u;
label_21b068:
    // 0x21b068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b06c:
    // 0x21b06c: 0x0  nop
    ctx->pc = 0x21b06cu;
    // NOP
label_21b070:
    // 0x21b070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b074:
    // 0x21b074: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21b074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21b078:
    // 0x21b078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b07c:
    // 0x21b07c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21b080:
    // 0x21b080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21b084:
    // 0x21b084: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b088:
    // 0x21b088: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21b08c:
    // 0x21b08c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b090:
    // 0x21b090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21b094:
    // 0x21b094: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21b094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21b098:
    // 0x21b098: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21b09c:
    // 0x21b09c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_21b0a0:
    if (ctx->pc == 0x21B0A0u) {
        ctx->pc = 0x21B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B09Cu;
        // 0x21b0a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0A4u;
        goto label_21b0a4;
    }
    ctx->pc = 0x21B09Cu;
    {
        const bool branch_taken_0x21b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b09c) {
            ctx->pc = 0x21B0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B09Cu;
            // 0x21b0a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b070;
        }
    }
    ctx->pc = 0x21B0A4u;
label_21b0a4:
    // 0x21b0a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b0a8:
    // 0x21b0a8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_21b0ac:
    // 0x21b0ac: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x21b0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b0b0:
    // 0x21b0b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x21b0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_21b0b4:
    // 0x21b0b4: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x21b0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_21b0b8:
    // 0x21b0b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b0bc:
    // 0x21b0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21b0c0:
    // 0x21b0c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b0c4:
    // 0x21b0c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b0c8:
    // 0x21b0c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21b0cc:
    // 0x21b0cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_21b0d0:
    // 0x21b0d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b0d4:
    // 0x21b0d4: 0xa4970000  sh          $s7, 0x0($a0)
    ctx->pc = 0x21b0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
label_21b0d8:
    // 0x21b0d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b0dc:
    // 0x21b0dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_21b0e0:
    // 0x21b0e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b0e4:
    // 0x21b0e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b0e8:
    // 0x21b0e8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x21b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_21b0ec:
    // 0x21b0ec: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_21b0f0:
    if (ctx->pc == 0x21B0F0u) {
        ctx->pc = 0x21B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0ECu;
        // 0x21b0f0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B0F4u;
        goto label_21b0f4;
    }
    ctx->pc = 0x21B0ECu;
    {
        const bool branch_taken_0x21b0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0ECu;
        // 0x21b0f0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b0ec) {
            ctx->pc = 0x21B130u;
            goto label_21b130;
        }
    }
    ctx->pc = 0x21B0F4u;
label_21b0f4:
    // 0x21b0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b0f8:
    // 0x21b0f8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21b0fc:
    // 0x21b0fc: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x21b0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_21b100:
    // 0x21b100: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b104:
    // 0x21b104: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x21b104u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_21b108:
    // 0x21b108: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21b10c:
    // 0x21b10c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21b110:
    // 0x21b110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21b114:
    // 0x21b114: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x21b114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21b118:
    // 0x21b118: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21b118u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21b11c:
    // 0x21b11c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x21b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_21b120:
    // 0x21b120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b124:
    // 0x21b124: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21b128:
    // 0x21b128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b12c:
    // 0x21b12c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21b130:
    // 0x21b130: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x21b130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21b134:
    // 0x21b134: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_21b138:
    // 0x21b138: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_21b13c:
    // 0x21b13c: 0x40f809  jalr        $v0
label_21b140:
    if (ctx->pc == 0x21B140u) {
        ctx->pc = 0x21B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B13Cu;
        // 0x21b140: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B144u;
        goto label_21b144;
    }
    ctx->pc = 0x21B13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B144u);
        ctx->pc = 0x21B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B13Cu;
        // 0x21b140: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B13Cu, 0x21B144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B144u;
label_21b144:
    // 0x21b144: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21b148:
    // 0x21b148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21b14c:
    // 0x21b14c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b150:
    // 0x21b150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21b154:
    // 0x21b154: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x21b154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_21b158:
    // 0x21b158: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21b15c:
    // 0x21b15c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x21b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_21b160:
    // 0x21b160: 0xc0d7412  jal         func_35D048
label_21b164:
    if (ctx->pc == 0x21B164u) {
        ctx->pc = 0x21B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B160u;
        // 0x21b164: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B168u;
        goto label_21b168;
    }
    ctx->pc = 0x21B160u;
    SET_GPR_U32(ctx, 31, 0x21B168u);
    ctx->pc = 0x21B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B160u;
    // 0x21b164: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21B160u, 0x21B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B168u;
label_21b168:
    // 0x21b168: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x21b168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_21b16c:
    // 0x21b16c: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x21b16cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_21b170:
    // 0x21b170: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x21b170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_21b174:
    // 0x21b174: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x21b174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_21b178:
    // 0x21b178: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x21b178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_21b17c:
    // 0x21b17c: 0xdfb501a8  ld          $s5, 0x1A8($sp)
    ctx->pc = 0x21b17cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_21b180:
    // 0x21b180: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x21b180u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_21b184:
    // 0x21b184: 0xdfb701b8  ld          $s7, 0x1B8($sp)
    ctx->pc = 0x21b184u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_21b188:
    // 0x21b188: 0xdfbe01c0  ld          $fp, 0x1C0($sp)
    ctx->pc = 0x21b188u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_21b18c:
    // 0x21b18c: 0xdfbf01c8  ld          $ra, 0x1C8($sp)
    ctx->pc = 0x21b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_21b190:
    // 0x21b190: 0x3e00008  jr          $ra
label_21b194:
    if (ctx->pc == 0x21B194u) {
        ctx->pc = 0x21B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B190u;
        // 0x21b194: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B198u;
        goto label_fallthrough_0x21b190;
    }
    ctx->pc = 0x21B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B190u;
        // 0x21b194: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b190:
    ctx->pc = 0x21B198u;
}
