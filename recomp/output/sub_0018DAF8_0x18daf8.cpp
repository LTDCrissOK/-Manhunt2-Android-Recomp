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

// Function: sub_0018DAF8
// Address: 0x18daf8 - 0x18e3a0
void sub_0018DAF8_0x18daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DAF8_0x18daf8");
#endif

    switch (ctx->pc) {
        case 0x18daf8u: goto label_18daf8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db00u: goto label_18db00;
        case 0x18db04u: goto label_18db04;
        case 0x18db08u: goto label_18db08;
        case 0x18db0cu: goto label_18db0c;
        case 0x18db10u: goto label_18db10;
        case 0x18db14u: goto label_18db14;
        case 0x18db18u: goto label_18db18;
        case 0x18db1cu: goto label_18db1c;
        case 0x18db20u: goto label_18db20;
        case 0x18db24u: goto label_18db24;
        case 0x18db28u: goto label_18db28;
        case 0x18db2cu: goto label_18db2c;
        case 0x18db30u: goto label_18db30;
        case 0x18db34u: goto label_18db34;
        case 0x18db38u: goto label_18db38;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db40u: goto label_18db40;
        case 0x18db44u: goto label_18db44;
        case 0x18db48u: goto label_18db48;
        case 0x18db4cu: goto label_18db4c;
        case 0x18db50u: goto label_18db50;
        case 0x18db54u: goto label_18db54;
        case 0x18db58u: goto label_18db58;
        case 0x18db5cu: goto label_18db5c;
        case 0x18db60u: goto label_18db60;
        case 0x18db64u: goto label_18db64;
        case 0x18db68u: goto label_18db68;
        case 0x18db6cu: goto label_18db6c;
        case 0x18db70u: goto label_18db70;
        case 0x18db74u: goto label_18db74;
        case 0x18db78u: goto label_18db78;
        case 0x18db7cu: goto label_18db7c;
        case 0x18db80u: goto label_18db80;
        case 0x18db84u: goto label_18db84;
        case 0x18db88u: goto label_18db88;
        case 0x18db8cu: goto label_18db8c;
        case 0x18db90u: goto label_18db90;
        case 0x18db94u: goto label_18db94;
        case 0x18db98u: goto label_18db98;
        case 0x18db9cu: goto label_18db9c;
        case 0x18dba0u: goto label_18dba0;
        case 0x18dba4u: goto label_18dba4;
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc24u: goto label_18dc24;
        case 0x18dc28u: goto label_18dc28;
        case 0x18dc2cu: goto label_18dc2c;
        case 0x18dc30u: goto label_18dc30;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc3cu: goto label_18dc3c;
        case 0x18dc40u: goto label_18dc40;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc48u: goto label_18dc48;
        case 0x18dc4cu: goto label_18dc4c;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc54u: goto label_18dc54;
        case 0x18dc58u: goto label_18dc58;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc60u: goto label_18dc60;
        case 0x18dc64u: goto label_18dc64;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc6cu: goto label_18dc6c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc74u: goto label_18dc74;
        case 0x18dc78u: goto label_18dc78;
        case 0x18dc7cu: goto label_18dc7c;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc84u: goto label_18dc84;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dc8cu: goto label_18dc8c;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dc94u: goto label_18dc94;
        case 0x18dc98u: goto label_18dc98;
        case 0x18dc9cu: goto label_18dc9c;
        case 0x18dca0u: goto label_18dca0;
        case 0x18dca4u: goto label_18dca4;
        case 0x18dca8u: goto label_18dca8;
        case 0x18dcacu: goto label_18dcac;
        case 0x18dcb0u: goto label_18dcb0;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcb8u: goto label_18dcb8;
        case 0x18dcbcu: goto label_18dcbc;
        case 0x18dcc0u: goto label_18dcc0;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcc8u: goto label_18dcc8;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dcd4u: goto label_18dcd4;
        case 0x18dcd8u: goto label_18dcd8;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce4u: goto label_18dce4;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dcf4u: goto label_18dcf4;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dcfcu: goto label_18dcfc;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd04u: goto label_18dd04;
        case 0x18dd08u: goto label_18dd08;
        case 0x18dd0cu: goto label_18dd0c;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd14u: goto label_18dd14;
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd20u: goto label_18dd20;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd28u: goto label_18dd28;
        case 0x18dd2cu: goto label_18dd2c;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd40u: goto label_18dd40;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd48u: goto label_18dd48;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd54u: goto label_18dd54;
        case 0x18dd58u: goto label_18dd58;
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18dd60u: goto label_18dd60;
        case 0x18dd64u: goto label_18dd64;
        case 0x18dd68u: goto label_18dd68;
        case 0x18dd6cu: goto label_18dd6c;
        case 0x18dd70u: goto label_18dd70;
        case 0x18dd74u: goto label_18dd74;
        case 0x18dd78u: goto label_18dd78;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18dd80u: goto label_18dd80;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd88u: goto label_18dd88;
        case 0x18dd8cu: goto label_18dd8c;
        case 0x18dd90u: goto label_18dd90;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dd98u: goto label_18dd98;
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18dda0u: goto label_18dda0;
        case 0x18dda4u: goto label_18dda4;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddacu: goto label_18ddac;
        case 0x18ddb0u: goto label_18ddb0;
        case 0x18ddb4u: goto label_18ddb4;
        case 0x18ddb8u: goto label_18ddb8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddc0u: goto label_18ddc0;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18ddc8u: goto label_18ddc8;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18ddd0u: goto label_18ddd0;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18dddcu: goto label_18dddc;
        case 0x18dde0u: goto label_18dde0;
        case 0x18dde4u: goto label_18dde4;
        case 0x18dde8u: goto label_18dde8;
        case 0x18ddecu: goto label_18ddec;
        case 0x18ddf0u: goto label_18ddf0;
        case 0x18ddf4u: goto label_18ddf4;
        case 0x18ddf8u: goto label_18ddf8;
        case 0x18ddfcu: goto label_18ddfc;
        case 0x18de00u: goto label_18de00;
        case 0x18de04u: goto label_18de04;
        case 0x18de08u: goto label_18de08;
        case 0x18de0cu: goto label_18de0c;
        case 0x18de10u: goto label_18de10;
        case 0x18de14u: goto label_18de14;
        case 0x18de18u: goto label_18de18;
        case 0x18de1cu: goto label_18de1c;
        case 0x18de20u: goto label_18de20;
        case 0x18de24u: goto label_18de24;
        case 0x18de28u: goto label_18de28;
        case 0x18de2cu: goto label_18de2c;
        case 0x18de30u: goto label_18de30;
        case 0x18de34u: goto label_18de34;
        case 0x18de38u: goto label_18de38;
        case 0x18de3cu: goto label_18de3c;
        case 0x18de40u: goto label_18de40;
        case 0x18de44u: goto label_18de44;
        case 0x18de48u: goto label_18de48;
        case 0x18de4cu: goto label_18de4c;
        case 0x18de50u: goto label_18de50;
        case 0x18de54u: goto label_18de54;
        case 0x18de58u: goto label_18de58;
        case 0x18de5cu: goto label_18de5c;
        case 0x18de60u: goto label_18de60;
        case 0x18de64u: goto label_18de64;
        case 0x18de68u: goto label_18de68;
        case 0x18de6cu: goto label_18de6c;
        case 0x18de70u: goto label_18de70;
        case 0x18de74u: goto label_18de74;
        case 0x18de78u: goto label_18de78;
        case 0x18de7cu: goto label_18de7c;
        case 0x18de80u: goto label_18de80;
        case 0x18de84u: goto label_18de84;
        case 0x18de88u: goto label_18de88;
        case 0x18de8cu: goto label_18de8c;
        case 0x18de90u: goto label_18de90;
        case 0x18de94u: goto label_18de94;
        case 0x18de98u: goto label_18de98;
        case 0x18de9cu: goto label_18de9c;
        case 0x18dea0u: goto label_18dea0;
        case 0x18dea4u: goto label_18dea4;
        case 0x18dea8u: goto label_18dea8;
        case 0x18deacu: goto label_18deac;
        case 0x18deb0u: goto label_18deb0;
        case 0x18deb4u: goto label_18deb4;
        case 0x18deb8u: goto label_18deb8;
        case 0x18debcu: goto label_18debc;
        case 0x18dec0u: goto label_18dec0;
        case 0x18dec4u: goto label_18dec4;
        case 0x18dec8u: goto label_18dec8;
        case 0x18deccu: goto label_18decc;
        case 0x18ded0u: goto label_18ded0;
        case 0x18ded4u: goto label_18ded4;
        case 0x18ded8u: goto label_18ded8;
        case 0x18dedcu: goto label_18dedc;
        case 0x18dee0u: goto label_18dee0;
        case 0x18dee4u: goto label_18dee4;
        case 0x18dee8u: goto label_18dee8;
        case 0x18deecu: goto label_18deec;
        case 0x18def0u: goto label_18def0;
        case 0x18def4u: goto label_18def4;
        case 0x18def8u: goto label_18def8;
        case 0x18defcu: goto label_18defc;
        case 0x18df00u: goto label_18df00;
        case 0x18df04u: goto label_18df04;
        case 0x18df08u: goto label_18df08;
        case 0x18df0cu: goto label_18df0c;
        case 0x18df10u: goto label_18df10;
        case 0x18df14u: goto label_18df14;
        case 0x18df18u: goto label_18df18;
        case 0x18df1cu: goto label_18df1c;
        case 0x18df20u: goto label_18df20;
        case 0x18df24u: goto label_18df24;
        case 0x18df28u: goto label_18df28;
        case 0x18df2cu: goto label_18df2c;
        case 0x18df30u: goto label_18df30;
        case 0x18df34u: goto label_18df34;
        case 0x18df38u: goto label_18df38;
        case 0x18df3cu: goto label_18df3c;
        case 0x18df40u: goto label_18df40;
        case 0x18df44u: goto label_18df44;
        case 0x18df48u: goto label_18df48;
        case 0x18df4cu: goto label_18df4c;
        case 0x18df50u: goto label_18df50;
        case 0x18df54u: goto label_18df54;
        case 0x18df58u: goto label_18df58;
        case 0x18df5cu: goto label_18df5c;
        case 0x18df60u: goto label_18df60;
        case 0x18df64u: goto label_18df64;
        case 0x18df68u: goto label_18df68;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df70u: goto label_18df70;
        case 0x18df74u: goto label_18df74;
        case 0x18df78u: goto label_18df78;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df80u: goto label_18df80;
        case 0x18df84u: goto label_18df84;
        case 0x18df88u: goto label_18df88;
        case 0x18df8cu: goto label_18df8c;
        case 0x18df90u: goto label_18df90;
        case 0x18df94u: goto label_18df94;
        case 0x18df98u: goto label_18df98;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa0u: goto label_18dfa0;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfa8u: goto label_18dfa8;
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfb0u: goto label_18dfb0;
        case 0x18dfb4u: goto label_18dfb4;
        case 0x18dfb8u: goto label_18dfb8;
        case 0x18dfbcu: goto label_18dfbc;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfc4u: goto label_18dfc4;
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd4u: goto label_18dfd4;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfdcu: goto label_18dfdc;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dfe8u: goto label_18dfe8;
        case 0x18dfecu: goto label_18dfec;
        case 0x18dff0u: goto label_18dff0;
        case 0x18dff4u: goto label_18dff4;
        case 0x18dff8u: goto label_18dff8;
        case 0x18dffcu: goto label_18dffc;
        case 0x18e000u: goto label_18e000;
        case 0x18e004u: goto label_18e004;
        case 0x18e008u: goto label_18e008;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e010u: goto label_18e010;
        case 0x18e014u: goto label_18e014;
        case 0x18e018u: goto label_18e018;
        case 0x18e01cu: goto label_18e01c;
        case 0x18e020u: goto label_18e020;
        case 0x18e024u: goto label_18e024;
        case 0x18e028u: goto label_18e028;
        case 0x18e02cu: goto label_18e02c;
        case 0x18e030u: goto label_18e030;
        case 0x18e034u: goto label_18e034;
        case 0x18e038u: goto label_18e038;
        case 0x18e03cu: goto label_18e03c;
        case 0x18e040u: goto label_18e040;
        case 0x18e044u: goto label_18e044;
        case 0x18e048u: goto label_18e048;
        case 0x18e04cu: goto label_18e04c;
        case 0x18e050u: goto label_18e050;
        case 0x18e054u: goto label_18e054;
        case 0x18e058u: goto label_18e058;
        case 0x18e05cu: goto label_18e05c;
        case 0x18e060u: goto label_18e060;
        case 0x18e064u: goto label_18e064;
        case 0x18e068u: goto label_18e068;
        case 0x18e06cu: goto label_18e06c;
        case 0x18e070u: goto label_18e070;
        case 0x18e074u: goto label_18e074;
        case 0x18e078u: goto label_18e078;
        case 0x18e07cu: goto label_18e07c;
        case 0x18e080u: goto label_18e080;
        case 0x18e084u: goto label_18e084;
        case 0x18e088u: goto label_18e088;
        case 0x18e08cu: goto label_18e08c;
        case 0x18e090u: goto label_18e090;
        case 0x18e094u: goto label_18e094;
        case 0x18e098u: goto label_18e098;
        case 0x18e09cu: goto label_18e09c;
        case 0x18e0a0u: goto label_18e0a0;
        case 0x18e0a4u: goto label_18e0a4;
        case 0x18e0a8u: goto label_18e0a8;
        case 0x18e0acu: goto label_18e0ac;
        case 0x18e0b0u: goto label_18e0b0;
        case 0x18e0b4u: goto label_18e0b4;
        case 0x18e0b8u: goto label_18e0b8;
        case 0x18e0bcu: goto label_18e0bc;
        case 0x18e0c0u: goto label_18e0c0;
        case 0x18e0c4u: goto label_18e0c4;
        case 0x18e0c8u: goto label_18e0c8;
        case 0x18e0ccu: goto label_18e0cc;
        case 0x18e0d0u: goto label_18e0d0;
        case 0x18e0d4u: goto label_18e0d4;
        case 0x18e0d8u: goto label_18e0d8;
        case 0x18e0dcu: goto label_18e0dc;
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e0e4u: goto label_18e0e4;
        case 0x18e0e8u: goto label_18e0e8;
        case 0x18e0ecu: goto label_18e0ec;
        case 0x18e0f0u: goto label_18e0f0;
        case 0x18e0f4u: goto label_18e0f4;
        case 0x18e0f8u: goto label_18e0f8;
        case 0x18e0fcu: goto label_18e0fc;
        case 0x18e100u: goto label_18e100;
        case 0x18e104u: goto label_18e104;
        case 0x18e108u: goto label_18e108;
        case 0x18e10cu: goto label_18e10c;
        case 0x18e110u: goto label_18e110;
        case 0x18e114u: goto label_18e114;
        case 0x18e118u: goto label_18e118;
        case 0x18e11cu: goto label_18e11c;
        case 0x18e120u: goto label_18e120;
        case 0x18e124u: goto label_18e124;
        case 0x18e128u: goto label_18e128;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e130u: goto label_18e130;
        case 0x18e134u: goto label_18e134;
        case 0x18e138u: goto label_18e138;
        case 0x18e13cu: goto label_18e13c;
        case 0x18e140u: goto label_18e140;
        case 0x18e144u: goto label_18e144;
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        case 0x18e36cu: goto label_18e36c;
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        default: break;
    }

    ctx->pc = 0x18daf8u;

