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

// Function: sub_0037A590
// Address: 0x37a590 - 0x37b090
void sub_0037A590_0x37a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A590_0x37a590");
#endif

    switch (ctx->pc) {
        case 0x37a590u: goto label_37a590;
        case 0x37a594u: goto label_37a594;
        case 0x37a598u: goto label_37a598;
        case 0x37a59cu: goto label_37a59c;
        case 0x37a5a0u: goto label_37a5a0;
        case 0x37a5a4u: goto label_37a5a4;
        case 0x37a5a8u: goto label_37a5a8;
        case 0x37a5acu: goto label_37a5ac;
        case 0x37a5b0u: goto label_37a5b0;
        case 0x37a5b4u: goto label_37a5b4;
        case 0x37a5b8u: goto label_37a5b8;
        case 0x37a5bcu: goto label_37a5bc;
        case 0x37a5c0u: goto label_37a5c0;
        case 0x37a5c4u: goto label_37a5c4;
        case 0x37a5c8u: goto label_37a5c8;
        case 0x37a5ccu: goto label_37a5cc;
        case 0x37a5d0u: goto label_37a5d0;
        case 0x37a5d4u: goto label_37a5d4;
        case 0x37a5d8u: goto label_37a5d8;
        case 0x37a5dcu: goto label_37a5dc;
        case 0x37a5e0u: goto label_37a5e0;
        case 0x37a5e4u: goto label_37a5e4;
        case 0x37a5e8u: goto label_37a5e8;
        case 0x37a5ecu: goto label_37a5ec;
        case 0x37a5f0u: goto label_37a5f0;
        case 0x37a5f4u: goto label_37a5f4;
        case 0x37a5f8u: goto label_37a5f8;
        case 0x37a5fcu: goto label_37a5fc;
        case 0x37a600u: goto label_37a600;
        case 0x37a604u: goto label_37a604;
        case 0x37a608u: goto label_37a608;
        case 0x37a60cu: goto label_37a60c;
        case 0x37a610u: goto label_37a610;
        case 0x37a614u: goto label_37a614;
        case 0x37a618u: goto label_37a618;
        case 0x37a61cu: goto label_37a61c;
        case 0x37a620u: goto label_37a620;
        case 0x37a624u: goto label_37a624;
        case 0x37a628u: goto label_37a628;
        case 0x37a62cu: goto label_37a62c;
        case 0x37a630u: goto label_37a630;
        case 0x37a634u: goto label_37a634;
        case 0x37a638u: goto label_37a638;
        case 0x37a63cu: goto label_37a63c;
        case 0x37a640u: goto label_37a640;
        case 0x37a644u: goto label_37a644;
        case 0x37a648u: goto label_37a648;
        case 0x37a64cu: goto label_37a64c;
        case 0x37a650u: goto label_37a650;
        case 0x37a654u: goto label_37a654;
        case 0x37a658u: goto label_37a658;
        case 0x37a65cu: goto label_37a65c;
        case 0x37a660u: goto label_37a660;
        case 0x37a664u: goto label_37a664;
        case 0x37a668u: goto label_37a668;
        case 0x37a66cu: goto label_37a66c;
        case 0x37a670u: goto label_37a670;
        case 0x37a674u: goto label_37a674;
        case 0x37a678u: goto label_37a678;
        case 0x37a67cu: goto label_37a67c;
        case 0x37a680u: goto label_37a680;
        case 0x37a684u: goto label_37a684;
        case 0x37a688u: goto label_37a688;
        case 0x37a68cu: goto label_37a68c;
        case 0x37a690u: goto label_37a690;
        case 0x37a694u: goto label_37a694;
        case 0x37a698u: goto label_37a698;
        case 0x37a69cu: goto label_37a69c;
        case 0x37a6a0u: goto label_37a6a0;
        case 0x37a6a4u: goto label_37a6a4;
        case 0x37a6a8u: goto label_37a6a8;
        case 0x37a6acu: goto label_37a6ac;
        case 0x37a6b0u: goto label_37a6b0;
        case 0x37a6b4u: goto label_37a6b4;
        case 0x37a6b8u: goto label_37a6b8;
        case 0x37a6bcu: goto label_37a6bc;
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a6c4u: goto label_37a6c4;
        case 0x37a6c8u: goto label_37a6c8;
        case 0x37a6ccu: goto label_37a6cc;
        case 0x37a6d0u: goto label_37a6d0;
        case 0x37a6d4u: goto label_37a6d4;
        case 0x37a6d8u: goto label_37a6d8;
        case 0x37a6dcu: goto label_37a6dc;
        case 0x37a6e0u: goto label_37a6e0;
        case 0x37a6e4u: goto label_37a6e4;
        case 0x37a6e8u: goto label_37a6e8;
        case 0x37a6ecu: goto label_37a6ec;
        case 0x37a6f0u: goto label_37a6f0;
        case 0x37a6f4u: goto label_37a6f4;
        case 0x37a6f8u: goto label_37a6f8;
        case 0x37a6fcu: goto label_37a6fc;
        case 0x37a700u: goto label_37a700;
        case 0x37a704u: goto label_37a704;
        case 0x37a708u: goto label_37a708;
        case 0x37a70cu: goto label_37a70c;
        case 0x37a710u: goto label_37a710;
        case 0x37a714u: goto label_37a714;
        case 0x37a718u: goto label_37a718;
        case 0x37a71cu: goto label_37a71c;
        case 0x37a720u: goto label_37a720;
        case 0x37a724u: goto label_37a724;
        case 0x37a728u: goto label_37a728;
        case 0x37a72cu: goto label_37a72c;
        case 0x37a730u: goto label_37a730;
        case 0x37a734u: goto label_37a734;
        case 0x37a738u: goto label_37a738;
        case 0x37a73cu: goto label_37a73c;
        case 0x37a740u: goto label_37a740;
        case 0x37a744u: goto label_37a744;
        case 0x37a748u: goto label_37a748;
        case 0x37a74cu: goto label_37a74c;
        case 0x37a750u: goto label_37a750;
        case 0x37a754u: goto label_37a754;
        case 0x37a758u: goto label_37a758;
        case 0x37a75cu: goto label_37a75c;
        case 0x37a760u: goto label_37a760;
        case 0x37a764u: goto label_37a764;
        case 0x37a768u: goto label_37a768;
        case 0x37a76cu: goto label_37a76c;
        case 0x37a770u: goto label_37a770;
        case 0x37a774u: goto label_37a774;
        case 0x37a778u: goto label_37a778;
        case 0x37a77cu: goto label_37a77c;
        case 0x37a780u: goto label_37a780;
        case 0x37a784u: goto label_37a784;
        case 0x37a788u: goto label_37a788;
        case 0x37a78cu: goto label_37a78c;
        case 0x37a790u: goto label_37a790;
        case 0x37a794u: goto label_37a794;
        case 0x37a798u: goto label_37a798;
        case 0x37a79cu: goto label_37a79c;
        case 0x37a7a0u: goto label_37a7a0;
        case 0x37a7a4u: goto label_37a7a4;
        case 0x37a7a8u: goto label_37a7a8;
        case 0x37a7acu: goto label_37a7ac;
        case 0x37a7b0u: goto label_37a7b0;
        case 0x37a7b4u: goto label_37a7b4;
        case 0x37a7b8u: goto label_37a7b8;
        case 0x37a7bcu: goto label_37a7bc;
        case 0x37a7c0u: goto label_37a7c0;
        case 0x37a7c4u: goto label_37a7c4;
        case 0x37a7c8u: goto label_37a7c8;
        case 0x37a7ccu: goto label_37a7cc;
        case 0x37a7d0u: goto label_37a7d0;
        case 0x37a7d4u: goto label_37a7d4;
        case 0x37a7d8u: goto label_37a7d8;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a7e0u: goto label_37a7e0;
        case 0x37a7e4u: goto label_37a7e4;
        case 0x37a7e8u: goto label_37a7e8;
        case 0x37a7ecu: goto label_37a7ec;
        case 0x37a7f0u: goto label_37a7f0;
        case 0x37a7f4u: goto label_37a7f4;
        case 0x37a7f8u: goto label_37a7f8;
        case 0x37a7fcu: goto label_37a7fc;
        case 0x37a800u: goto label_37a800;
        case 0x37a804u: goto label_37a804;
        case 0x37a808u: goto label_37a808;
        case 0x37a80cu: goto label_37a80c;
        case 0x37a810u: goto label_37a810;
        case 0x37a814u: goto label_37a814;
        case 0x37a818u: goto label_37a818;
        case 0x37a81cu: goto label_37a81c;
        case 0x37a820u: goto label_37a820;
        case 0x37a824u: goto label_37a824;
        case 0x37a828u: goto label_37a828;
        case 0x37a82cu: goto label_37a82c;
        case 0x37a830u: goto label_37a830;
        case 0x37a834u: goto label_37a834;
        case 0x37a838u: goto label_37a838;
        case 0x37a83cu: goto label_37a83c;
        case 0x37a840u: goto label_37a840;
        case 0x37a844u: goto label_37a844;
        case 0x37a848u: goto label_37a848;
        case 0x37a84cu: goto label_37a84c;
        case 0x37a850u: goto label_37a850;
        case 0x37a854u: goto label_37a854;
        case 0x37a858u: goto label_37a858;
        case 0x37a85cu: goto label_37a85c;
        case 0x37a860u: goto label_37a860;
        case 0x37a864u: goto label_37a864;
        case 0x37a868u: goto label_37a868;
        case 0x37a86cu: goto label_37a86c;
        case 0x37a870u: goto label_37a870;
        case 0x37a874u: goto label_37a874;
        case 0x37a878u: goto label_37a878;
        case 0x37a87cu: goto label_37a87c;
        case 0x37a880u: goto label_37a880;
        case 0x37a884u: goto label_37a884;
        case 0x37a888u: goto label_37a888;
        case 0x37a88cu: goto label_37a88c;
        case 0x37a890u: goto label_37a890;
        case 0x37a894u: goto label_37a894;
        case 0x37a898u: goto label_37a898;
        case 0x37a89cu: goto label_37a89c;
        case 0x37a8a0u: goto label_37a8a0;
        case 0x37a8a4u: goto label_37a8a4;
        case 0x37a8a8u: goto label_37a8a8;
        case 0x37a8acu: goto label_37a8ac;
        case 0x37a8b0u: goto label_37a8b0;
        case 0x37a8b4u: goto label_37a8b4;
        case 0x37a8b8u: goto label_37a8b8;
        case 0x37a8bcu: goto label_37a8bc;
        case 0x37a8c0u: goto label_37a8c0;
        case 0x37a8c4u: goto label_37a8c4;
        case 0x37a8c8u: goto label_37a8c8;
        case 0x37a8ccu: goto label_37a8cc;
        case 0x37a8d0u: goto label_37a8d0;
        case 0x37a8d4u: goto label_37a8d4;
        case 0x37a8d8u: goto label_37a8d8;
        case 0x37a8dcu: goto label_37a8dc;
        case 0x37a8e0u: goto label_37a8e0;
        case 0x37a8e4u: goto label_37a8e4;
        case 0x37a8e8u: goto label_37a8e8;
        case 0x37a8ecu: goto label_37a8ec;
        case 0x37a8f0u: goto label_37a8f0;
        case 0x37a8f4u: goto label_37a8f4;
        case 0x37a8f8u: goto label_37a8f8;
        case 0x37a8fcu: goto label_37a8fc;
        case 0x37a900u: goto label_37a900;
        case 0x37a904u: goto label_37a904;
        case 0x37a908u: goto label_37a908;
        case 0x37a90cu: goto label_37a90c;
        case 0x37a910u: goto label_37a910;
        case 0x37a914u: goto label_37a914;
        case 0x37a918u: goto label_37a918;
        case 0x37a91cu: goto label_37a91c;
        case 0x37a920u: goto label_37a920;
        case 0x37a924u: goto label_37a924;
        case 0x37a928u: goto label_37a928;
        case 0x37a92cu: goto label_37a92c;
        case 0x37a930u: goto label_37a930;
        case 0x37a934u: goto label_37a934;
        case 0x37a938u: goto label_37a938;
        case 0x37a93cu: goto label_37a93c;
        case 0x37a940u: goto label_37a940;
        case 0x37a944u: goto label_37a944;
        case 0x37a948u: goto label_37a948;
        case 0x37a94cu: goto label_37a94c;
        case 0x37a950u: goto label_37a950;
        case 0x37a954u: goto label_37a954;
        case 0x37a958u: goto label_37a958;
        case 0x37a95cu: goto label_37a95c;
        case 0x37a960u: goto label_37a960;
        case 0x37a964u: goto label_37a964;
        case 0x37a968u: goto label_37a968;
        case 0x37a96cu: goto label_37a96c;
        case 0x37a970u: goto label_37a970;
        case 0x37a974u: goto label_37a974;
        case 0x37a978u: goto label_37a978;
        case 0x37a97cu: goto label_37a97c;
        case 0x37a980u: goto label_37a980;
        case 0x37a984u: goto label_37a984;
        case 0x37a988u: goto label_37a988;
        case 0x37a98cu: goto label_37a98c;
        case 0x37a990u: goto label_37a990;
        case 0x37a994u: goto label_37a994;
        case 0x37a998u: goto label_37a998;
        case 0x37a99cu: goto label_37a99c;
        case 0x37a9a0u: goto label_37a9a0;
        case 0x37a9a4u: goto label_37a9a4;
        case 0x37a9a8u: goto label_37a9a8;
        case 0x37a9acu: goto label_37a9ac;
        case 0x37a9b0u: goto label_37a9b0;
        case 0x37a9b4u: goto label_37a9b4;
        case 0x37a9b8u: goto label_37a9b8;
        case 0x37a9bcu: goto label_37a9bc;
        case 0x37a9c0u: goto label_37a9c0;
        case 0x37a9c4u: goto label_37a9c4;
        case 0x37a9c8u: goto label_37a9c8;
        case 0x37a9ccu: goto label_37a9cc;
        case 0x37a9d0u: goto label_37a9d0;
        case 0x37a9d4u: goto label_37a9d4;
        case 0x37a9d8u: goto label_37a9d8;
        case 0x37a9dcu: goto label_37a9dc;
        case 0x37a9e0u: goto label_37a9e0;
        case 0x37a9e4u: goto label_37a9e4;
        case 0x37a9e8u: goto label_37a9e8;
        case 0x37a9ecu: goto label_37a9ec;
        case 0x37a9f0u: goto label_37a9f0;
        case 0x37a9f4u: goto label_37a9f4;
        case 0x37a9f8u: goto label_37a9f8;
        case 0x37a9fcu: goto label_37a9fc;
        case 0x37aa00u: goto label_37aa00;
        case 0x37aa04u: goto label_37aa04;
        case 0x37aa08u: goto label_37aa08;
        case 0x37aa0cu: goto label_37aa0c;
        case 0x37aa10u: goto label_37aa10;
        case 0x37aa14u: goto label_37aa14;
        case 0x37aa18u: goto label_37aa18;
        case 0x37aa1cu: goto label_37aa1c;
        case 0x37aa20u: goto label_37aa20;
        case 0x37aa24u: goto label_37aa24;
        case 0x37aa28u: goto label_37aa28;
        case 0x37aa2cu: goto label_37aa2c;
        case 0x37aa30u: goto label_37aa30;
        case 0x37aa34u: goto label_37aa34;
        case 0x37aa38u: goto label_37aa38;
        case 0x37aa3cu: goto label_37aa3c;
        case 0x37aa40u: goto label_37aa40;
        case 0x37aa44u: goto label_37aa44;
        case 0x37aa48u: goto label_37aa48;
        case 0x37aa4cu: goto label_37aa4c;
        case 0x37aa50u: goto label_37aa50;
        case 0x37aa54u: goto label_37aa54;
        case 0x37aa58u: goto label_37aa58;
        case 0x37aa5cu: goto label_37aa5c;
        case 0x37aa60u: goto label_37aa60;
        case 0x37aa64u: goto label_37aa64;
        case 0x37aa68u: goto label_37aa68;
        case 0x37aa6cu: goto label_37aa6c;
        case 0x37aa70u: goto label_37aa70;
        case 0x37aa74u: goto label_37aa74;
        case 0x37aa78u: goto label_37aa78;
        case 0x37aa7cu: goto label_37aa7c;
        case 0x37aa80u: goto label_37aa80;
        case 0x37aa84u: goto label_37aa84;
        case 0x37aa88u: goto label_37aa88;
        case 0x37aa8cu: goto label_37aa8c;
        case 0x37aa90u: goto label_37aa90;
        case 0x37aa94u: goto label_37aa94;
        case 0x37aa98u: goto label_37aa98;
        case 0x37aa9cu: goto label_37aa9c;
        case 0x37aaa0u: goto label_37aaa0;
        case 0x37aaa4u: goto label_37aaa4;
        case 0x37aaa8u: goto label_37aaa8;
        case 0x37aaacu: goto label_37aaac;
        case 0x37aab0u: goto label_37aab0;
        case 0x37aab4u: goto label_37aab4;
        case 0x37aab8u: goto label_37aab8;
        case 0x37aabcu: goto label_37aabc;
        case 0x37aac0u: goto label_37aac0;
        case 0x37aac4u: goto label_37aac4;
        case 0x37aac8u: goto label_37aac8;
        case 0x37aaccu: goto label_37aacc;
        case 0x37aad0u: goto label_37aad0;
        case 0x37aad4u: goto label_37aad4;
        case 0x37aad8u: goto label_37aad8;
        case 0x37aadcu: goto label_37aadc;
        case 0x37aae0u: goto label_37aae0;
        case 0x37aae4u: goto label_37aae4;
        case 0x37aae8u: goto label_37aae8;
        case 0x37aaecu: goto label_37aaec;
        case 0x37aaf0u: goto label_37aaf0;
        case 0x37aaf4u: goto label_37aaf4;
        case 0x37aaf8u: goto label_37aaf8;
        case 0x37aafcu: goto label_37aafc;
        case 0x37ab00u: goto label_37ab00;
        case 0x37ab04u: goto label_37ab04;
        case 0x37ab08u: goto label_37ab08;
        case 0x37ab0cu: goto label_37ab0c;
        case 0x37ab10u: goto label_37ab10;
        case 0x37ab14u: goto label_37ab14;
        case 0x37ab18u: goto label_37ab18;
        case 0x37ab1cu: goto label_37ab1c;
        case 0x37ab20u: goto label_37ab20;
        case 0x37ab24u: goto label_37ab24;
        case 0x37ab28u: goto label_37ab28;
        case 0x37ab2cu: goto label_37ab2c;
        case 0x37ab30u: goto label_37ab30;
        case 0x37ab34u: goto label_37ab34;
        case 0x37ab38u: goto label_37ab38;
        case 0x37ab3cu: goto label_37ab3c;
        case 0x37ab40u: goto label_37ab40;
        case 0x37ab44u: goto label_37ab44;
        case 0x37ab48u: goto label_37ab48;
        case 0x37ab4cu: goto label_37ab4c;
        case 0x37ab50u: goto label_37ab50;
        case 0x37ab54u: goto label_37ab54;
        case 0x37ab58u: goto label_37ab58;
        case 0x37ab5cu: goto label_37ab5c;
        case 0x37ab60u: goto label_37ab60;
        case 0x37ab64u: goto label_37ab64;
        case 0x37ab68u: goto label_37ab68;
        case 0x37ab6cu: goto label_37ab6c;
        case 0x37ab70u: goto label_37ab70;
        case 0x37ab74u: goto label_37ab74;
        case 0x37ab78u: goto label_37ab78;
        case 0x37ab7cu: goto label_37ab7c;
        case 0x37ab80u: goto label_37ab80;
        case 0x37ab84u: goto label_37ab84;
        case 0x37ab88u: goto label_37ab88;
        case 0x37ab8cu: goto label_37ab8c;
        case 0x37ab90u: goto label_37ab90;
        case 0x37ab94u: goto label_37ab94;
        case 0x37ab98u: goto label_37ab98;
        case 0x37ab9cu: goto label_37ab9c;
        case 0x37aba0u: goto label_37aba0;
        case 0x37aba4u: goto label_37aba4;
        case 0x37aba8u: goto label_37aba8;
        case 0x37abacu: goto label_37abac;
        case 0x37abb0u: goto label_37abb0;
        case 0x37abb4u: goto label_37abb4;
        case 0x37abb8u: goto label_37abb8;
        case 0x37abbcu: goto label_37abbc;
        case 0x37abc0u: goto label_37abc0;
        case 0x37abc4u: goto label_37abc4;
        case 0x37abc8u: goto label_37abc8;
        case 0x37abccu: goto label_37abcc;
        case 0x37abd0u: goto label_37abd0;
        case 0x37abd4u: goto label_37abd4;
        case 0x37abd8u: goto label_37abd8;
        case 0x37abdcu: goto label_37abdc;
        case 0x37abe0u: goto label_37abe0;
        case 0x37abe4u: goto label_37abe4;
        case 0x37abe8u: goto label_37abe8;
        case 0x37abecu: goto label_37abec;
        case 0x37abf0u: goto label_37abf0;
        case 0x37abf4u: goto label_37abf4;
        case 0x37abf8u: goto label_37abf8;
        case 0x37abfcu: goto label_37abfc;
        case 0x37ac00u: goto label_37ac00;
        case 0x37ac04u: goto label_37ac04;
        case 0x37ac08u: goto label_37ac08;
        case 0x37ac0cu: goto label_37ac0c;
        case 0x37ac10u: goto label_37ac10;
        case 0x37ac14u: goto label_37ac14;
        case 0x37ac18u: goto label_37ac18;
        case 0x37ac1cu: goto label_37ac1c;
        case 0x37ac20u: goto label_37ac20;
        case 0x37ac24u: goto label_37ac24;
        case 0x37ac28u: goto label_37ac28;
        case 0x37ac2cu: goto label_37ac2c;
        case 0x37ac30u: goto label_37ac30;
        case 0x37ac34u: goto label_37ac34;
        case 0x37ac38u: goto label_37ac38;
        case 0x37ac3cu: goto label_37ac3c;
        case 0x37ac40u: goto label_37ac40;
        case 0x37ac44u: goto label_37ac44;
        case 0x37ac48u: goto label_37ac48;
        case 0x37ac4cu: goto label_37ac4c;
        case 0x37ac50u: goto label_37ac50;
        case 0x37ac54u: goto label_37ac54;
        case 0x37ac58u: goto label_37ac58;
        case 0x37ac5cu: goto label_37ac5c;
        case 0x37ac60u: goto label_37ac60;
        case 0x37ac64u: goto label_37ac64;
        case 0x37ac68u: goto label_37ac68;
        case 0x37ac6cu: goto label_37ac6c;
        case 0x37ac70u: goto label_37ac70;
        case 0x37ac74u: goto label_37ac74;
        case 0x37ac78u: goto label_37ac78;
        case 0x37ac7cu: goto label_37ac7c;
        case 0x37ac80u: goto label_37ac80;
        case 0x37ac84u: goto label_37ac84;
        case 0x37ac88u: goto label_37ac88;
        case 0x37ac8cu: goto label_37ac8c;
        case 0x37ac90u: goto label_37ac90;
        case 0x37ac94u: goto label_37ac94;
        case 0x37ac98u: goto label_37ac98;
        case 0x37ac9cu: goto label_37ac9c;
        case 0x37aca0u: goto label_37aca0;
        case 0x37aca4u: goto label_37aca4;
        case 0x37aca8u: goto label_37aca8;
        case 0x37acacu: goto label_37acac;
        case 0x37acb0u: goto label_37acb0;
        case 0x37acb4u: goto label_37acb4;
        case 0x37acb8u: goto label_37acb8;
        case 0x37acbcu: goto label_37acbc;
        case 0x37acc0u: goto label_37acc0;
        case 0x37acc4u: goto label_37acc4;
        case 0x37acc8u: goto label_37acc8;
        case 0x37acccu: goto label_37accc;
        case 0x37acd0u: goto label_37acd0;
        case 0x37acd4u: goto label_37acd4;
        case 0x37acd8u: goto label_37acd8;
        case 0x37acdcu: goto label_37acdc;
        case 0x37ace0u: goto label_37ace0;
        case 0x37ace4u: goto label_37ace4;
        case 0x37ace8u: goto label_37ace8;
        case 0x37acecu: goto label_37acec;
        case 0x37acf0u: goto label_37acf0;
        case 0x37acf4u: goto label_37acf4;
        case 0x37acf8u: goto label_37acf8;
        case 0x37acfcu: goto label_37acfc;
        case 0x37ad00u: goto label_37ad00;
        case 0x37ad04u: goto label_37ad04;
        case 0x37ad08u: goto label_37ad08;
        case 0x37ad0cu: goto label_37ad0c;
        case 0x37ad10u: goto label_37ad10;
        case 0x37ad14u: goto label_37ad14;
        case 0x37ad18u: goto label_37ad18;
        case 0x37ad1cu: goto label_37ad1c;
        case 0x37ad20u: goto label_37ad20;
        case 0x37ad24u: goto label_37ad24;
        case 0x37ad28u: goto label_37ad28;
        case 0x37ad2cu: goto label_37ad2c;
        case 0x37ad30u: goto label_37ad30;
        case 0x37ad34u: goto label_37ad34;
        case 0x37ad38u: goto label_37ad38;
        case 0x37ad3cu: goto label_37ad3c;
        case 0x37ad40u: goto label_37ad40;
        case 0x37ad44u: goto label_37ad44;
        case 0x37ad48u: goto label_37ad48;
        case 0x37ad4cu: goto label_37ad4c;
        case 0x37ad50u: goto label_37ad50;
        case 0x37ad54u: goto label_37ad54;
        case 0x37ad58u: goto label_37ad58;
        case 0x37ad5cu: goto label_37ad5c;
        case 0x37ad60u: goto label_37ad60;
        case 0x37ad64u: goto label_37ad64;
        case 0x37ad68u: goto label_37ad68;
        case 0x37ad6cu: goto label_37ad6c;
        case 0x37ad70u: goto label_37ad70;
        case 0x37ad74u: goto label_37ad74;
        case 0x37ad78u: goto label_37ad78;
        case 0x37ad7cu: goto label_37ad7c;
        case 0x37ad80u: goto label_37ad80;
        case 0x37ad84u: goto label_37ad84;
        case 0x37ad88u: goto label_37ad88;
        case 0x37ad8cu: goto label_37ad8c;
        case 0x37ad90u: goto label_37ad90;
        case 0x37ad94u: goto label_37ad94;
        case 0x37ad98u: goto label_37ad98;
        case 0x37ad9cu: goto label_37ad9c;
        case 0x37ada0u: goto label_37ada0;
        case 0x37ada4u: goto label_37ada4;
        case 0x37ada8u: goto label_37ada8;
        case 0x37adacu: goto label_37adac;
        case 0x37adb0u: goto label_37adb0;
        case 0x37adb4u: goto label_37adb4;
        case 0x37adb8u: goto label_37adb8;
        case 0x37adbcu: goto label_37adbc;
        case 0x37adc0u: goto label_37adc0;
        case 0x37adc4u: goto label_37adc4;
        case 0x37adc8u: goto label_37adc8;
        case 0x37adccu: goto label_37adcc;
        case 0x37add0u: goto label_37add0;
        case 0x37add4u: goto label_37add4;
        case 0x37add8u: goto label_37add8;
        case 0x37addcu: goto label_37addc;
        case 0x37ade0u: goto label_37ade0;
        case 0x37ade4u: goto label_37ade4;
        case 0x37ade8u: goto label_37ade8;
        case 0x37adecu: goto label_37adec;
        case 0x37adf0u: goto label_37adf0;
        case 0x37adf4u: goto label_37adf4;
        case 0x37adf8u: goto label_37adf8;
        case 0x37adfcu: goto label_37adfc;
        case 0x37ae00u: goto label_37ae00;
        case 0x37ae04u: goto label_37ae04;
        case 0x37ae08u: goto label_37ae08;
        case 0x37ae0cu: goto label_37ae0c;
        case 0x37ae10u: goto label_37ae10;
        case 0x37ae14u: goto label_37ae14;
        case 0x37ae18u: goto label_37ae18;
        case 0x37ae1cu: goto label_37ae1c;
        case 0x37ae20u: goto label_37ae20;
        case 0x37ae24u: goto label_37ae24;
        case 0x37ae28u: goto label_37ae28;
        case 0x37ae2cu: goto label_37ae2c;
        case 0x37ae30u: goto label_37ae30;
        case 0x37ae34u: goto label_37ae34;
        case 0x37ae38u: goto label_37ae38;
        case 0x37ae3cu: goto label_37ae3c;
        case 0x37ae40u: goto label_37ae40;
        case 0x37ae44u: goto label_37ae44;
        case 0x37ae48u: goto label_37ae48;
        case 0x37ae4cu: goto label_37ae4c;
        case 0x37ae50u: goto label_37ae50;
        case 0x37ae54u: goto label_37ae54;
        case 0x37ae58u: goto label_37ae58;
        case 0x37ae5cu: goto label_37ae5c;
        case 0x37ae60u: goto label_37ae60;
        case 0x37ae64u: goto label_37ae64;
        case 0x37ae68u: goto label_37ae68;
        case 0x37ae6cu: goto label_37ae6c;
        case 0x37ae70u: goto label_37ae70;
        case 0x37ae74u: goto label_37ae74;
        case 0x37ae78u: goto label_37ae78;
        case 0x37ae7cu: goto label_37ae7c;
        case 0x37ae80u: goto label_37ae80;
        case 0x37ae84u: goto label_37ae84;
        case 0x37ae88u: goto label_37ae88;
        case 0x37ae8cu: goto label_37ae8c;
        case 0x37ae90u: goto label_37ae90;
        case 0x37ae94u: goto label_37ae94;
        case 0x37ae98u: goto label_37ae98;
        case 0x37ae9cu: goto label_37ae9c;
        case 0x37aea0u: goto label_37aea0;
        case 0x37aea4u: goto label_37aea4;
        case 0x37aea8u: goto label_37aea8;
        case 0x37aeacu: goto label_37aeac;
        case 0x37aeb0u: goto label_37aeb0;
        case 0x37aeb4u: goto label_37aeb4;
        case 0x37aeb8u: goto label_37aeb8;
        case 0x37aebcu: goto label_37aebc;
        case 0x37aec0u: goto label_37aec0;
        case 0x37aec4u: goto label_37aec4;
        case 0x37aec8u: goto label_37aec8;
        case 0x37aeccu: goto label_37aecc;
        case 0x37aed0u: goto label_37aed0;
        case 0x37aed4u: goto label_37aed4;
        case 0x37aed8u: goto label_37aed8;
        case 0x37aedcu: goto label_37aedc;
        case 0x37aee0u: goto label_37aee0;
        case 0x37aee4u: goto label_37aee4;
        case 0x37aee8u: goto label_37aee8;
        case 0x37aeecu: goto label_37aeec;
        case 0x37aef0u: goto label_37aef0;
        case 0x37aef4u: goto label_37aef4;
        case 0x37aef8u: goto label_37aef8;
        case 0x37aefcu: goto label_37aefc;
        case 0x37af00u: goto label_37af00;
        case 0x37af04u: goto label_37af04;
        case 0x37af08u: goto label_37af08;
        case 0x37af0cu: goto label_37af0c;
        case 0x37af10u: goto label_37af10;
        case 0x37af14u: goto label_37af14;
        case 0x37af18u: goto label_37af18;
        case 0x37af1cu: goto label_37af1c;
        case 0x37af20u: goto label_37af20;
        case 0x37af24u: goto label_37af24;
        case 0x37af28u: goto label_37af28;
        case 0x37af2cu: goto label_37af2c;
        case 0x37af30u: goto label_37af30;
        case 0x37af34u: goto label_37af34;
        case 0x37af38u: goto label_37af38;
        case 0x37af3cu: goto label_37af3c;
        case 0x37af40u: goto label_37af40;
        case 0x37af44u: goto label_37af44;
        case 0x37af48u: goto label_37af48;
        case 0x37af4cu: goto label_37af4c;
        case 0x37af50u: goto label_37af50;
        case 0x37af54u: goto label_37af54;
        case 0x37af58u: goto label_37af58;
        case 0x37af5cu: goto label_37af5c;
        case 0x37af60u: goto label_37af60;
        case 0x37af64u: goto label_37af64;
        case 0x37af68u: goto label_37af68;
        case 0x37af6cu: goto label_37af6c;
        case 0x37af70u: goto label_37af70;
        case 0x37af74u: goto label_37af74;
        case 0x37af78u: goto label_37af78;
        case 0x37af7cu: goto label_37af7c;
        case 0x37af80u: goto label_37af80;
        case 0x37af84u: goto label_37af84;
        case 0x37af88u: goto label_37af88;
        case 0x37af8cu: goto label_37af8c;
        case 0x37af90u: goto label_37af90;
        case 0x37af94u: goto label_37af94;
        case 0x37af98u: goto label_37af98;
        case 0x37af9cu: goto label_37af9c;
        case 0x37afa0u: goto label_37afa0;
        case 0x37afa4u: goto label_37afa4;
        case 0x37afa8u: goto label_37afa8;
        case 0x37afacu: goto label_37afac;
        case 0x37afb0u: goto label_37afb0;
        case 0x37afb4u: goto label_37afb4;
        case 0x37afb8u: goto label_37afb8;
        case 0x37afbcu: goto label_37afbc;
        case 0x37afc0u: goto label_37afc0;
        case 0x37afc4u: goto label_37afc4;
        case 0x37afc8u: goto label_37afc8;
        case 0x37afccu: goto label_37afcc;
        case 0x37afd0u: goto label_37afd0;
        case 0x37afd4u: goto label_37afd4;
        case 0x37afd8u: goto label_37afd8;
        case 0x37afdcu: goto label_37afdc;
        case 0x37afe0u: goto label_37afe0;
        case 0x37afe4u: goto label_37afe4;
        case 0x37afe8u: goto label_37afe8;
        case 0x37afecu: goto label_37afec;
        case 0x37aff0u: goto label_37aff0;
        case 0x37aff4u: goto label_37aff4;
        case 0x37aff8u: goto label_37aff8;
        case 0x37affcu: goto label_37affc;
        case 0x37b000u: goto label_37b000;
        case 0x37b004u: goto label_37b004;
        case 0x37b008u: goto label_37b008;
        case 0x37b00cu: goto label_37b00c;
        case 0x37b010u: goto label_37b010;
        case 0x37b014u: goto label_37b014;
        case 0x37b018u: goto label_37b018;
        case 0x37b01cu: goto label_37b01c;
        case 0x37b020u: goto label_37b020;
        case 0x37b024u: goto label_37b024;
        case 0x37b028u: goto label_37b028;
        case 0x37b02cu: goto label_37b02c;
        case 0x37b030u: goto label_37b030;
        case 0x37b034u: goto label_37b034;
        case 0x37b038u: goto label_37b038;
        case 0x37b03cu: goto label_37b03c;
        case 0x37b040u: goto label_37b040;
        case 0x37b044u: goto label_37b044;
        case 0x37b048u: goto label_37b048;
        case 0x37b04cu: goto label_37b04c;
        case 0x37b050u: goto label_37b050;
        case 0x37b054u: goto label_37b054;
        case 0x37b058u: goto label_37b058;
        case 0x37b05cu: goto label_37b05c;
        case 0x37b060u: goto label_37b060;
        case 0x37b064u: goto label_37b064;
        case 0x37b068u: goto label_37b068;
        case 0x37b06cu: goto label_37b06c;
        case 0x37b070u: goto label_37b070;
        case 0x37b074u: goto label_37b074;
        case 0x37b078u: goto label_37b078;
        case 0x37b07cu: goto label_37b07c;
        case 0x37b080u: goto label_37b080;
        case 0x37b084u: goto label_37b084;
        case 0x37b088u: goto label_37b088;
        case 0x37b08cu: goto label_37b08c;
        default: break;
    }

    ctx->pc = 0x37a590u;

