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

// Function: sub_002FADE0
// Address: 0x2fade0 - 0x2fb548
void sub_002FADE0_0x2fade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FADE0_0x2fade0");
#endif

    switch (ctx->pc) {
        case 0x2fade0u: goto label_2fade0;
        case 0x2fade4u: goto label_2fade4;
        case 0x2fade8u: goto label_2fade8;
        case 0x2fadecu: goto label_2fadec;
        case 0x2fadf0u: goto label_2fadf0;
        case 0x2fadf4u: goto label_2fadf4;
        case 0x2fadf8u: goto label_2fadf8;
        case 0x2fadfcu: goto label_2fadfc;
        case 0x2fae00u: goto label_2fae00;
        case 0x2fae04u: goto label_2fae04;
        case 0x2fae08u: goto label_2fae08;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae10u: goto label_2fae10;
        case 0x2fae14u: goto label_2fae14;
        case 0x2fae18u: goto label_2fae18;
        case 0x2fae1cu: goto label_2fae1c;
        case 0x2fae20u: goto label_2fae20;
        case 0x2fae24u: goto label_2fae24;
        case 0x2fae28u: goto label_2fae28;
        case 0x2fae2cu: goto label_2fae2c;
        case 0x2fae30u: goto label_2fae30;
        case 0x2fae34u: goto label_2fae34;
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae3cu: goto label_2fae3c;
        case 0x2fae40u: goto label_2fae40;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae48u: goto label_2fae48;
        case 0x2fae4cu: goto label_2fae4c;
        case 0x2fae50u: goto label_2fae50;
        case 0x2fae54u: goto label_2fae54;
        case 0x2fae58u: goto label_2fae58;
        case 0x2fae5cu: goto label_2fae5c;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae64u: goto label_2fae64;
        case 0x2fae68u: goto label_2fae68;
        case 0x2fae6cu: goto label_2fae6c;
        case 0x2fae70u: goto label_2fae70;
        case 0x2fae74u: goto label_2fae74;
        case 0x2fae78u: goto label_2fae78;
        case 0x2fae7cu: goto label_2fae7c;
        case 0x2fae80u: goto label_2fae80;
        case 0x2fae84u: goto label_2fae84;
        case 0x2fae88u: goto label_2fae88;
        case 0x2fae8cu: goto label_2fae8c;
        case 0x2fae90u: goto label_2fae90;
        case 0x2fae94u: goto label_2fae94;
        case 0x2fae98u: goto label_2fae98;
        case 0x2fae9cu: goto label_2fae9c;
        case 0x2faea0u: goto label_2faea0;
        case 0x2faea4u: goto label_2faea4;
        case 0x2faea8u: goto label_2faea8;
        case 0x2faeacu: goto label_2faeac;
        case 0x2faeb0u: goto label_2faeb0;
        case 0x2faeb4u: goto label_2faeb4;
        case 0x2faeb8u: goto label_2faeb8;
        case 0x2faebcu: goto label_2faebc;
        case 0x2faec0u: goto label_2faec0;
        case 0x2faec4u: goto label_2faec4;
        case 0x2faec8u: goto label_2faec8;
        case 0x2faeccu: goto label_2faecc;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faed8u: goto label_2faed8;
        case 0x2faedcu: goto label_2faedc;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faee4u: goto label_2faee4;
        case 0x2faee8u: goto label_2faee8;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faef0u: goto label_2faef0;
        case 0x2faef4u: goto label_2faef4;
        case 0x2faef8u: goto label_2faef8;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf00u: goto label_2faf00;
        case 0x2faf04u: goto label_2faf04;
        case 0x2faf08u: goto label_2faf08;
        case 0x2faf0cu: goto label_2faf0c;
        case 0x2faf10u: goto label_2faf10;
        case 0x2faf14u: goto label_2faf14;
        case 0x2faf18u: goto label_2faf18;
        case 0x2faf1cu: goto label_2faf1c;
        case 0x2faf20u: goto label_2faf20;
        case 0x2faf24u: goto label_2faf24;
        case 0x2faf28u: goto label_2faf28;
        case 0x2faf2cu: goto label_2faf2c;
        case 0x2faf30u: goto label_2faf30;
        case 0x2faf34u: goto label_2faf34;
        case 0x2faf38u: goto label_2faf38;
        case 0x2faf3cu: goto label_2faf3c;
        case 0x2faf40u: goto label_2faf40;
        case 0x2faf44u: goto label_2faf44;
        case 0x2faf48u: goto label_2faf48;
        case 0x2faf4cu: goto label_2faf4c;
        case 0x2faf50u: goto label_2faf50;
        case 0x2faf54u: goto label_2faf54;
        case 0x2faf58u: goto label_2faf58;
        case 0x2faf5cu: goto label_2faf5c;
        case 0x2faf60u: goto label_2faf60;
        case 0x2faf64u: goto label_2faf64;
        case 0x2faf68u: goto label_2faf68;
        case 0x2faf6cu: goto label_2faf6c;
        case 0x2faf70u: goto label_2faf70;
        case 0x2faf74u: goto label_2faf74;
        case 0x2faf78u: goto label_2faf78;
        case 0x2faf7cu: goto label_2faf7c;
        case 0x2faf80u: goto label_2faf80;
        case 0x2faf84u: goto label_2faf84;
        case 0x2faf88u: goto label_2faf88;
        case 0x2faf8cu: goto label_2faf8c;
        case 0x2faf90u: goto label_2faf90;
        case 0x2faf94u: goto label_2faf94;
        case 0x2faf98u: goto label_2faf98;
        case 0x2faf9cu: goto label_2faf9c;
        case 0x2fafa0u: goto label_2fafa0;
        case 0x2fafa4u: goto label_2fafa4;
        case 0x2fafa8u: goto label_2fafa8;
        case 0x2fafacu: goto label_2fafac;
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafb4u: goto label_2fafb4;
        case 0x2fafb8u: goto label_2fafb8;
        case 0x2fafbcu: goto label_2fafbc;
        case 0x2fafc0u: goto label_2fafc0;
        case 0x2fafc4u: goto label_2fafc4;
        case 0x2fafc8u: goto label_2fafc8;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafd0u: goto label_2fafd0;
        case 0x2fafd4u: goto label_2fafd4;
        case 0x2fafd8u: goto label_2fafd8;
        case 0x2fafdcu: goto label_2fafdc;
        case 0x2fafe0u: goto label_2fafe0;
        case 0x2fafe4u: goto label_2fafe4;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fafecu: goto label_2fafec;
        case 0x2faff0u: goto label_2faff0;
        case 0x2faff4u: goto label_2faff4;
        case 0x2faff8u: goto label_2faff8;
        case 0x2faffcu: goto label_2faffc;
        case 0x2fb000u: goto label_2fb000;
        case 0x2fb004u: goto label_2fb004;
        case 0x2fb008u: goto label_2fb008;
        case 0x2fb00cu: goto label_2fb00c;
        case 0x2fb010u: goto label_2fb010;
        case 0x2fb014u: goto label_2fb014;
        case 0x2fb018u: goto label_2fb018;
        case 0x2fb01cu: goto label_2fb01c;
        case 0x2fb020u: goto label_2fb020;
        case 0x2fb024u: goto label_2fb024;
        case 0x2fb028u: goto label_2fb028;
        case 0x2fb02cu: goto label_2fb02c;
        case 0x2fb030u: goto label_2fb030;
        case 0x2fb034u: goto label_2fb034;
        case 0x2fb038u: goto label_2fb038;
        case 0x2fb03cu: goto label_2fb03c;
        case 0x2fb040u: goto label_2fb040;
        case 0x2fb044u: goto label_2fb044;
        case 0x2fb048u: goto label_2fb048;
        case 0x2fb04cu: goto label_2fb04c;
        case 0x2fb050u: goto label_2fb050;
        case 0x2fb054u: goto label_2fb054;
        case 0x2fb058u: goto label_2fb058;
        case 0x2fb05cu: goto label_2fb05c;
        case 0x2fb060u: goto label_2fb060;
        case 0x2fb064u: goto label_2fb064;
        case 0x2fb068u: goto label_2fb068;
        case 0x2fb06cu: goto label_2fb06c;
        case 0x2fb070u: goto label_2fb070;
        case 0x2fb074u: goto label_2fb074;
        case 0x2fb078u: goto label_2fb078;
        case 0x2fb07cu: goto label_2fb07c;
        case 0x2fb080u: goto label_2fb080;
        case 0x2fb084u: goto label_2fb084;
        case 0x2fb088u: goto label_2fb088;
        case 0x2fb08cu: goto label_2fb08c;
        case 0x2fb090u: goto label_2fb090;
        case 0x2fb094u: goto label_2fb094;
        case 0x2fb098u: goto label_2fb098;
        case 0x2fb09cu: goto label_2fb09c;
        case 0x2fb0a0u: goto label_2fb0a0;
        case 0x2fb0a4u: goto label_2fb0a4;
        case 0x2fb0a8u: goto label_2fb0a8;
        case 0x2fb0acu: goto label_2fb0ac;
        case 0x2fb0b0u: goto label_2fb0b0;
        case 0x2fb0b4u: goto label_2fb0b4;
        case 0x2fb0b8u: goto label_2fb0b8;
        case 0x2fb0bcu: goto label_2fb0bc;
        case 0x2fb0c0u: goto label_2fb0c0;
        case 0x2fb0c4u: goto label_2fb0c4;
        case 0x2fb0c8u: goto label_2fb0c8;
        case 0x2fb0ccu: goto label_2fb0cc;
        case 0x2fb0d0u: goto label_2fb0d0;
        case 0x2fb0d4u: goto label_2fb0d4;
        case 0x2fb0d8u: goto label_2fb0d8;
        case 0x2fb0dcu: goto label_2fb0dc;
        case 0x2fb0e0u: goto label_2fb0e0;
        case 0x2fb0e4u: goto label_2fb0e4;
        case 0x2fb0e8u: goto label_2fb0e8;
        case 0x2fb0ecu: goto label_2fb0ec;
        case 0x2fb0f0u: goto label_2fb0f0;
        case 0x2fb0f4u: goto label_2fb0f4;
        case 0x2fb0f8u: goto label_2fb0f8;
        case 0x2fb0fcu: goto label_2fb0fc;
        case 0x2fb100u: goto label_2fb100;
        case 0x2fb104u: goto label_2fb104;
        case 0x2fb108u: goto label_2fb108;
        case 0x2fb10cu: goto label_2fb10c;
        case 0x2fb110u: goto label_2fb110;
        case 0x2fb114u: goto label_2fb114;
        case 0x2fb118u: goto label_2fb118;
        case 0x2fb11cu: goto label_2fb11c;
        case 0x2fb120u: goto label_2fb120;
        case 0x2fb124u: goto label_2fb124;
        case 0x2fb128u: goto label_2fb128;
        case 0x2fb12cu: goto label_2fb12c;
        case 0x2fb130u: goto label_2fb130;
        case 0x2fb134u: goto label_2fb134;
        case 0x2fb138u: goto label_2fb138;
        case 0x2fb13cu: goto label_2fb13c;
        case 0x2fb140u: goto label_2fb140;
        case 0x2fb144u: goto label_2fb144;
        case 0x2fb148u: goto label_2fb148;
        case 0x2fb14cu: goto label_2fb14c;
        case 0x2fb150u: goto label_2fb150;
        case 0x2fb154u: goto label_2fb154;
        case 0x2fb158u: goto label_2fb158;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb160u: goto label_2fb160;
        case 0x2fb164u: goto label_2fb164;
        case 0x2fb168u: goto label_2fb168;
        case 0x2fb16cu: goto label_2fb16c;
        case 0x2fb170u: goto label_2fb170;
        case 0x2fb174u: goto label_2fb174;
        case 0x2fb178u: goto label_2fb178;
        case 0x2fb17cu: goto label_2fb17c;
        case 0x2fb180u: goto label_2fb180;
        case 0x2fb184u: goto label_2fb184;
        case 0x2fb188u: goto label_2fb188;
        case 0x2fb18cu: goto label_2fb18c;
        case 0x2fb190u: goto label_2fb190;
        case 0x2fb194u: goto label_2fb194;
        case 0x2fb198u: goto label_2fb198;
        case 0x2fb19cu: goto label_2fb19c;
        case 0x2fb1a0u: goto label_2fb1a0;
        case 0x2fb1a4u: goto label_2fb1a4;
        case 0x2fb1a8u: goto label_2fb1a8;
        case 0x2fb1acu: goto label_2fb1ac;
        case 0x2fb1b0u: goto label_2fb1b0;
        case 0x2fb1b4u: goto label_2fb1b4;
        case 0x2fb1b8u: goto label_2fb1b8;
        case 0x2fb1bcu: goto label_2fb1bc;
        case 0x2fb1c0u: goto label_2fb1c0;
        case 0x2fb1c4u: goto label_2fb1c4;
        case 0x2fb1c8u: goto label_2fb1c8;
        case 0x2fb1ccu: goto label_2fb1cc;
        case 0x2fb1d0u: goto label_2fb1d0;
        case 0x2fb1d4u: goto label_2fb1d4;
        case 0x2fb1d8u: goto label_2fb1d8;
        case 0x2fb1dcu: goto label_2fb1dc;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb1e4u: goto label_2fb1e4;
        case 0x2fb1e8u: goto label_2fb1e8;
        case 0x2fb1ecu: goto label_2fb1ec;
        case 0x2fb1f0u: goto label_2fb1f0;
        case 0x2fb1f4u: goto label_2fb1f4;
        case 0x2fb1f8u: goto label_2fb1f8;
        case 0x2fb1fcu: goto label_2fb1fc;
        case 0x2fb200u: goto label_2fb200;
        case 0x2fb204u: goto label_2fb204;
        case 0x2fb208u: goto label_2fb208;
        case 0x2fb20cu: goto label_2fb20c;
        case 0x2fb210u: goto label_2fb210;
        case 0x2fb214u: goto label_2fb214;
        case 0x2fb218u: goto label_2fb218;
        case 0x2fb21cu: goto label_2fb21c;
        case 0x2fb220u: goto label_2fb220;
        case 0x2fb224u: goto label_2fb224;
        case 0x2fb228u: goto label_2fb228;
        case 0x2fb22cu: goto label_2fb22c;
        case 0x2fb230u: goto label_2fb230;
        case 0x2fb234u: goto label_2fb234;
        case 0x2fb238u: goto label_2fb238;
        case 0x2fb23cu: goto label_2fb23c;
        case 0x2fb240u: goto label_2fb240;
        case 0x2fb244u: goto label_2fb244;
        case 0x2fb248u: goto label_2fb248;
        case 0x2fb24cu: goto label_2fb24c;
        case 0x2fb250u: goto label_2fb250;
        case 0x2fb254u: goto label_2fb254;
        case 0x2fb258u: goto label_2fb258;
        case 0x2fb25cu: goto label_2fb25c;
        case 0x2fb260u: goto label_2fb260;
        case 0x2fb264u: goto label_2fb264;
        case 0x2fb268u: goto label_2fb268;
        case 0x2fb26cu: goto label_2fb26c;
        case 0x2fb270u: goto label_2fb270;
        case 0x2fb274u: goto label_2fb274;
        case 0x2fb278u: goto label_2fb278;
        case 0x2fb27cu: goto label_2fb27c;
        case 0x2fb280u: goto label_2fb280;
        case 0x2fb284u: goto label_2fb284;
        case 0x2fb288u: goto label_2fb288;
        case 0x2fb28cu: goto label_2fb28c;
        case 0x2fb290u: goto label_2fb290;
        case 0x2fb294u: goto label_2fb294;
        case 0x2fb298u: goto label_2fb298;
        case 0x2fb29cu: goto label_2fb29c;
        case 0x2fb2a0u: goto label_2fb2a0;
        case 0x2fb2a4u: goto label_2fb2a4;
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2acu: goto label_2fb2ac;
        case 0x2fb2b0u: goto label_2fb2b0;
        case 0x2fb2b4u: goto label_2fb2b4;
        case 0x2fb2b8u: goto label_2fb2b8;
        case 0x2fb2bcu: goto label_2fb2bc;
        case 0x2fb2c0u: goto label_2fb2c0;
        case 0x2fb2c4u: goto label_2fb2c4;
        case 0x2fb2c8u: goto label_2fb2c8;
        case 0x2fb2ccu: goto label_2fb2cc;
        case 0x2fb2d0u: goto label_2fb2d0;
        case 0x2fb2d4u: goto label_2fb2d4;
        case 0x2fb2d8u: goto label_2fb2d8;
        case 0x2fb2dcu: goto label_2fb2dc;
        case 0x2fb2e0u: goto label_2fb2e0;
        case 0x2fb2e4u: goto label_2fb2e4;
        case 0x2fb2e8u: goto label_2fb2e8;
        case 0x2fb2ecu: goto label_2fb2ec;
        case 0x2fb2f0u: goto label_2fb2f0;
        case 0x2fb2f4u: goto label_2fb2f4;
        case 0x2fb2f8u: goto label_2fb2f8;
        case 0x2fb2fcu: goto label_2fb2fc;
        case 0x2fb300u: goto label_2fb300;
        case 0x2fb304u: goto label_2fb304;
        case 0x2fb308u: goto label_2fb308;
        case 0x2fb30cu: goto label_2fb30c;
        case 0x2fb310u: goto label_2fb310;
        case 0x2fb314u: goto label_2fb314;
        case 0x2fb318u: goto label_2fb318;
        case 0x2fb31cu: goto label_2fb31c;
        case 0x2fb320u: goto label_2fb320;
        case 0x2fb324u: goto label_2fb324;
        case 0x2fb328u: goto label_2fb328;
        case 0x2fb32cu: goto label_2fb32c;
        case 0x2fb330u: goto label_2fb330;
        case 0x2fb334u: goto label_2fb334;
        case 0x2fb338u: goto label_2fb338;
        case 0x2fb33cu: goto label_2fb33c;
        case 0x2fb340u: goto label_2fb340;
        case 0x2fb344u: goto label_2fb344;
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb34cu: goto label_2fb34c;
        case 0x2fb350u: goto label_2fb350;
        case 0x2fb354u: goto label_2fb354;
        case 0x2fb358u: goto label_2fb358;
        case 0x2fb35cu: goto label_2fb35c;
        case 0x2fb360u: goto label_2fb360;
        case 0x2fb364u: goto label_2fb364;
        case 0x2fb368u: goto label_2fb368;
        case 0x2fb36cu: goto label_2fb36c;
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb378u: goto label_2fb378;
        case 0x2fb37cu: goto label_2fb37c;
        case 0x2fb380u: goto label_2fb380;
        case 0x2fb384u: goto label_2fb384;
        case 0x2fb388u: goto label_2fb388;
        case 0x2fb38cu: goto label_2fb38c;
        case 0x2fb390u: goto label_2fb390;
        case 0x2fb394u: goto label_2fb394;
        case 0x2fb398u: goto label_2fb398;
        case 0x2fb39cu: goto label_2fb39c;
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3a4u: goto label_2fb3a4;
        case 0x2fb3a8u: goto label_2fb3a8;
        case 0x2fb3acu: goto label_2fb3ac;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3b4u: goto label_2fb3b4;
        case 0x2fb3b8u: goto label_2fb3b8;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c0u: goto label_2fb3c0;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb3c8u: goto label_2fb3c8;
        case 0x2fb3ccu: goto label_2fb3cc;
        case 0x2fb3d0u: goto label_2fb3d0;
        case 0x2fb3d4u: goto label_2fb3d4;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb3dcu: goto label_2fb3dc;
        case 0x2fb3e0u: goto label_2fb3e0;
        case 0x2fb3e4u: goto label_2fb3e4;
        case 0x2fb3e8u: goto label_2fb3e8;
        case 0x2fb3ecu: goto label_2fb3ec;
        case 0x2fb3f0u: goto label_2fb3f0;
        case 0x2fb3f4u: goto label_2fb3f4;
        case 0x2fb3f8u: goto label_2fb3f8;
        case 0x2fb3fcu: goto label_2fb3fc;
        case 0x2fb400u: goto label_2fb400;
        case 0x2fb404u: goto label_2fb404;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb40cu: goto label_2fb40c;
        case 0x2fb410u: goto label_2fb410;
        case 0x2fb414u: goto label_2fb414;
        case 0x2fb418u: goto label_2fb418;
        case 0x2fb41cu: goto label_2fb41c;
        case 0x2fb420u: goto label_2fb420;
        case 0x2fb424u: goto label_2fb424;
        case 0x2fb428u: goto label_2fb428;
        case 0x2fb42cu: goto label_2fb42c;
        case 0x2fb430u: goto label_2fb430;
        case 0x2fb434u: goto label_2fb434;
        case 0x2fb438u: goto label_2fb438;
        case 0x2fb43cu: goto label_2fb43c;
        case 0x2fb440u: goto label_2fb440;
        case 0x2fb444u: goto label_2fb444;
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb44cu: goto label_2fb44c;
        case 0x2fb450u: goto label_2fb450;
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb458u: goto label_2fb458;
        case 0x2fb45cu: goto label_2fb45c;
        case 0x2fb460u: goto label_2fb460;
        case 0x2fb464u: goto label_2fb464;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb46cu: goto label_2fb46c;
        case 0x2fb470u: goto label_2fb470;
        case 0x2fb474u: goto label_2fb474;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb47cu: goto label_2fb47c;
        case 0x2fb480u: goto label_2fb480;
        case 0x2fb484u: goto label_2fb484;
        case 0x2fb488u: goto label_2fb488;
        case 0x2fb48cu: goto label_2fb48c;
        case 0x2fb490u: goto label_2fb490;
        case 0x2fb494u: goto label_2fb494;
        case 0x2fb498u: goto label_2fb498;
        case 0x2fb49cu: goto label_2fb49c;
        case 0x2fb4a0u: goto label_2fb4a0;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4a8u: goto label_2fb4a8;
        case 0x2fb4acu: goto label_2fb4ac;
        case 0x2fb4b0u: goto label_2fb4b0;
        case 0x2fb4b4u: goto label_2fb4b4;
        case 0x2fb4b8u: goto label_2fb4b8;
        case 0x2fb4bcu: goto label_2fb4bc;
        case 0x2fb4c0u: goto label_2fb4c0;
        case 0x2fb4c4u: goto label_2fb4c4;
        case 0x2fb4c8u: goto label_2fb4c8;
        case 0x2fb4ccu: goto label_2fb4cc;
        case 0x2fb4d0u: goto label_2fb4d0;
        case 0x2fb4d4u: goto label_2fb4d4;
        case 0x2fb4d8u: goto label_2fb4d8;
        case 0x2fb4dcu: goto label_2fb4dc;
        case 0x2fb4e0u: goto label_2fb4e0;
        case 0x2fb4e4u: goto label_2fb4e4;
        case 0x2fb4e8u: goto label_2fb4e8;
        case 0x2fb4ecu: goto label_2fb4ec;
        case 0x2fb4f0u: goto label_2fb4f0;
        case 0x2fb4f4u: goto label_2fb4f4;
        case 0x2fb4f8u: goto label_2fb4f8;
        case 0x2fb4fcu: goto label_2fb4fc;
        case 0x2fb500u: goto label_2fb500;
        case 0x2fb504u: goto label_2fb504;
        case 0x2fb508u: goto label_2fb508;
        case 0x2fb50cu: goto label_2fb50c;
        case 0x2fb510u: goto label_2fb510;
        case 0x2fb514u: goto label_2fb514;
        case 0x2fb518u: goto label_2fb518;
        case 0x2fb51cu: goto label_2fb51c;
        case 0x2fb520u: goto label_2fb520;
        case 0x2fb524u: goto label_2fb524;
        case 0x2fb528u: goto label_2fb528;
        case 0x2fb52cu: goto label_2fb52c;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb534u: goto label_2fb534;
        case 0x2fb538u: goto label_2fb538;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb540u: goto label_2fb540;
        case 0x2fb544u: goto label_2fb544;
        default: break;
    }

    ctx->pc = 0x2fade0u;

