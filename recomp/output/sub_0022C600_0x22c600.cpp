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

// Function: sub_0022C600
// Address: 0x22c600 - 0x22ce78
void sub_0022C600_0x22c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C600_0x22c600");
#endif

    switch (ctx->pc) {
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        case 0x22c638u: goto label_22c638;
        case 0x22c63cu: goto label_22c63c;
        case 0x22c640u: goto label_22c640;
        case 0x22c644u: goto label_22c644;
        case 0x22c648u: goto label_22c648;
        case 0x22c64cu: goto label_22c64c;
        case 0x22c650u: goto label_22c650;
        case 0x22c654u: goto label_22c654;
        case 0x22c658u: goto label_22c658;
        case 0x22c65cu: goto label_22c65c;
        case 0x22c660u: goto label_22c660;
        case 0x22c664u: goto label_22c664;
        case 0x22c668u: goto label_22c668;
        case 0x22c66cu: goto label_22c66c;
        case 0x22c670u: goto label_22c670;
        case 0x22c674u: goto label_22c674;
        case 0x22c678u: goto label_22c678;
        case 0x22c67cu: goto label_22c67c;
        case 0x22c680u: goto label_22c680;
        case 0x22c684u: goto label_22c684;
        case 0x22c688u: goto label_22c688;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c690u: goto label_22c690;
        case 0x22c694u: goto label_22c694;
        case 0x22c698u: goto label_22c698;
        case 0x22c69cu: goto label_22c69c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6acu: goto label_22c6ac;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6b4u: goto label_22c6b4;
        case 0x22c6b8u: goto label_22c6b8;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6c4u: goto label_22c6c4;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6ccu: goto label_22c6cc;
        case 0x22c6d0u: goto label_22c6d0;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6dcu: goto label_22c6dc;
        case 0x22c6e0u: goto label_22c6e0;
        case 0x22c6e4u: goto label_22c6e4;
        case 0x22c6e8u: goto label_22c6e8;
        case 0x22c6ecu: goto label_22c6ec;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c6f4u: goto label_22c6f4;
        case 0x22c6f8u: goto label_22c6f8;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c700u: goto label_22c700;
        case 0x22c704u: goto label_22c704;
        case 0x22c708u: goto label_22c708;
        case 0x22c70cu: goto label_22c70c;
        case 0x22c710u: goto label_22c710;
        case 0x22c714u: goto label_22c714;
        case 0x22c718u: goto label_22c718;
        case 0x22c71cu: goto label_22c71c;
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        case 0x22c784u: goto label_22c784;
        case 0x22c788u: goto label_22c788;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c790u: goto label_22c790;
        case 0x22c794u: goto label_22c794;
        case 0x22c798u: goto label_22c798;
        case 0x22c79cu: goto label_22c79c;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7a4u: goto label_22c7a4;
        case 0x22c7a8u: goto label_22c7a8;
        case 0x22c7acu: goto label_22c7ac;
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7b8u: goto label_22c7b8;
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7c4u: goto label_22c7c4;
        case 0x22c7c8u: goto label_22c7c8;
        case 0x22c7ccu: goto label_22c7cc;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7d4u: goto label_22c7d4;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7dcu: goto label_22c7dc;
        case 0x22c7e0u: goto label_22c7e0;
        case 0x22c7e4u: goto label_22c7e4;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7f0u: goto label_22c7f0;
        case 0x22c7f4u: goto label_22c7f4;
        case 0x22c7f8u: goto label_22c7f8;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c800u: goto label_22c800;
        case 0x22c804u: goto label_22c804;
        case 0x22c808u: goto label_22c808;
        case 0x22c80cu: goto label_22c80c;
        case 0x22c810u: goto label_22c810;
        case 0x22c814u: goto label_22c814;
        case 0x22c818u: goto label_22c818;
        case 0x22c81cu: goto label_22c81c;
        case 0x22c820u: goto label_22c820;
        case 0x22c824u: goto label_22c824;
        case 0x22c828u: goto label_22c828;
        case 0x22c82cu: goto label_22c82c;
        case 0x22c830u: goto label_22c830;
        case 0x22c834u: goto label_22c834;
        case 0x22c838u: goto label_22c838;
        case 0x22c83cu: goto label_22c83c;
        case 0x22c840u: goto label_22c840;
        case 0x22c844u: goto label_22c844;
        case 0x22c848u: goto label_22c848;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c850u: goto label_22c850;
        case 0x22c854u: goto label_22c854;
        case 0x22c858u: goto label_22c858;
        case 0x22c85cu: goto label_22c85c;
        case 0x22c860u: goto label_22c860;
        case 0x22c864u: goto label_22c864;
        case 0x22c868u: goto label_22c868;
        case 0x22c86cu: goto label_22c86c;
        case 0x22c870u: goto label_22c870;
        case 0x22c874u: goto label_22c874;
        case 0x22c878u: goto label_22c878;
        case 0x22c87cu: goto label_22c87c;
        case 0x22c880u: goto label_22c880;
        case 0x22c884u: goto label_22c884;
        case 0x22c888u: goto label_22c888;
        case 0x22c88cu: goto label_22c88c;
        case 0x22c890u: goto label_22c890;
        case 0x22c894u: goto label_22c894;
        case 0x22c898u: goto label_22c898;
        case 0x22c89cu: goto label_22c89c;
        case 0x22c8a0u: goto label_22c8a0;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8acu: goto label_22c8ac;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c8b4u: goto label_22c8b4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8bcu: goto label_22c8bc;
        case 0x22c8c0u: goto label_22c8c0;
        case 0x22c8c4u: goto label_22c8c4;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c8ccu: goto label_22c8cc;
        case 0x22c8d0u: goto label_22c8d0;
        case 0x22c8d4u: goto label_22c8d4;
        case 0x22c8d8u: goto label_22c8d8;
        case 0x22c8dcu: goto label_22c8dc;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8e4u: goto label_22c8e4;
        case 0x22c8e8u: goto label_22c8e8;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c8f0u: goto label_22c8f0;
        case 0x22c8f4u: goto label_22c8f4;
        case 0x22c8f8u: goto label_22c8f8;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c900u: goto label_22c900;
        case 0x22c904u: goto label_22c904;
        case 0x22c908u: goto label_22c908;
        case 0x22c90cu: goto label_22c90c;
        case 0x22c910u: goto label_22c910;
        case 0x22c914u: goto label_22c914;
        case 0x22c918u: goto label_22c918;
        case 0x22c91cu: goto label_22c91c;
        case 0x22c920u: goto label_22c920;
        case 0x22c924u: goto label_22c924;
        case 0x22c928u: goto label_22c928;
        case 0x22c92cu: goto label_22c92c;
        case 0x22c930u: goto label_22c930;
        case 0x22c934u: goto label_22c934;
        case 0x22c938u: goto label_22c938;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c940u: goto label_22c940;
        case 0x22c944u: goto label_22c944;
        case 0x22c948u: goto label_22c948;
        case 0x22c94cu: goto label_22c94c;
        case 0x22c950u: goto label_22c950;
        case 0x22c954u: goto label_22c954;
        case 0x22c958u: goto label_22c958;
        case 0x22c95cu: goto label_22c95c;
        case 0x22c960u: goto label_22c960;
        case 0x22c964u: goto label_22c964;
        case 0x22c968u: goto label_22c968;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c970u: goto label_22c970;
        case 0x22c974u: goto label_22c974;
        case 0x22c978u: goto label_22c978;
        case 0x22c97cu: goto label_22c97c;
        case 0x22c980u: goto label_22c980;
        case 0x22c984u: goto label_22c984;
        case 0x22c988u: goto label_22c988;
        case 0x22c98cu: goto label_22c98c;
        case 0x22c990u: goto label_22c990;
        case 0x22c994u: goto label_22c994;
        case 0x22c998u: goto label_22c998;
        case 0x22c99cu: goto label_22c99c;
        case 0x22c9a0u: goto label_22c9a0;
        case 0x22c9a4u: goto label_22c9a4;
        case 0x22c9a8u: goto label_22c9a8;
        case 0x22c9acu: goto label_22c9ac;
        case 0x22c9b0u: goto label_22c9b0;
        case 0x22c9b4u: goto label_22c9b4;
        case 0x22c9b8u: goto label_22c9b8;
        case 0x22c9bcu: goto label_22c9bc;
        case 0x22c9c0u: goto label_22c9c0;
        case 0x22c9c4u: goto label_22c9c4;
        case 0x22c9c8u: goto label_22c9c8;
        case 0x22c9ccu: goto label_22c9cc;
        case 0x22c9d0u: goto label_22c9d0;
        case 0x22c9d4u: goto label_22c9d4;
        case 0x22c9d8u: goto label_22c9d8;
        case 0x22c9dcu: goto label_22c9dc;
        case 0x22c9e0u: goto label_22c9e0;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22c9e8u: goto label_22c9e8;
        case 0x22c9ecu: goto label_22c9ec;
        case 0x22c9f0u: goto label_22c9f0;
        case 0x22c9f4u: goto label_22c9f4;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22c9fcu: goto label_22c9fc;
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca04u: goto label_22ca04;
        case 0x22ca08u: goto label_22ca08;
        case 0x22ca0cu: goto label_22ca0c;
        case 0x22ca10u: goto label_22ca10;
        case 0x22ca14u: goto label_22ca14;
        case 0x22ca18u: goto label_22ca18;
        case 0x22ca1cu: goto label_22ca1c;
        case 0x22ca20u: goto label_22ca20;
        case 0x22ca24u: goto label_22ca24;
        case 0x22ca28u: goto label_22ca28;
        case 0x22ca2cu: goto label_22ca2c;
        case 0x22ca30u: goto label_22ca30;
        case 0x22ca34u: goto label_22ca34;
        case 0x22ca38u: goto label_22ca38;
        case 0x22ca3cu: goto label_22ca3c;
        case 0x22ca40u: goto label_22ca40;
        case 0x22ca44u: goto label_22ca44;
        case 0x22ca48u: goto label_22ca48;
        case 0x22ca4cu: goto label_22ca4c;
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca58u: goto label_22ca58;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca60u: goto label_22ca60;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca68u: goto label_22ca68;
        case 0x22ca6cu: goto label_22ca6c;
        case 0x22ca70u: goto label_22ca70;
        case 0x22ca74u: goto label_22ca74;
        case 0x22ca78u: goto label_22ca78;
        case 0x22ca7cu: goto label_22ca7c;
        case 0x22ca80u: goto label_22ca80;
        case 0x22ca84u: goto label_22ca84;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca8cu: goto label_22ca8c;
        case 0x22ca90u: goto label_22ca90;
        case 0x22ca94u: goto label_22ca94;
        case 0x22ca98u: goto label_22ca98;
        case 0x22ca9cu: goto label_22ca9c;
        case 0x22caa0u: goto label_22caa0;
        case 0x22caa4u: goto label_22caa4;
        case 0x22caa8u: goto label_22caa8;
        case 0x22caacu: goto label_22caac;
        case 0x22cab0u: goto label_22cab0;
        case 0x22cab4u: goto label_22cab4;
        case 0x22cab8u: goto label_22cab8;
        case 0x22cabcu: goto label_22cabc;
        case 0x22cac0u: goto label_22cac0;
        case 0x22cac4u: goto label_22cac4;
        case 0x22cac8u: goto label_22cac8;
        case 0x22caccu: goto label_22cacc;
        case 0x22cad0u: goto label_22cad0;
        case 0x22cad4u: goto label_22cad4;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cadcu: goto label_22cadc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cae4u: goto label_22cae4;
        case 0x22cae8u: goto label_22cae8;
        case 0x22caecu: goto label_22caec;
        case 0x22caf0u: goto label_22caf0;
        case 0x22caf4u: goto label_22caf4;
        case 0x22caf8u: goto label_22caf8;
        case 0x22cafcu: goto label_22cafc;
        case 0x22cb00u: goto label_22cb00;
        case 0x22cb04u: goto label_22cb04;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb0cu: goto label_22cb0c;
        case 0x22cb10u: goto label_22cb10;
        case 0x22cb14u: goto label_22cb14;
        case 0x22cb18u: goto label_22cb18;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb20u: goto label_22cb20;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb28u: goto label_22cb28;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb30u: goto label_22cb30;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb38u: goto label_22cb38;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb44u: goto label_22cb44;
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb50u: goto label_22cb50;
        case 0x22cb54u: goto label_22cb54;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb78u: goto label_22cb78;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb80u: goto label_22cb80;
        case 0x22cb84u: goto label_22cb84;
        case 0x22cb88u: goto label_22cb88;
        case 0x22cb8cu: goto label_22cb8c;
        case 0x22cb90u: goto label_22cb90;
        case 0x22cb94u: goto label_22cb94;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cb9cu: goto label_22cb9c;
        case 0x22cba0u: goto label_22cba0;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cba8u: goto label_22cba8;
        case 0x22cbacu: goto label_22cbac;
        case 0x22cbb0u: goto label_22cbb0;
        case 0x22cbb4u: goto label_22cbb4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbbcu: goto label_22cbbc;
        case 0x22cbc0u: goto label_22cbc0;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cbc8u: goto label_22cbc8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbd4u: goto label_22cbd4;
        case 0x22cbd8u: goto label_22cbd8;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cbe4u: goto label_22cbe4;
        case 0x22cbe8u: goto label_22cbe8;
        case 0x22cbecu: goto label_22cbec;
        case 0x22cbf0u: goto label_22cbf0;
        case 0x22cbf4u: goto label_22cbf4;
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc00u: goto label_22cc00;
        case 0x22cc04u: goto label_22cc04;
        case 0x22cc08u: goto label_22cc08;
        case 0x22cc0cu: goto label_22cc0c;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc18u: goto label_22cc18;
        case 0x22cc1cu: goto label_22cc1c;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc24u: goto label_22cc24;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc2cu: goto label_22cc2c;
        case 0x22cc30u: goto label_22cc30;
        case 0x22cc34u: goto label_22cc34;
        case 0x22cc38u: goto label_22cc38;
        case 0x22cc3cu: goto label_22cc3c;
        case 0x22cc40u: goto label_22cc40;
        case 0x22cc44u: goto label_22cc44;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc4cu: goto label_22cc4c;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc54u: goto label_22cc54;
        case 0x22cc58u: goto label_22cc58;
        case 0x22cc5cu: goto label_22cc5c;
        case 0x22cc60u: goto label_22cc60;
        case 0x22cc64u: goto label_22cc64;
        case 0x22cc68u: goto label_22cc68;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc70u: goto label_22cc70;
        case 0x22cc74u: goto label_22cc74;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc80u: goto label_22cc80;
        case 0x22cc84u: goto label_22cc84;
        case 0x22cc88u: goto label_22cc88;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc90u: goto label_22cc90;
        case 0x22cc94u: goto label_22cc94;
        case 0x22cc98u: goto label_22cc98;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22cca0u: goto label_22cca0;
        case 0x22cca4u: goto label_22cca4;
        case 0x22cca8u: goto label_22cca8;
        case 0x22ccacu: goto label_22ccac;
        case 0x22ccb0u: goto label_22ccb0;
        case 0x22ccb4u: goto label_22ccb4;
        case 0x22ccb8u: goto label_22ccb8;
        case 0x22ccbcu: goto label_22ccbc;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccc4u: goto label_22ccc4;
        case 0x22ccc8u: goto label_22ccc8;
        case 0x22ccccu: goto label_22cccc;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccd8u: goto label_22ccd8;
        case 0x22ccdcu: goto label_22ccdc;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cce4u: goto label_22cce4;
        case 0x22cce8u: goto label_22cce8;
        case 0x22ccecu: goto label_22ccec;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22ccf8u: goto label_22ccf8;
        case 0x22ccfcu: goto label_22ccfc;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd04u: goto label_22cd04;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd14u: goto label_22cd14;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd24u: goto label_22cd24;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd2cu: goto label_22cd2c;
        case 0x22cd30u: goto label_22cd30;
        case 0x22cd34u: goto label_22cd34;
        case 0x22cd38u: goto label_22cd38;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd44u: goto label_22cd44;
        case 0x22cd48u: goto label_22cd48;
        case 0x22cd4cu: goto label_22cd4c;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd54u: goto label_22cd54;
        case 0x22cd58u: goto label_22cd58;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd6cu: goto label_22cd6c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd78u: goto label_22cd78;
        case 0x22cd7cu: goto label_22cd7c;
        case 0x22cd80u: goto label_22cd80;
        case 0x22cd84u: goto label_22cd84;
        case 0x22cd88u: goto label_22cd88;
        case 0x22cd8cu: goto label_22cd8c;
        case 0x22cd90u: goto label_22cd90;
        case 0x22cd94u: goto label_22cd94;
        case 0x22cd98u: goto label_22cd98;
        case 0x22cd9cu: goto label_22cd9c;
        case 0x22cda0u: goto label_22cda0;
        case 0x22cda4u: goto label_22cda4;
        case 0x22cda8u: goto label_22cda8;
        case 0x22cdacu: goto label_22cdac;
        case 0x22cdb0u: goto label_22cdb0;
        case 0x22cdb4u: goto label_22cdb4;
        case 0x22cdb8u: goto label_22cdb8;
        case 0x22cdbcu: goto label_22cdbc;
        case 0x22cdc0u: goto label_22cdc0;
        case 0x22cdc4u: goto label_22cdc4;
        case 0x22cdc8u: goto label_22cdc8;
        case 0x22cdccu: goto label_22cdcc;
        case 0x22cdd0u: goto label_22cdd0;
        case 0x22cdd4u: goto label_22cdd4;
        case 0x22cdd8u: goto label_22cdd8;
        case 0x22cddcu: goto label_22cddc;
        case 0x22cde0u: goto label_22cde0;
        case 0x22cde4u: goto label_22cde4;
        case 0x22cde8u: goto label_22cde8;
        case 0x22cdecu: goto label_22cdec;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22cdf4u: goto label_22cdf4;
        case 0x22cdf8u: goto label_22cdf8;
        case 0x22cdfcu: goto label_22cdfc;
        case 0x22ce00u: goto label_22ce00;
        case 0x22ce04u: goto label_22ce04;
        case 0x22ce08u: goto label_22ce08;
        case 0x22ce0cu: goto label_22ce0c;
        case 0x22ce10u: goto label_22ce10;
        case 0x22ce14u: goto label_22ce14;
        case 0x22ce18u: goto label_22ce18;
        case 0x22ce1cu: goto label_22ce1c;
        case 0x22ce20u: goto label_22ce20;
        case 0x22ce24u: goto label_22ce24;
        case 0x22ce28u: goto label_22ce28;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce30u: goto label_22ce30;
        case 0x22ce34u: goto label_22ce34;
        case 0x22ce38u: goto label_22ce38;
        case 0x22ce3cu: goto label_22ce3c;
        case 0x22ce40u: goto label_22ce40;
        case 0x22ce44u: goto label_22ce44;
        case 0x22ce48u: goto label_22ce48;
        case 0x22ce4cu: goto label_22ce4c;
        case 0x22ce50u: goto label_22ce50;
        case 0x22ce54u: goto label_22ce54;
        case 0x22ce58u: goto label_22ce58;
        case 0x22ce5cu: goto label_22ce5c;
        case 0x22ce60u: goto label_22ce60;
        case 0x22ce64u: goto label_22ce64;
        case 0x22ce68u: goto label_22ce68;
        case 0x22ce6cu: goto label_22ce6c;
        case 0x22ce70u: goto label_22ce70;
        case 0x22ce74u: goto label_22ce74;
        default: break;
    }

    ctx->pc = 0x22c600u;

