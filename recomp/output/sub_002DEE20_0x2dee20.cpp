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

// Function: sub_002DEE20
// Address: 0x2dee20 - 0x2dfc48
void sub_002DEE20_0x2dee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEE20_0x2dee20");
#endif

    switch (ctx->pc) {
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee24u: goto label_2dee24;
        case 0x2dee28u: goto label_2dee28;
        case 0x2dee2cu: goto label_2dee2c;
        case 0x2dee30u: goto label_2dee30;
        case 0x2dee34u: goto label_2dee34;
        case 0x2dee38u: goto label_2dee38;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee40u: goto label_2dee40;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee48u: goto label_2dee48;
        case 0x2dee4cu: goto label_2dee4c;
        case 0x2dee50u: goto label_2dee50;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee58u: goto label_2dee58;
        case 0x2dee5cu: goto label_2dee5c;
        case 0x2dee60u: goto label_2dee60;
        case 0x2dee64u: goto label_2dee64;
        case 0x2dee68u: goto label_2dee68;
        case 0x2dee6cu: goto label_2dee6c;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee74u: goto label_2dee74;
        case 0x2dee78u: goto label_2dee78;
        case 0x2dee7cu: goto label_2dee7c;
        case 0x2dee80u: goto label_2dee80;
        case 0x2dee84u: goto label_2dee84;
        case 0x2dee88u: goto label_2dee88;
        case 0x2dee8cu: goto label_2dee8c;
        case 0x2dee90u: goto label_2dee90;
        case 0x2dee94u: goto label_2dee94;
        case 0x2dee98u: goto label_2dee98;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deea0u: goto label_2deea0;
        case 0x2deea4u: goto label_2deea4;
        case 0x2deea8u: goto label_2deea8;
        case 0x2deeacu: goto label_2deeac;
        case 0x2deeb0u: goto label_2deeb0;
        case 0x2deeb4u: goto label_2deeb4;
        case 0x2deeb8u: goto label_2deeb8;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deec0u: goto label_2deec0;
        case 0x2deec4u: goto label_2deec4;
        case 0x2deec8u: goto label_2deec8;
        case 0x2deeccu: goto label_2deecc;
        case 0x2deed0u: goto label_2deed0;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deed8u: goto label_2deed8;
        case 0x2deedcu: goto label_2deedc;
        case 0x2deee0u: goto label_2deee0;
        case 0x2deee4u: goto label_2deee4;
        case 0x2deee8u: goto label_2deee8;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef0u: goto label_2deef0;
        case 0x2deef4u: goto label_2deef4;
        case 0x2deef8u: goto label_2deef8;
        case 0x2deefcu: goto label_2deefc;
        case 0x2def00u: goto label_2def00;
        case 0x2def04u: goto label_2def04;
        case 0x2def08u: goto label_2def08;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def10u: goto label_2def10;
        case 0x2def14u: goto label_2def14;
        case 0x2def18u: goto label_2def18;
        case 0x2def1cu: goto label_2def1c;
        case 0x2def20u: goto label_2def20;
        case 0x2def24u: goto label_2def24;
        case 0x2def28u: goto label_2def28;
        case 0x2def2cu: goto label_2def2c;
        case 0x2def30u: goto label_2def30;
        case 0x2def34u: goto label_2def34;
        case 0x2def38u: goto label_2def38;
        case 0x2def3cu: goto label_2def3c;
        case 0x2def40u: goto label_2def40;
        case 0x2def44u: goto label_2def44;
        case 0x2def48u: goto label_2def48;
        case 0x2def4cu: goto label_2def4c;
        case 0x2def50u: goto label_2def50;
        case 0x2def54u: goto label_2def54;
        case 0x2def58u: goto label_2def58;
        case 0x2def5cu: goto label_2def5c;
        case 0x2def60u: goto label_2def60;
        case 0x2def64u: goto label_2def64;
        case 0x2def68u: goto label_2def68;
        case 0x2def6cu: goto label_2def6c;
        case 0x2def70u: goto label_2def70;
        case 0x2def74u: goto label_2def74;
        case 0x2def78u: goto label_2def78;
        case 0x2def7cu: goto label_2def7c;
        case 0x2def80u: goto label_2def80;
        case 0x2def84u: goto label_2def84;
        case 0x2def88u: goto label_2def88;
        case 0x2def8cu: goto label_2def8c;
        case 0x2def90u: goto label_2def90;
        case 0x2def94u: goto label_2def94;
        case 0x2def98u: goto label_2def98;
        case 0x2def9cu: goto label_2def9c;
        case 0x2defa0u: goto label_2defa0;
        case 0x2defa4u: goto label_2defa4;
        case 0x2defa8u: goto label_2defa8;
        case 0x2defacu: goto label_2defac;
        case 0x2defb0u: goto label_2defb0;
        case 0x2defb4u: goto label_2defb4;
        case 0x2defb8u: goto label_2defb8;
        case 0x2defbcu: goto label_2defbc;
        case 0x2defc0u: goto label_2defc0;
        case 0x2defc4u: goto label_2defc4;
        case 0x2defc8u: goto label_2defc8;
        case 0x2defccu: goto label_2defcc;
        case 0x2defd0u: goto label_2defd0;
        case 0x2defd4u: goto label_2defd4;
        case 0x2defd8u: goto label_2defd8;
        case 0x2defdcu: goto label_2defdc;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe4u: goto label_2defe4;
        case 0x2defe8u: goto label_2defe8;
        case 0x2defecu: goto label_2defec;
        case 0x2deff0u: goto label_2deff0;
        case 0x2deff4u: goto label_2deff4;
        case 0x2deff8u: goto label_2deff8;
        case 0x2deffcu: goto label_2deffc;
        case 0x2df000u: goto label_2df000;
        case 0x2df004u: goto label_2df004;
        case 0x2df008u: goto label_2df008;
        case 0x2df00cu: goto label_2df00c;
        case 0x2df010u: goto label_2df010;
        case 0x2df014u: goto label_2df014;
        case 0x2df018u: goto label_2df018;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df020u: goto label_2df020;
        case 0x2df024u: goto label_2df024;
        case 0x2df028u: goto label_2df028;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df030u: goto label_2df030;
        case 0x2df034u: goto label_2df034;
        case 0x2df038u: goto label_2df038;
        case 0x2df03cu: goto label_2df03c;
        case 0x2df040u: goto label_2df040;
        case 0x2df044u: goto label_2df044;
        case 0x2df048u: goto label_2df048;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df058u: goto label_2df058;
        case 0x2df05cu: goto label_2df05c;
        case 0x2df060u: goto label_2df060;
        case 0x2df064u: goto label_2df064;
        case 0x2df068u: goto label_2df068;
        case 0x2df06cu: goto label_2df06c;
        case 0x2df070u: goto label_2df070;
        case 0x2df074u: goto label_2df074;
        case 0x2df078u: goto label_2df078;
        case 0x2df07cu: goto label_2df07c;
        case 0x2df080u: goto label_2df080;
        case 0x2df084u: goto label_2df084;
        case 0x2df088u: goto label_2df088;
        case 0x2df08cu: goto label_2df08c;
        case 0x2df090u: goto label_2df090;
        case 0x2df094u: goto label_2df094;
        case 0x2df098u: goto label_2df098;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0a0u: goto label_2df0a0;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0a8u: goto label_2df0a8;
        case 0x2df0acu: goto label_2df0ac;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c4u: goto label_2df0c4;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d0u: goto label_2df0d0;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0d8u: goto label_2df0d8;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f4u: goto label_2df0f4;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df118u: goto label_2df118;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df130u: goto label_2df130;
        case 0x2df134u: goto label_2df134;
        case 0x2df138u: goto label_2df138;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df148u: goto label_2df148;
        case 0x2df14cu: goto label_2df14c;
        case 0x2df150u: goto label_2df150;
        case 0x2df154u: goto label_2df154;
        case 0x2df158u: goto label_2df158;
        case 0x2df15cu: goto label_2df15c;
        case 0x2df160u: goto label_2df160;
        case 0x2df164u: goto label_2df164;
        case 0x2df168u: goto label_2df168;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df170u: goto label_2df170;
        case 0x2df174u: goto label_2df174;
        case 0x2df178u: goto label_2df178;
        case 0x2df17cu: goto label_2df17c;
        case 0x2df180u: goto label_2df180;
        case 0x2df184u: goto label_2df184;
        case 0x2df188u: goto label_2df188;
        case 0x2df18cu: goto label_2df18c;
        case 0x2df190u: goto label_2df190;
        case 0x2df194u: goto label_2df194;
        case 0x2df198u: goto label_2df198;
        case 0x2df19cu: goto label_2df19c;
        case 0x2df1a0u: goto label_2df1a0;
        case 0x2df1a4u: goto label_2df1a4;
        case 0x2df1a8u: goto label_2df1a8;
        case 0x2df1acu: goto label_2df1ac;
        case 0x2df1b0u: goto label_2df1b0;
        case 0x2df1b4u: goto label_2df1b4;
        case 0x2df1b8u: goto label_2df1b8;
        case 0x2df1bcu: goto label_2df1bc;
        case 0x2df1c0u: goto label_2df1c0;
        case 0x2df1c4u: goto label_2df1c4;
        case 0x2df1c8u: goto label_2df1c8;
        case 0x2df1ccu: goto label_2df1cc;
        case 0x2df1d0u: goto label_2df1d0;
        case 0x2df1d4u: goto label_2df1d4;
        case 0x2df1d8u: goto label_2df1d8;
        case 0x2df1dcu: goto label_2df1dc;
        case 0x2df1e0u: goto label_2df1e0;
        case 0x2df1e4u: goto label_2df1e4;
        case 0x2df1e8u: goto label_2df1e8;
        case 0x2df1ecu: goto label_2df1ec;
        case 0x2df1f0u: goto label_2df1f0;
        case 0x2df1f4u: goto label_2df1f4;
        case 0x2df1f8u: goto label_2df1f8;
        case 0x2df1fcu: goto label_2df1fc;
        case 0x2df200u: goto label_2df200;
        case 0x2df204u: goto label_2df204;
        case 0x2df208u: goto label_2df208;
        case 0x2df20cu: goto label_2df20c;
        case 0x2df210u: goto label_2df210;
        case 0x2df214u: goto label_2df214;
        case 0x2df218u: goto label_2df218;
        case 0x2df21cu: goto label_2df21c;
        case 0x2df220u: goto label_2df220;
        case 0x2df224u: goto label_2df224;
        case 0x2df228u: goto label_2df228;
        case 0x2df22cu: goto label_2df22c;
        case 0x2df230u: goto label_2df230;
        case 0x2df234u: goto label_2df234;
        case 0x2df238u: goto label_2df238;
        case 0x2df23cu: goto label_2df23c;
        case 0x2df240u: goto label_2df240;
        case 0x2df244u: goto label_2df244;
        case 0x2df248u: goto label_2df248;
        case 0x2df24cu: goto label_2df24c;
        case 0x2df250u: goto label_2df250;
        case 0x2df254u: goto label_2df254;
        case 0x2df258u: goto label_2df258;
        case 0x2df25cu: goto label_2df25c;
        case 0x2df260u: goto label_2df260;
        case 0x2df264u: goto label_2df264;
        case 0x2df268u: goto label_2df268;
        case 0x2df26cu: goto label_2df26c;
        case 0x2df270u: goto label_2df270;
        case 0x2df274u: goto label_2df274;
        case 0x2df278u: goto label_2df278;
        case 0x2df27cu: goto label_2df27c;
        case 0x2df280u: goto label_2df280;
        case 0x2df284u: goto label_2df284;
        case 0x2df288u: goto label_2df288;
        case 0x2df28cu: goto label_2df28c;
        case 0x2df290u: goto label_2df290;
        case 0x2df294u: goto label_2df294;
        case 0x2df298u: goto label_2df298;
        case 0x2df29cu: goto label_2df29c;
        case 0x2df2a0u: goto label_2df2a0;
        case 0x2df2a4u: goto label_2df2a4;
        case 0x2df2a8u: goto label_2df2a8;
        case 0x2df2acu: goto label_2df2ac;
        case 0x2df2b0u: goto label_2df2b0;
        case 0x2df2b4u: goto label_2df2b4;
        case 0x2df2b8u: goto label_2df2b8;
        case 0x2df2bcu: goto label_2df2bc;
        case 0x2df2c0u: goto label_2df2c0;
        case 0x2df2c4u: goto label_2df2c4;
        case 0x2df2c8u: goto label_2df2c8;
        case 0x2df2ccu: goto label_2df2cc;
        case 0x2df2d0u: goto label_2df2d0;
        case 0x2df2d4u: goto label_2df2d4;
        case 0x2df2d8u: goto label_2df2d8;
        case 0x2df2dcu: goto label_2df2dc;
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df2e4u: goto label_2df2e4;
        case 0x2df2e8u: goto label_2df2e8;
        case 0x2df2ecu: goto label_2df2ec;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df2f4u: goto label_2df2f4;
        case 0x2df2f8u: goto label_2df2f8;
        case 0x2df2fcu: goto label_2df2fc;
        case 0x2df300u: goto label_2df300;
        case 0x2df304u: goto label_2df304;
        case 0x2df308u: goto label_2df308;
        case 0x2df30cu: goto label_2df30c;
        case 0x2df310u: goto label_2df310;
        case 0x2df314u: goto label_2df314;
        case 0x2df318u: goto label_2df318;
        case 0x2df31cu: goto label_2df31c;
        case 0x2df320u: goto label_2df320;
        case 0x2df324u: goto label_2df324;
        case 0x2df328u: goto label_2df328;
        case 0x2df32cu: goto label_2df32c;
        case 0x2df330u: goto label_2df330;
        case 0x2df334u: goto label_2df334;
        case 0x2df338u: goto label_2df338;
        case 0x2df33cu: goto label_2df33c;
        case 0x2df340u: goto label_2df340;
        case 0x2df344u: goto label_2df344;
        case 0x2df348u: goto label_2df348;
        case 0x2df34cu: goto label_2df34c;
        case 0x2df350u: goto label_2df350;
        case 0x2df354u: goto label_2df354;
        case 0x2df358u: goto label_2df358;
        case 0x2df35cu: goto label_2df35c;
        case 0x2df360u: goto label_2df360;
        case 0x2df364u: goto label_2df364;
        case 0x2df368u: goto label_2df368;
        case 0x2df36cu: goto label_2df36c;
        case 0x2df370u: goto label_2df370;
        case 0x2df374u: goto label_2df374;
        case 0x2df378u: goto label_2df378;
        case 0x2df37cu: goto label_2df37c;
        case 0x2df380u: goto label_2df380;
        case 0x2df384u: goto label_2df384;
        case 0x2df388u: goto label_2df388;
        case 0x2df38cu: goto label_2df38c;
        case 0x2df390u: goto label_2df390;
        case 0x2df394u: goto label_2df394;
        case 0x2df398u: goto label_2df398;
        case 0x2df39cu: goto label_2df39c;
        case 0x2df3a0u: goto label_2df3a0;
        case 0x2df3a4u: goto label_2df3a4;
        case 0x2df3a8u: goto label_2df3a8;
        case 0x2df3acu: goto label_2df3ac;
        case 0x2df3b0u: goto label_2df3b0;
        case 0x2df3b4u: goto label_2df3b4;
        case 0x2df3b8u: goto label_2df3b8;
        case 0x2df3bcu: goto label_2df3bc;
        case 0x2df3c0u: goto label_2df3c0;
        case 0x2df3c4u: goto label_2df3c4;
        case 0x2df3c8u: goto label_2df3c8;
        case 0x2df3ccu: goto label_2df3cc;
        case 0x2df3d0u: goto label_2df3d0;
        case 0x2df3d4u: goto label_2df3d4;
        case 0x2df3d8u: goto label_2df3d8;
        case 0x2df3dcu: goto label_2df3dc;
        case 0x2df3e0u: goto label_2df3e0;
        case 0x2df3e4u: goto label_2df3e4;
        case 0x2df3e8u: goto label_2df3e8;
        case 0x2df3ecu: goto label_2df3ec;
        case 0x2df3f0u: goto label_2df3f0;
        case 0x2df3f4u: goto label_2df3f4;
        case 0x2df3f8u: goto label_2df3f8;
        case 0x2df3fcu: goto label_2df3fc;
        case 0x2df400u: goto label_2df400;
        case 0x2df404u: goto label_2df404;
        case 0x2df408u: goto label_2df408;
        case 0x2df40cu: goto label_2df40c;
        case 0x2df410u: goto label_2df410;
        case 0x2df414u: goto label_2df414;
        case 0x2df418u: goto label_2df418;
        case 0x2df41cu: goto label_2df41c;
        case 0x2df420u: goto label_2df420;
        case 0x2df424u: goto label_2df424;
        case 0x2df428u: goto label_2df428;
        case 0x2df42cu: goto label_2df42c;
        case 0x2df430u: goto label_2df430;
        case 0x2df434u: goto label_2df434;
        case 0x2df438u: goto label_2df438;
        case 0x2df43cu: goto label_2df43c;
        case 0x2df440u: goto label_2df440;
        case 0x2df444u: goto label_2df444;
        case 0x2df448u: goto label_2df448;
        case 0x2df44cu: goto label_2df44c;
        case 0x2df450u: goto label_2df450;
        case 0x2df454u: goto label_2df454;
        case 0x2df458u: goto label_2df458;
        case 0x2df45cu: goto label_2df45c;
        case 0x2df460u: goto label_2df460;
        case 0x2df464u: goto label_2df464;
        case 0x2df468u: goto label_2df468;
        case 0x2df46cu: goto label_2df46c;
        case 0x2df470u: goto label_2df470;
        case 0x2df474u: goto label_2df474;
        case 0x2df478u: goto label_2df478;
        case 0x2df47cu: goto label_2df47c;
        case 0x2df480u: goto label_2df480;
        case 0x2df484u: goto label_2df484;
        case 0x2df488u: goto label_2df488;
        case 0x2df48cu: goto label_2df48c;
        case 0x2df490u: goto label_2df490;
        case 0x2df494u: goto label_2df494;
        case 0x2df498u: goto label_2df498;
        case 0x2df49cu: goto label_2df49c;
        case 0x2df4a0u: goto label_2df4a0;
        case 0x2df4a4u: goto label_2df4a4;
        case 0x2df4a8u: goto label_2df4a8;
        case 0x2df4acu: goto label_2df4ac;
        case 0x2df4b0u: goto label_2df4b0;
        case 0x2df4b4u: goto label_2df4b4;
        case 0x2df4b8u: goto label_2df4b8;
        case 0x2df4bcu: goto label_2df4bc;
        case 0x2df4c0u: goto label_2df4c0;
        case 0x2df4c4u: goto label_2df4c4;
        case 0x2df4c8u: goto label_2df4c8;
        case 0x2df4ccu: goto label_2df4cc;
        case 0x2df4d0u: goto label_2df4d0;
        case 0x2df4d4u: goto label_2df4d4;
        case 0x2df4d8u: goto label_2df4d8;
        case 0x2df4dcu: goto label_2df4dc;
        case 0x2df4e0u: goto label_2df4e0;
        case 0x2df4e4u: goto label_2df4e4;
        case 0x2df4e8u: goto label_2df4e8;
        case 0x2df4ecu: goto label_2df4ec;
        case 0x2df4f0u: goto label_2df4f0;
        case 0x2df4f4u: goto label_2df4f4;
        case 0x2df4f8u: goto label_2df4f8;
        case 0x2df4fcu: goto label_2df4fc;
        case 0x2df500u: goto label_2df500;
        case 0x2df504u: goto label_2df504;
        case 0x2df508u: goto label_2df508;
        case 0x2df50cu: goto label_2df50c;
        case 0x2df510u: goto label_2df510;
        case 0x2df514u: goto label_2df514;
        case 0x2df518u: goto label_2df518;
        case 0x2df51cu: goto label_2df51c;
        case 0x2df520u: goto label_2df520;
        case 0x2df524u: goto label_2df524;
        case 0x2df528u: goto label_2df528;
        case 0x2df52cu: goto label_2df52c;
        case 0x2df530u: goto label_2df530;
        case 0x2df534u: goto label_2df534;
        case 0x2df538u: goto label_2df538;
        case 0x2df53cu: goto label_2df53c;
        case 0x2df540u: goto label_2df540;
        case 0x2df544u: goto label_2df544;
        case 0x2df548u: goto label_2df548;
        case 0x2df54cu: goto label_2df54c;
        case 0x2df550u: goto label_2df550;
        case 0x2df554u: goto label_2df554;
        case 0x2df558u: goto label_2df558;
        case 0x2df55cu: goto label_2df55c;
        case 0x2df560u: goto label_2df560;
        case 0x2df564u: goto label_2df564;
        case 0x2df568u: goto label_2df568;
        case 0x2df56cu: goto label_2df56c;
        case 0x2df570u: goto label_2df570;
        case 0x2df574u: goto label_2df574;
        case 0x2df578u: goto label_2df578;
        case 0x2df57cu: goto label_2df57c;
        case 0x2df580u: goto label_2df580;
        case 0x2df584u: goto label_2df584;
        case 0x2df588u: goto label_2df588;
        case 0x2df58cu: goto label_2df58c;
        case 0x2df590u: goto label_2df590;
        case 0x2df594u: goto label_2df594;
        case 0x2df598u: goto label_2df598;
        case 0x2df59cu: goto label_2df59c;
        case 0x2df5a0u: goto label_2df5a0;
        case 0x2df5a4u: goto label_2df5a4;
        case 0x2df5a8u: goto label_2df5a8;
        case 0x2df5acu: goto label_2df5ac;
        case 0x2df5b0u: goto label_2df5b0;
        case 0x2df5b4u: goto label_2df5b4;
        case 0x2df5b8u: goto label_2df5b8;
        case 0x2df5bcu: goto label_2df5bc;
        case 0x2df5c0u: goto label_2df5c0;
        case 0x2df5c4u: goto label_2df5c4;
        case 0x2df5c8u: goto label_2df5c8;
        case 0x2df5ccu: goto label_2df5cc;
        case 0x2df5d0u: goto label_2df5d0;
        case 0x2df5d4u: goto label_2df5d4;
        case 0x2df5d8u: goto label_2df5d8;
        case 0x2df5dcu: goto label_2df5dc;
        case 0x2df5e0u: goto label_2df5e0;
        case 0x2df5e4u: goto label_2df5e4;
        case 0x2df5e8u: goto label_2df5e8;
        case 0x2df5ecu: goto label_2df5ec;
        case 0x2df5f0u: goto label_2df5f0;
        case 0x2df5f4u: goto label_2df5f4;
        case 0x2df5f8u: goto label_2df5f8;
        case 0x2df5fcu: goto label_2df5fc;
        case 0x2df600u: goto label_2df600;
        case 0x2df604u: goto label_2df604;
        case 0x2df608u: goto label_2df608;
        case 0x2df60cu: goto label_2df60c;
        case 0x2df610u: goto label_2df610;
        case 0x2df614u: goto label_2df614;
        case 0x2df618u: goto label_2df618;
        case 0x2df61cu: goto label_2df61c;
        case 0x2df620u: goto label_2df620;
        case 0x2df624u: goto label_2df624;
        case 0x2df628u: goto label_2df628;
        case 0x2df62cu: goto label_2df62c;
        case 0x2df630u: goto label_2df630;
        case 0x2df634u: goto label_2df634;
        case 0x2df638u: goto label_2df638;
        case 0x2df63cu: goto label_2df63c;
        case 0x2df640u: goto label_2df640;
        case 0x2df644u: goto label_2df644;
        case 0x2df648u: goto label_2df648;
        case 0x2df64cu: goto label_2df64c;
        case 0x2df650u: goto label_2df650;
        case 0x2df654u: goto label_2df654;
        case 0x2df658u: goto label_2df658;
        case 0x2df65cu: goto label_2df65c;
        case 0x2df660u: goto label_2df660;
        case 0x2df664u: goto label_2df664;
        case 0x2df668u: goto label_2df668;
        case 0x2df66cu: goto label_2df66c;
        case 0x2df670u: goto label_2df670;
        case 0x2df674u: goto label_2df674;
        case 0x2df678u: goto label_2df678;
        case 0x2df67cu: goto label_2df67c;
        case 0x2df680u: goto label_2df680;
        case 0x2df684u: goto label_2df684;
        case 0x2df688u: goto label_2df688;
        case 0x2df68cu: goto label_2df68c;
        case 0x2df690u: goto label_2df690;
        case 0x2df694u: goto label_2df694;
        case 0x2df698u: goto label_2df698;
        case 0x2df69cu: goto label_2df69c;
        case 0x2df6a0u: goto label_2df6a0;
        case 0x2df6a4u: goto label_2df6a4;
        case 0x2df6a8u: goto label_2df6a8;
        case 0x2df6acu: goto label_2df6ac;
        case 0x2df6b0u: goto label_2df6b0;
        case 0x2df6b4u: goto label_2df6b4;
        case 0x2df6b8u: goto label_2df6b8;
        case 0x2df6bcu: goto label_2df6bc;
        case 0x2df6c0u: goto label_2df6c0;
        case 0x2df6c4u: goto label_2df6c4;
        case 0x2df6c8u: goto label_2df6c8;
        case 0x2df6ccu: goto label_2df6cc;
        case 0x2df6d0u: goto label_2df6d0;
        case 0x2df6d4u: goto label_2df6d4;
        case 0x2df6d8u: goto label_2df6d8;
        case 0x2df6dcu: goto label_2df6dc;
        case 0x2df6e0u: goto label_2df6e0;
        case 0x2df6e4u: goto label_2df6e4;
        case 0x2df6e8u: goto label_2df6e8;
        case 0x2df6ecu: goto label_2df6ec;
        case 0x2df6f0u: goto label_2df6f0;
        case 0x2df6f4u: goto label_2df6f4;
        case 0x2df6f8u: goto label_2df6f8;
        case 0x2df6fcu: goto label_2df6fc;
        case 0x2df700u: goto label_2df700;
        case 0x2df704u: goto label_2df704;
        case 0x2df708u: goto label_2df708;
        case 0x2df70cu: goto label_2df70c;
        case 0x2df710u: goto label_2df710;
        case 0x2df714u: goto label_2df714;
        case 0x2df718u: goto label_2df718;
        case 0x2df71cu: goto label_2df71c;
        case 0x2df720u: goto label_2df720;
        case 0x2df724u: goto label_2df724;
        case 0x2df728u: goto label_2df728;
        case 0x2df72cu: goto label_2df72c;
        case 0x2df730u: goto label_2df730;
        case 0x2df734u: goto label_2df734;
        case 0x2df738u: goto label_2df738;
        case 0x2df73cu: goto label_2df73c;
        case 0x2df740u: goto label_2df740;
        case 0x2df744u: goto label_2df744;
        case 0x2df748u: goto label_2df748;
        case 0x2df74cu: goto label_2df74c;
        case 0x2df750u: goto label_2df750;
        case 0x2df754u: goto label_2df754;
        case 0x2df758u: goto label_2df758;
        case 0x2df75cu: goto label_2df75c;
        case 0x2df760u: goto label_2df760;
        case 0x2df764u: goto label_2df764;
        case 0x2df768u: goto label_2df768;
        case 0x2df76cu: goto label_2df76c;
        case 0x2df770u: goto label_2df770;
        case 0x2df774u: goto label_2df774;
        case 0x2df778u: goto label_2df778;
        case 0x2df77cu: goto label_2df77c;
        case 0x2df780u: goto label_2df780;
        case 0x2df784u: goto label_2df784;
        case 0x2df788u: goto label_2df788;
        case 0x2df78cu: goto label_2df78c;
        case 0x2df790u: goto label_2df790;
        case 0x2df794u: goto label_2df794;
        case 0x2df798u: goto label_2df798;
        case 0x2df79cu: goto label_2df79c;
        case 0x2df7a0u: goto label_2df7a0;
        case 0x2df7a4u: goto label_2df7a4;
        case 0x2df7a8u: goto label_2df7a8;
        case 0x2df7acu: goto label_2df7ac;
        case 0x2df7b0u: goto label_2df7b0;
        case 0x2df7b4u: goto label_2df7b4;
        case 0x2df7b8u: goto label_2df7b8;
        case 0x2df7bcu: goto label_2df7bc;
        case 0x2df7c0u: goto label_2df7c0;
        case 0x2df7c4u: goto label_2df7c4;
        case 0x2df7c8u: goto label_2df7c8;
        case 0x2df7ccu: goto label_2df7cc;
        case 0x2df7d0u: goto label_2df7d0;
        case 0x2df7d4u: goto label_2df7d4;
        case 0x2df7d8u: goto label_2df7d8;
        case 0x2df7dcu: goto label_2df7dc;
        case 0x2df7e0u: goto label_2df7e0;
        case 0x2df7e4u: goto label_2df7e4;
        case 0x2df7e8u: goto label_2df7e8;
        case 0x2df7ecu: goto label_2df7ec;
        case 0x2df7f0u: goto label_2df7f0;
        case 0x2df7f4u: goto label_2df7f4;
        case 0x2df7f8u: goto label_2df7f8;
        case 0x2df7fcu: goto label_2df7fc;
        case 0x2df800u: goto label_2df800;
        case 0x2df804u: goto label_2df804;
        case 0x2df808u: goto label_2df808;
        case 0x2df80cu: goto label_2df80c;
        case 0x2df810u: goto label_2df810;
        case 0x2df814u: goto label_2df814;
        case 0x2df818u: goto label_2df818;
        case 0x2df81cu: goto label_2df81c;
        case 0x2df820u: goto label_2df820;
        case 0x2df824u: goto label_2df824;
        case 0x2df828u: goto label_2df828;
        case 0x2df82cu: goto label_2df82c;
        case 0x2df830u: goto label_2df830;
        case 0x2df834u: goto label_2df834;
        case 0x2df838u: goto label_2df838;
        case 0x2df83cu: goto label_2df83c;
        case 0x2df840u: goto label_2df840;
        case 0x2df844u: goto label_2df844;
        case 0x2df848u: goto label_2df848;
        case 0x2df84cu: goto label_2df84c;
        case 0x2df850u: goto label_2df850;
        case 0x2df854u: goto label_2df854;
        case 0x2df858u: goto label_2df858;
        case 0x2df85cu: goto label_2df85c;
        case 0x2df860u: goto label_2df860;
        case 0x2df864u: goto label_2df864;
        case 0x2df868u: goto label_2df868;
        case 0x2df86cu: goto label_2df86c;
        case 0x2df870u: goto label_2df870;
        case 0x2df874u: goto label_2df874;
        case 0x2df878u: goto label_2df878;
        case 0x2df87cu: goto label_2df87c;
        case 0x2df880u: goto label_2df880;
        case 0x2df884u: goto label_2df884;
        case 0x2df888u: goto label_2df888;
        case 0x2df88cu: goto label_2df88c;
        case 0x2df890u: goto label_2df890;
        case 0x2df894u: goto label_2df894;
        case 0x2df898u: goto label_2df898;
        case 0x2df89cu: goto label_2df89c;
        case 0x2df8a0u: goto label_2df8a0;
        case 0x2df8a4u: goto label_2df8a4;
        case 0x2df8a8u: goto label_2df8a8;
        case 0x2df8acu: goto label_2df8ac;
        case 0x2df8b0u: goto label_2df8b0;
        case 0x2df8b4u: goto label_2df8b4;
        case 0x2df8b8u: goto label_2df8b8;
        case 0x2df8bcu: goto label_2df8bc;
        case 0x2df8c0u: goto label_2df8c0;
        case 0x2df8c4u: goto label_2df8c4;
        case 0x2df8c8u: goto label_2df8c8;
        case 0x2df8ccu: goto label_2df8cc;
        case 0x2df8d0u: goto label_2df8d0;
        case 0x2df8d4u: goto label_2df8d4;
        case 0x2df8d8u: goto label_2df8d8;
        case 0x2df8dcu: goto label_2df8dc;
        case 0x2df8e0u: goto label_2df8e0;
        case 0x2df8e4u: goto label_2df8e4;
        case 0x2df8e8u: goto label_2df8e8;
        case 0x2df8ecu: goto label_2df8ec;
        case 0x2df8f0u: goto label_2df8f0;
        case 0x2df8f4u: goto label_2df8f4;
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df8fcu: goto label_2df8fc;
        case 0x2df900u: goto label_2df900;
        case 0x2df904u: goto label_2df904;
        case 0x2df908u: goto label_2df908;
        case 0x2df90cu: goto label_2df90c;
        case 0x2df910u: goto label_2df910;
        case 0x2df914u: goto label_2df914;
        case 0x2df918u: goto label_2df918;
        case 0x2df91cu: goto label_2df91c;
        case 0x2df920u: goto label_2df920;
        case 0x2df924u: goto label_2df924;
        case 0x2df928u: goto label_2df928;
        case 0x2df92cu: goto label_2df92c;
        case 0x2df930u: goto label_2df930;
        case 0x2df934u: goto label_2df934;
        case 0x2df938u: goto label_2df938;
        case 0x2df93cu: goto label_2df93c;
        case 0x2df940u: goto label_2df940;
        case 0x2df944u: goto label_2df944;
        case 0x2df948u: goto label_2df948;
        case 0x2df94cu: goto label_2df94c;
        case 0x2df950u: goto label_2df950;
        case 0x2df954u: goto label_2df954;
        case 0x2df958u: goto label_2df958;
        case 0x2df95cu: goto label_2df95c;
        case 0x2df960u: goto label_2df960;
        case 0x2df964u: goto label_2df964;
        case 0x2df968u: goto label_2df968;
        case 0x2df96cu: goto label_2df96c;
        case 0x2df970u: goto label_2df970;
        case 0x2df974u: goto label_2df974;
        case 0x2df978u: goto label_2df978;
        case 0x2df97cu: goto label_2df97c;
        case 0x2df980u: goto label_2df980;
        case 0x2df984u: goto label_2df984;
        case 0x2df988u: goto label_2df988;
        case 0x2df98cu: goto label_2df98c;
        case 0x2df990u: goto label_2df990;
        case 0x2df994u: goto label_2df994;
        case 0x2df998u: goto label_2df998;
        case 0x2df99cu: goto label_2df99c;
        case 0x2df9a0u: goto label_2df9a0;
        case 0x2df9a4u: goto label_2df9a4;
        case 0x2df9a8u: goto label_2df9a8;
        case 0x2df9acu: goto label_2df9ac;
        case 0x2df9b0u: goto label_2df9b0;
        case 0x2df9b4u: goto label_2df9b4;
        case 0x2df9b8u: goto label_2df9b8;
        case 0x2df9bcu: goto label_2df9bc;
        case 0x2df9c0u: goto label_2df9c0;
        case 0x2df9c4u: goto label_2df9c4;
        case 0x2df9c8u: goto label_2df9c8;
        case 0x2df9ccu: goto label_2df9cc;
        case 0x2df9d0u: goto label_2df9d0;
        case 0x2df9d4u: goto label_2df9d4;
        case 0x2df9d8u: goto label_2df9d8;
        case 0x2df9dcu: goto label_2df9dc;
        case 0x2df9e0u: goto label_2df9e0;
        case 0x2df9e4u: goto label_2df9e4;
        case 0x2df9e8u: goto label_2df9e8;
        case 0x2df9ecu: goto label_2df9ec;
        case 0x2df9f0u: goto label_2df9f0;
        case 0x2df9f4u: goto label_2df9f4;
        case 0x2df9f8u: goto label_2df9f8;
        case 0x2df9fcu: goto label_2df9fc;
        case 0x2dfa00u: goto label_2dfa00;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa08u: goto label_2dfa08;
        case 0x2dfa0cu: goto label_2dfa0c;
        case 0x2dfa10u: goto label_2dfa10;
        case 0x2dfa14u: goto label_2dfa14;
        case 0x2dfa18u: goto label_2dfa18;
        case 0x2dfa1cu: goto label_2dfa1c;
        case 0x2dfa20u: goto label_2dfa20;
        case 0x2dfa24u: goto label_2dfa24;
        case 0x2dfa28u: goto label_2dfa28;
        case 0x2dfa2cu: goto label_2dfa2c;
        case 0x2dfa30u: goto label_2dfa30;
        case 0x2dfa34u: goto label_2dfa34;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa3cu: goto label_2dfa3c;
        case 0x2dfa40u: goto label_2dfa40;
        case 0x2dfa44u: goto label_2dfa44;
        case 0x2dfa48u: goto label_2dfa48;
        case 0x2dfa4cu: goto label_2dfa4c;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa54u: goto label_2dfa54;
        case 0x2dfa58u: goto label_2dfa58;
        case 0x2dfa5cu: goto label_2dfa5c;
        case 0x2dfa60u: goto label_2dfa60;
        case 0x2dfa64u: goto label_2dfa64;
        case 0x2dfa68u: goto label_2dfa68;
        case 0x2dfa6cu: goto label_2dfa6c;
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa74u: goto label_2dfa74;
        case 0x2dfa78u: goto label_2dfa78;
        case 0x2dfa7cu: goto label_2dfa7c;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa84u: goto label_2dfa84;
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfa8cu: goto label_2dfa8c;
        case 0x2dfa90u: goto label_2dfa90;
        case 0x2dfa94u: goto label_2dfa94;
        case 0x2dfa98u: goto label_2dfa98;
        case 0x2dfa9cu: goto label_2dfa9c;
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfaa4u: goto label_2dfaa4;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfab4u: goto label_2dfab4;
        case 0x2dfab8u: goto label_2dfab8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfac0u: goto label_2dfac0;
        case 0x2dfac4u: goto label_2dfac4;
        case 0x2dfac8u: goto label_2dfac8;
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfad4u: goto label_2dfad4;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfae0u: goto label_2dfae0;
        case 0x2dfae4u: goto label_2dfae4;
        case 0x2dfae8u: goto label_2dfae8;
        case 0x2dfaecu: goto label_2dfaec;
        case 0x2dfaf0u: goto label_2dfaf0;
        case 0x2dfaf4u: goto label_2dfaf4;
        case 0x2dfaf8u: goto label_2dfaf8;
        case 0x2dfafcu: goto label_2dfafc;
        case 0x2dfb00u: goto label_2dfb00;
        case 0x2dfb04u: goto label_2dfb04;
        case 0x2dfb08u: goto label_2dfb08;
        case 0x2dfb0cu: goto label_2dfb0c;
        case 0x2dfb10u: goto label_2dfb10;
        case 0x2dfb14u: goto label_2dfb14;
        case 0x2dfb18u: goto label_2dfb18;
        case 0x2dfb1cu: goto label_2dfb1c;
        case 0x2dfb20u: goto label_2dfb20;
        case 0x2dfb24u: goto label_2dfb24;
        case 0x2dfb28u: goto label_2dfb28;
        case 0x2dfb2cu: goto label_2dfb2c;
        case 0x2dfb30u: goto label_2dfb30;
        case 0x2dfb34u: goto label_2dfb34;
        case 0x2dfb38u: goto label_2dfb38;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb40u: goto label_2dfb40;
        case 0x2dfb44u: goto label_2dfb44;
        case 0x2dfb48u: goto label_2dfb48;
        case 0x2dfb4cu: goto label_2dfb4c;
        case 0x2dfb50u: goto label_2dfb50;
        case 0x2dfb54u: goto label_2dfb54;
        case 0x2dfb58u: goto label_2dfb58;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb60u: goto label_2dfb60;
        case 0x2dfb64u: goto label_2dfb64;
        case 0x2dfb68u: goto label_2dfb68;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfb70u: goto label_2dfb70;
        case 0x2dfb74u: goto label_2dfb74;
        case 0x2dfb78u: goto label_2dfb78;
        case 0x2dfb7cu: goto label_2dfb7c;
        case 0x2dfb80u: goto label_2dfb80;
        case 0x2dfb84u: goto label_2dfb84;
        case 0x2dfb88u: goto label_2dfb88;
        case 0x2dfb8cu: goto label_2dfb8c;
        case 0x2dfb90u: goto label_2dfb90;
        case 0x2dfb94u: goto label_2dfb94;
        case 0x2dfb98u: goto label_2dfb98;
        case 0x2dfb9cu: goto label_2dfb9c;
        case 0x2dfba0u: goto label_2dfba0;
        case 0x2dfba4u: goto label_2dfba4;
        case 0x2dfba8u: goto label_2dfba8;
        case 0x2dfbacu: goto label_2dfbac;
        case 0x2dfbb0u: goto label_2dfbb0;
        case 0x2dfbb4u: goto label_2dfbb4;
        case 0x2dfbb8u: goto label_2dfbb8;
        case 0x2dfbbcu: goto label_2dfbbc;
        case 0x2dfbc0u: goto label_2dfbc0;
        case 0x2dfbc4u: goto label_2dfbc4;
        case 0x2dfbc8u: goto label_2dfbc8;
        case 0x2dfbccu: goto label_2dfbcc;
        case 0x2dfbd0u: goto label_2dfbd0;
        case 0x2dfbd4u: goto label_2dfbd4;
        case 0x2dfbd8u: goto label_2dfbd8;
        case 0x2dfbdcu: goto label_2dfbdc;
        case 0x2dfbe0u: goto label_2dfbe0;
        case 0x2dfbe4u: goto label_2dfbe4;
        case 0x2dfbe8u: goto label_2dfbe8;
        case 0x2dfbecu: goto label_2dfbec;
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfbf4u: goto label_2dfbf4;
        case 0x2dfbf8u: goto label_2dfbf8;
        case 0x2dfbfcu: goto label_2dfbfc;
        case 0x2dfc00u: goto label_2dfc00;
        case 0x2dfc04u: goto label_2dfc04;
        case 0x2dfc08u: goto label_2dfc08;
        case 0x2dfc0cu: goto label_2dfc0c;
        case 0x2dfc10u: goto label_2dfc10;
        case 0x2dfc14u: goto label_2dfc14;
        case 0x2dfc18u: goto label_2dfc18;
        case 0x2dfc1cu: goto label_2dfc1c;
        case 0x2dfc20u: goto label_2dfc20;
        case 0x2dfc24u: goto label_2dfc24;
        case 0x2dfc28u: goto label_2dfc28;
        case 0x2dfc2cu: goto label_2dfc2c;
        case 0x2dfc30u: goto label_2dfc30;
        case 0x2dfc34u: goto label_2dfc34;
        case 0x2dfc38u: goto label_2dfc38;
        case 0x2dfc3cu: goto label_2dfc3c;
        case 0x2dfc40u: goto label_2dfc40;
        case 0x2dfc44u: goto label_2dfc44;
        default: break;
    }

    ctx->pc = 0x2dee20u;

