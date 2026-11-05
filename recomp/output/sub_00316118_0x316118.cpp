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

// Function: sub_00316118
// Address: 0x316118 - 0x3169a0
void sub_00316118_0x316118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316118_0x316118");
#endif

    switch (ctx->pc) {
        case 0x316118u: goto label_316118;
        case 0x31611cu: goto label_31611c;
        case 0x316120u: goto label_316120;
        case 0x316124u: goto label_316124;
        case 0x316128u: goto label_316128;
        case 0x31612cu: goto label_31612c;
        case 0x316130u: goto label_316130;
        case 0x316134u: goto label_316134;
        case 0x316138u: goto label_316138;
        case 0x31613cu: goto label_31613c;
        case 0x316140u: goto label_316140;
        case 0x316144u: goto label_316144;
        case 0x316148u: goto label_316148;
        case 0x31614cu: goto label_31614c;
        case 0x316150u: goto label_316150;
        case 0x316154u: goto label_316154;
        case 0x316158u: goto label_316158;
        case 0x31615cu: goto label_31615c;
        case 0x316160u: goto label_316160;
        case 0x316164u: goto label_316164;
        case 0x316168u: goto label_316168;
        case 0x31616cu: goto label_31616c;
        case 0x316170u: goto label_316170;
        case 0x316174u: goto label_316174;
        case 0x316178u: goto label_316178;
        case 0x31617cu: goto label_31617c;
        case 0x316180u: goto label_316180;
        case 0x316184u: goto label_316184;
        case 0x316188u: goto label_316188;
        case 0x31618cu: goto label_31618c;
        case 0x316190u: goto label_316190;
        case 0x316194u: goto label_316194;
        case 0x316198u: goto label_316198;
        case 0x31619cu: goto label_31619c;
        case 0x3161a0u: goto label_3161a0;
        case 0x3161a4u: goto label_3161a4;
        case 0x3161a8u: goto label_3161a8;
        case 0x3161acu: goto label_3161ac;
        case 0x3161b0u: goto label_3161b0;
        case 0x3161b4u: goto label_3161b4;
        case 0x3161b8u: goto label_3161b8;
        case 0x3161bcu: goto label_3161bc;
        case 0x3161c0u: goto label_3161c0;
        case 0x3161c4u: goto label_3161c4;
        case 0x3161c8u: goto label_3161c8;
        case 0x3161ccu: goto label_3161cc;
        case 0x3161d0u: goto label_3161d0;
        case 0x3161d4u: goto label_3161d4;
        case 0x3161d8u: goto label_3161d8;
        case 0x3161dcu: goto label_3161dc;
        case 0x3161e0u: goto label_3161e0;
        case 0x3161e4u: goto label_3161e4;
        case 0x3161e8u: goto label_3161e8;
        case 0x3161ecu: goto label_3161ec;
        case 0x3161f0u: goto label_3161f0;
        case 0x3161f4u: goto label_3161f4;
        case 0x3161f8u: goto label_3161f8;
        case 0x3161fcu: goto label_3161fc;
        case 0x316200u: goto label_316200;
        case 0x316204u: goto label_316204;
        case 0x316208u: goto label_316208;
        case 0x31620cu: goto label_31620c;
        case 0x316210u: goto label_316210;
        case 0x316214u: goto label_316214;
        case 0x316218u: goto label_316218;
        case 0x31621cu: goto label_31621c;
        case 0x316220u: goto label_316220;
        case 0x316224u: goto label_316224;
        case 0x316228u: goto label_316228;
        case 0x31622cu: goto label_31622c;
        case 0x316230u: goto label_316230;
        case 0x316234u: goto label_316234;
        case 0x316238u: goto label_316238;
        case 0x31623cu: goto label_31623c;
        case 0x316240u: goto label_316240;
        case 0x316244u: goto label_316244;
        case 0x316248u: goto label_316248;
        case 0x31624cu: goto label_31624c;
        case 0x316250u: goto label_316250;
        case 0x316254u: goto label_316254;
        case 0x316258u: goto label_316258;
        case 0x31625cu: goto label_31625c;
        case 0x316260u: goto label_316260;
        case 0x316264u: goto label_316264;
        case 0x316268u: goto label_316268;
        case 0x31626cu: goto label_31626c;
        case 0x316270u: goto label_316270;
        case 0x316274u: goto label_316274;
        case 0x316278u: goto label_316278;
        case 0x31627cu: goto label_31627c;
        case 0x316280u: goto label_316280;
        case 0x316284u: goto label_316284;
        case 0x316288u: goto label_316288;
        case 0x31628cu: goto label_31628c;
        case 0x316290u: goto label_316290;
        case 0x316294u: goto label_316294;
        case 0x316298u: goto label_316298;
        case 0x31629cu: goto label_31629c;
        case 0x3162a0u: goto label_3162a0;
        case 0x3162a4u: goto label_3162a4;
        case 0x3162a8u: goto label_3162a8;
        case 0x3162acu: goto label_3162ac;
        case 0x3162b0u: goto label_3162b0;
        case 0x3162b4u: goto label_3162b4;
        case 0x3162b8u: goto label_3162b8;
        case 0x3162bcu: goto label_3162bc;
        case 0x3162c0u: goto label_3162c0;
        case 0x3162c4u: goto label_3162c4;
        case 0x3162c8u: goto label_3162c8;
        case 0x3162ccu: goto label_3162cc;
        case 0x3162d0u: goto label_3162d0;
        case 0x3162d4u: goto label_3162d4;
        case 0x3162d8u: goto label_3162d8;
        case 0x3162dcu: goto label_3162dc;
        case 0x3162e0u: goto label_3162e0;
        case 0x3162e4u: goto label_3162e4;
        case 0x3162e8u: goto label_3162e8;
        case 0x3162ecu: goto label_3162ec;
        case 0x3162f0u: goto label_3162f0;
        case 0x3162f4u: goto label_3162f4;
        case 0x3162f8u: goto label_3162f8;
        case 0x3162fcu: goto label_3162fc;
        case 0x316300u: goto label_316300;
        case 0x316304u: goto label_316304;
        case 0x316308u: goto label_316308;
        case 0x31630cu: goto label_31630c;
        case 0x316310u: goto label_316310;
        case 0x316314u: goto label_316314;
        case 0x316318u: goto label_316318;
        case 0x31631cu: goto label_31631c;
        case 0x316320u: goto label_316320;
        case 0x316324u: goto label_316324;
        case 0x316328u: goto label_316328;
        case 0x31632cu: goto label_31632c;
        case 0x316330u: goto label_316330;
        case 0x316334u: goto label_316334;
        case 0x316338u: goto label_316338;
        case 0x31633cu: goto label_31633c;
        case 0x316340u: goto label_316340;
        case 0x316344u: goto label_316344;
        case 0x316348u: goto label_316348;
        case 0x31634cu: goto label_31634c;
        case 0x316350u: goto label_316350;
        case 0x316354u: goto label_316354;
        case 0x316358u: goto label_316358;
        case 0x31635cu: goto label_31635c;
        case 0x316360u: goto label_316360;
        case 0x316364u: goto label_316364;
        case 0x316368u: goto label_316368;
        case 0x31636cu: goto label_31636c;
        case 0x316370u: goto label_316370;
        case 0x316374u: goto label_316374;
        case 0x316378u: goto label_316378;
        case 0x31637cu: goto label_31637c;
        case 0x316380u: goto label_316380;
        case 0x316384u: goto label_316384;
        case 0x316388u: goto label_316388;
        case 0x31638cu: goto label_31638c;
        case 0x316390u: goto label_316390;
        case 0x316394u: goto label_316394;
        case 0x316398u: goto label_316398;
        case 0x31639cu: goto label_31639c;
        case 0x3163a0u: goto label_3163a0;
        case 0x3163a4u: goto label_3163a4;
        case 0x3163a8u: goto label_3163a8;
        case 0x3163acu: goto label_3163ac;
        case 0x3163b0u: goto label_3163b0;
        case 0x3163b4u: goto label_3163b4;
        case 0x3163b8u: goto label_3163b8;
        case 0x3163bcu: goto label_3163bc;
        case 0x3163c0u: goto label_3163c0;
        case 0x3163c4u: goto label_3163c4;
        case 0x3163c8u: goto label_3163c8;
        case 0x3163ccu: goto label_3163cc;
        case 0x3163d0u: goto label_3163d0;
        case 0x3163d4u: goto label_3163d4;
        case 0x3163d8u: goto label_3163d8;
        case 0x3163dcu: goto label_3163dc;
        case 0x3163e0u: goto label_3163e0;
        case 0x3163e4u: goto label_3163e4;
        case 0x3163e8u: goto label_3163e8;
        case 0x3163ecu: goto label_3163ec;
        case 0x3163f0u: goto label_3163f0;
        case 0x3163f4u: goto label_3163f4;
        case 0x3163f8u: goto label_3163f8;
        case 0x3163fcu: goto label_3163fc;
        case 0x316400u: goto label_316400;
        case 0x316404u: goto label_316404;
        case 0x316408u: goto label_316408;
        case 0x31640cu: goto label_31640c;
        case 0x316410u: goto label_316410;
        case 0x316414u: goto label_316414;
        case 0x316418u: goto label_316418;
        case 0x31641cu: goto label_31641c;
        case 0x316420u: goto label_316420;
        case 0x316424u: goto label_316424;
        case 0x316428u: goto label_316428;
        case 0x31642cu: goto label_31642c;
        case 0x316430u: goto label_316430;
        case 0x316434u: goto label_316434;
        case 0x316438u: goto label_316438;
        case 0x31643cu: goto label_31643c;
        case 0x316440u: goto label_316440;
        case 0x316444u: goto label_316444;
        case 0x316448u: goto label_316448;
        case 0x31644cu: goto label_31644c;
        case 0x316450u: goto label_316450;
        case 0x316454u: goto label_316454;
        case 0x316458u: goto label_316458;
        case 0x31645cu: goto label_31645c;
        case 0x316460u: goto label_316460;
        case 0x316464u: goto label_316464;
        case 0x316468u: goto label_316468;
        case 0x31646cu: goto label_31646c;
        case 0x316470u: goto label_316470;
        case 0x316474u: goto label_316474;
        case 0x316478u: goto label_316478;
        case 0x31647cu: goto label_31647c;
        case 0x316480u: goto label_316480;
        case 0x316484u: goto label_316484;
        case 0x316488u: goto label_316488;
        case 0x31648cu: goto label_31648c;
        case 0x316490u: goto label_316490;
        case 0x316494u: goto label_316494;
        case 0x316498u: goto label_316498;
        case 0x31649cu: goto label_31649c;
        case 0x3164a0u: goto label_3164a0;
        case 0x3164a4u: goto label_3164a4;
        case 0x3164a8u: goto label_3164a8;
        case 0x3164acu: goto label_3164ac;
        case 0x3164b0u: goto label_3164b0;
        case 0x3164b4u: goto label_3164b4;
        case 0x3164b8u: goto label_3164b8;
        case 0x3164bcu: goto label_3164bc;
        case 0x3164c0u: goto label_3164c0;
        case 0x3164c4u: goto label_3164c4;
        case 0x3164c8u: goto label_3164c8;
        case 0x3164ccu: goto label_3164cc;
        case 0x3164d0u: goto label_3164d0;
        case 0x3164d4u: goto label_3164d4;
        case 0x3164d8u: goto label_3164d8;
        case 0x3164dcu: goto label_3164dc;
        case 0x3164e0u: goto label_3164e0;
        case 0x3164e4u: goto label_3164e4;
        case 0x3164e8u: goto label_3164e8;
        case 0x3164ecu: goto label_3164ec;
        case 0x3164f0u: goto label_3164f0;
        case 0x3164f4u: goto label_3164f4;
        case 0x3164f8u: goto label_3164f8;
        case 0x3164fcu: goto label_3164fc;
        case 0x316500u: goto label_316500;
        case 0x316504u: goto label_316504;
        case 0x316508u: goto label_316508;
        case 0x31650cu: goto label_31650c;
        case 0x316510u: goto label_316510;
        case 0x316514u: goto label_316514;
        case 0x316518u: goto label_316518;
        case 0x31651cu: goto label_31651c;
        case 0x316520u: goto label_316520;
        case 0x316524u: goto label_316524;
        case 0x316528u: goto label_316528;
        case 0x31652cu: goto label_31652c;
        case 0x316530u: goto label_316530;
        case 0x316534u: goto label_316534;
        case 0x316538u: goto label_316538;
        case 0x31653cu: goto label_31653c;
        case 0x316540u: goto label_316540;
        case 0x316544u: goto label_316544;
        case 0x316548u: goto label_316548;
        case 0x31654cu: goto label_31654c;
        case 0x316550u: goto label_316550;
        case 0x316554u: goto label_316554;
        case 0x316558u: goto label_316558;
        case 0x31655cu: goto label_31655c;
        case 0x316560u: goto label_316560;
        case 0x316564u: goto label_316564;
        case 0x316568u: goto label_316568;
        case 0x31656cu: goto label_31656c;
        case 0x316570u: goto label_316570;
        case 0x316574u: goto label_316574;
        case 0x316578u: goto label_316578;
        case 0x31657cu: goto label_31657c;
        case 0x316580u: goto label_316580;
        case 0x316584u: goto label_316584;
        case 0x316588u: goto label_316588;
        case 0x31658cu: goto label_31658c;
        case 0x316590u: goto label_316590;
        case 0x316594u: goto label_316594;
        case 0x316598u: goto label_316598;
        case 0x31659cu: goto label_31659c;
        case 0x3165a0u: goto label_3165a0;
        case 0x3165a4u: goto label_3165a4;
        case 0x3165a8u: goto label_3165a8;
        case 0x3165acu: goto label_3165ac;
        case 0x3165b0u: goto label_3165b0;
        case 0x3165b4u: goto label_3165b4;
        case 0x3165b8u: goto label_3165b8;
        case 0x3165bcu: goto label_3165bc;
        case 0x3165c0u: goto label_3165c0;
        case 0x3165c4u: goto label_3165c4;
        case 0x3165c8u: goto label_3165c8;
        case 0x3165ccu: goto label_3165cc;
        case 0x3165d0u: goto label_3165d0;
        case 0x3165d4u: goto label_3165d4;
        case 0x3165d8u: goto label_3165d8;
        case 0x3165dcu: goto label_3165dc;
        case 0x3165e0u: goto label_3165e0;
        case 0x3165e4u: goto label_3165e4;
        case 0x3165e8u: goto label_3165e8;
        case 0x3165ecu: goto label_3165ec;
        case 0x3165f0u: goto label_3165f0;
        case 0x3165f4u: goto label_3165f4;
        case 0x3165f8u: goto label_3165f8;
        case 0x3165fcu: goto label_3165fc;
        case 0x316600u: goto label_316600;
        case 0x316604u: goto label_316604;
        case 0x316608u: goto label_316608;
        case 0x31660cu: goto label_31660c;
        case 0x316610u: goto label_316610;
        case 0x316614u: goto label_316614;
        case 0x316618u: goto label_316618;
        case 0x31661cu: goto label_31661c;
        case 0x316620u: goto label_316620;
        case 0x316624u: goto label_316624;
        case 0x316628u: goto label_316628;
        case 0x31662cu: goto label_31662c;
        case 0x316630u: goto label_316630;
        case 0x316634u: goto label_316634;
        case 0x316638u: goto label_316638;
        case 0x31663cu: goto label_31663c;
        case 0x316640u: goto label_316640;
        case 0x316644u: goto label_316644;
        case 0x316648u: goto label_316648;
        case 0x31664cu: goto label_31664c;
        case 0x316650u: goto label_316650;
        case 0x316654u: goto label_316654;
        case 0x316658u: goto label_316658;
        case 0x31665cu: goto label_31665c;
        case 0x316660u: goto label_316660;
        case 0x316664u: goto label_316664;
        case 0x316668u: goto label_316668;
        case 0x31666cu: goto label_31666c;
        case 0x316670u: goto label_316670;
        case 0x316674u: goto label_316674;
        case 0x316678u: goto label_316678;
        case 0x31667cu: goto label_31667c;
        case 0x316680u: goto label_316680;
        case 0x316684u: goto label_316684;
        case 0x316688u: goto label_316688;
        case 0x31668cu: goto label_31668c;
        case 0x316690u: goto label_316690;
        case 0x316694u: goto label_316694;
        case 0x316698u: goto label_316698;
        case 0x31669cu: goto label_31669c;
        case 0x3166a0u: goto label_3166a0;
        case 0x3166a4u: goto label_3166a4;
        case 0x3166a8u: goto label_3166a8;
        case 0x3166acu: goto label_3166ac;
        case 0x3166b0u: goto label_3166b0;
        case 0x3166b4u: goto label_3166b4;
        case 0x3166b8u: goto label_3166b8;
        case 0x3166bcu: goto label_3166bc;
        case 0x3166c0u: goto label_3166c0;
        case 0x3166c4u: goto label_3166c4;
        case 0x3166c8u: goto label_3166c8;
        case 0x3166ccu: goto label_3166cc;
        case 0x3166d0u: goto label_3166d0;
        case 0x3166d4u: goto label_3166d4;
        case 0x3166d8u: goto label_3166d8;
        case 0x3166dcu: goto label_3166dc;
        case 0x3166e0u: goto label_3166e0;
        case 0x3166e4u: goto label_3166e4;
        case 0x3166e8u: goto label_3166e8;
        case 0x3166ecu: goto label_3166ec;
        case 0x3166f0u: goto label_3166f0;
        case 0x3166f4u: goto label_3166f4;
        case 0x3166f8u: goto label_3166f8;
        case 0x3166fcu: goto label_3166fc;
        case 0x316700u: goto label_316700;
        case 0x316704u: goto label_316704;
        case 0x316708u: goto label_316708;
        case 0x31670cu: goto label_31670c;
        case 0x316710u: goto label_316710;
        case 0x316714u: goto label_316714;
        case 0x316718u: goto label_316718;
        case 0x31671cu: goto label_31671c;
        case 0x316720u: goto label_316720;
        case 0x316724u: goto label_316724;
        case 0x316728u: goto label_316728;
        case 0x31672cu: goto label_31672c;
        case 0x316730u: goto label_316730;
        case 0x316734u: goto label_316734;
        case 0x316738u: goto label_316738;
        case 0x31673cu: goto label_31673c;
        case 0x316740u: goto label_316740;
        case 0x316744u: goto label_316744;
        case 0x316748u: goto label_316748;
        case 0x31674cu: goto label_31674c;
        case 0x316750u: goto label_316750;
        case 0x316754u: goto label_316754;
        case 0x316758u: goto label_316758;
        case 0x31675cu: goto label_31675c;
        case 0x316760u: goto label_316760;
        case 0x316764u: goto label_316764;
        case 0x316768u: goto label_316768;
        case 0x31676cu: goto label_31676c;
        case 0x316770u: goto label_316770;
        case 0x316774u: goto label_316774;
        case 0x316778u: goto label_316778;
        case 0x31677cu: goto label_31677c;
        case 0x316780u: goto label_316780;
        case 0x316784u: goto label_316784;
        case 0x316788u: goto label_316788;
        case 0x31678cu: goto label_31678c;
        case 0x316790u: goto label_316790;
        case 0x316794u: goto label_316794;
        case 0x316798u: goto label_316798;
        case 0x31679cu: goto label_31679c;
        case 0x3167a0u: goto label_3167a0;
        case 0x3167a4u: goto label_3167a4;
        case 0x3167a8u: goto label_3167a8;
        case 0x3167acu: goto label_3167ac;
        case 0x3167b0u: goto label_3167b0;
        case 0x3167b4u: goto label_3167b4;
        case 0x3167b8u: goto label_3167b8;
        case 0x3167bcu: goto label_3167bc;
        case 0x3167c0u: goto label_3167c0;
        case 0x3167c4u: goto label_3167c4;
        case 0x3167c8u: goto label_3167c8;
        case 0x3167ccu: goto label_3167cc;
        case 0x3167d0u: goto label_3167d0;
        case 0x3167d4u: goto label_3167d4;
        case 0x3167d8u: goto label_3167d8;
        case 0x3167dcu: goto label_3167dc;
        case 0x3167e0u: goto label_3167e0;
        case 0x3167e4u: goto label_3167e4;
        case 0x3167e8u: goto label_3167e8;
        case 0x3167ecu: goto label_3167ec;
        case 0x3167f0u: goto label_3167f0;
        case 0x3167f4u: goto label_3167f4;
        case 0x3167f8u: goto label_3167f8;
        case 0x3167fcu: goto label_3167fc;
        case 0x316800u: goto label_316800;
        case 0x316804u: goto label_316804;
        case 0x316808u: goto label_316808;
        case 0x31680cu: goto label_31680c;
        case 0x316810u: goto label_316810;
        case 0x316814u: goto label_316814;
        case 0x316818u: goto label_316818;
        case 0x31681cu: goto label_31681c;
        case 0x316820u: goto label_316820;
        case 0x316824u: goto label_316824;
        case 0x316828u: goto label_316828;
        case 0x31682cu: goto label_31682c;
        case 0x316830u: goto label_316830;
        case 0x316834u: goto label_316834;
        case 0x316838u: goto label_316838;
        case 0x31683cu: goto label_31683c;
        case 0x316840u: goto label_316840;
        case 0x316844u: goto label_316844;
        case 0x316848u: goto label_316848;
        case 0x31684cu: goto label_31684c;
        case 0x316850u: goto label_316850;
        case 0x316854u: goto label_316854;
        case 0x316858u: goto label_316858;
        case 0x31685cu: goto label_31685c;
        case 0x316860u: goto label_316860;
        case 0x316864u: goto label_316864;
        case 0x316868u: goto label_316868;
        case 0x31686cu: goto label_31686c;
        case 0x316870u: goto label_316870;
        case 0x316874u: goto label_316874;
        case 0x316878u: goto label_316878;
        case 0x31687cu: goto label_31687c;
        case 0x316880u: goto label_316880;
        case 0x316884u: goto label_316884;
        case 0x316888u: goto label_316888;
        case 0x31688cu: goto label_31688c;
        case 0x316890u: goto label_316890;
        case 0x316894u: goto label_316894;
        case 0x316898u: goto label_316898;
        case 0x31689cu: goto label_31689c;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168a8u: goto label_3168a8;
        case 0x3168acu: goto label_3168ac;
        case 0x3168b0u: goto label_3168b0;
        case 0x3168b4u: goto label_3168b4;
        case 0x3168b8u: goto label_3168b8;
        case 0x3168bcu: goto label_3168bc;
        case 0x3168c0u: goto label_3168c0;
        case 0x3168c4u: goto label_3168c4;
        case 0x3168c8u: goto label_3168c8;
        case 0x3168ccu: goto label_3168cc;
        case 0x3168d0u: goto label_3168d0;
        case 0x3168d4u: goto label_3168d4;
        case 0x3168d8u: goto label_3168d8;
        case 0x3168dcu: goto label_3168dc;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168e4u: goto label_3168e4;
        case 0x3168e8u: goto label_3168e8;
        case 0x3168ecu: goto label_3168ec;
        case 0x3168f0u: goto label_3168f0;
        case 0x3168f4u: goto label_3168f4;
        case 0x3168f8u: goto label_3168f8;
        case 0x3168fcu: goto label_3168fc;
        case 0x316900u: goto label_316900;
        case 0x316904u: goto label_316904;
        case 0x316908u: goto label_316908;
        case 0x31690cu: goto label_31690c;
        case 0x316910u: goto label_316910;
        case 0x316914u: goto label_316914;
        case 0x316918u: goto label_316918;
        case 0x31691cu: goto label_31691c;
        case 0x316920u: goto label_316920;
        case 0x316924u: goto label_316924;
        case 0x316928u: goto label_316928;
        case 0x31692cu: goto label_31692c;
        case 0x316930u: goto label_316930;
        case 0x316934u: goto label_316934;
        case 0x316938u: goto label_316938;
        case 0x31693cu: goto label_31693c;
        case 0x316940u: goto label_316940;
        case 0x316944u: goto label_316944;
        case 0x316948u: goto label_316948;
        case 0x31694cu: goto label_31694c;
        case 0x316950u: goto label_316950;
        case 0x316954u: goto label_316954;
        case 0x316958u: goto label_316958;
        case 0x31695cu: goto label_31695c;
        case 0x316960u: goto label_316960;
        case 0x316964u: goto label_316964;
        case 0x316968u: goto label_316968;
        case 0x31696cu: goto label_31696c;
        case 0x316970u: goto label_316970;
        case 0x316974u: goto label_316974;
        case 0x316978u: goto label_316978;
        case 0x31697cu: goto label_31697c;
        case 0x316980u: goto label_316980;
        case 0x316984u: goto label_316984;
        case 0x316988u: goto label_316988;
        case 0x31698cu: goto label_31698c;
        case 0x316990u: goto label_316990;
        case 0x316994u: goto label_316994;
        case 0x316998u: goto label_316998;
        case 0x31699cu: goto label_31699c;
        default: break;
    }

    ctx->pc = 0x316118u;