label_37a590:
    // 0x37a590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37a594:
    // 0x37a594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37a598:
    // 0x37a598: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x37a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_37a59c:
    // 0x37a59c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_37a5a0:
    if (ctx->pc == 0x37A5A0u) {
        ctx->pc = 0x37A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A59Cu;
        // 0x37a5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A5A4u;
        goto label_37a5a4;
    }
    ctx->pc = 0x37A59Cu;
    {
        const bool branch_taken_0x37a59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A59Cu;
        // 0x37a5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a59c) {
            ctx->pc = 0x37A5ACu;
            goto label_37a5ac;
        }
    }
    ctx->pc = 0x37A5A4u;
label_37a5a4:
    // 0x37a5a4: 0xc0de928  jal         func_37A4A0
label_37a5a8:
    if (ctx->pc == 0x37A5A8u) {
        ctx->pc = 0x37A5ACu;
        goto label_37a5ac;
    }
    ctx->pc = 0x37A5A4u;
    SET_GPR_U32(ctx, 31, 0x37A5ACu);
    ctx->pc = 0x37A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A4A0u, 0x37A5A4u, 0x37A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A5ACu;
label_37a5ac:
    // 0x37a5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37a5b0:
    // 0x37a5b0: 0x3e00008  jr          $ra
label_37a5b4:
    if (ctx->pc == 0x37A5B4u) {
        ctx->pc = 0x37A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5B0u;
        // 0x37a5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A5B8u;
        goto label_37a5b8;
    }
    ctx->pc = 0x37A5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5B0u;
        // 0x37a5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A5B8u;