label_2dee20:
    // 0x2dee20: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2dee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_2dee24:
    // 0x2dee24: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x2dee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
label_2dee28:
    // 0x2dee28: 0xffb501b8  sd          $s5, 0x1B8($sp)
    ctx->pc = 0x2dee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 21));
label_2dee2c:
    // 0x2dee2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dee2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dee30:
    // 0x2dee30: 0xffbe01d0  sd          $fp, 0x1D0($sp)
    ctx->pc = 0x2dee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
label_2dee34:
    // 0x2dee34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2dee34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dee38:
    // 0x2dee38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dee3c:
    // 0x2dee3c: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x2dee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
label_2dee40:
    // 0x2dee40: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x2dee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
label_2dee44:
    // 0x2dee44: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2dee44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dee48:
    // 0x2dee48: 0xffb301a8  sd          $s3, 0x1A8($sp)
    ctx->pc = 0x2dee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 19));
label_2dee4c:
    // 0x2dee4c: 0xffb401b0  sd          $s4, 0x1B0($sp)
    ctx->pc = 0x2dee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 20));
label_2dee50:
    // 0x2dee50: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x2dee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
label_2dee54:
    // 0x2dee54: 0xffb701c8  sd          $s7, 0x1C8($sp)
    ctx->pc = 0x2dee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 23));
