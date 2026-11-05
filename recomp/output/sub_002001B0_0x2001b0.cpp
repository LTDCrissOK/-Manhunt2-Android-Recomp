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

// Function: sub_002001B0
// Address: 0x2001b0 - 0x200a28
void sub_002001B0_0x2001b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002001B0_0x2001b0");
#endif

    switch (ctx->pc) {
        case 0x2001b0u: goto label_2001b0;
        case 0x2001b4u: goto label_2001b4;
        case 0x2001b8u: goto label_2001b8;
        case 0x2001bcu: goto label_2001bc;
        case 0x2001c0u: goto label_2001c0;
        case 0x2001c4u: goto label_2001c4;
        case 0x2001c8u: goto label_2001c8;
        case 0x2001ccu: goto label_2001cc;
        case 0x2001d0u: goto label_2001d0;
        case 0x2001d4u: goto label_2001d4;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001dcu: goto label_2001dc;
        case 0x2001e0u: goto label_2001e0;
        case 0x2001e4u: goto label_2001e4;
        case 0x2001e8u: goto label_2001e8;
        case 0x2001ecu: goto label_2001ec;
        case 0x2001f0u: goto label_2001f0;
        case 0x2001f4u: goto label_2001f4;
        case 0x2001f8u: goto label_2001f8;
        case 0x2001fcu: goto label_2001fc;
        case 0x200200u: goto label_200200;
        case 0x200204u: goto label_200204;
        case 0x200208u: goto label_200208;
        case 0x20020cu: goto label_20020c;
        case 0x200210u: goto label_200210;
        case 0x200214u: goto label_200214;
        case 0x200218u: goto label_200218;
        case 0x20021cu: goto label_20021c;
        case 0x200220u: goto label_200220;
        case 0x200224u: goto label_200224;
        case 0x200228u: goto label_200228;
        case 0x20022cu: goto label_20022c;
        case 0x200230u: goto label_200230;
        case 0x200234u: goto label_200234;
        case 0x200238u: goto label_200238;
        case 0x20023cu: goto label_20023c;
        case 0x200240u: goto label_200240;
        case 0x200244u: goto label_200244;
        case 0x200248u: goto label_200248;
        case 0x20024cu: goto label_20024c;
        case 0x200250u: goto label_200250;
        case 0x200254u: goto label_200254;
        case 0x200258u: goto label_200258;
        case 0x20025cu: goto label_20025c;
        case 0x200260u: goto label_200260;
        case 0x200264u: goto label_200264;
        case 0x200268u: goto label_200268;
        case 0x20026cu: goto label_20026c;
        case 0x200270u: goto label_200270;
        case 0x200274u: goto label_200274;
        case 0x200278u: goto label_200278;
        case 0x20027cu: goto label_20027c;
        case 0x200280u: goto label_200280;
        case 0x200284u: goto label_200284;
        case 0x200288u: goto label_200288;
        case 0x20028cu: goto label_20028c;
        case 0x200290u: goto label_200290;
        case 0x200294u: goto label_200294;
        case 0x200298u: goto label_200298;
        case 0x20029cu: goto label_20029c;
        case 0x2002a0u: goto label_2002a0;
        case 0x2002a4u: goto label_2002a4;
        case 0x2002a8u: goto label_2002a8;
        case 0x2002acu: goto label_2002ac;
        case 0x2002b0u: goto label_2002b0;
        case 0x2002b4u: goto label_2002b4;
        case 0x2002b8u: goto label_2002b8;
        case 0x2002bcu: goto label_2002bc;
        case 0x2002c0u: goto label_2002c0;
        case 0x2002c4u: goto label_2002c4;
        case 0x2002c8u: goto label_2002c8;
        case 0x2002ccu: goto label_2002cc;
        case 0x2002d0u: goto label_2002d0;
        case 0x2002d4u: goto label_2002d4;
        case 0x2002d8u: goto label_2002d8;
        case 0x2002dcu: goto label_2002dc;
        case 0x2002e0u: goto label_2002e0;
        case 0x2002e4u: goto label_2002e4;
        case 0x2002e8u: goto label_2002e8;
        case 0x2002ecu: goto label_2002ec;
        case 0x2002f0u: goto label_2002f0;
        case 0x2002f4u: goto label_2002f4;
        case 0x2002f8u: goto label_2002f8;
        case 0x2002fcu: goto label_2002fc;
        case 0x200300u: goto label_200300;
        case 0x200304u: goto label_200304;
        case 0x200308u: goto label_200308;
        case 0x20030cu: goto label_20030c;
        case 0x200310u: goto label_200310;
        case 0x200314u: goto label_200314;
        case 0x200318u: goto label_200318;
        case 0x20031cu: goto label_20031c;
        case 0x200320u: goto label_200320;
        case 0x200324u: goto label_200324;
        case 0x200328u: goto label_200328;
        case 0x20032cu: goto label_20032c;
        case 0x200330u: goto label_200330;
        case 0x200334u: goto label_200334;
        case 0x200338u: goto label_200338;
        case 0x20033cu: goto label_20033c;
        case 0x200340u: goto label_200340;
        case 0x200344u: goto label_200344;
        case 0x200348u: goto label_200348;
        case 0x20034cu: goto label_20034c;
        case 0x200350u: goto label_200350;
        case 0x200354u: goto label_200354;
        case 0x200358u: goto label_200358;
        case 0x20035cu: goto label_20035c;
        case 0x200360u: goto label_200360;
        case 0x200364u: goto label_200364;
        case 0x200368u: goto label_200368;
        case 0x20036cu: goto label_20036c;
        case 0x200370u: goto label_200370;
        case 0x200374u: goto label_200374;
        case 0x200378u: goto label_200378;
        case 0x20037cu: goto label_20037c;
        case 0x200380u: goto label_200380;
        case 0x200384u: goto label_200384;
        case 0x200388u: goto label_200388;
        case 0x20038cu: goto label_20038c;
        case 0x200390u: goto label_200390;
        case 0x200394u: goto label_200394;
        case 0x200398u: goto label_200398;
        case 0x20039cu: goto label_20039c;
        case 0x2003a0u: goto label_2003a0;
        case 0x2003a4u: goto label_2003a4;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003acu: goto label_2003ac;
        case 0x2003b0u: goto label_2003b0;
        case 0x2003b4u: goto label_2003b4;
        case 0x2003b8u: goto label_2003b8;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003c0u: goto label_2003c0;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003c8u: goto label_2003c8;
        case 0x2003ccu: goto label_2003cc;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003d4u: goto label_2003d4;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003dcu: goto label_2003dc;
        case 0x2003e0u: goto label_2003e0;
        case 0x2003e4u: goto label_2003e4;
        case 0x2003e8u: goto label_2003e8;
        case 0x2003ecu: goto label_2003ec;
        case 0x2003f0u: goto label_2003f0;
        case 0x2003f4u: goto label_2003f4;
        case 0x2003f8u: goto label_2003f8;
        case 0x2003fcu: goto label_2003fc;
        case 0x200400u: goto label_200400;
        case 0x200404u: goto label_200404;
        case 0x200408u: goto label_200408;
        case 0x20040cu: goto label_20040c;
        case 0x200410u: goto label_200410;
        case 0x200414u: goto label_200414;
        case 0x200418u: goto label_200418;
        case 0x20041cu: goto label_20041c;
        case 0x200420u: goto label_200420;
        case 0x200424u: goto label_200424;
        case 0x200428u: goto label_200428;
        case 0x20042cu: goto label_20042c;
        case 0x200430u: goto label_200430;
        case 0x200434u: goto label_200434;
        case 0x200438u: goto label_200438;
        case 0x20043cu: goto label_20043c;
        case 0x200440u: goto label_200440;
        case 0x200444u: goto label_200444;
        case 0x200448u: goto label_200448;
        case 0x20044cu: goto label_20044c;
        case 0x200450u: goto label_200450;
        case 0x200454u: goto label_200454;
        case 0x200458u: goto label_200458;
        case 0x20045cu: goto label_20045c;
        case 0x200460u: goto label_200460;
        case 0x200464u: goto label_200464;
        case 0x200468u: goto label_200468;
        case 0x20046cu: goto label_20046c;
        case 0x200470u: goto label_200470;
        case 0x200474u: goto label_200474;
        case 0x200478u: goto label_200478;
        case 0x20047cu: goto label_20047c;
        case 0x200480u: goto label_200480;
        case 0x200484u: goto label_200484;
        case 0x200488u: goto label_200488;
        case 0x20048cu: goto label_20048c;
        case 0x200490u: goto label_200490;
        case 0x200494u: goto label_200494;
        case 0x200498u: goto label_200498;
        case 0x20049cu: goto label_20049c;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004a4u: goto label_2004a4;
        case 0x2004a8u: goto label_2004a8;
        case 0x2004acu: goto label_2004ac;
        case 0x2004b0u: goto label_2004b0;
        case 0x2004b4u: goto label_2004b4;
        case 0x2004b8u: goto label_2004b8;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c0u: goto label_2004c0;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004c8u: goto label_2004c8;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004d0u: goto label_2004d0;
        case 0x2004d4u: goto label_2004d4;
        case 0x2004d8u: goto label_2004d8;
        case 0x2004dcu: goto label_2004dc;
        case 0x2004e0u: goto label_2004e0;
        case 0x2004e4u: goto label_2004e4;
        case 0x2004e8u: goto label_2004e8;
        case 0x2004ecu: goto label_2004ec;
        case 0x2004f0u: goto label_2004f0;
        case 0x2004f4u: goto label_2004f4;
        case 0x2004f8u: goto label_2004f8;
        case 0x2004fcu: goto label_2004fc;
        case 0x200500u: goto label_200500;
        case 0x200504u: goto label_200504;
        case 0x200508u: goto label_200508;
        case 0x20050cu: goto label_20050c;
        case 0x200510u: goto label_200510;
        case 0x200514u: goto label_200514;
        case 0x200518u: goto label_200518;
        case 0x20051cu: goto label_20051c;
        case 0x200520u: goto label_200520;
        case 0x200524u: goto label_200524;
        case 0x200528u: goto label_200528;
        case 0x20052cu: goto label_20052c;
        case 0x200530u: goto label_200530;
        case 0x200534u: goto label_200534;
        case 0x200538u: goto label_200538;
        case 0x20053cu: goto label_20053c;
        case 0x200540u: goto label_200540;
        case 0x200544u: goto label_200544;
        case 0x200548u: goto label_200548;
        case 0x20054cu: goto label_20054c;
        case 0x200550u: goto label_200550;
        case 0x200554u: goto label_200554;
        case 0x200558u: goto label_200558;
        case 0x20055cu: goto label_20055c;
        case 0x200560u: goto label_200560;
        case 0x200564u: goto label_200564;
        case 0x200568u: goto label_200568;
        case 0x20056cu: goto label_20056c;
        case 0x200570u: goto label_200570;
        case 0x200574u: goto label_200574;
        case 0x200578u: goto label_200578;
        case 0x20057cu: goto label_20057c;
        case 0x200580u: goto label_200580;
        case 0x200584u: goto label_200584;
        case 0x200588u: goto label_200588;
        case 0x20058cu: goto label_20058c;
        case 0x200590u: goto label_200590;
        case 0x200594u: goto label_200594;
        case 0x200598u: goto label_200598;
        case 0x20059cu: goto label_20059c;
        case 0x2005a0u: goto label_2005a0;
        case 0x2005a4u: goto label_2005a4;
        case 0x2005a8u: goto label_2005a8;
        case 0x2005acu: goto label_2005ac;
        case 0x2005b0u: goto label_2005b0;
        case 0x2005b4u: goto label_2005b4;
        case 0x2005b8u: goto label_2005b8;
        case 0x2005bcu: goto label_2005bc;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005c4u: goto label_2005c4;
        case 0x2005c8u: goto label_2005c8;
        case 0x2005ccu: goto label_2005cc;
        case 0x2005d0u: goto label_2005d0;
        case 0x2005d4u: goto label_2005d4;
        case 0x2005d8u: goto label_2005d8;
        case 0x2005dcu: goto label_2005dc;
        case 0x2005e0u: goto label_2005e0;
        case 0x2005e4u: goto label_2005e4;
        case 0x2005e8u: goto label_2005e8;
        case 0x2005ecu: goto label_2005ec;
        case 0x2005f0u: goto label_2005f0;
        case 0x2005f4u: goto label_2005f4;
        case 0x2005f8u: goto label_2005f8;
        case 0x2005fcu: goto label_2005fc;
        case 0x200600u: goto label_200600;
        case 0x200604u: goto label_200604;
        case 0x200608u: goto label_200608;
        case 0x20060cu: goto label_20060c;
        case 0x200610u: goto label_200610;
        case 0x200614u: goto label_200614;
        case 0x200618u: goto label_200618;
        case 0x20061cu: goto label_20061c;
        case 0x200620u: goto label_200620;
        case 0x200624u: goto label_200624;
        case 0x200628u: goto label_200628;
        case 0x20062cu: goto label_20062c;
        case 0x200630u: goto label_200630;
        case 0x200634u: goto label_200634;
        case 0x200638u: goto label_200638;
        case 0x20063cu: goto label_20063c;
        case 0x200640u: goto label_200640;
        case 0x200644u: goto label_200644;
        case 0x200648u: goto label_200648;
        case 0x20064cu: goto label_20064c;
        case 0x200650u: goto label_200650;
        case 0x200654u: goto label_200654;
        case 0x200658u: goto label_200658;
        case 0x20065cu: goto label_20065c;
        case 0x200660u: goto label_200660;
        case 0x200664u: goto label_200664;
        case 0x200668u: goto label_200668;
        case 0x20066cu: goto label_20066c;
        case 0x200670u: goto label_200670;
        case 0x200674u: goto label_200674;
        case 0x200678u: goto label_200678;
        case 0x20067cu: goto label_20067c;
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        case 0x200888u: goto label_200888;
        case 0x20088cu: goto label_20088c;
        case 0x200890u: goto label_200890;
        case 0x200894u: goto label_200894;
        case 0x200898u: goto label_200898;
        case 0x20089cu: goto label_20089c;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a4u: goto label_2008a4;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008acu: goto label_2008ac;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b4u: goto label_2008b4;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008bcu: goto label_2008bc;
        case 0x2008c0u: goto label_2008c0;
        case 0x2008c4u: goto label_2008c4;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008ccu: goto label_2008cc;
        case 0x2008d0u: goto label_2008d0;
        case 0x2008d4u: goto label_2008d4;
        case 0x2008d8u: goto label_2008d8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e0u: goto label_2008e0;
        case 0x2008e4u: goto label_2008e4;
        case 0x2008e8u: goto label_2008e8;
        case 0x2008ecu: goto label_2008ec;
        case 0x2008f0u: goto label_2008f0;
        case 0x2008f4u: goto label_2008f4;
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        case 0x200940u: goto label_200940;
        case 0x200944u: goto label_200944;
        case 0x200948u: goto label_200948;
        case 0x20094cu: goto label_20094c;
        case 0x200950u: goto label_200950;
        case 0x200954u: goto label_200954;
        case 0x200958u: goto label_200958;
        case 0x20095cu: goto label_20095c;
        case 0x200960u: goto label_200960;
        case 0x200964u: goto label_200964;
        case 0x200968u: goto label_200968;
        case 0x20096cu: goto label_20096c;
        case 0x200970u: goto label_200970;
        case 0x200974u: goto label_200974;
        case 0x200978u: goto label_200978;
        case 0x20097cu: goto label_20097c;
        case 0x200980u: goto label_200980;
        case 0x200984u: goto label_200984;
        case 0x200988u: goto label_200988;
        case 0x20098cu: goto label_20098c;
        case 0x200990u: goto label_200990;
        case 0x200994u: goto label_200994;
        case 0x200998u: goto label_200998;
        case 0x20099cu: goto label_20099c;
        case 0x2009a0u: goto label_2009a0;
        case 0x2009a4u: goto label_2009a4;
        case 0x2009a8u: goto label_2009a8;
        case 0x2009acu: goto label_2009ac;
        case 0x2009b0u: goto label_2009b0;
        case 0x2009b4u: goto label_2009b4;
        case 0x2009b8u: goto label_2009b8;
        case 0x2009bcu: goto label_2009bc;
        case 0x2009c0u: goto label_2009c0;
        case 0x2009c4u: goto label_2009c4;
        case 0x2009c8u: goto label_2009c8;
        case 0x2009ccu: goto label_2009cc;
        case 0x2009d0u: goto label_2009d0;
        case 0x2009d4u: goto label_2009d4;
        case 0x2009d8u: goto label_2009d8;
        case 0x2009dcu: goto label_2009dc;
        case 0x2009e0u: goto label_2009e0;
        case 0x2009e4u: goto label_2009e4;
        case 0x2009e8u: goto label_2009e8;
        case 0x2009ecu: goto label_2009ec;
        case 0x2009f0u: goto label_2009f0;
        case 0x2009f4u: goto label_2009f4;
        case 0x2009f8u: goto label_2009f8;
        case 0x2009fcu: goto label_2009fc;
        case 0x200a00u: goto label_200a00;
        case 0x200a04u: goto label_200a04;
        case 0x200a08u: goto label_200a08;
        case 0x200a0cu: goto label_200a0c;
        case 0x200a10u: goto label_200a10;
        case 0x200a14u: goto label_200a14;
        case 0x200a18u: goto label_200a18;
        case 0x200a1cu: goto label_200a1c;
        case 0x200a20u: goto label_200a20;
        case 0x200a24u: goto label_200a24;
        default: break;
    }

    ctx->pc = 0x2001b0u;