label_22c600:
    // 0x22c600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22c604:
    // 0x22c604: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22c604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_22c608:
    // 0x22c608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22c60c:
    // 0x22c60c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22c610:
    // 0x22c610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c614:
    // 0x22c614: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_22c618:
    // 0x22c618: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c61c:
    // 0x22c61c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_22c620:
    // 0x22c620: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22c620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c624:
    // 0x22c624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22c628:
    // 0x22c628: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_22c62c:
    // 0x22c62c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22c630:
    // 0x22c630: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22c630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22c634:
    // 0x22c634: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_22c638:
    // 0x22c638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22c63c:
    // 0x22c63c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_22c640:
    if (ctx->pc == 0x22C640u) {
        ctx->pc = 0x22C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C63Cu;
        // 0x22c640: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C644u;
        goto label_22c644;
    }
    ctx->pc = 0x22C63Cu;
    {
        const bool branch_taken_0x22c63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C63Cu;
        // 0x22c640: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c63c) {
            ctx->pc = 0x22C650u;
            goto label_22c650;
        }
    }
    ctx->pc = 0x22C644u;
label_22c644:
    // 0x22c644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c648:
    // 0x22c648: 0xc08f5b4  jal         func_23D6D0
label_22c64c:
    if (ctx->pc == 0x22C64Cu) {
        ctx->pc = 0x22C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C648u;
        // 0x22c64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C650u;
        goto label_22c650;
    }
    ctx->pc = 0x22C648u;
    SET_GPR_U32(ctx, 31, 0x22C650u);
    ctx->pc = 0x22C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C648u;
    // 0x22c64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x22C648u, 0x22C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C650u;
label_22c650:
    // 0x22c650: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_22c654:
    // 0x22c654: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22c654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_22c658:
    // 0x22c658: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22c65c:
    // 0x22c65c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_22c660:
    if (ctx->pc == 0x22C660u) {
        ctx->pc = 0x22C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C65Cu;
        // 0x22c660: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C664u;
        goto label_22c664;
    }
    ctx->pc = 0x22C65Cu;
    {
        const bool branch_taken_0x22c65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C65Cu;
        // 0x22c660: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c65c) {
            ctx->pc = 0x22C678u;
            goto label_22c678;
        }
    }
    ctx->pc = 0x22C664u;
label_22c664:
    // 0x22c664: 0x8e04038c  lw          $a0, 0x38C($s0)
    ctx->pc = 0x22c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_22c668:
    // 0x22c668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c66c:
    // 0x22c66c: 0xc08f5b4  jal         func_23D6D0
label_22c670:
    if (ctx->pc == 0x22C670u) {
        ctx->pc = 0x22C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C66Cu;
        // 0x22c670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C674u;
        goto label_22c674;
    }
    ctx->pc = 0x22C66Cu;
    SET_GPR_U32(ctx, 31, 0x22C674u);
    ctx->pc = 0x22C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C66Cu;
    // 0x22c670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x22C66Cu, 0x22C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C674u;
label_22c674:
    // 0x22c674: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_22c678:
    // 0x22c678: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
label_22c67c:
    // 0x22c67c: 0x9062027c  lbu         $v0, 0x27C($v1)
    ctx->pc = 0x22c67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 636)));
label_22c680:
    // 0x22c680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c684:
    if (ctx->pc == 0x22C684u) {
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C688u;
        goto label_22c688;
    }
    ctx->pc = 0x22C680u;
    {
        const bool branch_taken_0x22c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c680) {
            ctx->pc = 0x22C694u;
            goto label_22c694;
        }
    }
    ctx->pc = 0x22C688u;
label_22c688:
    // 0x22c688: 0x90620620  lbu         $v0, 0x620($v1)
    ctx->pc = 0x22c688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1568)));
label_22c68c:
    // 0x22c68c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c690:
    if (ctx->pc == 0x22C690u) {
        ctx->pc = 0x22C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C68Cu;
        // 0x22c690: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C694u;
        goto label_22c694;
    }
    ctx->pc = 0x22C68Cu;
    {
        const bool branch_taken_0x22c68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C68Cu;
        // 0x22c690: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c68c) {
            ctx->pc = 0x22C69Cu;
            goto label_22c69c;
        }
    }
    ctx->pc = 0x22C694u;
label_22c694:
    // 0x22c694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c698:
    // 0x22c698: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c69c:
    // 0x22c69c: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
label_22c6a0:
    if (ctx->pc == 0x22C6A0u) {
        ctx->pc = 0x22C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C69Cu;
        // 0x22c6a0: 0x8e0500bc  lw          $a1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6A4u;
        goto label_22c6a4;
    }
    ctx->pc = 0x22C69Cu;
    {
        const bool branch_taken_0x22c69c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C69Cu;
        // 0x22c6a0: 0x8e0500bc  lw          $a1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c69c) {
            ctx->pc = 0x22C704u;
            goto label_22c704;
        }
    }
    ctx->pc = 0x22C6A4u;
label_22c6a4:
    // 0x22c6a4: 0x38a2020f  xori        $v0, $a1, 0x20F
    ctx->pc = 0x22c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)527);
label_22c6a8:
    // 0x22c6a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22c6ac:
    if (ctx->pc == 0x22C6ACu) {
        ctx->pc = 0x22C6B0u;
        goto label_22c6b0;
    }
    ctx->pc = 0x22C6A8u;
    {
        const bool branch_taken_0x22c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6a8) {
            ctx->pc = 0x22C6C0u;
            goto label_22c6c0;
        }
    }
    ctx->pc = 0x22C6B0u;
label_22c6b0:
    // 0x22c6b0: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_22c6b4:
    // 0x22c6b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22c6b8:
    // 0x22c6b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c6bc:
    if (ctx->pc == 0x22C6BCu) {
        ctx->pc = 0x22C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B8u;
        // 0x22c6bc: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6C0u;
        goto label_22c6c0;
    }
    ctx->pc = 0x22C6B8u;
    {
        const bool branch_taken_0x22c6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6b8) {
            ctx->pc = 0x22C6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6B8u;
            // 0x22c6bc: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6CCu;
            goto label_22c6cc;
        }
    }
    ctx->pc = 0x22C6C0u;