label_18daf8:
    // 0x18daf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18dafc:
    // 0x18dafc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x18dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_18db00:
    // 0x18db00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x18db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_18db04:
    // 0x18db04: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x18db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_18db08:
    // 0x18db08: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x18db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_18db0c:
    // 0x18db0c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x18db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_18db10:
    // 0x18db10: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x18db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_18db14:
    // 0x18db14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18db18:
    // 0x18db18: 0xc061a12  jal         func_186848
label_18db1c:
    if (ctx->pc == 0x18DB1Cu) {
        ctx->pc = 0x18DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB18u;
        // 0x18db1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB20u;
        goto label_18db20;
    }
    ctx->pc = 0x18DB18u;
    SET_GPR_U32(ctx, 31, 0x18DB20u);
    ctx->pc = 0x18DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB18u;
    // 0x18db1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DB18u, 0x18DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB20u;
label_18db20:
    // 0x18db20: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_18db24:
    // 0x18db24: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_18db28:
    if (ctx->pc == 0x18DB28u) {
        ctx->pc = 0x18DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB24u;
        // 0x18db28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB2Cu;
        goto label_18db2c;
    }
    ctx->pc = 0x18DB24u;
    {
        const bool branch_taken_0x18db24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB24u;
        // 0x18db28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db24) {
            ctx->pc = 0x18DC38u;
            goto label_18dc38;
        }
    }
    ctx->pc = 0x18DB2Cu;
label_18db2c:
    // 0x18db2c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18db30:
    // 0x18db30: 0x50430042  beql        $v0, $v1, . + 4 + (0x42 << 2)
label_18db34:
    if (ctx->pc == 0x18DB34u) {
        ctx->pc = 0x18DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB30u;
        // 0x18db34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB38u;
        goto label_18db38;
    }
    ctx->pc = 0x18DB30u;
    {
        const bool branch_taken_0x18db30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18db30) {
            ctx->pc = 0x18DB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB30u;
            // 0x18db34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DC3Cu;
            goto label_18dc3c;
        }
    }
    ctx->pc = 0x18DB38u;
label_18db38:
    // 0x18db38: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x18db38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_18db3c:
    // 0x18db3c: 0xc061a12  jal         func_186848
label_18db40:
    if (ctx->pc == 0x18DB40u) {
        ctx->pc = 0x18DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB3Cu;
        // 0x18db40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB44u;
        goto label_18db44;
    }
    ctx->pc = 0x18DB3Cu;
    SET_GPR_U32(ctx, 31, 0x18DB44u);
    ctx->pc = 0x18DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB3Cu;
    // 0x18db40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DB3Cu, 0x18DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB44u;
label_18db44:
    // 0x18db44: 0x24430170  addiu       $v1, $v0, 0x170
    ctx->pc = 0x18db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_18db48:
    // 0x18db48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18db4c:
    // 0x18db4c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x18db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_18db50:
    // 0x18db50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18db54:
    if (ctx->pc == 0x18DB54u) {
        ctx->pc = 0x18DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB50u;
        // 0x18db54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB58u;
        goto label_18db58;
    }
    ctx->pc = 0x18DB50u;
    {
        const bool branch_taken_0x18db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB50u;
        // 0x18db54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db50) {
            ctx->pc = 0x18DB5Cu;
            goto label_18db5c;
        }
    }
    ctx->pc = 0x18DB58u;
label_18db58:
    // 0x18db58: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x18db58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18db5c:
    // 0x18db5c: 0xc061a12  jal         func_186848
label_18db60:
    if (ctx->pc == 0x18DB60u) {
        ctx->pc = 0x18DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB5Cu;
        // 0x18db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB64u;
        goto label_18db64;
    }
    ctx->pc = 0x18DB5Cu;
    SET_GPR_U32(ctx, 31, 0x18DB64u);
    ctx->pc = 0x18DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB5Cu;
    // 0x18db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DB5Cu, 0x18DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB64u;
label_18db64:
    // 0x18db64: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_18db68:
    // 0x18db68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18db6c:
    // 0x18db6c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x18db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_18db70:
    // 0x18db70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18db74:
    if (ctx->pc == 0x18DB74u) {
        ctx->pc = 0x18DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB70u;
        // 0x18db74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB78u;
        goto label_18db78;
    }
    ctx->pc = 0x18DB70u;
    {
        const bool branch_taken_0x18db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB70u;
        // 0x18db74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db70) {
            ctx->pc = 0x18DB7Cu;
            goto label_18db7c;
        }
    }
    ctx->pc = 0x18DB78u;
label_18db78:
    // 0x18db78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18db7c:
    // 0x18db7c: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_18db80:
    if (ctx->pc == 0x18DB80u) {
        ctx->pc = 0x18DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB7Cu;
        // 0x18db80: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB84u;
        goto label_18db84;
    }
    ctx->pc = 0x18DB7Cu;
    {
        const bool branch_taken_0x18db7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB7Cu;
        // 0x18db80: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db7c) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18DB84u;
label_18db84:
    // 0x18db84: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18db88:
    // 0x18db88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18db8c:
    if (ctx->pc == 0x18DB8Cu) {
        ctx->pc = 0x18DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB88u;
        // 0x18db8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB90u;
        goto label_18db90;
    }
    ctx->pc = 0x18DB88u;
    {
        const bool branch_taken_0x18db88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB88u;
        // 0x18db8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db88) {
            ctx->pc = 0x18DBA4u;
            goto label_18dba4;
        }
    }
    ctx->pc = 0x18DB90u;
label_18db90:
    // 0x18db90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18db90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18db94:
    // 0x18db94: 0x0  nop
    ctx->pc = 0x18db94u;
    // NOP
label_18db98:
    // 0x18db98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18db98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18db9c:
    // 0x18db9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_18dba0:
    if (ctx->pc == 0x18DBA0u) {
        ctx->pc = 0x18DBA4u;
        goto label_18dba4;
    }
    ctx->pc = 0x18DB9Cu;
    {
        const bool branch_taken_0x18db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db9c) {
            ctx->pc = 0x18DBBCu;
            goto label_18dbbc;
        }
    }
    ctx->pc = 0x18DBA4u;
label_18dba4:
    // 0x18dba4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18dba8:
    // 0x18dba8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18dbac:
    // 0x18dbac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18dbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18dbb0:
    // 0x18dbb0: 0x0  nop
    ctx->pc = 0x18dbb0u;
    // NOP
label_18dbb4:
    // 0x18dbb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18dbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18dbb8:
    // 0x18dbb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18dbb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18dbbc:
    // 0x18dbbc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18dbc0:
    // 0x18dbc0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18dbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18dbc4:
    // 0x18dbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dbc8:
    // 0x18dbc8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_18dbcc:
    // 0x18dbcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dbd0:
    // 0x18dbd0: 0x10000016  b           . + 4 + (0x16 << 2)
label_18dbd4:
    if (ctx->pc == 0x18DBD4u) {
        ctx->pc = 0x18DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD0u;
        // 0x18dbd4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBD8u;
        goto label_18dbd8;
    }
    ctx->pc = 0x18DBD0u;
    {
        const bool branch_taken_0x18dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD0u;
        // 0x18dbd4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbd0) {
            ctx->pc = 0x18DC2Cu;
            goto label_18dc2c;
        }
    }
    ctx->pc = 0x18DBD8u;
label_18dbd8:
    // 0x18dbd8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18dbdc:
    // 0x18dbdc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18dbe0:
    if (ctx->pc == 0x18DBE0u) {
        ctx->pc = 0x18DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBDCu;
        // 0x18dbe0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBE4u;
        goto label_18dbe4;
    }
    ctx->pc = 0x18DBDCu;
    {
        const bool branch_taken_0x18dbdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBDCu;
        // 0x18dbe0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbdc) {
            ctx->pc = 0x18DBF8u;
            goto label_18dbf8;
        }
    }
    ctx->pc = 0x18DBE4u;
label_18dbe4:
    // 0x18dbe4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18dbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18dbe8:
    // 0x18dbe8: 0x0  nop
    ctx->pc = 0x18dbe8u;
    // NOP
label_18dbec:
    // 0x18dbec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18dbecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18dbf0:
    // 0x18dbf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_18dbf4:
    if (ctx->pc == 0x18DBF4u) {
        ctx->pc = 0x18DBF8u;
        goto label_18dbf8;
    }
    ctx->pc = 0x18DBF0u;
    {
        const bool branch_taken_0x18dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbf0) {
            ctx->pc = 0x18DC10u;
            goto label_18dc10;
        }
    }
    ctx->pc = 0x18DBF8u;