label_2001b0:
    // 0x2001b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2001b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2001b4:
    // 0x2001b4: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2001b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
label_2001b8:
    // 0x2001b8: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2001b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_2001bc:
    // 0x2001bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2001bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2001c0:
    // 0x2001c0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2001c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
label_2001c4:
    // 0x2001c4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2001c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2001c8:
    // 0x2001c8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2001c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_2001cc:
    // 0x2001cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2001ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2001d0:
    // 0x2001d0: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2001d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
label_2001d4:
    // 0x2001d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2001d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2001d8:
    // 0x2001d8: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2001d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
label_2001dc:
    // 0x2001dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2001dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2001e0:
    // 0x2001e0: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2001e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
label_2001e4:
    // 0x2001e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2001e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2001e8:
    // 0x2001e8: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x2001e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
label_2001ec:
    // 0x2001ec: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2001ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_2001f0:
    // 0x2001f0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x2001f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
label_2001f4:
    // 0x2001f4: 0x0  nop
    ctx->pc = 0x2001f4u;
    // NOP
label_2001f8:
    // 0x2001f8: 0xc08153c  jal         func_2054F0
label_2001fc:
    if (ctx->pc == 0x2001FCu) {
        ctx->pc = 0x2001FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001F8u;
        // 0x2001fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200200u;
        goto label_200200;
    }
    ctx->pc = 0x2001F8u;
    SET_GPR_U32(ctx, 31, 0x200200u);
    ctx->pc = 0x2001FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001F8u;
    // 0x2001fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054F0u, 0x2001F8u, 0x200200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200200u;
label_200200:
    // 0x200200: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_200204:
    if (ctx->pc == 0x200204u) {
        ctx->pc = 0x200204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200200u;
        // 0x200204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200208u;
        goto label_200208;
    }
    ctx->pc = 0x200200u;
    {
        const bool branch_taken_0x200200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200200u;
        // 0x200204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200200) {
            ctx->pc = 0x200224u;
            goto label_200224;
        }
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20020c:
    // 0x20020c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200210:
    // 0x200210: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x200210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_200214:
    // 0x200214: 0x40f809  jalr        $v0
label_200218:
    if (ctx->pc == 0x200218u) {
        ctx->pc = 0x20021Cu;
        goto label_20021c;
    }
    ctx->pc = 0x200214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20021Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200214u, 0x20021Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20021Cu;
label_20021c:
    // 0x20021c: 0x504001f7  beql        $v0, $zero, . + 4 + (0x1F7 << 2)
label_200220:
    if (ctx->pc == 0x200220u) {
        ctx->pc = 0x200220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20021Cu;
        // 0x200220: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200224u;
        goto label_200224;
    }
    ctx->pc = 0x20021Cu;
    {
        const bool branch_taken_0x20021c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20021c) {
            ctx->pc = 0x200220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20021Cu;
            // 0x200220: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2009FCu;
            goto label_2009fc;
        }
    }
    ctx->pc = 0x200224u;
label_200224:
    // 0x200224: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x200224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_200228:
    // 0x200228: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_20022c:
    if (ctx->pc == 0x20022Cu) {
        ctx->pc = 0x20022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200228u;
        // 0x20022c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200230u;
        goto label_200230;
    }
    ctx->pc = 0x200228u;
    {
        const bool branch_taken_0x200228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200228u;
        // 0x20022c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200228) {
            ctx->pc = 0x2001F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2001f8;
        }
    }
    ctx->pc = 0x200230u;
label_200230:
    // 0x200230: 0xc0d737c  jal         func_35CDF0
label_200234:
    if (ctx->pc == 0x200234u) {
        ctx->pc = 0x200234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200230u;
        // 0x200234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200238u;
        goto label_200238;
    }
    ctx->pc = 0x200230u;
    SET_GPR_U32(ctx, 31, 0x200238u);
    ctx->pc = 0x200234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200230u;
    // 0x200234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x200230u, 0x200238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200238u;
label_200238:
    // 0x200238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20023c:
    // 0x20023c: 0x12830026  beq         $s4, $v1, . + 4 + (0x26 << 2)
label_200240:
    if (ctx->pc == 0x200240u) {
        ctx->pc = 0x200240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20023Cu;
        // 0x200240: 0x26700040  addiu       $s0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200244u;
        goto label_200244;
    }
    ctx->pc = 0x20023Cu;
    {
        const bool branch_taken_0x20023c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x200240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20023Cu;
        // 0x200240: 0x26700040  addiu       $s0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20023c) {
            ctx->pc = 0x2002D8u;
            goto label_2002d8;
        }
    }
    ctx->pc = 0x200244u;
label_200244:
    // 0x200244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200248:
    // 0x200248: 0xc0d73cc  jal         func_35CF30
label_20024c:
    if (ctx->pc == 0x20024Cu) {
        ctx->pc = 0x20024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200248u;
        // 0x20024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200250u;
        goto label_200250;
    }
    ctx->pc = 0x200248u;
    SET_GPR_U32(ctx, 31, 0x200250u);
    ctx->pc = 0x20024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200248u;
    // 0x20024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x200248u, 0x200250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200250u;
label_200250:
    // 0x200250: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_200254:
    if (ctx->pc == 0x200254u) {
        ctx->pc = 0x200254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200250u;
        // 0x200254: 0x9262003c  lbu         $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200258u;
        goto label_200258;
    }
    ctx->pc = 0x200250u;
    {
        const bool branch_taken_0x200250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200250) {
            ctx->pc = 0x200254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200250u;
            // 0x200254: 0x9262003c  lbu         $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200270u;
            goto label_200270;
        }
    }
    ctx->pc = 0x200258u;
label_200258:
    // 0x200258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20025c:
    // 0x20025c: 0xc0d7468  jal         func_35D1A0
label_200260:
    if (ctx->pc == 0x200260u) {
        ctx->pc = 0x200260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20025Cu;
        // 0x200260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200264u;
        goto label_200264;
    }
    ctx->pc = 0x20025Cu;
    SET_GPR_U32(ctx, 31, 0x200264u);
    ctx->pc = 0x200260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20025Cu;
    // 0x200260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20025Cu, 0x200264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200264u;
label_200264:
    // 0x200264: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x200264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_200268:
    // 0x200268: 0x10000007  b           . + 4 + (0x7 << 2)
label_20026c:
    if (ctx->pc == 0x20026Cu) {
        ctx->pc = 0x20026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200268u;
        // 0x20026c: 0xae60007c  sw          $zero, 0x7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200270u;
        goto label_200270;
    }
    ctx->pc = 0x200268u;
    {
        const bool branch_taken_0x200268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200268u;
        // 0x20026c: 0xae60007c  sw          $zero, 0x7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200268) {
            ctx->pc = 0x200288u;
            goto label_200288;
        }
    }
    ctx->pc = 0x200270u;