label_316118:
    // 0x316118: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_31611c:
    // 0x31611c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x31611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_316120:
    // 0x316120: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x316120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_316124:
    // 0x316124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x316124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316128:
    // 0x316128: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x316128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_31612c:
    // 0x31612c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x31612cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_316130:
    // 0x316130: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x316130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_316134:
    // 0x316134: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x316134u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_316138:
    // 0x316138: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x316138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_31613c:
    // 0x31613c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_316140:
    // 0x316140: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x316140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_316144:
    // 0x316144: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316148:
    // 0x316148: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x316148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_31614c:
    // 0x31614c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x31614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_316150:
    // 0x316150: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x316150u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316154:
    // 0x316154: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x316154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_316158:
    // 0x316158: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x316158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_31615c:
    // 0x31615c: 0xc0c549c  jal         func_315270
label_316160:
    if (ctx->pc == 0x316160u) {
        ctx->pc = 0x316160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31615Cu;
        // 0x316160: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316164u;
        goto label_316164;
    }
    ctx->pc = 0x31615Cu;
    SET_GPR_U32(ctx, 31, 0x316164u);
    ctx->pc = 0x316160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31615Cu;
    // 0x316160: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x315270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315270u, 0x31615Cu, 0x316164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316164u;
label_316164:
    // 0x316164: 0xc09275c  jal         func_249D70
label_316168:
    if (ctx->pc == 0x316168u) {
        ctx->pc = 0x316168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316164u;
        // 0x316168: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31616Cu;
        goto label_31616c;
    }
    ctx->pc = 0x316164u;
    SET_GPR_U32(ctx, 31, 0x31616Cu);
    ctx->pc = 0x316168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316164u;
    // 0x316168: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x316164u, 0x31616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31616Cu;
label_31616c:
    // 0x31616c: 0xc0a1802  jal         func_286008
label_316170:
    if (ctx->pc == 0x316170u) {
        ctx->pc = 0x316170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31616Cu;
        // 0x316170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316174u;
        goto label_316174;
    }
    ctx->pc = 0x31616Cu;
    SET_GPR_U32(ctx, 31, 0x316174u);
    ctx->pc = 0x316170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31616Cu;
    // 0x316170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286008u, 0x31616Cu, 0x316174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316174u;
label_316174:
    // 0x316174: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_316178:
    // 0x316178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x316178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31617c:
    // 0x31617c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x31617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_316180:
    // 0x316180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x316180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_316184:
    // 0x316184: 0xae3591bc  sw          $s5, -0x6E44($s1)
    ctx->pc = 0x316184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939068), GPR_U32(ctx, 21));
label_316188:
    // 0x316188: 0xe440a0d0  swc1        $f0, -0x5F30($v0)
    ctx->pc = 0x316188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294942928), bits); }
label_31618c:
    // 0x31618c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x31618cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_316190:
    // 0x316190: 0xc0c582a  jal         func_3160A8