label_2fade0:
    // 0x2fade0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2fade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2fade4:
    // 0x2fade4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2fade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_2fade8:
    // 0x2fade8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2fade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_2fadec:
    // 0x2fadec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fadecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fadf0:
    // 0x2fadf0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2fadf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_2fadf4:
    // 0x2fadf4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2fadf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_2fadf8:
    // 0x2fadf8: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2fadf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_2fadfc:
    // 0x2fadfc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2fadfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_2fae00:
    // 0x2fae00: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2fae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
label_2fae04:
    // 0x2fae04: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x2fae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
label_2fae08:
    // 0x2fae08: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x2fae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_2fae0c:
    // 0x2fae0c: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x2fae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
label_2fae10:
    // 0x2fae10: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2fae10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2fae14:
    // 0x2fae14: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2fae14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_2fae18:
    // 0x2fae18: 0x8e431364  lw          $v1, 0x1364($s2)
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4964)));
label_2fae1c:
    // 0x2fae1c: 0x92421371  lbu         $v0, 0x1371($s2)
    ctx->pc = 0x2fae1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4977)));
label_2fae20:
    // 0x2fae20: 0xae4311e8  sw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fae20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 3));
label_2fae24:
    // 0x2fae24: 0xc0899bc  jal         func_2266F0