label_200270:
    // 0x200270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_200274:
    if (ctx->pc == 0x200274u) {
        ctx->pc = 0x200274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200270u;
        // 0x200274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200278u;
        goto label_200278;
    }
    ctx->pc = 0x200270u;
    {
        const bool branch_taken_0x200270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200270u;
        // 0x200274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200270) {
            ctx->pc = 0x20028Cu;
            goto label_20028c;
        }
    }
    ctx->pc = 0x200278u;
label_200278:
    // 0x200278: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_20027c:
    if (ctx->pc == 0x20027Cu) {
        ctx->pc = 0x200280u;
        goto label_200280;
    }
    ctx->pc = 0x200278u;
    {
        const bool branch_taken_0x200278 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x200278) {
            ctx->pc = 0x20028Cu;
            goto label_20028c;
        }
    }
    ctx->pc = 0x200280u;
label_200280:
    // 0x200280: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x200280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_200284:
    // 0x200284: 0xa260003c  sb          $zero, 0x3C($s3)
    ctx->pc = 0x200284u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 60), (uint8_t)GPR_U32(ctx, 0));
label_200288:
    // 0x200288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20028c:
    // 0x20028c: 0xc0d7468  jal         func_35D1A0
label_200290:
    if (ctx->pc == 0x200290u) {
        ctx->pc = 0x200290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20028Cu;
        // 0x200290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200294u;
        goto label_200294;
    }
    ctx->pc = 0x20028Cu;
    SET_GPR_U32(ctx, 31, 0x200294u);
    ctx->pc = 0x200290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20028Cu;
    // 0x200290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20028Cu, 0x200294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200294u;
label_200294:
    // 0x200294: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x200294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_200298:
    // 0x200298: 0xc0d757c  jal         func_35D5F0
label_20029c:
    if (ctx->pc == 0x20029Cu) {
        ctx->pc = 0x20029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200298u;
        // 0x20029c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002A0u;
        goto label_2002a0;
    }
    ctx->pc = 0x200298u;
    SET_GPR_U32(ctx, 31, 0x2002A0u);
    ctx->pc = 0x20029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200298u;
    // 0x20029c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x200298u, 0x2002A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002A0u;
label_2002a0:
    // 0x2002a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2002a4:
    // 0x2002a4: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_2002a8:
    if (ctx->pc == 0x2002A8u) {
        ctx->pc = 0x2002A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002A4u;
        // 0x2002a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002ACu;
        goto label_2002ac;
    }
    ctx->pc = 0x2002A4u;
    {
        const bool branch_taken_0x2002a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2002A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002A4u;
        // 0x2002a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002a4) {
            ctx->pc = 0x2002C0u;
            goto label_2002c0;
        }
    }
    ctx->pc = 0x2002ACu;
label_2002ac:
    // 0x2002ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2002acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2002b0:
    // 0x2002b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2002b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2002b4:
    // 0x2002b4: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2002b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2002b8:
    // 0x2002b8: 0x3884005f  xori        $a0, $a0, 0x5F
    ctx->pc = 0x2002b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)95);
label_2002bc:
    // 0x2002bc: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x2002bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2002c0:
    // 0x2002c0: 0x4a2000a  bltzl       $a1, . + 4 + (0xA << 2)
label_2002c4:
    if (ctx->pc == 0x2002C4u) {
        ctx->pc = 0x2002C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002C0u;
        // 0x2002c4: 0xa2600048  sb          $zero, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002C8u;
        goto label_2002c8;
    }
    ctx->pc = 0x2002C0u;
    {
        const bool branch_taken_0x2002c0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2002c0) {
            ctx->pc = 0x2002C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2002C0u;
            // 0x2002c4: 0xa2600048  sb          $zero, 0x48($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2002ECu;
            goto label_2002ec;
        }
    }
    ctx->pc = 0x2002C8u;
label_2002c8:
    // 0x2002c8: 0xc0d75d0  jal         func_35D740
label_2002cc:
    if (ctx->pc == 0x2002CCu) {
        ctx->pc = 0x2002CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002C8u;
        // 0x2002cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002D0u;
        goto label_2002d0;
    }
    ctx->pc = 0x2002C8u;
    SET_GPR_U32(ctx, 31, 0x2002D0u);
    ctx->pc = 0x2002CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002C8u;
    // 0x2002cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x2002C8u, 0x2002D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002D0u;
label_2002d0:
    // 0x2002d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2002d4:
    if (ctx->pc == 0x2002D4u) {
        ctx->pc = 0x2002D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002D0u;
        // 0x2002d4: 0xa2600048  sb          $zero, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002D8u;
        goto label_2002d8;
    }
    ctx->pc = 0x2002D0u;
    {
        const bool branch_taken_0x2002d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002D0u;
        // 0x2002d4: 0xa2600048  sb          $zero, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002d0) {
            ctx->pc = 0x2002ECu;
            goto label_2002ec;
        }
    }
    ctx->pc = 0x2002D8u;
label_2002d8:
    // 0x2002d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2002d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2002dc:
    // 0x2002dc: 0xc0d7468  jal         func_35D1A0
label_2002e0:
    if (ctx->pc == 0x2002E0u) {
        ctx->pc = 0x2002E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002DCu;
        // 0x2002e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002E4u;
        goto label_2002e4;
    }
    ctx->pc = 0x2002DCu;
    SET_GPR_U32(ctx, 31, 0x2002E4u);
    ctx->pc = 0x2002E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002DCu;
    // 0x2002e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2002DCu, 0x2002E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002E4u;
label_2002e4:
    // 0x2002e4: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2002e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_2002e8:
    // 0x2002e8: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2002e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_2002ec:
    // 0x2002ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2002ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2002f0:
    // 0x2002f0: 0xc0d75d0  jal         func_35D740
label_2002f4:
    if (ctx->pc == 0x2002F4u) {
        ctx->pc = 0x2002F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F0u;
        // 0x2002f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002F8u;
        goto label_2002f8;
    }
    ctx->pc = 0x2002F0u;
    SET_GPR_U32(ctx, 31, 0x2002F8u);
    ctx->pc = 0x2002F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002F0u;
    // 0x2002f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x2002F0u, 0x2002F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002F8u;
label_2002f8:
    // 0x2002f8: 0xc0d7596  jal         func_35D658
label_2002fc:
    if (ctx->pc == 0x2002FCu) {
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200300u;
        goto label_200300;
    }
    ctx->pc = 0x2002F8u;
    SET_GPR_U32(ctx, 31, 0x200300u);
    ctx->pc = 0x2002FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002F8u;
    // 0x2002fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x2002F8u, 0x200300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200300u;
label_200300:
    // 0x200300: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_200304:
    // 0x200304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200308:
    // 0x200308: 0xc0d73cc  jal         func_35CF30
label_20030c:
    if (ctx->pc == 0x20030Cu) {
        ctx->pc = 0x20030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200308u;
        // 0x20030c: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200310u;
        goto label_200310;
    }
    ctx->pc = 0x200308u;
    SET_GPR_U32(ctx, 31, 0x200310u);
    ctx->pc = 0x20030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200308u;
    // 0x20030c: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x200308u, 0x200310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200310u;
label_200310:
    // 0x200310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x200310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_200314:
    // 0x200314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_200318:
    if (ctx->pc == 0x200318u) {
        ctx->pc = 0x200318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200314u;
        // 0x200318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20031Cu;
        goto label_20031c;
    }
    ctx->pc = 0x200314u;
    {
        const bool branch_taken_0x200314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200314u;
        // 0x200318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200314) {
            ctx->pc = 0x200328u;
            goto label_200328;
        }
    }
    ctx->pc = 0x20031Cu;
label_20031c:
    // 0x20031c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_200320:
    // 0x200320: 0xc0d7468  jal         func_35D1A0
label_200324:
    if (ctx->pc == 0x200324u) {
        ctx->pc = 0x200324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200320u;
        // 0x200324: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200328u;
        goto label_200328;
    }
    ctx->pc = 0x200320u;
    SET_GPR_U32(ctx, 31, 0x200328u);
    ctx->pc = 0x200324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200320u;
    // 0x200324: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x200320u, 0x200328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200328u;
label_200328:
    // 0x200328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20032c:
    // 0x20032c: 0x16820064  bne         $s4, $v0, . + 4 + (0x64 << 2)
label_200330:
    if (ctx->pc == 0x200330u) {
        ctx->pc = 0x200330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20032Cu;
        // 0x200330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200334u;
        goto label_200334;
    }
    ctx->pc = 0x20032Cu;
    {
        const bool branch_taken_0x20032c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x200330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20032Cu;
        // 0x200330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20032c) {
            ctx->pc = 0x2004C0u;
            goto label_2004c0;
        }
    }
    ctx->pc = 0x200334u;
label_200334:
    // 0x200334: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x200334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_200338:
    // 0x200338: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20033c:
    // 0x20033c: 0x24560730  addiu       $s6, $v0, 0x730
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
label_200340:
    // 0x200340: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200344:
    // 0x200344: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x200344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200348:
    // 0x200348: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20034c:
    // 0x20034c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200350:
    // 0x200350: 0xc0d74e8  jal         func_35D3A0
label_200354:
    if (ctx->pc == 0x200354u) {
        ctx->pc = 0x200354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200350u;
        // 0x200354: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200358u;
        goto label_200358;
    }
    ctx->pc = 0x200350u;
    SET_GPR_U32(ctx, 31, 0x200358u);
    ctx->pc = 0x200354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200350u;
    // 0x200354: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x200350u, 0x200358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200358u;
label_200358:
    // 0x200358: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_20035c:
    // 0x20035c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_200360:
    // 0x200360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200364:
    // 0x200364: 0x24550740  addiu       $s5, $v0, 0x740
    ctx->pc = 0x200364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_200368:
    // 0x200368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20036c:
    // 0x20036c: 0xc0d74c6  jal         func_35D318
label_200370:
    if (ctx->pc == 0x200370u) {
        ctx->pc = 0x200370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20036Cu;
        // 0x200370: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200374u;
        goto label_200374;
    }
    ctx->pc = 0x20036Cu;
    SET_GPR_U32(ctx, 31, 0x200374u);
    ctx->pc = 0x200370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20036Cu;
    // 0x200370: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20036Cu, 0x200374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200374u;
label_200374:
    // 0x200374: 0x8ee69350  lw          $a2, -0x6CB0($s7)
    ctx->pc = 0x200374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939472)));
label_200378:
    // 0x200378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20037c:
    // 0x20037c: 0xc0d74c6  jal         func_35D318
label_200380:
    if (ctx->pc == 0x200380u) {
        ctx->pc = 0x200380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20037Cu;
        // 0x200380: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200384u;
        goto label_200384;
    }
    ctx->pc = 0x20037Cu;
    SET_GPR_U32(ctx, 31, 0x200384u);
    ctx->pc = 0x200380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20037Cu;
    // 0x200380: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20037Cu, 0x200384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200384u;
label_200384:
    // 0x200384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200388:
    // 0x200388: 0xc0d7412  jal         func_35D048
label_20038c:
    if (ctx->pc == 0x20038Cu) {
        ctx->pc = 0x20038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200388u;
        // 0x20038c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200390u;
        goto label_200390;
    }
    ctx->pc = 0x200388u;
    SET_GPR_U32(ctx, 31, 0x200390u);
    ctx->pc = 0x20038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200388u;
    // 0x20038c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200388u, 0x200390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200390u;
label_200390:
    // 0x200390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200394:
    // 0x200394: 0xc0d7412  jal         func_35D048
label_200398:
    if (ctx->pc == 0x200398u) {
        ctx->pc = 0x200398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200394u;
        // 0x200398: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20039Cu;
        goto label_20039c;
    }
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 31, 0x20039Cu);
    ctx->pc = 0x200398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200394u;
    // 0x200398: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200394u, 0x20039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20039Cu;
label_20039c:
    // 0x20039c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2003a0:
    // 0x2003a0: 0x50800161  beql        $a0, $zero, . + 4 + (0x161 << 2)