label_2dee58:
    // 0x2dee58: 0xffbf01d8  sd          $ra, 0x1D8($sp)
    ctx->pc = 0x2dee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 31));
label_2dee5c:
    // 0x2dee5c: 0xe7b501e8  swc1        $f21, 0x1E8($sp)
    ctx->pc = 0x2dee5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_2dee60:
    // 0x2dee60: 0xc0f6a96  jal         func_3DAA58
label_2dee64:
    if (ctx->pc == 0x2DEE64u) {
        ctx->pc = 0x2DEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE60u;
        // 0x2dee64: 0xe7b401e0  swc1        $f20, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE68u;
        goto label_2dee68;
    }
    ctx->pc = 0x2DEE60u;
    SET_GPR_U32(ctx, 31, 0x2DEE68u);
    ctx->pc = 0x2DEE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE60u;
    // 0x2dee64: 0xe7b401e0  swc1        $f20, 0x1E0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE60u, 0x2DEE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE68u;
label_2dee68:
    // 0x2dee68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2dee68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dee6c:
    // 0x2dee6c: 0xc0f6a96  jal         func_3DAA58
label_2dee70:
    if (ctx->pc == 0x2DEE70u) {
        ctx->pc = 0x2DEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE6Cu;
        // 0x2dee70: 0xafa00180  sw          $zero, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE74u;
        goto label_2dee74;
    }
    ctx->pc = 0x2DEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE74u);
    ctx->pc = 0x2DEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE6Cu;
    // 0x2dee70: 0xafa00180  sw          $zero, 0x180($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE6Cu, 0x2DEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE74u;
label_2dee74:
    // 0x2dee74: 0xc0f6a96  jal         func_3DAA58
label_2dee78:
    if (ctx->pc == 0x2DEE78u) {
        ctx->pc = 0x2DEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE74u;
        // 0x2dee78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE7Cu;
        goto label_2dee7c;
    }
    ctx->pc = 0x2DEE74u;
    SET_GPR_U32(ctx, 31, 0x2DEE7Cu);
    ctx->pc = 0x2DEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE74u;
    // 0x2dee78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE74u, 0x2DEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE7Cu;
label_2dee7c:
    // 0x2dee7c: 0xc0f6a96  jal         func_3DAA58
label_2dee80:
    if (ctx->pc == 0x2DEE80u) {
        ctx->pc = 0x2DEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE7Cu;
        // 0x2dee80: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE84u;
        goto label_2dee84;
    }
    ctx->pc = 0x2DEE7Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE84u);
    ctx->pc = 0x2DEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE7Cu;
    // 0x2dee80: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE7Cu, 0x2DEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE84u;
label_2dee84:
    // 0x2dee84: 0xc0f6a96  jal         func_3DAA58
label_2dee88:
    if (ctx->pc == 0x2DEE88u) {
        ctx->pc = 0x2DEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE84u;
        // 0x2dee88: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE8Cu;
        goto label_2dee8c;
    }
    ctx->pc = 0x2DEE84u;
    SET_GPR_U32(ctx, 31, 0x2DEE8Cu);
    ctx->pc = 0x2DEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE84u;
    // 0x2dee88: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE84u, 0x2DEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE8Cu;
label_2dee8c:
    // 0x2dee8c: 0xc0f6a96  jal         func_3DAA58
label_2dee90:
    if (ctx->pc == 0x2DEE90u) {
        ctx->pc = 0x2DEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE8Cu;
        // 0x2dee90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE94u;
        goto label_2dee94;
    }
    ctx->pc = 0x2DEE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE94u);
    ctx->pc = 0x2DEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE8Cu;
    // 0x2dee90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE8Cu, 0x2DEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE94u;
label_2dee94:
    // 0x2dee94: 0xc0f6a96  jal         func_3DAA58
label_2dee98:
    if (ctx->pc == 0x2DEE98u) {
        ctx->pc = 0x2DEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE94u;
        // 0x2dee98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE9Cu;
        goto label_2dee9c;
    }
    ctx->pc = 0x2DEE94u;
    SET_GPR_U32(ctx, 31, 0x2DEE9Cu);
    ctx->pc = 0x2DEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE94u;
    // 0x2dee98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE94u, 0x2DEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE9Cu;
label_2dee9c:
    // 0x2dee9c: 0xc0f6a96  jal         func_3DAA58
label_2deea0:
    if (ctx->pc == 0x2DEEA0u) {
        ctx->pc = 0x2DEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE9Cu;
        // 0x2deea0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEA4u;
        goto label_2deea4;
    }
    ctx->pc = 0x2DEE9Cu;
    SET_GPR_U32(ctx, 31, 0x2DEEA4u);
    ctx->pc = 0x2DEEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE9Cu;
    // 0x2deea0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEE9Cu, 0x2DEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEA4u;
label_2deea4:
    // 0x2deea4: 0xc0f6a96  jal         func_3DAA58
label_2deea8:
    if (ctx->pc == 0x2DEEA8u) {
        ctx->pc = 0x2DEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEA4u;
        // 0x2deea8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEACu;
        goto label_2deeac;
    }
    ctx->pc = 0x2DEEA4u;
    SET_GPR_U32(ctx, 31, 0x2DEEACu);
    ctx->pc = 0x2DEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEA4u;
    // 0x2deea8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEA4u, 0x2DEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEACu;
label_2deeac:
    // 0x2deeac: 0xc0f6a96  jal         func_3DAA58
label_2deeb0:
    if (ctx->pc == 0x2DEEB0u) {
        ctx->pc = 0x2DEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEACu;
        // 0x2deeb0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEB4u;
        goto label_2deeb4;
    }
    ctx->pc = 0x2DEEACu;
    SET_GPR_U32(ctx, 31, 0x2DEEB4u);
    ctx->pc = 0x2DEEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEACu;
    // 0x2deeb0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEACu, 0x2DEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEB4u;
label_2deeb4:
    // 0x2deeb4: 0xc0f6a96  jal         func_3DAA58
label_2deeb8:
    if (ctx->pc == 0x2DEEB8u) {
        ctx->pc = 0x2DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEB4u;
        // 0x2deeb8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEBCu;
        goto label_2deebc;
    }
    ctx->pc = 0x2DEEB4u;
    SET_GPR_U32(ctx, 31, 0x2DEEBCu);
    ctx->pc = 0x2DEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEB4u;
    // 0x2deeb8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEB4u, 0x2DEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEBCu;
label_2deebc:
    // 0x2deebc: 0xc0f6a96  jal         func_3DAA58
label_2deec0:
    if (ctx->pc == 0x2DEEC0u) {
        ctx->pc = 0x2DEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEBCu;
        // 0x2deec0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEC4u;
        goto label_2deec4;
    }
    ctx->pc = 0x2DEEBCu;
    SET_GPR_U32(ctx, 31, 0x2DEEC4u);
    ctx->pc = 0x2DEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEBCu;
    // 0x2deec0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEBCu, 0x2DEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEC4u;
label_2deec4:
    // 0x2deec4: 0xc0f6a96  jal         func_3DAA58
label_2deec8:
    if (ctx->pc == 0x2DEEC8u) {
        ctx->pc = 0x2DEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEC4u;
        // 0x2deec8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEECCu;
        goto label_2deecc;
    }
    ctx->pc = 0x2DEEC4u;
    SET_GPR_U32(ctx, 31, 0x2DEECCu);
    ctx->pc = 0x2DEEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEC4u;
    // 0x2deec8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEC4u, 0x2DEECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEECCu;
label_2deecc:
    // 0x2deecc: 0xc0f6a96  jal         func_3DAA58
label_2deed0:
    if (ctx->pc == 0x2DEED0u) {
        ctx->pc = 0x2DEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEECCu;
        // 0x2deed0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEED4u;
        goto label_2deed4;
    }
    ctx->pc = 0x2DEECCu;
    SET_GPR_U32(ctx, 31, 0x2DEED4u);
    ctx->pc = 0x2DEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEECCu;
    // 0x2deed0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEECCu, 0x2DEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEED4u;