label_37a5b8:
    // 0x37a5b8: 0x0  nop
    ctx->pc = 0x37a5b8u;
    // NOP
label_37a5bc:
    // 0x37a5bc: 0x0  nop
    ctx->pc = 0x37a5bcu;
    // NOP
label_37a5c0:
    // 0x37a5c0: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_37a5c4:
    // 0x37a5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5c8:
    // 0x37a5c8: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37A5C8 raw=0x01E20801");
label_37a5cc:
    // 0x37a5cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5d0:
    // 0x37a5d0: 0x1e30802  .word       0x01E30802                   # srl         $at, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_37a5d4:
    // 0x37a5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5d8:
    // 0x37a5d8: 0x1e40000  .word       0x01E40000                   # sll         $zero, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5d8u;
    
label_37a5dc:
    // 0x37a5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5e0:
    // 0x37a5e0: 0x1e50001  .word       0x01E50001                   # INVALID     $t7, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37A5E0 raw=0x01E50001");
label_37a5e4:
    // 0x37a5e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5e8:
    // 0x37a5e8: 0x1e60002  .word       0x01E60002                   # srl         $zero, $a2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a5e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_37a5ec:
    // 0x37a5ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5f0:
    // 0x37a5f0: 0x81c0273f  lb          $zero, 0x273F($t6)
    ctx->pc = 0x37a5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 10047)));