label_22c6c0:
    // 0x22c6c0: 0x14c001e2  bnez        $a2, . + 4 + (0x1E2 << 2)
label_22c6c4:
    if (ctx->pc == 0x22C6C4u) {
        ctx->pc = 0x22C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6C0u;
        // 0x22c6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6C8u;
        goto label_22c6c8;
    }
    ctx->pc = 0x22C6C0u;
    {
        const bool branch_taken_0x22c6c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6C0u;
        // 0x22c6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6c0) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C6C8u;
label_22c6c8:
    // 0x22c6c8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22c6cc:
    // 0x22c6cc: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x22c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22c6d0:
    // 0x22c6d0: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x22c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22c6d4:
    // 0x22c6d4: 0x108301dd  beq         $a0, $v1, . + 4 + (0x1DD << 2)
label_22c6d8:
    if (ctx->pc == 0x22C6D8u) {
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6DCu;
        goto label_22c6dc;
    }
    ctx->pc = 0x22C6D4u;
    {
        const bool branch_taken_0x22c6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6d4) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C6DCu;
label_22c6dc:
    // 0x22c6dc: 0x920200c1  lbu         $v0, 0xC1($s0)
    ctx->pc = 0x22c6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
label_22c6e0:
    // 0x22c6e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22c6e4:
    // 0x22c6e4: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
label_22c6e8:
    if (ctx->pc == 0x22C6E8u) {
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6ECu;
        goto label_22c6ec;
    }
    ctx->pc = 0x22C6E4u;
    {
        const bool branch_taken_0x22c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e4) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C6ECu;
label_22c6ec:
    // 0x22c6ec: 0x2482ffed  addiu       $v0, $a0, -0x13
    ctx->pc = 0x22c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
label_22c6f0:
    // 0x22c6f0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22c6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22c6f4:
    // 0x22c6f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c6f8:
    if (ctx->pc == 0x22C6F8u) {
        ctx->pc = 0x22C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6F4u;
        // 0x22c6f8: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6FCu;
        goto label_22c6fc;
    }
    ctx->pc = 0x22C6F4u;
    {
        const bool branch_taken_0x22c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6f4) {
            ctx->pc = 0x22C6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6F4u;
            // 0x22c6f8: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C708u;
            goto label_22c708;
        }
    }
    ctx->pc = 0x22C6FCu;
label_22c6fc:
    // 0x22c6fc: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_22c700:
    if (ctx->pc == 0x22C700u) {
        ctx->pc = 0x22C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6FCu;
        // 0x22c700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C704u;
        goto label_22c704;
    }
    ctx->pc = 0x22C6FCu;
    {
        const bool branch_taken_0x22c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6FCu;
        // 0x22c700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6fc) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C704u;
label_22c704:
    // 0x22c704: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x22c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_22c708:
    // 0x22c708: 0x38a3020f  xori        $v1, $a1, 0x20F
    ctx->pc = 0x22c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)527);
label_22c70c:
    // 0x22c70c: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x22c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
label_22c710:
    // 0x22c710: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_22c714:
    if (ctx->pc == 0x22C714u) {
        ctx->pc = 0x22C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C710u;
        // 0x22c714: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C718u;
        goto label_22c718;
    }
    ctx->pc = 0x22C710u;
    {
        const bool branch_taken_0x22c710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C710u;
        // 0x22c714: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c710) {
            ctx->pc = 0x22C800u;
            goto label_22c800;
        }
    }
    ctx->pc = 0x22C718u;
label_22c718:
    // 0x22c718: 0x54c00016  bnel        $a2, $zero, . + 4 + (0x16 << 2)
label_22c71c:
    if (ctx->pc == 0x22C71Cu) {
        ctx->pc = 0x22C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C718u;
        // 0x22c71c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C720u;
        goto label_22c720;
    }
    ctx->pc = 0x22C718u;
    {
        const bool branch_taken_0x22c718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c718) {
            ctx->pc = 0x22C71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C718u;
            // 0x22c71c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C774u;
            goto label_22c774;
        }
    }
    ctx->pc = 0x22C720u;
label_22c720:
    // 0x22c720: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_22c724:
    // 0x22c724: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_22c728:
    if (ctx->pc == 0x22C728u) {
        ctx->pc = 0x22C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C724u;
        // 0x22c728: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C72Cu;
        goto label_22c72c;
    }
    ctx->pc = 0x22C724u;
    {
        const bool branch_taken_0x22c724 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C724u;
        // 0x22c728: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c724) {
            ctx->pc = 0x22C740u;
            goto label_22c740;
        }
    }
    ctx->pc = 0x22C72Cu;
label_22c72c:
    // 0x22c72c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x22c72cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c730:
    // 0x22c730: 0x0  nop
    ctx->pc = 0x22c730u;
    // NOP
label_22c734:
    // 0x22c734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c738:
    // 0x22c738: 0x10000008  b           . + 4 + (0x8 << 2)
label_22c73c:
    if (ctx->pc == 0x22C73Cu) {
        ctx->pc = 0x22C740u;
        goto label_22c740;
    }
    ctx->pc = 0x22C738u;
    {
        const bool branch_taken_0x22c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c738) {
            ctx->pc = 0x22C75Cu;
            goto label_22c75c;
        }
    }
    ctx->pc = 0x22C740u;
label_22c740:
    // 0x22c740: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_22c744:
    // 0x22c744: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x22c744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_22c748:
    // 0x22c748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22c74c:
    // 0x22c74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c750:
    // 0x22c750: 0x0  nop
    ctx->pc = 0x22c750u;
    // NOP
label_22c754:
    // 0x22c754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c758:
    // 0x22c758: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22c758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22c75c:
    // 0x22c75c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22c75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_22c760:
    // 0x22c760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22c760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22c764:
    // 0x22c764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c768:
    // 0x22c768: 0xc0ae68e  jal         func_2B9A38
label_22c76c:
    if (ctx->pc == 0x22C76Cu) {
        ctx->pc = 0x22C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C768u;
        // 0x22c76c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C770u;
        goto label_22c770;
    }
    ctx->pc = 0x22C768u;
    SET_GPR_U32(ctx, 31, 0x22C770u);
    ctx->pc = 0x22C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C768u;
    // 0x22c76c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A38u, 0x22C768u, 0x22C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C770u;
label_22c770:
    // 0x22c770: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x22c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_22c774:
    // 0x22c774: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x22c774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_22c778:
    // 0x22c778: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22c77c:
    // 0x22c77c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_22c780:
    if (ctx->pc == 0x22C780u) {
        ctx->pc = 0x22C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C77Cu;
        // 0x22c780: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C784u;
        goto label_22c784;
    }
    ctx->pc = 0x22C77Cu;
    {
        const bool branch_taken_0x22c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C77Cu;
        // 0x22c780: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c77c) {
            ctx->pc = 0x22C7D8u;
            goto label_22c7d8;
        }
    }
    ctx->pc = 0x22C784u;
label_22c784:
    // 0x22c784: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_22c788:
    if (ctx->pc == 0x22C788u) {
        ctx->pc = 0x22C78Cu;
        goto label_22c78c;
    }
    ctx->pc = 0x22C784u;
    {
        const bool branch_taken_0x22c784 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c784) {
            ctx->pc = 0x22C7A4u;
            goto label_22c7a4;
        }
    }
    ctx->pc = 0x22C78Cu;
label_22c78c:
    // 0x22c78c: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
label_22c790:
    if (ctx->pc == 0x22C790u) {
        ctx->pc = 0x22C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C78Cu;
        // 0x22c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C794u;
        goto label_22c794;
    }
    ctx->pc = 0x22C78Cu;
    {
        const bool branch_taken_0x22c78c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C78Cu;
        // 0x22c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c78c) {
            ctx->pc = 0x22C804u;
            goto label_22c804;
        }
    }
    ctx->pc = 0x22C794u;
label_22c794:
    // 0x22c794: 0xc0bc5e2  jal         func_2F1788
label_22c798:
    if (ctx->pc == 0x22C798u) {
        ctx->pc = 0x22C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C794u;
        // 0x22c798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C79Cu;
        goto label_22c79c;
    }
    ctx->pc = 0x22C794u;
    SET_GPR_U32(ctx, 31, 0x22C79Cu);
    ctx->pc = 0x22C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C794u;
    // 0x22c798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x22C794u, 0x22C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C79Cu;
label_22c79c:
    // 0x22c79c: 0x1000000e  b           . + 4 + (0xE << 2)
label_22c7a0:
    if (ctx->pc == 0x22C7A0u) {
        ctx->pc = 0x22C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C79Cu;
        // 0x22c7a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7A4u;
        goto label_22c7a4;
    }
    ctx->pc = 0x22C79Cu;
    {
        const bool branch_taken_0x22c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C79Cu;
        // 0x22c7a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c79c) {
            ctx->pc = 0x22C7D8u;
            goto label_22c7d8;
        }
    }
    ctx->pc = 0x22C7A4u;
label_22c7a4:
    // 0x22c7a4: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_22c7a8:
    if (ctx->pc == 0x22C7A8u) {
        ctx->pc = 0x22C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7A4u;
        // 0x22c7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7ACu;
        goto label_22c7ac;
    }
    ctx->pc = 0x22C7A4u;
    {
        const bool branch_taken_0x22c7a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7A4u;
        // 0x22c7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7a4) {
            ctx->pc = 0x22C7C4u;
            goto label_22c7c4;
        }
    }
    ctx->pc = 0x22C7ACu;
label_22c7ac:
    // 0x22c7ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c7b0:
    // 0x22c7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7b4:
    // 0x22c7b4: 0xc0bc58c  jal         func_2F1630
label_22c7b8:
    if (ctx->pc == 0x22C7B8u) {
        ctx->pc = 0x22C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B4u;
        // 0x22c7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7BCu;
        goto label_22c7bc;
    }
    ctx->pc = 0x22C7B4u;
    SET_GPR_U32(ctx, 31, 0x22C7BCu);
    ctx->pc = 0x22C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7B4u;
    // 0x22c7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x22C7B4u, 0x22C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7BCu;
label_22c7bc:
    // 0x22c7bc: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_22c7c0:
    if (ctx->pc == 0x22C7C0u) {
        ctx->pc = 0x22C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7BCu;
        // 0x22c7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7C4u;
        goto label_22c7c4;
    }
    ctx->pc = 0x22C7BCu;
    {
        const bool branch_taken_0x22c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7BCu;
        // 0x22c7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7bc) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C7C4u;
label_22c7c4:
    // 0x22c7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c7c8:
    // 0x22c7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7cc:
    // 0x22c7cc: 0xc0bc58c  jal         func_2F1630
label_22c7d0:
    if (ctx->pc == 0x22C7D0u) {
        ctx->pc = 0x22C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7CCu;
        // 0x22c7d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7D4u;
        goto label_22c7d4;
    }
    ctx->pc = 0x22C7CCu;
    SET_GPR_U32(ctx, 31, 0x22C7D4u);
    ctx->pc = 0x22C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7CCu;
    // 0x22c7d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x22C7CCu, 0x22C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7D4u;
label_22c7d4:
    // 0x22c7d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c7d8:
    // 0x22c7d8: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
label_22c7dc:
    if (ctx->pc == 0x22C7DCu) {
        ctx->pc = 0x22C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D8u;
        // 0x22c7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7E0u;
        goto label_22c7e0;
    }
    ctx->pc = 0x22C7D8u;
    {
        const bool branch_taken_0x22c7d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D8u;
        // 0x22c7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d8) {
            ctx->pc = 0x22C804u;
            goto label_22c804;
        }
    }
    ctx->pc = 0x22C7E0u;
label_22c7e0:
    // 0x22c7e0: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x22c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_22c7e4:
    // 0x22c7e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22c7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_22c7e8:
    // 0x22c7e8: 0x14400198  bnez        $v0, . + 4 + (0x198 << 2)