label_2003a4:
    if (ctx->pc == 0x2003A4u) {
        ctx->pc = 0x2003A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003A0u;
        // 0x2003a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003A8u;
        goto label_2003a8;
    }
    ctx->pc = 0x2003A0u;
    {
        const bool branch_taken_0x2003a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003a0) {
            ctx->pc = 0x2003A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2003A0u;
            // 0x2003a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2003A8u;
label_2003a8:
    // 0x2003a8: 0x92620048  lbu         $v0, 0x48($s3)
    ctx->pc = 0x2003a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_2003ac:
    // 0x2003ac: 0x5440015e  bnel        $v0, $zero, . + 4 + (0x15E << 2)
label_2003b0:
    if (ctx->pc == 0x2003B0u) {
        ctx->pc = 0x2003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003ACu;
        // 0x2003b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003B4u;
        goto label_2003b4;
    }
    ctx->pc = 0x2003ACu;
    {
        const bool branch_taken_0x2003ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2003ac) {
            ctx->pc = 0x2003B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2003ACu;
            // 0x2003b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x2003B4u;
label_2003b4:
    // 0x2003b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2003b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2003b8:
    // 0x2003b8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2003b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2003bc:
    // 0x2003bc: 0x60f809  jalr        $v1
label_2003c0:
    if (ctx->pc == 0x2003C0u) {
        ctx->pc = 0x2003C4u;
        goto label_2003c4;
    }
    ctx->pc = 0x2003BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2003C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003BCu, 0x2003C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2003C4u;
label_2003c4:
    // 0x2003c4: 0x92620100  lbu         $v0, 0x100($s3)
    ctx->pc = 0x2003c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 256)));
label_2003c8:
    // 0x2003c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2003cc:
    if (ctx->pc == 0x2003CCu) {
        ctx->pc = 0x2003CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C8u;
        // 0x2003cc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003D0u;
        goto label_2003d0;
    }
    ctx->pc = 0x2003C8u;
    {
        const bool branch_taken_0x2003c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C8u;
        // 0x2003cc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003c8) {
            ctx->pc = 0x200400u;
            goto label_200400;
        }
    }
    ctx->pc = 0x2003D0u;
label_2003d0:
    // 0x2003d0: 0xc0805d6  jal         func_201758
label_2003d4:
    if (ctx->pc == 0x2003D4u) {
        ctx->pc = 0x2003D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003D0u;
        // 0x2003d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003D8u;
        goto label_2003d8;
    }
    ctx->pc = 0x2003D0u;
    SET_GPR_U32(ctx, 31, 0x2003D8u);
    ctx->pc = 0x2003D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003D0u;
    // 0x2003d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x2003D0u, 0x2003D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D8u;
label_2003d8:
    // 0x2003d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2003d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2003dc:
    // 0x2003dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2003dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2003e0:
    // 0x2003e0: 0x10c20150  beq         $a2, $v0, . + 4 + (0x150 << 2)
label_2003e4:
    if (ctx->pc == 0x2003E4u) {
        ctx->pc = 0x2003E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003E0u;
        // 0x2003e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003E8u;
        goto label_2003e8;
    }
    ctx->pc = 0x2003E0u;
    {
        const bool branch_taken_0x2003e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003E0u;
        // 0x2003e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003e0) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x2003E8u;
label_2003e8:
    // 0x2003e8: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x2003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_2003ec:
    // 0x2003ec: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2003f0:
    // 0x2003f0: 0xc0814ee  jal         func_2053B8
label_2003f4:
    if (ctx->pc == 0x2003F4u) {
        ctx->pc = 0x2003F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003F0u;
        // 0x2003f4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003F8u;
        goto label_2003f8;
    }
    ctx->pc = 0x2003F0u;
    SET_GPR_U32(ctx, 31, 0x2003F8u);
    ctx->pc = 0x2003F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003F0u;
    // 0x2003f4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2053B8u, 0x2003F0u, 0x2003F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003F8u;
label_2003f8:
    // 0x2003f8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2003fc:
    if (ctx->pc == 0x2003FCu) {
        ctx->pc = 0x2003FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003F8u;
        // 0x2003fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200400u;
        goto label_200400;
    }
    ctx->pc = 0x2003F8u;
    {
        const bool branch_taken_0x2003f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003F8u;
        // 0x2003fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003f8) {
            ctx->pc = 0x2004B8u;
            goto label_2004b8;
        }
    }
    ctx->pc = 0x200400u;
label_200400:
    // 0x200400: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x200400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200404:
    // 0x200404: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_200408:
    // 0x200408: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_20040c:
    if (ctx->pc == 0x20040Cu) {
        ctx->pc = 0x20040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200408u;
        // 0x20040c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200410u;
        goto label_200410;
    }
    ctx->pc = 0x200408u;
    {
        const bool branch_taken_0x200408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200408u;
        // 0x20040c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200408) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x200410u;
label_200410:
    // 0x200410: 0xc0dbe86  jal         func_36FA18
label_200414:
    if (ctx->pc == 0x200414u) {
        ctx->pc = 0x200414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200410u;
        // 0x200414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200418u;
        goto label_200418;
    }
    ctx->pc = 0x200410u;
    SET_GPR_U32(ctx, 31, 0x200418u);
    ctx->pc = 0x200414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200410u;
    // 0x200414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x200410u, 0x200418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200418u;
label_200418:
    // 0x200418: 0x10000027  b           . + 4 + (0x27 << 2)
label_20041c:
    if (ctx->pc == 0x20041Cu) {
        ctx->pc = 0x20041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200418u;
        // 0x20041c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200420u;
        goto label_200420;
    }
    ctx->pc = 0x200418u;
    {
        const bool branch_taken_0x200418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200418u;
        // 0x20041c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200418) {
            ctx->pc = 0x2004B8u;
            goto label_2004b8;
        }
    }
    ctx->pc = 0x200420u;
label_200420:
    // 0x200420: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x200420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_200424:
    // 0x200424: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_200428:
    // 0x200428: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x200428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20042c:
    // 0x20042c: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x20042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_200430:
    // 0x200430: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x200430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200434:
    // 0x200434: 0xc0d74c6  jal         func_35D318
label_200438:
    if (ctx->pc == 0x200438u) {
        ctx->pc = 0x200438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200434u;
        // 0x200438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20043Cu;
        goto label_20043c;
    }
    ctx->pc = 0x200434u;
    SET_GPR_U32(ctx, 31, 0x20043Cu);
    ctx->pc = 0x200438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200434u;
    // 0x200438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200434u, 0x20043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20043Cu;
label_20043c:
    // 0x20043c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200440:
    // 0x200440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200444:
    // 0x200444: 0xc0d74a8  jal         func_35D2A0
label_200448:
    if (ctx->pc == 0x200448u) {
        ctx->pc = 0x200448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200444u;
        // 0x200448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20044Cu;
        goto label_20044c;
    }
    ctx->pc = 0x200444u;
    SET_GPR_U32(ctx, 31, 0x20044Cu);
    ctx->pc = 0x200448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200444u;
    // 0x200448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x200444u, 0x20044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20044Cu;
label_20044c:
    // 0x20044c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x20044cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200450:
    // 0x200450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200454:
    // 0x200454: 0xc0d74c6  jal         func_35D318
label_200458:
    if (ctx->pc == 0x200458u) {
        ctx->pc = 0x200458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200454u;
        // 0x200458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20045Cu;
        goto label_20045c;
    }
    ctx->pc = 0x200454u;
    SET_GPR_U32(ctx, 31, 0x20045Cu);
    ctx->pc = 0x200458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200454u;
    // 0x200458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200454u, 0x20045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20045Cu;
label_20045c:
    // 0x20045c: 0x8ee69350  lw          $a2, -0x6CB0($s7)
    ctx->pc = 0x20045cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939472)));
label_200460:
    // 0x200460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200464:
    // 0x200464: 0xc0d74c6  jal         func_35D318
label_200468:
    if (ctx->pc == 0x200468u) {
        ctx->pc = 0x200468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200464u;
        // 0x200468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20046Cu;
        goto label_20046c;
    }
    ctx->pc = 0x200464u;
    SET_GPR_U32(ctx, 31, 0x20046Cu);
    ctx->pc = 0x200468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200464u;
    // 0x200468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200464u, 0x20046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20046Cu;
label_20046c:
    // 0x20046c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200470:
    // 0x200470: 0xc0d7412  jal         func_35D048
label_200474:
    if (ctx->pc == 0x200474u) {
        ctx->pc = 0x200474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200470u;
        // 0x200474: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200478u;
        goto label_200478;
    }
    ctx->pc = 0x200470u;
    SET_GPR_U32(ctx, 31, 0x200478u);
    ctx->pc = 0x200474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200470u;
    // 0x200474: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200470u, 0x200478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200478u;
label_200478:
    // 0x200478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20047c:
    // 0x20047c: 0xc0d7412  jal         func_35D048
label_200480:
    if (ctx->pc == 0x200480u) {
        ctx->pc = 0x200480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20047Cu;
        // 0x200480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200484u;
        goto label_200484;
    }
    ctx->pc = 0x20047Cu;
    SET_GPR_U32(ctx, 31, 0x200484u);
    ctx->pc = 0x200480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20047Cu;
    // 0x200480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20047Cu, 0x200484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200484u;
label_200484:
    // 0x200484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200488:
    // 0x200488: 0xc0d7412  jal         func_35D048
label_20048c:
    if (ctx->pc == 0x20048Cu) {
        ctx->pc = 0x20048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200488u;
        // 0x20048c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200490u;
        goto label_200490;
    }
    ctx->pc = 0x200488u;
    SET_GPR_U32(ctx, 31, 0x200490u);
    ctx->pc = 0x20048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200488u;
    // 0x20048c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200488u, 0x200490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200490u;
label_200490:
    // 0x200490: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_200494:
    // 0x200494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200498:
    // 0x200498: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20049c:
    // 0x20049c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2004a0:
    // 0x2004a0: 0x40f809  jalr        $v0
label_2004a4:
    if (ctx->pc == 0x2004A4u) {
        ctx->pc = 0x2004A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A0u;
        // 0x2004a4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004A8u;
        goto label_2004a8;
    }
    ctx->pc = 0x2004A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2004A8u);
        ctx->pc = 0x2004A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A0u;
        // 0x2004a4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004A0u, 0x2004A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2004A8u;
label_2004a8:
    // 0x2004a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2004a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2004ac:
    // 0x2004ac: 0xc0d7412  jal         func_35D048
label_2004b0:
    if (ctx->pc == 0x2004B0u) {
        ctx->pc = 0x2004B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004ACu;
        // 0x2004b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004B4u;
        goto label_2004b4;
    }
    ctx->pc = 0x2004ACu;
    SET_GPR_U32(ctx, 31, 0x2004B4u);
    ctx->pc = 0x2004B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004ACu;
    // 0x2004b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2004ACu, 0x2004B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004B4u;
label_2004b4:
    // 0x2004b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2004b8:
    // 0x2004b8: 0x1000011a  b           . + 4 + (0x11A << 2)
label_2004bc:
    if (ctx->pc == 0x2004BCu) {
        ctx->pc = 0x2004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B8u;
        // 0x2004bc: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004C0u;
        goto label_2004c0;
    }
    ctx->pc = 0x2004B8u;
    {
        const bool branch_taken_0x2004b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B8u;
        // 0x2004bc: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004b8) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x2004C0u;
label_2004c0:
    // 0x2004c0: 0x16820062  bne         $s4, $v0, . + 4 + (0x62 << 2)
label_2004c4:
    if (ctx->pc == 0x2004C4u) {
        ctx->pc = 0x2004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C0u;
        // 0x2004c4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004C8u;
        goto label_2004c8;
    }
    ctx->pc = 0x2004C0u;
    {
        const bool branch_taken_0x2004c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C0u;
        // 0x2004c4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004c0) {
            ctx->pc = 0x20064Cu;
            goto label_20064c;
        }
    }
    ctx->pc = 0x2004C8u;
label_2004c8:
    // 0x2004c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2004c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2004cc:
    // 0x2004cc: 0x24560730  addiu       $s6, $v0, 0x730
    ctx->pc = 0x2004ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
label_2004d0:
    // 0x2004d0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2004d4:
    // 0x2004d4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2004d8:
    // 0x2004d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2004d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2004dc:
    // 0x2004dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2004dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2004e0:
    // 0x2004e0: 0xc0d74e8  jal         func_35D3A0
label_2004e4:
    if (ctx->pc == 0x2004E4u) {
        ctx->pc = 0x2004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004E0u;
        // 0x2004e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004E8u;
        goto label_2004e8;
    }
    ctx->pc = 0x2004E0u;
    SET_GPR_U32(ctx, 31, 0x2004E8u);
    ctx->pc = 0x2004E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004E0u;
    // 0x2004e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x2004E0u, 0x2004E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004E8u;