label_18dbf8:
    // 0x18dbf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18dbfc:
    // 0x18dbfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18dc00:
    // 0x18dc00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18dc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18dc04:
    // 0x18dc04: 0x0  nop
    ctx->pc = 0x18dc04u;
    // NOP
label_18dc08:
    // 0x18dc08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18dc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18dc0c:
    // 0x18dc0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18dc0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18dc10:
    // 0x18dc10: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18dc14:
    // 0x18dc14: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18dc18:
    // 0x18dc18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc1c:
    // 0x18dc1c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18dc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_18dc20:
    // 0x18dc20: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18dc20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_18dc24:
    // 0x18dc24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18dc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dc28:
    // 0x18dc28: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18dc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18dc2c:
    // 0x18dc2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18dc2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18dc30:
    // 0x18dc30: 0x100000ba  b           . + 4 + (0xBA << 2)
label_18dc34:
    if (ctx->pc == 0x18DC34u) {
        ctx->pc = 0x18DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC30u;
        // 0x18dc34: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC38u;
        goto label_18dc38;
    }
    ctx->pc = 0x18DC30u;
    {
        const bool branch_taken_0x18dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC30u;
        // 0x18dc34: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc30) {
            ctx->pc = 0x18DF1Cu;
            goto label_18df1c;
        }
    }
    ctx->pc = 0x18DC38u;
label_18dc38:
    // 0x18dc38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18dc3c:
    // 0x18dc3c: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x18dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_18dc40:
    // 0x18dc40: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_18dc44:
    if (ctx->pc == 0x18DC44u) {
        ctx->pc = 0x18DC48u;
        goto label_18dc48;
    }
    ctx->pc = 0x18DC40u;
    {
        const bool branch_taken_0x18dc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc40) {
            ctx->pc = 0x18DCA0u;
            goto label_18dca0;
        }
    }
    ctx->pc = 0x18DC48u;
label_18dc48:
    // 0x18dc48: 0xc095306  jal         func_254C18
label_18dc4c:
    if (ctx->pc == 0x18DC4Cu) {
        ctx->pc = 0x18DC50u;
        goto label_18dc50;
    }
    ctx->pc = 0x18DC48u;
    SET_GPR_U32(ctx, 31, 0x18DC50u);
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18DC48u, 0x18DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC50u;
label_18dc50:
    // 0x18dc50: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18dc54:
    // 0x18dc54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dc58:
    // 0x18dc58: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_18dc5c:
    if (ctx->pc == 0x18DC5Cu) {
        ctx->pc = 0x18DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC58u;
        // 0x18dc5c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC60u;
        goto label_18dc60;
    }
    ctx->pc = 0x18DC58u;
    {
        const bool branch_taken_0x18dc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC58u;
        // 0x18dc5c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc58) {
            ctx->pc = 0x18DC80u;
            goto label_18dc80;
        }
    }
    ctx->pc = 0x18DC60u;
label_18dc60:
    // 0x18dc60: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18dc64:
    // 0x18dc64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18dc68:
    if (ctx->pc == 0x18DC68u) {
        ctx->pc = 0x18DC6Cu;
        goto label_18dc6c;
    }
    ctx->pc = 0x18DC64u;
    {
        const bool branch_taken_0x18dc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dc64) {
            ctx->pc = 0x18DC80u;
            goto label_18dc80;
        }
    }
    ctx->pc = 0x18DC6Cu;
label_18dc6c:
    // 0x18dc6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18dc70:
    // 0x18dc70: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18dc74:
    // 0x18dc74: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_18dc78:
    // 0x18dc78: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_18dc7c:
    if (ctx->pc == 0x18DC7Cu) {
        ctx->pc = 0x18DC80u;
        goto label_18dc80;
    }
    ctx->pc = 0x18DC78u;
    {
        const bool branch_taken_0x18dc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18dc78) {
            ctx->pc = 0x18DCA0u;
            goto label_18dca0;
        }
    }
    ctx->pc = 0x18DC80u;
label_18dc80:
    // 0x18dc80: 0xc061a1e  jal         func_186878
label_18dc84:
    if (ctx->pc == 0x18DC84u) {
        ctx->pc = 0x18DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC80u;
        // 0x18dc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC88u;
        goto label_18dc88;
    }
    ctx->pc = 0x18DC80u;
    SET_GPR_U32(ctx, 31, 0x18DC88u);
    ctx->pc = 0x18DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC80u;
    // 0x18dc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18DC80u, 0x18DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC88u;
label_18dc88:
    // 0x18dc88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18dc8c:
    // 0x18dc8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dc90:
    // 0x18dc90: 0xc06cdda  jal         func_1B3768
label_18dc94:
    if (ctx->pc == 0x18DC94u) {
        ctx->pc = 0x18DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC90u;
        // 0x18dc94: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC98u;
        goto label_18dc98;
    }
    ctx->pc = 0x18DC90u;
    SET_GPR_U32(ctx, 31, 0x18DC98u);
    ctx->pc = 0x18DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC90u;
    // 0x18dc94: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x18DC90u, 0x18DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC98u;
label_18dc98:
    // 0x18dc98: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_18dc9c:
    if (ctx->pc == 0x18DC9Cu) {
        ctx->pc = 0x18DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC98u;
        // 0x18dc9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCA0u;
        goto label_18dca0;
    }
    ctx->pc = 0x18DC98u;
    {
        const bool branch_taken_0x18dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC98u;
        // 0x18dc9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc98) {
            ctx->pc = 0x18DF20u;
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DCA0u;
label_18dca0:
    // 0x18dca0: 0xc061a16  jal         func_186858
label_18dca4:
    if (ctx->pc == 0x18DCA4u) {
        ctx->pc = 0x18DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCA0u;
        // 0x18dca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCA8u;
        goto label_18dca8;
    }
    ctx->pc = 0x18DCA0u;
    SET_GPR_U32(ctx, 31, 0x18DCA8u);
    ctx->pc = 0x18DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCA0u;
    // 0x18dca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18DCA0u, 0x18DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCA8u;
label_18dca8:
    // 0x18dca8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x18dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dcac:
    // 0x18dcac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18dcb0:
    // 0x18dcb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dcb4:
    // 0x18dcb4: 0x0  nop
    ctx->pc = 0x18dcb4u;
    // NOP
label_18dcb8:
    // 0x18dcb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18dcb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dcbc:
    // 0x18dcbc: 0x0  nop
    ctx->pc = 0x18dcbcu;
    // NOP
label_18dcc0:
    // 0x18dcc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18dcc4:
    if (ctx->pc == 0x18DCC4u) {
        ctx->pc = 0x18DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC0u;
        // 0x18dcc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCC8u;
        goto label_18dcc8;
    }
    ctx->pc = 0x18DCC0u;
    {
        const bool branch_taken_0x18dcc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC0u;
        // 0x18dcc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcc0) {
            ctx->pc = 0x18DCCCu;
            goto label_18dccc;
        }
    }
    ctx->pc = 0x18DCC8u;
label_18dcc8:
    // 0x18dcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18dcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dccc:
    // 0x18dccc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_18dcd0:
    if (ctx->pc == 0x18DCD0u) {
        ctx->pc = 0x18DCD4u;
        goto label_18dcd4;
    }
    ctx->pc = 0x18DCCCu;
    {
        const bool branch_taken_0x18dccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dccc) {
            ctx->pc = 0x18DF0Cu;
            goto label_18df0c;
        }
    }
    ctx->pc = 0x18DCD4u;
label_18dcd4:
    // 0x18dcd4: 0xc0f6a96  jal         func_3DAA58
label_18dcd8:
    if (ctx->pc == 0x18DCD8u) {
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD4u;
        // 0x18dcd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCDCu;
        goto label_18dcdc;
    }
    ctx->pc = 0x18DCD4u;
    SET_GPR_U32(ctx, 31, 0x18DCDCu);
    ctx->pc = 0x18DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCD4u;
    // 0x18dcd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18DCD4u, 0x18DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCDCu;
label_18dcdc:
    // 0x18dcdc: 0xc061a12  jal         func_186848
label_18dce0:
    if (ctx->pc == 0x18DCE0u) {
        ctx->pc = 0x18DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCDCu;
        // 0x18dce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCE4u;
        goto label_18dce4;
    }
    ctx->pc = 0x18DCDCu;
    SET_GPR_U32(ctx, 31, 0x18DCE4u);
    ctx->pc = 0x18DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCDCu;
    // 0x18dce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DCDCu, 0x18DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE4u;
label_18dce4:
    // 0x18dce4: 0xc4410240  lwc1        $f1, 0x240($v0)
    ctx->pc = 0x18dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dce8:
    // 0x18dce8: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x18dce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_18dcec:
    // 0x18dcec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18dcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_18dcf0:
    // 0x18dcf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dcf4:
    // 0x18dcf4: 0x0  nop
    ctx->pc = 0x18dcf4u;
    // NOP
label_18dcf8:
    // 0x18dcf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18dcf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dcfc:
    // 0x18dcfc: 0x0  nop
    ctx->pc = 0x18dcfcu;
    // NOP
label_18dd00:
    // 0x18dd00: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_18dd04:
    if (ctx->pc == 0x18DD04u) {
        ctx->pc = 0x18DD08u;
        goto label_18dd08;
    }
    ctx->pc = 0x18DD00u;
    {
        const bool branch_taken_0x18dd00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18dd00) {
            ctx->pc = 0x18DD38u;
            goto label_18dd38;
        }
    }
    ctx->pc = 0x18DD08u;
label_18dd08:
    // 0x18dd08: 0xc061a12  jal         func_186848
label_18dd0c:
    if (ctx->pc == 0x18DD0Cu) {
        ctx->pc = 0x18DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD08u;
        // 0x18dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD10u;
        goto label_18dd10;
    }
    ctx->pc = 0x18DD08u;
    SET_GPR_U32(ctx, 31, 0x18DD10u);
    ctx->pc = 0x18DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD08u;
    // 0x18dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DD08u, 0x18DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD10u;
label_18dd10:
    // 0x18dd10: 0xc06faba  jal         func_1BEAE8
label_18dd14:
    if (ctx->pc == 0x18DD14u) {
        ctx->pc = 0x18DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD10u;
        // 0x18dd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD18u;
        goto label_18dd18;
    }
    ctx->pc = 0x18DD10u;
    SET_GPR_U32(ctx, 31, 0x18DD18u);
    ctx->pc = 0x18DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD10u;
    // 0x18dd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x18DD10u, 0x18DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD18u;
label_18dd18:
    // 0x18dd18: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_18dd1c:
    if (ctx->pc == 0x18DD1Cu) {
        ctx->pc = 0x18DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD18u;
        // 0x18dd1c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD20u;
        goto label_18dd20;
    }
    ctx->pc = 0x18DD18u;
    {
        const bool branch_taken_0x18dd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD18u;
        // 0x18dd1c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd18) {
            ctx->pc = 0x18DD6Cu;
            goto label_18dd6c;
        }
    }
    ctx->pc = 0x18DD20u;
label_18dd20:
    // 0x18dd20: 0xc061a12  jal         func_186848
label_18dd24:
    if (ctx->pc == 0x18DD24u) {
        ctx->pc = 0x18DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD20u;
        // 0x18dd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD28u;
        goto label_18dd28;
    }
    ctx->pc = 0x18DD20u;
    SET_GPR_U32(ctx, 31, 0x18DD28u);
    ctx->pc = 0x18DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD20u;
    // 0x18dd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DD20u, 0x18DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD28u;
label_18dd28:
    // 0x18dd28: 0xc06faba  jal         func_1BEAE8