label_316194:
    if (ctx->pc == 0x316194u) {
        ctx->pc = 0x316194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316190u;
        // 0x316194: 0xae1591fc  sw          $s5, -0x6E04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939132), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316198u;
        goto label_316198;
    }
    ctx->pc = 0x316190u;
    SET_GPR_U32(ctx, 31, 0x316198u);
    ctx->pc = 0x316194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316190u;
    // 0x316194: 0xae1591fc  sw          $s5, -0x6E04($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939132), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3160A8u, 0x316190u, 0x316198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316198u;
label_316198:
    // 0x316198: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x316198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_31619c:
    // 0x31619c: 0xae82bd70  sw          $v0, -0x4290($s4)
    ctx->pc = 0x31619cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950256), GPR_U32(ctx, 2));
label_3161a0:
    // 0x3161a0: 0xc0756f8  jal         func_1D5BE0
label_3161a4:
    if (ctx->pc == 0x3161A4u) {
        ctx->pc = 0x3161A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161A0u;
        // 0x3161a4: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161A8u;
        goto label_3161a8;
    }
    ctx->pc = 0x3161A0u;
    SET_GPR_U32(ctx, 31, 0x3161A8u);
    ctx->pc = 0x3161A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161A0u;
    // 0x3161a4: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BE0u, 0x3161A0u, 0x3161A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161A8u;
label_3161a8:
    // 0x3161a8: 0xc0c549e  jal         func_315278
label_3161ac:
    if (ctx->pc == 0x3161ACu) {
        ctx->pc = 0x3161B0u;
        goto label_3161b0;
    }
    ctx->pc = 0x3161A8u;
    SET_GPR_U32(ctx, 31, 0x3161B0u);
    ctx->pc = 0x315278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315278u, 0x3161A8u, 0x3161B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161B0u;
label_3161b0:
    // 0x3161b0: 0xc0a21a2  jal         func_288688
label_3161b4:
    if (ctx->pc == 0x3161B4u) {
        ctx->pc = 0x3161B8u;
        goto label_3161b8;
    }
    ctx->pc = 0x3161B0u;
    SET_GPR_U32(ctx, 31, 0x3161B8u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x3161B0u, 0x3161B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161B8u;
label_3161b8:
    // 0x3161b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3161b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3161bc:
    // 0x3161bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3161bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3161c0:
    // 0x3161c0: 0xa062a367  sb          $v0, -0x5C99($v1)
    ctx->pc = 0x3161c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943591), (uint8_t)GPR_U32(ctx, 2));
label_3161c4:
    // 0x3161c4: 0xc0c5822  jal         func_316088
label_3161c8:
    if (ctx->pc == 0x3161C8u) {
        ctx->pc = 0x3161C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161C4u;
        // 0x3161c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161CCu;
        goto label_3161cc;
    }
    ctx->pc = 0x3161C4u;
    SET_GPR_U32(ctx, 31, 0x3161CCu);
    ctx->pc = 0x3161C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161C4u;
    // 0x3161c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316088u, 0x3161C4u, 0x3161CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161CCu;
label_3161cc:
    // 0x3161cc: 0xc0a3a8a  jal         func_28EA28
label_3161d0:
    if (ctx->pc == 0x3161D0u) {
        ctx->pc = 0x3161D4u;
        goto label_3161d4;
    }
    ctx->pc = 0x3161CCu;
    SET_GPR_U32(ctx, 31, 0x3161D4u);
    ctx->pc = 0x28EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA28u, 0x3161CCu, 0x3161D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161D4u;
label_3161d4:
    // 0x3161d4: 0xc0b28aa  jal         func_2CA2A8
label_3161d8:
    if (ctx->pc == 0x3161D8u) {
        ctx->pc = 0x3161DCu;
        goto label_3161dc;
    }
    ctx->pc = 0x3161D4u;
    SET_GPR_U32(ctx, 31, 0x3161DCu);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x3161D4u, 0x3161DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161DCu;
label_3161dc:
    // 0x3161dc: 0xc0b2a86  jal         func_2CAA18
label_3161e0:
    if (ctx->pc == 0x3161E0u) {
        ctx->pc = 0x3161E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161DCu;
        // 0x3161e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161E4u;
        goto label_3161e4;
    }
    ctx->pc = 0x3161DCu;
    SET_GPR_U32(ctx, 31, 0x3161E4u);
    ctx->pc = 0x3161E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161DCu;
    // 0x3161e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA18u, 0x3161DCu, 0x3161E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161E4u;
label_3161e4:
    // 0x3161e4: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_3161e8:
    // 0x3161e8: 0xc0c5dda  jal         func_317768
label_3161ec:
    if (ctx->pc == 0x3161ECu) {
        ctx->pc = 0x3161ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161E8u;
        // 0x3161ec: 0xac622304  sw          $v0, 0x2304($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3161F0u;
        goto label_3161f0;
    }
    ctx->pc = 0x3161E8u;
    SET_GPR_U32(ctx, 31, 0x3161F0u);
    ctx->pc = 0x3161ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161E8u;
    // 0x3161ec: 0xac622304  sw          $v0, 0x2304($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317768u, 0x3161E8u, 0x3161F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161F0u;
label_3161f0:
    // 0x3161f0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x3161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_3161f4:
    // 0x3161f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3161f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_3161f8:
    // 0x3161f8: 0xac40462c  sw          $zero, 0x462C($v0)
    ctx->pc = 0x3161f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17964), GPR_U32(ctx, 0));
label_3161fc:
    // 0x3161fc: 0xa0605aed  sb          $zero, 0x5AED($v1)
    ctx->pc = 0x3161fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23277), (uint8_t)GPR_U32(ctx, 0));
label_316200:
    // 0x316200: 0x8e22cba8  lw          $v0, -0x3458($s1)
    ctx->pc = 0x316200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_316204:
    // 0x316204: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_316208:
    // 0x316208: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31620c:
    // 0x31620c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x31620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_316210:
    // 0x316210: 0x40f809  jalr        $v0
label_316214:
    if (ctx->pc == 0x316214u) {
        ctx->pc = 0x316218u;
        goto label_316218;
    }
    ctx->pc = 0x316210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316210u, 0x316218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316218u;
label_316218:
    // 0x316218: 0xc0760da  jal         func_1D8368
label_31621c:
    if (ctx->pc == 0x31621Cu) {
        ctx->pc = 0x316220u;
        goto label_316220;
    }
    ctx->pc = 0x316218u;
    SET_GPR_U32(ctx, 31, 0x316220u);
    ctx->pc = 0x1D8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8368u, 0x316218u, 0x316220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316220u;
label_316220:
    // 0x316220: 0xc0760ea  jal         func_1D83A8
label_316224:
    if (ctx->pc == 0x316224u) {
        ctx->pc = 0x316228u;
        goto label_316228;
    }
    ctx->pc = 0x316220u;
    SET_GPR_U32(ctx, 31, 0x316228u);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x316220u, 0x316228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316228u;
label_316228:
    // 0x316228: 0x8e22cba8  lw          $v0, -0x3458($s1)
    ctx->pc = 0x316228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_31622c:
    // 0x31622c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x31622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_316230:
    // 0x316230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316234:
    // 0x316234: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x316234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_316238:
    // 0x316238: 0x40f809  jalr        $v0
label_31623c:
    if (ctx->pc == 0x31623Cu) {
        ctx->pc = 0x316240u;
        goto label_316240;
    }
    ctx->pc = 0x316238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316238u, 0x316240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316240u;
label_316240:
    // 0x316240: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x316240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_316244:
    // 0x316244: 0xc0aeac2  jal         func_2BAB08
label_316248:
    if (ctx->pc == 0x316248u) {
        ctx->pc = 0x316248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316244u;
        // 0x316248: 0x24844ed8  addiu       $a0, $a0, 0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31624Cu;
        goto label_31624c;
    }
    ctx->pc = 0x316244u;
    SET_GPR_U32(ctx, 31, 0x31624Cu);
    ctx->pc = 0x316248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316244u;
    // 0x316248: 0x24844ed8  addiu       $a0, $a0, 0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAB08u, 0x316244u, 0x31624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31624Cu;
label_31624c:
    // 0x31624c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31624cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316250:
    // 0x316250: 0x8c62a324  lw          $v0, -0x5CDC($v1)
    ctx->pc = 0x316250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943524)));
label_316254:
    // 0x316254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_316258:
    if (ctx->pc == 0x316258u) {
        ctx->pc = 0x316258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316254u;
        // 0x316258: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31625Cu;
        goto label_31625c;
    }
    ctx->pc = 0x316254u;
    {
        const bool branch_taken_0x316254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316254u;
        // 0x316258: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316254) {
            ctx->pc = 0x316264u;
            goto label_316264;
        }
    }
    ctx->pc = 0x31625Cu;
label_31625c:
    // 0x31625c: 0xc075ebc  jal         func_1D7AF0
label_316260:
    if (ctx->pc == 0x316260u) {
        ctx->pc = 0x316264u;
        goto label_316264;
    }
    ctx->pc = 0x31625Cu;
    SET_GPR_U32(ctx, 31, 0x316264u);
    ctx->pc = 0x1D7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7AF0u, 0x31625Cu, 0x316264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316264u;
label_316264:
    // 0x316264: 0xc0a0496  jal         func_281258
label_316268:
    if (ctx->pc == 0x316268u) {
        ctx->pc = 0x316268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316264u;
        // 0x316268: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31626Cu;
        goto label_31626c;
    }
    ctx->pc = 0x316264u;
    SET_GPR_U32(ctx, 31, 0x31626Cu);
    ctx->pc = 0x316268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316264u;
    // 0x316268: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281258u, 0x316264u, 0x31626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31626Cu;
label_31626c:
    // 0x31626c: 0xc0a0444  jal         func_281110
label_316270:
    if (ctx->pc == 0x316270u) {
        ctx->pc = 0x316270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31626Cu;
        // 0x316270: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316274u;
        goto label_316274;
    }
    ctx->pc = 0x31626Cu;
    SET_GPR_U32(ctx, 31, 0x316274u);
    ctx->pc = 0x316270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31626Cu;
    // 0x316270: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281110u, 0x31626Cu, 0x316274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316274u;
label_316274:
    // 0x316274: 0xc0a04a0  jal         func_281280
label_316278:
    if (ctx->pc == 0x316278u) {
        ctx->pc = 0x316278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316274u;
        // 0x316278: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31627Cu;
        goto label_31627c;
    }
    ctx->pc = 0x316274u;
    SET_GPR_U32(ctx, 31, 0x31627Cu);
    ctx->pc = 0x316278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316274u;
    // 0x316278: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281280u, 0x316274u, 0x31627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31627Cu;
label_31627c:
    // 0x31627c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x31627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_316280:
    // 0x316280: 0x2610f130  addiu       $s0, $s0, -0xED0
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963504));
label_316284:
    // 0x316284: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316288:
    // 0x316288: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x316288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_31628c:
    // 0x31628c: 0xac60bd7c  sw          $zero, -0x4284($v1)
    ctx->pc = 0x31628cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950268), GPR_U32(ctx, 0));
label_316290:
    // 0x316290: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x316290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_316294:
    // 0x316294: 0xc0a04ce  jal         func_281338
label_316298:
    if (ctx->pc == 0x316298u) {
        ctx->pc = 0x316298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316294u;
        // 0x316298: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31629Cu;
        goto label_31629c;
    }
    ctx->pc = 0x316294u;
    SET_GPR_U32(ctx, 31, 0x31629Cu);
    ctx->pc = 0x316298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316294u;
    // 0x316298: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281338u, 0x316294u, 0x31629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31629Cu;
label_31629c:
    // 0x31629c: 0xc0a213a  jal         func_2884E8
label_3162a0:
    if (ctx->pc == 0x3162A0u) {
        ctx->pc = 0x3162A4u;
        goto label_3162a4;
    }
    ctx->pc = 0x31629Cu;
    SET_GPR_U32(ctx, 31, 0x3162A4u);
    ctx->pc = 0x2884E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884E8u, 0x31629Cu, 0x3162A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162A4u;
label_3162a4:
    // 0x3162a4: 0xc0a4758  jal         func_291D60
label_3162a8:
    if (ctx->pc == 0x3162A8u) {
        ctx->pc = 0x3162ACu;
        goto label_3162ac;
    }
    ctx->pc = 0x3162A4u;
    SET_GPR_U32(ctx, 31, 0x3162ACu);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x3162A4u, 0x3162ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162ACu;
label_3162ac:
    // 0x3162ac: 0xc0a50f4  jal         func_2943D0
label_3162b0:
    if (ctx->pc == 0x3162B0u) {
        ctx->pc = 0x3162B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162ACu;
        // 0x3162b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162B4u;
        goto label_3162b4;
    }
    ctx->pc = 0x3162ACu;
    SET_GPR_U32(ctx, 31, 0x3162B4u);
    ctx->pc = 0x3162B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162ACu;
    // 0x3162b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943D0u, 0x3162ACu, 0x3162B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162B4u;
label_3162b4:
    // 0x3162b4: 0xc0b5d1e  jal         func_2D7478
label_3162b8:
    if (ctx->pc == 0x3162B8u) {
        ctx->pc = 0x3162BCu;
        goto label_3162bc;
    }
    ctx->pc = 0x3162B4u;
    SET_GPR_U32(ctx, 31, 0x3162BCu);
    ctx->pc = 0x2D7478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7478u, 0x3162B4u, 0x3162BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162BCu;
label_3162bc:
    // 0x3162bc: 0xc0c3dc2  jal         func_30F708