label_2004e8:
    // 0x2004e8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2004ec:
    // 0x2004ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2004f0:
    // 0x2004f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2004f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2004f4:
    // 0x2004f4: 0x24550740  addiu       $s5, $v0, 0x740
    ctx->pc = 0x2004f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_2004f8:
    // 0x2004f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2004f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2004fc:
    // 0x2004fc: 0xc0d74c6  jal         func_35D318
label_200500:
    if (ctx->pc == 0x200500u) {
        ctx->pc = 0x200500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004FCu;
        // 0x200500: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200504u;
        goto label_200504;
    }
    ctx->pc = 0x2004FCu;
    SET_GPR_U32(ctx, 31, 0x200504u);
    ctx->pc = 0x200500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004FCu;
    // 0x200500: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2004FCu, 0x200504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200504u;
label_200504:
    // 0x200504: 0x8ee6935c  lw          $a2, -0x6CA4($s7)
    ctx->pc = 0x200504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939484)));
label_200508:
    // 0x200508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20050c:
    // 0x20050c: 0xc0d74c6  jal         func_35D318
label_200510:
    if (ctx->pc == 0x200510u) {
        ctx->pc = 0x200510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20050Cu;
        // 0x200510: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200514u;
        goto label_200514;
    }
    ctx->pc = 0x20050Cu;
    SET_GPR_U32(ctx, 31, 0x200514u);
    ctx->pc = 0x200510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20050Cu;
    // 0x200510: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20050Cu, 0x200514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200514u;
label_200514:
    // 0x200514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200518:
    // 0x200518: 0xc0d7412  jal         func_35D048
label_20051c:
    if (ctx->pc == 0x20051Cu) {
        ctx->pc = 0x20051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200518u;
        // 0x20051c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200520u;
        goto label_200520;
    }
    ctx->pc = 0x200518u;
    SET_GPR_U32(ctx, 31, 0x200520u);
    ctx->pc = 0x20051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200518u;
    // 0x20051c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200518u, 0x200520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200520u;
label_200520:
    // 0x200520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200524:
    // 0x200524: 0xc0d7412  jal         func_35D048
label_200528:
    if (ctx->pc == 0x200528u) {
        ctx->pc = 0x200528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200524u;
        // 0x200528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20052Cu;
        goto label_20052c;
    }
    ctx->pc = 0x200524u;
    SET_GPR_U32(ctx, 31, 0x20052Cu);
    ctx->pc = 0x200528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200524u;
    // 0x200528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200524u, 0x20052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20052Cu;
label_20052c:
    // 0x20052c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_200530:
    // 0x200530: 0x508000fd  beql        $a0, $zero, . + 4 + (0xFD << 2)
label_200534:
    if (ctx->pc == 0x200534u) {
        ctx->pc = 0x200534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200530u;
        // 0x200534: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200538u;
        goto label_200538;
    }
    ctx->pc = 0x200530u;
    {
        const bool branch_taken_0x200530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200530) {
            ctx->pc = 0x200534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200530u;
            // 0x200534: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x200538u;
label_200538:
    // 0x200538: 0x92620049  lbu         $v0, 0x49($s3)
    ctx->pc = 0x200538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 73)));
label_20053c:
    // 0x20053c: 0x544000fa  bnel        $v0, $zero, . + 4 + (0xFA << 2)
label_200540:
    if (ctx->pc == 0x200540u) {
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200544u;
        goto label_200544;
    }
    ctx->pc = 0x20053Cu;
    {
        const bool branch_taken_0x20053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20053c) {
            ctx->pc = 0x200540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20053Cu;
            // 0x200540: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200928u;
            goto label_200928;
        }
    }
    ctx->pc = 0x200544u;
label_200544:
    // 0x200544: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200548:
    // 0x200548: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20054c:
    // 0x20054c: 0x60f809  jalr        $v1
label_200550:
    if (ctx->pc == 0x200550u) {
        ctx->pc = 0x200554u;
        goto label_200554;
    }
    ctx->pc = 0x20054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20054Cu, 0x200554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200554u;
label_200554:
    // 0x200554: 0x92620100  lbu         $v0, 0x100($s3)
    ctx->pc = 0x200554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 256)));
label_200558:
    // 0x200558: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20055c:
    if (ctx->pc == 0x20055Cu) {
        ctx->pc = 0x20055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200558u;
        // 0x20055c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200560u;
        goto label_200560;
    }
    ctx->pc = 0x200558u;
    {
        const bool branch_taken_0x200558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200558u;
        // 0x20055c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200558) {
            ctx->pc = 0x200590u;
            goto label_200590;
        }
    }
    ctx->pc = 0x200560u;
label_200560:
    // 0x200560: 0xc0805d6  jal         func_201758
label_200564:
    if (ctx->pc == 0x200564u) {
        ctx->pc = 0x200564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200560u;
        // 0x200564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200568u;
        goto label_200568;
    }
    ctx->pc = 0x200560u;
    SET_GPR_U32(ctx, 31, 0x200568u);
    ctx->pc = 0x200564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200560u;
    // 0x200564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x200560u, 0x200568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200568u;
label_200568:
    // 0x200568: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x200568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20056c:
    // 0x20056c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_200570:
    // 0x200570: 0x10c200ec  beq         $a2, $v0, . + 4 + (0xEC << 2)
label_200574:
    if (ctx->pc == 0x200574u) {
        ctx->pc = 0x200574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200570u;
        // 0x200574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200578u;
        goto label_200578;
    }
    ctx->pc = 0x200570u;
    {
        const bool branch_taken_0x200570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x200574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200570u;
        // 0x200574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200570) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x200578u;
label_200578:
    // 0x200578: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_20057c:
    // 0x20057c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_200580:
    // 0x200580: 0xc0814ee  jal         func_2053B8
label_200584:
    if (ctx->pc == 0x200584u) {
        ctx->pc = 0x200584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200580u;
        // 0x200584: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200588u;
        goto label_200588;
    }
    ctx->pc = 0x200580u;
    SET_GPR_U32(ctx, 31, 0x200588u);
    ctx->pc = 0x200584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200580u;
    // 0x200584: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2053B8u, 0x200580u, 0x200588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200588u;
label_200588:
    // 0x200588: 0x1000002e  b           . + 4 + (0x2E << 2)
label_20058c:
    if (ctx->pc == 0x20058Cu) {
        ctx->pc = 0x20058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200588u;
        // 0x20058c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200590u;
        goto label_200590;
    }
    ctx->pc = 0x200588u;
    {
        const bool branch_taken_0x200588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200588u;
        // 0x20058c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200588) {
            ctx->pc = 0x200644u;
            goto label_200644;
        }
    }
    ctx->pc = 0x200590u;
label_200590:
    // 0x200590: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200594:
    // 0x200594: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x200594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_200598:
    // 0x200598: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_20059c:
    if (ctx->pc == 0x20059Cu) {
        ctx->pc = 0x20059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200598u;
        // 0x20059c: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005A0u;
        goto label_2005a0;
    }
    ctx->pc = 0x200598u;
    {
        const bool branch_taken_0x200598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200598u;
        // 0x20059c: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200598) {
            ctx->pc = 0x2005B0u;
            goto label_2005b0;
        }
    }
    ctx->pc = 0x2005A0u;
label_2005a0:
    // 0x2005a0: 0xc0dbe86  jal         func_36FA18
label_2005a4:
    if (ctx->pc == 0x2005A4u) {
        ctx->pc = 0x2005A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005A0u;
        // 0x2005a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005A8u;
        goto label_2005a8;
    }
    ctx->pc = 0x2005A0u;
    SET_GPR_U32(ctx, 31, 0x2005A8u);
    ctx->pc = 0x2005A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005A0u;
    // 0x2005a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x2005A0u, 0x2005A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005A8u;
label_2005a8:
    // 0x2005a8: 0x10000026  b           . + 4 + (0x26 << 2)
label_2005ac:
    if (ctx->pc == 0x2005ACu) {
        ctx->pc = 0x2005ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005A8u;
        // 0x2005ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005B0u;
        goto label_2005b0;
    }
    ctx->pc = 0x2005A8u;
    {
        const bool branch_taken_0x2005a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005A8u;
        // 0x2005ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005a8) {
            ctx->pc = 0x200644u;
            goto label_200644;
        }
    }
    ctx->pc = 0x2005B0u;
label_2005b0:
    // 0x2005b0: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_2005b4:
    // 0x2005b4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2005b8:
    // 0x2005b8: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_2005bc:
    // 0x2005bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2005bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2005c0:
    // 0x2005c0: 0xc0d74c6  jal         func_35D318
label_2005c4:
    if (ctx->pc == 0x2005C4u) {
        ctx->pc = 0x2005C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005C0u;
        // 0x2005c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005C8u;
        goto label_2005c8;
    }
    ctx->pc = 0x2005C0u;
    SET_GPR_U32(ctx, 31, 0x2005C8u);
    ctx->pc = 0x2005C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005C0u;
    // 0x2005c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2005C0u, 0x2005C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005C8u;
label_2005c8:
    // 0x2005c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2005cc:
    // 0x2005cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2005ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2005d0:
    // 0x2005d0: 0xc0d74a8  jal         func_35D2A0
label_2005d4:
    if (ctx->pc == 0x2005D4u) {
        ctx->pc = 0x2005D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005D0u;
        // 0x2005d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005D8u;
        goto label_2005d8;
    }
    ctx->pc = 0x2005D0u;
    SET_GPR_U32(ctx, 31, 0x2005D8u);
    ctx->pc = 0x2005D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005D0u;
    // 0x2005d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x2005D0u, 0x2005D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005D8u;
label_2005d8:
    // 0x2005d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2005d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2005dc:
    // 0x2005dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2005dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2005e0:
    // 0x2005e0: 0xc0d74c6  jal         func_35D318
label_2005e4:
    if (ctx->pc == 0x2005E4u) {
        ctx->pc = 0x2005E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005E0u;
        // 0x2005e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005E8u;
        goto label_2005e8;
    }
    ctx->pc = 0x2005E0u;
    SET_GPR_U32(ctx, 31, 0x2005E8u);
    ctx->pc = 0x2005E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005E0u;
    // 0x2005e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2005E0u, 0x2005E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005E8u;
label_2005e8:
    // 0x2005e8: 0x8ee6935c  lw          $a2, -0x6CA4($s7)
    ctx->pc = 0x2005e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939484)));
label_2005ec:
    // 0x2005ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2005ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2005f0:
    // 0x2005f0: 0xc0d74c6  jal         func_35D318
label_2005f4:
    if (ctx->pc == 0x2005F4u) {
        ctx->pc = 0x2005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F0u;
        // 0x2005f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005F8u;
        goto label_2005f8;
    }
    ctx->pc = 0x2005F0u;
    SET_GPR_U32(ctx, 31, 0x2005F8u);
    ctx->pc = 0x2005F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005F0u;
    // 0x2005f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2005F0u, 0x2005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005F8u;
label_2005f8:
    // 0x2005f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2005f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2005fc:
    // 0x2005fc: 0xc0d7412  jal         func_35D048
label_200600:
    if (ctx->pc == 0x200600u) {
        ctx->pc = 0x200600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005FCu;
        // 0x200600: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200604u;
        goto label_200604;
    }
    ctx->pc = 0x2005FCu;
    SET_GPR_U32(ctx, 31, 0x200604u);
    ctx->pc = 0x200600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005FCu;
    // 0x200600: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2005FCu, 0x200604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200604u;
label_200604:
    // 0x200604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200608:
    // 0x200608: 0xc0d7412  jal         func_35D048
label_20060c:
    if (ctx->pc == 0x20060Cu) {
        ctx->pc = 0x20060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200608u;
        // 0x20060c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200610u;
        goto label_200610;
    }
    ctx->pc = 0x200608u;
    SET_GPR_U32(ctx, 31, 0x200610u);
    ctx->pc = 0x20060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200608u;
    // 0x20060c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200608u, 0x200610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200610u;
label_200610:
    // 0x200610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200614:
    // 0x200614: 0xc0d7412  jal         func_35D048