label_2deed4:
    // 0x2deed4: 0xc0f6a96  jal         func_3DAA58
label_2deed8:
    if (ctx->pc == 0x2DEED8u) {
        ctx->pc = 0x2DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEED4u;
        // 0x2deed8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEDCu;
        goto label_2deedc;
    }
    ctx->pc = 0x2DEED4u;
    SET_GPR_U32(ctx, 31, 0x2DEEDCu);
    ctx->pc = 0x2DEED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEED4u;
    // 0x2deed8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEED4u, 0x2DEEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEDCu;
label_2deedc:
    // 0x2deedc: 0xc0f6a96  jal         func_3DAA58
label_2deee0:
    if (ctx->pc == 0x2DEEE0u) {
        ctx->pc = 0x2DEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEDCu;
        // 0x2deee0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEE4u;
        goto label_2deee4;
    }
    ctx->pc = 0x2DEEDCu;
    SET_GPR_U32(ctx, 31, 0x2DEEE4u);
    ctx->pc = 0x2DEEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEDCu;
    // 0x2deee0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEDCu, 0x2DEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEE4u;
label_2deee4:
    // 0x2deee4: 0xc0f6a96  jal         func_3DAA58
label_2deee8:
    if (ctx->pc == 0x2DEEE8u) {
        ctx->pc = 0x2DEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEE4u;
        // 0x2deee8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEECu;
        goto label_2deeec;
    }
    ctx->pc = 0x2DEEE4u;
    SET_GPR_U32(ctx, 31, 0x2DEEECu);
    ctx->pc = 0x2DEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEE4u;
    // 0x2deee8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEE4u, 0x2DEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEECu;
label_2deeec:
    // 0x2deeec: 0xc0f6a96  jal         func_3DAA58
label_2deef0:
    if (ctx->pc == 0x2DEEF0u) {
        ctx->pc = 0x2DEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEECu;
        // 0x2deef0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEF4u;
        goto label_2deef4;
    }
    ctx->pc = 0x2DEEECu;
    SET_GPR_U32(ctx, 31, 0x2DEEF4u);
    ctx->pc = 0x2DEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEECu;
    // 0x2deef0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEECu, 0x2DEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEF4u;
label_2deef4:
    // 0x2deef4: 0xc0f6a96  jal         func_3DAA58
label_2deef8:
    if (ctx->pc == 0x2DEEF8u) {
        ctx->pc = 0x2DEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEF4u;
        // 0x2deef8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEFCu;
        goto label_2deefc;
    }
    ctx->pc = 0x2DEEF4u;
    SET_GPR_U32(ctx, 31, 0x2DEEFCu);
    ctx->pc = 0x2DEEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEF4u;
    // 0x2deef8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEF4u, 0x2DEEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEFCu;
label_2deefc:
    // 0x2deefc: 0xc0f6a96  jal         func_3DAA58
label_2def00:
    if (ctx->pc == 0x2DEF00u) {
        ctx->pc = 0x2DEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEFCu;
        // 0x2def00: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF04u;
        goto label_2def04;
    }
    ctx->pc = 0x2DEEFCu;
    SET_GPR_U32(ctx, 31, 0x2DEF04u);
    ctx->pc = 0x2DEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEFCu;
    // 0x2def00: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEEFCu, 0x2DEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF04u;
label_2def04:
    // 0x2def04: 0xc0f6a96  jal         func_3DAA58
label_2def08:
    if (ctx->pc == 0x2DEF08u) {
        ctx->pc = 0x2DEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF04u;
        // 0x2def08: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF0Cu;
        goto label_2def0c;
    }
    ctx->pc = 0x2DEF04u;
    SET_GPR_U32(ctx, 31, 0x2DEF0Cu);
    ctx->pc = 0x2DEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF04u;
    // 0x2def08: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DEF04u, 0x2DEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF0Cu;
label_2def0c:
    // 0x2def0c: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2def0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_2def10:
    // 0x2def10: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2def10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2def14:
    // 0x2def14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2def18:
    if (ctx->pc == 0x2DEF18u) {
        ctx->pc = 0x2DEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF14u;
        // 0x2def18: 0xc6a00010  lwc1        $f0, 0x10($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF1Cu;
        goto label_2def1c;
    }
    ctx->pc = 0x2DEF14u;
    {
        const bool branch_taken_0x2def14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2def14) {
            ctx->pc = 0x2DEF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF14u;
            // 0x2def18: 0xc6a00010  lwc1        $f0, 0x10($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF28u;
            goto label_2def28;
        }
    }
    ctx->pc = 0x2DEF1Cu;
label_2def1c:
    // 0x2def1c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2def20:
    // 0x2def20: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x2def20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_2def24:
    // 0x2def24: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2def24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def28:
    // 0x2def28: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2def2c:
    // 0x2def2c: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2def2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2def30:
    // 0x2def30: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2def30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2def34:
    // 0x2def34: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2def34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2def38:
    // 0x2def38: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2def38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2def3c:
    // 0x2def3c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2def3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def40:
    // 0x2def40: 0xc6a40004  lwc1        $f4, 0x4($s5)
    ctx->pc = 0x2def40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2def44:
    // 0x2def44: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2def44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2def48:
    // 0x2def48: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2def48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2def4c:
    // 0x2def4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2def4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def50:
    // 0x2def50: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x2def50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2def54:
    // 0x2def54: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2def54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2def58:
    // 0x2def58: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2def58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2def5c:
    // 0x2def5c: 0xe7a50160  swc1        $f5, 0x160($sp)
    ctx->pc = 0x2def5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2def60:
    // 0x2def60: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x2def60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2def64:
    // 0x2def64: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x2def64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2def68:
    // 0x2def68: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x2def68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2def6c:
    // 0x2def6c: 0xc083bc0  jal         func_20EF00
label_2def70:
    if (ctx->pc == 0x2DEF70u) {
        ctx->pc = 0x2DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF6Cu;
        // 0x2def70: 0xe7a2016c  swc1        $f2, 0x16C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF74u;
        goto label_2def74;
    }
    ctx->pc = 0x2DEF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF74u);
    ctx->pc = 0x2DEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF6Cu;
    // 0x2def70: 0xe7a2016c  swc1        $f2, 0x16C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2DEF6Cu, 0x2DEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF74u;
label_2def74:
    // 0x2def74: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x2def74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2def78:
    // 0x2def78: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2def78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2def7c:
    // 0x2def7c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2def7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2def80:
    // 0x2def80: 0xc083bc0  jal         func_20EF00
label_2def84:
    if (ctx->pc == 0x2DEF84u) {
        ctx->pc = 0x2DEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF80u;
        // 0x2def84: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF88u;
        goto label_2def88;
    }
    ctx->pc = 0x2DEF80u;
    SET_GPR_U32(ctx, 31, 0x2DEF88u);
    ctx->pc = 0x2DEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF80u;
    // 0x2def84: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2DEF80u, 0x2DEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF88u;
label_2def88:
    // 0x2def88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2def88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2def8c:
    // 0x2def8c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2def8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2def90:
    // 0x2def90: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2def90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2def94:
    // 0x2def94: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2def94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2def98:
    // 0x2def98: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2def98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2def9c:
    // 0x2def9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2def9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2defa0:
    // 0x2defa0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2defa4:
    if (ctx->pc == 0x2DEFA4u) {
        ctx->pc = 0x2DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA0u;
        // 0x2defa4: 0x8fa30180  lw          $v1, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFA8u;
        goto label_2defa8;
    }
    ctx->pc = 0x2DEFA0u;
    {
        const bool branch_taken_0x2defa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA0u;
        // 0x2defa4: 0x8fa30180  lw          $v1, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defa0) {
            ctx->pc = 0x2DF018u;
            goto label_2df018;
        }
    }
    ctx->pc = 0x2DEFA8u;
label_2defa8:
    // 0x2defa8: 0x13c00013  beqz        $fp, . + 4 + (0x13 << 2)
label_2defac:
    if (ctx->pc == 0x2DEFACu) {
        ctx->pc = 0x2DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA8u;
        // 0x2defac: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFB0u;
        goto label_2defb0;
    }
    ctx->pc = 0x2DEFA8u;
    {
        const bool branch_taken_0x2defa8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA8u;
        // 0x2defac: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defa8) {
            ctx->pc = 0x2DEFF8u;
            goto label_2deff8;
        }
    }
    ctx->pc = 0x2DEFB0u;
label_2defb0:
    // 0x2defb0: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x2defb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2defb4:
    // 0x2defb4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2defb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2defb8:
    // 0x2defb8: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2defb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2defbc:
    // 0x2defbc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2defbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2defc0:
    // 0x2defc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2defc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2defc4:
    // 0x2defc4: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x2defc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_2defc8:
    // 0x2defc8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2defc8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2defcc:
    // 0x2defcc: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2defccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2defd0:
    // 0x2defd0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2defd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2defd4:
    // 0x2defd4: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2defd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_2defd8:
    // 0x2defd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2defd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2defdc:
    // 0x2defdc: 0xfaa10010  sqc2        $vf1, 0x10($s5)
    ctx->pc = 0x2defdcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2defe0:
    // 0x2defe0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2defe4:
    // 0x2defe4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2defe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2defe8:
    // 0x2defe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2defe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2defec:
    // 0x2defec: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x2defecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_2deff0:
    // 0x2deff0: 0x10000241  b           . + 4 + (0x241 << 2)
label_2deff4:
    if (ctx->pc == 0x2DEFF4u) {
        ctx->pc = 0x2DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFF0u;
        // 0x2deff4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFF8u;
        goto label_2deff8;
    }
    ctx->pc = 0x2DEFF0u;
    {
        const bool branch_taken_0x2deff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFF0u;
        // 0x2deff4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deff0) {
            ctx->pc = 0x2DF8F8u;
            goto label_2df8f8;
        }
    }
    ctx->pc = 0x2DEFF8u;
label_2deff8:
    // 0x2deff8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2deff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2deffc:
    // 0x2deffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df000:
    // 0x2df000: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2df000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df004:
    // 0x2df004: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2df004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2df008:
    // 0x2df008: 0x40f809  jalr        $v0
label_2df00c:
    if (ctx->pc == 0x2DF00Cu) {
        ctx->pc = 0x2DF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF008u;
        // 0x2df00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF010u;
        goto label_2df010;
    }
    ctx->pc = 0x2DF008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF010u);
        ctx->pc = 0x2DF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF008u;
        // 0x2df00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF008u, 0x2DF010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF010u;
label_2df010:
    // 0x2df010: 0x100002ff  b           . + 4 + (0x2FF << 2)
label_2df014:
    if (ctx->pc == 0x2DF014u) {
        ctx->pc = 0x2DF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF010u;
        // 0x2df014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF018u;
        goto label_2df018;
    }
    ctx->pc = 0x2DF010u;
    {
        const bool branch_taken_0x2df010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF010u;
        // 0x2df014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df010) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF018u;
label_2df018:
    // 0x2df018: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x2df018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_2df01c:
    // 0x2df01c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2df01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2df020:
    // 0x2df020: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2df020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2df024:
    // 0x2df024: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2df024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2df028:
    // 0x2df028: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2df028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2df02c:
    // 0x2df02c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2df030:
    if (ctx->pc == 0x2DF030u) {
        ctx->pc = 0x2DF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF02Cu;
        // 0x2df030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF034u;
        goto label_2df034;
    }
    ctx->pc = 0x2DF02Cu;
    {
        const bool branch_taken_0x2df02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF02Cu;
        // 0x2df030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df02c) {
            ctx->pc = 0x2DF04Cu;
            goto label_2df04c;
        }
    }
    ctx->pc = 0x2DF034u;
label_2df034:
    // 0x2df034: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2df034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2df038:
    // 0x2df038: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2df03c:
    if (ctx->pc == 0x2DF03Cu) {
        ctx->pc = 0x2DF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF038u;
        // 0x2df03c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF040u;
        goto label_2df040;
    }
    ctx->pc = 0x2DF038u;
    {
        const bool branch_taken_0x2df038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF038u;
        // 0x2df03c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df038) {
            ctx->pc = 0x2DF048u;
            goto label_2df048;
        }
    }
    ctx->pc = 0x2DF040u;
label_2df040:
    // 0x2df040: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2df044:
    if (ctx->pc == 0x2DF044u) {
        ctx->pc = 0x2DF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF040u;
        // 0x2df044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF048u;
        goto label_2df048;
    }
    ctx->pc = 0x2DF040u;
    {
        const bool branch_taken_0x2df040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF040u;
        // 0x2df044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df040) {
            ctx->pc = 0x2DF04Cu;
            goto label_2df04c;
        }
    }
    ctx->pc = 0x2DF048u;
label_2df048:
    // 0x2df048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df04c:
    // 0x2df04c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2df04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2df050:
    // 0x2df050: 0x144001b8  bnez        $v0, . + 4 + (0x1B8 << 2)
label_2df054:
    if (ctx->pc == 0x2DF054u) {
        ctx->pc = 0x2DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF050u;
        // 0x2df054: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF058u;
        goto label_2df058;
    }
    ctx->pc = 0x2DF050u;
    {
        const bool branch_taken_0x2df050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF050u;
        // 0x2df054: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df050) {
            ctx->pc = 0x2DF734u;
            goto label_2df734;
        }
    }
    ctx->pc = 0x2DF058u;
label_2df058:
    // 0x2df058: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2df058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2df05c:
    // 0x2df05c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2df05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2df060:
    // 0x2df060: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2df060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2df064:
    // 0x2df064: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2df064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2df068:
    // 0x2df068: 0x8c93010c  lw          $s3, 0x10C($a0)
    ctx->pc = 0x2df068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_2df06c:
    // 0x2df06c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2df06cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2df070:
    // 0x2df070: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df074:
    // 0x2df074: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df078:
    // 0x2df078: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2df078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df07c:
    // 0x2df07c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2df07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2df080:
    // 0x2df080: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2df080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2df084:
    // 0x2df084: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2df084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df088:
    // 0x2df088: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df08c:
    // 0x2df08c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df08cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df090:
    // 0x2df090: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df094:
    // 0x2df094: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df098:
    // 0x2df098: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df09c:
    // 0x2df09c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df09cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df0a0:
    // 0x2df0a0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df0a4:
    // 0x2df0a4: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2df0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df0a8:
    // 0x2df0a8: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x2df0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2df0ac:
    // 0x2df0ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2df0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2df0b0:
    // 0x2df0b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df0b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df0b4:
    // 0x2df0b4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df0b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df0b8:
    // 0x2df0b8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df0b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df0bc:
    // 0x2df0bc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df0bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df0c0:
    // 0x2df0c0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df0c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df0c4:
    // 0x2df0c4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df0c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df0c8:
    // 0x2df0c8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df0c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df0cc:
    // 0x2df0cc: 0xfba50120  sqc2        $vf5, 0x120($sp)
    ctx->pc = 0x2df0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df0d0:
    // 0x2df0d0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2df0d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2df0d4:
    // 0x2df0d4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df0d8:
    // 0x2df0d8: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x2df0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2df0dc:
    // 0x2df0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2df0e0:
    // 0x2df0e0: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_2df0e4:
    if (ctx->pc == 0x2DF0E4u) {
        ctx->pc = 0x2DF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0E0u;
        // 0x2df0e4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0E8u;
        goto label_2df0e8;
    }
    ctx->pc = 0x2DF0E0u;
    {
        const bool branch_taken_0x2df0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0E0u;
        // 0x2df0e4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0e0) {
            ctx->pc = 0x2DF0FCu;
            goto label_2df0fc;
        }
    }
    ctx->pc = 0x2DF0E8u;
label_2df0e8:
    // 0x2df0e8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2df0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2df0ec:
    // 0x2df0ec: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2df0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2df0f0:
    // 0x2df0f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df0f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df0f4:
    // 0x2df0f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df0f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df0f8:
    // 0x2df0f8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2df0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df0fc:
    // 0x2df0fc: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2df0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2df100:
    // 0x2df100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df104:
    // 0x2df104: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2df104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df108:
    // 0x2df108: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2df108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df10c:
    // 0x2df10c: 0xc0b7808  jal         func_2DE020
label_2df110:
    if (ctx->pc == 0x2DF110u) {
        ctx->pc = 0x2DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF10Cu;
        // 0x2df110: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF114u;
        goto label_2df114;
    }
    ctx->pc = 0x2DF10Cu;
    SET_GPR_U32(ctx, 31, 0x2DF114u);
    ctx->pc = 0x2DF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF10Cu;
    // 0x2df110: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE020u, 0x2DF10Cu, 0x2DF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF114u;
label_2df114:
    // 0x2df114: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2df118:
    // 0x2df118: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2df118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df11c:
    // 0x2df11c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2df11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df120:
    // 0x2df120: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2df124:
    // 0x2df124: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2df124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2df128:
    // 0x2df128: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2df128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2df12c:
    // 0x2df12c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2df12cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df130:
    // 0x2df130: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df134:
    // 0x2df134: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2df134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df138:
    // 0x2df138: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2df138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df13c:
    // 0x2df13c: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x2df13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df140:
    // 0x2df140: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df140u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df144:
    // 0x2df144: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2df144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df148:
    // 0x2df148: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2df148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df14c:
    // 0x2df14c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df14cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df150:
    // 0x2df150: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2df150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df154:
    // 0x2df154: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x2df154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df158:
    // 0x2df158: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2df158u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df15c:
    // 0x2df15c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2df15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df160:
    // 0x2df160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df164:
    // 0x2df164: 0x14710057  bne         $v1, $s1, . + 4 + (0x57 << 2)