label_3162c0:
    if (ctx->pc == 0x3162C0u) {
        ctx->pc = 0x3162C4u;
        goto label_3162c4;
    }
    ctx->pc = 0x3162BCu;
    SET_GPR_U32(ctx, 31, 0x3162C4u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x3162BCu, 0x3162C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162C4u;
label_3162c4:
    // 0x3162c4: 0xc0c473c  jal         func_311CF0
label_3162c8:
    if (ctx->pc == 0x3162C8u) {
        ctx->pc = 0x3162C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162C4u;
        // 0x3162c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162CCu;
        goto label_3162cc;
    }
    ctx->pc = 0x3162C4u;
    SET_GPR_U32(ctx, 31, 0x3162CCu);
    ctx->pc = 0x3162C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162C4u;
    // 0x3162c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311CF0u, 0x3162C4u, 0x3162CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162CCu;
label_3162cc:
    // 0x3162cc: 0x8e24bd48  lw          $a0, -0x42B8($s1)
    ctx->pc = 0x3162ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
label_3162d0:
    // 0x3162d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3162d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3162d4:
    // 0x3162d4: 0xc0a0472  jal         func_2811C8
label_3162d8:
    if (ctx->pc == 0x3162D8u) {
        ctx->pc = 0x3162D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162D4u;
        // 0x3162d8: 0x24a53428  addiu       $a1, $a1, 0x3428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162DCu;
        goto label_3162dc;
    }
    ctx->pc = 0x3162D4u;
    SET_GPR_U32(ctx, 31, 0x3162DCu);
    ctx->pc = 0x3162D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162D4u;
    // 0x3162d8: 0x24a53428  addiu       $a1, $a1, 0x3428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3162D4u, 0x3162DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162DCu;
label_3162dc:
    // 0x3162dc: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3162dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_3162e0:
    // 0x3162e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3162e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3162e4:
    // 0x3162e4: 0xc0d7468  jal         func_35D1A0
label_3162e8:
    if (ctx->pc == 0x3162E8u) {
        ctx->pc = 0x3162E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162E4u;
        // 0x3162e8: 0x248421e0  addiu       $a0, $a0, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3162ECu;
        goto label_3162ec;
    }
    ctx->pc = 0x3162E4u;
    SET_GPR_U32(ctx, 31, 0x3162ECu);
    ctx->pc = 0x3162E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162E4u;
    // 0x3162e8: 0x248421e0  addiu       $a0, $a0, 0x21E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x3162E4u, 0x3162ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162ECu;
label_3162ec:
    // 0x3162ec: 0xc0c7896  jal         func_31E258
label_3162f0:
    if (ctx->pc == 0x3162F0u) {
        ctx->pc = 0x3162F4u;
        goto label_3162f4;
    }
    ctx->pc = 0x3162ECu;
    SET_GPR_U32(ctx, 31, 0x3162F4u);
    ctx->pc = 0x31E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E258u, 0x3162ECu, 0x3162F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162F4u;
label_3162f4:
    // 0x3162f4: 0x8e24bd48  lw          $a0, -0x42B8($s1)
    ctx->pc = 0x3162f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
label_3162f8:
    // 0x3162f8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3162f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3162fc:
    // 0x3162fc: 0xc0a0472  jal         func_2811C8
label_316300:
    if (ctx->pc == 0x316300u) {
        ctx->pc = 0x316300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162FCu;
        // 0x316300: 0x24a53610  addiu       $a1, $a1, 0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316304u;
        goto label_316304;
    }
    ctx->pc = 0x3162FCu;
    SET_GPR_U32(ctx, 31, 0x316304u);
    ctx->pc = 0x316300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162FCu;
    // 0x316300: 0x24a53610  addiu       $a1, $a1, 0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3162FCu, 0x316304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316304u;
label_316304:
    // 0x316304: 0xc08293e  jal         func_20A4F8
label_316308:
    if (ctx->pc == 0x316308u) {
        ctx->pc = 0x31630Cu;
        goto label_31630c;
    }
    ctx->pc = 0x316304u;
    SET_GPR_U32(ctx, 31, 0x31630Cu);
    ctx->pc = 0x20A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A4F8u, 0x316304u, 0x31630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31630Cu;
label_31630c:
    // 0x31630c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31630cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316310:
    // 0x316310: 0x8e24bd48  lw          $a0, -0x42B8($s1)
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
label_316314:
    // 0x316314: 0xc0a0472  jal         func_2811C8
label_316318:
    if (ctx->pc == 0x316318u) {
        ctx->pc = 0x316318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316314u;
        // 0x316318: 0x24a53620  addiu       $a1, $a1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31631Cu;
        goto label_31631c;
    }
    ctx->pc = 0x316314u;
    SET_GPR_U32(ctx, 31, 0x31631Cu);
    ctx->pc = 0x316318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316314u;
    // 0x316318: 0x24a53620  addiu       $a1, $a1, 0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316314u, 0x31631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31631Cu;
label_31631c:
    // 0x31631c: 0x8e82bd70  lw          $v0, -0x4290($s4)
    ctx->pc = 0x31631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950256)));
label_316320:
    // 0x316320: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_316324:
    // 0x316324: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_316328:
    if (ctx->pc == 0x316328u) {
        ctx->pc = 0x316328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316324u;
        // 0x316328: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31632Cu;
        goto label_31632c;
    }
    ctx->pc = 0x316324u;
    {
        const bool branch_taken_0x316324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316324) {
            ctx->pc = 0x316328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316324u;
            // 0x316328: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31633Cu;
            goto label_31633c;
        }
    }
    ctx->pc = 0x31632Cu;
label_31632c:
    // 0x31632c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x31632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_316330:
    // 0x316330: 0xc080cf2  jal         func_2033C8
label_316334:
    if (ctx->pc == 0x316334u) {
        ctx->pc = 0x316334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316330u;
        // 0x316334: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316338u;
        goto label_316338;
    }
    ctx->pc = 0x316330u;
    SET_GPR_U32(ctx, 31, 0x316338u);
    ctx->pc = 0x316334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316330u;
    // 0x316334: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2033C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2033C8u, 0x316330u, 0x316338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316338u;
label_316338:
    // 0x316338: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31633c:
    // 0x31633c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316340:
    // 0x316340: 0xc0a0472  jal         func_2811C8
label_316344:
    if (ctx->pc == 0x316344u) {
        ctx->pc = 0x316344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316340u;
        // 0x316344: 0x24a53638  addiu       $a1, $a1, 0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316348u;
        goto label_316348;
    }
    ctx->pc = 0x316340u;
    SET_GPR_U32(ctx, 31, 0x316348u);
    ctx->pc = 0x316344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316340u;
    // 0x316344: 0x24a53638  addiu       $a1, $a1, 0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316340u, 0x316348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316348u;
label_316348:
    // 0x316348: 0x8e82bd70  lw          $v0, -0x4290($s4)
    ctx->pc = 0x316348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950256)));
label_31634c:
    // 0x31634c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_316350:
    // 0x316350: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_316354:
    if (ctx->pc == 0x316354u) {
        ctx->pc = 0x316354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316350u;
        // 0x316354: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316358u;
        goto label_316358;
    }
    ctx->pc = 0x316350u;
    {
        const bool branch_taken_0x316350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316350) {
            ctx->pc = 0x316354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316350u;
            // 0x316354: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31636Cu;
            goto label_31636c;
        }
    }
    ctx->pc = 0x316358u;
label_316358:
    // 0x316358: 0xc081d36  jal         func_2074D8
label_31635c:
    if (ctx->pc == 0x31635Cu) {
        ctx->pc = 0x316360u;
        goto label_316360;
    }
    ctx->pc = 0x316358u;
    SET_GPR_U32(ctx, 31, 0x316360u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x316358u, 0x316360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316360u;
label_316360:
    // 0x316360: 0xc081ee8  jal         func_207BA0
label_316364:
    if (ctx->pc == 0x316364u) {
        ctx->pc = 0x316364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316360u;
        // 0x316364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316368u;
        goto label_316368;
    }
    ctx->pc = 0x316360u;
    SET_GPR_U32(ctx, 31, 0x316368u);
    ctx->pc = 0x316364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316360u;
    // 0x316364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BA0u, 0x316360u, 0x316368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316368u;
label_316368:
    // 0x316368: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31636c:
    // 0x31636c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31636cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316370:
    // 0x316370: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x316370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_316374:
    // 0x316374: 0xc0a0472  jal         func_2811C8
label_316378:
    if (ctx->pc == 0x316378u) {
        ctx->pc = 0x316378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316374u;
        // 0x316378: 0x24a53658  addiu       $a1, $a1, 0x3658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31637Cu;
        goto label_31637c;
    }
    ctx->pc = 0x316374u;
    SET_GPR_U32(ctx, 31, 0x31637Cu);
    ctx->pc = 0x316378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316374u;
    // 0x316378: 0x24a53658  addiu       $a1, $a1, 0x3658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316374u, 0x31637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31637Cu;
label_31637c:
    // 0x31637c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x31637cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_316380:
    // 0x316380: 0xc08040c  jal         func_201030
label_316384:
    if (ctx->pc == 0x316384u) {
        ctx->pc = 0x316384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316380u;
        // 0x316384: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316388u;
        goto label_316388;
    }
    ctx->pc = 0x316380u;
    SET_GPR_U32(ctx, 31, 0x316388u);
    ctx->pc = 0x316384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316380u;
    // 0x316384: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201030u, 0x316380u, 0x316388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316388u;
label_316388:
    // 0x316388: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31638c:
    // 0x31638c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31638cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316390:
    // 0x316390: 0xc0a0472  jal         func_2811C8
label_316394:
    if (ctx->pc == 0x316394u) {
        ctx->pc = 0x316394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316390u;
        // 0x316394: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316398u;
        goto label_316398;
    }
    ctx->pc = 0x316390u;
    SET_GPR_U32(ctx, 31, 0x316398u);
    ctx->pc = 0x316394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316390u;
    // 0x316394: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316390u, 0x316398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316398u;
label_316398:
    // 0x316398: 0xc080e54  jal         func_203950
label_31639c:
    if (ctx->pc == 0x31639Cu) {
        ctx->pc = 0x31639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316398u;
        // 0x31639c: 0x3c10005b  lui         $s0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163A0u;
        goto label_3163a0;
    }
    ctx->pc = 0x316398u;
    SET_GPR_U32(ctx, 31, 0x3163A0u);
    ctx->pc = 0x31639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316398u;
    // 0x31639c: 0x3c10005b  lui         $s0, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203950u, 0x316398u, 0x3163A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163A0u;
label_3163a0:
    // 0x3163a0: 0xc080ff6  jal         func_203FD8
label_3163a4:
    if (ctx->pc == 0x3163A4u) {
        ctx->pc = 0x3163A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163A0u;
        // 0x3163a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163A8u;
        goto label_3163a8;
    }
    ctx->pc = 0x3163A0u;
    SET_GPR_U32(ctx, 31, 0x3163A8u);
    ctx->pc = 0x3163A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163A0u;
    // 0x3163a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FD8u, 0x3163A0u, 0x3163A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163A8u;
label_3163a8:
    // 0x3163a8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3163ac:
    // 0x3163ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3163acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3163b0:
    // 0x3163b0: 0xc0a0472  jal         func_2811C8
label_3163b4:
    if (ctx->pc == 0x3163B4u) {
        ctx->pc = 0x3163B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163B0u;
        // 0x3163b4: 0x24a53690  addiu       $a1, $a1, 0x3690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163B8u;
        goto label_3163b8;
    }
    ctx->pc = 0x3163B0u;
    SET_GPR_U32(ctx, 31, 0x3163B8u);
    ctx->pc = 0x3163B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163B0u;
    // 0x3163b4: 0x24a53690  addiu       $a1, $a1, 0x3690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3163B0u, 0x3163B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163B8u;
label_3163b8:
    // 0x3163b8: 0x261021e8  addiu       $s0, $s0, 0x21E8
    ctx->pc = 0x3163b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8680));
label_3163bc:
    // 0x3163bc: 0xc0c6c0e  jal         func_31B038
label_3163c0:
    if (ctx->pc == 0x3163C0u) {
        ctx->pc = 0x3163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163BCu;
        // 0x3163c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163C4u;
        goto label_3163c4;
    }
    ctx->pc = 0x3163BCu;
    SET_GPR_U32(ctx, 31, 0x3163C4u);
    ctx->pc = 0x3163C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163BCu;
    // 0x3163c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B038u, 0x3163BCu, 0x3163C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163C4u;
label_3163c4:
    // 0x3163c4: 0xc0dbe86  jal         func_36FA18
label_3163c8:
    if (ctx->pc == 0x3163C8u) {
        ctx->pc = 0x3163C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163C4u;
        // 0x3163c8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163CCu;
        goto label_3163cc;
    }
    ctx->pc = 0x3163C4u;
    SET_GPR_U32(ctx, 31, 0x3163CCu);
    ctx->pc = 0x3163C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163C4u;
    // 0x3163c8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x3163C4u, 0x3163CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163CCu;
label_3163cc:
    // 0x3163cc: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3163ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3163d0:
    // 0x3163d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3163d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3163d4:
    // 0x3163d4: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x3163d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3163d8:
    // 0x3163d8: 0xc0d9cc2  jal         func_367308
label_3163dc:
    if (ctx->pc == 0x3163DCu) {
        ctx->pc = 0x3163DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163D8u;
        // 0x3163dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163E0u;
        goto label_3163e0;
    }
    ctx->pc = 0x3163D8u;
    SET_GPR_U32(ctx, 31, 0x3163E0u);
    ctx->pc = 0x3163DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163D8u;
    // 0x3163dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x3163D8u, 0x3163E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163E0u;
label_3163e0:
    // 0x3163e0: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x3163e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3163e4:
    // 0x3163e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3163e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3163e8:
    // 0x3163e8: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x3163e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3163ec:
    // 0x3163ec: 0xc0d9cc2  jal         func_367308
label_3163f0:
    if (ctx->pc == 0x3163F0u) {
        ctx->pc = 0x3163F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163ECu;
        // 0x3163f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3163F4u;
        goto label_3163f4;
    }
    ctx->pc = 0x3163ECu;
    SET_GPR_U32(ctx, 31, 0x3163F4u);
    ctx->pc = 0x3163F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163ECu;
    // 0x3163f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x3163ECu, 0x3163F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163F4u;
label_3163f4:
    // 0x3163f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3163f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3163f8:
    // 0x3163f8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3163f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3163fc:
    // 0x3163fc: 0xc0a0472  jal         func_2811C8