label_200618:
    if (ctx->pc == 0x200618u) {
        ctx->pc = 0x200618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200614u;
        // 0x200618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20061Cu;
        goto label_20061c;
    }
    ctx->pc = 0x200614u;
    SET_GPR_U32(ctx, 31, 0x20061Cu);
    ctx->pc = 0x200618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200614u;
    // 0x200618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200614u, 0x20061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20061Cu;
label_20061c:
    // 0x20061c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x20061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_200620:
    // 0x200620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200624:
    // 0x200624: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200628:
    // 0x200628: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20062c:
    // 0x20062c: 0x40f809  jalr        $v0
label_200630:
    if (ctx->pc == 0x200630u) {
        ctx->pc = 0x200630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20062Cu;
        // 0x200630: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200634u;
        goto label_200634;
    }
    ctx->pc = 0x20062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200634u);
        ctx->pc = 0x200630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20062Cu;
        // 0x200630: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20062Cu, 0x200634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200634u;
label_200634:
    // 0x200634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200638:
    // 0x200638: 0xc0d7412  jal         func_35D048
label_20063c:
    if (ctx->pc == 0x20063Cu) {
        ctx->pc = 0x20063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200638u;
        // 0x20063c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200640u;
        goto label_200640;
    }
    ctx->pc = 0x200638u;
    SET_GPR_U32(ctx, 31, 0x200640u);
    ctx->pc = 0x20063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200638u;
    // 0x20063c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200638u, 0x200640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200640u;
label_200640:
    // 0x200640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200644:
    // 0x200644: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_200648:
    if (ctx->pc == 0x200648u) {
        ctx->pc = 0x200648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200644u;
        // 0x200648: 0xa2620049  sb          $v0, 0x49($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 73), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20064Cu;
        goto label_20064c;
    }
    ctx->pc = 0x200644u;
    {
        const bool branch_taken_0x200644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200644u;
        // 0x200648: 0xa2620049  sb          $v0, 0x49($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 73), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200644) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x20064Cu;
label_20064c:
    // 0x20064c: 0x56a0007a  bnel        $s5, $zero, . + 4 + (0x7A << 2)
label_200650:
    if (ctx->pc == 0x200650u) {
        ctx->pc = 0x200650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20064Cu;
        // 0x200650: 0x9262003c  lbu         $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200654u;
        goto label_200654;
    }
    ctx->pc = 0x20064Cu;
    {
        const bool branch_taken_0x20064c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x20064c) {
            ctx->pc = 0x200650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20064Cu;
            // 0x200650: 0x9262003c  lbu         $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200838u;
            goto label_200838;
        }
    }
    ctx->pc = 0x200654u;
label_200654:
    // 0x200654: 0x26620078  addiu       $v0, $s3, 0x78
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_200658:
    // 0x200658: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20065c:
    // 0x20065c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x20065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_200660:
    // 0x200660: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_200664:
    // 0x200664: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200668:
    // 0x200668: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x200668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_20066c:
    // 0x20066c: 0x24429350  addiu       $v0, $v0, -0x6CB0
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
label_200670:
    // 0x200670: 0x8fb500b4  lw          $s5, 0xB4($sp)
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_200674:
    // 0x200674: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x200674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_200678:
    // 0x200678: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x200678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20067c:
    // 0x20067c: 0x0  nop
    ctx->pc = 0x20067cu;
    // NOP
label_200680:
    // 0x200680: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_200684:
    // 0x200684: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_200688:
    if (ctx->pc == 0x200688u) {
        ctx->pc = 0x200688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200684u;
        // 0x200688: 0x8fa300b4  lw          $v1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20068Cu;
        goto label_20068c;
    }
    ctx->pc = 0x200684u;
    {
        const bool branch_taken_0x200684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200684u;
        // 0x200688: 0x8fa300b4  lw          $v1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200684) {
            ctx->pc = 0x200810u;
            goto label_200810;
        }
    }
    ctx->pc = 0x20068Cu;
label_20068c:
    // 0x20068c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_200690:
    // 0x200690: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_200694:
    // 0x200694: 0x24570730  addiu       $s7, $v0, 0x730
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
label_200698:
    // 0x200698: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20069c:
    // 0x20069c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2006a0:
    // 0x2006a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2006a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2006a4:
    // 0x2006a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2006a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2006a8:
    // 0x2006a8: 0xc0d74e8  jal         func_35D3A0
label_2006ac:
    if (ctx->pc == 0x2006ACu) {
        ctx->pc = 0x2006ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A8u;
        // 0x2006ac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006B0u;
        goto label_2006b0;
    }
    ctx->pc = 0x2006A8u;
    SET_GPR_U32(ctx, 31, 0x2006B0u);
    ctx->pc = 0x2006ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006A8u;
    // 0x2006ac: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x2006A8u, 0x2006B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006B0u;
label_2006b0:
    // 0x2006b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2006b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2006b4:
    // 0x2006b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2006b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2006b8:
    // 0x2006b8: 0x24560740  addiu       $s6, $v0, 0x740
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_2006bc:
    // 0x2006bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2006bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2006c0:
    // 0x2006c0: 0xc0d74c6  jal         func_35D318
label_2006c4:
    if (ctx->pc == 0x2006C4u) {
        ctx->pc = 0x2006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C0u;
        // 0x2006c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006C8u;
        goto label_2006c8;
    }
    ctx->pc = 0x2006C0u;
    SET_GPR_U32(ctx, 31, 0x2006C8u);
    ctx->pc = 0x2006C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006C0u;
    // 0x2006c4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2006C0u, 0x2006C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006C8u;
label_2006c8:
    // 0x2006c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2006cc:
    // 0x2006cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2006ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2006d0:
    // 0x2006d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2006d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2006d4:
    // 0x2006d4: 0xc0d74c6  jal         func_35D318
label_2006d8:
    if (ctx->pc == 0x2006D8u) {
        ctx->pc = 0x2006D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006D4u;
        // 0x2006d8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006DCu;
        goto label_2006dc;
    }
    ctx->pc = 0x2006D4u;
    SET_GPR_U32(ctx, 31, 0x2006DCu);
    ctx->pc = 0x2006D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006D4u;
    // 0x2006d8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2006D4u, 0x2006DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006DCu;
label_2006dc:
    // 0x2006dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2006e0:
    // 0x2006e0: 0xc0d7412  jal         func_35D048
label_2006e4:
    if (ctx->pc == 0x2006E4u) {
        ctx->pc = 0x2006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E0u;
        // 0x2006e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006E8u;
        goto label_2006e8;
    }
    ctx->pc = 0x2006E0u;
    SET_GPR_U32(ctx, 31, 0x2006E8u);
    ctx->pc = 0x2006E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006E0u;
    // 0x2006e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2006E0u, 0x2006E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006E8u;
label_2006e8:
    // 0x2006e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2006ec:
    // 0x2006ec: 0xc0d7412  jal         func_35D048
label_2006f0:
    if (ctx->pc == 0x2006F0u) {
        ctx->pc = 0x2006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ECu;
        // 0x2006f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006F4u;
        goto label_2006f4;
    }
    ctx->pc = 0x2006ECu;
    SET_GPR_U32(ctx, 31, 0x2006F4u);
    ctx->pc = 0x2006F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006ECu;
    // 0x2006f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2006ECu, 0x2006F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006F4u;
label_2006f4:
    // 0x2006f4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2006f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2006f8:
    // 0x2006f8: 0x50800042  beql        $a0, $zero, . + 4 + (0x42 << 2)
label_2006fc:
    if (ctx->pc == 0x2006FCu) {
        ctx->pc = 0x2006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F8u;
        // 0x2006fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200700u;
        goto label_200700;
    }
    ctx->pc = 0x2006F8u;
    {
        const bool branch_taken_0x2006f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006f8) {
            ctx->pc = 0x2006FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2006F8u;
            // 0x2006fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200804u;
            goto label_200804;
        }
    }
    ctx->pc = 0x200700u;
label_200700:
    // 0x200700: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200704:
    // 0x200704: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_200708:
    // 0x200708: 0x60f809  jalr        $v1
label_20070c:
    if (ctx->pc == 0x20070Cu) {
        ctx->pc = 0x200710u;
        goto label_200710;
    }
    ctx->pc = 0x200708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200708u, 0x200710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200710u;
label_200710:
    // 0x200710: 0x92620100  lbu         $v0, 0x100($s3)
    ctx->pc = 0x200710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 256)));
label_200714:
    // 0x200714: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_200718:
    if (ctx->pc == 0x200718u) {
        ctx->pc = 0x200718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200714u;
        // 0x200718: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20071Cu;
        goto label_20071c;
    }
    ctx->pc = 0x200714u;
    {
        const bool branch_taken_0x200714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200714u;
        // 0x200718: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200714) {
            ctx->pc = 0x20074Cu;
            goto label_20074c;
        }
    }
    ctx->pc = 0x20071Cu;
label_20071c:
    // 0x20071c: 0xc0805d6  jal         func_201758
label_200720:
    if (ctx->pc == 0x200720u) {
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200724u;
        goto label_200724;
    }
    ctx->pc = 0x20071Cu;
    SET_GPR_U32(ctx, 31, 0x200724u);
    ctx->pc = 0x200720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20071Cu;
    // 0x200720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x20071Cu, 0x200724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200724u;
label_200724:
    // 0x200724: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x200724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200728:
    // 0x200728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20072c:
    // 0x20072c: 0x10c2007d  beq         $a2, $v0, . + 4 + (0x7D << 2)
label_200730:
    if (ctx->pc == 0x200730u) {
        ctx->pc = 0x200730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20072Cu;
        // 0x200730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200734u;
        goto label_200734;
    }
    ctx->pc = 0x20072Cu;
    {
        const bool branch_taken_0x20072c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x200730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20072Cu;
        // 0x200730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20072c) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x200734u;
label_200734:
    // 0x200734: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_200738:
    // 0x200738: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20073c:
    // 0x20073c: 0xc0814ee  jal         func_2053B8
label_200740:
    if (ctx->pc == 0x200740u) {
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200744u;
        goto label_200744;
    }
    ctx->pc = 0x20073Cu;
    SET_GPR_U32(ctx, 31, 0x200744u);
    ctx->pc = 0x200740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20073Cu;
    // 0x200740: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2053B8u, 0x20073Cu, 0x200744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200744u;
label_200744:
    // 0x200744: 0x1000002d  b           . + 4 + (0x2D << 2)
label_200748:
    if (ctx->pc == 0x200748u) {
        ctx->pc = 0x200748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200744u;
        // 0x200748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20074Cu;
        goto label_20074c;
    }
    ctx->pc = 0x200744u;
    {
        const bool branch_taken_0x200744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200744u;
        // 0x200748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200744) {
            ctx->pc = 0x2007FCu;
            goto label_2007fc;
        }
    }
    ctx->pc = 0x20074Cu;
label_20074c:
    // 0x20074c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200750:
    // 0x200750: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_200754:
    // 0x200754: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_200758:
    if (ctx->pc == 0x200758u) {
        ctx->pc = 0x200758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200754u;
        // 0x200758: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20075Cu;
        goto label_20075c;
    }
    ctx->pc = 0x200754u;
    {
        const bool branch_taken_0x200754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200754u;
        // 0x200758: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200754) {
            ctx->pc = 0x20076Cu;
            goto label_20076c;
        }
    }
    ctx->pc = 0x20075Cu;
label_20075c:
    // 0x20075c: 0xc0dbe86  jal         func_36FA18
label_200760:
    if (ctx->pc == 0x200760u) {
        ctx->pc = 0x200760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20075Cu;
        // 0x200760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200764u;
        goto label_200764;
    }
    ctx->pc = 0x20075Cu;
    SET_GPR_U32(ctx, 31, 0x200764u);
    ctx->pc = 0x200760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20075Cu;
    // 0x200760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x20075Cu, 0x200764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200764u;
label_200764:
    // 0x200764: 0x10000025  b           . + 4 + (0x25 << 2)
label_200768:
    if (ctx->pc == 0x200768u) {
        ctx->pc = 0x200768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200764u;
        // 0x200768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20076Cu;
        goto label_20076c;
    }
    ctx->pc = 0x200764u;
    {
        const bool branch_taken_0x200764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200764u;
        // 0x200768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200764) {
            ctx->pc = 0x2007FCu;
            goto label_2007fc;
        }
    }
    ctx->pc = 0x20076Cu;
label_20076c:
    // 0x20076c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_200770:
    // 0x200770: 0x24650468  addiu       $a1, $v1, 0x468
    ctx->pc = 0x200770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1128));