label_22c7ec:
    if (ctx->pc == 0x22C7ECu) {
        ctx->pc = 0x22C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E8u;
        // 0x22c7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7F0u;
        goto label_22c7f0;
    }
    ctx->pc = 0x22C7E8u;
    {
        const bool branch_taken_0x22c7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E8u;
        // 0x22c7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7e8) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C7F0u;
label_22c7f0:
    // 0x22c7f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_22c7f4:
    // 0x22c7f4: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_22c7f8:
    // 0x22c7f8: 0x14600194  bnez        $v1, . + 4 + (0x194 << 2)
label_22c7fc:
    if (ctx->pc == 0x22C7FCu) {
        ctx->pc = 0x22C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7F8u;
        // 0x22c7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C800u;
        goto label_22c800;
    }
    ctx->pc = 0x22C7F8u;
    {
        const bool branch_taken_0x22c7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7F8u;
        // 0x22c7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7f8) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C800u;
label_22c800:
    // 0x22c800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c804:
    // 0x22c804: 0xc08a1f2  jal         func_2287C8
label_22c808:
    if (ctx->pc == 0x22C808u) {
        ctx->pc = 0x22C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C804u;
        // 0x22c808: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C80Cu;
        goto label_22c80c;
    }
    ctx->pc = 0x22C804u;
    SET_GPR_U32(ctx, 31, 0x22C80Cu);
    ctx->pc = 0x22C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C804u;
    // 0x22c808: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x22C804u, 0x22C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C80Cu;
label_22c80c:
    // 0x22c80c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22c80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c810:
    // 0x22c810: 0xc0f70ce  jal         func_3DC338
label_22c814:
    if (ctx->pc == 0x22C814u) {
        ctx->pc = 0x22C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C810u;
        // 0x22c814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C818u;
        goto label_22c818;
    }
    ctx->pc = 0x22C810u;
    SET_GPR_U32(ctx, 31, 0x22C818u);
    ctx->pc = 0x22C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C810u;
    // 0x22c814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x22C810u, 0x22C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C818u;
label_22c818:
    // 0x22c818: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c81c:
    if (ctx->pc == 0x22C81Cu) {
        ctx->pc = 0x22C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C818u;
        // 0x22c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C820u;
        goto label_22c820;
    }
    ctx->pc = 0x22C818u;
    {
        const bool branch_taken_0x22c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c818) {
            ctx->pc = 0x22C81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C818u;
            // 0x22c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C82Cu;
            goto label_22c82c;
        }
    }
    ctx->pc = 0x22C820u;
label_22c820:
    // 0x22c820: 0xc0c4900  jal         func_312400
label_22c824:
    if (ctx->pc == 0x22C824u) {
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C828u;
        goto label_22c828;
    }
    ctx->pc = 0x22C820u;
    SET_GPR_U32(ctx, 31, 0x22C828u);
    ctx->pc = 0x22C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C820u;
    // 0x22c824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x22C820u, 0x22C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C828u;
label_22c828:
    // 0x22c828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c82c:
    // 0x22c82c: 0xc08a1f2  jal         func_2287C8
label_22c830:
    if (ctx->pc == 0x22C830u) {
        ctx->pc = 0x22C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C82Cu;
        // 0x22c830: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C834u;
        goto label_22c834;
    }
    ctx->pc = 0x22C82Cu;
    SET_GPR_U32(ctx, 31, 0x22C834u);
    ctx->pc = 0x22C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C82Cu;
    // 0x22c830: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x22C82Cu, 0x22C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C834u;
label_22c834:
    // 0x22c834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22c834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c838:
    // 0x22c838: 0xc0f70ce  jal         func_3DC338
label_22c83c:
    if (ctx->pc == 0x22C83Cu) {
        ctx->pc = 0x22C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C838u;
        // 0x22c83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C840u;
        goto label_22c840;
    }
    ctx->pc = 0x22C838u;
    SET_GPR_U32(ctx, 31, 0x22C840u);
    ctx->pc = 0x22C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C838u;
    // 0x22c83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x22C838u, 0x22C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C840u;
label_22c840:
    // 0x22c840: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c844:
    if (ctx->pc == 0x22C844u) {
        ctx->pc = 0x22C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C840u;
        // 0x22c844: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C848u;
        goto label_22c848;
    }
    ctx->pc = 0x22C840u;
    {
        const bool branch_taken_0x22c840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c840) {
            ctx->pc = 0x22C844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C840u;
            // 0x22c844: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C854u;
            goto label_22c854;
        }
    }
    ctx->pc = 0x22C848u;
label_22c848:
    // 0x22c848: 0xc0c4900  jal         func_312400
label_22c84c:
    if (ctx->pc == 0x22C84Cu) {
        ctx->pc = 0x22C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C848u;
        // 0x22c84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C850u;
        goto label_22c850;
    }
    ctx->pc = 0x22C848u;
    SET_GPR_U32(ctx, 31, 0x22C850u);
    ctx->pc = 0x22C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C848u;
    // 0x22c84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x22C848u, 0x22C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C850u;
label_22c850:
    // 0x22c850: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22c854:
    // 0x22c854: 0x2e630007  sltiu       $v1, $s3, 0x7
    ctx->pc = 0x22c854u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22c858:
    // 0x22c858: 0x1060017b  beqz        $v1, . + 4 + (0x17B << 2)
label_22c85c:
    if (ctx->pc == 0x22C85Cu) {
        ctx->pc = 0x22C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C858u;
        // 0x22c85c: 0x8c450150  lw          $a1, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C860u;
        goto label_22c860;
    }
    ctx->pc = 0x22C858u;
    {
        const bool branch_taken_0x22c858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C858u;
        // 0x22c85c: 0x8c450150  lw          $a1, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c858) {
            ctx->pc = 0x22CE48u;
            goto label_22ce48;
        }
    }
    ctx->pc = 0x22C860u;
label_22c860:
    // 0x22c860: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x22c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_22c864:
    // 0x22c864: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x22c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22c868:
    // 0x22c868: 0x24424850  addiu       $v0, $v0, 0x4850
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
label_22c86c:
    // 0x22c86c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22c870:
    // 0x22c870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c874:
    // 0x22c874: 0x800008  jr          $a0
label_22c878:
    if (ctx->pc == 0x22C878u) {
        ctx->pc = 0x22C87Cu;
        goto label_22c87c;
    }
    ctx->pc = 0x22C874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C87Cu: goto label_22c87c;
            case 0x22C900u: goto label_22c900;
            case 0x22CA50u: goto label_22ca50;
            case 0x22CE48u: goto label_22ce48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22C87Cu;
label_22c87c:
    // 0x22c87c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22c880:
    // 0x22c880: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22c884:
    // 0x22c884: 0x14400171  bnez        $v0, . + 4 + (0x171 << 2)
label_22c888:
    if (ctx->pc == 0x22C888u) {
        ctx->pc = 0x22C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C884u;
        // 0x22c888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C88Cu;
        goto label_22c88c;
    }
    ctx->pc = 0x22C884u;
    {
        const bool branch_taken_0x22c884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C884u;
        // 0x22c888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c884) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C88Cu;
label_22c88c:
    // 0x22c88c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x22c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22c890:
    // 0x22c890: 0xc06bf52  jal         func_1AFD48
label_22c894:
    if (ctx->pc == 0x22C894u) {
        ctx->pc = 0x22C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C890u;
        // 0x22c894: 0x240501ae  addiu       $a1, $zero, 0x1AE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C898u;
        goto label_22c898;
    }
    ctx->pc = 0x22C890u;
    SET_GPR_U32(ctx, 31, 0x22C898u);
    ctx->pc = 0x22C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C890u;
    // 0x22c894: 0x240501ae  addiu       $a1, $zero, 0x1AE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD48u, 0x22C890u, 0x22C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C898u;
label_22c898:
    // 0x22c898: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x22c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22c89c:
    // 0x22c89c: 0xc06c546  jal         func_1B1518
label_22c8a0:
    if (ctx->pc == 0x22C8A0u) {
        ctx->pc = 0x22C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C89Cu;
        // 0x22c8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8A4u;
        goto label_22c8a4;
    }
    ctx->pc = 0x22C89Cu;
    SET_GPR_U32(ctx, 31, 0x22C8A4u);
    ctx->pc = 0x22C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C89Cu;
    // 0x22c8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x22C89Cu, 0x22C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8A4u;
label_22c8a4:
    // 0x22c8a4: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_22c8a8:
    if (ctx->pc == 0x22C8A8u) {
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8ACu;
        goto label_22c8ac;
    }
    ctx->pc = 0x22C8A4u;
    {
        const bool branch_taken_0x22c8a4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8a4) {
            ctx->pc = 0x22C8C0u;
            goto label_22c8c0;
        }
    }
    ctx->pc = 0x22C8ACu;
label_22c8ac:
    // 0x22c8ac: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x22c8acu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c8b0:
    // 0x22c8b0: 0x0  nop
    ctx->pc = 0x22c8b0u;
    // NOP
label_22c8b4:
    // 0x22c8b4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22c8b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22c8b8:
    // 0x22c8b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_22c8bc:
    if (ctx->pc == 0x22C8BCu) {
        ctx->pc = 0x22C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8B8u;
        // 0x22c8bc: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8C0u;
        goto label_22c8c0;
    }
    ctx->pc = 0x22C8B8u;
    {
        const bool branch_taken_0x22c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8B8u;
        // 0x22c8bc: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8b8) {
            ctx->pc = 0x22C8E0u;
            goto label_22c8e0;
        }
    }
    ctx->pc = 0x22C8C0u;
label_22c8c0:
    // 0x22c8c0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x22c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_22c8c4:
    // 0x22c8c4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22c8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_22c8c8:
    // 0x22c8c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22c8cc:
    // 0x22c8cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c8d0:
    // 0x22c8d0: 0x0  nop
    ctx->pc = 0x22c8d0u;
    // NOP
label_22c8d4:
    // 0x22c8d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22c8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22c8d8:
    // 0x22c8d8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x22c8d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_22c8dc:
    // 0x22c8dc: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22c8e0:
    // 0x22c8e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c8e4:
    // 0x22c8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c8e8:
    // 0x22c8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c8ec:
    // 0x22c8ec: 0x40f809  jalr        $v0
label_22c8f0:
    if (ctx->pc == 0x22C8F0u) {
        ctx->pc = 0x22C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8ECu;
        // 0x22c8f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8F4u;
        goto label_22c8f4;
    }
    ctx->pc = 0x22C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C8F4u);
        ctx->pc = 0x22C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8ECu;
        // 0x22c8f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C8ECu, 0x22C8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C8F4u;
label_22c8f4:
    // 0x22c8f4: 0x8e030390  lw          $v1, 0x390($s0)
    ctx->pc = 0x22c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_22c8f8:
    // 0x22c8f8: 0x10000152  b           . + 4 + (0x152 << 2)
label_22c8fc:
    if (ctx->pc == 0x22C8FCu) {
        ctx->pc = 0x22C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8F8u;
        // 0x22c8fc: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C900u;
        goto label_22c900;
    }
    ctx->pc = 0x22C8F8u;
    {
        const bool branch_taken_0x22c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8F8u;
        // 0x22c8fc: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8f8) {
            ctx->pc = 0x22CE44u;
            goto label_22ce44;
        }
    }
    ctx->pc = 0x22C900u;
label_22c900:
    // 0x22c900: 0x16a00152  bnez        $s5, . + 4 + (0x152 << 2)
label_22c904:
    if (ctx->pc == 0x22C904u) {
        ctx->pc = 0x22C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C900u;
        // 0x22c904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C908u;
        goto label_22c908;
    }
    ctx->pc = 0x22C900u;
    {
        const bool branch_taken_0x22c900 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C900u;
        // 0x22c904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c900) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22C908u;
label_22c908:
    // 0x22c908: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x22c908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22c90c:
    // 0x22c90c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_22c910:
    // 0x22c910: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c914:
    // 0x22c914: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_22c918:
    // 0x22c918: 0xc07f4c2  jal         func_1FD308
label_22c91c:
    if (ctx->pc == 0x22C91Cu) {
        ctx->pc = 0x22C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C918u;
        // 0x22c91c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C920u;
        goto label_22c920;
    }
    ctx->pc = 0x22C918u;
    SET_GPR_U32(ctx, 31, 0x22C920u);
    ctx->pc = 0x22C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C918u;
    // 0x22c91c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22C918u, 0x22C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C920u;
label_22c920:
    // 0x22c920: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_22c924:
    // 0x22c924: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22c928:
    // 0x22c928: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_22c92c:
    // 0x22c92c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22c92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c930:
    // 0x22c930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c934:
    // 0x22c934: 0xc046642  jal         func_119908
label_22c938:
    if (ctx->pc == 0x22C938u) {
        ctx->pc = 0x22C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C934u;
        // 0x22c938: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C93Cu;
        goto label_22c93c;
    }
    ctx->pc = 0x22C934u;
    SET_GPR_U32(ctx, 31, 0x22C93Cu);
    ctx->pc = 0x22C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C934u;
    // 0x22c938: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22C934u, 0x22C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C93Cu;
label_22c93c:
    // 0x22c93c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22c940:
    // 0x22c940: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x22c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
label_22c944:
    // 0x22c944: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_22c948:
    // 0x22c948: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
label_22c94c:
    if (ctx->pc == 0x22C94Cu) {
        ctx->pc = 0x22C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C948u;
        // 0x22c94c: 0x2402058e  addiu       $v0, $zero, 0x58E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1422));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C950u;
        goto label_22c950;
    }
    ctx->pc = 0x22C948u;
    {
        const bool branch_taken_0x22c948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x22C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C948u;
        // 0x22c94c: 0x2402058e  addiu       $v0, $zero, 0x58E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1422));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c948) {
            ctx->pc = 0x22C960u;
            goto label_22c960;
        }
    }
    ctx->pc = 0x22C950u;