label_37a5f4:
    // 0x37a5f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a5f8:
    // 0x37a5f8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37a5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37a5fc:
    // 0x37a5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a600:
    // 0x37a600: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37a604:
    // 0x37a604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a608:
    // 0x37a608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a60c:
    // 0x37a60c: 0x1df212a  .word       0x01DF212A                   # slt         $a0, $t6, $ra # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a60cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37a610:
    // 0x37a610: 0x81c02f3f  lb          $zero, 0x2F3F($t6)
    ctx->pc = 0x37a610u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 12095)));
label_37a614:
    // 0x37a614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a618:
    // 0x37a618: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37a618u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37a61c:
    // 0x37a61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a620:
    // 0x37a620: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37a620u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37a624:
    // 0x37a624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a628:
    // 0x37a628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a62c:
    // 0x37a62c: 0x1df296a  .word       0x01DF296A                   # slt         $a1, $t6, $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a62cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37a630:
    // 0x37a630: 0x81c0373f  lb          $zero, 0x373F($t6)
    ctx->pc = 0x37a630u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 14143)));
label_37a634:
    // 0x37a634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a638:
    // 0x37a638: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37a638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37a63c:
    // 0x37a63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a640:
    // 0x37a640: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37a640u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37a644:
    // 0x37a644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a648:
    // 0x37a648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a64c:
    // 0x37a64c: 0x1df31aa  .word       0x01DF31AA                   # slt         $a2, $t6, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a64cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37a650:
    // 0x37a650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a654:
    // 0x37a654: 0x1e409bc  .word       0x01E409BC                   # dsll32      $at, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 4) << (32 + 6));
label_37a658:
    // 0x37a658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a65c:
    // 0x37a65c: 0x1e410bd  .word       0x01E410BD                   # INVALID     $t7, $a0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a65cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A65C raw=0x01E410BD");
label_37a660:
    // 0x37a660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a664:
    // 0x37a664: 0x1e4190a  .word       0x01E4190A                   # movz        $v1, $t7, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a664u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37a668:
    // 0x37a668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a66c:
    // 0x37a66c: 0x1e509bc  .word       0x01E509BC                   # dsll32      $at, $a1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << (32 + 6));
label_37a670:
    // 0x37a670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a674:
    // 0x37a674: 0x1e510bd  .word       0x01E510BD                   # INVALID     $t7, $a1, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a674u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A674 raw=0x01E510BD");
label_37a678:
    // 0x37a678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a67c:
    // 0x37a67c: 0x1e5194a  .word       0x01E5194A                   # movz        $v1, $t7, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a67cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37a680:
    // 0x37a680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a684:
    // 0x37a684: 0x1e609bc  .word       0x01E609BC                   # dsll32      $at, $a2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 6) << (32 + 6));
label_37a688:
    // 0x37a688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a68c:
    // 0x37a68c: 0x1e610bd  .word       0x01E610BD                   # INVALID     $t7, $a2, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a68cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A68C raw=0x01E610BD");
label_37a690:
    // 0x37a690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a694:
    // 0x37a694: 0x1e6198a  .word       0x01E6198A                   # movz        $v1, $t7, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a694u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37a698:
    // 0x37a698: 0x3e12009  .word       0x03E12009                   # jalr        $a0, $ra # 00010000 <InstrIdType: CPU_SPECIAL>
label_37a69c:
    if (ctx->pc == 0x37A69Cu) {
        ctx->pc = 0x37A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A698u;
        // 0x37a69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A6A0u;
        goto label_37a6a0;
    }
    ctx->pc = 0x37A698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 4, 0x37A6A0u);
        ctx->pc = 0x37A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A698u;
        // 0x37a69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A698u, 0x37A6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A6A0u;
label_37a6a0:
    // 0x37a6a0: 0x3e1280a  movz        $a1, $ra, $at
    ctx->pc = 0x37a6a0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 31));
label_37a6a4:
    // 0x37a6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6a8:
    // 0x37a6a8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37a6a8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37A6A8 raw=0x48007800");
label_37a6ac:
    // 0x37a6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6b0:
    // 0x37a6b0: 0x3e1300b  movn        $a2, $ra, $at
    ctx->pc = 0x37a6b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 31));
label_37a6b4:
    // 0x37a6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6b8:
    // 0x37a6b8: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x37a6b8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
label_37a6bc:
    // 0x37a6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6c0:
    // 0x37a6c0: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37a6c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
label_37a6c4:
    // 0x37a6c4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37a6c4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_37a6c8:
    // 0x37a6c8: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a6c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37A6C8 raw=0x01F60037");
label_37a6cc:
    // 0x37a6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6d0:
    // 0x37a6d0: 0x1fd0809  .word       0x01FD0809                   # jalr        $at, $t7 # 001D0000 <InstrIdType: CPU_SPECIAL>
label_37a6d4:
    if (ctx->pc == 0x37A6D4u) {
        ctx->pc = 0x37A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6D0u;
        // 0x37a6d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A6D8u;
        goto label_37a6d8;
    }
    ctx->pc = 0x37A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 1, 0x37A6D8u);
        ctx->pc = 0x37A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6D0u;
        // 0x37a6d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A6D0u, 0x37A6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A6D8u;
label_37a6d8:
    // 0x37a6d8: 0x1fe080a  movz        $at, $t7, $fp
    ctx->pc = 0x37a6d8u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 15));
label_37a6dc:
    // 0x37a6dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6e0:
    // 0x37a6e0: 0x1ff080b  movn        $at, $t7, $ra
    ctx->pc = 0x37a6e0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 15));
label_37a6e4:
    // 0x37a6e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a6e8:
    // 0x37a6e8: 0x1f80807  srav        $at, $t8, $t7
    ctx->pc = 0x37a6e8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
label_37a6ec:
    // 0x37a6ec: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a6ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_37a6f0:
    // 0x37a6f0: 0x1f90803  .word       0x01F90803                   # sra         $at, $t9, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a6f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 25), 0));
label_37a6f4:
    // 0x37a6f4: 0x1c0b59e  .word       0x01C0B59E                   # ddiv        $s6, $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a6f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A6F4 raw=0x01C0B59E");
label_37a6f8:
    // 0x37a6f8: 0x1fa0804  sllv        $at, $k0, $t7
    ctx->pc = 0x37a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_37a6fc:
    // 0x37a6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a700:
    // 0x37a700: 0x1fb0805  .word       0x01FB0805                   # INVALID     $t7, $k1, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a700u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37A700 raw=0x01FB0805");
label_37a704:
    // 0x37a704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a708:
    // 0x37a708: 0x1fc0806  srlv        $at, $gp, $t7
    ctx->pc = 0x37a708u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 28), GPR_U32(ctx, 15) & 0x1F));
label_37a70c:
    // 0x37a70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a710:
    // 0x37a710: 0x1f70808  .word       0x01F70808                   # jr          $t7 # 00170800 <InstrIdType: CPU_SPECIAL>
label_37a714:
    if (ctx->pc == 0x37A714u) {
        ctx->pc = 0x37A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A710u;
        // 0x37a714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A718u;
        goto label_37a718;
    }
    ctx->pc = 0x37A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x37A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A710u;
        // 0x37a714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37A718u;
label_37a718:
    // 0x37a718: 0x8440034  j           func_11000D0
label_37a71c:
    if (ctx->pc == 0x37A71Cu) {
        ctx->pc = 0x37A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A718u;
        // 0x37a71c: 0x1f6c62a  .word       0x01F6C62A                   # slt         $t8, $t7, $s6 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A720u;
        goto label_37a720;
    }
    ctx->pc = 0x37A718u;
    ctx->pc = 0x37A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A718u;
    // 0x37a71c: 0x1f6c62a  .word       0x01F6C62A                   # slt         $t8, $t7, $s6 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37A718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A720u;
label_37a720:
    // 0x37a720: 0x80042934  lb          $a0, 0x2934($zero)
    ctx->pc = 0x37a720u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x2934u));
label_37a724:
    // 0x37a724: 0x1f6ce6a  .word       0x01F6CE6A                   # slt         $t9, $t7, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a724u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37a728:
    // 0x37a728: 0x9030033  j           func_40C00CC
label_37a72c:
    if (ctx->pc == 0x37A72Cu) {
        ctx->pc = 0x37A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A728u;
        // 0x37a72c: 0x1f6d6aa  .word       0x01F6D6AA                   # slt         $k0, $t7, $s6 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A730u;
        goto label_37a730;
    }
    ctx->pc = 0x37A728u;
    ctx->pc = 0x37A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A728u;
    // 0x37a72c: 0x1f6d6aa  .word       0x01F6D6AA                   # slt         $k0, $t7, $s6 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x37A728u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A730u;
label_37a730:
    // 0x37a730: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37a730u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
label_37a734:
    // 0x37a734: 0x1f6deea  .word       0x01F6DEEA                   # slt         $k1, $t7, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a734u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37a738:
    // 0x37a738: 0x8810033  j           func_20400CC
label_37a73c:
    if (ctx->pc == 0x37A73Cu) {
        ctx->pc = 0x37A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A738u;
        // 0x37a73c: 0x1f6e72a  .word       0x01F6E72A                   # slt         $gp, $t7, $s6 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A740u;
        goto label_37a740;
    }
    ctx->pc = 0x37A738u;
    ctx->pc = 0x37A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A738u;
    // 0x37a73c: 0x1f6e72a  .word       0x01F6E72A                   # slt         $gp, $t7, $s6 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400CCu, 0x37A738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A740u;
label_37a740:
    // 0x37a740: 0x80040870  lb          $a0, 0x870($zero)
    ctx->pc = 0x37a740u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x870u));
label_37a744:
    // 0x37a744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a748:
    // 0x37a748: 0x8260033  j           func_9800CC
label_37a74c:
    if (ctx->pc == 0x37A74Cu) {
        ctx->pc = 0x37A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A748u;
        // 0x37a74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A750u;
        goto label_37a750;
    }
    ctx->pc = 0x37A748u;
    ctx->pc = 0x37A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A748u;
    // 0x37a74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9800CCu, 0x37A748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A750u;
label_37a750:
    // 0x37a750: 0x800431b0  lb          $a0, 0x31B0($zero)
    ctx->pc = 0x37a750u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x31B0u));
label_37a754:
    // 0x37a754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a758:
    // 0x37a758: 0x3c000000  lui         $zero, 0x0
    ctx->pc = 0x37a758u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_37a75c:
    // 0x37a75c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37a75cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_37a760:
    // 0x37a760: 0x8220034  j           func_8800D0