label_2fae28:
    if (ctx->pc == 0x2FAE28u) {
        ctx->pc = 0x2FAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE24u;
        // 0x2fae28: 0xae4211fc  sw          $v0, 0x11FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE2Cu;
        goto label_2fae2c;
    }
    ctx->pc = 0x2FAE24u;
    SET_GPR_U32(ctx, 31, 0x2FAE2Cu);
    ctx->pc = 0x2FAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE24u;
    // 0x2fae28: 0xae4211fc  sw          $v0, 0x11FC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4604), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FAE24u, 0x2FAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE2Cu;
label_2fae2c:
    // 0x2fae2c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2fae2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fae30:
    // 0x2fae30: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2fae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fae34:
    // 0x2fae34: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2fae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2fae38:
    // 0x2fae38: 0x90641430  lbu         $a0, 0x1430($v1)
    ctx->pc = 0x2fae38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5168)));
label_2fae3c:
    // 0x2fae3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2fae40:
    if (ctx->pc == 0x2FAE40u) {
        ctx->pc = 0x2FAE44u;
        goto label_2fae44;
    }
    ctx->pc = 0x2FAE3Cu;
    {
        const bool branch_taken_0x2fae3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fae3c) {
            ctx->pc = 0x2FAE54u;
            goto label_2fae54;
        }
    }
    ctx->pc = 0x2FAE44u;
label_2fae44:
    // 0x2fae44: 0xc0be5e2  jal         func_2F9788
label_2fae48:
    if (ctx->pc == 0x2FAE48u) {
        ctx->pc = 0x2FAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE44u;
        // 0x2fae48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE4Cu;
        goto label_2fae4c;
    }
    ctx->pc = 0x2FAE44u;
    SET_GPR_U32(ctx, 31, 0x2FAE4Cu);
    ctx->pc = 0x2FAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE44u;
    // 0x2fae48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FAE44u, 0x2FAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE4Cu;
label_2fae4c:
    // 0x2fae4c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2fae4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2fae50:
    // 0x2fae50: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2fae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2fae54:
    // 0x2fae54: 0xc09876c  jal         func_261DB0
label_2fae58:
    if (ctx->pc == 0x2FAE58u) {
        ctx->pc = 0x2FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE54u;
        // 0x2fae58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE5Cu;
        goto label_2fae5c;
    }
    ctx->pc = 0x2FAE54u;
    SET_GPR_U32(ctx, 31, 0x2FAE5Cu);
    ctx->pc = 0x2FAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE54u;
    // 0x2fae58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2FAE54u, 0x2FAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE5Cu;
label_2fae5c:
    // 0x2fae5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fae5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fae60:
    // 0x2fae60: 0xc0be5e2  jal         func_2F9788
label_2fae64:
    if (ctx->pc == 0x2FAE64u) {
        ctx->pc = 0x2FAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE60u;
        // 0x2fae64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE68u;
        goto label_2fae68;
    }
    ctx->pc = 0x2FAE60u;
    SET_GPR_U32(ctx, 31, 0x2FAE68u);
    ctx->pc = 0x2FAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE60u;
    // 0x2fae64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FAE60u, 0x2FAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE68u;
label_2fae68:
    // 0x2fae68: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x2fae68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fae6c:
    // 0x2fae6c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2fae70:
    // 0x2fae70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fae74:
    if (ctx->pc == 0x2FAE74u) {
        ctx->pc = 0x2FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE70u;
        // 0x2fae74: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE78u;
        goto label_2fae78;
    }
    ctx->pc = 0x2FAE70u;
    {
        const bool branch_taken_0x2fae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE70u;
        // 0x2fae74: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae70) {
            ctx->pc = 0x2FAE80u;
            goto label_2fae80;
        }
    }
    ctx->pc = 0x2FAE78u;
label_2fae78:
    // 0x2fae78: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x2fae78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2fae7c:
    // 0x2fae7c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2fae7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fae80:
    // 0x2fae80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fae80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2fae84:
    // 0x2fae84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fae84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fae88:
    // 0x2fae88: 0x8c45cd60  lw          $a1, -0x32A0($v0)
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954336)));
label_2fae8c:
    // 0x2fae8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fae90:
    // 0x2fae90: 0xc0d9cc2  jal         func_367308
label_2fae94:
    if (ctx->pc == 0x2FAE94u) {
        ctx->pc = 0x2FAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE90u;
        // 0x2fae94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAE98u;
        goto label_2fae98;
    }
    ctx->pc = 0x2FAE90u;
    SET_GPR_U32(ctx, 31, 0x2FAE98u);
    ctx->pc = 0x2FAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE90u;
    // 0x2fae94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2FAE90u, 0x2FAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE98u;
label_2fae98:
    // 0x2fae98: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x2fae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fae9c:
    // 0x2fae9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2faea0:
    // 0x2faea0: 0x8c50bd30  lw          $s0, -0x42D0($v0)
    ctx->pc = 0x2faea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2faea4:
    // 0x2faea4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2faea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2faea8:
    // 0x2faea8: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2faea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faeac:
    // 0x2faeac: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x2faeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_2faeb0:
    // 0x2faeb0: 0x8e451380  lw          $a1, 0x1380($s2)
    ctx->pc = 0x2faeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4992)));
label_2faeb4:
    // 0x2faeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2faeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2faeb8:
    // 0x2faeb8: 0x8c730150  lw          $s3, 0x150($v1)
    ctx->pc = 0x2faeb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2faebc:
    // 0x2faebc: 0xc0b5bc0  jal         func_2D6F00
label_2faec0:
    if (ctx->pc == 0x2FAEC0u) {
        ctx->pc = 0x2FAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEBCu;
        // 0x2faec0: 0x8c540150  lw          $s4, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEC4u;
        goto label_2faec4;
    }
    ctx->pc = 0x2FAEBCu;
    SET_GPR_U32(ctx, 31, 0x2FAEC4u);
    ctx->pc = 0x2FAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEBCu;
    // 0x2faec0: 0x8c540150  lw          $s4, 0x150($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2FAEBCu, 0x2FAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEC4u;
label_2faec4:
    // 0x2faec4: 0x8e451380  lw          $a1, 0x1380($s2)
    ctx->pc = 0x2faec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4992)));
label_2faec8:
    // 0x2faec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2faec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2faecc:
    // 0x2faecc: 0xc0b5bc0  jal         func_2D6F00
label_2faed0:
    if (ctx->pc == 0x2FAED0u) {
        ctx->pc = 0x2FAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAECCu;
        // 0x2faed0: 0x8e4611e8  lw          $a2, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAED4u;
        goto label_2faed4;
    }
    ctx->pc = 0x2FAECCu;
    SET_GPR_U32(ctx, 31, 0x2FAED4u);
    ctx->pc = 0x2FAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAECCu;
    // 0x2faed0: 0x8e4611e8  lw          $a2, 0x11E8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2FAECCu, 0x2FAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAED4u;
label_2faed4:
    // 0x2faed4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2faed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faed8:
    // 0x2faed8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2faed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2faedc:
    // 0x2faedc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2faedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2faee0:
    // 0x2faee0: 0xc069bc8  jal         func_1A6F20
label_2faee4:
    if (ctx->pc == 0x2FAEE4u) {
        ctx->pc = 0x2FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEE0u;
        // 0x2faee4: 0x8ed700b8  lw          $s7, 0xB8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEE8u;
        goto label_2faee8;
    }
    ctx->pc = 0x2FAEE0u;
    SET_GPR_U32(ctx, 31, 0x2FAEE8u);
    ctx->pc = 0x2FAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEE0u;
    // 0x2faee4: 0x8ed700b8  lw          $s7, 0xB8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x2FAEE0u, 0x2FAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEE8u;
label_2faee8:
    // 0x2faee8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2faee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faeec:
    // 0x2faeec: 0xc06a05e  jal         func_1A8178