label_22c950:
    // 0x22c950: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_22c954:
    if (ctx->pc == 0x22C954u) {
        ctx->pc = 0x22C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C950u;
        // 0x22c954: 0x2402058f  addiu       $v0, $zero, 0x58F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C958u;
        goto label_22c958;
    }
    ctx->pc = 0x22C950u;
    {
        const bool branch_taken_0x22c950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C950u;
        // 0x22c954: 0x2402058f  addiu       $v0, $zero, 0x58F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c950) {
            ctx->pc = 0x22C960u;
            goto label_22c960;
        }
    }
    ctx->pc = 0x22C958u;
label_22c958:
    // 0x22c958: 0x5622000e  bnel        $s1, $v0, . + 4 + (0xE << 2)
label_22c95c:
    if (ctx->pc == 0x22C95Cu) {
        ctx->pc = 0x22C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C958u;
        // 0x22c95c: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C960u;
        goto label_22c960;
    }
    ctx->pc = 0x22C958u;
    {
        const bool branch_taken_0x22c958 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c958) {
            ctx->pc = 0x22C95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C958u;
            // 0x22c95c: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C994u;
            goto label_22c994;
        }
    }
    ctx->pc = 0x22C960u;
label_22c960:
    // 0x22c960: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22c964:
    // 0x22c964: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x22c964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_22c968:
    // 0x22c968: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22c96c:
    // 0x22c96c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22c970:
    if (ctx->pc == 0x22C970u) {
        ctx->pc = 0x22C974u;
        goto label_22c974;
    }
    ctx->pc = 0x22C96Cu;
    {
        const bool branch_taken_0x22c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c96c) {
            ctx->pc = 0x22C984u;
            goto label_22c984;
        }
    }
    ctx->pc = 0x22C974u;
label_22c974:
    // 0x22c974: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x22c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_22c978:
    // 0x22c978: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_22c97c:
    // 0x22c97c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_22c980:
    if (ctx->pc == 0x22C980u) {
        ctx->pc = 0x22C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C97Cu;
        // 0x22c980: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C984u;
        goto label_22c984;
    }
    ctx->pc = 0x22C97Cu;
    {
        const bool branch_taken_0x22c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c97c) {
            ctx->pc = 0x22C980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C97Cu;
            // 0x22c980: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C994u;
            goto label_22c994;
        }
    }
    ctx->pc = 0x22C984u;
label_22c984:
    // 0x22c984: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c988:
    // 0x22c988: 0xc083976  jal         func_20E5D8
label_22c98c:
    if (ctx->pc == 0x22C98Cu) {
        ctx->pc = 0x22C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C988u;
        // 0x22c98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C990u;
        goto label_22c990;
    }
    ctx->pc = 0x22C988u;
    SET_GPR_U32(ctx, 31, 0x22C990u);
    ctx->pc = 0x22C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C988u;
    // 0x22c98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x22C988u, 0x22C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C990u;
label_22c990:
    // 0x22c990: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x22c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c994:
    // 0x22c994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c998:
    // 0x22c998: 0x0  nop
    ctx->pc = 0x22c998u;
    // NOP
label_22c99c:
    // 0x22c99c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c9a0:
    // 0x22c9a0: 0x0  nop
    ctx->pc = 0x22c9a0u;
    // NOP
label_22c9a4:
    // 0x22c9a4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_22c9a8:
    if (ctx->pc == 0x22C9A8u) {
        ctx->pc = 0x22C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A4u;
        // 0x22c9a8: 0x24020577  addiu       $v0, $zero, 0x577 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9ACu;
        goto label_22c9ac;
    }
    ctx->pc = 0x22C9A4u;
    {
        const bool branch_taken_0x22c9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A4u;
        // 0x22c9a8: 0x24020577  addiu       $v0, $zero, 0x577 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9a4) {
            ctx->pc = 0x22CA1Cu;
            goto label_22ca1c;
        }
    }
    ctx->pc = 0x22C9ACu;
label_22c9ac:
    // 0x22c9ac: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_22c9b0:
    if (ctx->pc == 0x22C9B0u) {
        ctx->pc = 0x22C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9ACu;
        // 0x22c9b0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9B4u;
        goto label_22c9b4;
    }
    ctx->pc = 0x22C9ACu;
    {
        const bool branch_taken_0x22c9ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9ACu;
        // 0x22c9b0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9ac) {
            ctx->pc = 0x22C9C0u;
            goto label_22c9c0;
        }
    }
    ctx->pc = 0x22C9B4u;
label_22c9b4:
    // 0x22c9b4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22c9b8:
    // 0x22c9b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_22c9bc:
    if (ctx->pc == 0x22C9BCu) {
        ctx->pc = 0x22C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9B8u;
        // 0x22c9bc: 0x24060578  addiu       $a2, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9C0u;
        goto label_22c9c0;
    }
    ctx->pc = 0x22C9B8u;
    {
        const bool branch_taken_0x22c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9B8u;
        // 0x22c9bc: 0x24060578  addiu       $a2, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9b8) {
            ctx->pc = 0x22C9D0u;
            goto label_22c9d0;
        }
    }
    ctx->pc = 0x22C9C0u;
label_22c9c0:
    // 0x22c9c0: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x22c9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
label_22c9c4:
    // 0x22c9c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22c9c8:
    if (ctx->pc == 0x22C9C8u) {
        ctx->pc = 0x22C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9C4u;
        // 0x22c9c8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9CCu;
        goto label_22c9cc;
    }
    ctx->pc = 0x22C9C4u;
    {
        const bool branch_taken_0x22c9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9C4u;
        // 0x22c9c8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9c4) {
            ctx->pc = 0x22C9F0u;
            goto label_22c9f0;
        }
    }
    ctx->pc = 0x22C9CCu;
label_22c9cc:
    // 0x22c9cc: 0x2406058e  addiu       $a2, $zero, 0x58E
    ctx->pc = 0x22c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1422));
label_22c9d0:
    // 0x22c9d0: 0xc06a0cc  jal         func_1A8330
label_22c9d4:
    if (ctx->pc == 0x22C9D4u) {
        ctx->pc = 0x22C9D8u;
        goto label_22c9d8;
    }
    ctx->pc = 0x22C9D0u;
    SET_GPR_U32(ctx, 31, 0x22C9D8u);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22C9D0u, 0x22C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9D8u;
label_22c9d8:
    // 0x22c9d8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22c9dc:
    // 0x22c9dc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22c9e0:
    // 0x22c9e0: 0xc06a0cc  jal         func_1A8330
label_22c9e4:
    if (ctx->pc == 0x22C9E4u) {
        ctx->pc = 0x22C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9E0u;
        // 0x22c9e4: 0x240605ac  addiu       $a2, $zero, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9E8u;
        goto label_22c9e8;
    }
    ctx->pc = 0x22C9E0u;
    SET_GPR_U32(ctx, 31, 0x22C9E8u);
    ctx->pc = 0x22C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9E0u;
    // 0x22c9e4: 0x240605ac  addiu       $a2, $zero, 0x5AC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22C9E0u, 0x22C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9E8u;
label_22c9e8:
    // 0x22c9e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_22c9ec:
    if (ctx->pc == 0x22C9ECu) {
        ctx->pc = 0x22C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9E8u;
        // 0x22c9ec: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9F0u;
        goto label_22c9f0;
    }
    ctx->pc = 0x22C9E8u;
    {
        const bool branch_taken_0x22c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9E8u;
        // 0x22c9ec: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9e8) {
            ctx->pc = 0x22CA0Cu;
            goto label_22ca0c;
        }
    }
    ctx->pc = 0x22C9F0u;
label_22c9f0:
    // 0x22c9f0: 0xc06a0cc  jal         func_1A8330
label_22c9f4:
    if (ctx->pc == 0x22C9F4u) {
        ctx->pc = 0x22C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9F0u;
        // 0x22c9f4: 0x2406058f  addiu       $a2, $zero, 0x58F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9F8u;
        goto label_22c9f8;
    }
    ctx->pc = 0x22C9F0u;
    SET_GPR_U32(ctx, 31, 0x22C9F8u);
    ctx->pc = 0x22C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9F0u;
    // 0x22c9f4: 0x2406058f  addiu       $a2, $zero, 0x58F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1423));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22C9F0u, 0x22C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9F8u;
label_22c9f8:
    // 0x22c9f8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22c9fc:
    // 0x22c9fc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22ca00:
    // 0x22ca00: 0xc06a0cc  jal         func_1A8330
label_22ca04:
    if (ctx->pc == 0x22CA04u) {
        ctx->pc = 0x22CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA00u;
        // 0x22ca04: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA08u;
        goto label_22ca08;
    }
    ctx->pc = 0x22CA00u;
    SET_GPR_U32(ctx, 31, 0x22CA08u);
    ctx->pc = 0x22CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA00u;
    // 0x22ca04: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CA00u, 0x22CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA08u;
label_22ca08:
    // 0x22ca08: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22ca0c:
    // 0x22ca0c: 0xc069b78  jal         func_1A6DE0
label_22ca10:
    if (ctx->pc == 0x22CA10u) {
        ctx->pc = 0x22CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA0Cu;
        // 0x22ca10: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA14u;
        goto label_22ca14;
    }
    ctx->pc = 0x22CA0Cu;
    SET_GPR_U32(ctx, 31, 0x22CA14u);
    ctx->pc = 0x22CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA0Cu;
    // 0x22ca10: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x22CA0Cu, 0x22CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA14u;
label_22ca14:
    // 0x22ca14: 0x1000010d  b           . + 4 + (0x10D << 2)
label_22ca18:
    if (ctx->pc == 0x22CA18u) {
        ctx->pc = 0x22CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA14u;
        // 0x22ca18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA1Cu;
        goto label_22ca1c;
    }
    ctx->pc = 0x22CA14u;
    {
        const bool branch_taken_0x22ca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA14u;
        // 0x22ca18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca14) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22CA1Cu;
label_22ca1c:
    // 0x22ca1c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22ca20:
    // 0x22ca20: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22ca24:
    // 0x22ca24: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x22ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
label_22ca28:
    // 0x22ca28: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22ca28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22ca2c:
    // 0x22ca2c: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_22ca30:
    if (ctx->pc == 0x22CA30u) {
        ctx->pc = 0x22CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA2Cu;
        // 0x22ca30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA34u;
        goto label_22ca34;
    }
    ctx->pc = 0x22CA2Cu;
    {
        const bool branch_taken_0x22ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA2Cu;
        // 0x22ca30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca2c) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22CA34u;
label_22ca34:
    // 0x22ca34: 0xc069b4e  jal         func_1A6D38
label_22ca38:
    if (ctx->pc == 0x22CA38u) {
        ctx->pc = 0x22CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA34u;
        // 0x22ca38: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA3Cu;
        goto label_22ca3c;
    }
    ctx->pc = 0x22CA34u;
    SET_GPR_U32(ctx, 31, 0x22CA3Cu);
    ctx->pc = 0x22CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA34u;
    // 0x22ca38: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D38u, 0x22CA34u, 0x22CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA3Cu;
label_22ca3c:
    // 0x22ca3c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22ca40:
    // 0x22ca40: 0xc06a23e  jal         func_1A88F8
label_22ca44:
    if (ctx->pc == 0x22CA44u) {
        ctx->pc = 0x22CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA40u;
        // 0x22ca44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA48u;
        goto label_22ca48;
    }
    ctx->pc = 0x22CA40u;
    SET_GPR_U32(ctx, 31, 0x22CA48u);
    ctx->pc = 0x22CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA40u;
    // 0x22ca44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22CA40u, 0x22CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA48u;
label_22ca48:
    // 0x22ca48: 0x10000100  b           . + 4 + (0x100 << 2)
label_22ca4c:
    if (ctx->pc == 0x22CA4Cu) {
        ctx->pc = 0x22CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA48u;
        // 0x22ca4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA50u;
        goto label_22ca50;
    }
    ctx->pc = 0x22CA48u;
    {
        const bool branch_taken_0x22ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA48u;
        // 0x22ca4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca48) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22CA50u;
label_22ca50:
    // 0x22ca50: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22ca54:
    // 0x22ca54: 0x10a2ff29  beq         $a1, $v0, . + 4 + (-0xD7 << 2)
label_22ca58:
    if (ctx->pc == 0x22CA58u) {
        ctx->pc = 0x22CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA54u;
        // 0x22ca58: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA5Cu;
        goto label_22ca5c;
    }
    ctx->pc = 0x22CA54u;
    {
        const bool branch_taken_0x22ca54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA54u;
        // 0x22ca58: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca54) {
            ctx->pc = 0x22C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c6fc;
        }
    }
    ctx->pc = 0x22CA5Cu;
label_22ca5c:
    // 0x22ca5c: 0x10a2ff27  beq         $a1, $v0, . + 4 + (-0xD9 << 2)
label_22ca60:
    if (ctx->pc == 0x22CA60u) {
        ctx->pc = 0x22CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA5Cu;
        // 0x22ca60: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA64u;
        goto label_22ca64;
    }
    ctx->pc = 0x22CA5Cu;
    {
        const bool branch_taken_0x22ca5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA5Cu;
        // 0x22ca60: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca5c) {
            ctx->pc = 0x22C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c6fc;
        }
    }
    ctx->pc = 0x22CA64u;
label_22ca64:
    // 0x22ca64: 0x10a2ff25  beq         $a1, $v0, . + 4 + (-0xDB << 2)
label_22ca68:
    if (ctx->pc == 0x22CA68u) {
        ctx->pc = 0x22CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA64u;
        // 0x22ca68: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA6Cu;
        goto label_22ca6c;
    }
    ctx->pc = 0x22CA64u;
    {
        const bool branch_taken_0x22ca64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA64u;
        // 0x22ca68: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca64) {
            ctx->pc = 0x22C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c6fc;
        }
    }
    ctx->pc = 0x22CA6Cu;