label_37a764:
    if (ctx->pc == 0x37A764u) {
        ctx->pc = 0x37A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A760u;
        // 0x37a764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A768u;
        goto label_37a768;
    }
    ctx->pc = 0x37A760u;
    ctx->pc = 0x37A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A760u;
    // 0x37a764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8800D0u, 0x37A760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A768u;
label_37a768:
    // 0x37a768: 0x800510b0  lb          $a1, 0x10B0($zero)
    ctx->pc = 0x37a768u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x10B0u));
label_37a76c:
    // 0x37a76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a770:
    // 0x37a770: 0x8441fff  j           func_1107FFC
label_37a774:
    if (ctx->pc == 0x37A774u) {
        ctx->pc = 0x37A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A770u;
        // 0x37a774: 0x20b5de  .word       0x0020B5DE                   # ddiv        $s6, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A774 raw=0x0020B5DE");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A778u;
        goto label_37a778;
    }
    ctx->pc = 0x37A770u;
    ctx->pc = 0x37A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A770u;
    // 0x37a774: 0x20b5de  .word       0x0020B5DE                   # ddiv        $s6, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A774 raw=0x0020B5DE");
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107FFCu, 0x37A770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37A778u;
label_37a778:
    // 0x37a778: 0x12082008  beq         $s0, $t0, . + 4 + (0x2008 << 2)
label_37a77c:
    if (ctx->pc == 0x37A77Cu) {
        ctx->pc = 0x37A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A778u;
        // 0x37a77c: 0x1e0ef5e  .word       0x01E0EF5E                   # ddiv        $sp, $t7, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A77C raw=0x01E0EF5E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A780u;
        goto label_37a780;
    }
    ctx->pc = 0x37A778u;
    {
        const bool branch_taken_0x37a778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A778u;
        // 0x37a77c: 0x1e0ef5e  .word       0x01E0EF5E                   # ddiv        $sp, $t7, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A77C raw=0x01E0EF5E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a778) {
            ctx->pc = 0x38279Cu;
            return;
        }
    }
    ctx->pc = 0x37A780u;
label_37a780:
    // 0x37a780: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_37a784:
    if (ctx->pc == 0x37A784u) {
        ctx->pc = 0x37A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A780u;
        // 0x37a784: 0x1e0f79e  .word       0x01E0F79E                   # ddiv        $fp, $t7, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A784 raw=0x01E0F79E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A788u;
        goto label_37a788;
    }
    ctx->pc = 0x37A780u;
    {
        const bool branch_taken_0x37a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A780u;
        // 0x37a784: 0x1e0f79e  .word       0x01E0F79E                   # ddiv        $fp, $t7, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A784 raw=0x01E0F79E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a780) {
            ctx->pc = 0x37E788u;
            return;
        }
    }
    ctx->pc = 0x37A788u;
label_37a788:
    // 0x37a788: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
label_37a78c:
    if (ctx->pc == 0x37A78Cu) {
        ctx->pc = 0x37A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A788u;
        // 0x37a78c: 0x1e0ffde  .word       0x01E0FFDE                   # ddiv        $ra, $t7, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A78C raw=0x01E0FFDE");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A790u;
        goto label_37a790;
    }
    ctx->pc = 0x37A788u;
    {
        const bool branch_taken_0x37a788 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37a788) {
            ctx->pc = 0x37A78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A788u;
            // 0x37a78c: 0x1e0ffde  .word       0x01E0FFDE                   # ddiv        $ra, $t7, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37A78C raw=0x01E0FFDE");
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A794u;
            return;
        }
    }
    ctx->pc = 0x37A790u;
label_37a790:
    // 0x37a790: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a790u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a794:
    // 0x37a794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a798:
    // 0x37a798: 0x10040008  beq         $zero, $a0, . + 4 + (0x8 << 2)
label_37a79c:
    if (ctx->pc == 0x37A79Cu) {
        ctx->pc = 0x37A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A798u;
        // 0x37a79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7A0u;
        goto label_37a7a0;
    }
    ctx->pc = 0x37A798u;
    {
        const bool branch_taken_0x37a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A798u;
        // 0x37a79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a798) {
            ctx->pc = 0x37A7BCu;
            goto label_37a7bc;
        }
    }
    ctx->pc = 0x37A7A0u;
label_37a7a0:
    // 0x37a7a0: 0x800408f0  lb          $a0, 0x8F0($zero)
    ctx->pc = 0x37a7a0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x8F0u));
label_37a7a4:
    // 0x37a7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37a7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37a7a8:
    // 0x37a7a8: 0x12031802  beq         $s0, $v1, . + 4 + (0x1802 << 2)
label_37a7ac:
    if (ctx->pc == 0x37A7ACu) {
        ctx->pc = 0x37A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7A8u;
        // 0x37a7ac: 0x1e00598  .word       0x01E00598                   # mult        $zero, $t7, $zero # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7B0u;
        goto label_37a7b0;
    }
    ctx->pc = 0x37A7A8u;
    {
        const bool branch_taken_0x37a7a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7A8u;
        // 0x37a7ac: 0x1e00598  .word       0x01E00598                   # mult        $zero, $t7, $zero # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7a8) {
            ctx->pc = 0x3807B4u;
            return;
        }
    }
    ctx->pc = 0x37A7B0u;
label_37a7b0:
    // 0x37a7b0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a7b0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a7b4:
    // 0x37a7b4: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a7b8:
    // 0x37a7b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7bc:
    // 0x37a7bc: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7bcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a7c0:
    // 0x37a7c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7c4:
    // 0x37a7c4: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A7C4 raw=0x01E2F0BD");
label_37a7c8:
    // 0x37a7c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7cc:
    // 0x37a7cc: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a7d0:
    // 0x37a7d0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a7d0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a7d4:
    // 0x37a7d4: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a7d8:
    // 0x37a7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7dc:
    // 0x37a7dc: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7dcu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a7e0:
    // 0x37a7e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7e4:
    // 0x37a7e4: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7e4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a7e8:
    // 0x37a7e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7ec:
    // 0x37a7ec: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A7EC raw=0x01E2F0BD");
label_37a7f0:
    // 0x37a7f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a7f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a7f4:
    // 0x37a7f4: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a7f8:
    // 0x37a7f8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a7f8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a7fc:
    // 0x37a7fc: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a800:
    // 0x37a800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a804:
    // 0x37a804: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a804u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37a808:
    // 0x37a808: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a808u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a80c:
    // 0x37a80c: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a80cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A80C raw=0x01E4D0BD");
label_37a810:
    // 0x37a810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a814:
    // 0x37a814: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a814u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37a818:
    // 0x37a818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a81c:
    // 0x37a81c: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a81cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37a820:
    // 0x37a820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a824:
    // 0x37a824: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a824u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37a828:
    // 0x37a828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a82c:
    // 0x37a82c: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a82cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a830:
    // 0x37a830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a834:
    // 0x37a834: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a834u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a838:
    // 0x37a838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a83c:
    // 0x37a83c: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a83cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A83C raw=0x01E2F0BD");
label_37a840:
    // 0x37a840: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37a840u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37a844:
    // 0x37a844: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a844u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a848:
    // 0x37a848: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a848u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a84c:
    // 0x37a84c: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a850:
    // 0x37a850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a854:
    // 0x37a854: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37a858:
    // 0x37a858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a85c:
    // 0x37a85c: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a85cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37a860:
    // 0x37a860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a864:
    // 0x37a864: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37a864u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37a868:
    // 0x37a868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a86c:
    // 0x37a86c: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a86cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37a870:
    // 0x37a870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a874:
    // 0x37a874: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a874u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37a878:
    // 0x37a878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a87c:
    // 0x37a87c: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a87cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A87C raw=0x01E4D0BD");
label_37a880:
    // 0x37a880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a884:
    // 0x37a884: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a884u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37a888:
    // 0x37a888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a88c:
    // 0x37a88c: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a88cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37a890:
    // 0x37a890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a894:
    // 0x37a894: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a894u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37a898:
    // 0x37a898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a89c:
    // 0x37a89c: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a89cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a8a0:
    // 0x37a8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8a4:
    // 0x37a8a4: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8a4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a8a8:
    // 0x37a8a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8ac:
    // 0x37a8ac: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A8AC raw=0x01E2F0BD");
label_37a8b0:
    // 0x37a8b0: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37a8b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37a8b4:
    // 0x37a8b4: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a8b8:
    // 0x37a8b8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a8b8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a8bc:
    // 0x37a8bc: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a8c0:
    // 0x37a8c0: 0x10021003  beq         $zero, $v0, . + 4 + (0x1003 << 2)
label_37a8c4:
    if (ctx->pc == 0x37A8C4u) {
        ctx->pc = 0x37A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8C0u;
        // 0x37a8c4: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A8C8u;
        goto label_37a8c8;
    }
    ctx->pc = 0x37A8C0u;
    {
        const bool branch_taken_0x37a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8C0u;
        // 0x37a8c4: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8c0) {
            ctx->pc = 0x37E8D0u;
            return;
        }
    }
    ctx->pc = 0x37A8C8u;
label_37a8c8:
    // 0x37a8c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8cc:
    // 0x37a8cc: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37a8d0:
    // 0x37a8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8d4:
    // 0x37a8d4: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37a8d8:
    // 0x37a8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8dc:
    // 0x37a8dc: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37a8dcu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37a8e0:
    // 0x37a8e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8e4:
    // 0x37a8e4: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37a8e8:
    // 0x37a8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8ec:
    // 0x37a8ec: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8ecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37a8f0:
    // 0x37a8f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8f4:
    // 0x37a8f4: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A8F4 raw=0x01E4D0BD");
label_37a8f8:
    // 0x37a8f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a8f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a8fc:
    // 0x37a8fc: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a8fcu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37a900:
    // 0x37a900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a904:
    // 0x37a904: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a904u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37a908:
    // 0x37a908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a90c:
    // 0x37a90c: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a90cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37a910:
    // 0x37a910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a914:
    // 0x37a914: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a914u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a918:
    // 0x37a918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a91c:
    // 0x37a91c: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a91cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a920:
    // 0x37a920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a924:
    // 0x37a924: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a924u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A924 raw=0x01E2F0BD");
label_37a928:
    // 0x37a928: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37a928u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37a92c:
    // 0x37a92c: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a92cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37a930:
    // 0x37a930: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a930u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a934:
    // 0x37a934: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a938:
    // 0x37a938: 0x3e23ffe  .word       0x03E23FFE                   # dsrl32      $a3, $v0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 31));
label_37a93c:
    // 0x37a93c: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a93cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37a940:
    // 0x37a940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a944:
    // 0x37a944: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a944u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37a948:
    // 0x37a948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a94c:
    // 0x37a94c: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a94cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37a950:
    // 0x37a950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a954:
    // 0x37a954: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37a954u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37a958:
    // 0x37a958: 0x10021003  beq         $zero, $v0, . + 4 + (0x1003 << 2)
label_37a95c:
    if (ctx->pc == 0x37A95Cu) {
        ctx->pc = 0x37A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A958u;
        // 0x37a95c: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A960u;
        goto label_37a960;
    }
    ctx->pc = 0x37A958u;
    {
        const bool branch_taken_0x37a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A958u;
        // 0x37a95c: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a958) {
            ctx->pc = 0x37E968u;
            return;
        }
    }
    ctx->pc = 0x37A960u;
label_37a960:
    // 0x37a960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a964:
    // 0x37a964: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a964u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37a968:
    // 0x37a968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a96c:
    // 0x37a96c: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a96cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A96C raw=0x01E4D0BD");
label_37a970:
    // 0x37a970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a974:
    // 0x37a974: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a974u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37a978:
    // 0x37a978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a97c:
    // 0x37a97c: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a97cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37a980:
    // 0x37a980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a984:
    // 0x37a984: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a984u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37a988:
    // 0x37a988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a98c:
    // 0x37a98c: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a98cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a990:
    // 0x37a990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a994:
    // 0x37a994: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a994u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37a998:
    // 0x37a998: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37a998u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37a99c:
    // 0x37a99c: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a99cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A99C raw=0x01E2F0BD");
label_37a9a0:
    // 0x37a9a0: 0x52030ff2  beql        $s0, $v1, . + 4 + (0xFF2 << 2)
label_37a9a4:
    if (ctx->pc == 0x37A9A4u) {
        ctx->pc = 0x37A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9A0u;
        // 0x37a9a4: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9A8u;
        goto label_37a9a8;
    }
    ctx->pc = 0x37A9A0u;
    {
        const bool branch_taken_0x37a9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37a9a0) {
            ctx->pc = 0x37A9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A9A0u;
            // 0x37a9a4: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E96Cu;
            return;
        }
    }
    ctx->pc = 0x37A9A8u;