label_2df168:
    if (ctx->pc == 0x2DF168u) {
        ctx->pc = 0x2DF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF164u;
        // 0x2df168: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF16Cu;
        goto label_2df16c;
    }
    ctx->pc = 0x2DF164u;
    {
        const bool branch_taken_0x2df164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF164u;
        // 0x2df168: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df164) {
            ctx->pc = 0x2DF2C4u;
            goto label_2df2c4;
        }
    }
    ctx->pc = 0x2DF16Cu;
label_2df16c:
    // 0x2df16c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2df16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df170:
    // 0x2df170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df174:
    // 0x2df174: 0x14640053  bne         $v1, $a0, . + 4 + (0x53 << 2)
label_2df178:
    if (ctx->pc == 0x2DF178u) {
        ctx->pc = 0x2DF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF174u;
        // 0x2df178: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF17Cu;
        goto label_2df17c;
    }
    ctx->pc = 0x2DF174u;
    {
        const bool branch_taken_0x2df174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF174u;
        // 0x2df178: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df174) {
            ctx->pc = 0x2DF2C4u;
            goto label_2df2c4;
        }
    }
    ctx->pc = 0x2DF17Cu;
label_2df17c:
    // 0x2df17c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2df17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df180:
    // 0x2df180: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x2df180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df184:
    // 0x2df184: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df184u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df188:
    // 0x2df188: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2df188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df18c:
    // 0x2df18c: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2df18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df190:
    // 0x2df190: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df190u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df194:
    // 0x2df194: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2df194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df198:
    // 0x2df198: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x2df198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df19c:
    // 0x2df19c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2df19cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df1a0:
    // 0x2df1a0: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x2df1a0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
label_2df1a4:
    // 0x2df1a4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2df1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df1a8:
    // 0x2df1a8: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x2df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df1ac:
    // 0x2df1ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df1acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df1b0:
    // 0x2df1b0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2df1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df1b4:
    // 0x2df1b4: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2df1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df1b8:
    // 0x2df1b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df1b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df1bc:
    // 0x2df1bc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2df1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df1c0:
    // 0x2df1c0: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x2df1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df1c4:
    // 0x2df1c4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2df1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df1c8:
    // 0x2df1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2df1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2df1cc:
    // 0x2df1cc: 0x0  nop
    ctx->pc = 0x2df1ccu;
    // NOP
label_2df1d0:
    // 0x2df1d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2df1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df1d4:
    // 0x2df1d4: 0x0  nop
    ctx->pc = 0x2df1d4u;
    // NOP
label_2df1d8:
    // 0x2df1d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2df1dc:
    if (ctx->pc == 0x2DF1DCu) {
        ctx->pc = 0x2DF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1D8u;
        // 0x2df1dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1E0u;
        goto label_2df1e0;
    }
    ctx->pc = 0x2DF1D8u;
    {
        const bool branch_taken_0x2df1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1D8u;
        // 0x2df1dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1d8) {
            ctx->pc = 0x2DF1F8u;
            goto label_2df1f8;
        }
    }
    ctx->pc = 0x2DF1E0u;
label_2df1e0:
    // 0x2df1e0: 0xc440b684  lwc1        $f0, -0x497C($v0)
    ctx->pc = 0x2df1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df1e4:
    // 0x2df1e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2df1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2df1e8:
    // 0x2df1e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2df1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df1ec:
    // 0x2df1ec: 0x0  nop
    ctx->pc = 0x2df1ecu;
    // NOP
label_2df1f0:
    // 0x2df1f0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2df1f4:
    if (ctx->pc == 0x2DF1F4u) {
        ctx->pc = 0x2DF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1F0u;
        // 0x2df1f4: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1F8u;
        goto label_2df1f8;
    }
    ctx->pc = 0x2DF1F0u;
    {
        const bool branch_taken_0x2df1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df1f0) {
            ctx->pc = 0x2DF1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF1F0u;
            // 0x2df1f4: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF214u;
            goto label_2df214;
        }
    }
    ctx->pc = 0x2DF1F8u;
label_2df1f8:
    // 0x2df1f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2df1fc:
    // 0x2df1fc: 0xc440b688  lwc1        $f0, -0x4978($v0)
    ctx->pc = 0x2df1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df200:
    // 0x2df200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2df200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df204:
    // 0x2df204: 0x0  nop
    ctx->pc = 0x2df204u;
    // NOP
label_2df208:
    // 0x2df208: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
label_2df20c:
    if (ctx->pc == 0x2DF20Cu) {
        ctx->pc = 0x2DF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF208u;
        // 0x2df20c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF210u;
        goto label_2df210;
    }
    ctx->pc = 0x2DF208u;
    {
        const bool branch_taken_0x2df208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df208) {
            ctx->pc = 0x2DF20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF208u;
            // 0x2df20c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF340u;
            goto label_2df340;
        }
    }
    ctx->pc = 0x2DF210u;
label_2df210:
    // 0x2df210: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2df210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2df214:
    // 0x2df214: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2df214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df218:
    // 0x2df218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df21c:
    // 0x2df21c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2df21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2df220:
    // 0x2df220: 0x40f809  jalr        $v0
label_2df224:
    if (ctx->pc == 0x2DF224u) {
        ctx->pc = 0x2DF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF220u;
        // 0x2df224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF228u;
        goto label_2df228;
    }
    ctx->pc = 0x2DF220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF228u);
        ctx->pc = 0x2DF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF220u;
        // 0x2df224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF220u, 0x2DF228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF228u;
label_2df228:
    // 0x2df228: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2df22c:
    // 0x2df22c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2df230:
    // 0x2df230: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x2df230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df234:
    // 0x2df234: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x2df234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2df238:
    // 0x2df238: 0x0  nop
    ctx->pc = 0x2df238u;
    // NOP
label_2df23c:
    // 0x2df23c: 0x0  nop
    ctx->pc = 0x2df23cu;
    // NOP
label_2df240:
    // 0x2df240: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2df240u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2df244:
    // 0x2df244: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2df244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2df248:
    // 0x2df248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2df24c:
    // 0x2df24c: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x2df24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2df250:
    // 0x2df250: 0x38a2020f  xori        $v0, $a1, 0x20F
    ctx->pc = 0x2df250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)527);
label_2df254:
    // 0x2df254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2df258:
    if (ctx->pc == 0x2DF258u) {
        ctx->pc = 0x2DF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF254u;
        // 0x2df258: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF25Cu;
        goto label_2df25c;
    }
    ctx->pc = 0x2DF254u;
    {
        const bool branch_taken_0x2df254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF254u;
        // 0x2df258: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df254) {
            ctx->pc = 0x2DF260u;
            goto label_2df260;
        }
    }
    ctx->pc = 0x2DF25Cu;
label_2df25c:
    // 0x2df25c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2df260:
    // 0x2df260: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2df260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df264:
    // 0x2df264: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2df268:
    // 0x2df268: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2df268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2df26c:
    // 0x2df26c: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x2df26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_2df270:
    // 0x2df270: 0x10830266  beq         $a0, $v1, . + 4 + (0x266 << 2)
label_2df274:
    if (ctx->pc == 0x2DF274u) {
        ctx->pc = 0x2DF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF270u;
        // 0x2df274: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF278u;
        goto label_2df278;
    }
    ctx->pc = 0x2DF270u;
    {
        const bool branch_taken_0x2df270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF270u;
        // 0x2df274: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df270) {
            ctx->pc = 0x2DFC0Cu;
            goto label_2dfc0c;
        }
    }
    ctx->pc = 0x2DF278u;
label_2df278:
    // 0x2df278: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2df278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2df27c:
    // 0x2df27c: 0xc440b68c  lwc1        $f0, -0x4974($v0)
    ctx->pc = 0x2df27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df280:
    // 0x2df280: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2df280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df284:
    // 0x2df284: 0x0  nop
    ctx->pc = 0x2df284u;
    // NOP
label_2df288:
    // 0x2df288: 0x45000260  bc1f        . + 4 + (0x260 << 2)
label_2df28c:
    if (ctx->pc == 0x2DF28Cu) {
        ctx->pc = 0x2DF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF288u;
        // 0x2df28c: 0x30a20007  andi        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF290u;
        goto label_2df290;
    }
    ctx->pc = 0x2DF288u;
    {
        const bool branch_taken_0x2df288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF288u;
        // 0x2df28c: 0x30a20007  andi        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df288) {
            ctx->pc = 0x2DFC0Cu;
            goto label_2dfc0c;
        }
    }
    ctx->pc = 0x2DF290u;
label_2df290:
    // 0x2df290: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2df290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2df294:
    // 0x2df294: 0x1440025e  bnez        $v0, . + 4 + (0x25E << 2)
label_2df298:
    if (ctx->pc == 0x2DF298u) {
        ctx->pc = 0x2DF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF294u;
        // 0x2df298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF29Cu;
        goto label_2df29c;
    }
    ctx->pc = 0x2DF294u;
    {
        const bool branch_taken_0x2df294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF294u;
        // 0x2df298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df294) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF29Cu;
label_2df29c:
    // 0x2df29c: 0xc0dde53  jal         func_37794C
label_2df2a0:
    if (ctx->pc == 0x2DF2A0u) {
        ctx->pc = 0x2DF2A4u;
        goto label_2df2a4;
    }
    ctx->pc = 0x2DF29Cu;
    SET_GPR_U32(ctx, 31, 0x2DF2A4u);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2DF29Cu, 0x2DF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2A4u;
label_2df2a4:
    // 0x2df2a4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2df2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2df2a8:
    // 0x2df2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df2ac:
    // 0x2df2ac: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2df2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2df2b0:
    // 0x2df2b0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2df2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2df2b4:
    // 0x2df2b4: 0xc08b180  jal         func_22C600
label_2df2b8:
    if (ctx->pc == 0x2DF2B8u) {
        ctx->pc = 0x2DF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2B4u;
        // 0x2df2b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2BCu;
        goto label_2df2bc;
    }
    ctx->pc = 0x2DF2B4u;
    SET_GPR_U32(ctx, 31, 0x2DF2BCu);
    ctx->pc = 0x2DF2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2B4u;
    // 0x2df2b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x2DF2B4u, 0x2DF2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2BCu;
label_2df2bc:
    // 0x2df2bc: 0x10000254  b           . + 4 + (0x254 << 2)
label_2df2c0:
    if (ctx->pc == 0x2DF2C0u) {
        ctx->pc = 0x2DF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2BCu;
        // 0x2df2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2C4u;
        goto label_2df2c4;
    }
    ctx->pc = 0x2DF2BCu;
    {
        const bool branch_taken_0x2df2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2BCu;
        // 0x2df2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2bc) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF2C4u;
label_2df2c4:
    // 0x2df2c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2df2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2df2c8:
    // 0x2df2c8: 0x0  nop
    ctx->pc = 0x2df2c8u;
    // NOP
label_2df2cc:
    // 0x2df2cc: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2df2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df2d0:
    // 0x2df2d0: 0x0  nop
    ctx->pc = 0x2df2d0u;
    // NOP
label_2df2d4:
    // 0x2df2d4: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_2df2d8:
    if (ctx->pc == 0x2DF2D8u) {
        ctx->pc = 0x2DF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2D4u;
        // 0x2df2d8: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2DCu;
        goto label_2df2dc;
    }
    ctx->pc = 0x2DF2D4u;
    {
        const bool branch_taken_0x2df2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df2d4) {
            ctx->pc = 0x2DF2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2D4u;
            // 0x2df2d8: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF340u;
            goto label_2df340;
        }
    }
    ctx->pc = 0x2DF2DCu;
label_2df2dc:
    // 0x2df2dc: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
label_2df2e0:
    if (ctx->pc == 0x2DF2E0u) {
        ctx->pc = 0x2DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2DCu;
        // 0x2df2e0: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF2E4u;
        goto label_2df2e4;
    }
    ctx->pc = 0x2DF2DCu;
    {
        const bool branch_taken_0x2df2dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2DCu;
        // 0x2df2e0: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2dc) {
            ctx->pc = 0x2DF320u;
            goto label_2df320;
        }
    }
    ctx->pc = 0x2DF2E4u;
label_2df2e4:
    // 0x2df2e4: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x2df2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df2e8:
    // 0x2df2e8: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2df2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df2ec:
    // 0x2df2ec: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2df2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df2f0:
    // 0x2df2f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2df2f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2df2f4:
    // 0x2df2f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2df2f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2df2f8:
    // 0x2df2f8: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x2df2f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_2df2fc:
    // 0x2df2fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2df2fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2df300:
    // 0x2df300: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x2df300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2df304:
    // 0x2df304: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2df304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2df308:
    // 0x2df308: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x2df308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_2df30c:
    // 0x2df30c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2df30cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df310:
    // 0x2df310: 0xfaa10010  sqc2        $vf1, 0x10($s5)
    ctx->pc = 0x2df310u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df314:
    // 0x2df314: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2df318:
    // 0x2df318: 0x10000175  b           . + 4 + (0x175 << 2)
label_2df31c:
    if (ctx->pc == 0x2DF31Cu) {
        ctx->pc = 0x2DF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF318u;
        // 0x2df31c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF320u;
        goto label_2df320;
    }
    ctx->pc = 0x2DF318u;
    {
        const bool branch_taken_0x2df318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF318u;
        // 0x2df31c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df318) {
            ctx->pc = 0x2DF8F0u;
            goto label_2df8f0;
        }
    }
    ctx->pc = 0x2DF320u;
label_2df320:
    // 0x2df320: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2df324:
    // 0x2df324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df328:
    // 0x2df328: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2df328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df32c:
    // 0x2df32c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2df32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2df330:
    // 0x2df330: 0x40f809  jalr        $v0
label_2df334:
    if (ctx->pc == 0x2DF334u) {
        ctx->pc = 0x2DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF330u;
        // 0x2df334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF338u;
        goto label_2df338;
    }
    ctx->pc = 0x2DF330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF338u);
        ctx->pc = 0x2DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF330u;
        // 0x2df334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF330u, 0x2DF338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF338u;
label_2df338:
    // 0x2df338: 0x10000235  b           . + 4 + (0x235 << 2)
label_2df33c:
    if (ctx->pc == 0x2DF33Cu) {
        ctx->pc = 0x2DF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF338u;
        // 0x2df33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF340u;
        goto label_2df340;
    }
    ctx->pc = 0x2DF338u;
    {
        const bool branch_taken_0x2df338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF338u;
        // 0x2df33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df338) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF340u;
label_2df340:
    // 0x2df340: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2df340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2df344:
    // 0x2df344: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2df344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df348:
    // 0x2df348: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2df348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2df34c:
    // 0x2df34c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2df34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df350:
    // 0x2df350: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2df350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df354:
    // 0x2df354: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2df358:
    // 0x2df358: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2df35c:
    // 0x2df35c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2df360:
    // 0x2df360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2df364:
    // 0x2df364: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2df368:
    // 0x2df368: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2df368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2df36c:
    // 0x2df36c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2df36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2df370:
    // 0x2df370: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2df370u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2df374:
    // 0x2df374: 0x46002302  mul.s       $f12, $f4, $f0
    ctx->pc = 0x2df374u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2df378:
    // 0x2df378: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2df378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2df37c:
    // 0x2df37c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2df37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df380:
    // 0x2df380: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df380u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df384:
    // 0x2df384: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df384u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df388:
    // 0x2df388: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2df388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df38c:
    // 0x2df38c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2df38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2df390:
    // 0x2df390: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2df394:
    // 0x2df394: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2df394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2df398:
    // 0x2df398: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df39c:
    // 0x2df39c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df39cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df3a0:
    // 0x2df3a0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df3a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df3a4:
    // 0x2df3a4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df3a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df3a8:
    // 0x2df3a8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df3a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df3ac:
    // 0x2df3ac: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df3acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df3b0:
    // 0x2df3b0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df3b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df3b4:
    // 0x2df3b4: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x2df3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df3b8:
    // 0x2df3b8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2df3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2df3bc:
    // 0x2df3bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2df3bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2df3c0:
    // 0x2df3c0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2df3c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2df3c4:
    // 0x2df3c4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df3c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df3c8:
    // 0x2df3c8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df3c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df3cc:
    // 0x2df3cc: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2df3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df3d0:
    // 0x2df3d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2df3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df3d4:
    // 0x2df3d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2df3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df3d8:
    // 0x2df3d8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df3d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df3dc:
    // 0x2df3dc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2df3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df3e0:
    // 0x2df3e0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2df3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df3e4:
    // 0x2df3e4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df3e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df3e8:
    // 0x2df3e8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2df3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df3ec:
    // 0x2df3ec: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2df3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df3f0:
    // 0x2df3f0: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2df3f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df3f4:
    // 0x2df3f4: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x2df3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df3f8:
    // 0x2df3f8: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2df3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df3fc:
    // 0x2df3fc: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x2df3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df400:
    // 0x2df400: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2df400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2df404:
    // 0x2df404: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2df404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2df408:
    // 0x2df408: 0x0  nop
    ctx->pc = 0x2df408u;
    // NOP
label_2df40c:
    // 0x2df40c: 0x46006503  div.s       $f20, $f12, $f0
    ctx->pc = 0x2df40cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_2df410:
    // 0x2df410: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2df410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df414:
    // 0x2df414: 0x0  nop
    ctx->pc = 0x2df414u;
    // NOP
label_2df418:
    // 0x2df418: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2df41c:
    if (ctx->pc == 0x2DF41Cu) {
        ctx->pc = 0x2DF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF418u;
        // 0x2df41c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF420u;
        goto label_2df420;
    }
    ctx->pc = 0x2DF418u;
    {
        const bool branch_taken_0x2df418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df418) {
            ctx->pc = 0x2DF41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF418u;
            // 0x2df41c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF420u;
            goto label_2df420;
        }
    }
    ctx->pc = 0x2DF420u;