label_18dd2c:
    if (ctx->pc == 0x18DD2Cu) {
        ctx->pc = 0x18DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD28u;
        // 0x18dd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD30u;
        goto label_18dd30;
    }
    ctx->pc = 0x18DD28u;
    SET_GPR_U32(ctx, 31, 0x18DD30u);
    ctx->pc = 0x18DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD28u;
    // 0x18dd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x18DD28u, 0x18DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD30u;
label_18dd30:
    // 0x18dd30: 0x1000000b  b           . + 4 + (0xB << 2)
label_18dd34:
    if (ctx->pc == 0x18DD34u) {
        ctx->pc = 0x18DD38u;
        goto label_18dd38;
    }
    ctx->pc = 0x18DD30u;
    {
        const bool branch_taken_0x18dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd30) {
            ctx->pc = 0x18DD60u;
            goto label_18dd60;
        }
    }
    ctx->pc = 0x18DD38u;
label_18dd38:
    // 0x18dd38: 0xc061a12  jal         func_186848
label_18dd3c:
    if (ctx->pc == 0x18DD3Cu) {
        ctx->pc = 0x18DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD38u;
        // 0x18dd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD40u;
        goto label_18dd40;
    }
    ctx->pc = 0x18DD38u;
    SET_GPR_U32(ctx, 31, 0x18DD40u);
    ctx->pc = 0x18DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD38u;
    // 0x18dd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DD38u, 0x18DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD40u;
label_18dd40:
    // 0x18dd40: 0xc06fab4  jal         func_1BEAD0
label_18dd44:
    if (ctx->pc == 0x18DD44u) {
        ctx->pc = 0x18DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD40u;
        // 0x18dd44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD48u;
        goto label_18dd48;
    }
    ctx->pc = 0x18DD40u;
    SET_GPR_U32(ctx, 31, 0x18DD48u);
    ctx->pc = 0x18DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD40u;
    // 0x18dd44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x18DD40u, 0x18DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD48u;
label_18dd48:
    // 0x18dd48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18dd4c:
    if (ctx->pc == 0x18DD4Cu) {
        ctx->pc = 0x18DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD48u;
        // 0x18dd4c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD50u;
        goto label_18dd50;
    }
    ctx->pc = 0x18DD48u;
    {
        const bool branch_taken_0x18dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD48u;
        // 0x18dd4c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd48) {
            ctx->pc = 0x18DD6Cu;
            goto label_18dd6c;
        }
    }
    ctx->pc = 0x18DD50u;
label_18dd50:
    // 0x18dd50: 0xc061a12  jal         func_186848
label_18dd54:
    if (ctx->pc == 0x18DD54u) {
        ctx->pc = 0x18DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD50u;
        // 0x18dd54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD58u;
        goto label_18dd58;
    }
    ctx->pc = 0x18DD50u;
    SET_GPR_U32(ctx, 31, 0x18DD58u);
    ctx->pc = 0x18DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD50u;
    // 0x18dd54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DD50u, 0x18DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD58u;
label_18dd58:
    // 0x18dd58: 0xc06fab4  jal         func_1BEAD0
label_18dd5c:
    if (ctx->pc == 0x18DD5Cu) {
        ctx->pc = 0x18DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD58u;
        // 0x18dd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD60u;
        goto label_18dd60;
    }
    ctx->pc = 0x18DD58u;
    SET_GPR_U32(ctx, 31, 0x18DD60u);
    ctx->pc = 0x18DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD58u;
    // 0x18dd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x18DD58u, 0x18DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD60u;
label_18dd60:
    // 0x18dd60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18dd60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18dd64:
    // 0x18dd64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18dd68:
    // 0x18dd68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dd6c:
    // 0x18dd6c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18dd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_18dd70:
    // 0x18dd70: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18dd70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_18dd74:
    // 0x18dd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18dd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dd78:
    // 0x18dd78: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18dd78u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18dd7c:
    // 0x18dd7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18dd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dd80:
    // 0x18dd80: 0x0  nop
    ctx->pc = 0x18dd80u;
    // NOP
label_18dd84:
    // 0x18dd84: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18dd88:
    if (ctx->pc == 0x18DD88u) {
        ctx->pc = 0x18DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD84u;
        // 0x18dd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD8Cu;
        goto label_18dd8c;
    }
    ctx->pc = 0x18DD84u;
    {
        const bool branch_taken_0x18dd84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD84u;
        // 0x18dd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd84) {
            ctx->pc = 0x18DDB8u;
            goto label_18ddb8;
        }
    }
    ctx->pc = 0x18DD8Cu;
label_18dd8c:
    // 0x18dd8c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dd90:
    // 0x18dd90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18dd90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18dd94:
    // 0x18dd94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18dd94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dd98:
    // 0x18dd98: 0x0  nop
    ctx->pc = 0x18dd98u;
    // NOP
label_18dd9c:
    // 0x18dd9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18dda0:
    if (ctx->pc == 0x18DDA0u) {
        ctx->pc = 0x18DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD9Cu;
        // 0x18dda0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDA4u;
        goto label_18dda4;
    }
    ctx->pc = 0x18DD9Cu;
    {
        const bool branch_taken_0x18dd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD9Cu;
        // 0x18dda0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd9c) {
            ctx->pc = 0x18DDB8u;
            goto label_18ddb8;
        }
    }
    ctx->pc = 0x18DDA4u;
label_18dda4:
    // 0x18dda4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18dda4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18dda8:
    // 0x18dda8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18dda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ddac:
    // 0x18ddac: 0x0  nop
    ctx->pc = 0x18ddacu;
    // NOP
label_18ddb0:
    // 0x18ddb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_18ddb4:
    if (ctx->pc == 0x18DDB4u) {
        ctx->pc = 0x18DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDB0u;
        // 0x18ddb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDB8u;
        goto label_18ddb8;
    }
    ctx->pc = 0x18DDB0u;
    {
        const bool branch_taken_0x18ddb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ddb0) {
            ctx->pc = 0x18DDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DDB0u;
            // 0x18ddb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DDB8u;
            goto label_18ddb8;
        }
    }
    ctx->pc = 0x18DDB8u;
label_18ddb8:
    // 0x18ddb8: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_18ddbc:
    if (ctx->pc == 0x18DDBCu) {
        ctx->pc = 0x18DDC0u;
        goto label_18ddc0;
    }
    ctx->pc = 0x18DDB8u;
    {
        const bool branch_taken_0x18ddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ddb8) {
            ctx->pc = 0x18DEF4u;
            goto label_18def4;
        }
    }
    ctx->pc = 0x18DDC0u;
label_18ddc0:
    // 0x18ddc0: 0xc061a12  jal         func_186848
label_18ddc4:
    if (ctx->pc == 0x18DDC4u) {
        ctx->pc = 0x18DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC0u;
        // 0x18ddc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDC8u;
        goto label_18ddc8;
    }
    ctx->pc = 0x18DDC0u;
    SET_GPR_U32(ctx, 31, 0x18DDC8u);
    ctx->pc = 0x18DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDC0u;
    // 0x18ddc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DDC0u, 0x18DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDC8u;
label_18ddc8:
    // 0x18ddc8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_18ddcc:
    // 0x18ddcc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ddccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ddd0:
    // 0x18ddd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18ddd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18ddd4:
    // 0x18ddd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18ddd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18ddd8:
    // 0x18ddd8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_18dddc:
    // 0x18dddc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x18dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dde0:
    // 0x18dde0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18dde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dde4:
    // 0x18dde4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18dde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_18dde8:
    // 0x18dde8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_18ddec:
    // 0x18ddec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18ddecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18ddf0:
    // 0x18ddf0: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x18ddf0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_18ddf4:
    // 0x18ddf4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x18ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_18ddf8:
    // 0x18ddf8: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x18ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_18ddfc:
    // 0x18ddfc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x18ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18de00:
    // 0x18de00: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x18de00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de04:
    // 0x18de04: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18de08:
    // 0x18de08: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x18de08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18de0c:
    // 0x18de0c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x18de0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18de10:
    // 0x18de10: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_18de14:
    if (ctx->pc == 0x18DE14u) {
        ctx->pc = 0x18DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE10u;
        // 0x18de14: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE18u;
        goto label_18de18;
    }
    ctx->pc = 0x18DE10u;
    {
        const bool branch_taken_0x18de10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE10u;
        // 0x18de14: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de10) {
            ctx->pc = 0x18DE40u;
            goto label_18de40;
        }
    }
    ctx->pc = 0x18DE18u;
label_18de18:
    // 0x18de18: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x18de18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_18de1c:
    // 0x18de1c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x18de1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de20:
    // 0x18de20: 0x0  nop
    ctx->pc = 0x18de20u;
    // NOP
label_18de24:
    // 0x18de24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18de28:
    if (ctx->pc == 0x18DE28u) {
        ctx->pc = 0x18DE2Cu;
        goto label_18de2c;
    }
    ctx->pc = 0x18DE24u;
    {
        const bool branch_taken_0x18de24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18de24) {
            ctx->pc = 0x18DE40u;
            goto label_18de40;
        }
    }
    ctx->pc = 0x18DE2Cu;
label_18de2c:
    // 0x18de2c: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x18de2cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
label_18de30:
    // 0x18de30: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x18de30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de34:
    // 0x18de34: 0x0  nop
    ctx->pc = 0x18de34u;
    // NOP
label_18de38:
    // 0x18de38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_18de3c:
    if (ctx->pc == 0x18DE3Cu) {
        ctx->pc = 0x18DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE38u;
        // 0x18de3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE40u;
        goto label_18de40;
    }
    ctx->pc = 0x18DE38u;
    {
        const bool branch_taken_0x18de38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18de38) {
            ctx->pc = 0x18DE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DE38u;
            // 0x18de3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DE40u;
            goto label_18de40;
        }
    }
    ctx->pc = 0x18DE40u;
label_18de40:
    // 0x18de40: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_18de44:
    if (ctx->pc == 0x18DE44u) {
        ctx->pc = 0x18DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE40u;
        // 0x18de44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE48u;
        goto label_18de48;
    }
    ctx->pc = 0x18DE40u;
    {
        const bool branch_taken_0x18de40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de40) {
            ctx->pc = 0x18DE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DE40u;
            // 0x18de44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF20u;
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DE48u;
label_18de48:
    // 0x18de48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18de4c:
    // 0x18de4c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18de4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18de50:
    // 0x18de50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18de50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18de54:
    // 0x18de54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18de54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18de58:
    // 0x18de58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18de58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18de5c:
    // 0x18de5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18de5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_18de60:
    // 0x18de60: 0x4a0003bf  vwaitq
    ctx->pc = 0x18de60u;
    // VWAITQ (Q already resolved in this runtime)
label_18de64:
    // 0x18de64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18de64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18de68:
    // 0x18de68: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_18de6c:
    // 0x18de6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18de70:
    // 0x18de70: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_18de74:
    // 0x18de74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18de78:
    // 0x18de78: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18de7c:
    // 0x18de7c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x18de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18de80:
    // 0x18de80: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x18de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18de84:
    // 0x18de84: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18de84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_18de88:
    // 0x18de88: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x18de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18de8c:
    // 0x18de8c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18de90:
    // 0x18de90: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18de90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_18de94:
    // 0x18de94: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x18de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18de98:
    // 0x18de98: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x18de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18de9c:
    // 0x18de9c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x18de9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_18dea0:
    // 0x18dea0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18dea4:
    // 0x18dea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dea8:
    // 0x18dea8: 0x0  nop
    ctx->pc = 0x18dea8u;
    // NOP
label_18deac:
    // 0x18deac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18deacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18deb0:
    // 0x18deb0: 0x0  nop
    ctx->pc = 0x18deb0u;
    // NOP
label_18deb4:
    // 0x18deb4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_18deb8:
    if (ctx->pc == 0x18DEB8u) {
        ctx->pc = 0x18DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEB4u;
        // 0x18deb8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEBCu;
        goto label_18debc;
    }
    ctx->pc = 0x18DEB4u;
    {
        const bool branch_taken_0x18deb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEB4u;
        // 0x18deb8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18deb4) {
            ctx->pc = 0x18DF1Cu;
            goto label_18df1c;
        }
    }
    ctx->pc = 0x18DEBCu;