label_316400:
    if (ctx->pc == 0x316400u) {
        ctx->pc = 0x316400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163FCu;
        // 0x316400: 0x24a536a8  addiu       $a1, $a1, 0x36A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316404u;
        goto label_316404;
    }
    ctx->pc = 0x3163FCu;
    SET_GPR_U32(ctx, 31, 0x316404u);
    ctx->pc = 0x316400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163FCu;
    // 0x316400: 0x24a536a8  addiu       $a1, $a1, 0x36A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3163FCu, 0x316404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316404u;
label_316404:
    // 0x316404: 0xc0751b8  jal         func_1D46E0
label_316408:
    if (ctx->pc == 0x316408u) {
        ctx->pc = 0x31640Cu;
        goto label_31640c;
    }
    ctx->pc = 0x316404u;
    SET_GPR_U32(ctx, 31, 0x31640Cu);
    ctx->pc = 0x1D46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46E0u, 0x316404u, 0x31640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31640Cu;
label_31640c:
    // 0x31640c: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
label_316410:
    if (ctx->pc == 0x316410u) {
        ctx->pc = 0x316410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31640Cu;
        // 0x316410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316414u;
        goto label_316414;
    }
    ctx->pc = 0x31640Cu;
    {
        const bool branch_taken_0x31640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31640Cu;
        // 0x316410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31640c) {
            ctx->pc = 0x316968u;
            goto label_316968;
        }
    }
    ctx->pc = 0x316414u;
label_316414:
    // 0x316414: 0xc0da222  jal         func_368888
label_316418:
    if (ctx->pc == 0x316418u) {
        ctx->pc = 0x31641Cu;
        goto label_31641c;
    }
    ctx->pc = 0x316414u;
    SET_GPR_U32(ctx, 31, 0x31641Cu);
    ctx->pc = 0x368888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368888u, 0x316414u, 0x31641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31641Cu;
label_31641c:
    // 0x31641c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316420:
    // 0x316420: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316424:
    // 0x316424: 0xc0a0472  jal         func_2811C8
label_316428:
    if (ctx->pc == 0x316428u) {
        ctx->pc = 0x316428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316424u;
        // 0x316428: 0x24a536c0  addiu       $a1, $a1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31642Cu;
        goto label_31642c;
    }
    ctx->pc = 0x316424u;
    SET_GPR_U32(ctx, 31, 0x31642Cu);
    ctx->pc = 0x316428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316424u;
    // 0x316428: 0x24a536c0  addiu       $a1, $a1, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316424u, 0x31642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31642Cu;
label_31642c:
    // 0x31642c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x31642cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_316430:
    // 0x316430: 0xc0c3570  jal         func_30D5C0
label_316434:
    if (ctx->pc == 0x316434u) {
        ctx->pc = 0x316434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316430u;
        // 0x316434: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316438u;
        goto label_316438;
    }
    ctx->pc = 0x316430u;
    SET_GPR_U32(ctx, 31, 0x316438u);
    ctx->pc = 0x316434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316430u;
    // 0x316434: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D5C0u, 0x316430u, 0x316438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316438u;
label_316438:
    // 0x316438: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31643c:
    // 0x31643c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316440:
    // 0x316440: 0xc0a0472  jal         func_2811C8
label_316444:
    if (ctx->pc == 0x316444u) {
        ctx->pc = 0x316444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316440u;
        // 0x316444: 0x24a536e0  addiu       $a1, $a1, 0x36E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316448u;
        goto label_316448;
    }
    ctx->pc = 0x316440u;
    SET_GPR_U32(ctx, 31, 0x316448u);
    ctx->pc = 0x316444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316440u;
    // 0x316444: 0x24a536e0  addiu       $a1, $a1, 0x36E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316440u, 0x316448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316448u;
label_316448:
    // 0x316448: 0xc0c5cb8  jal         func_3172E0
label_31644c:
    if (ctx->pc == 0x31644Cu) {
        ctx->pc = 0x316450u;
        goto label_316450;
    }
    ctx->pc = 0x316448u;
    SET_GPR_U32(ctx, 31, 0x316450u);
    ctx->pc = 0x3172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3172E0u, 0x316448u, 0x316450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316450u;
label_316450:
    // 0x316450: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_316454:
    if (ctx->pc == 0x316454u) {
        ctx->pc = 0x316454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316450u;
        // 0x316454: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316458u;
        goto label_316458;
    }
    ctx->pc = 0x316450u;
    {
        const bool branch_taken_0x316450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316450u;
        // 0x316454: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316450) {
            ctx->pc = 0x3167A8u;
            goto label_3167a8;
        }
    }
    ctx->pc = 0x316458u;
label_316458:
    // 0x316458: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31645c:
    // 0x31645c: 0xc0a0472  jal         func_2811C8
label_316460:
    if (ctx->pc == 0x316460u) {
        ctx->pc = 0x316460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31645Cu;
        // 0x316460: 0x24a536f0  addiu       $a1, $a1, 0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316464u;
        goto label_316464;
    }
    ctx->pc = 0x31645Cu;
    SET_GPR_U32(ctx, 31, 0x316464u);
    ctx->pc = 0x316460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31645Cu;
    // 0x316460: 0x24a536f0  addiu       $a1, $a1, 0x36F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31645Cu, 0x316464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316464u;
label_316464:
    // 0x316464: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316468:
    // 0x316468: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31646c:
    // 0x31646c: 0xc0a0472  jal         func_2811C8
label_316470:
    if (ctx->pc == 0x316470u) {
        ctx->pc = 0x316470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31646Cu;
        // 0x316470: 0x24a53700  addiu       $a1, $a1, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316474u;
        goto label_316474;
    }
    ctx->pc = 0x31646Cu;
    SET_GPR_U32(ctx, 31, 0x316474u);
    ctx->pc = 0x316470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31646Cu;
    // 0x316470: 0x24a53700  addiu       $a1, $a1, 0x3700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31646Cu, 0x316474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316474u;
label_316474:
    // 0x316474: 0xc0d9536  jal         func_3654D8
label_316478:
    if (ctx->pc == 0x316478u) {
        ctx->pc = 0x31647Cu;
        goto label_31647c;
    }
    ctx->pc = 0x316474u;
    SET_GPR_U32(ctx, 31, 0x31647Cu);
    ctx->pc = 0x3654D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3654D8u, 0x316474u, 0x31647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31647Cu;
label_31647c:
    // 0x31647c: 0x8e82bd70  lw          $v0, -0x4290($s4)
    ctx->pc = 0x31647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950256)));
label_316480:
    // 0x316480: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_316484:
    // 0x316484: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_316488:
    if (ctx->pc == 0x316488u) {
        ctx->pc = 0x316488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316484u;
        // 0x316488: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31648Cu;
        goto label_31648c;
    }
    ctx->pc = 0x316484u;
    {
        const bool branch_taken_0x316484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316484) {
            ctx->pc = 0x316488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316484u;
            // 0x316488: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31649Cu;
            goto label_31649c;
        }
    }
    ctx->pc = 0x31648Cu;
label_31648c:
    // 0x31648c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x31648cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_316490:
    // 0x316490: 0xc0b49d0  jal         func_2D2740
label_316494:
    if (ctx->pc == 0x316494u) {
        ctx->pc = 0x316494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316490u;
        // 0x316494: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316498u;
        goto label_316498;
    }
    ctx->pc = 0x316490u;
    SET_GPR_U32(ctx, 31, 0x316498u);
    ctx->pc = 0x316494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316490u;
    // 0x316494: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2740u, 0x316490u, 0x316498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316498u;
label_316498:
    // 0x316498: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31649c:
    // 0x31649c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31649cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3164a0:
    // 0x3164a0: 0x24a53710  addiu       $a1, $a1, 0x3710
    ctx->pc = 0x3164a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
label_3164a4:
    // 0x3164a4: 0xc0a0472  jal         func_2811C8
label_3164a8:
    if (ctx->pc == 0x3164A8u) {
        ctx->pc = 0x3164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164A4u;
        // 0x3164a8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164ACu;
        goto label_3164ac;
    }
    ctx->pc = 0x3164A4u;
    SET_GPR_U32(ctx, 31, 0x3164ACu);
    ctx->pc = 0x3164A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164A4u;
    // 0x3164a8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3164A4u, 0x3164ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164ACu;
label_3164ac:
    // 0x3164ac: 0xc0cd01a  jal         func_334068
label_3164b0:
    if (ctx->pc == 0x3164B0u) {
        ctx->pc = 0x3164B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164ACu;
        // 0x3164b0: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164B4u;
        goto label_3164b4;
    }
    ctx->pc = 0x3164ACu;
    SET_GPR_U32(ctx, 31, 0x3164B4u);
    ctx->pc = 0x3164B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164ACu;
    // 0x3164b0: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334068u, 0x3164ACu, 0x3164B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164B4u;
label_3164b4:
    // 0x3164b4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3164b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3164b8:
    // 0x3164b8: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3164b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_3164bc:
    // 0x3164bc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3164bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3164c0:
    // 0x3164c0: 0xc0c9a20  jal         func_326880
label_3164c4:
    if (ctx->pc == 0x3164C4u) {
        ctx->pc = 0x3164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164C0u;
        // 0x3164c4: 0x24846e00  addiu       $a0, $a0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164C8u;
        goto label_3164c8;
    }
    ctx->pc = 0x3164C0u;
    SET_GPR_U32(ctx, 31, 0x3164C8u);
    ctx->pc = 0x3164C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164C0u;
    // 0x3164c4: 0x24846e00  addiu       $a0, $a0, 0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x3164C0u, 0x3164C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164C8u;
label_3164c8:
    // 0x3164c8: 0x9202b44c  lbu         $v0, -0x4BB4($s0)
    ctx->pc = 0x3164c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294947916)));
label_3164cc:
    // 0x3164cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3164ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3164d0:
    // 0x3164d0: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3164d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3164d4:
    // 0x3164d4: 0x24a534e8  addiu       $a1, $a1, 0x34E8
    ctx->pc = 0x3164d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13544));
label_3164d8:
    // 0x3164d8: 0xa2228d50  sb          $v0, -0x72B0($s1)
    ctx->pc = 0x3164d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294937936), (uint8_t)GPR_U32(ctx, 2));
label_3164dc:
    // 0x3164dc: 0xc0a0472  jal         func_2811C8
label_3164e0:
    if (ctx->pc == 0x3164E0u) {
        ctx->pc = 0x3164E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164DCu;
        // 0x3164e0: 0xa215b44c  sb          $s5, -0x4BB4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164E4u;
        goto label_3164e4;
    }
    ctx->pc = 0x3164DCu;
    SET_GPR_U32(ctx, 31, 0x3164E4u);
    ctx->pc = 0x3164E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164DCu;
    // 0x3164e0: 0xa215b44c  sb          $s5, -0x4BB4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3164DCu, 0x3164E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164E4u;
label_3164e4:
    // 0x3164e4: 0xc085a1a  jal         func_216868
label_3164e8:
    if (ctx->pc == 0x3164E8u) {
        ctx->pc = 0x3164ECu;
        goto label_3164ec;
    }
    ctx->pc = 0x3164E4u;
    SET_GPR_U32(ctx, 31, 0x3164ECu);
    ctx->pc = 0x216868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216868u, 0x3164E4u, 0x3164ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164ECu;
label_3164ec:
    // 0x3164ec: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_3164f0:
    if (ctx->pc == 0x3164F0u) {
        ctx->pc = 0x3164F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164ECu;
        // 0x3164f0: 0x92828d50  lbu         $v0, -0x72B0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294937936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164F4u;
        goto label_3164f4;
    }
    ctx->pc = 0x3164ECu;
    {
        const bool branch_taken_0x3164ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3164F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164ECu;
        // 0x3164f0: 0x92828d50  lbu         $v0, -0x72B0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294937936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164ec) {
            ctx->pc = 0x3167A8u;
            goto label_3167a8;
        }
    }
    ctx->pc = 0x3164F4u;
label_3164f4:
    // 0x3164f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3164f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3164f8:
    // 0x3164f8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3164f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3164fc:
    // 0x3164fc: 0x24a53728  addiu       $a1, $a1, 0x3728
    ctx->pc = 0x3164fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14120));
label_316500:
    // 0x316500: 0xc0a0472  jal         func_2811C8
label_316504:
    if (ctx->pc == 0x316504u) {
        ctx->pc = 0x316504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316500u;
        // 0x316504: 0xa262b44c  sb          $v0, -0x4BB4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294947916), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316508u;
        goto label_316508;
    }
    ctx->pc = 0x316500u;
    SET_GPR_U32(ctx, 31, 0x316508u);
    ctx->pc = 0x316504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316500u;
    // 0x316504: 0xa262b44c  sb          $v0, -0x4BB4($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316500u, 0x316508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316508u;
label_316508:
    // 0x316508: 0xc0763fa  jal         func_1D8FE8
label_31650c:
    if (ctx->pc == 0x31650Cu) {
        ctx->pc = 0x316510u;
        goto label_316510;
    }
    ctx->pc = 0x316508u;
    SET_GPR_U32(ctx, 31, 0x316510u);
    ctx->pc = 0x1D8FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FE8u, 0x316508u, 0x316510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316510u;
label_316510:
    // 0x316510: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316514:
    // 0x316514: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316518:
    // 0x316518: 0xc0a0472  jal         func_2811C8
label_31651c:
    if (ctx->pc == 0x31651Cu) {
        ctx->pc = 0x31651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316518u;
        // 0x31651c: 0x24a53738  addiu       $a1, $a1, 0x3738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316520u;
        goto label_316520;
    }
    ctx->pc = 0x316518u;
    SET_GPR_U32(ctx, 31, 0x316520u);
    ctx->pc = 0x31651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316518u;
    // 0x31651c: 0x24a53738  addiu       $a1, $a1, 0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316518u, 0x316520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316520u;
label_316520:
    // 0x316520: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316524:
    // 0x316524: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316528:
    // 0x316528: 0xc0a0472  jal         func_2811C8
label_31652c:
    if (ctx->pc == 0x31652Cu) {
        ctx->pc = 0x31652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316528u;
        // 0x31652c: 0x24a53750  addiu       $a1, $a1, 0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316530u;
        goto label_316530;
    }
    ctx->pc = 0x316528u;
    SET_GPR_U32(ctx, 31, 0x316530u);
    ctx->pc = 0x31652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316528u;
    // 0x31652c: 0x24a53750  addiu       $a1, $a1, 0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316528u, 0x316530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316530u;