label_37a9a8:
    // 0x37a9a8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37a9a8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37a9ac:
    // 0x37a9ac: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37a9b0:
    // 0x37a9b0: 0x3e23ffe  .word       0x03E23FFE                   # dsrl32      $a3, $v0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 31));
label_37a9b4:
    // 0x37a9b4: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37a9b8:
    // 0x37a9b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9bc:
    // 0x37a9bc: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37a9c0:
    // 0x37a9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9c4:
    // 0x37a9c4: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37a9c8:
    // 0x37a9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9cc:
    // 0x37a9cc: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37a9ccu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37a9d0:
    // 0x37a9d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9d4:
    // 0x37a9d4: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37a9d8:
    // 0x37a9d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9dc:
    // 0x37a9dc: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9dcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37a9e0:
    // 0x37a9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9e4:
    // 0x37a9e4: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37A9E4 raw=0x01E4D0BD");
label_37a9e8:
    // 0x37a9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9ec:
    // 0x37a9ec: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9ecu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37a9f0:
    // 0x37a9f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9f4:
    // 0x37a9f4: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9f4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37a9f8:
    // 0x37a9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37a9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37a9fc:
    // 0x37a9fc: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37a9fcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37aa00:
    // 0x37aa00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa04:
    // 0x37aa04: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa04u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37aa08:
    // 0x37aa08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa0c:
    // 0x37aa0c: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa0cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37aa10:
    // 0x37aa10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa14:
    // 0x37aa14: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AA14 raw=0x01E2F0BD");
label_37aa18:
    // 0x37aa18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa1c:
    // 0x37aa1c: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37aa20:
    // 0x37aa20: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37aa20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37aa24:
    // 0x37aa24: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37aa28:
    // 0x37aa28: 0x3e23801  .word       0x03E23801                   # INVALID     $ra, $v0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa28u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37AA28 raw=0x03E23801");
label_37aa2c:
    // 0x37aa2c: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37aa30:
    // 0x37aa30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa34:
    // 0x37aa34: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37aa38:
    // 0x37aa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa3c:
    // 0x37aa3c: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa3cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37aa40:
    // 0x37aa40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa44:
    // 0x37aa44: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37aa44u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37aa48:
    // 0x37aa48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa4c:
    // 0x37aa4c: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37aa50:
    // 0x37aa50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa54:
    // 0x37aa54: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa54u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37aa58:
    // 0x37aa58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa5c:
    // 0x37aa5c: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AA5C raw=0x01E4D0BD");
label_37aa60:
    // 0x37aa60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa64:
    // 0x37aa64: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa64u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37aa68:
    // 0x37aa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa6c:
    // 0x37aa6c: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa6cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37aa70:
    // 0x37aa70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa74:
    // 0x37aa74: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa74u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37aa78:
    // 0x37aa78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa7c:
    // 0x37aa7c: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa7cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37aa80:
    // 0x37aa80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa84:
    // 0x37aa84: 0x1e2e9bc  .word       0x01E2E9BC                   # dsll32      $sp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa84u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
label_37aa88:
    // 0x37aa88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aa88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aa8c:
    // 0x37aa8c: 0x1e2f0bd  .word       0x01E2F0BD                   # INVALID     $t7, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AA8C raw=0x01E2F0BD");
label_37aa90:
    // 0x37aa90: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37aa94:
    // 0x37aa94: 0x1e2f8ca  .word       0x01E2F8CA                   # movz        $ra, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37aa98:
    // 0x37aa98: 0x3e23804  sllv        $a3, $v0, $ra
    ctx->pc = 0x37aa98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_37aa9c:
    // 0x37aa9c: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aa9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37aaa0:
    // 0x37aaa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aaa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aaa4:
    // 0x37aaa4: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aaa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37aaa8:
    // 0x37aaa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aaa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aaac:
    // 0x37aaac: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aaacu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37aab0:
    // 0x37aab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aab4:
    // 0x37aab4: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37aab4u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37aab8:
    // 0x37aab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aabc:
    // 0x37aabc: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aabcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37aac0:
    // 0x37aac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aac4:
    // 0x37aac4: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aac4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37aac8:
    // 0x37aac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aacc:
    // 0x37aacc: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aaccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AACC raw=0x01E4D0BD");
label_37aad0:
    // 0x37aad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aad4:
    // 0x37aad4: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aad4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37aad8:
    // 0x37aad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aadc:
    // 0x37aadc: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aadcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37aae0:
    // 0x37aae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aae4:
    // 0x37aae4: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aae4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37aae8:
    // 0x37aae8: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37aaec:
    // 0x37aaec: 0x1e3b12b  .word       0x01E3B12B                   # sltu        $s6, $t7, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aaecu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37aaf0:
    // 0x37aaf0: 0x3e23807  srav        $a3, $v0, $ra
    ctx->pc = 0x37aaf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_37aaf4:
    // 0x37aaf4: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aaf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37aaf8:
    // 0x37aaf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aaf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aafc:
    // 0x37aafc: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aafcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37ab00:
    // 0x37ab00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab04:
    // 0x37ab04: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab04u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37ab08:
    // 0x37ab08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab0c:
    // 0x37ab0c: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37ab0cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37ab10:
    // 0x37ab10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab14:
    // 0x37ab14: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab14u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37ab18:
    // 0x37ab18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab1c:
    // 0x37ab1c: 0x1e4c9bc  .word       0x01E4C9BC                   # dsll32      $t9, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab1cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 6));
label_37ab20:
    // 0x37ab20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab24:
    // 0x37ab24: 0x1e4d0bd  .word       0x01E4D0BD                   # INVALID     $t7, $a0, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AB24 raw=0x01E4D0BD");
label_37ab28:
    // 0x37ab28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab2c:
    // 0x37ab2c: 0x1e4d8be  .word       0x01E4D8BE                   # dsrl32      $k1, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab2cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 4) >> (32 + 2));
label_37ab30:
    // 0x37ab30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab34:
    // 0x37ab34: 0x1e4e0bf  .word       0x01E4E0BF                   # dsra32      $gp, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab34u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 4) >> (32 + 2));
label_37ab38:
    // 0x37ab38: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37ab38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37ab3c:
    // 0x37ab3c: 0x1e0c14b  .word       0x01E0C14B                   # movn        $t8, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37ab40:
    // 0x37ab40: 0x3e2380a  movz        $a3, $ra, $v0
    ctx->pc = 0x37ab40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 31));
label_37ab44:
    // 0x37ab44: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37ab48:
    // 0x37ab48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab4c:
    // 0x37ab4c: 0x1e6493c  .word       0x01E6493C                   # dsll32      $t1, $a2, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
label_37ab50:
    // 0x37ab50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab54:
    // 0x37ab54: 0x3731aa  .word       0x003731AA                   # slt         $a2, $at, $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab54u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37ab58:
    // 0x37ab58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab5c:
    // 0x37ab5c: 0x1c62968  .word       0x01C62968                   # mfsa        $a1 # 01C60140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37ab5cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_37ab60:
    // 0x37ab60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ab60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ab64:
    // 0x37ab64: 0x1c5b9af  .word       0x01C5B9AF                   # dsubu       $s7, $t6, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab64u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 5));
label_37ab68:
    // 0x37ab68: 0x3e2380d  break       994, 224
    ctx->pc = 0x37ab68u;
    runtime->handleBreak(rdram, ctx);
label_37ab6c:
    // 0x37ab6c: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
label_37ab70:
    // 0x37ab70: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37ab70u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37AB70 raw=0x48007800");
label_37ab74:
    // 0x37ab74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ab78:
    // 0x37ab78: 0x3e23810  .word       0x03E23810                   # mfhi        $a3 # 03E20000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab78u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_37ab7c:
    // 0x37ab7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ab80:
    // 0x37ab80: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_37ab84:
    // 0x37ab84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ab88:
    // 0x37ab88: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37AB88 raw=0x01E20801");
label_37ab8c:
    // 0x37ab8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ab90:
    // 0x37ab90: 0x1e30802  .word       0x01E30802                   # srl         $at, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_37ab94:
    // 0x37ab94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ab98:
    // 0x37ab98: 0x1e40000  .word       0x01E40000                   # sll         $zero, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ab98u;
    
label_37ab9c:
    // 0x37ab9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ab9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37aba0:
    // 0x37aba0: 0x1e50001  .word       0x01E50001                   # INVALID     $t7, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aba0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37ABA0 raw=0x01E50001");
label_37aba4:
    // 0x37aba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37aba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37aba8:
    // 0x37aba8: 0x1e60002  .word       0x01E60002                   # srl         $zero, $a2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aba8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_37abac:
    // 0x37abac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abb0:
    // 0x37abb0: 0x81c0273f  lb          $zero, 0x273F($t6)
    ctx->pc = 0x37abb0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 10047)));
label_37abb4:
    // 0x37abb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abb8:
    // 0x37abb8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37abb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37abbc:
    // 0x37abbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abc0:
    // 0x37abc0: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37abc0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37abc4:
    // 0x37abc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abc8:
    // 0x37abc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37abc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37abcc:
    // 0x37abcc: 0x1df212a  .word       0x01DF212A                   # slt         $a0, $t6, $ra # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37abccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37abd0:
    // 0x37abd0: 0x81c02f3f  lb          $zero, 0x2F3F($t6)
    ctx->pc = 0x37abd0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 12095)));
label_37abd4:
    // 0x37abd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abd8:
    // 0x37abd8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37abd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37abdc:
    // 0x37abdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abe0:
    // 0x37abe0: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37abe0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37abe4:
    // 0x37abe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abe8:
    // 0x37abe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37abe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37abec:
    // 0x37abec: 0x1df296a  .word       0x01DF296A                   # slt         $a1, $t6, $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37abecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37abf0:
    // 0x37abf0: 0x81c0373f  lb          $zero, 0x373F($t6)
    ctx->pc = 0x37abf0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 14143)));
label_37abf4:
    // 0x37abf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37abf8:
    // 0x37abf8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37abf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
label_37abfc:
    // 0x37abfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37abfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac00:
    // 0x37ac00: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37ac00u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
label_37ac04:
    // 0x37ac04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac08:
    // 0x37ac08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac0c:
    // 0x37ac0c: 0x1df31aa  .word       0x01DF31AA                   # slt         $a2, $t6, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac0cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_37ac10:
    // 0x37ac10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac14:
    // 0x37ac14: 0x1e409bc  .word       0x01E409BC                   # dsll32      $at, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 4) << (32 + 6));
label_37ac18:
    // 0x37ac18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac1c:
    // 0x37ac1c: 0x1e410bd  .word       0x01E410BD                   # INVALID     $t7, $a0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AC1C raw=0x01E410BD");
label_37ac20:
    // 0x37ac20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac24:
    // 0x37ac24: 0x1e4190a  .word       0x01E4190A                   # movz        $v1, $t7, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac24u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37ac28:
    // 0x37ac28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac2c:
    // 0x37ac2c: 0x1e509bc  .word       0x01E509BC                   # dsll32      $at, $a1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << (32 + 6));
label_37ac30:
    // 0x37ac30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac34:
    // 0x37ac34: 0x1e510bd  .word       0x01E510BD                   # INVALID     $t7, $a1, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AC34 raw=0x01E510BD");
label_37ac38:
    // 0x37ac38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac3c:
    // 0x37ac3c: 0x1e5194a  .word       0x01E5194A                   # movz        $v1, $t7, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac3cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37ac40:
    // 0x37ac40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac44:
    // 0x37ac44: 0x1e609bc  .word       0x01E609BC                   # dsll32      $at, $a2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 6) << (32 + 6));
label_37ac48:
    // 0x37ac48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac4c:
    // 0x37ac4c: 0x1e610bd  .word       0x01E610BD                   # INVALID     $t7, $a2, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AC4C raw=0x01E610BD");
label_37ac50:
    // 0x37ac50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ac50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ac54:
    // 0x37ac54: 0x1e6198a  .word       0x01E6198A                   # movz        $v1, $t7, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac54u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_37ac58:
    // 0x37ac58: 0x3e12009  .word       0x03E12009                   # jalr        $a0, $ra # 00010000 <InstrIdType: CPU_SPECIAL>