label_22ca6c:
    // 0x22ca6c: 0x10a2ff23  beq         $a1, $v0, . + 4 + (-0xDD << 2)
label_22ca70:
    if (ctx->pc == 0x22CA70u) {
        ctx->pc = 0x22CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA6Cu;
        // 0x22ca70: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA74u;
        goto label_22ca74;
    }
    ctx->pc = 0x22CA6Cu;
    {
        const bool branch_taken_0x22ca6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA6Cu;
        // 0x22ca70: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca6c) {
            ctx->pc = 0x22C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c6fc;
        }
    }
    ctx->pc = 0x22CA74u;
label_22ca74:
    // 0x22ca74: 0x10a2ff21  beq         $a1, $v0, . + 4 + (-0xDF << 2)
label_22ca78:
    if (ctx->pc == 0x22CA78u) {
        ctx->pc = 0x22CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA74u;
        // 0x22ca78: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA7Cu;
        goto label_22ca7c;
    }
    ctx->pc = 0x22CA74u;
    {
        const bool branch_taken_0x22ca74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA74u;
        // 0x22ca78: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca74) {
            ctx->pc = 0x22C6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c6fc;
        }
    }
    ctx->pc = 0x22CA7Cu;
label_22ca7c:
    // 0x22ca7c: 0x10a200f3  beq         $a1, $v0, . + 4 + (0xF3 << 2)
label_22ca80:
    if (ctx->pc == 0x22CA80u) {
        ctx->pc = 0x22CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA7Cu;
        // 0x22ca80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA84u;
        goto label_22ca84;
    }
    ctx->pc = 0x22CA7Cu;
    {
        const bool branch_taken_0x22ca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA7Cu;
        // 0x22ca80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca7c) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22CA84u;
label_22ca84:
    // 0x22ca84: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x22ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_22ca88:
    // 0x22ca88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22ca8c:
    // 0x22ca8c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x22ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_22ca90:
    // 0x22ca90: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x22ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ca94:
    // 0x22ca94: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x22ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22ca98:
    // 0x22ca98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22ca98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22ca9c:
    // 0x22ca9c: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x22ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22caa0:
    // 0x22caa0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x22caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22caa4:
    // 0x22caa4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22caa4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22caa8:
    // 0x22caa8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x22caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22caac:
    // 0x22caac: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x22caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22cab0:
    // 0x22cab0: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x22cab0u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22cab4:
    // 0x22cab4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22cab8:
    // 0x22cab8: 0x56620036  bnel        $s3, $v0, . + 4 + (0x36 << 2)
label_22cabc:
    if (ctx->pc == 0x22CABCu) {
        ctx->pc = 0x22CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAB8u;
        // 0x22cabc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAC0u;
        goto label_22cac0;
    }
    ctx->pc = 0x22CAB8u;
    {
        const bool branch_taken_0x22cab8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cab8) {
            ctx->pc = 0x22CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CAB8u;
            // 0x22cabc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB94u;
            goto label_22cb94;
        }
    }
    ctx->pc = 0x22CAC0u;
label_22cac0:
    // 0x22cac0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x22cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cac4:
    // 0x22cac4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22cac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22cac8:
    // 0x22cac8: 0x0  nop
    ctx->pc = 0x22cac8u;
    // NOP
label_22cacc:
    // 0x22cacc: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x22caccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cad0:
    // 0x22cad0: 0x0  nop
    ctx->pc = 0x22cad0u;
    // NOP
label_22cad4:
    // 0x22cad4: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
label_22cad8:
    if (ctx->pc == 0x22CAD8u) {
        ctx->pc = 0x22CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAD4u;
        // 0x22cad8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CADCu;
        goto label_22cadc;
    }
    ctx->pc = 0x22CAD4u;
    {
        const bool branch_taken_0x22cad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cad4) {
            ctx->pc = 0x22CAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CAD4u;
            // 0x22cad8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB94u;
            goto label_22cb94;
        }
    }
    ctx->pc = 0x22CADCu;
label_22cadc:
    // 0x22cadc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x22cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22cae0:
    // 0x22cae0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_22cae4:
    // 0x22cae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22cae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cae8:
    // 0x22cae8: 0x0  nop
    ctx->pc = 0x22cae8u;
    // NOP
label_22caec:
    // 0x22caec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x22caecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22caf0:
    // 0x22caf0: 0x0  nop
    ctx->pc = 0x22caf0u;
    // NOP
label_22caf4:
    // 0x22caf4: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_22caf8:
    if (ctx->pc == 0x22CAF8u) {
        ctx->pc = 0x22CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAF4u;
        // 0x22caf8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAFCu;
        goto label_22cafc;
    }
    ctx->pc = 0x22CAF4u;
    {
        const bool branch_taken_0x22caf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22caf4) {
            ctx->pc = 0x22CAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CAF4u;
            // 0x22caf8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB94u;
            goto label_22cb94;
        }
    }
    ctx->pc = 0x22CAFCu;
label_22cafc:
    // 0x22cafc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x22cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cb00:
    // 0x22cb00: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x22cb00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cb04:
    // 0x22cb04: 0x0  nop
    ctx->pc = 0x22cb04u;
    // NOP
label_22cb08:
    // 0x22cb08: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
label_22cb0c:
    if (ctx->pc == 0x22CB0Cu) {
        ctx->pc = 0x22CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB08u;
        // 0x22cb0c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB10u;
        goto label_22cb10;
    }
    ctx->pc = 0x22CB08u;
    {
        const bool branch_taken_0x22cb08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cb08) {
            ctx->pc = 0x22CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CB08u;
            // 0x22cb0c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB94u;
            goto label_22cb94;
        }
    }
    ctx->pc = 0x22CB10u;
label_22cb10:
    // 0x22cb10: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_22cb14:
    if (ctx->pc == 0x22CB14u) {
        ctx->pc = 0x22CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB10u;
        // 0x22cb14: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB18u;
        goto label_22cb18;
    }
    ctx->pc = 0x22CB10u;
    {
        const bool branch_taken_0x22cb10 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB10u;
        // 0x22cb14: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb10) {
            ctx->pc = 0x22CB2Cu;
            goto label_22cb2c;
        }
    }
    ctx->pc = 0x22CB18u;
label_22cb18:
    // 0x22cb18: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x22cb18u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cb1c:
    // 0x22cb1c: 0x0  nop
    ctx->pc = 0x22cb1cu;
    // NOP
label_22cb20:
    // 0x22cb20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22cb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22cb24:
    // 0x22cb24: 0x10000007  b           . + 4 + (0x7 << 2)
label_22cb28:
    if (ctx->pc == 0x22CB28u) {
        ctx->pc = 0x22CB2Cu;
        goto label_22cb2c;
    }
    ctx->pc = 0x22CB24u;
    {
        const bool branch_taken_0x22cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb24) {
            ctx->pc = 0x22CB44u;
            goto label_22cb44;
        }
    }
    ctx->pc = 0x22CB2Cu;
label_22cb2c:
    // 0x22cb2c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_22cb30:
    // 0x22cb30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22cb34:
    // 0x22cb34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cb38:
    // 0x22cb38: 0x0  nop
    ctx->pc = 0x22cb38u;
    // NOP
label_22cb3c:
    // 0x22cb3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22cb3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22cb40:
    // 0x22cb40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22cb40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22cb44:
    // 0x22cb44: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x22cb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_22cb48:
    // 0x22cb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22cb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cb4c:
    // 0x22cb4c: 0x0  nop
    ctx->pc = 0x22cb4cu;
    // NOP
label_22cb50:
    // 0x22cb50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x22cb50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cb54:
    // 0x22cb54: 0x0  nop
    ctx->pc = 0x22cb54u;
    // NOP
label_22cb58:
    // 0x22cb58: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_22cb5c:
    if (ctx->pc == 0x22CB5Cu) {
        ctx->pc = 0x22CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB58u;
        // 0x22cb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB60u;
        goto label_22cb60;
    }
    ctx->pc = 0x22CB58u;
    {
        const bool branch_taken_0x22cb58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB58u;
        // 0x22cb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb58) {
            ctx->pc = 0x22CB90u;
            goto label_22cb90;
        }
    }
    ctx->pc = 0x22CB60u;
label_22cb60:
    // 0x22cb60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_22cb64:
    // 0x22cb64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22cb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cb68:
    // 0x22cb68: 0xae020488  sw          $v0, 0x488($s0)
    ctx->pc = 0x22cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 2));
label_22cb6c:
    // 0x22cb6c: 0xc083976  jal         func_20E5D8
label_22cb70:
    if (ctx->pc == 0x22CB70u) {
        ctx->pc = 0x22CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB6Cu;
        // 0x22cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB74u;
        goto label_22cb74;
    }
    ctx->pc = 0x22CB6Cu;
    SET_GPR_U32(ctx, 31, 0x22CB74u);
    ctx->pc = 0x22CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB6Cu;
    // 0x22cb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x22CB6Cu, 0x22CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB74u;
label_22cb74:
    // 0x22cb74: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x22cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_22cb78:
    // 0x22cb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cb7c:
    // 0x22cb7c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_22cb80:
    // 0x22cb80: 0x40f809  jalr        $v0
label_22cb84:
    if (ctx->pc == 0x22CB84u) {
        ctx->pc = 0x22CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB80u;
        // 0x22cb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB88u;
        goto label_22cb88;
    }
    ctx->pc = 0x22CB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CB88u);
        ctx->pc = 0x22CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB80u;
        // 0x22cb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB80u, 0x22CB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CB88u;
label_22cb88:
    // 0x22cb88: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_22cb8c:
    if (ctx->pc == 0x22CB8Cu) {
        ctx->pc = 0x22CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB88u;
        // 0x22cb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB90u;
        goto label_22cb90;
    }
    ctx->pc = 0x22CB88u;
    {
        const bool branch_taken_0x22cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB88u;
        // 0x22cb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb88) {
            ctx->pc = 0x22CE4Cu;
            goto label_22ce4c;
        }
    }
    ctx->pc = 0x22CB90u;
label_22cb90:
    // 0x22cb90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x22cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_22cb94:
    // 0x22cb94: 0x8c629890  lw          $v0, -0x6770($v1)
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940816)));
label_22cb98:
    // 0x22cb98: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x22cb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_22cb9c:
    // 0x22cb9c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_22cba0:
    if (ctx->pc == 0x22CBA0u) {
        ctx->pc = 0x22CBA4u;
        goto label_22cba4;
    }
    ctx->pc = 0x22CB9Cu;
    {
        const bool branch_taken_0x22cb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb9c) {
            ctx->pc = 0x22CD84u;
            goto label_22cd84;
        }
    }
    ctx->pc = 0x22CBA4u;
label_22cba4:
    // 0x22cba4: 0xc06b600  jal         func_1AD800
label_22cba8:
    if (ctx->pc == 0x22CBA8u) {
        ctx->pc = 0x22CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBA4u;
        // 0x22cba8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBACu;
        goto label_22cbac;
    }
    ctx->pc = 0x22CBA4u;
    SET_GPR_U32(ctx, 31, 0x22CBACu);
    ctx->pc = 0x22CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBA4u;
    // 0x22cba8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22CBA4u, 0x22CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBACu;
label_22cbac:
    // 0x22cbac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_22cbb0:
    if (ctx->pc == 0x22CBB0u) {
        ctx->pc = 0x22CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBACu;
        // 0x22cbb0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBB4u;
        goto label_22cbb4;
    }
    ctx->pc = 0x22CBACu;
    {
        const bool branch_taken_0x22cbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBACu;
        // 0x22cbb0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbac) {
            ctx->pc = 0x22CC78u;
            goto label_22cc78;
        }
    }
    ctx->pc = 0x22CBB4u;
label_22cbb4:
    // 0x22cbb4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cbb8:
    // 0x22cbb8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22cbbc:
    // 0x22cbbc: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