label_316530:
    // 0x316530: 0xc0dbe88  jal         func_36FA20
label_316534:
    if (ctx->pc == 0x316534u) {
        ctx->pc = 0x316538u;
        goto label_316538;
    }
    ctx->pc = 0x316530u;
    SET_GPR_U32(ctx, 31, 0x316538u);
    ctx->pc = 0x36FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA20u, 0x316530u, 0x316538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316538u;
label_316538:
    // 0x316538: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31653c:
    // 0x31653c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31653cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316540:
    // 0x316540: 0xc0a0472  jal         func_2811C8
label_316544:
    if (ctx->pc == 0x316544u) {
        ctx->pc = 0x316544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316540u;
        // 0x316544: 0x24a53768  addiu       $a1, $a1, 0x3768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316548u;
        goto label_316548;
    }
    ctx->pc = 0x316540u;
    SET_GPR_U32(ctx, 31, 0x316548u);
    ctx->pc = 0x316544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316540u;
    // 0x316544: 0x24a53768  addiu       $a1, $a1, 0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316540u, 0x316548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316548u;
label_316548:
    // 0x316548: 0xc0c580c  jal         func_316030
label_31654c:
    if (ctx->pc == 0x31654Cu) {
        ctx->pc = 0x31654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316548u;
        // 0x31654c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316550u;
        goto label_316550;
    }
    ctx->pc = 0x316548u;
    SET_GPR_U32(ctx, 31, 0x316550u);
    ctx->pc = 0x31654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316548u;
    // 0x31654c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x316548u, 0x316550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316550u;
label_316550:
    // 0x316550: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x316550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316554:
    // 0x316554: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x316554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_316558:
    // 0x316558: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x316558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_31655c:
    // 0x31655c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x31655cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_316560:
    // 0x316560: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x316560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_316564:
    // 0x316564: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x316564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316568:
    // 0x316568: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x316568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31656c:
    // 0x31656c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316570:
    // 0x316570: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x316570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_316574:
    // 0x316574: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x316574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316578:
    // 0x316578: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x316578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31657c:
    // 0x31657c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x31657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316580:
    // 0x316580: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x316580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_316584:
    // 0x316584: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x316584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316588:
    // 0x316588: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x316588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31658c:
    // 0x31658c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x31658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316590:
    // 0x316590: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x316590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_316594:
    // 0x316594: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x316594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316598:
    // 0x316598: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x316598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31659c:
    // 0x31659c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31659cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3165a0:
    // 0x3165a0: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x3165a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_3165a4:
    // 0x3165a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3165a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3165a8:
    // 0x3165a8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3165a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3165ac:
    // 0x3165ac: 0x8e43bd48  lw          $v1, -0x42B8($s2)
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3165b0:
    // 0x3165b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3165b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3165b4:
    // 0x3165b4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3165b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165b8:
    // 0x3165b8: 0x8c660100  lw          $a2, 0x100($v1)
    ctx->pc = 0x3165b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_3165bc:
    // 0x3165bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3165bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3165c0:
    // 0x3165c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3165c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3165c4:
    // 0x3165c4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3165c8:
    // 0x3165c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3165c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3165cc:
    // 0x3165cc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3165ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165d0:
    // 0x3165d0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x3165d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3165d4:
    // 0x3165d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3165d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3165d8:
    // 0x3165d8: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x3165d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3165dc:
    // 0x3165dc: 0x0  nop
    ctx->pc = 0x3165dcu;
    // NOP
label_3165e0:
    // 0x3165e0: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x3165e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
label_3165e4:
    // 0x3165e4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3165e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3165e8:
    // 0x3165e8: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x3165e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3165ec:
    // 0x3165ec: 0x46012943  div.s       $f5, $f5, $f1
    ctx->pc = 0x3165ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
label_3165f0:
    // 0x3165f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3165f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165f4:
    // 0x3165f4: 0x0  nop
    ctx->pc = 0x3165f4u;
    // NOP
label_3165f8:
    // 0x3165f8: 0x0  nop
    ctx->pc = 0x3165f8u;
    // NOP
label_3165fc:
    // 0x3165fc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3165fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_316600:
    // 0x316600: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x316600u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_316604:
    // 0x316604: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316608:
    // 0x316608: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x316608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31660c:
    // 0x31660c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x31660cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_316610:
    // 0x316610: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x316610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_316614:
    // 0x316614: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x316614u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_316618:
    // 0x316618: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x316618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31661c:
    // 0x31661c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x31661cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_316620:
    // 0x316620: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x316620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_316624:
    // 0x316624: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x316624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_316628:
    // 0x316628: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x316628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31662c:
    // 0x31662c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_316630:
    // 0x316630: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x316630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316634:
    // 0x316634: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x316634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316638:
    // 0x316638: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x316638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31663c:
    // 0x31663c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x31663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316640:
    // 0x316640: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x316640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_316644:
    // 0x316644: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x316644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_316648:
    // 0x316648: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x316648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31664c:
    // 0x31664c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x31664cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_316650:
    // 0x316650: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x316650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_316654:
    // 0x316654: 0xf8c10070  sqc2        $vf1, 0x70($a2)
    ctx->pc = 0x316654u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_316658:
    // 0x316658: 0x8e42bd48  lw          $v0, -0x42B8($s2)
    ctx->pc = 0x316658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31665c:
    // 0x31665c: 0xc0c48da  jal         func_312368
label_316660:
    if (ctx->pc == 0x316660u) {
        ctx->pc = 0x316660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31665Cu;
        // 0x316660: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316664u;
        goto label_316664;
    }
    ctx->pc = 0x31665Cu;
    SET_GPR_U32(ctx, 31, 0x316664u);
    ctx->pc = 0x316660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31665Cu;
    // 0x316660: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x31665Cu, 0x316664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316664u;
label_316664:
    // 0x316664: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316668:
    // 0x316668: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31666c:
    // 0x31666c: 0xc0a0472  jal         func_2811C8
label_316670:
    if (ctx->pc == 0x316670u) {
        ctx->pc = 0x316670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31666Cu;
        // 0x316670: 0x24a53778  addiu       $a1, $a1, 0x3778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316674u;
        goto label_316674;
    }
    ctx->pc = 0x31666Cu;
    SET_GPR_U32(ctx, 31, 0x316674u);
    ctx->pc = 0x316670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31666Cu;
    // 0x316670: 0x24a53778  addiu       $a1, $a1, 0x3778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31666Cu, 0x316674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316674u;
label_316674:
    // 0x316674: 0xc0ce0fe  jal         func_3383F8
label_316678:
    if (ctx->pc == 0x316678u) {
        ctx->pc = 0x31667Cu;
        goto label_31667c;
    }
    ctx->pc = 0x316674u;
    SET_GPR_U32(ctx, 31, 0x31667Cu);
    ctx->pc = 0x3383F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3383F8u, 0x316674u, 0x31667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31667Cu;
label_31667c:
    // 0x31667c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316680:
    // 0x316680: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316684:
    // 0x316684: 0xc0a0472  jal         func_2811C8
label_316688:
    if (ctx->pc == 0x316688u) {
        ctx->pc = 0x316688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316684u;
        // 0x316688: 0x24a53790  addiu       $a1, $a1, 0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31668Cu;
        goto label_31668c;
    }
    ctx->pc = 0x316684u;
    SET_GPR_U32(ctx, 31, 0x31668Cu);
    ctx->pc = 0x316688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316684u;
    // 0x316688: 0x24a53790  addiu       $a1, $a1, 0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316684u, 0x31668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31668Cu;
label_31668c:
    // 0x31668c: 0xc0a2ea2  jal         func_28BA88
label_316690:
    if (ctx->pc == 0x316690u) {
        ctx->pc = 0x316694u;
        goto label_316694;
    }
    ctx->pc = 0x31668Cu;
    SET_GPR_U32(ctx, 31, 0x316694u);
    ctx->pc = 0x28BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BA88u, 0x31668Cu, 0x316694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316694u;
label_316694:
    // 0x316694: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316698:
    // 0x316698: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31669c:
    // 0x31669c: 0xc0a0472  jal         func_2811C8
label_3166a0:
    if (ctx->pc == 0x3166A0u) {
        ctx->pc = 0x3166A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31669Cu;
        // 0x3166a0: 0x24a537a0  addiu       $a1, $a1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166A4u;
        goto label_3166a4;
    }
    ctx->pc = 0x31669Cu;
    SET_GPR_U32(ctx, 31, 0x3166A4u);
    ctx->pc = 0x3166A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31669Cu;
    // 0x3166a0: 0x24a537a0  addiu       $a1, $a1, 0x37A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31669Cu, 0x3166A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166A4u;
label_3166a4:
    // 0x3166a4: 0xc0cf3ac  jal         func_33CEB0
label_3166a8:
    if (ctx->pc == 0x3166A8u) {
        ctx->pc = 0x3166ACu;
        goto label_3166ac;
    }
    ctx->pc = 0x3166A4u;
    SET_GPR_U32(ctx, 31, 0x3166ACu);
    ctx->pc = 0x33CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CEB0u, 0x3166A4u, 0x3166ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166ACu;
label_3166ac:
    // 0x3166ac: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3166acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_3166b0:
    // 0x3166b0: 0xc0d7024  jal         func_35C090
label_3166b4:
    if (ctx->pc == 0x3166B4u) {
        ctx->pc = 0x3166B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166B0u;
        // 0x3166b4: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166B8u;
        goto label_3166b8;
    }
    ctx->pc = 0x3166B0u;
    SET_GPR_U32(ctx, 31, 0x3166B8u);
    ctx->pc = 0x3166B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166B0u;
    // 0x3166b4: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C090u, 0x3166B0u, 0x3166B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166B8u;
label_3166b8:
    // 0x3166b8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3166b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3166bc:
    // 0x3166bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3166bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3166c0:
    // 0x3166c0: 0xc0a0472  jal         func_2811C8
label_3166c4:
    if (ctx->pc == 0x3166C4u) {
        ctx->pc = 0x3166C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166C0u;
        // 0x3166c4: 0x24a537b0  addiu       $a1, $a1, 0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166C8u;
        goto label_3166c8;
    }
    ctx->pc = 0x3166C0u;
    SET_GPR_U32(ctx, 31, 0x3166C8u);
    ctx->pc = 0x3166C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166C0u;
    // 0x3166c4: 0x24a537b0  addiu       $a1, $a1, 0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3166C0u, 0x3166C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166C8u;
label_3166c8:
    // 0x3166c8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3166c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3166cc:
    // 0x3166cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3166ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3166d0:
    // 0x3166d0: 0xc0a0472  jal         func_2811C8
label_3166d4:
    if (ctx->pc == 0x3166D4u) {
        ctx->pc = 0x3166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166D0u;
        // 0x3166d4: 0x24a537c0  addiu       $a1, $a1, 0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166D8u;
        goto label_3166d8;
    }
    ctx->pc = 0x3166D0u;
    SET_GPR_U32(ctx, 31, 0x3166D8u);
    ctx->pc = 0x3166D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166D0u;
    // 0x3166d4: 0x24a537c0  addiu       $a1, $a1, 0x37C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3166D0u, 0x3166D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166D8u;
label_3166d8:
    // 0x3166d8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3166d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3166dc:
    // 0x3166dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3166dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3166e0:
    // 0x3166e0: 0xc0a0472  jal         func_2811C8
label_3166e4:
    if (ctx->pc == 0x3166E4u) {
        ctx->pc = 0x3166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166E0u;
        // 0x3166e4: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166E8u;
        goto label_3166e8;
    }
    ctx->pc = 0x3166E0u;
    SET_GPR_U32(ctx, 31, 0x3166E8u);
    ctx->pc = 0x3166E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166E0u;
    // 0x3166e4: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3166E0u, 0x3166E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166E8u;
label_3166e8:
    // 0x3166e8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3166e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3166ec:
    // 0x3166ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3166ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3166f0:
    // 0x3166f0: 0xc0a0472  jal         func_2811C8
label_3166f4:
    if (ctx->pc == 0x3166F4u) {
        ctx->pc = 0x3166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166F0u;
        // 0x3166f4: 0x24a537e0  addiu       $a1, $a1, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166F8u;
        goto label_3166f8;
    }
    ctx->pc = 0x3166F0u;
    SET_GPR_U32(ctx, 31, 0x3166F8u);
    ctx->pc = 0x3166F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166F0u;
    // 0x3166f4: 0x24a537e0  addiu       $a1, $a1, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3166F0u, 0x3166F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166F8u;
label_3166f8:
    // 0x3166f8: 0xc0a2b1a  jal         func_28AC68
label_3166fc:
    if (ctx->pc == 0x3166FCu) {
        ctx->pc = 0x316700u;
        goto label_316700;
    }
    ctx->pc = 0x3166F8u;
    SET_GPR_U32(ctx, 31, 0x316700u);
    ctx->pc = 0x28AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC68u, 0x3166F8u, 0x316700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316700u;
label_316700:
    // 0x316700: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316704:
    // 0x316704: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316708:
    // 0x316708: 0xc0a0472  jal         func_2811C8
label_31670c:
    if (ctx->pc == 0x31670Cu) {
        ctx->pc = 0x31670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316708u;
        // 0x31670c: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316710u;
        goto label_316710;
    }
    ctx->pc = 0x316708u;
    SET_GPR_U32(ctx, 31, 0x316710u);
    ctx->pc = 0x31670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316708u;
    // 0x31670c: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316708u, 0x316710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316710u;
label_316710:
    // 0x316710: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316714:
    // 0x316714: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316718:
    // 0x316718: 0xc0a0472  jal         func_2811C8
label_31671c:
    if (ctx->pc == 0x31671Cu) {
        ctx->pc = 0x31671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316718u;
        // 0x31671c: 0x24a534c8  addiu       $a1, $a1, 0x34C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316720u;
        goto label_316720;
    }
    ctx->pc = 0x316718u;
    SET_GPR_U32(ctx, 31, 0x316720u);
    ctx->pc = 0x31671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316718u;
    // 0x31671c: 0x24a534c8  addiu       $a1, $a1, 0x34C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316718u, 0x316720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316720u;