label_37ac5c:
    if (ctx->pc == 0x37AC5Cu) {
        ctx->pc = 0x37AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC58u;
        // 0x37ac5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC60u;
        goto label_37ac60;
    }
    ctx->pc = 0x37AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 4, 0x37AC60u);
        ctx->pc = 0x37AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC58u;
        // 0x37ac5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AC58u, 0x37AC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37AC60u;
label_37ac60:
    // 0x37ac60: 0x3e1280a  movz        $a1, $ra, $at
    ctx->pc = 0x37ac60u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 31));
label_37ac64:
    // 0x37ac64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac68:
    // 0x37ac68: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37ac68u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37AC68 raw=0x48007800");
label_37ac6c:
    // 0x37ac6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac70:
    // 0x37ac70: 0x3e1300b  movn        $a2, $ra, $at
    ctx->pc = 0x37ac70u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 31));
label_37ac74:
    // 0x37ac74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac78:
    // 0x37ac78: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37ac78u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
label_37ac7c:
    // 0x37ac7c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37ac7cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_37ac80:
    // 0x37ac80: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x37ac80u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
label_37ac84:
    // 0x37ac84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac88:
    // 0x37ac88: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ac88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37AC88 raw=0x01F60037");
label_37ac8c:
    // 0x37ac8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ac90:
    // 0x37ac90: 0x1fd0809  .word       0x01FD0809                   # jalr        $at, $t7 # 001D0000 <InstrIdType: CPU_SPECIAL>
label_37ac94:
    if (ctx->pc == 0x37AC94u) {
        ctx->pc = 0x37AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC90u;
        // 0x37ac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC98u;
        goto label_37ac98;
    }
    ctx->pc = 0x37AC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 1, 0x37AC98u);
        ctx->pc = 0x37AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC90u;
        // 0x37ac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AC90u, 0x37AC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37AC98u;
label_37ac98:
    // 0x37ac98: 0x1fe080a  movz        $at, $t7, $fp
    ctx->pc = 0x37ac98u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 15));
label_37ac9c:
    // 0x37ac9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ac9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37aca0:
    // 0x37aca0: 0x1ff080b  movn        $at, $t7, $ra
    ctx->pc = 0x37aca0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 15));
label_37aca4:
    // 0x37aca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37aca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37aca8:
    // 0x37aca8: 0x1f90803  .word       0x01F90803                   # sra         $at, $t9, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aca8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 25), 0));
label_37acac:
    // 0x37acac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37acacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37acb0:
    // 0x37acb0: 0x1fa0804  sllv        $at, $k0, $t7
    ctx->pc = 0x37acb0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_37acb4:
    // 0x37acb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37acb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37acb8:
    // 0x37acb8: 0x1fb0805  .word       0x01FB0805                   # INVALID     $t7, $k1, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37acb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37ACB8 raw=0x01FB0805");
label_37acbc:
    // 0x37acbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37acbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37acc0:
    // 0x37acc0: 0x1fc0806  srlv        $at, $gp, $t7
    ctx->pc = 0x37acc0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 28), GPR_U32(ctx, 15) & 0x1F));
label_37acc4:
    // 0x37acc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37acc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37acc8:
    // 0x37acc8: 0x1f80807  srav        $at, $t8, $t7
    ctx->pc = 0x37acc8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
label_37accc:
    // 0x37accc: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37acccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_37acd0:
    // 0x37acd0: 0x1f70808  .word       0x01F70808                   # jr          $t7 # 00170800 <InstrIdType: CPU_SPECIAL>
label_37acd4:
    if (ctx->pc == 0x37ACD4u) {
        ctx->pc = 0x37ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACD0u;
        // 0x37acd4: 0x1c0b59e  .word       0x01C0B59E                   # ddiv        $s6, $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37ACD4 raw=0x01C0B59E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ACD8u;
        goto label_37acd8;
    }
    ctx->pc = 0x37ACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x37ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACD0u;
        // 0x37acd4: 0x1c0b59e  .word       0x01C0B59E                   # ddiv        $s6, $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37ACD4 raw=0x01C0B59E");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ACD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37ACD8u;
label_37acd8:
    // 0x37acd8: 0x8440034  j           func_11000D0
label_37acdc:
    if (ctx->pc == 0x37ACDCu) {
        ctx->pc = 0x37ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACD8u;
        // 0x37acdc: 0x1f6c62a  .word       0x01F6C62A                   # slt         $t8, $t7, $s6 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ACE0u;
        goto label_37ace0;
    }
    ctx->pc = 0x37ACD8u;
    ctx->pc = 0x37ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACD8u;
    // 0x37acdc: 0x1f6c62a  .word       0x01F6C62A                   # slt         $t8, $t7, $s6 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37ACD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37ACE0u;
label_37ace0:
    // 0x37ace0: 0x80042934  lb          $a0, 0x2934($zero)
    ctx->pc = 0x37ace0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x2934u));
label_37ace4:
    // 0x37ace4: 0x1f6ce6a  .word       0x01F6CE6A                   # slt         $t9, $t7, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ace4u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37ace8:
    // 0x37ace8: 0x9030033  j           func_40C00CC
label_37acec:
    if (ctx->pc == 0x37ACECu) {
        ctx->pc = 0x37ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACE8u;
        // 0x37acec: 0x1f6d6aa  .word       0x01F6D6AA                   # slt         $k0, $t7, $s6 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ACF0u;
        goto label_37acf0;
    }
    ctx->pc = 0x37ACE8u;
    ctx->pc = 0x37ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACE8u;
    // 0x37acec: 0x1f6d6aa  .word       0x01F6D6AA                   # slt         $k0, $t7, $s6 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x37ACE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37ACF0u;
label_37acf0:
    // 0x37acf0: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37acf0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
label_37acf4:
    // 0x37acf4: 0x1f6deea  .word       0x01F6DEEA                   # slt         $k1, $t7, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37acf4u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37acf8:
    // 0x37acf8: 0x8810033  j           func_20400CC
label_37acfc:
    if (ctx->pc == 0x37ACFCu) {
        ctx->pc = 0x37ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACF8u;
        // 0x37acfc: 0x1f6e72a  .word       0x01F6E72A                   # slt         $gp, $t7, $s6 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD00u;
        goto label_37ad00;
    }
    ctx->pc = 0x37ACF8u;
    ctx->pc = 0x37ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACF8u;
    // 0x37acfc: 0x1f6e72a  .word       0x01F6E72A                   # slt         $gp, $t7, $s6 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400CCu, 0x37ACF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37AD00u;
label_37ad00:
    // 0x37ad00: 0x3c000000  lui         $zero, 0x0
    ctx->pc = 0x37ad00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_37ad04:
    // 0x37ad04: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37ad04u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_37ad08:
    // 0x37ad08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ad0c:
    // 0x37ad0c: 0x20b5de  .word       0x0020B5DE                   # ddiv        $s6, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37AD0C raw=0x0020B5DE");
label_37ad10:
    // 0x37ad10: 0x80040870  lb          $a0, 0x870($zero)
    ctx->pc = 0x37ad10u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x870u));
label_37ad14:
    // 0x37ad14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ad14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ad18:
    // 0x37ad18: 0x8260033  j           func_9800CC
label_37ad1c:
    if (ctx->pc == 0x37AD1Cu) {
        ctx->pc = 0x37AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD18u;
        // 0x37ad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD20u;
        goto label_37ad20;
    }
    ctx->pc = 0x37AD18u;
    ctx->pc = 0x37AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD18u;
    // 0x37ad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9800CCu, 0x37AD18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37AD20u;
label_37ad20:
    // 0x37ad20: 0x800431b0  lb          $a0, 0x31B0($zero)
    ctx->pc = 0x37ad20u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x31B0u));
label_37ad24:
    // 0x37ad24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ad24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ad28:
    // 0x37ad28: 0x8220034  j           func_8800D0
label_37ad2c:
    if (ctx->pc == 0x37AD2Cu) {
        ctx->pc = 0x37AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD28u;
        // 0x37ad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD30u;
        goto label_37ad30;
    }
    ctx->pc = 0x37AD28u;
    ctx->pc = 0x37AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD28u;
    // 0x37ad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8800D0u, 0x37AD28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37AD30u;
label_37ad30:
    // 0x37ad30: 0x8441fff  j           func_1107FFC
label_37ad34:
    if (ctx->pc == 0x37AD34u) {
        ctx->pc = 0x37AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD30u;
        // 0x37ad34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD38u;
        goto label_37ad38;
    }
    ctx->pc = 0x37AD30u;
    ctx->pc = 0x37AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD30u;
    // 0x37ad34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107FFCu, 0x37AD30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37AD38u;
label_37ad38:
    // 0x37ad38: 0x12082007  beq         $s0, $t0, . + 4 + (0x2007 << 2)
label_37ad3c:
    if (ctx->pc == 0x37AD3Cu) {
        ctx->pc = 0x37AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD38u;
        // 0x37ad3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD40u;
        goto label_37ad40;
    }
    ctx->pc = 0x37AD38u;
    {
        const bool branch_taken_0x37ad38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD38u;
        // 0x37ad3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad38) {
            ctx->pc = 0x382D58u;
            return;
        }
    }
    ctx->pc = 0x37AD40u;
label_37ad40:
    // 0x37ad40: 0x800510b0  lb          $a1, 0x10B0($zero)
    ctx->pc = 0x37ad40u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x10B0u));
label_37ad44:
    // 0x37ad44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ad44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ad48:
    // 0x37ad48: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
label_37ad4c:
    if (ctx->pc == 0x37AD4Cu) {
        ctx->pc = 0x37AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD48u;
        // 0x37ad4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD50u;
        goto label_37ad50;
    }
    ctx->pc = 0x37AD48u;
    {
        const bool branch_taken_0x37ad48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37ad48) {
            ctx->pc = 0x37AD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AD48u;
            // 0x37ad4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD54u;
            return;
        }
    }
    ctx->pc = 0x37AD50u;
label_37ad50:
    // 0x37ad50: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_37ad54:
    if (ctx->pc == 0x37AD54u) {
        ctx->pc = 0x37AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD50u;
        // 0x37ad54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD58u;
        goto label_37ad58;
    }
    ctx->pc = 0x37AD50u;
    {
        const bool branch_taken_0x37ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD50u;
        // 0x37ad54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad50) {
            ctx->pc = 0x37ED58u;
            return;
        }
    }
    ctx->pc = 0x37AD58u;
label_37ad58:
    // 0x37ad58: 0x10040007  beq         $zero, $a0, . + 4 + (0x7 << 2)
label_37ad5c:
    if (ctx->pc == 0x37AD5Cu) {
        ctx->pc = 0x37AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD58u;
        // 0x37ad5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD60u;
        goto label_37ad60;
    }
    ctx->pc = 0x37AD58u;
    {
        const bool branch_taken_0x37ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD58u;
        // 0x37ad5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad58) {
            ctx->pc = 0x37AD78u;
            goto label_37ad78;
        }
    }
    ctx->pc = 0x37AD60u;
label_37ad60:
    // 0x37ad60: 0x800408f0  lb          $a0, 0x8F0($zero)
    ctx->pc = 0x37ad60u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x8F0u));
label_37ad64:
    // 0x37ad64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ad64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ad68:
    // 0x37ad68: 0x12031801  beq         $s0, $v1, . + 4 + (0x1801 << 2)
label_37ad6c:
    if (ctx->pc == 0x37AD6Cu) {
        ctx->pc = 0x37AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD68u;
        // 0x37ad6c: 0x1e00598  .word       0x01E00598                   # mult        $zero, $t7, $zero # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD70u;
        goto label_37ad70;
    }
    ctx->pc = 0x37AD68u;
    {
        const bool branch_taken_0x37ad68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD68u;
        // 0x37ad6c: 0x1e00598  .word       0x01E00598                   # mult        $zero, $t7, $zero # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad68) {
            ctx->pc = 0x380D70u;
            return;
        }
    }
    ctx->pc = 0x37AD70u;
label_37ad70:
    // 0x37ad70: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37ad70u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37ad74:
    // 0x37ad74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ad74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ad78:
    // 0x37ad78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ad78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ad7c:
    // 0x37ad7c: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad7cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37ad80:
    // 0x37ad80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ad80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ad84:
    // 0x37ad84: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AD84 raw=0x01E1F0BD");
label_37ad88:
    // 0x37ad88: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37ad88u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37ad8c:
    // 0x37ad8c: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad8cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37ad90:
    // 0x37ad90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ad90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ad94:
    // 0x37ad94: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad94u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37ad98:
    // 0x37ad98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ad98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ad9c:
    // 0x37ad9c: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ad9cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37ada0:
    // 0x37ada0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ada0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ada4:
    // 0x37ada4: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ada4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ADA4 raw=0x01E1F0BD");