label_2faef0:
    if (ctx->pc == 0x2FAEF0u) {
        ctx->pc = 0x2FAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEECu;
        // 0x2faef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAEF4u;
        goto label_2faef4;
    }
    ctx->pc = 0x2FAEECu;
    SET_GPR_U32(ctx, 31, 0x2FAEF4u);
    ctx->pc = 0x2FAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEECu;
    // 0x2faef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FAEECu, 0x2FAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEF4u;
label_2faef4:
    // 0x2faef4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2faef4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2faef8:
    // 0x2faef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2faef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2faefc:
    // 0x2faefc: 0xc0be5e2  jal         func_2F9788
label_2faf00:
    if (ctx->pc == 0x2FAF00u) {
        ctx->pc = 0x2FAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEFCu;
        // 0x2faf00: 0x26109b28  addiu       $s0, $s0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF04u;
        goto label_2faf04;
    }
    ctx->pc = 0x2FAEFCu;
    SET_GPR_U32(ctx, 31, 0x2FAF04u);
    ctx->pc = 0x2FAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEFCu;
    // 0x2faf00: 0x26109b28  addiu       $s0, $s0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FAEFCu, 0x2FAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF04u;
label_2faf04:
    // 0x2faf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2faf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2faf08:
    // 0x2faf08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2faf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2faf0c:
    // 0x2faf0c: 0xc07f8de  jal         func_1FE378
label_2faf10:
    if (ctx->pc == 0x2FAF10u) {
        ctx->pc = 0x2FAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF0Cu;
        // 0x2faf10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF14u;
        goto label_2faf14;
    }
    ctx->pc = 0x2FAF0Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF14u);
    ctx->pc = 0x2FAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF0Cu;
    // 0x2faf10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE378u, 0x2FAF0Cu, 0x2FAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF14u;
label_2faf14:
    // 0x2faf14: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2faf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faf18:
    // 0x2faf18: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2faf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2faf1c:
    // 0x2faf1c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2faf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2faf20:
    // 0x2faf20: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
label_2faf24:
    if (ctx->pc == 0x2FAF24u) {
        ctx->pc = 0x2FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF20u;
        // 0x2faf24: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF28u;
        goto label_2faf28;
    }
    ctx->pc = 0x2FAF20u;
    {
        const bool branch_taken_0x2faf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF20u;
        // 0x2faf24: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf20) {
            ctx->pc = 0x2FAF64u;
            goto label_2faf64;
        }
    }
    ctx->pc = 0x2FAF28u;
label_2faf28:
    // 0x2faf28: 0xc0d737c  jal         func_35CDF0
label_2faf2c:
    if (ctx->pc == 0x2FAF2Cu) {
        ctx->pc = 0x2FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF28u;
        // 0x2faf2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF30u;
        goto label_2faf30;
    }
    ctx->pc = 0x2FAF28u;
    SET_GPR_U32(ctx, 31, 0x2FAF30u);
    ctx->pc = 0x2FAF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF28u;
    // 0x2faf2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2FAF28u, 0x2FAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF30u;
label_2faf30:
    // 0x2faf30: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2faf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faf34:
    // 0x2faf34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2faf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2faf38:
    // 0x2faf38: 0xc069e0e  jal         func_1A7838
label_2faf3c:
    if (ctx->pc == 0x2FAF3Cu) {
        ctx->pc = 0x2FAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF38u;
        // 0x2faf3c: 0x8c850150  lw          $a1, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF40u;
        goto label_2faf40;
    }
    ctx->pc = 0x2FAF38u;
    SET_GPR_U32(ctx, 31, 0x2FAF40u);
    ctx->pc = 0x2FAF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF38u;
    // 0x2faf3c: 0x8c850150  lw          $a1, 0x150($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7838u, 0x2FAF38u, 0x2FAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF40u;
label_2faf40:
    // 0x2faf40: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2faf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2faf44:
    // 0x2faf44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2faf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2faf48:
    // 0x2faf48: 0xc069712  jal         func_1A5C48
label_2faf4c:
    if (ctx->pc == 0x2FAF4Cu) {
        ctx->pc = 0x2FAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF48u;
        // 0x2faf4c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF50u;
        goto label_2faf50;
    }
    ctx->pc = 0x2FAF48u;
    SET_GPR_U32(ctx, 31, 0x2FAF50u);
    ctx->pc = 0x2FAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF48u;
    // 0x2faf4c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FAF48u, 0x2FAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF50u;
label_2faf50:
    // 0x2faf50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2faf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2faf54:
    // 0x2faf54: 0xc0d7412  jal         func_35D048
label_2faf58:
    if (ctx->pc == 0x2FAF58u) {
        ctx->pc = 0x2FAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF54u;
        // 0x2faf58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF5Cu;
        goto label_2faf5c;
    }
    ctx->pc = 0x2FAF54u;
    SET_GPR_U32(ctx, 31, 0x2FAF5Cu);
    ctx->pc = 0x2FAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF54u;
    // 0x2faf58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2FAF54u, 0x2FAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF5Cu;
label_2faf5c:
    // 0x2faf5c: 0x1000016d  b           . + 4 + (0x16D << 2)
label_2faf60:
    if (ctx->pc == 0x2FAF60u) {
        ctx->pc = 0x2FAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF5Cu;
        // 0x2faf60: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF64u;
        goto label_2faf64;
    }
    ctx->pc = 0x2FAF5Cu;
    {
        const bool branch_taken_0x2faf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF5Cu;
        // 0x2faf60: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf5c) {
            ctx->pc = 0x2FB514u;
            goto label_2fb514;
        }
    }
    ctx->pc = 0x2FAF64u;
label_2faf64:
    // 0x2faf64: 0x8e4511e8  lw          $a1, 0x11E8($s2)
    ctx->pc = 0x2faf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2faf68:
    // 0x2faf68: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2faf68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2faf6c:
    // 0x2faf6c: 0x2f51821  addu        $v1, $s7, $s5
    ctx->pc = 0x2faf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_2faf70:
    // 0x2faf70: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2faf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2faf74:
    // 0x2faf74: 0x8ca40334  lw          $a0, 0x334($a1)
    ctx->pc = 0x2faf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_2faf78:
    // 0x2faf78: 0xc44c046c  lwc1        $f12, 0x46C($v0)
    ctx->pc = 0x2faf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2faf7c:
    // 0x2faf7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2faf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2faf80:
    // 0x2faf80: 0x9067047c  lbu         $a3, 0x47C($v1)
    ctx->pc = 0x2faf80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1148)));
label_2faf84:
    // 0x2faf84: 0xc069900  jal         func_1A6400
label_2faf88:
    if (ctx->pc == 0x2FAF88u) {
        ctx->pc = 0x2FAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF84u;
        // 0x2faf88: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF8Cu;
        goto label_2faf8c;
    }
    ctx->pc = 0x2FAF84u;
    SET_GPR_U32(ctx, 31, 0x2FAF8Cu);
    ctx->pc = 0x2FAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF84u;
    // 0x2faf88: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6400u, 0x2FAF84u, 0x2FAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF8Cu;
label_2faf8c:
    // 0x2faf8c: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2faf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2faf90:
    // 0x2faf90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2faf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2faf94:
    // 0x2faf94: 0xc06a05e  jal         func_1A8178
label_2faf98:
    if (ctx->pc == 0x2FAF98u) {
        ctx->pc = 0x2FAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF94u;
        // 0x2faf98: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAF9Cu;
        goto label_2faf9c;
    }
    ctx->pc = 0x2FAF94u;
    SET_GPR_U32(ctx, 31, 0x2FAF9Cu);
    ctx->pc = 0x2FAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF94u;
    // 0x2faf98: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FAF94u, 0x2FAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF9Cu;
label_2faf9c:
    // 0x2faf9c: 0x8e4511e8  lw          $a1, 0x11E8($s2)
    ctx->pc = 0x2faf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fafa0:
    // 0x2fafa0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2fafa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2fafa4:
    // 0x2fafa4: 0x8ca20334  lw          $v0, 0x334($a1)
    ctx->pc = 0x2fafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_2fafa8:
    // 0x2fafa8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2fafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2fafac:
    // 0x2fafac: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
label_2fafb0:
    if (ctx->pc == 0x2FAFB0u) {
        ctx->pc = 0x2FAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFACu;
        // 0x2fafb0: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFB4u;
        goto label_2fafb4;
    }
    ctx->pc = 0x2FAFACu;
    {
        const bool branch_taken_0x2fafac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFACu;
        // 0x2fafb0: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafac) {
            ctx->pc = 0x2FAFE0u;
            goto label_2fafe0;
        }
    }
    ctx->pc = 0x2FAFB4u;
label_2fafb4:
    // 0x2fafb4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fafb8:
    // 0x2fafb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fafb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fafbc:
    // 0x2fafbc: 0xc069712  jal         func_1A5C48
label_2fafc0:
    if (ctx->pc == 0x2FAFC0u) {
        ctx->pc = 0x2FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFBCu;
        // 0x2fafc0: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFC4u;
        goto label_2fafc4;
    }
    ctx->pc = 0x2FAFBCu;
    SET_GPR_U32(ctx, 31, 0x2FAFC4u);
    ctx->pc = 0x2FAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFBCu;
    // 0x2fafc0: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FAFBCu, 0x2FAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFC4u;
label_2fafc4:
    // 0x2fafc4: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2fafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fafc8:
    // 0x2fafc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fafc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fafcc:
    // 0x2fafcc: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x2fafccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_2fafd0:
    // 0x2fafd0: 0xc069712  jal         func_1A5C48
label_2fafd4:
    if (ctx->pc == 0x2FAFD4u) {
        ctx->pc = 0x2FAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFD0u;
        // 0x2fafd4: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFD8u;
        goto label_2fafd8;
    }
    ctx->pc = 0x2FAFD0u;
    SET_GPR_U32(ctx, 31, 0x2FAFD8u);
    ctx->pc = 0x2FAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFD0u;
    // 0x2fafd4: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FAFD0u, 0x2FAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFD8u;
label_2fafd8:
    // 0x2fafd8: 0x1000014e  b           . + 4 + (0x14E << 2)
label_2fafdc:
    if (ctx->pc == 0x2FAFDCu) {
        ctx->pc = 0x2FAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFD8u;
        // 0x2fafdc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFE0u;
        goto label_2fafe0;
    }
    ctx->pc = 0x2FAFD8u;
    {
        const bool branch_taken_0x2fafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFD8u;
        // 0x2fafdc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafd8) {
            ctx->pc = 0x2FB514u;
            goto label_2fb514;
        }
    }
    ctx->pc = 0x2FAFE0u;
label_2fafe0:
    // 0x2fafe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fafe4:
    if (ctx->pc == 0x2FAFE4u) {
        ctx->pc = 0x2FAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE0u;
        // 0x2fafe4: 0xc4ac00d0  lwc1        $f12, 0xD0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAFE8u;
        goto label_2fafe8;
    }
    ctx->pc = 0x2FAFE0u;
    {
        const bool branch_taken_0x2fafe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE0u;
        // 0x2fafe4: 0xc4ac00d0  lwc1        $f12, 0xD0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafe0) {
            ctx->pc = 0x2FAFF4u;
            goto label_2faff4;
        }
    }
    ctx->pc = 0x2FAFE8u;