label_18debc:
    // 0x18debc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_18dec0:
    // 0x18dec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18dec4:
    // 0x18dec4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18dec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18dec8:
    // 0x18dec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18decc:
    // 0x18decc: 0xc441c61c  lwc1        $f1, -0x39E4($v0)
    ctx->pc = 0x18deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ded0:
    // 0x18ded0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18ded0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_18ded4:
    // 0x18ded4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ded4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18ded8:
    // 0x18ded8: 0xc061a1e  jal         func_186878
label_18dedc:
    if (ctx->pc == 0x18DEDCu) {
        ctx->pc = 0x18DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DED8u;
        // 0x18dedc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEE0u;
        goto label_18dee0;
    }
    ctx->pc = 0x18DED8u;
    SET_GPR_U32(ctx, 31, 0x18DEE0u);
    ctx->pc = 0x18DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED8u;
    // 0x18dedc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18DED8u, 0x18DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEE0u;
label_18dee0:
    // 0x18dee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dee4:
    // 0x18dee4: 0xc06cdb8  jal         func_1B36E0
label_18dee8:
    if (ctx->pc == 0x18DEE8u) {
        ctx->pc = 0x18DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEE4u;
        // 0x18dee8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEECu;
        goto label_18deec;
    }
    ctx->pc = 0x18DEE4u;
    SET_GPR_U32(ctx, 31, 0x18DEECu);
    ctx->pc = 0x18DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEE4u;
    // 0x18dee8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x18DEE4u, 0x18DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEECu;
label_18deec:
    // 0x18deec: 0x1000000c  b           . + 4 + (0xC << 2)
label_18def0:
    if (ctx->pc == 0x18DEF0u) {
        ctx->pc = 0x18DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEECu;
        // 0x18def0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEF4u;
        goto label_18def4;
    }
    ctx->pc = 0x18DEECu;
    {
        const bool branch_taken_0x18deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEECu;
        // 0x18def0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18deec) {
            ctx->pc = 0x18DF20u;
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DEF4u;
label_18def4:
    // 0x18def4: 0xc061a1e  jal         func_186878
label_18def8:
    if (ctx->pc == 0x18DEF8u) {
        ctx->pc = 0x18DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEF4u;
        // 0x18def8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEFCu;
        goto label_18defc;
    }
    ctx->pc = 0x18DEF4u;
    SET_GPR_U32(ctx, 31, 0x18DEFCu);
    ctx->pc = 0x18DEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEF4u;
    // 0x18def8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18DEF4u, 0x18DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEFCu;
label_18defc:
    // 0x18defc: 0xc06cdb4  jal         func_1B36D0
label_18df00:
    if (ctx->pc == 0x18DF00u) {
        ctx->pc = 0x18DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEFCu;
        // 0x18df00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF04u;
        goto label_18df04;
    }
    ctx->pc = 0x18DEFCu;
    SET_GPR_U32(ctx, 31, 0x18DF04u);
    ctx->pc = 0x18DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEFCu;
    // 0x18df00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x18DEFCu, 0x18DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF04u;
label_18df04:
    // 0x18df04: 0x10000006  b           . + 4 + (0x6 << 2)
label_18df08:
    if (ctx->pc == 0x18DF08u) {
        ctx->pc = 0x18DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF04u;
        // 0x18df08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF0Cu;
        goto label_18df0c;
    }
    ctx->pc = 0x18DF04u;
    {
        const bool branch_taken_0x18df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF04u;
        // 0x18df08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df04) {
            ctx->pc = 0x18DF20u;
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DF0Cu;
label_18df0c:
    // 0x18df0c: 0xc061a1e  jal         func_186878
label_18df10:
    if (ctx->pc == 0x18DF10u) {
        ctx->pc = 0x18DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF0Cu;
        // 0x18df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF14u;
        goto label_18df14;
    }
    ctx->pc = 0x18DF0Cu;
    SET_GPR_U32(ctx, 31, 0x18DF14u);
    ctx->pc = 0x18DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF0Cu;
    // 0x18df10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18DF0Cu, 0x18DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF14u;
label_18df14:
    // 0x18df14: 0xc06cdb4  jal         func_1B36D0
label_18df18:
    if (ctx->pc == 0x18DF18u) {
        ctx->pc = 0x18DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF14u;
        // 0x18df18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF1Cu;
        goto label_18df1c;
    }
    ctx->pc = 0x18DF14u;
    SET_GPR_U32(ctx, 31, 0x18DF1Cu);
    ctx->pc = 0x18DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF14u;
    // 0x18df18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x18DF14u, 0x18DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF1Cu;
label_18df1c:
    // 0x18df1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18df20:
    // 0x18df20: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x18df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
label_18df24:
    // 0x18df24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18df28:
    // 0x18df28: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_18df2c:
    if (ctx->pc == 0x18DF2Cu) {
        ctx->pc = 0x18DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF28u;
        // 0x18df2c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF30u;
        goto label_18df30;
    }
    ctx->pc = 0x18DF28u;
    {
        const bool branch_taken_0x18df28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF28u;
        // 0x18df2c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df28) {
            ctx->pc = 0x18E230u;
            goto label_18e230;
        }
    }
    ctx->pc = 0x18DF30u;
label_18df30:
    // 0x18df30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18df34:
    // 0x18df34: 0x544000bf  bnel        $v0, $zero, . + 4 + (0xBF << 2)
label_18df38:
    if (ctx->pc == 0x18DF38u) {
        ctx->pc = 0x18DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF34u;
        // 0x18df38: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF3Cu;
        goto label_18df3c;
    }
    ctx->pc = 0x18DF34u;
    {
        const bool branch_taken_0x18df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df34) {
            ctx->pc = 0x18DF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF34u;
            // 0x18df38: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18DF3Cu;
label_18df3c:
    // 0x18df3c: 0x8c720014  lw          $s2, 0x14($v1)
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18df40:
    // 0x18df40: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x18df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_18df44:
    // 0x18df44: 0x124200ba  beq         $s2, $v0, . + 4 + (0xBA << 2)
label_18df48:
    if (ctx->pc == 0x18DF48u) {
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF44u;
        // 0x18df48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF4Cu;
        goto label_18df4c;
    }
    ctx->pc = 0x18DF44u;
    {
        const bool branch_taken_0x18df44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF44u;
        // 0x18df48: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df44) {
            ctx->pc = 0x18E230u;
            goto label_18e230;
        }
    }
    ctx->pc = 0x18DF4Cu;
label_18df4c:
    // 0x18df4c: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x18df4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_18df50:
    // 0x18df50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18df50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18df54:
    // 0x18df54: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18df58:
    // 0x18df58: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x18df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_18df5c:
    // 0x18df5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18df5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18df60:
    // 0x18df60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18df64:
    if (ctx->pc == 0x18DF64u) {
        ctx->pc = 0x18DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF60u;
        // 0x18df64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF68u;
        goto label_18df68;
    }
    ctx->pc = 0x18DF60u;
    {
        const bool branch_taken_0x18df60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF60u;
        // 0x18df64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df60) {
            ctx->pc = 0x18DF9Cu;
            goto label_18df9c;
        }
    }
    ctx->pc = 0x18DF68u;
label_18df68:
    // 0x18df68: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_18df6c:
    // 0x18df6c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_18df70:
    if (ctx->pc == 0x18DF70u) {
        ctx->pc = 0x18DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF6Cu;
        // 0x18df70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF74u;
        goto label_18df74;
    }
    ctx->pc = 0x18DF6Cu;
    {
        const bool branch_taken_0x18df6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18df6c) {
            ctx->pc = 0x18DF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF6Cu;
            // 0x18df70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF74u;
label_18df74:
    // 0x18df74: 0xc0924a8  jal         func_2492A0
label_18df78:
    if (ctx->pc == 0x18DF78u) {
        ctx->pc = 0x18DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF74u;
        // 0x18df78: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF7Cu;
        goto label_18df7c;
    }
    ctx->pc = 0x18DF74u;
    SET_GPR_U32(ctx, 31, 0x18DF7Cu);
    ctx->pc = 0x18DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF74u;
    // 0x18df78: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x18DF74u, 0x18DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF7Cu;
label_18df7c:
    // 0x18df7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18df80:
    if (ctx->pc == 0x18DF80u) {
        ctx->pc = 0x18DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF7Cu;
        // 0x18df80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF84u;
        goto label_18df84;
    }
    ctx->pc = 0x18DF7Cu;
    {
        const bool branch_taken_0x18df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df7c) {
            ctx->pc = 0x18DF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF7Cu;
            // 0x18df80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF84u;
label_18df84:
    // 0x18df84: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18df88:
    // 0x18df88: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_18df8c:
    // 0x18df8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18df90:
    if (ctx->pc == 0x18DF90u) {
        ctx->pc = 0x18DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF8Cu;
        // 0x18df90: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF94u;
        goto label_18df94;
    }
    ctx->pc = 0x18DF8Cu;
    {
        const bool branch_taken_0x18df8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF8Cu;
        // 0x18df90: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df8c) {
            ctx->pc = 0x18DF9Cu;
            goto label_18df9c;
        }
    }
    ctx->pc = 0x18DF94u;
label_18df94:
    // 0x18df94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18df98:
    if (ctx->pc == 0x18DF98u) {
        ctx->pc = 0x18DF9Cu;
        goto label_18df9c;
    }
    ctx->pc = 0x18DF94u;
    {
        const bool branch_taken_0x18df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18df94) {
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF9Cu;
label_18df9c:
    // 0x18df9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18df9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dfa0:
    // 0x18dfa0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_18dfa4:
    if (ctx->pc == 0x18DFA4u) {
        ctx->pc = 0x18DFA8u;
        goto label_18dfa8;
    }
    ctx->pc = 0x18DFA0u;
    {
        const bool branch_taken_0x18dfa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfa0) {
            ctx->pc = 0x18DFC0u;
            goto label_18dfc0;
        }
    }
    ctx->pc = 0x18DFA8u;
label_18dfa8:
    // 0x18dfa8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18dfac:
    // 0x18dfac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18dfb0:
    // 0x18dfb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18dfb4:
    // 0x18dfb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dfb8:
    // 0x18dfb8: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x18dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
label_18dfbc:
    // 0x18dfbc: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x18dfbcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18dfc0:
    // 0x18dfc0: 0x5680001f  bnel        $s4, $zero, . + 4 + (0x1F << 2)
label_18dfc4:
    if (ctx->pc == 0x18DFC4u) {
        ctx->pc = 0x18DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFC0u;
        // 0x18dfc4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFC8u;
        goto label_18dfc8;
    }
    ctx->pc = 0x18DFC0u;
    {
        const bool branch_taken_0x18dfc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dfc0) {
            ctx->pc = 0x18DFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFC0u;
            // 0x18dfc4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E040u;
            goto label_18e040;
        }
    }
    ctx->pc = 0x18DFC8u;
label_18dfc8:
    // 0x18dfc8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18dfcc:
    // 0x18dfcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18dfccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dfd0:
    // 0x18dfd0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x18dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_18dfd4:
    // 0x18dfd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18dfd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18dfd8:
    // 0x18dfd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18dfdc:
    if (ctx->pc == 0x18DFDCu) {
        ctx->pc = 0x18DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD8u;
        // 0x18dfdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFE0u;
        goto label_18dfe0;
    }
    ctx->pc = 0x18DFD8u;
    {
        const bool branch_taken_0x18dfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD8u;
        // 0x18dfdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd8) {
            ctx->pc = 0x18E014u;
            goto label_18e014;
        }
    }
    ctx->pc = 0x18DFE0u;