label_37ada8:
    // 0x37ada8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37adac:
    // 0x37adac: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adacu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37adb0:
    // 0x37adb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37adb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37adb4:
    // 0x37adb4: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adb4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37adb8:
    // 0x37adb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37adb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37adbc:
    // 0x37adbc: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ADBC raw=0x01E3D0BD");
label_37adc0:
    // 0x37adc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37adc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37adc4:
    // 0x37adc4: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adc4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37adc8:
    // 0x37adc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37adc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37adcc:
    // 0x37adcc: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adccu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37add0:
    // 0x37add0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37add0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37add4:
    // 0x37add4: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37add4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37add8:
    // 0x37add8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37add8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37addc:
    // 0x37addc: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37addcu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37ade0:
    // 0x37ade0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ade0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ade4:
    // 0x37ade4: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ade4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37ade8:
    // 0x37ade8: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37ade8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37adec:
    // 0x37adec: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ADEC raw=0x01E1F0BD");
label_37adf0:
    // 0x37adf0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37adf0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37adf4:
    // 0x37adf4: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adf4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37adf8:
    // 0x37adf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37adf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37adfc:
    // 0x37adfc: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37adfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37ae00:
    // 0x37ae00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae04:
    // 0x37ae04: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37ae08:
    // 0x37ae08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae0c:
    // 0x37ae0c: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37ae0cu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37ae10:
    // 0x37ae10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae14:
    // 0x37ae14: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae14u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37ae18:
    // 0x37ae18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae1c:
    // 0x37ae1c: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae1cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37ae20:
    // 0x37ae20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae24:
    // 0x37ae24: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AE24 raw=0x01E3D0BD");
label_37ae28:
    // 0x37ae28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae2c:
    // 0x37ae2c: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae2cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37ae30:
    // 0x37ae30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae34:
    // 0x37ae34: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae34u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37ae38:
    // 0x37ae38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae3c:
    // 0x37ae3c: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37ae40:
    // 0x37ae40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae44:
    // 0x37ae44: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae44u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37ae48:
    // 0x37ae48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae4c:
    // 0x37ae4c: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae4cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37ae50:
    // 0x37ae50: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37ae50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37ae54:
    // 0x37ae54: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AE54 raw=0x01E1F0BD");
label_37ae58:
    // 0x37ae58: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37ae58u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37ae5c:
    // 0x37ae5c: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae5cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37ae60:
    // 0x37ae60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae64:
    // 0x37ae64: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37ae68:
    // 0x37ae68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae6c:
    // 0x37ae6c: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37ae70:
    // 0x37ae70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae74:
    // 0x37ae74: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37ae78:
    // 0x37ae78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae7c:
    // 0x37ae7c: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37ae7cu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37ae80:
    // 0x37ae80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae84:
    // 0x37ae84: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37ae88:
    // 0x37ae88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae8c:
    // 0x37ae8c: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae8cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37ae90:
    // 0x37ae90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae94:
    // 0x37ae94: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AE94 raw=0x01E3D0BD");
label_37ae98:
    // 0x37ae98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ae98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37ae9c:
    // 0x37ae9c: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ae9cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37aea0:
    // 0x37aea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aea4:
    // 0x37aea4: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aea4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37aea8:
    // 0x37aea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aeac:
    // 0x37aeac: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aeacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37aeb0:
    // 0x37aeb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aeb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aeb4:
    // 0x37aeb4: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aeb4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37aeb8:
    // 0x37aeb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aeb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aebc:
    // 0x37aebc: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aebcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37aec0:
    // 0x37aec0: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37aec0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37aec4:
    // 0x37aec4: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aec4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AEC4 raw=0x01E1F0BD");
label_37aec8:
    // 0x37aec8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37aec8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37aecc:
    // 0x37aecc: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aeccu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37aed0:
    // 0x37aed0: 0x3e23001  .word       0x03E23001                   # INVALID     $ra, $v0, 0x3001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aed0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37AED0 raw=0x03E23001");
label_37aed4:
    // 0x37aed4: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37aed8:
    // 0x37aed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aedc:
    // 0x37aedc: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aedcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37aee0:
    // 0x37aee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aee4:
    // 0x37aee4: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aee4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37aee8:
    // 0x37aee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aeec:
    // 0x37aeec: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37aeecu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37aef0:
    // 0x37aef0: 0x10021003  beq         $zero, $v0, . + 4 + (0x1003 << 2)
label_37aef4:
    if (ctx->pc == 0x37AEF4u) {
        ctx->pc = 0x37AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEF0u;
        // 0x37aef4: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AEF8u;
        goto label_37aef8;
    }
    ctx->pc = 0x37AEF0u;
    {
        const bool branch_taken_0x37aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEF0u;
        // 0x37aef4: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aef0) {
            ctx->pc = 0x37EF00u;
            return;
        }
    }
    ctx->pc = 0x37AEF8u;
label_37aef8:
    // 0x37aef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aefc:
    // 0x37aefc: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aefcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37af00:
    // 0x37af00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af04:
    // 0x37af04: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AF04 raw=0x01E3D0BD");
label_37af08:
    // 0x37af08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af0c:
    // 0x37af0c: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af0cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37af10:
    // 0x37af10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af14:
    // 0x37af14: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af14u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37af18:
    // 0x37af18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af1c:
    // 0x37af1c: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af1cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37af20:
    // 0x37af20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af24:
    // 0x37af24: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af24u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37af28:
    // 0x37af28: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37af28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37af2c:
    // 0x37af2c: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af2cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37af30:
    // 0x37af30: 0x52030ff3  beql        $s0, $v1, . + 4 + (0xFF3 << 2)
label_37af34:
    if (ctx->pc == 0x37AF34u) {
        ctx->pc = 0x37AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF30u;
        // 0x37af34: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AF34 raw=0x01E1F0BD");
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF38u;
        goto label_37af38;
    }
    ctx->pc = 0x37AF30u;
    {
        const bool branch_taken_0x37af30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37af30) {
            ctx->pc = 0x37AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AF30u;
            // 0x37af34: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AF34 raw=0x01E1F0BD");
            ctx->in_delay_slot = false;
            ctx->pc = 0x37EF00u;
            return;
        }
    }
    ctx->pc = 0x37AF38u;
label_37af38:
    // 0x37af38: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37af38u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37af3c:
    // 0x37af3c: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37af40:
    // 0x37af40: 0x3e23001  .word       0x03E23001                   # INVALID     $ra, $v0, 0x3001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37AF40 raw=0x03E23001");
label_37af44:
    // 0x37af44: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37af48:
    // 0x37af48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af4c:
    // 0x37af4c: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37af50:
    // 0x37af50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af54:
    // 0x37af54: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37af58:
    // 0x37af58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af5c:
    // 0x37af5c: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37af5cu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37af60:
    // 0x37af60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af64:
    // 0x37af64: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af64u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37af68:
    // 0x37af68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af6c:
    // 0x37af6c: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af6cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37af70:
    // 0x37af70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af74:
    // 0x37af74: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AF74 raw=0x01E3D0BD");
label_37af78:
    // 0x37af78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af7c:
    // 0x37af7c: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af7cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37af80:
    // 0x37af80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af84:
    // 0x37af84: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af84u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37af88:
    // 0x37af88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af8c:
    // 0x37af8c: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37af90:
    // 0x37af90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af94:
    // 0x37af94: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af94u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37af98:
    // 0x37af98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37af98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37af9c:
    // 0x37af9c: 0x1e1e9bc  .word       0x01E1E9BC                   # dsll32      $sp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37af9cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << (32 + 6));
label_37afa0:
    // 0x37afa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afa4:
    // 0x37afa4: 0x1e1f0bd  .word       0x01E1F0BD                   # INVALID     $t7, $at, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afa4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AFA4 raw=0x01E1F0BD");
label_37afa8:
    // 0x37afa8: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37afa8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37afac:
    // 0x37afac: 0x1e1f88a  .word       0x01E1F88A                   # movz        $ra, $t7, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afacu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
label_37afb0:
    // 0x37afb0: 0x3e23004  sllv        $a2, $v0, $ra
    ctx->pc = 0x37afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_37afb4:
    // 0x37afb4: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37afb8:
    // 0x37afb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afbc:
    // 0x37afbc: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37afc0:
    // 0x37afc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afc4:
    // 0x37afc4: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afc4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37afc8:
    // 0x37afc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afcc:
    // 0x37afcc: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37afccu;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37afd0:
    // 0x37afd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afd4:
    // 0x37afd4: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37afd8:
    // 0x37afd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afdc:
    // 0x37afdc: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afdcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37afe0:
    // 0x37afe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afe4:
    // 0x37afe4: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afe4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37AFE4 raw=0x01E3D0BD");
label_37afe8:
    // 0x37afe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37afe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37afec:
    // 0x37afec: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37afecu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37aff0:
    // 0x37aff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37aff4:
    // 0x37aff4: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37aff4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37aff8:
    // 0x37aff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37aff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37affc:
    // 0x37affc: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37affcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37b000:
    // 0x37b000: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37b000u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37b004:
    // 0x37b004: 0x1e2b0eb  .word       0x01E2B0EB                   # sltu        $s6, $t7, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b004u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37b008:
    // 0x37b008: 0x3e23007  srav        $a2, $v0, $ra
    ctx->pc = 0x37b008u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_37b00c:
    // 0x37b00c: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37b010:
    // 0x37b010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b014:
    // 0x37b014: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b014u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37b018:
    // 0x37b018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b01c:
    // 0x37b01c: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b01cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37b020:
    // 0x37b020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b024:
    // 0x37b024: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37b024u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37b028:
    // 0x37b028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b02c:
    // 0x37b02c: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b02cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37b030:
    // 0x37b030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b034:
    // 0x37b034: 0x1e3c9bc  .word       0x01E3C9BC                   # dsll32      $t9, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b034u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 6));
label_37b038:
    // 0x37b038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b03c:
    // 0x37b03c: 0x1e3d0bd  .word       0x01E3D0BD                   # INVALID     $t7, $v1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b03cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37B03C raw=0x01E3D0BD");
label_37b040:
    // 0x37b040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b044:
    // 0x37b044: 0x1e3d8be  .word       0x01E3D8BE                   # dsrl32      $k1, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b044u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) >> (32 + 2));
label_37b048:
    // 0x37b048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b04c:
    // 0x37b04c: 0x1e3e0bf  .word       0x01E3E0BF                   # dsra32      $gp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b04cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 3) >> (32 + 2));
label_37b050:
    // 0x37b050: 0x81e9337c  lb          $t1, 0x337C($t7)
    ctx->pc = 0x37b050u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_37b054:
    // 0x37b054: 0x1e0c10b  .word       0x01E0C10B                   # movn        $t8, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b054u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 15));
label_37b058:
    // 0x37b058: 0x3e2300a  movz        $a2, $ra, $v0
    ctx->pc = 0x37b058u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 31));
label_37b05c:
    // 0x37b05c: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37b060:
    // 0x37b060: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b064:
    // 0x37b064: 0x1e5493c  .word       0x01E5493C                   # dsll32      $t1, $a1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b064u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 4));
label_37b068:
    // 0x37b068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b06c:
    // 0x37b06c: 0x37296a  .word       0x0037296A                   # slt         $a1, $at, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b06cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37b070:
    // 0x37b070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37b070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37b074:
    // 0x37b074: 0x1c52128  .word       0x01C52128                   # mfsa        $a0 # 01C50100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37b074u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_37b078:
    // 0x37b078: 0x3e2300d  break       994, 192
    ctx->pc = 0x37b078u;
    runtime->handleBreak(rdram, ctx);
label_37b07c:
    // 0x37b07c: 0x1c4b96f  .word       0x01C4B96F                   # dsubu       $s7, $t6, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b07cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) - GPR_U64(ctx, 4));
label_37b080:
    // 0x37b080: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37b080u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37B080 raw=0x48007800");
label_37b084:
    // 0x37b084: 0x1e6297c  .word       0x01E6297C                   # dsll32      $a1, $a2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 5));
label_37b088:
    // 0x37b088: 0x3e23010  .word       0x03E23010                   # mfhi        $a2 # 03E20000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37b088u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_37b08c:
    // 0x37b08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37b08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37b090u;
}