label_2fafe8:
    // 0x2fafe8: 0x8ec200b8  lw          $v0, 0xB8($s6)
    ctx->pc = 0x2fafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
label_2fafec:
    // 0x2fafec: 0xc4400584  lwc1        $f0, 0x584($v0)
    ctx->pc = 0x2fafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2faff0:
    // 0x2faff0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2faff0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2faff4:
    // 0x2faff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2faff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2faff8:
    // 0x2faff8: 0x0  nop
    ctx->pc = 0x2faff8u;
    // NOP
label_2faffc:
    // 0x2faffc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2faffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fb000:
    // 0x2fb000: 0x0  nop
    ctx->pc = 0x2fb000u;
    // NOP
label_2fb004:
    // 0x2fb004: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2fb008:
    if (ctx->pc == 0x2FB008u) {
        ctx->pc = 0x2FB00Cu;
        goto label_2fb00c;
    }
    ctx->pc = 0x2FB004u;
    {
        const bool branch_taken_0x2fb004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fb004) {
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FB00Cu;
label_2fb00c:
    // 0x2fb00c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fb010:
    if (ctx->pc == 0x2FB010u) {
        ctx->pc = 0x2FB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB00Cu;
        // 0x2fb010: 0xacb20394  sw          $s2, 0x394($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB014u;
        goto label_2fb014;
    }
    ctx->pc = 0x2FB00Cu;
    {
        const bool branch_taken_0x2fb00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB00Cu;
        // 0x2fb010: 0xacb20394  sw          $s2, 0x394($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb00c) {
            ctx->pc = 0x2FB01Cu;
            goto label_2fb01c;
        }
    }
    ctx->pc = 0x2FB014u;
label_2fb014:
    // 0x2fb014: 0xc083976  jal         func_20E5D8
label_2fb018:
    if (ctx->pc == 0x2FB018u) {
        ctx->pc = 0x2FB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB014u;
        // 0x2fb018: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB01Cu;
        goto label_2fb01c;
    }
    ctx->pc = 0x2FB014u;
    SET_GPR_U32(ctx, 31, 0x2FB01Cu);
    ctx->pc = 0x2FB018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB014u;
    // 0x2fb018: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2FB014u, 0x2FB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB01Cu;
label_2fb01c:
    // 0x2fb01c: 0xc0bd62c  jal         func_2F58B0
label_2fb020:
    if (ctx->pc == 0x2FB020u) {
        ctx->pc = 0x2FB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB01Cu;
        // 0x2fb020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB024u;
        goto label_2fb024;
    }
    ctx->pc = 0x2FB01Cu;
    SET_GPR_U32(ctx, 31, 0x2FB024u);
    ctx->pc = 0x2FB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB01Cu;
    // 0x2fb020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2FB01Cu, 0x2FB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB024u;
label_2fb024:
    // 0x2fb024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fb024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb028:
    // 0x2fb028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb02c:
    // 0x2fb02c: 0xc0bf28c  jal         func_2FCA30
label_2fb030:
    if (ctx->pc == 0x2FB030u) {
        ctx->pc = 0x2FB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB02Cu;
        // 0x2fb030: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB034u;
        goto label_2fb034;
    }
    ctx->pc = 0x2FB02Cu;
    SET_GPR_U32(ctx, 31, 0x2FB034u);
    ctx->pc = 0x2FB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB02Cu;
    // 0x2fb030: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCA30u, 0x2FB02Cu, 0x2FB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB034u;
label_2fb034:
    // 0x2fb034: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_2fb038:
    if (ctx->pc == 0x2FB038u) {
        ctx->pc = 0x2FB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB034u;
        // 0x2fb038: 0x8e4211e8  lw          $v0, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB03Cu;
        goto label_2fb03c;
    }
    ctx->pc = 0x2FB034u;
    {
        const bool branch_taken_0x2fb034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB034u;
        // 0x2fb038: 0x8e4211e8  lw          $v0, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb034) {
            ctx->pc = 0x2FB238u;
            goto label_2fb238;
        }
    }
    ctx->pc = 0x2FB03Cu;
label_2fb03c:
    // 0x2fb03c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fb040:
    // 0x2fb040: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2fb044:
    // 0x2fb044: 0xc0b1488  jal         func_2C5220
label_2fb048:
    if (ctx->pc == 0x2FB048u) {
        ctx->pc = 0x2FB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB044u;
        // 0x2fb048: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB04Cu;
        goto label_2fb04c;
    }
    ctx->pc = 0x2FB044u;
    SET_GPR_U32(ctx, 31, 0x2FB04Cu);
    ctx->pc = 0x2FB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB044u;
    // 0x2fb048: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FB044u, 0x2FB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB04Cu;
label_2fb04c:
    // 0x2fb04c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fb050:
    // 0x2fb050: 0xc0f6a96  jal         func_3DAA58
label_2fb054:
    if (ctx->pc == 0x2FB054u) {
        ctx->pc = 0x2FB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB050u;
        // 0x2fb054: 0x26740040  addiu       $s4, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB058u;
        goto label_2fb058;
    }
    ctx->pc = 0x2FB050u;
    SET_GPR_U32(ctx, 31, 0x2FB058u);
    ctx->pc = 0x2FB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB050u;
    // 0x2fb054: 0x26740040  addiu       $s4, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FB050u, 0x2FB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB058u;
label_2fb058:
    // 0x2fb058: 0x8e4211fc  lw          $v0, 0x11FC($s2)
    ctx->pc = 0x2fb058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4604)));
label_2fb05c:
    // 0x2fb05c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_2fb060:
    if (ctx->pc == 0x2FB060u) {
        ctx->pc = 0x2FB064u;
        goto label_2fb064;
    }
    ctx->pc = 0x2FB05Cu;
    {
        const bool branch_taken_0x2fb05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb05c) {
            ctx->pc = 0x2FB180u;
            goto label_2fb180;
        }
    }
    ctx->pc = 0x2FB064u;
label_2fb064:
    // 0x2fb064: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2fb068:
    // 0x2fb068: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2fb06c:
    // 0x2fb06c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb070:
    // 0x2fb070: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fb070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2fb074:
    // 0x2fb074: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fb074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb078:
    // 0x2fb078: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fb078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb07c:
    // 0x2fb07c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fb07cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb080:
    // 0x2fb080: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2fb080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb084:
    // 0x2fb084: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2fb084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fb088:
    // 0x2fb088: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2fb088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fb08c:
    // 0x2fb08c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2fb08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fb090:
    // 0x2fb090: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2fb090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fb094:
    // 0x2fb094: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2fb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb098:
    // 0x2fb098: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2fb098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb09c:
    // 0x2fb09c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2fb09cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2fb0a0:
    // 0x2fb0a0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2fb0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2fb0a4:
    // 0x2fb0a4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fb0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2fb0a8:
    // 0x2fb0a8: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2fb0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2fb0ac:
    // 0x2fb0ac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fb0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb0b0:
    // 0x2fb0b0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2fb0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb0b4:
    // 0x2fb0b4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2fb0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2fb0b8:
    // 0x2fb0b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb0b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb0bc:
    // 0x2fb0bc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fb0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fb0c0:
    // 0x2fb0c0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fb0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fb0c4:
    // 0x2fb0c4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fb0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fb0c8:
    // 0x2fb0c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fb0c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2fb0cc:
    // 0x2fb0cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fb0ccu;
    // VWAITQ (Q already resolved in this runtime)
label_2fb0d0:
    // 0x2fb0d0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fb0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb0d4:
    // 0x2fb0d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2fb0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb0d8:
    // 0x2fb0d8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2fb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fb0dc:
    // 0x2fb0dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb0dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb0e0:
    // 0x2fb0e0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fb0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb0e4:
    // 0x2fb0e4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2fb0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb0e8:
    // 0x2fb0e8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2fb0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fb0ec:
    // 0x2fb0ec: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2fb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb0f0:
    // 0x2fb0f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fb0f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2fb0f4:
    // 0x2fb0f4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2fb0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_2fb0f8:
    // 0x2fb0f8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2fb0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2fb0fc:
    // 0x2fb0fc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_2fb100:
    // 0x2fb100: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fb100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2fb104:
    // 0x2fb104: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fb104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb108:
    // 0x2fb108: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fb108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb10c:
    // 0x2fb10c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2fb110:
    // 0x2fb110: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2fb110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fb114:
    // 0x2fb114: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2fb114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2fb118:
    // 0x2fb118: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb11c:
    // 0x2fb11c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fb11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb120:
    // 0x2fb120: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x2fb120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb124:
    // 0x2fb124: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fb124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2fb128:
    // 0x2fb128: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fb128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb12c:
    // 0x2fb12c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fb12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2fb130:
    // 0x2fb130: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2fb130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb134:
    // 0x2fb134: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fb134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2fb138:
    // 0x2fb138: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2fb138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb13c:
    // 0x2fb13c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2fb13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2fb140:
    // 0x2fb140: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fb140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fb144:
    // 0x2fb144: 0xfa610040  sqc2        $vf1, 0x40($s3)
    ctx->pc = 0x2fb144u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb148:
    // 0x2fb148: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fb148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb14c:
    // 0x2fb14c: 0xfa610050  sqc2        $vf1, 0x50($s3)
    ctx->pc = 0x2fb14cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb150:
    // 0x2fb150: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2fb150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2fb154:
    // 0x2fb154: 0xfa610060  sqc2        $vf1, 0x60($s3)
    ctx->pc = 0x2fb154u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb158:
    // 0x2fb158: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fb158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fb15c:
    // 0x2fb15c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb15cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb160:
    // 0x2fb160: 0xfa610070  sqc2        $vf1, 0x70($s3)
    ctx->pc = 0x2fb160u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb164:
    // 0x2fb164: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fb164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb168:
    // 0x2fb168: 0xfa610070  sqc2        $vf1, 0x70($s3)
    ctx->pc = 0x2fb168u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb16c:
    // 0x2fb16c: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x2fb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb170:
    // 0x2fb170: 0xc08bdc6  jal         func_22F718
label_2fb174:
    if (ctx->pc == 0x2FB174u) {
        ctx->pc = 0x2FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB170u;
        // 0x2fb174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB178u;
        goto label_2fb178;
    }
    ctx->pc = 0x2FB170u;
    SET_GPR_U32(ctx, 31, 0x2FB178u);
    ctx->pc = 0x2FB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB170u;
    // 0x2fb174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x2FB170u, 0x2FB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB178u;
label_2fb178:
    // 0x2fb178: 0x1000000e  b           . + 4 + (0xE << 2)
label_2fb17c:
    if (ctx->pc == 0x2FB17Cu) {
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB178u;
        // 0x2fb17c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB180u;
        goto label_2fb180;
    }
    ctx->pc = 0x2FB178u;
    {
        const bool branch_taken_0x2fb178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB178u;
        // 0x2fb17c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb178) {
            ctx->pc = 0x2FB1B4u;
            goto label_2fb1b4;
        }
    }
    ctx->pc = 0x2FB180u;