label_18dfe0:
    // 0x18dfe0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x18dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_18dfe4:
    // 0x18dfe4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_18dfe8:
    if (ctx->pc == 0x18DFE8u) {
        ctx->pc = 0x18DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFE4u;
        // 0x18dfe8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFECu;
        goto label_18dfec;
    }
    ctx->pc = 0x18DFE4u;
    {
        const bool branch_taken_0x18dfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18dfe4) {
            ctx->pc = 0x18DFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFE4u;
            // 0x18dfe8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E018u;
            goto label_18e018;
        }
    }
    ctx->pc = 0x18DFECu;
label_18dfec:
    // 0x18dfec: 0xc0924a8  jal         func_2492A0
label_18dff0:
    if (ctx->pc == 0x18DFF0u) {
        ctx->pc = 0x18DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFECu;
        // 0x18dff0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFF4u;
        goto label_18dff4;
    }
    ctx->pc = 0x18DFECu;
    SET_GPR_U32(ctx, 31, 0x18DFF4u);
    ctx->pc = 0x18DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFECu;
    // 0x18dff0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x18DFECu, 0x18DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFF4u;
label_18dff4:
    // 0x18dff4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18dff8:
    if (ctx->pc == 0x18DFF8u) {
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF4u;
        // 0x18dff8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFFCu;
        goto label_18dffc;
    }
    ctx->pc = 0x18DFF4u;
    {
        const bool branch_taken_0x18dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dff4) {
            ctx->pc = 0x18DFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFF4u;
            // 0x18dff8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E018u;
            goto label_18e018;
        }
    }
    ctx->pc = 0x18DFFCu;
label_18dffc:
    // 0x18dffc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e000:
    // 0x18e000: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_18e004:
    // 0x18e004: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e008:
    if (ctx->pc == 0x18E008u) {
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E004u;
        // 0x18e008: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E00Cu;
        goto label_18e00c;
    }
    ctx->pc = 0x18E004u;
    {
        const bool branch_taken_0x18e004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E004u;
        // 0x18e008: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e004) {
            ctx->pc = 0x18E014u;
            goto label_18e014;
        }
    }
    ctx->pc = 0x18E00Cu;
label_18e00c:
    // 0x18e00c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18e010:
    if (ctx->pc == 0x18E010u) {
        ctx->pc = 0x18E014u;
        goto label_18e014;
    }
    ctx->pc = 0x18E00Cu;
    {
        const bool branch_taken_0x18e00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e00c) {
            ctx->pc = 0x18E018u;
            goto label_18e018;
        }
    }
    ctx->pc = 0x18E014u;
label_18e014:
    // 0x18e014: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18e014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e018:
    // 0x18e018: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_18e01c:
    if (ctx->pc == 0x18E01Cu) {
        ctx->pc = 0x18E020u;
        goto label_18e020;
    }
    ctx->pc = 0x18E018u;
    {
        const bool branch_taken_0x18e018 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e018) {
            ctx->pc = 0x18E038u;
            goto label_18e038;
        }
    }
    ctx->pc = 0x18E020u;
label_18e020:
    // 0x18e020: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e024:
    // 0x18e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e028:
    // 0x18e028: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e02c:
    // 0x18e02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e030:
    // 0x18e030: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x18e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
label_18e034:
    // 0x18e034: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x18e034u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18e038:
    // 0x18e038: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
label_18e03c:
    if (ctx->pc == 0x18E03Cu) {
        ctx->pc = 0x18E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E038u;
        // 0x18e03c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E040u;
        goto label_18e040;
    }
    ctx->pc = 0x18E038u;
    {
        const bool branch_taken_0x18e038 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e038) {
            ctx->pc = 0x18E03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E038u;
            // 0x18e03c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E040u;
            goto label_18e040;
        }
    }
    ctx->pc = 0x18E040u;
label_18e040:
    // 0x18e040: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
label_18e044:
    if (ctx->pc == 0x18E044u) {
        ctx->pc = 0x18E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E040u;
        // 0x18e044: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E048u;
        goto label_18e048;
    }
    ctx->pc = 0x18E040u;
    {
        const bool branch_taken_0x18e040 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E040u;
        // 0x18e044: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e040) {
            ctx->pc = 0x18E0C4u;
            goto label_18e0c4;
        }
    }
    ctx->pc = 0x18E048u;
label_18e048:
    // 0x18e048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e04c:
    // 0x18e04c: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_18e050:
    // 0x18e050: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e054:
    // 0x18e054: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_18e058:
    // 0x18e058: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18e058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e05c:
    // 0x18e05c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18e060:
    if (ctx->pc == 0x18E060u) {
        ctx->pc = 0x18E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E05Cu;
        // 0x18e060: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E064u;
        goto label_18e064;
    }
    ctx->pc = 0x18E05Cu;
    {
        const bool branch_taken_0x18e05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E05Cu;
        // 0x18e060: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e05c) {
            ctx->pc = 0x18E098u;
            goto label_18e098;
        }
    }
    ctx->pc = 0x18E064u;
label_18e064:
    // 0x18e064: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x18e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_18e068:
    // 0x18e068: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_18e06c:
    if (ctx->pc == 0x18E06Cu) {
        ctx->pc = 0x18E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E068u;
        // 0x18e06c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E070u;
        goto label_18e070;
    }
    ctx->pc = 0x18E068u;
    {
        const bool branch_taken_0x18e068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e068) {
            ctx->pc = 0x18E06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E068u;
            // 0x18e06c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E09Cu;
            goto label_18e09c;
        }
    }
    ctx->pc = 0x18E070u;
label_18e070:
    // 0x18e070: 0xc0924a8  jal         func_2492A0
label_18e074:
    if (ctx->pc == 0x18E074u) {
        ctx->pc = 0x18E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E070u;
        // 0x18e074: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E078u;
        goto label_18e078;
    }
    ctx->pc = 0x18E070u;
    SET_GPR_U32(ctx, 31, 0x18E078u);
    ctx->pc = 0x18E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E070u;
    // 0x18e074: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x18E070u, 0x18E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E078u;
label_18e078:
    // 0x18e078: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18e07c:
    if (ctx->pc == 0x18E07Cu) {
        ctx->pc = 0x18E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E078u;
        // 0x18e07c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E080u;
        goto label_18e080;
    }
    ctx->pc = 0x18E078u;
    {
        const bool branch_taken_0x18e078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e078) {
            ctx->pc = 0x18E07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E078u;
            // 0x18e07c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E09Cu;
            goto label_18e09c;
        }
    }
    ctx->pc = 0x18E080u;
label_18e080:
    // 0x18e080: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e084:
    // 0x18e084: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_18e088:
    // 0x18e088: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e08c:
    if (ctx->pc == 0x18E08Cu) {
        ctx->pc = 0x18E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E088u;
        // 0x18e08c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E090u;
        goto label_18e090;
    }
    ctx->pc = 0x18E088u;
    {
        const bool branch_taken_0x18e088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E088u;
        // 0x18e08c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e088) {
            ctx->pc = 0x18E098u;
            goto label_18e098;
        }
    }
    ctx->pc = 0x18E090u;
label_18e090:
    // 0x18e090: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18e094:
    if (ctx->pc == 0x18E094u) {
        ctx->pc = 0x18E098u;
        goto label_18e098;
    }
    ctx->pc = 0x18E090u;
    {
        const bool branch_taken_0x18e090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e090) {
            ctx->pc = 0x18E09Cu;
            goto label_18e09c;
        }
    }
    ctx->pc = 0x18E098u;
label_18e098:
    // 0x18e098: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e09c:
    // 0x18e09c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_18e0a0:
    if (ctx->pc == 0x18E0A0u) {
        ctx->pc = 0x18E0A4u;
        goto label_18e0a4;
    }
    ctx->pc = 0x18E09Cu;
    {
        const bool branch_taken_0x18e09c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e09c) {
            ctx->pc = 0x18E0BCu;
            goto label_18e0bc;
        }
    }
    ctx->pc = 0x18E0A4u;
label_18e0a4:
    // 0x18e0a4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x18e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e0a8:
    // 0x18e0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e0ac:
    // 0x18e0ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e0b0:
    // 0x18e0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e0b4:
    // 0x18e0b4: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x18e0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
label_18e0b8:
    // 0x18e0b8: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x18e0b8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18e0bc:
    // 0x18e0bc: 0x12800054  beqz        $s4, . + 4 + (0x54 << 2)
label_18e0c0:
    if (ctx->pc == 0x18E0C0u) {
        ctx->pc = 0x18E0C4u;
        goto label_18e0c4;
    }
    ctx->pc = 0x18E0BCu;
    {
        const bool branch_taken_0x18e0bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0bc) {
            ctx->pc = 0x18E210u;
            goto label_18e210;
        }
    }
    ctx->pc = 0x18E0C4u;
label_18e0c4:
    // 0x18e0c4: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_18e0c8:
    // 0x18e0c8: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x18e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_18e0cc:
    // 0x18e0cc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x18e0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e0d0:
    // 0x18e0d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_18e0d4:
    if (ctx->pc == 0x18E0D4u) {
        ctx->pc = 0x18E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D0u;
        // 0x18e0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0D8u;
        goto label_18e0d8;
    }
    ctx->pc = 0x18E0D0u;
    {
        const bool branch_taken_0x18e0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D0u;
        // 0x18e0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d0) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0D8u;
label_18e0d8:
    // 0x18e0d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_18e0dc:
    // 0x18e0dc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_18e0e0:
    if (ctx->pc == 0x18E0E0u) {
        ctx->pc = 0x18E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0DCu;
        // 0x18e0e0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0E4u;
        goto label_18e0e4;
    }
    ctx->pc = 0x18E0DCu;
    {
        const bool branch_taken_0x18e0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0DCu;
        // 0x18e0e0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0dc) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0E4u;
label_18e0e4:
    // 0x18e0e4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_18e0e8:
    if (ctx->pc == 0x18E0E8u) {
        ctx->pc = 0x18E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0E4u;
        // 0x18e0e8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0ECu;
        goto label_18e0ec;
    }
    ctx->pc = 0x18E0E4u;
    {
        const bool branch_taken_0x18e0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0E4u;
        // 0x18e0e8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0e4) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0ECu;
label_18e0ec:
    // 0x18e0ec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_18e0f0:
    if (ctx->pc == 0x18E0F0u) {
        ctx->pc = 0x18E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0ECu;
        // 0x18e0f0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0F4u;
        goto label_18e0f4;
    }
    ctx->pc = 0x18E0ECu;
    {
        const bool branch_taken_0x18e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0ECu;
        // 0x18e0f0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0ec) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0F4u;
label_18e0f4:
    // 0x18e0f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e0f8:
    if (ctx->pc == 0x18E0F8u) {
        ctx->pc = 0x18E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0F4u;
        // 0x18e0f8: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0FCu;
        goto label_18e0fc;
    }
    ctx->pc = 0x18E0F4u;
    {
        const bool branch_taken_0x18e0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0F4u;
        // 0x18e0f8: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0f4) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0FCu;
label_18e0fc:
    // 0x18e0fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18e100:
    if (ctx->pc == 0x18E100u) {
        ctx->pc = 0x18E104u;
        goto label_18e104;
    }
    ctx->pc = 0x18E0FCu;
    {
        const bool branch_taken_0x18e0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e0fc) {
            ctx->pc = 0x18E108u;
            goto label_18e108;
        }
    }
    ctx->pc = 0x18E104u;
label_18e104:
    // 0x18e104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e108:
    // 0x18e108: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
label_18e10c:
    if (ctx->pc == 0x18E10Cu) {
        ctx->pc = 0x18E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E108u;
        // 0x18e10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E110u;
        goto label_18e110;
    }
    ctx->pc = 0x18E108u;
    {
        const bool branch_taken_0x18e108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E108u;
        // 0x18e10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e108) {
            ctx->pc = 0x18E224u;
            goto label_18e224;
        }
    }
    ctx->pc = 0x18E110u;
label_18e110:
    // 0x18e110: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e114:
    // 0x18e114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18e114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e118:
    // 0x18e118: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_18e11c:
    // 0x18e11c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e120:
    // 0x18e120: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_18e124:
    // 0x18e124: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18e124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e128:
    // 0x18e128: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18e12c:
    if (ctx->pc == 0x18E12Cu) {
        ctx->pc = 0x18E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E128u;
        // 0x18e12c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E130u;
        goto label_18e130;
    }
    ctx->pc = 0x18E128u;
    {
        const bool branch_taken_0x18e128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E128u;
        // 0x18e12c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e128) {
            ctx->pc = 0x18E164u;
            goto label_18e164;
        }
    }
    ctx->pc = 0x18E130u;
label_18e130:
    // 0x18e130: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_18e134:
    // 0x18e134: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_18e138:
    if (ctx->pc == 0x18E138u) {
        ctx->pc = 0x18E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E134u;
        // 0x18e138: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E13Cu;
        goto label_18e13c;
    }
    ctx->pc = 0x18E134u;
    {
        const bool branch_taken_0x18e134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e134) {
            ctx->pc = 0x18E138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E134u;
            // 0x18e138: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E168u;
            goto label_18e168;
        }
    }
    ctx->pc = 0x18E13Cu;
label_18e13c:
    // 0x18e13c: 0xc0924a8  jal         func_2492A0
label_18e140:
    if (ctx->pc == 0x18E140u) {
        ctx->pc = 0x18E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E13Cu;
        // 0x18e140: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E144u;
        goto label_18e144;
    }
    ctx->pc = 0x18E13Cu;
    SET_GPR_U32(ctx, 31, 0x18E144u);
    ctx->pc = 0x18E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E13Cu;
    // 0x18e140: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x18E13Cu, 0x18E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E144u;
label_18e144:
    // 0x18e144: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18e148:
    if (ctx->pc == 0x18E148u) {
        ctx->pc = 0x18E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E144u;
        // 0x18e148: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E14Cu;
        goto label_18e14c;
    }
    ctx->pc = 0x18E144u;
    {
        const bool branch_taken_0x18e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e144) {
            ctx->pc = 0x18E148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E144u;
            // 0x18e148: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E168u;
            goto label_18e168;
        }
    }
    ctx->pc = 0x18E14Cu;