label_22cbc0:
    // 0x22cbc0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x22cbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_22cbc4:
    // 0x22cbc4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_22cbc8:
    if (ctx->pc == 0x22CBC8u) {
        ctx->pc = 0x22CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBC4u;
        // 0x22cbc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBCCu;
        goto label_22cbcc;
    }
    ctx->pc = 0x22CBC4u;
    {
        const bool branch_taken_0x22cbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBC4u;
        // 0x22cbc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbc4) {
            ctx->pc = 0x22CC78u;
            goto label_22cc78;
        }
    }
    ctx->pc = 0x22CBCCu;
label_22cbcc:
    // 0x22cbcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cbccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cbd0:
    // 0x22cbd0: 0x0  nop
    ctx->pc = 0x22cbd0u;
    // NOP
label_22cbd4:
    // 0x22cbd4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22cbd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cbd8:
    // 0x22cbd8: 0x0  nop
    ctx->pc = 0x22cbd8u;
    // NOP
label_22cbdc:
    // 0x22cbdc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_22cbe0:
    if (ctx->pc == 0x22CBE0u) {
        ctx->pc = 0x22CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBDCu;
        // 0x22cbe0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBE4u;
        goto label_22cbe4;
    }
    ctx->pc = 0x22CBDCu;
    {
        const bool branch_taken_0x22cbdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBDCu;
        // 0x22cbe0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbdc) {
            ctx->pc = 0x22CC24u;
            goto label_22cc24;
        }
    }
    ctx->pc = 0x22CBE4u;
label_22cbe4:
    // 0x22cbe4: 0xc06a0cc  jal         func_1A8330
label_22cbe8:
    if (ctx->pc == 0x22CBE8u) {
        ctx->pc = 0x22CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBE4u;
        // 0x22cbe8: 0x24060567  addiu       $a2, $zero, 0x567 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBECu;
        goto label_22cbec;
    }
    ctx->pc = 0x22CBE4u;
    SET_GPR_U32(ctx, 31, 0x22CBECu);
    ctx->pc = 0x22CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBE4u;
    // 0x22cbe8: 0x24060567  addiu       $a2, $zero, 0x567 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CBE4u, 0x22CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBECu;
label_22cbec:
    // 0x22cbec: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cbf0:
    // 0x22cbf0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22cbf4:
    // 0x22cbf4: 0xc06a0cc  jal         func_1A8330
label_22cbf8:
    if (ctx->pc == 0x22CBF8u) {
        ctx->pc = 0x22CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF4u;
        // 0x22cbf8: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBFCu;
        goto label_22cbfc;
    }
    ctx->pc = 0x22CBF4u;
    SET_GPR_U32(ctx, 31, 0x22CBFCu);
    ctx->pc = 0x22CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBF4u;
    // 0x22cbf8: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CBF4u, 0x22CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBFCu;
label_22cbfc:
    // 0x22cbfc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc00:
    // 0x22cc00: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_22cc04:
    // 0x22cc04: 0xc06a0cc  jal         func_1A8330
label_22cc08:
    if (ctx->pc == 0x22CC08u) {
        ctx->pc = 0x22CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC04u;
        // 0x22cc08: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC0Cu;
        goto label_22cc0c;
    }
    ctx->pc = 0x22CC04u;
    SET_GPR_U32(ctx, 31, 0x22CC0Cu);
    ctx->pc = 0x22CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC04u;
    // 0x22cc08: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC04u, 0x22CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC0Cu;
label_22cc0c:
    // 0x22cc0c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc10:
    // 0x22cc10: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22cc14:
    // 0x22cc14: 0xc06a0cc  jal         func_1A8330
label_22cc18:
    if (ctx->pc == 0x22CC18u) {
        ctx->pc = 0x22CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC14u;
        // 0x22cc18: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC1Cu;
        goto label_22cc1c;
    }
    ctx->pc = 0x22CC14u;
    SET_GPR_U32(ctx, 31, 0x22CC1Cu);
    ctx->pc = 0x22CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC14u;
    // 0x22cc18: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC14u, 0x22CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC1Cu;
label_22cc1c:
    // 0x22cc1c: 0x10000010  b           . + 4 + (0x10 << 2)
label_22cc20:
    if (ctx->pc == 0x22CC20u) {
        ctx->pc = 0x22CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC1Cu;
        // 0x22cc20: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC24u;
        goto label_22cc24;
    }
    ctx->pc = 0x22CC1Cu;
    {
        const bool branch_taken_0x22cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC1Cu;
        // 0x22cc20: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc1c) {
            ctx->pc = 0x22CC60u;
            goto label_22cc60;
        }
    }
    ctx->pc = 0x22CC24u;
label_22cc24:
    // 0x22cc24: 0xc06a0cc  jal         func_1A8330
label_22cc28:
    if (ctx->pc == 0x22CC28u) {
        ctx->pc = 0x22CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC24u;
        // 0x22cc28: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC2Cu;
        goto label_22cc2c;
    }
    ctx->pc = 0x22CC24u;
    SET_GPR_U32(ctx, 31, 0x22CC2Cu);
    ctx->pc = 0x22CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC24u;
    // 0x22cc28: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC24u, 0x22CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC2Cu;
label_22cc2c:
    // 0x22cc2c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc30:
    // 0x22cc30: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22cc34:
    // 0x22cc34: 0xc06a0cc  jal         func_1A8330
label_22cc38:
    if (ctx->pc == 0x22CC38u) {
        ctx->pc = 0x22CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC34u;
        // 0x22cc38: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC3Cu;
        goto label_22cc3c;
    }
    ctx->pc = 0x22CC34u;
    SET_GPR_U32(ctx, 31, 0x22CC3Cu);
    ctx->pc = 0x22CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC34u;
    // 0x22cc38: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC34u, 0x22CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC3Cu;
label_22cc3c:
    // 0x22cc3c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc40:
    // 0x22cc40: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_22cc44:
    // 0x22cc44: 0xc06a0cc  jal         func_1A8330
label_22cc48:
    if (ctx->pc == 0x22CC48u) {
        ctx->pc = 0x22CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC44u;
        // 0x22cc48: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC4Cu;
        goto label_22cc4c;
    }
    ctx->pc = 0x22CC44u;
    SET_GPR_U32(ctx, 31, 0x22CC4Cu);
    ctx->pc = 0x22CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC44u;
    // 0x22cc48: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC44u, 0x22CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC4Cu;
label_22cc4c:
    // 0x22cc4c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc50:
    // 0x22cc50: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22cc54:
    // 0x22cc54: 0xc06a0cc  jal         func_1A8330
label_22cc58:
    if (ctx->pc == 0x22CC58u) {
        ctx->pc = 0x22CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC54u;
        // 0x22cc58: 0x24060686  addiu       $a2, $zero, 0x686 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1670));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC5Cu;
        goto label_22cc5c;
    }
    ctx->pc = 0x22CC54u;
    SET_GPR_U32(ctx, 31, 0x22CC5Cu);
    ctx->pc = 0x22CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC54u;
    // 0x22cc58: 0x24060686  addiu       $a2, $zero, 0x686 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1670));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22CC54u, 0x22CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC5Cu;
label_22cc5c:
    // 0x22cc5c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc60:
    // 0x22cc60: 0xc069b36  jal         func_1A6CD8
label_22cc64:
    if (ctx->pc == 0x22CC64u) {
        ctx->pc = 0x22CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC60u;
        // 0x22cc64: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC68u;
        goto label_22cc68;
    }
    ctx->pc = 0x22CC60u;
    SET_GPR_U32(ctx, 31, 0x22CC68u);
    ctx->pc = 0x22CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC60u;
    // 0x22cc64: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22CC60u, 0x22CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC68u;
label_22cc68:
    // 0x22cc68: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cc6c:
    // 0x22cc6c: 0xc06a23e  jal         func_1A88F8
label_22cc70:
    if (ctx->pc == 0x22CC70u) {
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC6Cu;
        // 0x22cc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC74u;
        goto label_22cc74;
    }
    ctx->pc = 0x22CC6Cu;
    SET_GPR_U32(ctx, 31, 0x22CC74u);
    ctx->pc = 0x22CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC6Cu;
    // 0x22cc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22CC6Cu, 0x22CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC74u;
label_22cc74:
    // 0x22cc74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22cc78:
    // 0x22cc78: 0x16620026  bne         $s3, $v0, . + 4 + (0x26 << 2)
label_22cc7c:
    if (ctx->pc == 0x22CC7Cu) {
        ctx->pc = 0x22CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC78u;
        // 0x22cc7c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC80u;
        goto label_22cc80;
    }
    ctx->pc = 0x22CC78u;
    {
        const bool branch_taken_0x22cc78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC78u;
        // 0x22cc7c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc78) {
            ctx->pc = 0x22CD14u;
            goto label_22cd14;
        }
    }
    ctx->pc = 0x22CC80u;
label_22cc80:
    // 0x22cc80: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22cc84:
    // 0x22cc84: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22cc88:
    // 0x22cc88: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_22cc8c:
    if (ctx->pc == 0x22CC8Cu) {
        ctx->pc = 0x22CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC88u;
        // 0x22cc8c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC90u;
        goto label_22cc90;
    }
    ctx->pc = 0x22CC88u;
    {
        const bool branch_taken_0x22cc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc88) {
            ctx->pc = 0x22CC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC88u;
            // 0x22cc8c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD14u;
            goto label_22cd14;
        }
    }
    ctx->pc = 0x22CC90u;
label_22cc90:
    // 0x22cc90: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_22cc94:
    if (ctx->pc == 0x22CC94u) {
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC98u;
        goto label_22cc98;
    }
    ctx->pc = 0x22CC90u;
    {
        const bool branch_taken_0x22cc90 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC90u;
        // 0x22cc94: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc90) {
            ctx->pc = 0x22CCACu;
            goto label_22ccac;
        }
    }
    ctx->pc = 0x22CC98u;
label_22cc98:
    // 0x22cc98: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x22cc98u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cc9c:
    // 0x22cc9c: 0x0  nop
    ctx->pc = 0x22cc9cu;
    // NOP
label_22cca0:
    // 0x22cca0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22cca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22cca4:
    // 0x22cca4: 0x10000008  b           . + 4 + (0x8 << 2)
label_22cca8:
    if (ctx->pc == 0x22CCA8u) {
        ctx->pc = 0x22CCACu;
        goto label_22ccac;
    }
    ctx->pc = 0x22CCA4u;
    {
        const bool branch_taken_0x22cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cca4) {
            ctx->pc = 0x22CCC8u;
            goto label_22ccc8;
        }
    }
    ctx->pc = 0x22CCACu;
label_22ccac:
    // 0x22ccac: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x22ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_22ccb0:
    // 0x22ccb0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_22ccb4:
    // 0x22ccb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22ccb8:
    // 0x22ccb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ccb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ccbc:
    // 0x22ccbc: 0x0  nop
    ctx->pc = 0x22ccbcu;
    // NOP
label_22ccc0:
    // 0x22ccc0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22ccc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22ccc4:
    // 0x22ccc4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x22ccc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_22ccc8:
    // 0x22ccc8: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x22ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_22cccc:
    // 0x22cccc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22ccccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_22ccd0:
    // 0x22ccd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ccd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ccd4:
    // 0x22ccd4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_22ccd8:
    // 0x22ccd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22ccd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ccdc:
    // 0x22ccdc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x22ccdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_22cce0:
    // 0x22cce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22cce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cce4:
    // 0x22cce4: 0x0  nop
    ctx->pc = 0x22cce4u;
    // NOP
label_22cce8:
    // 0x22cce8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22ccec:
    if (ctx->pc == 0x22CCECu) {
        ctx->pc = 0x22CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCE8u;
        // 0x22ccec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCF0u;
        goto label_22ccf0;
    }
    ctx->pc = 0x22CCE8u;
    {
        const bool branch_taken_0x22cce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cce8) {
            ctx->pc = 0x22CCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CCE8u;
            // 0x22ccec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CCF0u;
            goto label_22ccf0;
        }
    }
    ctx->pc = 0x22CCF0u;
label_22ccf0:
    // 0x22ccf0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22ccf4:
    // 0x22ccf4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22ccf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_22ccf8:
    // 0x22ccf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ccfc:
    // 0x22ccfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22cd00:
    // 0x22cd00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cd04:
    // 0x22cd04: 0x40f809  jalr        $v0
label_22cd08:
    if (ctx->pc == 0x22CD08u) {
        ctx->pc = 0x22CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD04u;
        // 0x22cd08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD0Cu;
        goto label_22cd0c;
    }
    ctx->pc = 0x22CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CD0Cu);
        ctx->pc = 0x22CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD04u;
        // 0x22cd08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD04u, 0x22CD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CD0Cu;
label_22cd0c:
    // 0x22cd0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_22cd10:
    if (ctx->pc == 0x22CD10u) {
        ctx->pc = 0x22CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD0Cu;
        // 0x22cd10: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD14u;
        goto label_22cd14;
    }
    ctx->pc = 0x22CD0Cu;
    {
        const bool branch_taken_0x22cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD0Cu;
        // 0x22cd10: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd0c) {
            ctx->pc = 0x22CD78u;
            goto label_22cd78;
        }
    }
    ctx->pc = 0x22CD14u;