label_200774:
    // 0x200774: 0xc0d74c6  jal         func_35D318
label_200778:
    if (ctx->pc == 0x200778u) {
        ctx->pc = 0x200778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200774u;
        // 0x200778: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20077Cu;
        goto label_20077c;
    }
    ctx->pc = 0x200774u;
    SET_GPR_U32(ctx, 31, 0x20077Cu);
    ctx->pc = 0x200778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200774u;
    // 0x200778: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200774u, 0x20077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20077Cu;
label_20077c:
    // 0x20077c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_200780:
    // 0x200780: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200784:
    // 0x200784: 0xc0d74a8  jal         func_35D2A0
label_200788:
    if (ctx->pc == 0x200788u) {
        ctx->pc = 0x200788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200784u;
        // 0x200788: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20078Cu;
        goto label_20078c;
    }
    ctx->pc = 0x200784u;
    SET_GPR_U32(ctx, 31, 0x20078Cu);
    ctx->pc = 0x200788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200784u;
    // 0x200788: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x200784u, 0x20078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20078Cu;
label_20078c:
    // 0x20078c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x20078cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_200790:
    // 0x200790: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x200790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200794:
    // 0x200794: 0xc0d74c6  jal         func_35D318
label_200798:
    if (ctx->pc == 0x200798u) {
        ctx->pc = 0x200798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200794u;
        // 0x200798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20079Cu;
        goto label_20079c;
    }
    ctx->pc = 0x200794u;
    SET_GPR_U32(ctx, 31, 0x20079Cu);
    ctx->pc = 0x200798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200794u;
    // 0x200798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200794u, 0x20079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20079Cu;
label_20079c:
    // 0x20079c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x20079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2007a0:
    // 0x2007a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2007a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2007a4:
    // 0x2007a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2007a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2007a8:
    // 0x2007a8: 0xc0d74c6  jal         func_35D318
label_2007ac:
    if (ctx->pc == 0x2007ACu) {
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B0u;
        goto label_2007b0;
    }
    ctx->pc = 0x2007A8u;
    SET_GPR_U32(ctx, 31, 0x2007B0u);
    ctx->pc = 0x2007ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007A8u;
    // 0x2007ac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2007A8u, 0x2007B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007B0u;
label_2007b0:
    // 0x2007b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2007b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2007b4:
    // 0x2007b4: 0xc0d7412  jal         func_35D048
label_2007b8:
    if (ctx->pc == 0x2007B8u) {
        ctx->pc = 0x2007B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007B4u;
        // 0x2007b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007BCu;
        goto label_2007bc;
    }
    ctx->pc = 0x2007B4u;
    SET_GPR_U32(ctx, 31, 0x2007BCu);
    ctx->pc = 0x2007B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007B4u;
    // 0x2007b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2007B4u, 0x2007BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007BCu;
label_2007bc:
    // 0x2007bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2007bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2007c0:
    // 0x2007c0: 0xc0d7412  jal         func_35D048
label_2007c4:
    if (ctx->pc == 0x2007C4u) {
        ctx->pc = 0x2007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007C0u;
        // 0x2007c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007C8u;
        goto label_2007c8;
    }
    ctx->pc = 0x2007C0u;
    SET_GPR_U32(ctx, 31, 0x2007C8u);
    ctx->pc = 0x2007C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007C0u;
    // 0x2007c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2007C0u, 0x2007C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007C8u;
label_2007c8:
    // 0x2007c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2007cc:
    // 0x2007cc: 0xc0d7412  jal         func_35D048
label_2007d0:
    if (ctx->pc == 0x2007D0u) {
        ctx->pc = 0x2007D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007CCu;
        // 0x2007d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007D4u;
        goto label_2007d4;
    }
    ctx->pc = 0x2007CCu;
    SET_GPR_U32(ctx, 31, 0x2007D4u);
    ctx->pc = 0x2007D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007CCu;
    // 0x2007d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2007CCu, 0x2007D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007D4u;
label_2007d4:
    // 0x2007d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2007d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2007d8:
    // 0x2007d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2007dc:
    // 0x2007dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2007dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2007e0:
    // 0x2007e0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2007e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2007e4:
    // 0x2007e4: 0x40f809  jalr        $v0
label_2007e8:
    if (ctx->pc == 0x2007E8u) {
        ctx->pc = 0x2007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E4u;
        // 0x2007e8: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007ECu;
        goto label_2007ec;
    }
    ctx->pc = 0x2007E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007ECu);
        ctx->pc = 0x2007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E4u;
        // 0x2007e8: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007E4u, 0x2007ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2007ECu;
label_2007ec:
    // 0x2007ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2007ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2007f0:
    // 0x2007f0: 0xc0d7412  jal         func_35D048
label_2007f4:
    if (ctx->pc == 0x2007F4u) {
        ctx->pc = 0x2007F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007F0u;
        // 0x2007f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007F8u;
        goto label_2007f8;
    }
    ctx->pc = 0x2007F0u;
    SET_GPR_U32(ctx, 31, 0x2007F8u);
    ctx->pc = 0x2007F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007F0u;
    // 0x2007f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2007F0u, 0x2007F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007F8u;
label_2007f8:
    // 0x2007f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2007f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2007fc:
    // 0x2007fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2007fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_200800:
    // 0x200800: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200804:
    // 0x200804: 0xc0d7412  jal         func_35D048
label_200808:
    if (ctx->pc == 0x200808u) {
        ctx->pc = 0x200808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200804u;
        // 0x200808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20080Cu;
        goto label_20080c;
    }
    ctx->pc = 0x200804u;
    SET_GPR_U32(ctx, 31, 0x20080Cu);
    ctx->pc = 0x200808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200804u;
    // 0x200808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200804u, 0x20080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20080Cu;
label_20080c:
    // 0x20080c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_200810:
    // 0x200810: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_200814:
    // 0x200814: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_200818:
    // 0x200818: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x200818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20081c:
    // 0x20081c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x20081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_200820:
    // 0x200820: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x200820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_200824:
    // 0x200824: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_200828:
    // 0x200828: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_20082c:
    if (ctx->pc == 0x20082Cu) {
        ctx->pc = 0x20082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200828u;
        // 0x20082c: 0xafa300b8  sw          $v1, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200830u;
        goto label_200830;
    }
    ctx->pc = 0x200828u;
    {
        const bool branch_taken_0x200828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200828u;
        // 0x20082c: 0xafa300b8  sw          $v1, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200828) {
            ctx->pc = 0x200680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200680;
        }
    }
    ctx->pc = 0x200830u;
label_200830:
    // 0x200830: 0x1000006f  b           . + 4 + (0x6F << 2)
label_200834:
    if (ctx->pc == 0x200834u) {
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200838u;
        goto label_200838;
    }
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200830) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_20083c:
    if (ctx->pc == 0x20083Cu) {
        ctx->pc = 0x20083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200838u;
        // 0x20083c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200840u;
        goto label_200840;
    }
    ctx->pc = 0x200838u;
    {
        const bool branch_taken_0x200838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200838u;
        // 0x20083c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200838) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x200840u;
label_200840:
    // 0x200840: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_200844:
    // 0x200844: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_200848:
    // 0x200848: 0x24570730  addiu       $s7, $v0, 0x730
    ctx->pc = 0x200848u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
label_20084c:
    // 0x20084c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200850:
    // 0x200850: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200854:
    // 0x200854: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200858:
    // 0x200858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20085c:
    // 0x20085c: 0xc0d74e8  jal         func_35D3A0
label_200860:
    if (ctx->pc == 0x200860u) {
        ctx->pc = 0x200860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20085Cu;
        // 0x200860: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200864u;
        goto label_200864;
    }
    ctx->pc = 0x20085Cu;
    SET_GPR_U32(ctx, 31, 0x200864u);
    ctx->pc = 0x200860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20085Cu;
    // 0x200860: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x20085Cu, 0x200864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200864u;
label_200864:
    // 0x200864: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x200864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_200868:
    // 0x200868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20086c:
    // 0x20086c: 0x24560740  addiu       $s6, $v0, 0x740
    ctx->pc = 0x20086cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_200870:
    // 0x200870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200874:
    // 0x200874: 0xc0d74c6  jal         func_35D318
label_200878:
    if (ctx->pc == 0x200878u) {
        ctx->pc = 0x200878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200874u;
        // 0x200878: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20087Cu;
        goto label_20087c;
    }
    ctx->pc = 0x200874u;
    SET_GPR_U32(ctx, 31, 0x20087Cu);
    ctx->pc = 0x200878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200874u;
    // 0x200878: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200874u, 0x20087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20087Cu;
label_20087c:
    // 0x20087c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200880:
    // 0x200880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200884:
    // 0x200884: 0x24559350  addiu       $s5, $v0, -0x6CB0
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
label_200888:
    // 0x200888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x200888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20088c:
    // 0x20088c: 0xc0d74c6  jal         func_35D318
label_200890:
    if (ctx->pc == 0x200890u) {
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8ea60008  lw          $a2, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200894u;
        goto label_200894;
    }
    ctx->pc = 0x20088Cu;
    SET_GPR_U32(ctx, 31, 0x200894u);
    ctx->pc = 0x200890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20088Cu;
    // 0x200890: 0x8ea60008  lw          $a2, 0x8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x20088Cu, 0x200894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200894u;
label_200894:
    // 0x200894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200898:
    // 0x200898: 0xc0d7412  jal         func_35D048
label_20089c:
    if (ctx->pc == 0x20089Cu) {
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008A0u;
        goto label_2008a0;
    }
    ctx->pc = 0x200898u;
    SET_GPR_U32(ctx, 31, 0x2008A0u);
    ctx->pc = 0x20089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200898u;
    // 0x20089c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200898u, 0x2008A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008A0u;
label_2008a0:
    // 0x2008a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2008a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2008a4:
    // 0x2008a4: 0xc0d7412  jal         func_35D048
label_2008a8:
    if (ctx->pc == 0x2008A8u) {
        ctx->pc = 0x2008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008A4u;
        // 0x2008a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008ACu;
        goto label_2008ac;
    }
    ctx->pc = 0x2008A4u;
    SET_GPR_U32(ctx, 31, 0x2008ACu);
    ctx->pc = 0x2008A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008A4u;
    // 0x2008a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2008A4u, 0x2008ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008ACu;
label_2008ac:
    // 0x2008ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2008b0:
    // 0x2008b0: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
label_2008b4:
    if (ctx->pc == 0x2008B4u) {
        ctx->pc = 0x2008B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B0u;
        // 0x2008b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008B8u;
        goto label_2008b8;
    }
    ctx->pc = 0x2008B0u;
    {
        const bool branch_taken_0x2008b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2008b0) {
            ctx->pc = 0x2008B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2008B0u;
            // 0x2008b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2009E4u;
            goto label_2009e4;
        }
    }
    ctx->pc = 0x2008B8u;
label_2008b8:
    // 0x2008b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2008bc:
    // 0x2008bc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2008c0:
    // 0x2008c0: 0x60f809  jalr        $v1
label_2008c4:
    if (ctx->pc == 0x2008C4u) {
        ctx->pc = 0x2008C8u;
        goto label_2008c8;
    }
    ctx->pc = 0x2008C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2008C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008C0u, 0x2008C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2008C8u;
label_2008c8:
    // 0x2008c8: 0x92620100  lbu         $v0, 0x100($s3)
    ctx->pc = 0x2008c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 256)));
label_2008cc:
    // 0x2008cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2008d0:
    if (ctx->pc == 0x2008D0u) {
        ctx->pc = 0x2008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008CCu;
        // 0x2008d0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008D4u;
        goto label_2008d4;
    }
    ctx->pc = 0x2008CCu;
    {
        const bool branch_taken_0x2008cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008CCu;
        // 0x2008d0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008cc) {
            ctx->pc = 0x200904u;
            goto label_200904;
        }
    }
    ctx->pc = 0x2008D4u;
label_2008d4:
    // 0x2008d4: 0xc0805d6  jal         func_201758
label_2008d8:
    if (ctx->pc == 0x2008D8u) {
        ctx->pc = 0x2008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008D4u;
        // 0x2008d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008DCu;
        goto label_2008dc;
    }
    ctx->pc = 0x2008D4u;
    SET_GPR_U32(ctx, 31, 0x2008DCu);
    ctx->pc = 0x2008D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008D4u;
    // 0x2008d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x2008D4u, 0x2008DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008DCu;