label_18e14c:
    // 0x18e14c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e150:
    // 0x18e150: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x18e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_18e154:
    // 0x18e154: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e158:
    if (ctx->pc == 0x18E158u) {
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E15Cu;
        goto label_18e15c;
    }
    ctx->pc = 0x18E154u;
    {
        const bool branch_taken_0x18e154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e154) {
            ctx->pc = 0x18E164u;
            goto label_18e164;
        }
    }
    ctx->pc = 0x18E15Cu;
label_18e15c:
    // 0x18e15c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18e160:
    if (ctx->pc == 0x18E160u) {
        ctx->pc = 0x18E164u;
        goto label_18e164;
    }
    ctx->pc = 0x18E15Cu;
    {
        const bool branch_taken_0x18e15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e15c) {
            ctx->pc = 0x18E168u;
            goto label_18e168;
        }
    }
    ctx->pc = 0x18E164u;
label_18e164:
    // 0x18e164: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e168:
    // 0x18e168: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_18e16c:
    if (ctx->pc == 0x18E16Cu) {
        ctx->pc = 0x18E170u;
        goto label_18e170;
    }
    ctx->pc = 0x18E168u;
    {
        const bool branch_taken_0x18e168 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e168) {
            ctx->pc = 0x18E188u;
            goto label_18e188;
        }
    }
    ctx->pc = 0x18E170u;
label_18e170:
    // 0x18e170: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x18e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e174:
    // 0x18e174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e178:
    // 0x18e178: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e17c:
    // 0x18e17c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e180:
    // 0x18e180: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x18e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
label_18e184:
    // 0x18e184: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x18e184u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18e188:
    // 0x18e188: 0x5660001f  bnel        $s3, $zero, . + 4 + (0x1F << 2)
label_18e18c:
    if (ctx->pc == 0x18E18Cu) {
        ctx->pc = 0x18E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E188u;
        // 0x18e18c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E190u;
        goto label_18e190;
    }
    ctx->pc = 0x18E188u;
    {
        const bool branch_taken_0x18e188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e188) {
            ctx->pc = 0x18E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E188u;
            // 0x18e18c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E208u;
            goto label_18e208;
        }
    }
    ctx->pc = 0x18E190u;
label_18e190:
    // 0x18e190: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e194:
    // 0x18e194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18e194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e198:
    // 0x18e198: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_18e19c:
    // 0x18e19c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18e19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e1a0:
    // 0x18e1a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18e1a4:
    if (ctx->pc == 0x18E1A4u) {
        ctx->pc = 0x18E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1A0u;
        // 0x18e1a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1A8u;
        goto label_18e1a8;
    }
    ctx->pc = 0x18E1A0u;
    {
        const bool branch_taken_0x18e1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1A0u;
        // 0x18e1a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1a0) {
            ctx->pc = 0x18E1DCu;
            goto label_18e1dc;
        }
    }
    ctx->pc = 0x18E1A8u;
label_18e1a8:
    // 0x18e1a8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_18e1ac:
    // 0x18e1ac: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_18e1b0:
    if (ctx->pc == 0x18E1B0u) {
        ctx->pc = 0x18E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1ACu;
        // 0x18e1b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1B4u;
        goto label_18e1b4;
    }
    ctx->pc = 0x18E1ACu;
    {
        const bool branch_taken_0x18e1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e1ac) {
            ctx->pc = 0x18E1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E1ACu;
            // 0x18e1b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E1E0u;
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1B4u;
label_18e1b4:
    // 0x18e1b4: 0xc0924a8  jal         func_2492A0
label_18e1b8:
    if (ctx->pc == 0x18E1B8u) {
        ctx->pc = 0x18E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1B4u;
        // 0x18e1b8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1BCu;
        goto label_18e1bc;
    }
    ctx->pc = 0x18E1B4u;
    SET_GPR_U32(ctx, 31, 0x18E1BCu);
    ctx->pc = 0x18E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1B4u;
    // 0x18e1b8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x18E1B4u, 0x18E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1BCu;
label_18e1bc:
    // 0x18e1bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18e1c0:
    if (ctx->pc == 0x18E1C0u) {
        ctx->pc = 0x18E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1BCu;
        // 0x18e1c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1C4u;
        goto label_18e1c4;
    }
    ctx->pc = 0x18E1BCu;
    {
        const bool branch_taken_0x18e1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1bc) {
            ctx->pc = 0x18E1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E1BCu;
            // 0x18e1c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E1E0u;
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1C4u;
label_18e1c4:
    // 0x18e1c4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x18e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e1c8:
    // 0x18e1c8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_18e1cc:
    // 0x18e1cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e1d0:
    if (ctx->pc == 0x18E1D0u) {
        ctx->pc = 0x18E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1CCu;
        // 0x18e1d0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1D4u;
        goto label_18e1d4;
    }
    ctx->pc = 0x18E1CCu;
    {
        const bool branch_taken_0x18e1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1CCu;
        // 0x18e1d0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1cc) {
            ctx->pc = 0x18E1DCu;
            goto label_18e1dc;
        }
    }
    ctx->pc = 0x18E1D4u;
label_18e1d4:
    // 0x18e1d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18e1d8:
    if (ctx->pc == 0x18E1D8u) {
        ctx->pc = 0x18E1DCu;
        goto label_18e1dc;
    }
    ctx->pc = 0x18E1D4u;
    {
        const bool branch_taken_0x18e1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e1d4) {
            ctx->pc = 0x18E1E0u;
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1DCu;
label_18e1dc:
    // 0x18e1dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e1e0:
    // 0x18e1e0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_18e1e4:
    if (ctx->pc == 0x18E1E4u) {
        ctx->pc = 0x18E1E8u;
        goto label_18e1e8;
    }
    ctx->pc = 0x18E1E0u;
    {
        const bool branch_taken_0x18e1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1e0) {
            ctx->pc = 0x18E200u;
            goto label_18e200;
        }
    }
    ctx->pc = 0x18E1E8u;
label_18e1e8:
    // 0x18e1e8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x18e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18e1ec:
    // 0x18e1ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e1f0:
    // 0x18e1f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e1f4:
    // 0x18e1f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e1f8:
    // 0x18e1f8: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
label_18e1fc:
    // 0x18e1fc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x18e1fcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18e200:
    // 0x18e200: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_18e204:
    if (ctx->pc == 0x18E204u) {
        ctx->pc = 0x18E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E200u;
        // 0x18e204: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E208u;
        goto label_18e208;
    }
    ctx->pc = 0x18E200u;
    {
        const bool branch_taken_0x18e200 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e200) {
            ctx->pc = 0x18E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E200u;
            // 0x18e204: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E208u;
            goto label_18e208;
        }
    }
    ctx->pc = 0x18E208u;
label_18e208:
    // 0x18e208: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_18e20c:
    if (ctx->pc == 0x18E20Cu) {
        ctx->pc = 0x18E210u;
        goto label_18e210;
    }
    ctx->pc = 0x18E208u;
    {
        const bool branch_taken_0x18e208 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e208) {
            ctx->pc = 0x18E224u;
            goto label_18e224;
        }
    }
    ctx->pc = 0x18E210u;
label_18e210:
    // 0x18e210: 0xc061a16  jal         func_186858
label_18e214:
    if (ctx->pc == 0x18E214u) {
        ctx->pc = 0x18E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E210u;
        // 0x18e214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E218u;
        goto label_18e218;
    }
    ctx->pc = 0x18E210u;
    SET_GPR_U32(ctx, 31, 0x18E218u);
    ctx->pc = 0x18E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E210u;
    // 0x18e214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E210u, 0x18E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E218u;
label_18e218:
    // 0x18e218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e21c:
    // 0x18e21c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18e220:
    if (ctx->pc == 0x18E220u) {
        ctx->pc = 0x18E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E21Cu;
        // 0x18e220: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E224u;
        goto label_18e224;
    }
    ctx->pc = 0x18E21Cu;
    {
        const bool branch_taken_0x18e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E21Cu;
        // 0x18e220: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e21c) {
            ctx->pc = 0x18E230u;
            goto label_18e230;
        }
    }
    ctx->pc = 0x18E224u;
label_18e224:
    // 0x18e224: 0xc061a16  jal         func_186858
label_18e228:
    if (ctx->pc == 0x18E228u) {
        ctx->pc = 0x18E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E224u;
        // 0x18e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E22Cu;
        goto label_18e22c;
    }
    ctx->pc = 0x18E224u;
    SET_GPR_U32(ctx, 31, 0x18E22Cu);
    ctx->pc = 0x18E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E224u;
    // 0x18e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E224u, 0x18E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E22Cu;
label_18e22c:
    // 0x18e22c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x18e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_18e230:
    // 0x18e230: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18e234:
    // 0x18e234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e238:
    // 0x18e238: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_18e23c:
    if (ctx->pc == 0x18E23Cu) {
        ctx->pc = 0x18E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E238u;
        // 0x18e23c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E240u;
        goto label_18e240;
    }
    ctx->pc = 0x18E238u;
    {
        const bool branch_taken_0x18e238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E238u;
        // 0x18e23c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e238) {
            ctx->pc = 0x18E284u;
            goto label_18e284;
        }
    }
    ctx->pc = 0x18E240u;
label_18e240:
    // 0x18e240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18e244:
    if (ctx->pc == 0x18E244u) {
        ctx->pc = 0x18E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E240u;
        // 0x18e244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E248u;
        goto label_18e248;
    }
    ctx->pc = 0x18E240u;
    {
        const bool branch_taken_0x18e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E240u;
        // 0x18e244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e240) {
            ctx->pc = 0x18E258u;
            goto label_18e258;
        }
    }
    ctx->pc = 0x18E248u;