label_2fb180:
    // 0x2fb180: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fb180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2fb184:
    // 0x2fb184: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fb184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb188:
    // 0x2fb188: 0x26620050  addiu       $v0, $s3, 0x50
    ctx->pc = 0x2fb188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_2fb18c:
    // 0x2fb18c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb18cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb190:
    // 0x2fb190: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fb190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb194:
    // 0x2fb194: 0x26630060  addiu       $v1, $s3, 0x60
    ctx->pc = 0x2fb194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_2fb198:
    // 0x2fb198: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fb198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb19c:
    // 0x2fb19c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fb19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb1a0:
    // 0x2fb1a0: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x2fb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2fb1a4:
    // 0x2fb1a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb1a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb1a8:
    // 0x2fb1a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fb1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb1ac:
    // 0x2fb1ac: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2fb1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fb1b0:
    // 0x2fb1b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fb1b4:
    // 0x2fb1b4: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2fb1b8:
    // 0x2fb1b8: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x2fb1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fb1bc:
    // 0x2fb1bc: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2fb1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fb1c0:
    // 0x2fb1c0: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x2fb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2fb1c4:
    // 0x2fb1c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2fb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb1c8:
    // 0x2fb1c8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2fb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fb1cc:
    // 0x2fb1cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fb1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb1d0:
    // 0x2fb1d0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2fb1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2fb1d4:
    // 0x2fb1d4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2fb1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2fb1d8:
    // 0x2fb1d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fb1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2fb1dc:
    // 0x2fb1dc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2fb1dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2fb1e0:
    // 0x2fb1e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fb1e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb1e4:
    // 0x2fb1e4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fb1e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb1e8:
    // 0x2fb1e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fb1e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb1ec:
    // 0x2fb1ec: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2fb1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb1f0:
    // 0x2fb1f0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2fb1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb1f4:
    // 0x2fb1f4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2fb1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb1f8:
    // 0x2fb1f8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2fb1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fb1fc:
    // 0x2fb1fc: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fb1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fb200:
    // 0x2fb200: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fb200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2fb204:
    // 0x2fb204: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fb204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2fb208:
    // 0x2fb208: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2fb208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2fb20c:
    // 0x2fb20c: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2fb20cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2fb210:
    // 0x2fb210: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fb210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb214:
    // 0x2fb214: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fb214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb218:
    // 0x2fb218: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fb21c:
    // 0x2fb21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb220:
    // 0x2fb220: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x2fb220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fb224:
    // 0x2fb224: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fb224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb228:
    // 0x2fb228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb22c:
    // 0x2fb22c: 0xc08e23a  jal         func_2388E8
label_2fb230:
    if (ctx->pc == 0x2FB230u) {
        ctx->pc = 0x2FB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB22Cu;
        // 0x2fb230: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB234u;
        goto label_2fb234;
    }
    ctx->pc = 0x2FB22Cu;
    SET_GPR_U32(ctx, 31, 0x2FB234u);
    ctx->pc = 0x2FB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB22Cu;
    // 0x2fb230: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2FB22Cu, 0x2FB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB234u;
label_2fb234:
    // 0x2fb234: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2fb234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb238:
    // 0x2fb238: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb23c:
    // 0x2fb23c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fb23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2fb240:
    // 0x2fb240: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2fb240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_2fb244:
    // 0x2fb244: 0xac450430  sw          $a1, 0x430($v0)
    ctx->pc = 0x2fb244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 5));
label_2fb248:
    // 0x2fb248: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x2fb248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb24c:
    // 0x2fb24c: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x2fb24cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_2fb250:
    // 0x2fb250: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fb250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2fb254:
    // 0x2fb254: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x2fb254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_2fb258:
    // 0x2fb258: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb25c:
    // 0x2fb25c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2fb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2fb260:
    // 0x2fb260: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x2fb260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_2fb264:
    // 0x2fb264: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb268:
    // 0x2fb268: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2fb268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2fb26c:
    // 0x2fb26c: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2fb26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fb270:
    // 0x2fb270: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2fb270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2fb274:
    // 0x2fb274: 0x40f809  jalr        $v0
label_2fb278:
    if (ctx->pc == 0x2FB278u) {
        ctx->pc = 0x2FB27Cu;
        goto label_2fb27c;
    }
    ctx->pc = 0x2FB274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB27Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB274u, 0x2FB27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB27Cu;
label_2fb27c:
    // 0x2fb27c: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb280:
    // 0x2fb280: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2fb280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2fb284:
    // 0x2fb284: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2fb284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fb288:
    // 0x2fb288: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2fb288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2fb28c:
    // 0x2fb28c: 0x40f809  jalr        $v0
label_2fb290:
    if (ctx->pc == 0x2FB290u) {
        ctx->pc = 0x2FB294u;
        goto label_2fb294;
    }
    ctx->pc = 0x2FB28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB28Cu, 0x2FB294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB294u;
label_2fb294:
    // 0x2fb294: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb298:
    // 0x2fb298: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2fb298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2fb29c:
    // 0x2fb29c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fb29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb2a0:
    // 0x2fb2a0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2fb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2fb2a4:
    // 0x2fb2a4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2fb2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2fb2a8:
    // 0x2fb2a8: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2fb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_2fb2ac:
    // 0x2fb2ac: 0xc08fed2  jal         func_23FB48
label_2fb2b0:
    if (ctx->pc == 0x2FB2B0u) {
        ctx->pc = 0x2FB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2ACu;
        // 0x2fb2b0: 0x8e4411e8  lw          $a0, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2B4u;
        goto label_2fb2b4;
    }
    ctx->pc = 0x2FB2ACu;
    SET_GPR_U32(ctx, 31, 0x2FB2B4u);
    ctx->pc = 0x2FB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2ACu;
    // 0x2fb2b0: 0x8e4411e8  lw          $a0, 0x11E8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FB2ACu, 0x2FB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B4u;
label_2fb2b4:
    // 0x2fb2b4: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb2b8:
    // 0x2fb2b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fb2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fb2bc:
    // 0x2fb2bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2fb2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fb2c0:
    // 0x2fb2c0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2fb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2fb2c4:
    // 0x2fb2c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2fb2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2fb2c8:
    // 0x2fb2c8: 0xc098fae  jal         func_263EB8
label_2fb2cc:
    if (ctx->pc == 0x2FB2CCu) {
        ctx->pc = 0x2FB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2C8u;
        // 0x2fb2cc: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2D0u;
        goto label_2fb2d0;
    }
    ctx->pc = 0x2FB2C8u;
    SET_GPR_U32(ctx, 31, 0x2FB2D0u);
    ctx->pc = 0x2FB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2C8u;
    // 0x2fb2cc: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x2FB2C8u, 0x2FB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2D0u;
label_2fb2d0:
    // 0x2fb2d0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2fb2d4:
    if (ctx->pc == 0x2FB2D4u) {
        ctx->pc = 0x2FB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2D0u;
        // 0x2fb2d4: 0x8e4311e8  lw          $v1, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2D8u;
        goto label_2fb2d8;
    }
    ctx->pc = 0x2FB2D0u;
    {
        const bool branch_taken_0x2fb2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb2d0) {
            ctx->pc = 0x2FB2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB2D0u;
            // 0x2fb2d4: 0x8e4311e8  lw          $v1, 0x11E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB310u;
            goto label_2fb310;
        }
    }
    ctx->pc = 0x2FB2D8u;
label_2fb2d8:
    // 0x2fb2d8: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2fb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2fb2dc:
    // 0x2fb2dc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2fb2e0:
    if (ctx->pc == 0x2FB2E0u) {
        ctx->pc = 0x2FB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2DCu;
        // 0x2fb2e0: 0x8e4311e8  lw          $v1, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2E4u;
        goto label_2fb2e4;
    }
    ctx->pc = 0x2FB2DCu;
    {
        const bool branch_taken_0x2fb2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb2dc) {
            ctx->pc = 0x2FB2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB2DCu;
            // 0x2fb2e0: 0x8e4311e8  lw          $v1, 0x11E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB310u;
            goto label_2fb310;
        }
    }
    ctx->pc = 0x2FB2E4u;
label_2fb2e4:
    // 0x2fb2e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fb2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fb2e8:
    // 0x2fb2e8: 0xc098fc6  jal         func_263F18
label_2fb2ec:
    if (ctx->pc == 0x2FB2ECu) {
        ctx->pc = 0x2FB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2E8u;
        // 0x2fb2ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB2F0u;
        goto label_2fb2f0;
    }
    ctx->pc = 0x2FB2E8u;
    SET_GPR_U32(ctx, 31, 0x2FB2F0u);
    ctx->pc = 0x2FB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2E8u;
    // 0x2fb2ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263F18u, 0x2FB2E8u, 0x2FB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2F0u;
label_2fb2f0:
    // 0x2fb2f0: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x2fb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_2fb2f4:
    // 0x2fb2f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fb2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fb2f8:
    // 0x2fb2f8: 0x8c4502bc  lw          $a1, 0x2BC($v0)
    ctx->pc = 0x2fb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
label_2fb2fc:
    // 0x2fb2fc: 0xc0984bc  jal         func_2612F0
label_2fb300:
    if (ctx->pc == 0x2FB300u) {
        ctx->pc = 0x2FB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2FCu;
        // 0x2fb300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB304u;
        goto label_2fb304;
    }
    ctx->pc = 0x2FB2FCu;
    SET_GPR_U32(ctx, 31, 0x2FB304u);
    ctx->pc = 0x2FB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB2FCu;
    // 0x2fb300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x2FB2FCu, 0x2FB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB304u;
label_2fb304:
    // 0x2fb304: 0xc098f78  jal         func_263DE0
label_2fb308:
    if (ctx->pc == 0x2FB308u) {
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB30Cu;
        goto label_2fb30c;
    }
    ctx->pc = 0x2FB304u;
    SET_GPR_U32(ctx, 31, 0x2FB30Cu);
    ctx->pc = 0x2FB308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB304u;
    // 0x2fb308: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263DE0u, 0x2FB304u, 0x2FB30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB30Cu;
label_2fb30c:
    // 0x2fb30c: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2fb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb310:
    // 0x2fb310: 0x8c640388  lw          $a0, 0x388($v1)
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 904)));
label_2fb314:
    // 0x2fb314: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2fb318:
    if (ctx->pc == 0x2FB318u) {
        ctx->pc = 0x2FB31Cu;
        goto label_2fb31c;
    }
    ctx->pc = 0x2FB314u;
    {
        const bool branch_taken_0x2fb314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb314) {
            ctx->pc = 0x2FB330u;
            goto label_2fb330;
        }
    }
    ctx->pc = 0x2FB31Cu;
label_2fb31c:
    // 0x2fb31c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2fb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2fb320:
    // 0x2fb320: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2fb324:
    if (ctx->pc == 0x2FB324u) {
        ctx->pc = 0x2FB328u;
        goto label_2fb328;
    }
    ctx->pc = 0x2FB320u;
    {
        const bool branch_taken_0x2fb320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb320) {
            ctx->pc = 0x2FB330u;
            goto label_2fb330;
        }
    }
    ctx->pc = 0x2FB328u;