label_22cd14:
    // 0x22cd14: 0x8e040218  lw          $a0, 0x218($s0)
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_22cd18:
    // 0x22cd18: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x22cd18u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_22cd1c:
    // 0x22cd1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22cd20:
    if (ctx->pc == 0x22CD20u) {
        ctx->pc = 0x22CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD1Cu;
        // 0x22cd20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD24u;
        goto label_22cd24;
    }
    ctx->pc = 0x22CD1Cu;
    {
        const bool branch_taken_0x22cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd1c) {
            ctx->pc = 0x22CD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CD1Cu;
            // 0x22cd20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD24u;
            goto label_22cd24;
        }
    }
    ctx->pc = 0x22CD24u;
label_22cd24:
    // 0x22cd24: 0x2812  mflo        $a1
    ctx->pc = 0x22cd24u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_22cd28:
    // 0x22cd28: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_22cd2c:
    if (ctx->pc == 0x22CD2Cu) {
        ctx->pc = 0x22CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD28u;
        // 0x22cd2c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD30u;
        goto label_22cd30;
    }
    ctx->pc = 0x22CD28u;
    {
        const bool branch_taken_0x22cd28 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD28u;
        // 0x22cd2c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd28) {
            ctx->pc = 0x22CD44u;
            goto label_22cd44;
        }
    }
    ctx->pc = 0x22CD30u;
label_22cd30:
    // 0x22cd30: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x22cd30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cd34:
    // 0x22cd34: 0x0  nop
    ctx->pc = 0x22cd34u;
    // NOP
label_22cd38:
    // 0x22cd38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22cd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22cd3c:
    // 0x22cd3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_22cd40:
    if (ctx->pc == 0x22CD40u) {
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD3Cu;
        // 0x22cd40: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD44u;
        goto label_22cd44;
    }
    ctx->pc = 0x22CD3Cu;
    {
        const bool branch_taken_0x22cd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD3Cu;
        // 0x22cd40: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd3c) {
            ctx->pc = 0x22CD60u;
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CD44u;
label_22cd44:
    // 0x22cd44: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22cd48:
    // 0x22cd48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22cd4c:
    // 0x22cd4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22cd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cd50:
    // 0x22cd50: 0x0  nop
    ctx->pc = 0x22cd50u;
    // NOP
label_22cd54:
    // 0x22cd54: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22cd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22cd58:
    // 0x22cd58: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x22cd58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_22cd5c:
    // 0x22cd5c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x22cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22cd60:
    // 0x22cd60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22cd64:
    // 0x22cd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cd68:
    // 0x22cd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cd6c:
    // 0x22cd6c: 0x40f809  jalr        $v0
label_22cd70:
    if (ctx->pc == 0x22CD70u) {
        ctx->pc = 0x22CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD6Cu;
        // 0x22cd70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD74u;
        goto label_22cd74;
    }
    ctx->pc = 0x22CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CD74u);
        ctx->pc = 0x22CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD6Cu;
        // 0x22cd70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CD6Cu, 0x22CD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CD74u;
label_22cd74:
    // 0x22cd74: 0x8e020390  lw          $v0, 0x390($s0)
    ctx->pc = 0x22cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_22cd78:
    // 0x22cd78: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_22cd7c:
    // 0x22cd7c: 0x10000032  b           . + 4 + (0x32 << 2)
label_22cd80:
    if (ctx->pc == 0x22CD80u) {
        ctx->pc = 0x22CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD7Cu;
        // 0x22cd80: 0xae020390  sw          $v0, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD84u;
        goto label_22cd84;
    }
    ctx->pc = 0x22CD7Cu;
    {
        const bool branch_taken_0x22cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD7Cu;
        // 0x22cd80: 0xae020390  sw          $v0, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd7c) {
            ctx->pc = 0x22CE48u;
            goto label_22ce48;
        }
    }
    ctx->pc = 0x22CD84u;
label_22cd84:
    // 0x22cd84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22cd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cd88:
    // 0x22cd88: 0x0  nop
    ctx->pc = 0x22cd88u;
    // NOP
label_22cd8c:
    // 0x22cd8c: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x22cd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cd90:
    // 0x22cd90: 0x0  nop
    ctx->pc = 0x22cd90u;
    // NOP
label_22cd94:
    // 0x22cd94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22cd98:
    if (ctx->pc == 0x22CD98u) {
        ctx->pc = 0x22CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD94u;
        // 0x22cd98: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD9Cu;
        goto label_22cd9c;
    }
    ctx->pc = 0x22CD94u;
    {
        const bool branch_taken_0x22cd94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD94u;
        // 0x22cd98: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd94) {
            ctx->pc = 0x22CDACu;
            goto label_22cdac;
        }
    }
    ctx->pc = 0x22CD9Cu;
label_22cd9c:
    // 0x22cd9c: 0xc069892  jal         func_1A6248
label_22cda0:
    if (ctx->pc == 0x22CDA0u) {
        ctx->pc = 0x22CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD9Cu;
        // 0x22cda0: 0x2405023b  addiu       $a1, $zero, 0x23B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDA4u;
        goto label_22cda4;
    }
    ctx->pc = 0x22CD9Cu;
    SET_GPR_U32(ctx, 31, 0x22CDA4u);
    ctx->pc = 0x22CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD9Cu;
    // 0x22cda0: 0x2405023b  addiu       $a1, $zero, 0x23B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22CD9Cu, 0x22CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDA4u;
label_22cda4:
    // 0x22cda4: 0x10000004  b           . + 4 + (0x4 << 2)
label_22cda8:
    if (ctx->pc == 0x22CDA8u) {
        ctx->pc = 0x22CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDA4u;
        // 0x22cda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDACu;
        goto label_22cdac;
    }
    ctx->pc = 0x22CDA4u;
    {
        const bool branch_taken_0x22cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDA4u;
        // 0x22cda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cda4) {
            ctx->pc = 0x22CDB8u;
            goto label_22cdb8;
        }
    }
    ctx->pc = 0x22CDACu;
label_22cdac:
    // 0x22cdac: 0xc069892  jal         func_1A6248
label_22cdb0:
    if (ctx->pc == 0x22CDB0u) {
        ctx->pc = 0x22CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDACu;
        // 0x22cdb0: 0x24050259  addiu       $a1, $zero, 0x259 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDB4u;
        goto label_22cdb4;
    }
    ctx->pc = 0x22CDACu;
    SET_GPR_U32(ctx, 31, 0x22CDB4u);
    ctx->pc = 0x22CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDACu;
    // 0x22cdb0: 0x24050259  addiu       $a1, $zero, 0x259 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22CDACu, 0x22CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDB4u;
label_22cdb4:
    // 0x22cdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cdb8:
    // 0x22cdb8: 0xc08dc16  jal         func_237058
label_22cdbc:
    if (ctx->pc == 0x22CDBCu) {
        ctx->pc = 0x22CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDB8u;
        // 0x22cdbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDC0u;
        goto label_22cdc0;
    }
    ctx->pc = 0x22CDB8u;
    SET_GPR_U32(ctx, 31, 0x22CDC0u);
    ctx->pc = 0x22CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDB8u;
    // 0x22cdbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x22CDB8u, 0x22CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDC0u;
label_22cdc0:
    // 0x22cdc0: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22cdc4:
    // 0x22cdc4: 0xc06c546  jal         func_1B1518
label_22cdc8:
    if (ctx->pc == 0x22CDC8u) {
        ctx->pc = 0x22CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDC4u;
        // 0x22cdc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDCCu;
        goto label_22cdcc;
    }
    ctx->pc = 0x22CDC4u;
    SET_GPR_U32(ctx, 31, 0x22CDCCu);
    ctx->pc = 0x22CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDC4u;
    // 0x22cdc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x22CDC4u, 0x22CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDCCu;
label_22cdcc:
    // 0x22cdcc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22cdd0:
    // 0x22cdd0: 0xc06a23e  jal         func_1A88F8
label_22cdd4:
    if (ctx->pc == 0x22CDD4u) {
        ctx->pc = 0x22CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD0u;
        // 0x22cdd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDD8u;
        goto label_22cdd8;
    }
    ctx->pc = 0x22CDD0u;
    SET_GPR_U32(ctx, 31, 0x22CDD8u);
    ctx->pc = 0x22CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDD0u;
    // 0x22cdd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22CDD0u, 0x22CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDD8u;
label_22cdd8:
    // 0x22cdd8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x22cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_22cddc:
    // 0x22cddc: 0x8e040218  lw          $a0, 0x218($s0)
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_22cde0:
    // 0x22cde0: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x22cde0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_22cde4:
    // 0x22cde4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22cde8:
    if (ctx->pc == 0x22CDE8u) {
        ctx->pc = 0x22CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDE4u;
        // 0x22cde8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDECu;
        goto label_22cdec;
    }
    ctx->pc = 0x22CDE4u;
    {
        const bool branch_taken_0x22cde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cde4) {
            ctx->pc = 0x22CDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CDE4u;
            // 0x22cde8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CDECu;
            goto label_22cdec;
        }
    }
    ctx->pc = 0x22CDECu;
label_22cdec:
    // 0x22cdec: 0x2812  mflo        $a1
    ctx->pc = 0x22cdecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_22cdf0:
    // 0x22cdf0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_22cdf4:
    if (ctx->pc == 0x22CDF4u) {
        ctx->pc = 0x22CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDF0u;
        // 0x22cdf4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDF8u;
        goto label_22cdf8;
    }
    ctx->pc = 0x22CDF0u;
    {
        const bool branch_taken_0x22cdf0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDF0u;
        // 0x22cdf4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdf0) {
            ctx->pc = 0x22CE0Cu;
            goto label_22ce0c;
        }
    }
    ctx->pc = 0x22CDF8u;
label_22cdf8:
    // 0x22cdf8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x22cdf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cdfc:
    // 0x22cdfc: 0x0  nop
    ctx->pc = 0x22cdfcu;
    // NOP
label_22ce00:
    // 0x22ce00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22ce00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22ce04:
    // 0x22ce04: 0x10000008  b           . + 4 + (0x8 << 2)
label_22ce08:
    if (ctx->pc == 0x22CE08u) {
        ctx->pc = 0x22CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE04u;
        // 0x22ce08: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE0Cu;
        goto label_22ce0c;
    }
    ctx->pc = 0x22CE04u;
    {
        const bool branch_taken_0x22ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE04u;
        // 0x22ce08: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce04) {
            ctx->pc = 0x22CE28u;
            goto label_22ce28;
        }
    }
    ctx->pc = 0x22CE0Cu;
label_22ce0c:
    // 0x22ce0c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22ce10:
    // 0x22ce10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22ce14:
    // 0x22ce14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ce14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ce18:
    // 0x22ce18: 0x0  nop
    ctx->pc = 0x22ce18u;
    // NOP
label_22ce1c:
    // 0x22ce1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22ce1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_22ce20:
    // 0x22ce20: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x22ce20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_22ce24:
    // 0x22ce24: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22ce28:
    // 0x22ce28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ce2c:
    // 0x22ce2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ce30:
    // 0x22ce30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ce30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ce34:
    // 0x22ce34: 0x40f809  jalr        $v0
label_22ce38:
    if (ctx->pc == 0x22CE38u) {
        ctx->pc = 0x22CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE34u;
        // 0x22ce38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE3Cu;
        goto label_22ce3c;
    }
    ctx->pc = 0x22CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CE3Cu);
        ctx->pc = 0x22CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE34u;
        // 0x22ce38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CE34u, 0x22CE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CE3Cu;
label_22ce3c:
    // 0x22ce3c: 0x8e030390  lw          $v1, 0x390($s0)
    ctx->pc = 0x22ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_22ce40:
    // 0x22ce40: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22ce44:
    // 0x22ce44: 0xae030390  sw          $v1, 0x390($s0)
    ctx->pc = 0x22ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 3));
label_22ce48:
    // 0x22ce48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ce4c:
    // 0x22ce4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ce4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ce50:
    // 0x22ce50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ce50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22ce54:
    // 0x22ce54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ce54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ce58:
    // 0x22ce58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22ce58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22ce5c:
    // 0x22ce5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22ce5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ce60:
    // 0x22ce60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22ce60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_22ce64:
    // 0x22ce64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ce68:
    // 0x22ce68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22ce6c:
    // 0x22ce6c: 0x3e00008  jr          $ra
label_22ce70:
    if (ctx->pc == 0x22CE70u) {
        ctx->pc = 0x22CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE6Cu;
        // 0x22ce70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE74u;
        goto label_22ce74;
    }
    ctx->pc = 0x22CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE6Cu;
        // 0x22ce70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CE74u;
label_22ce74:
    // 0x22ce74: 0x0  nop
    ctx->pc = 0x22ce74u;
    // NOP
    ctx->pc = 0x22ce78u;
}