label_18e248:
    // 0x18e248: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_18e24c:
    if (ctx->pc == 0x18E24Cu) {
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E250u;
        goto label_18e250;
    }
    ctx->pc = 0x18E248u;
    {
        const bool branch_taken_0x18e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e248) {
            ctx->pc = 0x18E24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E248u;
            // 0x18e24c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E270u;
            goto label_18e270;
        }
    }
    ctx->pc = 0x18E250u;
label_18e250:
    // 0x18e250: 0x10000040  b           . + 4 + (0x40 << 2)
label_18e254:
    if (ctx->pc == 0x18E254u) {
        ctx->pc = 0x18E258u;
        goto label_18e258;
    }
    ctx->pc = 0x18E250u;
    {
        const bool branch_taken_0x18e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e250) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E258u;
label_18e258:
    // 0x18e258: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_18e25c:
    if (ctx->pc == 0x18E25Cu) {
        ctx->pc = 0x18E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E258u;
        // 0x18e25c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E260u;
        goto label_18e260;
    }
    ctx->pc = 0x18E258u;
    {
        const bool branch_taken_0x18e258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E258u;
        // 0x18e25c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e258) {
            ctx->pc = 0x18E2A4u;
            goto label_18e2a4;
        }
    }
    ctx->pc = 0x18E260u;
label_18e260:
    // 0x18e260: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_18e264:
    if (ctx->pc == 0x18E264u) {
        ctx->pc = 0x18E268u;
        goto label_18e268;
    }
    ctx->pc = 0x18E260u;
    {
        const bool branch_taken_0x18e260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e260) {
            ctx->pc = 0x18E294u;
            goto label_18e294;
        }
    }
    ctx->pc = 0x18E268u;
label_18e268:
    // 0x18e268: 0x1000003a  b           . + 4 + (0x3A << 2)
label_18e26c:
    if (ctx->pc == 0x18E26Cu) {
        ctx->pc = 0x18E270u;
        goto label_18e270;
    }
    ctx->pc = 0x18E268u;
    {
        const bool branch_taken_0x18e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e268) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E270u;
label_18e270:
    // 0x18e270: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18e274:
    // 0x18e274: 0x40f809  jalr        $v0
label_18e278:
    if (ctx->pc == 0x18E278u) {
        ctx->pc = 0x18E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E274u;
        // 0x18e278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E27Cu;
        goto label_18e27c;
    }
    ctx->pc = 0x18E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E27Cu);
        ctx->pc = 0x18E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E274u;
        // 0x18e278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E274u, 0x18E27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E27Cu;
label_18e27c:
    // 0x18e27c: 0x10000035  b           . + 4 + (0x35 << 2)
label_18e280:
    if (ctx->pc == 0x18E280u) {
        ctx->pc = 0x18E284u;
        goto label_18e284;
    }
    ctx->pc = 0x18E27Cu;
    {
        const bool branch_taken_0x18e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e27c) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E284u;
label_18e284:
    // 0x18e284: 0xc063992  jal         func_18E648
label_18e288:
    if (ctx->pc == 0x18E288u) {
        ctx->pc = 0x18E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E284u;
        // 0x18e288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E28Cu;
        goto label_18e28c;
    }
    ctx->pc = 0x18E284u;
    SET_GPR_U32(ctx, 31, 0x18E28Cu);
    ctx->pc = 0x18E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E284u;
    // 0x18e288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E648u, 0x18E284u, 0x18E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E28Cu;
label_18e28c:
    // 0x18e28c: 0x10000031  b           . + 4 + (0x31 << 2)
label_18e290:
    if (ctx->pc == 0x18E290u) {
        ctx->pc = 0x18E294u;
        goto label_18e294;
    }
    ctx->pc = 0x18E28Cu;
    {
        const bool branch_taken_0x18e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e28c) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E294u;
label_18e294:
    // 0x18e294: 0xc063b84  jal         func_18EE10
label_18e298:
    if (ctx->pc == 0x18E298u) {
        ctx->pc = 0x18E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E294u;
        // 0x18e298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E29Cu;
        goto label_18e29c;
    }
    ctx->pc = 0x18E294u;
    SET_GPR_U32(ctx, 31, 0x18E29Cu);
    ctx->pc = 0x18E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E294u;
    // 0x18e298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE10u, 0x18E294u, 0x18E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E29Cu;
label_18e29c:
    // 0x18e29c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_18e2a0:
    if (ctx->pc == 0x18E2A0u) {
        ctx->pc = 0x18E2A4u;
        goto label_18e2a4;
    }
    ctx->pc = 0x18E29Cu;
    {
        const bool branch_taken_0x18e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e29c) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E2A4u;
label_18e2a4:
    // 0x18e2a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e2a8:
    // 0x18e2a8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x18e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_18e2ac:
    // 0x18e2ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18e2b0:
    if (ctx->pc == 0x18E2B0u) {
        ctx->pc = 0x18E2B4u;
        goto label_18e2b4;
    }
    ctx->pc = 0x18E2ACu;
    {
        const bool branch_taken_0x18e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2ac) {
            ctx->pc = 0x18E2D4u;
            goto label_18e2d4;
        }
    }
    ctx->pc = 0x18E2B4u;
label_18e2b4:
    // 0x18e2b4: 0xc061a1e  jal         func_186878
label_18e2b8:
    if (ctx->pc == 0x18E2B8u) {
        ctx->pc = 0x18E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2B4u;
        // 0x18e2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2BCu;
        goto label_18e2bc;
    }
    ctx->pc = 0x18E2B4u;
    SET_GPR_U32(ctx, 31, 0x18E2BCu);
    ctx->pc = 0x18E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2B4u;
    // 0x18e2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18E2B4u, 0x18E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2BCu;
label_18e2bc:
    // 0x18e2bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e2c0:
    // 0x18e2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e2c4:
    // 0x18e2c4: 0xc06cdda  jal         func_1B3768
label_18e2c8:
    if (ctx->pc == 0x18E2C8u) {
        ctx->pc = 0x18E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C4u;
        // 0x18e2c8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2CCu;
        goto label_18e2cc;
    }
    ctx->pc = 0x18E2C4u;
    SET_GPR_U32(ctx, 31, 0x18E2CCu);
    ctx->pc = 0x18E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2C4u;
    // 0x18e2c8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x18E2C4u, 0x18E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2CCu;
label_18e2cc:
    // 0x18e2cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_18e2d0:
    if (ctx->pc == 0x18E2D0u) {
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2D4u;
        goto label_18e2d4;
    }
    ctx->pc = 0x18E2CCu;
    {
        const bool branch_taken_0x18e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2cc) {
            ctx->pc = 0x18E2E8u;
            goto label_18e2e8;
        }
    }
    ctx->pc = 0x18E2D4u;
label_18e2d4:
    // 0x18e2d4: 0xc061a1e  jal         func_186878
label_18e2d8:
    if (ctx->pc == 0x18E2D8u) {
        ctx->pc = 0x18E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2D4u;
        // 0x18e2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2DCu;
        goto label_18e2dc;
    }
    ctx->pc = 0x18E2D4u;
    SET_GPR_U32(ctx, 31, 0x18E2DCu);
    ctx->pc = 0x18E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2D4u;
    // 0x18e2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18E2D4u, 0x18E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2DCu;
label_18e2dc:
    // 0x18e2dc: 0xc06cdb4  jal         func_1B36D0
label_18e2e0:
    if (ctx->pc == 0x18E2E0u) {
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2E4u;
        goto label_18e2e4;
    }
    ctx->pc = 0x18E2DCu;
    SET_GPR_U32(ctx, 31, 0x18E2E4u);
    ctx->pc = 0x18E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2DCu;
    // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x18E2DCu, 0x18E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2E4u;
label_18e2e4:
    // 0x18e2e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18e2e8:
    // 0x18e2e8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18e2ec:
    // 0x18e2ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18e2f0:
    if (ctx->pc == 0x18E2F0u) {
        ctx->pc = 0x18E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2ECu;
        // 0x18e2f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2F4u;
        goto label_18e2f4;
    }
    ctx->pc = 0x18E2ECu;
    {
        const bool branch_taken_0x18e2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2ECu;
        // 0x18e2f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2ec) {
            ctx->pc = 0x18E308u;
            goto label_18e308;
        }
    }
    ctx->pc = 0x18E2F4u;
label_18e2f4:
    // 0x18e2f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18e2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18e2f8:
    // 0x18e2f8: 0x0  nop
    ctx->pc = 0x18e2f8u;
    // NOP
label_18e2fc:
    // 0x18e2fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18e2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18e300:
    // 0x18e300: 0x10000007  b           . + 4 + (0x7 << 2)
label_18e304:
    if (ctx->pc == 0x18E304u) {
        ctx->pc = 0x18E308u;
        goto label_18e308;
    }
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E320u;
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E308u;
label_18e308:
    // 0x18e308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18e30c:
    // 0x18e30c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18e310:
    // 0x18e310: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18e310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18e314:
    // 0x18e314: 0x0  nop
    ctx->pc = 0x18e314u;
    // NOP
label_18e318:
    // 0x18e318: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18e318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18e31c:
    // 0x18e31c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18e31cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18e320:
    // 0x18e320: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18e324:
    // 0x18e324: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18e324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18e328:
    // 0x18e328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e32c:
    // 0x18e32c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x18e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e330:
    // 0x18e330: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18e334:
    // 0x18e334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e338:
    // 0x18e338: 0x0  nop
    ctx->pc = 0x18e338u;
    // NOP
label_18e33c:
    // 0x18e33c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18e340:
    if (ctx->pc == 0x18E340u) {
        ctx->pc = 0x18E344u;
        goto label_18e344;
    }
    ctx->pc = 0x18E33Cu;
    {
        const bool branch_taken_0x18e33c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e33c) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18E344u;
label_18e344:
    // 0x18e344: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18e348:
    // 0x18e348: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e34c:
    // 0x18e34c: 0x40f809  jalr        $v0
label_18e350:
    if (ctx->pc == 0x18E350u) {
        ctx->pc = 0x18E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E34Cu;
        // 0x18e350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E354u;
        goto label_18e354;
    }
    ctx->pc = 0x18E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E354u);
        ctx->pc = 0x18E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E34Cu;
        // 0x18e350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E34Cu, 0x18E354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E354u;
label_18e354:
    // 0x18e354: 0xc061a2e  jal         func_1868B8
label_18e358:
    if (ctx->pc == 0x18E358u) {
        ctx->pc = 0x18E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E354u;
        // 0x18e358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E35Cu;
        goto label_18e35c;
    }
    ctx->pc = 0x18E354u;
    SET_GPR_U32(ctx, 31, 0x18E35Cu);
    ctx->pc = 0x18E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E354u;
    // 0x18e358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18E354u, 0x18E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E35Cu;
label_18e35c:
    // 0x18e35c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18e360:
    // 0x18e360: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18e364:
    // 0x18e364: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18e368:
    // 0x18e368: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18e36c:
    // 0x18e36c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x18e36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18e370:
    // 0x18e370: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x18e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_18e374:
    // 0x18e374: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x18e374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18e378:
    // 0x18e378: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18e378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18e37c:
    // 0x18e37c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x18e37cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18e380:
    // 0x18e380: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x18e380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_18e384:
    // 0x18e384: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x18e384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18e388:
    // 0x18e388: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18e38c:
    // 0x18e38c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x18e38cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_18e390:
    // 0x18e390: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18e394:
    // 0x18e394: 0x3e00008  jr          $ra
label_18e398:
    if (ctx->pc == 0x18E398u) {
        ctx->pc = 0x18E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E394u;
        // 0x18e398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E39Cu;
        goto label_18e39c;
    }
    ctx->pc = 0x18E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E394u;
        // 0x18e398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E39Cu;
label_18e39c:
    // 0x18e39c: 0x0  nop
    ctx->pc = 0x18e39cu;
    // NOP
    ctx->pc = 0x18e3a0u;
}