label_2fb328:
    // 0x2fb328: 0xc09c07c  jal         func_2701F0
label_2fb32c:
    if (ctx->pc == 0x2FB32Cu) {
        ctx->pc = 0x2FB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB328u;
        // 0x2fb32c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB330u;
        goto label_2fb330;
    }
    ctx->pc = 0x2FB328u;
    SET_GPR_U32(ctx, 31, 0x2FB330u);
    ctx->pc = 0x2FB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB328u;
    // 0x2fb32c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x2FB328u, 0x2FB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB330u;
label_2fb330:
    // 0x2fb330: 0xc0899bc  jal         func_2266F0
label_2fb334:
    if (ctx->pc == 0x2FB334u) {
        ctx->pc = 0x2FB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB330u;
        // 0x2fb334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB338u;
        goto label_2fb338;
    }
    ctx->pc = 0x2FB330u;
    SET_GPR_U32(ctx, 31, 0x2FB338u);
    ctx->pc = 0x2FB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB330u;
    // 0x2fb334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FB330u, 0x2FB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB338u;
label_2fb338:
    // 0x2fb338: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x2fb338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fb33c:
    // 0x2fb33c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2fb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2fb340:
    // 0x2fb340: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fb340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2fb344:
    // 0x2fb344: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2fb344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2fb348:
    // 0x2fb348: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2fb34c:
    if (ctx->pc == 0x2FB34Cu) {
        ctx->pc = 0x2FB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB348u;
        // 0x2fb34c: 0xc474041c  lwc1        $f20, 0x41C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB350u;
        goto label_2fb350;
    }
    ctx->pc = 0x2FB348u;
    {
        const bool branch_taken_0x2fb348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB348u;
        // 0x2fb34c: 0xc474041c  lwc1        $f20, 0x41C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb348) {
            ctx->pc = 0x2FB364u;
            goto label_2fb364;
        }
    }
    ctx->pc = 0x2FB350u;
label_2fb350:
    // 0x2fb350: 0x26f0040c  addiu       $s0, $s7, 0x40C
    ctx->pc = 0x2fb350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1036));
label_2fb354:
    // 0x2fb354: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x2fb354u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
label_2fb358:
    // 0x2fb358: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2fb358u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2fb35c:
    // 0x2fb35c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2fb360:
    if (ctx->pc == 0x2FB360u) {
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB364u;
        goto label_2fb364;
    }
    ctx->pc = 0x2FB35Cu;
    {
        const bool branch_taken_0x2fb35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB35Cu;
        // 0x2fb360: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb35c) {
            ctx->pc = 0x2FB39Cu;
            goto label_2fb39c;
        }
    }
    ctx->pc = 0x2FB364u;
label_2fb364:
    // 0x2fb364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb368:
    // 0x2fb368: 0x26f0040c  addiu       $s0, $s7, 0x40C
    ctx->pc = 0x2fb368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1036));
label_2fb36c:
    // 0x2fb36c: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x2fb36cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
label_2fb370:
    // 0x2fb370: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2fb370u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2fb374:
    // 0x2fb374: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2fb374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fb378:
    // 0x2fb378: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fb378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2fb37c:
    // 0x2fb37c: 0x0  nop
    ctx->pc = 0x2fb37cu;
    // NOP
label_2fb380:
    // 0x2fb380: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb384:
    // 0x2fb384: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2fb388:
    if (ctx->pc == 0x2FB388u) {
        ctx->pc = 0x2FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB384u;
        // 0x2fb388: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB38Cu;
        goto label_2fb38c;
    }
    ctx->pc = 0x2FB384u;
    {
        const bool branch_taken_0x2fb384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB384u;
        // 0x2fb388: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb384) {
            ctx->pc = 0x2FB39Cu;
            goto label_2fb39c;
        }
    }
    ctx->pc = 0x2FB38Cu;
label_2fb38c:
    // 0x2fb38c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fb38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fb390:
    // 0x2fb390: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2fb394:
    if (ctx->pc == 0x2FB394u) {
        ctx->pc = 0x2FB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB390u;
        // 0x2fb394: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB398u;
        goto label_2fb398;
    }
    ctx->pc = 0x2FB390u;
    {
        const bool branch_taken_0x2fb390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB390u;
        // 0x2fb394: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb390) {
            ctx->pc = 0x2FB380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb380;
        }
    }
    ctx->pc = 0x2FB398u;
label_2fb398:
    // 0x2fb398: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fb398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fb39c:
    // 0x2fb39c: 0xc073e86  jal         func_1CFA18
label_2fb3a0:
    if (ctx->pc == 0x2FB3A0u) {
        ctx->pc = 0x2FB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB39Cu;
        // 0x2fb3a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3A4u;
        goto label_2fb3a4;
    }
    ctx->pc = 0x2FB39Cu;
    SET_GPR_U32(ctx, 31, 0x2FB3A4u);
    ctx->pc = 0x2FB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB39Cu;
    // 0x2fb3a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FB39Cu, 0x2FB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3A4u;
label_2fb3a4:
    // 0x2fb3a4: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2fb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb3a8:
    // 0x2fb3a8: 0x8c460334  lw          $a2, 0x334($v0)
    ctx->pc = 0x2fb3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_2fb3ac:
    // 0x2fb3ac: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fb3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2fb3b0:
    // 0x2fb3b0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2fb3b4:
    if (ctx->pc == 0x2FB3B4u) {
        ctx->pc = 0x2FB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3B0u;
        // 0x2fb3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3B8u;
        goto label_2fb3b8;
    }
    ctx->pc = 0x2FB3B0u;
    {
        const bool branch_taken_0x2fb3b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3B0u;
        // 0x2fb3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3b0) {
            ctx->pc = 0x2FB3DCu;
            goto label_2fb3dc;
        }
    }
    ctx->pc = 0x2FB3B8u;
label_2fb3b8:
    // 0x2fb3b8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2fb3bc:
    // 0x2fb3bc: 0x0  nop
    ctx->pc = 0x2fb3bcu;
    // NOP
label_2fb3c0:
    // 0x2fb3c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb3c4:
    // 0x2fb3c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2fb3c8:
    if (ctx->pc == 0x2FB3C8u) {
        ctx->pc = 0x2FB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C4u;
        // 0x2fb3c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3CCu;
        goto label_2fb3cc;
    }
    ctx->pc = 0x2FB3C4u;
    {
        const bool branch_taken_0x2fb3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C4u;
        // 0x2fb3c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3c4) {
            ctx->pc = 0x2FB3DCu;
            goto label_2fb3dc;
        }
    }
    ctx->pc = 0x2FB3CCu;
label_2fb3cc:
    // 0x2fb3cc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fb3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fb3d0:
    // 0x2fb3d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2fb3d4:
    if (ctx->pc == 0x2FB3D4u) {
        ctx->pc = 0x2FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D0u;
        // 0x2fb3d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3D8u;
        goto label_2fb3d8;
    }
    ctx->pc = 0x2FB3D0u;
    {
        const bool branch_taken_0x2fb3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D0u;
        // 0x2fb3d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3d0) {
            ctx->pc = 0x2FB3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb3c0;
        }
    }
    ctx->pc = 0x2FB3D8u;
label_2fb3d8:
    // 0x2fb3d8: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fb3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fb3dc:
    // 0x2fb3dc: 0xc073e86  jal         func_1CFA18
label_2fb3e0:
    if (ctx->pc == 0x2FB3E0u) {
        ctx->pc = 0x2FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3DCu;
        // 0x2fb3e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3E4u;
        goto label_2fb3e4;
    }
    ctx->pc = 0x2FB3DCu;
    SET_GPR_U32(ctx, 31, 0x2FB3E4u);
    ctx->pc = 0x2FB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3DCu;
    // 0x2fb3e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FB3DCu, 0x2FB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3E4u;
label_2fb3e4:
    // 0x2fb3e4: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x2fb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_2fb3e8:
    // 0x2fb3e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb3ec:
    // 0x2fb3ec: 0x5860002f  blezl       $v1, . + 4 + (0x2F << 2)
label_2fb3f0:
    if (ctx->pc == 0x2FB3F0u) {
        ctx->pc = 0x2FB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3ECu;
        // 0x2fb3f0: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB3F4u;
        goto label_2fb3f4;
    }
    ctx->pc = 0x2FB3ECu;
    {
        const bool branch_taken_0x2fb3ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2fb3ec) {
            ctx->pc = 0x2FB3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB3ECu;
            // 0x2fb3f0: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB4ACu;
            goto label_2fb4ac;
        }
    }
    ctx->pc = 0x2FB3F4u;
label_2fb3f4:
    // 0x2fb3f4: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x2fb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2fb3f8:
    // 0x2fb3f8: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x2fb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_2fb3fc:
    // 0x2fb3fc: 0x844303f0  lh          $v1, 0x3F0($v0)
    ctx->pc = 0x2fb3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1008)));
label_2fb400:
    // 0x2fb400: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2fb404:
    if (ctx->pc == 0x2FB404u) {
        ctx->pc = 0x2FB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB400u;
        // 0x2fb404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB408u;
        goto label_2fb408;
    }
    ctx->pc = 0x2FB400u;
    {
        const bool branch_taken_0x2fb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB400u;
        // 0x2fb404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb400) {
            ctx->pc = 0x2FB40Cu;
            goto label_2fb40c;
        }
    }
    ctx->pc = 0x2FB408u;
label_2fb408:
    // 0x2fb408: 0x8c4503ec  lw          $a1, 0x3EC($v0)
    ctx->pc = 0x2fb408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
label_2fb40c:
    // 0x2fb40c: 0xc0d7424  jal         func_35D090
label_2fb410:
    if (ctx->pc == 0x2FB410u) {
        ctx->pc = 0x2FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB40Cu;
        // 0x2fb410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB414u;
        goto label_2fb414;
    }
    ctx->pc = 0x2FB40Cu;
    SET_GPR_U32(ctx, 31, 0x2FB414u);
    ctx->pc = 0x2FB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB40Cu;
    // 0x2fb410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2FB40Cu, 0x2FB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB414u;
label_2fb414:
    // 0x2fb414: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2fb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2fb418:
    // 0x2fb418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2fb41c:
    if (ctx->pc == 0x2FB41Cu) {
        ctx->pc = 0x2FB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB418u;
        // 0x2fb41c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB420u;
        goto label_2fb420;
    }
    ctx->pc = 0x2FB418u;
    {
        const bool branch_taken_0x2fb418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB418u;
        // 0x2fb41c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb418) {
            ctx->pc = 0x2FB434u;
            goto label_2fb434;
        }
    }
    ctx->pc = 0x2FB420u;
label_2fb420:
    // 0x2fb420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fb424:
    // 0x2fb424: 0xc0d7468  jal         func_35D1A0
label_2fb428:
    if (ctx->pc == 0x2FB428u) {
        ctx->pc = 0x2FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB424u;
        // 0x2fb428: 0x24a51c20  addiu       $a1, $a1, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB42Cu;
        goto label_2fb42c;
    }
    ctx->pc = 0x2FB424u;
    SET_GPR_U32(ctx, 31, 0x2FB42Cu);
    ctx->pc = 0x2FB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB424u;
    // 0x2fb428: 0x24a51c20  addiu       $a1, $a1, 0x1C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2FB424u, 0x2FB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB42Cu;