label_316720:
    // 0x316720: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316724:
    // 0x316724: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316728:
    // 0x316728: 0xc0a0472  jal         func_2811C8
label_31672c:
    if (ctx->pc == 0x31672Cu) {
        ctx->pc = 0x31672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316728u;
        // 0x31672c: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316730u;
        goto label_316730;
    }
    ctx->pc = 0x316728u;
    SET_GPR_U32(ctx, 31, 0x316730u);
    ctx->pc = 0x31672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316728u;
    // 0x31672c: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316728u, 0x316730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316730u;
label_316730:
    // 0x316730: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316734:
    // 0x316734: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316738:
    // 0x316738: 0xc0a0472  jal         func_2811C8
label_31673c:
    if (ctx->pc == 0x31673Cu) {
        ctx->pc = 0x31673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316738u;
        // 0x31673c: 0x24a537f8  addiu       $a1, $a1, 0x37F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316740u;
        goto label_316740;
    }
    ctx->pc = 0x316738u;
    SET_GPR_U32(ctx, 31, 0x316740u);
    ctx->pc = 0x31673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316738u;
    // 0x31673c: 0x24a537f8  addiu       $a1, $a1, 0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316738u, 0x316740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316740u;
label_316740:
    // 0x316740: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x316740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_316744:
    // 0x316744: 0xc0ab02e  jal         func_2AC0B8
label_316748:
    if (ctx->pc == 0x316748u) {
        ctx->pc = 0x316748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316744u;
        // 0x316748: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31674Cu;
        goto label_31674c;
    }
    ctx->pc = 0x316744u;
    SET_GPR_U32(ctx, 31, 0x31674Cu);
    ctx->pc = 0x316748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316744u;
    // 0x316748: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC0B8u, 0x316744u, 0x31674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31674Cu;
label_31674c:
    // 0x31674c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316750:
    // 0x316750: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316754:
    // 0x316754: 0xc0a0472  jal         func_2811C8
label_316758:
    if (ctx->pc == 0x316758u) {
        ctx->pc = 0x316758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316754u;
        // 0x316758: 0x24a53440  addiu       $a1, $a1, 0x3440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31675Cu;
        goto label_31675c;
    }
    ctx->pc = 0x316754u;
    SET_GPR_U32(ctx, 31, 0x31675Cu);
    ctx->pc = 0x316758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316754u;
    // 0x316758: 0x24a53440  addiu       $a1, $a1, 0x3440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316754u, 0x31675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31675Cu;
label_31675c:
    // 0x31675c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_316760:
    // 0x316760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316764:
    // 0x316764: 0xc0c5a68  jal         func_3169A0
label_316768:
    if (ctx->pc == 0x316768u) {
        ctx->pc = 0x316768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316764u;
        // 0x316768: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31676Cu;
        goto label_31676c;
    }
    ctx->pc = 0x316764u;
    SET_GPR_U32(ctx, 31, 0x31676Cu);
    ctx->pc = 0x316768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316764u;
    // 0x316768: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3169A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169A0u, 0x316764u, 0x31676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31676Cu;
label_31676c:
    // 0x31676c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_316770:
    if (ctx->pc == 0x316770u) {
        ctx->pc = 0x316770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31676Cu;
        // 0x316770: 0x9262b44c  lbu         $v0, -0x4BB4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294947916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316774u;
        goto label_316774;
    }
    ctx->pc = 0x31676Cu;
    {
        const bool branch_taken_0x31676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31676Cu;
        // 0x316770: 0x9262b44c  lbu         $v0, -0x4BB4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294947916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31676c) {
            ctx->pc = 0x3167A8u;
            goto label_3167a8;
        }
    }
    ctx->pc = 0x316774u;
label_316774:
    // 0x316774: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_316778:
    // 0x316778: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31677c:
    // 0x31677c: 0x24a53458  addiu       $a1, $a1, 0x3458
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13400));
label_316780:
    // 0x316780: 0xa2828d50  sb          $v0, -0x72B0($s4)
    ctx->pc = 0x316780u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294937936), (uint8_t)GPR_U32(ctx, 2));
label_316784:
    // 0x316784: 0xc0a0472  jal         func_2811C8
label_316788:
    if (ctx->pc == 0x316788u) {
        ctx->pc = 0x316788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316784u;
        // 0x316788: 0xa275b44c  sb          $s5, -0x4BB4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294947916), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31678Cu;
        goto label_31678c;
    }
    ctx->pc = 0x316784u;
    SET_GPR_U32(ctx, 31, 0x31678Cu);
    ctx->pc = 0x316788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316784u;
    // 0x316788: 0xa275b44c  sb          $s5, -0x4BB4($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294947916), (uint8_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x316784u, 0x31678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31678Cu;
label_31678c:
    // 0x31678c: 0x8ec2a324  lw          $v0, -0x5CDC($s6)
    ctx->pc = 0x31678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943524)));
label_316790:
    // 0x316790: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_316794:
    if (ctx->pc == 0x316794u) {
        ctx->pc = 0x316794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316790u;
        // 0x316794: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316798u;
        goto label_316798;
    }
    ctx->pc = 0x316790u;
    {
        const bool branch_taken_0x316790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316790u;
        // 0x316794: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316790) {
            ctx->pc = 0x3167B0u;
            goto label_3167b0;
        }
    }
    ctx->pc = 0x316798u;
label_316798:
    // 0x316798: 0xc085a3e  jal         func_2168F8
label_31679c:
    if (ctx->pc == 0x31679Cu) {
        ctx->pc = 0x31679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316798u;
        // 0x31679c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167A0u;
        goto label_3167a0;
    }
    ctx->pc = 0x316798u;
    SET_GPR_U32(ctx, 31, 0x3167A0u);
    ctx->pc = 0x31679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316798u;
    // 0x31679c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2168F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2168F8u, 0x316798u, 0x3167A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167A0u;
label_3167a0:
    // 0x3167a0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3167a4:
    if (ctx->pc == 0x3167A4u) {
        ctx->pc = 0x3167A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167A0u;
        // 0x3167a4: 0x92828d50  lbu         $v0, -0x72B0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294937936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167A8u;
        goto label_3167a8;
    }
    ctx->pc = 0x3167A0u;
    {
        const bool branch_taken_0x3167a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3167A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167A0u;
        // 0x3167a4: 0x92828d50  lbu         $v0, -0x72B0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294937936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167a0) {
            ctx->pc = 0x3167E4u;
            goto label_3167e4;
        }
    }
    ctx->pc = 0x3167A8u;
label_3167a8:
    // 0x3167a8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3167ac:
    if (ctx->pc == 0x3167ACu) {
        ctx->pc = 0x3167ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167A8u;
        // 0x3167ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167B0u;
        goto label_3167b0;
    }
    ctx->pc = 0x3167A8u;
    {
        const bool branch_taken_0x3167a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3167ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167A8u;
        // 0x3167ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167a8) {
            ctx->pc = 0x316968u;
            goto label_316968;
        }
    }
    ctx->pc = 0x3167B0u;
label_3167b0:
    // 0x3167b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3167b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3167b4:
    // 0x3167b4: 0xc085a3e  jal         func_2168F8
label_3167b8:
    if (ctx->pc == 0x3167B8u) {
        ctx->pc = 0x3167B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167B4u;
        // 0x3167b8: 0xa05595f1  sb          $s5, -0x6A0F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940145), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167BCu;
        goto label_3167bc;
    }
    ctx->pc = 0x3167B4u;
    SET_GPR_U32(ctx, 31, 0x3167BCu);
    ctx->pc = 0x3167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167B4u;
    // 0x3167b8: 0xa05595f1  sb          $s5, -0x6A0F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940145), (uint8_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2168F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2168F8u, 0x3167B4u, 0x3167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167BCu;
label_3167bc:
    // 0x3167bc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x3167bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_3167c0:
    // 0x3167c0: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x3167c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_3167c4:
    // 0x3167c4: 0x24632508  addiu       $v1, $v1, 0x2508
    ctx->pc = 0x3167c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9480));
label_3167c8:
    // 0x3167c8: 0x348408f0  ori         $a0, $a0, 0x8F0
    ctx->pc = 0x3167c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2288);
label_3167cc:
    // 0x3167cc: 0xc0ab2dc  jal         func_2ACB70
label_3167d0:
    if (ctx->pc == 0x3167D0u) {
        ctx->pc = 0x3167D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167CCu;
        // 0x3167d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167D4u;
        goto label_3167d4;
    }
    ctx->pc = 0x3167CCu;
    SET_GPR_U32(ctx, 31, 0x3167D4u);
    ctx->pc = 0x3167D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167CCu;
    // 0x3167d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB70u, 0x3167CCu, 0x3167D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167D4u;
label_3167d4:
    // 0x3167d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3167d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3167d8:
    // 0x3167d8: 0xc0b9426  jal         func_2E5098
label_3167dc:
    if (ctx->pc == 0x3167DCu) {
        ctx->pc = 0x3167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167D8u;
        // 0x3167dc: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167E0u;
        goto label_3167e0;
    }
    ctx->pc = 0x3167D8u;
    SET_GPR_U32(ctx, 31, 0x3167E0u);
    ctx->pc = 0x3167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167D8u;
    // 0x3167dc: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5098u, 0x3167D8u, 0x3167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167E0u;
label_3167e0:
    // 0x3167e0: 0x92828d50  lbu         $v0, -0x72B0($s4)
    ctx->pc = 0x3167e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294937936)));
label_3167e4:
    // 0x3167e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3167e8:
    // 0x3167e8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3167ec:
    // 0x3167ec: 0x24a53808  addiu       $a1, $a1, 0x3808
    ctx->pc = 0x3167ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14344));
label_3167f0:
    // 0x3167f0: 0xa262b44c  sb          $v0, -0x4BB4($s3)
    ctx->pc = 0x3167f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294947916), (uint8_t)GPR_U32(ctx, 2));
label_3167f4:
    // 0x3167f4: 0xc0a0472  jal         func_2811C8
label_3167f8:
    if (ctx->pc == 0x3167F8u) {
        ctx->pc = 0x3167F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167F4u;
        // 0x3167f8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3167FCu;
        goto label_3167fc;
    }
    ctx->pc = 0x3167F4u;
    SET_GPR_U32(ctx, 31, 0x3167FCu);
    ctx->pc = 0x3167F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167F4u;
    // 0x3167f8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3167F4u, 0x3167FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167FCu;
label_3167fc:
    // 0x3167fc: 0xc0d0590  jal         func_341640
label_316800:
    if (ctx->pc == 0x316800u) {
        ctx->pc = 0x316800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167FCu;
        // 0x316800: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316804u;
        goto label_316804;
    }
    ctx->pc = 0x3167FCu;
    SET_GPR_U32(ctx, 31, 0x316804u);
    ctx->pc = 0x316800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167FCu;
    // 0x316800: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3167FCu, 0x316804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316804u;
label_316804:
    // 0x316804: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316808:
    // 0x316808: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31680c:
    // 0x31680c: 0xc0a0472  jal         func_2811C8
label_316810:
    if (ctx->pc == 0x316810u) {
        ctx->pc = 0x316810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31680Cu;
        // 0x316810: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316814u;
        goto label_316814;
    }
    ctx->pc = 0x31680Cu;
    SET_GPR_U32(ctx, 31, 0x316814u);
    ctx->pc = 0x316810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31680Cu;
    // 0x316810: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31680Cu, 0x316814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316814u;
label_316814:
    // 0x316814: 0xc0400cc  jal         func_100330
label_316818:
    if (ctx->pc == 0x316818u) {
        ctx->pc = 0x31681Cu;
        goto label_31681c;
    }
    ctx->pc = 0x316814u;
    SET_GPR_U32(ctx, 31, 0x31681Cu);
    ctx->pc = 0x100330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100330u, 0x316814u, 0x31681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31681Cu;
label_31681c:
    // 0x31681c: 0xc0405f6  jal         func_1017D8
label_316820:
    if (ctx->pc == 0x316820u) {
        ctx->pc = 0x316824u;
        goto label_316824;
    }
    ctx->pc = 0x31681Cu;
    SET_GPR_U32(ctx, 31, 0x316824u);
    ctx->pc = 0x1017D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017D8u, 0x31681Cu, 0x316824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316824u;
label_316824:
    // 0x316824: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x316824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_316828:
    // 0x316828: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x316828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31682c:
    // 0x31682c: 0xc0a0472  jal         func_2811C8
label_316830:
    if (ctx->pc == 0x316830u) {
        ctx->pc = 0x316830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31682Cu;
        // 0x316830: 0x24a534a0  addiu       $a1, $a1, 0x34A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316834u;
        goto label_316834;
    }
    ctx->pc = 0x31682Cu;
    SET_GPR_U32(ctx, 31, 0x316834u);
    ctx->pc = 0x316830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31682Cu;
    // 0x316830: 0x24a534a0  addiu       $a1, $a1, 0x34A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31682Cu, 0x316834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316834u;
label_316834:
    // 0x316834: 0xc0c963c  jal         func_3258F0
label_316838:
    if (ctx->pc == 0x316838u) {
        ctx->pc = 0x31683Cu;
        goto label_31683c;
    }
    ctx->pc = 0x316834u;
    SET_GPR_U32(ctx, 31, 0x31683Cu);
    ctx->pc = 0x3258F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258F0u, 0x316834u, 0x31683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31683Cu;
label_31683c:
    // 0x31683c: 0xc0f5240  jal         func_3D4900
label_316840:
    if (ctx->pc == 0x316840u) {
        ctx->pc = 0x316840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31683Cu;
        // 0x316840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316844u;
        goto label_316844;
    }
    ctx->pc = 0x31683Cu;
    SET_GPR_U32(ctx, 31, 0x316844u);
    ctx->pc = 0x316840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31683Cu;
    // 0x316840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31683Cu, 0x316844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316844u;
label_316844:
    // 0x316844: 0xc0b4bea  jal         func_2D2FA8