label_2008dc:
    // 0x2008dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2008e0:
    // 0x2008e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2008e4:
    // 0x2008e4: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
label_2008e8:
    if (ctx->pc == 0x2008E8u) {
        ctx->pc = 0x2008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E4u;
        // 0x2008e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008ECu;
        goto label_2008ec;
    }
    ctx->pc = 0x2008E4u;
    {
        const bool branch_taken_0x2008e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E4u;
        // 0x2008e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e4) {
            ctx->pc = 0x200924u;
            goto label_200924;
        }
    }
    ctx->pc = 0x2008ECu;
label_2008ec:
    // 0x2008ec: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_2008f0:
    // 0x2008f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2008f4:
    // 0x2008f4: 0xc0814ee  jal         func_2053B8
label_2008f8:
    if (ctx->pc == 0x2008F8u) {
        ctx->pc = 0x2008F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008F4u;
        // 0x2008f8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008FCu;
        goto label_2008fc;
    }
    ctx->pc = 0x2008F4u;
    SET_GPR_U32(ctx, 31, 0x2008FCu);
    ctx->pc = 0x2008F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008F4u;
    // 0x2008f8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2053B8u, 0x2008F4u, 0x2008FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008FCu;
label_2008fc:
    // 0x2008fc: 0x10000036  b           . + 4 + (0x36 << 2)
label_200900:
    if (ctx->pc == 0x200900u) {
        ctx->pc = 0x200900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008FCu;
        // 0x200900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200904u;
        goto label_200904;
    }
    ctx->pc = 0x2008FCu;
    {
        const bool branch_taken_0x2008fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008FCu;
        // 0x200900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008fc) {
            ctx->pc = 0x2009D8u;
            goto label_2009d8;
        }
    }
    ctx->pc = 0x200904u;
label_200904:
    // 0x200904: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_200908:
    // 0x200908: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_20090c:
    // 0x20090c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_200910:
    if (ctx->pc == 0x200910u) {
        ctx->pc = 0x200910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20090Cu;
        // 0x200910: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200914u;
        goto label_200914;
    }
    ctx->pc = 0x20090Cu;
    {
        const bool branch_taken_0x20090c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20090Cu;
        // 0x200910: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20090c) {
            ctx->pc = 0x200944u;
            goto label_200944;
        }
    }
    ctx->pc = 0x200914u;
label_200914:
    // 0x200914: 0xc0dbe86  jal         func_36FA18
label_200918:
    if (ctx->pc == 0x200918u) {
        ctx->pc = 0x200918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200914u;
        // 0x200918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20091Cu;
        goto label_20091c;
    }
    ctx->pc = 0x200914u;
    SET_GPR_U32(ctx, 31, 0x20091Cu);
    ctx->pc = 0x200918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200914u;
    // 0x200918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x200914u, 0x20091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20091Cu;
label_20091c:
    // 0x20091c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_200920:
    if (ctx->pc == 0x200920u) {
        ctx->pc = 0x200920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20091Cu;
        // 0x200920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200924u;
        goto label_200924;
    }
    ctx->pc = 0x20091Cu;
    {
        const bool branch_taken_0x20091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20091Cu;
        // 0x200920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20091c) {
            ctx->pc = 0x2009D8u;
            goto label_2009d8;
        }
    }
    ctx->pc = 0x200924u;
label_200924:
    // 0x200924: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x200924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200928:
    // 0x200928: 0xc0d7412  jal         func_35D048
label_20092c:
    if (ctx->pc == 0x20092Cu) {
        ctx->pc = 0x20092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200928u;
        // 0x20092c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200930u;
        goto label_200930;
    }
    ctx->pc = 0x200928u;
    SET_GPR_U32(ctx, 31, 0x200930u);
    ctx->pc = 0x20092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200928u;
    // 0x20092c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200928u, 0x200930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200930u;
label_200930:
    // 0x200930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200934:
    // 0x200934: 0xc0d7412  jal         func_35D048
label_200938:
    if (ctx->pc == 0x200938u) {
        ctx->pc = 0x200938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200934u;
        // 0x200938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20093Cu;
        goto label_20093c;
    }
    ctx->pc = 0x200934u;
    SET_GPR_U32(ctx, 31, 0x20093Cu);
    ctx->pc = 0x200938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200934u;
    // 0x200938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200934u, 0x20093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20093Cu;
label_20093c:
    // 0x20093c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_200940:
    if (ctx->pc == 0x200940u) {
        ctx->pc = 0x200940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20093Cu;
        // 0x200940: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200944u;
        goto label_200944;
    }
    ctx->pc = 0x20093Cu;
    {
        const bool branch_taken_0x20093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20093Cu;
        // 0x200940: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20093c) {
            ctx->pc = 0x2009FCu;
            goto label_2009fc;
        }
    }
    ctx->pc = 0x200944u;
label_200944:
    // 0x200944: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_200948:
    // 0x200948: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20094c:
    // 0x20094c: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_200950:
    // 0x200950: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x200950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_200954:
    // 0x200954: 0xc0d74c6  jal         func_35D318
label_200958:
    if (ctx->pc == 0x200958u) {
        ctx->pc = 0x200958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200954u;
        // 0x200958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20095Cu;
        goto label_20095c;
    }
    ctx->pc = 0x200954u;
    SET_GPR_U32(ctx, 31, 0x20095Cu);
    ctx->pc = 0x200958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200954u;
    // 0x200958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200954u, 0x20095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20095Cu;
label_20095c:
    // 0x20095c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20095cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200960:
    // 0x200960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200964:
    // 0x200964: 0xc0d74a8  jal         func_35D2A0
label_200968:
    if (ctx->pc == 0x200968u) {
        ctx->pc = 0x200968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200964u;
        // 0x200968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20096Cu;
        goto label_20096c;
    }
    ctx->pc = 0x200964u;
    SET_GPR_U32(ctx, 31, 0x20096Cu);
    ctx->pc = 0x200968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200964u;
    // 0x200968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x200964u, 0x20096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20096Cu;
label_20096c:
    // 0x20096c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20096cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200970:
    // 0x200970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200974:
    // 0x200974: 0xc0d74c6  jal         func_35D318
label_200978:
    if (ctx->pc == 0x200978u) {
        ctx->pc = 0x200978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200974u;
        // 0x200978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20097Cu;
        goto label_20097c;
    }
    ctx->pc = 0x200974u;
    SET_GPR_U32(ctx, 31, 0x20097Cu);
    ctx->pc = 0x200978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200974u;
    // 0x200978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200974u, 0x20097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20097Cu;
label_20097c:
    // 0x20097c: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_200980:
    // 0x200980: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x200980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200984:
    // 0x200984: 0xc0d74c6  jal         func_35D318
label_200988:
    if (ctx->pc == 0x200988u) {
        ctx->pc = 0x200988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200984u;
        // 0x200988: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20098Cu;
        goto label_20098c;
    }
    ctx->pc = 0x200984u;
    SET_GPR_U32(ctx, 31, 0x20098Cu);
    ctx->pc = 0x200988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200984u;
    // 0x200988: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x200984u, 0x20098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20098Cu;
label_20098c:
    // 0x20098c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200990:
    // 0x200990: 0xc0d7412  jal         func_35D048
label_200994:
    if (ctx->pc == 0x200994u) {
        ctx->pc = 0x200994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200990u;
        // 0x200994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200998u;
        goto label_200998;
    }
    ctx->pc = 0x200990u;
    SET_GPR_U32(ctx, 31, 0x200998u);
    ctx->pc = 0x200994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200990u;
    // 0x200994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x200990u, 0x200998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200998u;
label_200998:
    // 0x200998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20099c:
    // 0x20099c: 0xc0d7412  jal         func_35D048
label_2009a0:
    if (ctx->pc == 0x2009A0u) {
        ctx->pc = 0x2009A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20099Cu;
        // 0x2009a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009A4u;
        goto label_2009a4;
    }
    ctx->pc = 0x20099Cu;
    SET_GPR_U32(ctx, 31, 0x2009A4u);
    ctx->pc = 0x2009A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20099Cu;
    // 0x2009a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20099Cu, 0x2009A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009A4u;
label_2009a4:
    // 0x2009a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2009a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2009a8:
    // 0x2009a8: 0xc0d7412  jal         func_35D048
label_2009ac:
    if (ctx->pc == 0x2009ACu) {
        ctx->pc = 0x2009ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009A8u;
        // 0x2009ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009B0u;
        goto label_2009b0;
    }
    ctx->pc = 0x2009A8u;
    SET_GPR_U32(ctx, 31, 0x2009B0u);
    ctx->pc = 0x2009ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009A8u;
    // 0x2009ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2009A8u, 0x2009B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009B0u;
label_2009b0:
    // 0x2009b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2009b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2009b4:
    // 0x2009b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2009b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2009b8:
    // 0x2009b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2009bc:
    // 0x2009bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2009c0:
    // 0x2009c0: 0x40f809  jalr        $v0
label_2009c4:
    if (ctx->pc == 0x2009C4u) {
        ctx->pc = 0x2009C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C0u;
        // 0x2009c4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009C8u;
        goto label_2009c8;
    }
    ctx->pc = 0x2009C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2009C8u);
        ctx->pc = 0x2009C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C0u;
        // 0x2009c4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2009C0u, 0x2009C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2009C8u;
label_2009c8:
    // 0x2009c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2009c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2009cc:
    // 0x2009cc: 0xc0d7412  jal         func_35D048
label_2009d0:
    if (ctx->pc == 0x2009D0u) {
        ctx->pc = 0x2009D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009CCu;
        // 0x2009d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009D4u;
        goto label_2009d4;
    }
    ctx->pc = 0x2009CCu;
    SET_GPR_U32(ctx, 31, 0x2009D4u);
    ctx->pc = 0x2009D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009CCu;
    // 0x2009d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2009CCu, 0x2009D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009D4u;
label_2009d4:
    // 0x2009d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2009d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2009d8:
    // 0x2009d8: 0xa262003c  sb          $v0, 0x3C($s3)
    ctx->pc = 0x2009d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 60), (uint8_t)GPR_U32(ctx, 2));
label_2009dc:
    // 0x2009dc: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x2009dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_2009e0:
    // 0x2009e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2009e4:
    // 0x2009e4: 0xc0d7412  jal         func_35D048
label_2009e8:
    if (ctx->pc == 0x2009E8u) {
        ctx->pc = 0x2009E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009E4u;
        // 0x2009e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009ECu;
        goto label_2009ec;
    }
    ctx->pc = 0x2009E4u;
    SET_GPR_U32(ctx, 31, 0x2009ECu);
    ctx->pc = 0x2009E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009E4u;
    // 0x2009e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2009E4u, 0x2009ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009ECu;
label_2009ec:
    // 0x2009ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2009ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2009f0:
    // 0x2009f0: 0xc0d7412  jal         func_35D048
label_2009f4:
    if (ctx->pc == 0x2009F4u) {
        ctx->pc = 0x2009F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009F0u;
        // 0x2009f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2009F8u;
        goto label_2009f8;
    }
    ctx->pc = 0x2009F0u;
    SET_GPR_U32(ctx, 31, 0x2009F8u);
    ctx->pc = 0x2009F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F0u;
    // 0x2009f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2009F0u, 0x2009F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009F8u;
label_2009f8:
    // 0x2009f8: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2009fc:
    // 0x2009fc: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2009fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_200a00:
    // 0x200a00: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_200a04:
    // 0x200a04: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x200a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_200a08:
    // 0x200a08: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x200a08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_200a0c:
    // 0x200a0c: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x200a0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_200a10:
    // 0x200a10: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x200a10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_200a14:
    // 0x200a14: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_200a18:
    // 0x200a18: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x200a18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_200a1c:
    // 0x200a1c: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x200a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_200a20:
    // 0x200a20: 0x3e00008  jr          $ra
label_200a24:
    if (ctx->pc == 0x200A24u) {
        ctx->pc = 0x200A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A20u;
        // 0x200a24: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A28u;
        goto label_fallthrough_0x200a20;
    }
    ctx->pc = 0x200A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A20u;
        // 0x200a24: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200a20:
    ctx->pc = 0x200A28u;
}