label_2fb42c:
    // 0x2fb42c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2fb430:
    if (ctx->pc == 0x2FB430u) {
        ctx->pc = 0x2FB434u;
        goto label_2fb434;
    }
    ctx->pc = 0x2FB42Cu;
    {
        const bool branch_taken_0x2fb42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb42c) {
            ctx->pc = 0x2FB474u;
            goto label_2fb474;
        }
    }
    ctx->pc = 0x2FB434u;
label_2fb434:
    // 0x2fb434: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x2fb434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_2fb438:
    // 0x2fb438: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fb438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb43c:
    // 0x2fb43c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x2fb43cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2fb440:
    // 0x2fb440: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2fb444:
    if (ctx->pc == 0x2FB444u) {
        ctx->pc = 0x2FB448u;
        goto label_2fb448;
    }
    ctx->pc = 0x2FB440u;
    {
        const bool branch_taken_0x2fb440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb440) {
            ctx->pc = 0x2FB474u;
            goto label_2fb474;
        }
    }
    ctx->pc = 0x2FB448u;
label_2fb448:
    // 0x2fb448: 0xc0b1260  jal         func_2C4980
label_2fb44c:
    if (ctx->pc == 0x2FB44Cu) {
        ctx->pc = 0x2FB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB448u;
        // 0x2fb44c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB450u;
        goto label_2fb450;
    }
    ctx->pc = 0x2FB448u;
    SET_GPR_U32(ctx, 31, 0x2FB450u);
    ctx->pc = 0x2FB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB448u;
    // 0x2fb44c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x2FB448u, 0x2FB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB450u;
label_2fb450:
    // 0x2fb450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb454:
    // 0x2fb454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fb458:
    // 0x2fb458: 0xc0d755e  jal         func_35D578
label_2fb45c:
    if (ctx->pc == 0x2FB45Cu) {
        ctx->pc = 0x2FB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB458u;
        // 0x2fb45c: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB460u;
        goto label_2fb460;
    }
    ctx->pc = 0x2FB458u;
    SET_GPR_U32(ctx, 31, 0x2FB460u);
    ctx->pc = 0x2FB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB458u;
    // 0x2fb45c: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x2FB458u, 0x2FB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB460u;
label_2fb460:
    // 0x2fb460: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2fb460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2fb464:
    // 0x2fb464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fb468:
    // 0x2fb468: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x2fb468u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_2fb46c:
    // 0x2fb46c: 0xc0d755e  jal         func_35D578
label_2fb470:
    if (ctx->pc == 0x2FB470u) {
        ctx->pc = 0x2FB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB46Cu;
        // 0x2fb470: 0x102e03  sra         $a1, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB474u;
        goto label_2fb474;
    }
    ctx->pc = 0x2FB46Cu;
    SET_GPR_U32(ctx, 31, 0x2FB474u);
    ctx->pc = 0x2FB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB46Cu;
    // 0x2fb470: 0x102e03  sra         $a1, $s0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x2FB46Cu, 0x2FB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB474u;
label_2fb474:
    // 0x2fb474: 0xc0c092e  jal         func_3024B8
label_2fb478:
    if (ctx->pc == 0x2FB478u) {
        ctx->pc = 0x2FB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB474u;
        // 0x2fb478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB47Cu;
        goto label_2fb47c;
    }
    ctx->pc = 0x2FB474u;
    SET_GPR_U32(ctx, 31, 0x2FB47Cu);
    ctx->pc = 0x2FB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB474u;
    // 0x2fb478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024B8u, 0x2FB474u, 0x2FB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB47Cu;
label_2fb47c:
    // 0x2fb47c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fb480:
    // 0x2fb480: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb484:
    // 0x2fb484: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x2fb484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_2fb488:
    // 0x2fb488: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fb488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2fb48c:
    // 0x2fb48c: 0xc0c7f22  jal         func_31FC88
label_2fb490:
    if (ctx->pc == 0x2FB490u) {
        ctx->pc = 0x2FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB48Cu;
        // 0x2fb490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB494u;
        goto label_2fb494;
    }
    ctx->pc = 0x2FB48Cu;
    SET_GPR_U32(ctx, 31, 0x2FB494u);
    ctx->pc = 0x2FB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB48Cu;
    // 0x2fb490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC88u, 0x2FB48Cu, 0x2FB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB494u;
label_2fb494:
    // 0x2fb494: 0xc0c0922  jal         func_302488
label_2fb498:
    if (ctx->pc == 0x2FB498u) {
        ctx->pc = 0x2FB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB494u;
        // 0x2fb498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB49Cu;
        goto label_2fb49c;
    }
    ctx->pc = 0x2FB494u;
    SET_GPR_U32(ctx, 31, 0x2FB49Cu);
    ctx->pc = 0x2FB498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB494u;
    // 0x2fb498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x2FB494u, 0x2FB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB49Cu;
label_2fb49c:
    // 0x2fb49c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4a0:
    // 0x2fb4a0: 0xc0d7412  jal         func_35D048
label_2fb4a4:
    if (ctx->pc == 0x2FB4A4u) {
        ctx->pc = 0x2FB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4A0u;
        // 0x2fb4a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4A8u;
        goto label_2fb4a8;
    }
    ctx->pc = 0x2FB4A0u;
    SET_GPR_U32(ctx, 31, 0x2FB4A8u);
    ctx->pc = 0x2FB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4A0u;
    // 0x2fb4a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2FB4A0u, 0x2FB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4A8u;
label_2fb4a8:
    // 0x2fb4a8: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2fb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2fb4ac:
    // 0x2fb4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4b0:
    // 0x2fb4b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2fb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2fb4b4:
    // 0x2fb4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4b8:
    // 0x2fb4b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2fb4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2fb4bc:
    // 0x2fb4bc: 0xc08fed2  jal         func_23FB48
label_2fb4c0:
    if (ctx->pc == 0x2FB4C0u) {
        ctx->pc = 0x2FB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4BCu;
        // 0x2fb4c0: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4C4u;
        goto label_2fb4c4;
    }
    ctx->pc = 0x2FB4BCu;
    SET_GPR_U32(ctx, 31, 0x2FB4C4u);
    ctx->pc = 0x2FB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4BCu;
    // 0x2fb4c0: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FB4BCu, 0x2FB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4C4u;
label_2fb4c4:
    // 0x2fb4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4c8:
    // 0x2fb4c8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2fb4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2fb4cc:
    // 0x2fb4cc: 0xc08fed2  jal         func_23FB48
label_2fb4d0:
    if (ctx->pc == 0x2FB4D0u) {
        ctx->pc = 0x2FB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4CCu;
        // 0x2fb4d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4D4u;
        goto label_2fb4d4;
    }
    ctx->pc = 0x2FB4CCu;
    SET_GPR_U32(ctx, 31, 0x2FB4D4u);
    ctx->pc = 0x2FB4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4CCu;
    // 0x2fb4d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FB4CCu, 0x2FB4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4D4u;
label_2fb4d4:
    // 0x2fb4d4: 0x8e4511e8  lw          $a1, 0x11E8($s2)
    ctx->pc = 0x2fb4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2fb4d8:
    // 0x2fb4d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4dc:
    // 0x2fb4dc: 0xc0494fa  jal         func_1253E8
label_2fb4e0:
    if (ctx->pc == 0x2FB4E0u) {
        ctx->pc = 0x2FB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4DCu;
        // 0x2fb4e0: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4E4u;
        goto label_2fb4e4;
    }
    ctx->pc = 0x2FB4DCu;
    SET_GPR_U32(ctx, 31, 0x2FB4E4u);
    ctx->pc = 0x2FB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4DCu;
    // 0x2fb4e0: 0x2664a080  addiu       $a0, $s3, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253E8u, 0x2FB4DCu, 0x2FB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4E4u;
label_2fb4e4:
    // 0x2fb4e4: 0xc0be5e2  jal         func_2F9788
label_2fb4e8:
    if (ctx->pc == 0x2FB4E8u) {
        ctx->pc = 0x2FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4E4u;
        // 0x2fb4e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4ECu;
        goto label_2fb4ec;
    }
    ctx->pc = 0x2FB4E4u;
    SET_GPR_U32(ctx, 31, 0x2FB4ECu);
    ctx->pc = 0x2FB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4E4u;
    // 0x2fb4e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FB4E4u, 0x2FB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4ECu;
label_2fb4ec:
    // 0x2fb4ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4f0:
    // 0x2fb4f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fb4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4f4:
    // 0x2fb4f4: 0xc0be60a  jal         func_2F9828
label_2fb4f8:
    if (ctx->pc == 0x2FB4F8u) {
        ctx->pc = 0x2FB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4F4u;
        // 0x2fb4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB4FCu;
        goto label_2fb4fc;
    }
    ctx->pc = 0x2FB4F4u;
    SET_GPR_U32(ctx, 31, 0x2FB4FCu);
    ctx->pc = 0x2FB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4F4u;
    // 0x2fb4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9828u, 0x2FB4F4u, 0x2FB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4FCu;
label_2fb4fc:
    // 0x2fb4fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fb500:
    // 0x2fb500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fb500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fb504:
    // 0x2fb504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb508:
    // 0x2fb508: 0xc0bf262  jal         func_2FC988
label_2fb50c:
    if (ctx->pc == 0x2FB50Cu) {
        ctx->pc = 0x2FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB508u;
        // 0x2fb50c: 0xe6802c48  swc1        $f0, 0x2C48($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 11336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB510u;
        goto label_2fb510;
    }
    ctx->pc = 0x2FB508u;
    SET_GPR_U32(ctx, 31, 0x2FB510u);
    ctx->pc = 0x2FB50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB508u;
    // 0x2fb50c: 0xe6802c48  swc1        $f0, 0x2C48($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 11336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC988u, 0x2FB508u, 0x2FB510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB510u;
label_2fb510:
    // 0x2fb510: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2fb510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fb514:
    // 0x2fb514: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2fb514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2fb518:
    // 0x2fb518: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2fb518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2fb51c:
    // 0x2fb51c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2fb51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2fb520:
    // 0x2fb520: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2fb520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2fb524:
    // 0x2fb524: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x2fb524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2fb528:
    // 0x2fb528: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2fb528u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2fb52c:
    // 0x2fb52c: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x2fb52cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_2fb530:
    // 0x2fb530: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x2fb530u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2fb534:
    // 0x2fb534: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x2fb534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2fb538:
    // 0x2fb538: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2fb538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fb53c:
    // 0x2fb53c: 0x3e00008  jr          $ra
label_2fb540:
    if (ctx->pc == 0x2FB540u) {
        ctx->pc = 0x2FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB53Cu;
        // 0x2fb540: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB544u;
        goto label_2fb544;
    }
    ctx->pc = 0x2FB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB53Cu;
        // 0x2fb540: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB544u;
label_2fb544:
    // 0x2fb544: 0x0  nop
    ctx->pc = 0x2fb544u;
    // NOP
    ctx->pc = 0x2fb548u;
}