label_2df420:
    // 0x2df420: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2df420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df424:
    // 0x2df424: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2df424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df428:
    // 0x2df428: 0x0  nop
    ctx->pc = 0x2df428u;
    // NOP
label_2df42c:
    // 0x2df42c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2df430:
    if (ctx->pc == 0x2DF430u) {
        ctx->pc = 0x2DF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF42Cu;
        // 0x2df430: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF434u;
        goto label_2df434;
    }
    ctx->pc = 0x2DF42Cu;
    {
        const bool branch_taken_0x2df42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df42c) {
            ctx->pc = 0x2DF430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF42Cu;
            // 0x2df430: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF434u;
            goto label_2df434;
        }
    }
    ctx->pc = 0x2DF434u;
label_2df434:
    // 0x2df434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2df434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df438:
    // 0x2df438: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2df438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2df43c:
    // 0x2df43c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2df43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2df440:
    // 0x2df440: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x2df440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_2df444:
    // 0x2df444: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_2df448:
    if (ctx->pc == 0x2DF448u) {
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF444u;
        // 0x2df448: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF44Cu;
        goto label_2df44c;
    }
    ctx->pc = 0x2DF444u;
    {
        const bool branch_taken_0x2df444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF444u;
        // 0x2df448: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df444) {
            ctx->pc = 0x2DF484u;
            goto label_2df484;
        }
    }
    ctx->pc = 0x2DF44Cu;
label_2df44c:
    // 0x2df44c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2df44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2df450:
    // 0x2df450: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2df450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2df454:
    // 0x2df454: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2df454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2df458:
    // 0x2df458: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2df45c:
    if (ctx->pc == 0x2DF45Cu) {
        ctx->pc = 0x2DF460u;
        goto label_2df460;
    }
    ctx->pc = 0x2DF458u;
    {
        const bool branch_taken_0x2df458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df458) {
            ctx->pc = 0x2DF484u;
            goto label_2df484;
        }
    }
    ctx->pc = 0x2DF460u;
label_2df460:
    // 0x2df460: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2df460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2df464:
    // 0x2df464: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2df464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2df468:
    // 0x2df468: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2df468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df46c:
    // 0x2df46c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2df46cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2df470:
    // 0x2df470: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2df470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df474:
    // 0x2df474: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2df474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df478:
    // 0x2df478: 0x7fa00150  sq          $zero, 0x150($sp)
    ctx->pc = 0x2df478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 0));
label_2df47c:
    // 0x2df47c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2df480:
    if (ctx->pc == 0x2DF480u) {
        ctx->pc = 0x2DF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF47Cu;
        // 0x2df480: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF484u;
        goto label_2df484;
    }
    ctx->pc = 0x2DF47Cu;
    {
        const bool branch_taken_0x2df47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF47Cu;
        // 0x2df480: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df47c) {
            ctx->pc = 0x2DF4B4u;
            goto label_2df4b4;
        }
    }
    ctx->pc = 0x2DF484u;
label_2df484:
    // 0x2df484: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2df484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2df488:
    // 0x2df488: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2df488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df48c:
    // 0x2df48c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2df48cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2df490:
    // 0x2df490: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2df490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df494:
    // 0x2df494: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2df494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df498:
    // 0x2df498: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2df498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2df49c:
    // 0x2df49c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2df49cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2df4a0:
    // 0x2df4a0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2df4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2df4a4:
    // 0x2df4a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2df4a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2df4a8:
    // 0x2df4a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2df4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df4ac:
    // 0x2df4ac: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2df4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df4b0:
    // 0x2df4b0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2df4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df4b4:
    // 0x2df4b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2df4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2df4b8:
    // 0x2df4b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df4bc:
    // 0x2df4bc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_2df4c0:
    if (ctx->pc == 0x2DF4C0u) {
        ctx->pc = 0x2DF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4BCu;
        // 0x2df4c0: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4C4u;
        goto label_2df4c4;
    }
    ctx->pc = 0x2DF4BCu;
    {
        const bool branch_taken_0x2df4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4BCu;
        // 0x2df4c0: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4bc) {
            ctx->pc = 0x2DF4E0u;
            goto label_2df4e0;
        }
    }
    ctx->pc = 0x2DF4C4u;
label_2df4c4:
    // 0x2df4c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2df4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df4c8:
    // 0x2df4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df4cc:
    // 0x2df4cc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2df4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2df4d0:
    // 0x2df4d0: 0x40f809  jalr        $v0
label_2df4d4:
    if (ctx->pc == 0x2DF4D4u) {
        ctx->pc = 0x2DF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4D0u;
        // 0x2df4d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4D8u;
        goto label_2df4d8;
    }
    ctx->pc = 0x2DF4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF4D8u);
        ctx->pc = 0x2DF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4D0u;
        // 0x2df4d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4D0u, 0x2DF4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF4D8u;
label_2df4d8:
    // 0x2df4d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2df4dc:
    if (ctx->pc == 0x2DF4DCu) {
        ctx->pc = 0x2DF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4D8u;
        // 0x2df4dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4E0u;
        goto label_2df4e0;
    }
    ctx->pc = 0x2DF4D8u;
    {
        const bool branch_taken_0x2df4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4D8u;
        // 0x2df4dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4d8) {
            ctx->pc = 0x2DF4F8u;
            goto label_2df4f8;
        }
    }
    ctx->pc = 0x2DF4E0u;
label_2df4e0:
    // 0x2df4e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2df4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df4e4:
    // 0x2df4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df4e8:
    // 0x2df4e8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2df4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2df4ec:
    // 0x2df4ec: 0x40f809  jalr        $v0
label_2df4f0:
    if (ctx->pc == 0x2DF4F0u) {
        ctx->pc = 0x2DF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ECu;
        // 0x2df4f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4F4u;
        goto label_2df4f4;
    }
    ctx->pc = 0x2DF4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF4F4u);
        ctx->pc = 0x2DF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ECu;
        // 0x2df4f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4ECu, 0x2DF4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF4F4u;
label_2df4f4:
    // 0x2df4f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2df4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df4f8:
    // 0x2df4f8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2df4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2df4fc:
    // 0x2df4fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2df4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2df500:
    // 0x2df500: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x2df500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_2df504:
    // 0x2df504: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_2df508:
    if (ctx->pc == 0x2DF508u) {
        ctx->pc = 0x2DF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF504u;
        // 0x2df508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF50Cu;
        goto label_2df50c;
    }
    ctx->pc = 0x2DF504u;
    {
        const bool branch_taken_0x2df504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF504u;
        // 0x2df508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df504) {
            ctx->pc = 0x2DF524u;
            goto label_2df524;
        }
    }
    ctx->pc = 0x2DF50Cu;
label_2df50c:
    // 0x2df50c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x2df50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2df510:
    // 0x2df510: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2df514:
    // 0x2df514: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2df514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2df518:
    // 0x2df518: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2df518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2df51c:
    // 0x2df51c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2df520:
    if (ctx->pc == 0x2DF520u) {
        ctx->pc = 0x2DF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF51Cu;
        // 0x2df520: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF524u;
        goto label_2df524;
    }
    ctx->pc = 0x2DF51Cu;
    {
        const bool branch_taken_0x2df51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df51c) {
            ctx->pc = 0x2DF520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF51Cu;
            // 0x2df520: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF530u;
            goto label_2df530;
        }
    }
    ctx->pc = 0x2DF524u;
label_2df524:
    // 0x2df524: 0xc0b71e0  jal         func_2DC780
label_2df528:
    if (ctx->pc == 0x2DF528u) {
        ctx->pc = 0x2DF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF524u;
        // 0x2df528: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF52Cu;
        goto label_2df52c;
    }
    ctx->pc = 0x2DF524u;
    SET_GPR_U32(ctx, 31, 0x2DF52Cu);
    ctx->pc = 0x2DF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF524u;
    // 0x2df528: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DF524u, 0x2DF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF52Cu;
label_2df52c:
    // 0x2df52c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2df52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df530:
    // 0x2df530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2df534:
    // 0x2df534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df538:
    // 0x2df538: 0x50640028  beql        $v1, $a0, . + 4 + (0x28 << 2)
label_2df53c:
    if (ctx->pc == 0x2DF53Cu) {
        ctx->pc = 0x2DF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF538u;
        // 0x2df53c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF540u;
        goto label_2df540;
    }
    ctx->pc = 0x2DF538u;
    {
        const bool branch_taken_0x2df538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2df538) {
            ctx->pc = 0x2DF53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF538u;
            // 0x2df53c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF5DCu;
            goto label_2df5dc;
        }
    }
    ctx->pc = 0x2DF540u;
label_2df540:
    // 0x2df540: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df544:
    // 0x2df544: 0x90620114  lbu         $v0, 0x114($v1)
    ctx->pc = 0x2df544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_2df548:
    // 0x2df548: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2df54c:
    if (ctx->pc == 0x2DF54Cu) {
        ctx->pc = 0x2DF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF548u;
        // 0x2df54c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF550u;
        goto label_2df550;
    }
    ctx->pc = 0x2DF548u;
    {
        const bool branch_taken_0x2df548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df548) {
            ctx->pc = 0x2DF54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF548u;
            // 0x2df54c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF5DCu;
            goto label_2df5dc;
        }
    }
    ctx->pc = 0x2DF550u;
label_2df550:
    // 0x2df550: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_2df554:
    // 0x2df554: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2df554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2df558:
    // 0x2df558: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2df55c:
    if (ctx->pc == 0x2DF55Cu) {
        ctx->pc = 0x2DF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF558u;
        // 0x2df55c: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF560u;
        goto label_2df560;
    }
    ctx->pc = 0x2DF558u;
    {
        const bool branch_taken_0x2df558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF558u;
        // 0x2df55c: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df558) {
            ctx->pc = 0x2DF5A0u;
            goto label_2df5a0;
        }
    }
    ctx->pc = 0x2DF560u;
label_2df560:
    // 0x2df560: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2df560u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2df564:
    // 0x2df564: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2df564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2df568:
    // 0x2df568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2df568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df56c:
    // 0x2df56c: 0xc07a8e4  jal         func_1EA390
label_2df570:
    if (ctx->pc == 0x2DF570u) {
        ctx->pc = 0x2DF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF56Cu;
        // 0x2df570: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF574u;
        goto label_2df574;
    }
    ctx->pc = 0x2DF56Cu;
    SET_GPR_U32(ctx, 31, 0x2DF574u);
    ctx->pc = 0x2DF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF56Cu;
    // 0x2df570: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DF56Cu, 0x2DF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF574u;
label_2df574:
    // 0x2df574: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2df574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df578:
    // 0x2df578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df57c:
    // 0x2df57c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2df580:
    // 0x2df580: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2df580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df584:
    // 0x2df584: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x2df584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2df588:
    // 0x2df588: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2df588u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2df58c:
    // 0x2df58c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2df58cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2df590:
    // 0x2df590: 0xc07f550  jal         func_1FD540
label_2df594:
    if (ctx->pc == 0x2DF594u) {
        ctx->pc = 0x2DF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF590u;
        // 0x2df594: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF598u;
        goto label_2df598;
    }
    ctx->pc = 0x2DF590u;
    SET_GPR_U32(ctx, 31, 0x2DF598u);
    ctx->pc = 0x2DF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF590u;
    // 0x2df594: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DF590u, 0x2DF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF598u;
label_2df598:
    // 0x2df598: 0x10000010  b           . + 4 + (0x10 << 2)
label_2df59c:
    if (ctx->pc == 0x2DF59Cu) {
        ctx->pc = 0x2DF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF598u;
        // 0x2df59c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5A0u;
        goto label_2df5a0;
    }
    ctx->pc = 0x2DF598u;
    {
        const bool branch_taken_0x2df598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF598u;
        // 0x2df59c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df598) {
            ctx->pc = 0x2DF5DCu;
            goto label_2df5dc;
        }
    }
    ctx->pc = 0x2DF5A0u;
label_2df5a0:
    // 0x2df5a0: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2df5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2df5a4:
    // 0x2df5a4: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2df5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2df5a8:
    // 0x2df5a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2df5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df5ac:
    // 0x2df5ac: 0xc07a8e4  jal         func_1EA390
label_2df5b0:
    if (ctx->pc == 0x2DF5B0u) {
        ctx->pc = 0x2DF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5ACu;
        // 0x2df5b0: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5B4u;
        goto label_2df5b4;
    }
    ctx->pc = 0x2DF5ACu;
    SET_GPR_U32(ctx, 31, 0x2DF5B4u);
    ctx->pc = 0x2DF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5ACu;
    // 0x2df5b0: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DF5ACu, 0x2DF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF5B4u;
label_2df5b4:
    // 0x2df5b4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2df5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df5b8:
    // 0x2df5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df5bc:
    // 0x2df5bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2df5c0:
    // 0x2df5c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2df5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df5c4:
    // 0x2df5c4: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2df5c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2df5c8:
    // 0x2df5c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2df5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2df5cc:
    // 0x2df5cc: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2df5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2df5d0:
    // 0x2df5d0: 0xc07f550  jal         func_1FD540
label_2df5d4:
    if (ctx->pc == 0x2DF5D4u) {
        ctx->pc = 0x2DF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D0u;
        // 0x2df5d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5D8u;
        goto label_2df5d8;
    }
    ctx->pc = 0x2DF5D0u;
    SET_GPR_U32(ctx, 31, 0x2DF5D8u);
    ctx->pc = 0x2DF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5D0u;
    // 0x2df5d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DF5D0u, 0x2DF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF5D8u;
label_2df5d8:
    // 0x2df5d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2df5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df5dc:
    // 0x2df5dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2df5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2df5e0:
    // 0x2df5e0: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x2df5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2df5e4:
    // 0x2df5e4: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_2df5e8:
    // 0x2df5e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2df5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2df5ec:
    // 0x2df5ec: 0x14450188  bne         $v0, $a1, . + 4 + (0x188 << 2)