label_316848:
    if (ctx->pc == 0x316848u) {
        ctx->pc = 0x316848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316844u;
        // 0x316848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31684Cu;
        goto label_31684c;
    }
    ctx->pc = 0x316844u;
    SET_GPR_U32(ctx, 31, 0x31684Cu);
    ctx->pc = 0x316848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316844u;
    // 0x316848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2FA8u, 0x316844u, 0x31684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31684Cu;
label_31684c:
    // 0x31684c: 0xc0b5f9a  jal         func_2D7E68
label_316850:
    if (ctx->pc == 0x316850u) {
        ctx->pc = 0x316850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31684Cu;
        // 0x316850: 0xae22bd34  sw          $v0, -0x42CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316854u;
        goto label_316854;
    }
    ctx->pc = 0x31684Cu;
    SET_GPR_U32(ctx, 31, 0x316854u);
    ctx->pc = 0x316850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31684Cu;
    // 0x316850: 0xae22bd34  sw          $v0, -0x42CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E68u, 0x31684Cu, 0x316854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316854u;
label_316854:
    // 0x316854: 0xc0b5fde  jal         func_2D7F78
label_316858:
    if (ctx->pc == 0x316858u) {
        ctx->pc = 0x316858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316854u;
        // 0x316858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31685Cu;
        goto label_31685c;
    }
    ctx->pc = 0x316854u;
    SET_GPR_U32(ctx, 31, 0x31685Cu);
    ctx->pc = 0x316858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316854u;
    // 0x316858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F78u, 0x316854u, 0x31685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31685Cu;
label_31685c:
    // 0x31685c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316860:
    // 0x316860: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_316864:
    // 0x316864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316868:
    // 0x316868: 0xc0a2306  jal         func_288C18
label_31686c:
    if (ctx->pc == 0x31686Cu) {
        ctx->pc = 0x31686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316868u;
        // 0x31686c: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316870u;
        goto label_316870;
    }
    ctx->pc = 0x316868u;
    SET_GPR_U32(ctx, 31, 0x316870u);
    ctx->pc = 0x31686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316868u;
    // 0x31686c: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x316868u, 0x316870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316870u;
label_316870:
    // 0x316870: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316874:
    // 0x316874: 0xc0b94ee  jal         func_2E53B8
label_316878:
    if (ctx->pc == 0x316878u) {
        ctx->pc = 0x316878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316874u;
        // 0x316878: 0xac60a7cc  sw          $zero, -0x5834($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31687Cu;
        goto label_31687c;
    }
    ctx->pc = 0x316874u;
    SET_GPR_U32(ctx, 31, 0x31687Cu);
    ctx->pc = 0x316878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316874u;
    // 0x316878: 0xac60a7cc  sw          $zero, -0x5834($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944716), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E53B8u, 0x316874u, 0x31687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31687Cu;
label_31687c:
    // 0x31687c: 0x8e02bd50  lw          $v0, -0x42B0($s0)
    ctx->pc = 0x31687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_316880:
    // 0x316880: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_316884:
    // 0x316884: 0xac4011b0  sw          $zero, 0x11B0($v0)
    ctx->pc = 0x316884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4528), GPR_U32(ctx, 0));
label_316888:
    // 0x316888: 0xac4011b4  sw          $zero, 0x11B4($v0)
    ctx->pc = 0x316888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4532), GPR_U32(ctx, 0));
label_31688c:
    // 0x31688c: 0x8c832b50  lw          $v1, 0x2B50($a0)
    ctx->pc = 0x31688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
label_316890:
    // 0x316890: 0x8e02bd50  lw          $v0, -0x42B0($s0)
    ctx->pc = 0x316890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_316894:
    // 0x316894: 0xc0c1322  jal         func_304C88
label_316898:
    if (ctx->pc == 0x316898u) {
        ctx->pc = 0x316898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316894u;
        // 0x316898: 0xac4311b0  sw          $v1, 0x11B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31689Cu;
        goto label_31689c;
    }
    ctx->pc = 0x316894u;
    SET_GPR_U32(ctx, 31, 0x31689Cu);
    ctx->pc = 0x316898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316894u;
    // 0x316898: 0xac4311b0  sw          $v1, 0x11B0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304C88u, 0x316894u, 0x31689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31689Cu;
label_31689c:
    // 0x31689c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_3168a0:
    // 0x3168a0: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x3168a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_3168a4:
    // 0x3168a4: 0xc0bcc6a  jal         func_2F31A8
label_3168a8:
    if (ctx->pc == 0x3168A8u) {
        ctx->pc = 0x3168A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168A4u;
        // 0x3168a8: 0xc44c3820  lwc1        $f12, 0x3820($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168ACu;
        goto label_3168ac;
    }
    ctx->pc = 0x3168A4u;
    SET_GPR_U32(ctx, 31, 0x3168ACu);
    ctx->pc = 0x3168A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168A4u;
    // 0x3168a8: 0xc44c3820  lwc1        $f12, 0x3820($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x3168A4u, 0x3168ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168ACu;
label_3168ac:
    // 0x3168ac: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_3168b0:
    // 0x3168b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_3168b4:
    // 0x3168b4: 0x8c8211c0  lw          $v0, 0x11C0($a0)
    ctx->pc = 0x3168b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
label_3168b8:
    // 0x3168b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3168b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3168bc:
    // 0x3168bc: 0xac8211c0  sw          $v0, 0x11C0($a0)
    ctx->pc = 0x3168bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
label_3168c0:
    // 0x3168c0: 0x8ec3a324  lw          $v1, -0x5CDC($s6)
    ctx->pc = 0x3168c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943524)));
label_3168c4:
    // 0x3168c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3168c8:
    if (ctx->pc == 0x3168C8u) {
        ctx->pc = 0x3168C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168C4u;
        // 0x3168c8: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168CCu;
        goto label_3168cc;
    }
    ctx->pc = 0x3168C4u;
    {
        const bool branch_taken_0x3168c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168C4u;
        // 0x3168c8: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168c4) {
            ctx->pc = 0x3168E0u;
            goto label_3168e0;
        }
    }
    ctx->pc = 0x3168CCu;
label_3168cc:
    // 0x3168cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_3168d0:
    // 0x3168d0: 0xc0acc56  jal         func_2B3158
label_3168d4:
    if (ctx->pc == 0x3168D4u) {
        ctx->pc = 0x3168D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168D0u;
        // 0x3168d4: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168D8u;
        goto label_3168d8;
    }
    ctx->pc = 0x3168D0u;
    SET_GPR_U32(ctx, 31, 0x3168D8u);
    ctx->pc = 0x3168D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168D0u;
    // 0x3168d4: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3158u, 0x3168D0u, 0x3168D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168D8u;
label_3168d8:
    // 0x3168d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3168dc:
    if (ctx->pc == 0x3168DCu) {
        ctx->pc = 0x3168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168D8u;
        // 0x3168dc: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168E0u;
        goto label_3168e0;
    }
    ctx->pc = 0x3168D8u;
    {
        const bool branch_taken_0x3168d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168D8u;
        // 0x3168dc: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168d8) {
            ctx->pc = 0x3168F8u;
            goto label_3168f8;
        }
    }
    ctx->pc = 0x3168E0u;
label_3168e0:
    // 0x3168e0: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x3168e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
label_3168e4:
    // 0x3168e4: 0xc0acd4a  jal         func_2B3528
label_3168e8:
    if (ctx->pc == 0x3168E8u) {
        ctx->pc = 0x3168E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168E4u;
        // 0x3168e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168ECu;
        goto label_3168ec;
    }
    ctx->pc = 0x3168E4u;
    SET_GPR_U32(ctx, 31, 0x3168ECu);
    ctx->pc = 0x3168E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168E4u;
    // 0x3168e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3528u, 0x3168E4u, 0x3168ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168ECu;
label_3168ec:
    // 0x3168ec: 0xc0accd0  jal         func_2B3340
label_3168f0:
    if (ctx->pc == 0x3168F0u) {
        ctx->pc = 0x3168F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168ECu;
        // 0x3168f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3168F4u;
        goto label_3168f4;
    }
    ctx->pc = 0x3168ECu;
    SET_GPR_U32(ctx, 31, 0x3168F4u);
    ctx->pc = 0x3168F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168ECu;
    // 0x3168f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3340u, 0x3168ECu, 0x3168F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168F4u;
label_3168f4:
    // 0x3168f4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x3168f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_3168f8:
    // 0x3168f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3168f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3168fc:
    // 0x3168fc: 0xc07f69c  jal         func_1FDA70
label_316900:
    if (ctx->pc == 0x316900u) {
        ctx->pc = 0x316900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168FCu;
        // 0x316900: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316904u;
        goto label_316904;
    }
    ctx->pc = 0x3168FCu;
    SET_GPR_U32(ctx, 31, 0x316904u);
    ctx->pc = 0x316900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168FCu;
    // 0x316900: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA70u, 0x3168FCu, 0x316904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316904u;
label_316904:
    // 0x316904: 0xc0c8a64  jal         func_322990
label_316908:
    if (ctx->pc == 0x316908u) {
        ctx->pc = 0x31690Cu;
        goto label_31690c;
    }
    ctx->pc = 0x316904u;
    SET_GPR_U32(ctx, 31, 0x31690Cu);
    ctx->pc = 0x322990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322990u, 0x316904u, 0x31690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31690Cu;
label_31690c:
    // 0x31690c: 0x26e3f130  addiu       $v1, $s7, -0xED0
    ctx->pc = 0x31690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963504));
label_316910:
    // 0x316910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316914:
    // 0x316914: 0xc0a04aa  jal         func_2812A8
label_316918:
    if (ctx->pc == 0x316918u) {
        ctx->pc = 0x316918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316914u;
        // 0x316918: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31691Cu;
        goto label_31691c;
    }
    ctx->pc = 0x316914u;
    SET_GPR_U32(ctx, 31, 0x31691Cu);
    ctx->pc = 0x316918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316914u;
    // 0x316918: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x316914u, 0x31691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31691Cu;
label_31691c:
    // 0x31691c: 0xc0b28aa  jal         func_2CA2A8
label_316920:
    if (ctx->pc == 0x316920u) {
        ctx->pc = 0x316924u;
        goto label_316924;
    }
    ctx->pc = 0x31691Cu;
    SET_GPR_U32(ctx, 31, 0x316924u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x31691Cu, 0x316924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316924u;
label_316924:
    // 0x316924: 0xc0b29e0  jal         func_2CA780
label_316928:
    if (ctx->pc == 0x316928u) {
        ctx->pc = 0x316928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316924u;
        // 0x316928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31692Cu;
        goto label_31692c;
    }
    ctx->pc = 0x316924u;
    SET_GPR_U32(ctx, 31, 0x31692Cu);
    ctx->pc = 0x316928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316924u;
    // 0x316928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA780u, 0x316924u, 0x31692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31692Cu;
label_31692c:
    // 0x31692c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x31692cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_316930:
    // 0x316930: 0xc0abe3e  jal         func_2AF8F8
label_316934:
    if (ctx->pc == 0x316934u) {
        ctx->pc = 0x316934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316930u;
        // 0x316934: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316938u;
        goto label_316938;
    }
    ctx->pc = 0x316930u;
    SET_GPR_U32(ctx, 31, 0x316938u);
    ctx->pc = 0x316934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316930u;
    // 0x316934: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x316930u, 0x316938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316938u;
label_316938:
    // 0x316938: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_31693c:
    // 0x31693c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x31693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_316940:
    // 0x316940: 0xac6091bc  sw          $zero, -0x6E44($v1)
    ctx->pc = 0x316940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939068), GPR_U32(ctx, 0));
label_316944:
    // 0x316944: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x316944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
label_316948:
    // 0x316948: 0xac402470  sw          $zero, 0x2470($v0)
    ctx->pc = 0x316948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9328), GPR_U32(ctx, 0));
label_31694c:
    // 0x31694c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_316950:
    // 0x316950: 0xafc091fc  sw          $zero, -0x6E04($fp)
    ctx->pc = 0x316950u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294939132), GPR_U32(ctx, 0));
label_316954:
    // 0x316954: 0xc0abc1a  jal         func_2AF068
label_316958:
    if (ctx->pc == 0x316958u) {
        ctx->pc = 0x316958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316954u;
        // 0x316958: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31695Cu;
        goto label_31695c;
    }
    ctx->pc = 0x316954u;
    SET_GPR_U32(ctx, 31, 0x31695Cu);
    ctx->pc = 0x316958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316954u;
    // 0x316958: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF068u, 0x316954u, 0x31695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31695Cu;
label_31695c:
    // 0x31695c: 0xc0d9cb6  jal         func_3672D8
label_316960:
    if (ctx->pc == 0x316960u) {
        ctx->pc = 0x316960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31695Cu;
        // 0x316960: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316964u;
        goto label_316964;
    }
    ctx->pc = 0x31695Cu;
    SET_GPR_U32(ctx, 31, 0x316964u);
    ctx->pc = 0x316960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31695Cu;
    // 0x316960: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x31695Cu, 0x316964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316964u;
label_316964:
    // 0x316964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316968:
    // 0x316968: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x316968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31696c:
    // 0x31696c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x31696cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_316970:
    // 0x316970: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x316970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_316974:
    // 0x316974: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x316974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_316978:
    // 0x316978: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x316978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31697c:
    // 0x31697c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x31697cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_316980:
    // 0x316980: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x316980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_316984:
    // 0x316984: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x316984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_316988:
    // 0x316988: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x316988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_31698c:
    // 0x31698c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x31698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_316990:
    // 0x316990: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x316990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_316994:
    // 0x316994: 0x3e00008  jr          $ra
label_316998:
    if (ctx->pc == 0x316998u) {
        ctx->pc = 0x316998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316994u;
        // 0x316998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31699Cu;
        goto label_31699c;
    }
    ctx->pc = 0x316994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316994u;
        // 0x316998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31699Cu;
label_31699c:
    // 0x31699c: 0x0  nop
    ctx->pc = 0x31699cu;
    // NOP
    ctx->pc = 0x3169a0u;
}