label_2df5f0:
    if (ctx->pc == 0x2DF5F0u) {
        ctx->pc = 0x2DF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5ECu;
        // 0x2df5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5F4u;
        goto label_2df5f4;
    }
    ctx->pc = 0x2DF5ECu;
    {
        const bool branch_taken_0x2df5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5ECu;
        // 0x2df5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5ec) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF5F4u;
label_2df5f4:
    // 0x2df5f4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2df5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df5f8:
    // 0x2df5f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2df5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2df5fc:
    // 0x2df5fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df600:
    // 0x2df600: 0x14640183  bne         $v1, $a0, . + 4 + (0x183 << 2)
label_2df604:
    if (ctx->pc == 0x2DF604u) {
        ctx->pc = 0x2DF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF600u;
        // 0x2df604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF608u;
        goto label_2df608;
    }
    ctx->pc = 0x2DF600u;
    {
        const bool branch_taken_0x2df600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF600u;
        // 0x2df604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df600) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF608u;
label_2df608:
    // 0x2df608: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2df60c:
    // 0x2df60c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2df60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df610:
    // 0x2df610: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x2df610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df614:
    // 0x2df614: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df614u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df618:
    // 0x2df618: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2df618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df61c:
    // 0x2df61c: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x2df61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df620:
    // 0x2df620: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df620u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df624:
    // 0x2df624: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2df624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df628:
    // 0x2df628: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x2df628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df62c:
    // 0x2df62c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2df62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df630:
    // 0x2df630: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2df630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df634:
    // 0x2df634: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2df634u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2df638:
    // 0x2df638: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2df638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2df63c:
    // 0x2df63c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2df63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df640:
    // 0x2df640: 0xc442b690  lwc1        $f2, -0x4970($v0)
    ctx->pc = 0x2df640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df644:
    // 0x2df644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2df644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2df648:
    // 0x2df648: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2df648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df64c:
    // 0x2df64c: 0x0  nop
    ctx->pc = 0x2df64cu;
    // NOP
label_2df650:
    // 0x2df650: 0x4500016e  bc1f        . + 4 + (0x16E << 2)
label_2df654:
    if (ctx->pc == 0x2DF654u) {
        ctx->pc = 0x2DF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF650u;
        // 0x2df654: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF658u;
        goto label_2df658;
    }
    ctx->pc = 0x2DF650u;
    {
        const bool branch_taken_0x2df650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF650u;
        // 0x2df654: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df650) {
            ctx->pc = 0x2DFC0Cu;
            goto label_2dfc0c;
        }
    }
    ctx->pc = 0x2DF658u;
label_2df658:
    // 0x2df658: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_2df65c:
    // 0x2df65c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2df65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2df660:
    // 0x2df660: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2df660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2df664:
    // 0x2df664: 0x1440016a  bnez        $v0, . + 4 + (0x16A << 2)
label_2df668:
    if (ctx->pc == 0x2DF668u) {
        ctx->pc = 0x2DF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF664u;
        // 0x2df668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF66Cu;
        goto label_2df66c;
    }
    ctx->pc = 0x2DF664u;
    {
        const bool branch_taken_0x2df664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF664u;
        // 0x2df668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df664) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF66Cu;
label_2df66c:
    // 0x2df66c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x2df66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_2df670:
    // 0x2df670: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
label_2df674:
    if (ctx->pc == 0x2DF674u) {
        ctx->pc = 0x2DF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF670u;
        // 0x2df674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF678u;
        goto label_2df678;
    }
    ctx->pc = 0x2DF670u;
    {
        const bool branch_taken_0x2df670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF670u;
        // 0x2df674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df670) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF678u;
label_2df678:
    // 0x2df678: 0xc0dde53  jal         func_37794C
label_2df67c:
    if (ctx->pc == 0x2DF67Cu) {
        ctx->pc = 0x2DF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF678u;
        // 0x2df67c: 0x46000305  abs.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF680u;
        goto label_2df680;
    }
    ctx->pc = 0x2DF678u;
    SET_GPR_U32(ctx, 31, 0x2DF680u);
    ctx->pc = 0x2DF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF678u;
    // 0x2df67c: 0x46000305  abs.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ABS_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2DF678u, 0x2DF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF680u;
label_2df680:
    // 0x2df680: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2df680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df684:
    // 0x2df684: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2df684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2df688:
    // 0x2df688: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2df688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2df68c:
    // 0x2df68c: 0x0  nop
    ctx->pc = 0x2df68cu;
    // NOP
label_2df690:
    // 0x2df690: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2df690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df694:
    // 0x2df694: 0x0  nop
    ctx->pc = 0x2df694u;
    // NOP
label_2df698:
    // 0x2df698: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2df69c:
    if (ctx->pc == 0x2DF69Cu) {
        ctx->pc = 0x2DF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF698u;
        // 0x2df69c: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF6A0u;
        goto label_2df6a0;
    }
    ctx->pc = 0x2DF698u;
    {
        const bool branch_taken_0x2df698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF698u;
        // 0x2df69c: 0x8fa40180  lw          $a0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df698) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DF6A0u;
label_2df6a0:
    // 0x2df6a0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2df6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df6a4:
    // 0x2df6a4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2df6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df6a8:
    // 0x2df6a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2df6a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2df6ac:
    // 0x2df6ac: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x2df6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_2df6b0:
    // 0x2df6b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2df6b4:
    // 0x2df6b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2df6b8:
    // 0x2df6b8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2df6b8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_2df6bc:
    // 0x2df6bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2df6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2df6c0:
    // 0x2df6c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2df6c4:
    // 0x2df6c4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2df6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df6c8:
    // 0x2df6c8: 0x0  nop
    ctx->pc = 0x2df6c8u;
    // NOP
label_2df6cc:
    // 0x2df6cc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2df6d0:
    if (ctx->pc == 0x2DF6D0u) {
        ctx->pc = 0x2DF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6CCu;
        // 0x2df6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF6D4u;
        goto label_2df6d4;
    }
    ctx->pc = 0x2DF6CCu;
    {
        const bool branch_taken_0x2df6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6CCu;
        // 0x2df6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6cc) {
            ctx->pc = 0x2DF71Cu;
            goto label_2df71c;
        }
    }
    ctx->pc = 0x2DF6D4u;
label_2df6d4:
    // 0x2df6d4: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x2df6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df6d8:
    // 0x2df6d8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2df6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2df6dc:
    // 0x2df6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2df6e0:
    // 0x2df6e0: 0x0  nop
    ctx->pc = 0x2df6e0u;
    // NOP
label_2df6e4:
    // 0x2df6e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df6e8:
    // 0x2df6e8: 0x0  nop
    ctx->pc = 0x2df6e8u;
    // NOP
label_2df6ec:
    // 0x2df6ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2df6f0:
    if (ctx->pc == 0x2DF6F0u) {
        ctx->pc = 0x2DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6ECu;
        // 0x2df6f0: 0x27a70160  addiu       $a3, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF6F4u;
        goto label_2df6f4;
    }
    ctx->pc = 0x2DF6ECu;
    {
        const bool branch_taken_0x2df6ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6ECu;
        // 0x2df6f0: 0x27a70160  addiu       $a3, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6ec) {
            ctx->pc = 0x2DF720u;
            goto label_2df720;
        }
    }
    ctx->pc = 0x2DF6F4u;
label_2df6f4:
    // 0x2df6f4: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2df6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2df6f8:
    // 0x2df6f8: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2df6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_2df6fc:
    // 0x2df6fc: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2df6fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2df700:
    // 0x2df700: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x2df700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_2df704:
    // 0x2df704: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x2df704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_2df708:
    // 0x2df708: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2df708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df70c:
    // 0x2df70c: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2df70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df710:
    // 0x2df710: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2df710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2df714:
    // 0x2df714: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2df718:
    // 0x2df718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df71c:
    // 0x2df71c: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2df720:
    // 0x2df720: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2df720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2df724:
    // 0x2df724: 0xc08b180  jal         func_22C600
label_2df728:
    if (ctx->pc == 0x2DF728u) {
        ctx->pc = 0x2DF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF724u;
        // 0x2df728: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF72Cu;
        goto label_2df72c;
    }
    ctx->pc = 0x2DF724u;
    SET_GPR_U32(ctx, 31, 0x2DF72Cu);
    ctx->pc = 0x2DF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF724u;
    // 0x2df728: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x2DF724u, 0x2DF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF72Cu;
label_2df72c:
    // 0x2df72c: 0x10000138  b           . + 4 + (0x138 << 2)
label_2df730:
    if (ctx->pc == 0x2DF730u) {
        ctx->pc = 0x2DF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF72Cu;
        // 0x2df730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF734u;
        goto label_2df734;
    }
    ctx->pc = 0x2DF72Cu;
    {
        const bool branch_taken_0x2df72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF72Cu;
        // 0x2df730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df72c) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF734u;
label_2df734:
    // 0x2df734: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2df734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2df738:
    // 0x2df738: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2df738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2df73c:
    // 0x2df73c: 0x8c93010c  lw          $s3, 0x10C($a0)
    ctx->pc = 0x2df73cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_2df740:
    // 0x2df740: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2df740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2df744:
    // 0x2df744: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2df744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2df748:
    // 0x2df748: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2df748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2df74c:
    // 0x2df74c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2df74cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2df750:
    // 0x2df750: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df750u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df754:
    // 0x2df754: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2df754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df758:
    // 0x2df758: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2df758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2df75c:
    // 0x2df75c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2df75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2df760:
    // 0x2df760: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2df760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2df764:
    // 0x2df764: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2df764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2df768:
    // 0x2df768: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df76c:
    // 0x2df76c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df770:
    // 0x2df770: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2df770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df774:
    // 0x2df774: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x2df774u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2df778:
    // 0x2df778: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2df778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2df77c:
    // 0x2df77c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2df77cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df780:
    // 0x2df780: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df784:
    // 0x2df784: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df784u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df788:
    // 0x2df788: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df78c:
    // 0x2df78c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df78cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df790:
    // 0x2df790: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df794:
    // 0x2df794: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df798:
    // 0x2df798: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df79c:
    // 0x2df79c: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2df79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df7a0:
    // 0x2df7a0: 0x27b70120  addiu       $s7, $sp, 0x120
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2df7a4:
    // 0x2df7a4: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x2df7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2df7a8:
    // 0x2df7a8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2df7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2df7ac:
    // 0x2df7ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df7acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df7b0:
    // 0x2df7b0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df7b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df7b4:
    // 0x2df7b4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df7b8:
    // 0x2df7b8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df7bc:
    // 0x2df7bc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df7c0:
    // 0x2df7c0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df7c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df7c4:
    // 0x2df7c4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df7c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df7c8:
    // 0x2df7c8: 0xfba50120  sqc2        $vf5, 0x120($sp)
    ctx->pc = 0x2df7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df7cc:
    // 0x2df7cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2df7d0:
    // 0x2df7d0: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2df7d4:
    // 0x2df7d4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2df7d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2df7d8:
    // 0x2df7d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df7d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df7dc:
    // 0x2df7dc: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df7dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df7e0:
    // 0x2df7e0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df7e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df7e4:
    // 0x2df7e4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df7e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df7e8:
    // 0x2df7e8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df7ec:
    // 0x2df7ec: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df7ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df7f0:
    // 0x2df7f0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df7f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df7f4:
    // 0x2df7f4: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x2df7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df7f8:
    // 0x2df7f8: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2df7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2df7fc:
    // 0x2df7fc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2df7fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2df800:
    // 0x2df800: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df804:
    // 0x2df804: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df804u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df808:
    // 0x2df808: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df80c:
    // 0x2df80c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df80cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df810:
    // 0x2df810: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df814:
    // 0x2df814: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df818:
    // 0x2df818: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df81c:
    // 0x2df81c: 0xfba50130  sqc2        $vf5, 0x130($sp)
    ctx->pc = 0x2df81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df820:
    // 0x2df820: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2df820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df824:
    // 0x2df824: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2df828:
    // 0x2df828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2df82c:
    // 0x2df82c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_2df830:
    if (ctx->pc == 0x2DF830u) {
        ctx->pc = 0x2DF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF82Cu;
        // 0x2df830: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF834u;
        goto label_2df834;
    }
    ctx->pc = 0x2DF82Cu;
    {
        const bool branch_taken_0x2df82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF82Cu;
        // 0x2df830: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df82c) {
            ctx->pc = 0x2DF848u;
            goto label_2df848;
        }
    }
    ctx->pc = 0x2DF834u;
label_2df834:
    // 0x2df834: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2df834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2df838:
    // 0x2df838: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2df838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2df83c:
    // 0x2df83c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df83cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df840:
    // 0x2df840: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df844:
    // 0x2df844: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2df844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df848:
    // 0x2df848: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2df848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df84c:
    // 0x2df84c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2df84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2df850:
    // 0x2df850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2df854:
    // 0x2df854: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_2df858:
    if (ctx->pc == 0x2DF858u) {
        ctx->pc = 0x2DF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF854u;
        // 0x2df858: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF85Cu;
        goto label_2df85c;
    }
    ctx->pc = 0x2DF854u;
    {
        const bool branch_taken_0x2df854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF854u;
        // 0x2df858: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df854) {
            ctx->pc = 0x2DF86Cu;
            goto label_2df86c;
        }
    }
    ctx->pc = 0x2DF85Cu;
label_2df85c:
    // 0x2df85c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2df85cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2df860:
    // 0x2df860: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df864:
    // 0x2df864: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df868:
    // 0x2df868: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2df868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df86c:
    // 0x2df86c: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2df86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2df870:
    // 0x2df870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df874:
    // 0x2df874: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2df874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2df878:
    // 0x2df878: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2df878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df87c:
    // 0x2df87c: 0xc0b7808  jal         func_2DE020
label_2df880:
    if (ctx->pc == 0x2DF880u) {
        ctx->pc = 0x2DF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF87Cu;
        // 0x2df880: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF884u;
        goto label_2df884;
    }
    ctx->pc = 0x2DF87Cu;
    SET_GPR_U32(ctx, 31, 0x2DF884u);
    ctx->pc = 0x2DF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF87Cu;
    // 0x2df880: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE020u, 0x2DF87Cu, 0x2DF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF884u;
label_2df884:
    // 0x2df884: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2df884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2df888:
    // 0x2df888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df88c:
    // 0x2df88c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2df88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2df890:
    // 0x2df890: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2df890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df894:
    // 0x2df894: 0xc0b7808  jal         func_2DE020
label_2df898:
    if (ctx->pc == 0x2DF898u) {
        ctx->pc = 0x2DF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF894u;
        // 0x2df898: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF89Cu;
        goto label_2df89c;
    }
    ctx->pc = 0x2DF894u;
    SET_GPR_U32(ctx, 31, 0x2DF89Cu);
    ctx->pc = 0x2DF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF894u;
    // 0x2df898: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE020u, 0x2DF894u, 0x2DF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF89Cu;
label_2df89c:
    // 0x2df89c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2df89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2df8a0:
    // 0x2df8a0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2df8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2df8a4:
    // 0x2df8a4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2df8a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2df8a8:
    // 0x2df8a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2df8a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df8ac:
    // 0x2df8ac: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2df8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df8b0:
    // 0x2df8b0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2df8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df8b4:
    // 0x2df8b4: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x2df8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df8b8:
    // 0x2df8b8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2df8b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df8bc:
    // 0x2df8bc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2df8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df8c0:
    // 0x2df8c0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2df8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df8c4:
    // 0x2df8c4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2df8c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2df8c8:
    // 0x2df8c8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2df8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2df8cc:
    // 0x2df8cc: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x2df8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2df8d0:
    // 0x2df8d0: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x2df8d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2df8d4:
    // 0x2df8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2df8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2df8d8:
    // 0x2df8d8: 0x0  nop
    ctx->pc = 0x2df8d8u;
    // NOP
label_2df8dc:
    // 0x2df8dc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2df8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df8e0:
    // 0x2df8e0: 0x0  nop
    ctx->pc = 0x2df8e0u;
    // NOP
label_2df8e4:
    // 0x2df8e4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2df8e8:
    if (ctx->pc == 0x2DF8E8u) {
        ctx->pc = 0x2DF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8E4u;
        // 0x2df8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF8ECu;
        goto label_2df8ec;
    }
    ctx->pc = 0x2DF8E4u;
    {
        const bool branch_taken_0x2df8e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8E4u;
        // 0x2df8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8e4) {
            ctx->pc = 0x2DF90Cu;
            goto label_2df90c;
        }
    }
    ctx->pc = 0x2DF8ECu;
label_2df8ec:
    // 0x2df8ec: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2df8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2df8f0:
    // 0x2df8f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2df8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df8f4:
    // 0x2df8f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df8f8:
    // 0x2df8f8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2df8fc:
    // 0x2df8fc: 0x40f809  jalr        $v0
label_2df900:
    if (ctx->pc == 0x2DF900u) {
        ctx->pc = 0x2DF904u;
        goto label_2df904;
    }
    ctx->pc = 0x2DF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF904u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF8FCu, 0x2DF904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF904u;
label_2df904:
    // 0x2df904: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_2df908:
    if (ctx->pc == 0x2DF908u) {
        ctx->pc = 0x2DF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF904u;
        // 0x2df908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF90Cu;
        goto label_2df90c;
    }
    ctx->pc = 0x2DF904u;
    {
        const bool branch_taken_0x2df904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF904u;
        // 0x2df908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df904) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DF90Cu;
label_2df90c:
    // 0x2df90c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2df90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2df910:
    // 0x2df910: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2df910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2df914:
    // 0x2df914: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2df914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2df918:
    // 0x2df918: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2df918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df91c:
    // 0x2df91c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2df91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df920:
    // 0x2df920: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2df924:
    // 0x2df924: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2df928:
    // 0x2df928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2df92c:
    // 0x2df92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2df930:
    // 0x2df930: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2df934:
    // 0x2df934: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2df934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2df938:
    // 0x2df938: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2df938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2df93c:
    // 0x2df93c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2df93cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2df940:
    // 0x2df940: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2df940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2df944:
    // 0x2df944: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2df944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2df948:
    // 0x2df948: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2df948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2df94c:
    // 0x2df94c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df94cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df950:
    // 0x2df950: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df950u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df954:
    // 0x2df954: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2df954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df958:
    // 0x2df958: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2df95c:
    // 0x2df95c: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2df95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2df960:
    // 0x2df960: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2df960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2df964:
    // 0x2df964: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df968:
    // 0x2df968: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df968u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df96c:
    // 0x2df96c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df96cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df970:
    // 0x2df970: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df974:
    // 0x2df974: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df978:
    // 0x2df978: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df97c:
    // 0x2df97c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df97cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df980:
    // 0x2df980: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x2df980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df984:
    // 0x2df984: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2df984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2df988:
    // 0x2df988: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2df988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2df98c:
    // 0x2df98c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x2df98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2df990:
    // 0x2df990: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df990u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df994:
    // 0x2df994: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df994u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df998:
    // 0x2df998: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2df998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df99c:
    // 0x2df99c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2df9a0:
    // 0x2df9a0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2df9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2df9a4:
    // 0x2df9a4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2df9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2df9a8:
    // 0x2df9a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df9a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df9ac:
    // 0x2df9ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df9acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df9b0:
    // 0x2df9b0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df9b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df9b4:
    // 0x2df9b4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2df9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df9b8:
    // 0x2df9b8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2df9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2df9bc:
    // 0x2df9bc: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_2df9c0:
    // 0x2df9c0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2df9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2df9c4:
    // 0x2df9c4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2df9c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df9c8:
    // 0x2df9c8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2df9c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df9cc:
    // 0x2df9cc: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2df9ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df9d0:
    // 0x2df9d0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2df9d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df9d4:
    // 0x2df9d4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2df9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df9d8:
    // 0x2df9d8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2df9d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df9dc:
    // 0x2df9dc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2df9dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2df9e0:
    // 0x2df9e0: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x2df9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
label_2df9e4:
    // 0x2df9e4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2df9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2df9e8:
    // 0x2df9e8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2df9e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2df9ec:
    // 0x2df9ec: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x2df9ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2df9f0:
    // 0x2df9f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2df9f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2df9f4:
    // 0x2df9f4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2df9f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2df9f8:
    // 0x2df9f8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2df9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2df9fc:
    // 0x2df9fc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2df9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa00:
    // 0x2dfa00: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x2dfa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa04:
    // 0x2dfa04: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dfa04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfa08:
    // 0x2dfa08: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2dfa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa0c:
    // 0x2dfa0c: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2dfa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa10:
    // 0x2dfa10: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dfa10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2dfa14:
    // 0x2dfa14: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2dfa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa18:
    // 0x2dfa18: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x2dfa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa1c:
    // 0x2dfa1c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2dfa1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfa20:
    // 0x2dfa20: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2dfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2dfa24:
    // 0x2dfa24: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2dfa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa28:
    // 0x2dfa28: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2dfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa2c:
    // 0x2dfa2c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dfa2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfa30:
    // 0x2dfa30: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2dfa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa34:
    // 0x2dfa34: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2dfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa38:
    // 0x2dfa38: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dfa38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2dfa3c:
    // 0x2dfa3c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2dfa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa40:
    // 0x2dfa40: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2dfa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfa44:
    // 0x2dfa44: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2dfa44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfa48:
    // 0x2dfa48: 0xc6450024  lwc1        $f5, 0x24($s2)
    ctx->pc = 0x2dfa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2dfa4c:
    // 0x2dfa4c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2dfa4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2dfa50:
    // 0x2dfa50: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2dfa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfa54:
    // 0x2dfa54: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x2dfa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfa58:
    // 0x2dfa58: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x2dfa58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_2dfa5c:
    // 0x2dfa5c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2dfa5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2dfa60:
    // 0x2dfa60: 0x0  nop
    ctx->pc = 0x2dfa60u;
    // NOP
label_2dfa64:
    // 0x2dfa64: 0x46006503  div.s       $f20, $f12, $f0
    ctx->pc = 0x2dfa64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_2dfa68:
    // 0x2dfa68: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2dfa68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfa6c:
    // 0x2dfa6c: 0x0  nop
    ctx->pc = 0x2dfa6cu;
    // NOP
label_2dfa70:
    // 0x2dfa70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dfa74:
    if (ctx->pc == 0x2DFA74u) {
        ctx->pc = 0x2DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA70u;
        // 0x2dfa74: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA78u;
        goto label_2dfa78;
    }
    ctx->pc = 0x2DFA70u;
    {
        const bool branch_taken_0x2dfa70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfa70) {
            ctx->pc = 0x2DFA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA70u;
            // 0x2dfa74: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA78u;
            goto label_2dfa78;
        }
    }
    ctx->pc = 0x2DFA78u;
label_2dfa78:
    // 0x2dfa78: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2dfa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfa7c:
    // 0x2dfa7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dfa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfa80:
    // 0x2dfa80: 0x0  nop
    ctx->pc = 0x2dfa80u;
    // NOP
label_2dfa84:
    // 0x2dfa84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dfa88:
    if (ctx->pc == 0x2DFA88u) {
        ctx->pc = 0x2DFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA84u;
        // 0x2dfa88: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA8Cu;
        goto label_2dfa8c;
    }
    ctx->pc = 0x2DFA84u;
    {
        const bool branch_taken_0x2dfa84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfa84) {
            ctx->pc = 0x2DFA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA84u;
            // 0x2dfa88: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA8Cu;
            goto label_2dfa8c;
        }
    }
    ctx->pc = 0x2DFA8Cu;
label_2dfa8c:
    // 0x2dfa8c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2dfa8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2dfa90:
    // 0x2dfa90: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2dfa90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2dfa94:
    // 0x2dfa94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dfa94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dfa98:
    // 0x2dfa98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dfa98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dfa9c:
    // 0x2dfa9c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2dfa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfaa0:
    // 0x2dfaa0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2dfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2dfaa4:
    // 0x2dfaa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dfaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dfaa8:
    // 0x2dfaa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfaac:
    // 0x2dfaac: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_2dfab0:
    if (ctx->pc == 0x2DFAB0u) {
        ctx->pc = 0x2DFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAACu;
        // 0x2dfab0: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAB4u;
        goto label_2dfab4;
    }
    ctx->pc = 0x2DFAACu;
    {
        const bool branch_taken_0x2dfaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAACu;
        // 0x2dfab0: 0x8e430070  lw          $v1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaac) {
            ctx->pc = 0x2DFAD4u;
            goto label_2dfad4;
        }
    }
    ctx->pc = 0x2DFAB4u;
label_2dfab4:
    // 0x2dfab4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2dfab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dfab8:
    // 0x2dfab8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2dfab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dfabc:
    // 0x2dfabc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfac0:
    // 0x2dfac0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2dfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2dfac4:
    // 0x2dfac4: 0x40f809  jalr        $v0
label_2dfac8:
    if (ctx->pc == 0x2DFAC8u) {
        ctx->pc = 0x2DFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAC4u;
        // 0x2dfac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFACCu;
        goto label_2dfacc;
    }
    ctx->pc = 0x2DFAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFACCu);
        ctx->pc = 0x2DFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAC4u;
        // 0x2dfac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAC4u, 0x2DFACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFACCu;
label_2dfacc:
    // 0x2dfacc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dfad0:
    if (ctx->pc == 0x2DFAD0u) {
        ctx->pc = 0x2DFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFACCu;
        // 0x2dfad0: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAD4u;
        goto label_2dfad4;
    }
    ctx->pc = 0x2DFACCu;
    {
        const bool branch_taken_0x2dfacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFACCu;
        // 0x2dfad0: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfacc) {
            ctx->pc = 0x2DFAF0u;
            goto label_2dfaf0;
        }
    }
    ctx->pc = 0x2DFAD4u;
label_2dfad4:
    // 0x2dfad4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2dfad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dfad8:
    // 0x2dfad8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2dfad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dfadc:
    // 0x2dfadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfae0:
    // 0x2dfae0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2dfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2dfae4:
    // 0x2dfae4: 0x40f809  jalr        $v0
label_2dfae8:
    if (ctx->pc == 0x2DFAE8u) {
        ctx->pc = 0x2DFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAE4u;
        // 0x2dfae8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAECu;
        goto label_2dfaec;
    }
    ctx->pc = 0x2DFAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFAECu);
        ctx->pc = 0x2DFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAE4u;
        // 0x2dfae8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAE4u, 0x2DFAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFAECu;
label_2dfaec:
    // 0x2dfaec: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2dfaecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2dfaf0:
    // 0x2dfaf0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2dfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2dfaf4:
    // 0x2dfaf4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2dfaf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2dfaf8:
    // 0x2dfaf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dfaf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfafc:
    // 0x2dfafc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2dfafcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dfb00:
    // 0x2dfb00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dfb00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dfb04:
    // 0x2dfb04: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x2dfb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfb08:
    // 0x2dfb08: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2dfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2dfb0c:
    // 0x2dfb0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dfb10:
    // 0x2dfb10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dfb14:
    // 0x2dfb14: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_2dfb18:
    if (ctx->pc == 0x2DFB18u) {
        ctx->pc = 0x2DFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB14u;
        // 0x2dfb18: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB1Cu;
        goto label_2dfb1c;
    }
    ctx->pc = 0x2DFB14u;
    {
        const bool branch_taken_0x2dfb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB14u;
        // 0x2dfb18: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb14) {
            ctx->pc = 0x2DFB3Cu;
            goto label_2dfb3c;
        }
    }
    ctx->pc = 0x2DFB1Cu;
label_2dfb1c:
    // 0x2dfb1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dfb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb20:
    // 0x2dfb20: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2dfb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2dfb24:
    // 0x2dfb24: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2dfb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb28:
    // 0x2dfb28: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2dfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2dfb2c:
    // 0x2dfb2c: 0x40f809  jalr        $v0
label_2dfb30:
    if (ctx->pc == 0x2DFB30u) {
        ctx->pc = 0x2DFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB2Cu;
        // 0x2dfb30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB34u;
        goto label_2dfb34;
    }
    ctx->pc = 0x2DFB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFB34u);
        ctx->pc = 0x2DFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB2Cu;
        // 0x2dfb30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFB2Cu, 0x2DFB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFB34u;
label_2dfb34:
    // 0x2dfb34: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dfb38:
    if (ctx->pc == 0x2DFB38u) {
        ctx->pc = 0x2DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB34u;
        // 0x2dfb38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB3Cu;
        goto label_2dfb3c;
    }
    ctx->pc = 0x2DFB34u;
    {
        const bool branch_taken_0x2dfb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB34u;
        // 0x2dfb38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb34) {
            ctx->pc = 0x2DFB58u;
            goto label_2dfb58;
        }
    }
    ctx->pc = 0x2DFB3Cu;
label_2dfb3c:
    // 0x2dfb3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb40:
    // 0x2dfb40: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2dfb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2dfb44:
    // 0x2dfb44: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2dfb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb48:
    // 0x2dfb48: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2dfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2dfb4c:
    // 0x2dfb4c: 0x40f809  jalr        $v0
label_2dfb50:
    if (ctx->pc == 0x2DFB50u) {
        ctx->pc = 0x2DFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB4Cu;
        // 0x2dfb50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB54u;
        goto label_2dfb54;
    }
    ctx->pc = 0x2DFB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFB54u);
        ctx->pc = 0x2DFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB4Cu;
        // 0x2dfb50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFB4Cu, 0x2DFB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFB54u;
label_2dfb54:
    // 0x2dfb54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2dfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfb58:
    // 0x2dfb58: 0x90620114  lbu         $v0, 0x114($v1)
    ctx->pc = 0x2dfb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_2dfb5c:
    // 0x2dfb5c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_2dfb60:
    if (ctx->pc == 0x2DFB60u) {
        ctx->pc = 0x2DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB5Cu;
        // 0x2dfb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB64u;
        goto label_2dfb64;
    }
    ctx->pc = 0x2DFB5Cu;
    {
        const bool branch_taken_0x2dfb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB5Cu;
        // 0x2dfb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb5c) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DFB64u;
label_2dfb64:
    // 0x2dfb64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2dfb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2dfb68:
    // 0x2dfb68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfb6c:
    // 0x2dfb6c: 0x0  nop
    ctx->pc = 0x2dfb6cu;
    // NOP
label_2dfb70:
    // 0x2dfb70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2dfb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfb74:
    // 0x2dfb74: 0x0  nop
    ctx->pc = 0x2dfb74u;
    // NOP
label_2dfb78:
    // 0x2dfb78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dfb7c:
    if (ctx->pc == 0x2DFB7Cu) {
        ctx->pc = 0x2DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB78u;
        // 0x2dfb7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB80u;
        goto label_2dfb80;
    }
    ctx->pc = 0x2DFB78u;
    {
        const bool branch_taken_0x2dfb78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB78u;
        // 0x2dfb7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb78) {
            ctx->pc = 0x2DFB84u;
            goto label_2dfb84;
        }
    }
    ctx->pc = 0x2DFB80u;
label_2dfb80:
    // 0x2dfb80: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2dfb80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2dfb84:
    // 0x2dfb84: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_2dfb88:
    // 0x2dfb88: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2dfb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2dfb8c:
    // 0x2dfb8c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2dfb90:
    if (ctx->pc == 0x2DFB90u) {
        ctx->pc = 0x2DFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB8Cu;
        // 0x2dfb90: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB94u;
        goto label_2dfb94;
    }
    ctx->pc = 0x2DFB8Cu;
    {
        const bool branch_taken_0x2dfb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB8Cu;
        // 0x2dfb90: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb8c) {
            ctx->pc = 0x2DFBD4u;
            goto label_2dfbd4;
        }
    }
    ctx->pc = 0x2DFB94u;
label_2dfb94:
    // 0x2dfb94: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2dfb94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2dfb98:
    // 0x2dfb98: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2dfb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2dfb9c:
    // 0x2dfb9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dfb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dfba0:
    // 0x2dfba0: 0xc07a8e4  jal         func_1EA390
label_2dfba4:
    if (ctx->pc == 0x2DFBA4u) {
        ctx->pc = 0x2DFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBA0u;
        // 0x2dfba4: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBA8u;
        goto label_2dfba8;
    }
    ctx->pc = 0x2DFBA0u;
    SET_GPR_U32(ctx, 31, 0x2DFBA8u);
    ctx->pc = 0x2DFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBA0u;
    // 0x2dfba4: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DFBA0u, 0x2DFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBA8u;
label_2dfba8:
    // 0x2dfba8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2dfba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfbac:
    // 0x2dfbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbb0:
    // 0x2dfbb0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dfbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dfbb4:
    // 0x2dfbb4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2dfbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2dfbb8:
    // 0x2dfbb8: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2dfbbc:
    // 0x2dfbbc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2dfbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbc0:
    // 0x2dfbc0: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2dfbc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dfbc4:
    // 0x2dfbc4: 0xc07f550  jal         func_1FD540
label_2dfbc8:
    if (ctx->pc == 0x2DFBC8u) {
        ctx->pc = 0x2DFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBC4u;
        // 0x2dfbc8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBCCu;
        goto label_2dfbcc;
    }
    ctx->pc = 0x2DFBC4u;
    SET_GPR_U32(ctx, 31, 0x2DFBCCu);
    ctx->pc = 0x2DFBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBC4u;
    // 0x2dfbc8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DFBC4u, 0x2DFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBCCu;
label_2dfbcc:
    // 0x2dfbcc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2dfbd0:
    if (ctx->pc == 0x2DFBD0u) {
        ctx->pc = 0x2DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBCCu;
        // 0x2dfbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBD4u;
        goto label_2dfbd4;
    }
    ctx->pc = 0x2DFBCCu;
    {
        const bool branch_taken_0x2dfbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBCCu;
        // 0x2dfbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfbcc) {
            ctx->pc = 0x2DFC10u;
            goto label_2dfc10;
        }
    }
    ctx->pc = 0x2DFBD4u;
label_2dfbd4:
    // 0x2dfbd4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2dfbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2dfbd8:
    // 0x2dfbd8: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2dfbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2dfbdc:
    // 0x2dfbdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dfbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbe0:
    // 0x2dfbe0: 0xc07a8e4  jal         func_1EA390
label_2dfbe4:
    if (ctx->pc == 0x2DFBE4u) {
        ctx->pc = 0x2DFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBE0u;
        // 0x2dfbe4: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBE8u;
        goto label_2dfbe8;
    }
    ctx->pc = 0x2DFBE0u;
    SET_GPR_U32(ctx, 31, 0x2DFBE8u);
    ctx->pc = 0x2DFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBE0u;
    // 0x2dfbe4: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DFBE0u, 0x2DFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBE8u;
label_2dfbe8:
    // 0x2dfbe8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2dfbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfbec:
    // 0x2dfbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbf0:
    // 0x2dfbf0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dfbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dfbf4:
    // 0x2dfbf4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2dfbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2dfbf8:
    // 0x2dfbf8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbfc:
    // 0x2dfbfc: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dfc00:
    // 0x2dfc00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2dfc00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2dfc04:
    // 0x2dfc04: 0xc07f550  jal         func_1FD540
label_2dfc08:
    if (ctx->pc == 0x2DFC08u) {
        ctx->pc = 0x2DFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC04u;
        // 0x2dfc08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC0Cu;
        goto label_2dfc0c;
    }
    ctx->pc = 0x2DFC04u;
    SET_GPR_U32(ctx, 31, 0x2DFC0Cu);
    ctx->pc = 0x2DFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC04u;
    // 0x2dfc08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DFC04u, 0x2DFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC0Cu;
label_2dfc0c:
    // 0x2dfc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfc10:
    // 0x2dfc10: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x2dfc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2dfc14:
    // 0x2dfc14: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x2dfc14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_2dfc18:
    // 0x2dfc18: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x2dfc18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2dfc1c:
    // 0x2dfc1c: 0xdfb301a8  ld          $s3, 0x1A8($sp)
    ctx->pc = 0x2dfc1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_2dfc20:
    // 0x2dfc20: 0xdfb401b0  ld          $s4, 0x1B0($sp)
    ctx->pc = 0x2dfc20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2dfc24:
    // 0x2dfc24: 0xdfb501b8  ld          $s5, 0x1B8($sp)
    ctx->pc = 0x2dfc24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_2dfc28:
    // 0x2dfc28: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x2dfc28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_2dfc2c:
    // 0x2dfc2c: 0xdfb701c8  ld          $s7, 0x1C8($sp)
    ctx->pc = 0x2dfc2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_2dfc30:
    // 0x2dfc30: 0xdfbe01d0  ld          $fp, 0x1D0($sp)
    ctx->pc = 0x2dfc30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_2dfc34:
    // 0x2dfc34: 0xdfbf01d8  ld          $ra, 0x1D8($sp)
    ctx->pc = 0x2dfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 472)));
label_2dfc38:
    // 0x2dfc38: 0xc7b501e8  lwc1        $f21, 0x1E8($sp)
    ctx->pc = 0x2dfc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dfc3c:
    // 0x2dfc3c: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x2dfc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dfc40:
    // 0x2dfc40: 0x3e00008  jr          $ra
label_2dfc44:
    if (ctx->pc == 0x2DFC44u) {
        ctx->pc = 0x2DFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC40u;
        // 0x2dfc44: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC48u;
        goto label_fallthrough_0x2dfc40;
    }
    ctx->pc = 0x2DFC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC40u;
        // 0x2dfc44: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dfc40:
    ctx->pc = 0x2DFC48u;
}
