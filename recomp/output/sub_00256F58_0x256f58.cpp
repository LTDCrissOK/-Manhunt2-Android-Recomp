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

// Function: sub_00256F58
// Address: 0x256f58 - 0x257798
void sub_00256F58_0x256f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256F58_0x256f58");
#endif

    switch (ctx->pc) {
        case 0x256f58u: goto label_256f58;
        case 0x256f5cu: goto label_256f5c;
        case 0x256f60u: goto label_256f60;
        case 0x256f64u: goto label_256f64;
        case 0x256f68u: goto label_256f68;
        case 0x256f6cu: goto label_256f6c;
        case 0x256f70u: goto label_256f70;
        case 0x256f74u: goto label_256f74;
        case 0x256f78u: goto label_256f78;
        case 0x256f7cu: goto label_256f7c;
        case 0x256f80u: goto label_256f80;
        case 0x256f84u: goto label_256f84;
        case 0x256f88u: goto label_256f88;
        case 0x256f8cu: goto label_256f8c;
        case 0x256f90u: goto label_256f90;
        case 0x256f94u: goto label_256f94;
        case 0x256f98u: goto label_256f98;
        case 0x256f9cu: goto label_256f9c;
        case 0x256fa0u: goto label_256fa0;
        case 0x256fa4u: goto label_256fa4;
        case 0x256fa8u: goto label_256fa8;
        case 0x256facu: goto label_256fac;
        case 0x256fb0u: goto label_256fb0;
        case 0x256fb4u: goto label_256fb4;
        case 0x256fb8u: goto label_256fb8;
        case 0x256fbcu: goto label_256fbc;
        case 0x256fc0u: goto label_256fc0;
        case 0x256fc4u: goto label_256fc4;
        case 0x256fc8u: goto label_256fc8;
        case 0x256fccu: goto label_256fcc;
        case 0x256fd0u: goto label_256fd0;
        case 0x256fd4u: goto label_256fd4;
        case 0x256fd8u: goto label_256fd8;
        case 0x256fdcu: goto label_256fdc;
        case 0x256fe0u: goto label_256fe0;
        case 0x256fe4u: goto label_256fe4;
        case 0x256fe8u: goto label_256fe8;
        case 0x256fecu: goto label_256fec;
        case 0x256ff0u: goto label_256ff0;
        case 0x256ff4u: goto label_256ff4;
        case 0x256ff8u: goto label_256ff8;
        case 0x256ffcu: goto label_256ffc;
        case 0x257000u: goto label_257000;
        case 0x257004u: goto label_257004;
        case 0x257008u: goto label_257008;
        case 0x25700cu: goto label_25700c;
        case 0x257010u: goto label_257010;
        case 0x257014u: goto label_257014;
        case 0x257018u: goto label_257018;
        case 0x25701cu: goto label_25701c;
        case 0x257020u: goto label_257020;
        case 0x257024u: goto label_257024;
        case 0x257028u: goto label_257028;
        case 0x25702cu: goto label_25702c;
        case 0x257030u: goto label_257030;
        case 0x257034u: goto label_257034;
        case 0x257038u: goto label_257038;
        case 0x25703cu: goto label_25703c;
        case 0x257040u: goto label_257040;
        case 0x257044u: goto label_257044;
        case 0x257048u: goto label_257048;
        case 0x25704cu: goto label_25704c;
        case 0x257050u: goto label_257050;
        case 0x257054u: goto label_257054;
        case 0x257058u: goto label_257058;
        case 0x25705cu: goto label_25705c;
        case 0x257060u: goto label_257060;
        case 0x257064u: goto label_257064;
        case 0x257068u: goto label_257068;
        case 0x25706cu: goto label_25706c;
        case 0x257070u: goto label_257070;
        case 0x257074u: goto label_257074;
        case 0x257078u: goto label_257078;
        case 0x25707cu: goto label_25707c;
        case 0x257080u: goto label_257080;
        case 0x257084u: goto label_257084;
        case 0x257088u: goto label_257088;
        case 0x25708cu: goto label_25708c;
        case 0x257090u: goto label_257090;
        case 0x257094u: goto label_257094;
        case 0x257098u: goto label_257098;
        case 0x25709cu: goto label_25709c;
        case 0x2570a0u: goto label_2570a0;
        case 0x2570a4u: goto label_2570a4;
        case 0x2570a8u: goto label_2570a8;
        case 0x2570acu: goto label_2570ac;
        case 0x2570b0u: goto label_2570b0;
        case 0x2570b4u: goto label_2570b4;
        case 0x2570b8u: goto label_2570b8;
        case 0x2570bcu: goto label_2570bc;
        case 0x2570c0u: goto label_2570c0;
        case 0x2570c4u: goto label_2570c4;
        case 0x2570c8u: goto label_2570c8;
        case 0x2570ccu: goto label_2570cc;
        case 0x2570d0u: goto label_2570d0;
        case 0x2570d4u: goto label_2570d4;
        case 0x2570d8u: goto label_2570d8;
        case 0x2570dcu: goto label_2570dc;
        case 0x2570e0u: goto label_2570e0;
        case 0x2570e4u: goto label_2570e4;
        case 0x2570e8u: goto label_2570e8;
        case 0x2570ecu: goto label_2570ec;
        case 0x2570f0u: goto label_2570f0;
        case 0x2570f4u: goto label_2570f4;
        case 0x2570f8u: goto label_2570f8;
        case 0x2570fcu: goto label_2570fc;
        case 0x257100u: goto label_257100;
        case 0x257104u: goto label_257104;
        case 0x257108u: goto label_257108;
        case 0x25710cu: goto label_25710c;
        case 0x257110u: goto label_257110;
        case 0x257114u: goto label_257114;
        case 0x257118u: goto label_257118;
        case 0x25711cu: goto label_25711c;
        case 0x257120u: goto label_257120;
        case 0x257124u: goto label_257124;
        case 0x257128u: goto label_257128;
        case 0x25712cu: goto label_25712c;
        case 0x257130u: goto label_257130;
        case 0x257134u: goto label_257134;
        case 0x257138u: goto label_257138;
        case 0x25713cu: goto label_25713c;
        case 0x257140u: goto label_257140;
        case 0x257144u: goto label_257144;
        case 0x257148u: goto label_257148;
        case 0x25714cu: goto label_25714c;
        case 0x257150u: goto label_257150;
        case 0x257154u: goto label_257154;
        case 0x257158u: goto label_257158;
        case 0x25715cu: goto label_25715c;
        case 0x257160u: goto label_257160;
        case 0x257164u: goto label_257164;
        case 0x257168u: goto label_257168;
        case 0x25716cu: goto label_25716c;
        case 0x257170u: goto label_257170;
        case 0x257174u: goto label_257174;
        case 0x257178u: goto label_257178;
        case 0x25717cu: goto label_25717c;
        case 0x257180u: goto label_257180;
        case 0x257184u: goto label_257184;
        case 0x257188u: goto label_257188;
        case 0x25718cu: goto label_25718c;
        case 0x257190u: goto label_257190;
        case 0x257194u: goto label_257194;
        case 0x257198u: goto label_257198;
        case 0x25719cu: goto label_25719c;
        case 0x2571a0u: goto label_2571a0;
        case 0x2571a4u: goto label_2571a4;
        case 0x2571a8u: goto label_2571a8;
        case 0x2571acu: goto label_2571ac;
        case 0x2571b0u: goto label_2571b0;
        case 0x2571b4u: goto label_2571b4;
        case 0x2571b8u: goto label_2571b8;
        case 0x2571bcu: goto label_2571bc;
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        case 0x2571d0u: goto label_2571d0;
        case 0x2571d4u: goto label_2571d4;
        case 0x2571d8u: goto label_2571d8;
        case 0x2571dcu: goto label_2571dc;
        case 0x2571e0u: goto label_2571e0;
        case 0x2571e4u: goto label_2571e4;
        case 0x2571e8u: goto label_2571e8;
        case 0x2571ecu: goto label_2571ec;
        case 0x2571f0u: goto label_2571f0;
        case 0x2571f4u: goto label_2571f4;
        case 0x2571f8u: goto label_2571f8;
        case 0x2571fcu: goto label_2571fc;
        case 0x257200u: goto label_257200;
        case 0x257204u: goto label_257204;
        case 0x257208u: goto label_257208;
        case 0x25720cu: goto label_25720c;
        case 0x257210u: goto label_257210;
        case 0x257214u: goto label_257214;
        case 0x257218u: goto label_257218;
        case 0x25721cu: goto label_25721c;
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        case 0x2572c0u: goto label_2572c0;
        case 0x2572c4u: goto label_2572c4;
        case 0x2572c8u: goto label_2572c8;
        case 0x2572ccu: goto label_2572cc;
        case 0x2572d0u: goto label_2572d0;
        case 0x2572d4u: goto label_2572d4;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572dcu: goto label_2572dc;
        case 0x2572e0u: goto label_2572e0;
        case 0x2572e4u: goto label_2572e4;
        case 0x2572e8u: goto label_2572e8;
        case 0x2572ecu: goto label_2572ec;
        case 0x2572f0u: goto label_2572f0;
        case 0x2572f4u: goto label_2572f4;
        case 0x2572f8u: goto label_2572f8;
        case 0x2572fcu: goto label_2572fc;
        case 0x257300u: goto label_257300;
        case 0x257304u: goto label_257304;
        case 0x257308u: goto label_257308;
        case 0x25730cu: goto label_25730c;
        case 0x257310u: goto label_257310;
        case 0x257314u: goto label_257314;
        case 0x257318u: goto label_257318;
        case 0x25731cu: goto label_25731c;
        case 0x257320u: goto label_257320;
        case 0x257324u: goto label_257324;
        case 0x257328u: goto label_257328;
        case 0x25732cu: goto label_25732c;
        case 0x257330u: goto label_257330;
        case 0x257334u: goto label_257334;
        case 0x257338u: goto label_257338;
        case 0x25733cu: goto label_25733c;
        case 0x257340u: goto label_257340;
        case 0x257344u: goto label_257344;
        case 0x257348u: goto label_257348;
        case 0x25734cu: goto label_25734c;
        case 0x257350u: goto label_257350;
        case 0x257354u: goto label_257354;
        case 0x257358u: goto label_257358;
        case 0x25735cu: goto label_25735c;
        case 0x257360u: goto label_257360;
        case 0x257364u: goto label_257364;
        case 0x257368u: goto label_257368;
        case 0x25736cu: goto label_25736c;
        case 0x257370u: goto label_257370;
        case 0x257374u: goto label_257374;
        case 0x257378u: goto label_257378;
        case 0x25737cu: goto label_25737c;
        case 0x257380u: goto label_257380;
        case 0x257384u: goto label_257384;
        case 0x257388u: goto label_257388;
        case 0x25738cu: goto label_25738c;
        case 0x257390u: goto label_257390;
        case 0x257394u: goto label_257394;
        case 0x257398u: goto label_257398;
        case 0x25739cu: goto label_25739c;
        case 0x2573a0u: goto label_2573a0;
        case 0x2573a4u: goto label_2573a4;
        case 0x2573a8u: goto label_2573a8;
        case 0x2573acu: goto label_2573ac;
        case 0x2573b0u: goto label_2573b0;
        case 0x2573b4u: goto label_2573b4;
        case 0x2573b8u: goto label_2573b8;
        case 0x2573bcu: goto label_2573bc;
        case 0x2573c0u: goto label_2573c0;
        case 0x2573c4u: goto label_2573c4;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ccu: goto label_2573cc;
        case 0x2573d0u: goto label_2573d0;
        case 0x2573d4u: goto label_2573d4;
        case 0x2573d8u: goto label_2573d8;
        case 0x2573dcu: goto label_2573dc;
        case 0x2573e0u: goto label_2573e0;
        case 0x2573e4u: goto label_2573e4;
        case 0x2573e8u: goto label_2573e8;
        case 0x2573ecu: goto label_2573ec;
        case 0x2573f0u: goto label_2573f0;
        case 0x2573f4u: goto label_2573f4;
        case 0x2573f8u: goto label_2573f8;
        case 0x2573fcu: goto label_2573fc;
        case 0x257400u: goto label_257400;
        case 0x257404u: goto label_257404;
        case 0x257408u: goto label_257408;
        case 0x25740cu: goto label_25740c;
        case 0x257410u: goto label_257410;
        case 0x257414u: goto label_257414;
        case 0x257418u: goto label_257418;
        case 0x25741cu: goto label_25741c;
        case 0x257420u: goto label_257420;
        case 0x257424u: goto label_257424;
        case 0x257428u: goto label_257428;
        case 0x25742cu: goto label_25742c;
        case 0x257430u: goto label_257430;
        case 0x257434u: goto label_257434;
        case 0x257438u: goto label_257438;
        case 0x25743cu: goto label_25743c;
        case 0x257440u: goto label_257440;
        case 0x257444u: goto label_257444;
        case 0x257448u: goto label_257448;
        case 0x25744cu: goto label_25744c;
        case 0x257450u: goto label_257450;
        case 0x257454u: goto label_257454;
        case 0x257458u: goto label_257458;
        case 0x25745cu: goto label_25745c;
        case 0x257460u: goto label_257460;
        case 0x257464u: goto label_257464;
        case 0x257468u: goto label_257468;
        case 0x25746cu: goto label_25746c;
        case 0x257470u: goto label_257470;
        case 0x257474u: goto label_257474;
        case 0x257478u: goto label_257478;
        case 0x25747cu: goto label_25747c;
        case 0x257480u: goto label_257480;
        case 0x257484u: goto label_257484;
        case 0x257488u: goto label_257488;
        case 0x25748cu: goto label_25748c;
        case 0x257490u: goto label_257490;
        case 0x257494u: goto label_257494;
        case 0x257498u: goto label_257498;
        case 0x25749cu: goto label_25749c;
        case 0x2574a0u: goto label_2574a0;
        case 0x2574a4u: goto label_2574a4;
        case 0x2574a8u: goto label_2574a8;
        case 0x2574acu: goto label_2574ac;
        case 0x2574b0u: goto label_2574b0;
        case 0x2574b4u: goto label_2574b4;
        case 0x2574b8u: goto label_2574b8;
        case 0x2574bcu: goto label_2574bc;
        case 0x2574c0u: goto label_2574c0;
        case 0x2574c4u: goto label_2574c4;
        case 0x2574c8u: goto label_2574c8;
        case 0x2574ccu: goto label_2574cc;
        case 0x2574d0u: goto label_2574d0;
        case 0x2574d4u: goto label_2574d4;
        case 0x2574d8u: goto label_2574d8;
        case 0x2574dcu: goto label_2574dc;
        case 0x2574e0u: goto label_2574e0;
        case 0x2574e4u: goto label_2574e4;
        case 0x2574e8u: goto label_2574e8;
        case 0x2574ecu: goto label_2574ec;
        case 0x2574f0u: goto label_2574f0;
        case 0x2574f4u: goto label_2574f4;
        case 0x2574f8u: goto label_2574f8;
        case 0x2574fcu: goto label_2574fc;
        case 0x257500u: goto label_257500;
        case 0x257504u: goto label_257504;
        case 0x257508u: goto label_257508;
        case 0x25750cu: goto label_25750c;
        case 0x257510u: goto label_257510;
        case 0x257514u: goto label_257514;
        case 0x257518u: goto label_257518;
        case 0x25751cu: goto label_25751c;
        case 0x257520u: goto label_257520;
        case 0x257524u: goto label_257524;
        case 0x257528u: goto label_257528;
        case 0x25752cu: goto label_25752c;
        case 0x257530u: goto label_257530;
        case 0x257534u: goto label_257534;
        case 0x257538u: goto label_257538;
        case 0x25753cu: goto label_25753c;
        case 0x257540u: goto label_257540;
        case 0x257544u: goto label_257544;
        case 0x257548u: goto label_257548;
        case 0x25754cu: goto label_25754c;
        case 0x257550u: goto label_257550;
        case 0x257554u: goto label_257554;
        case 0x257558u: goto label_257558;
        case 0x25755cu: goto label_25755c;
        case 0x257560u: goto label_257560;
        case 0x257564u: goto label_257564;
        case 0x257568u: goto label_257568;
        case 0x25756cu: goto label_25756c;
        case 0x257570u: goto label_257570;
        case 0x257574u: goto label_257574;
        case 0x257578u: goto label_257578;
        case 0x25757cu: goto label_25757c;
        case 0x257580u: goto label_257580;
        case 0x257584u: goto label_257584;
        case 0x257588u: goto label_257588;
        case 0x25758cu: goto label_25758c;
        case 0x257590u: goto label_257590;
        case 0x257594u: goto label_257594;
        case 0x257598u: goto label_257598;
        case 0x25759cu: goto label_25759c;
        case 0x2575a0u: goto label_2575a0;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575a8u: goto label_2575a8;
        case 0x2575acu: goto label_2575ac;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575b8u: goto label_2575b8;
        case 0x2575bcu: goto label_2575bc;
        case 0x2575c0u: goto label_2575c0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575ccu: goto label_2575cc;
        case 0x2575d0u: goto label_2575d0;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575d8u: goto label_2575d8;
        case 0x2575dcu: goto label_2575dc;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575e4u: goto label_2575e4;
        case 0x2575e8u: goto label_2575e8;
        case 0x2575ecu: goto label_2575ec;
        case 0x2575f0u: goto label_2575f0;
        case 0x2575f4u: goto label_2575f4;
        case 0x2575f8u: goto label_2575f8;
        case 0x2575fcu: goto label_2575fc;
        case 0x257600u: goto label_257600;
        case 0x257604u: goto label_257604;
        case 0x257608u: goto label_257608;
        case 0x25760cu: goto label_25760c;
        case 0x257610u: goto label_257610;
        case 0x257614u: goto label_257614;
        case 0x257618u: goto label_257618;
        case 0x25761cu: goto label_25761c;
        case 0x257620u: goto label_257620;
        case 0x257624u: goto label_257624;
        case 0x257628u: goto label_257628;
        case 0x25762cu: goto label_25762c;
        case 0x257630u: goto label_257630;
        case 0x257634u: goto label_257634;
        case 0x257638u: goto label_257638;
        case 0x25763cu: goto label_25763c;
        case 0x257640u: goto label_257640;
        case 0x257644u: goto label_257644;
        case 0x257648u: goto label_257648;
        case 0x25764cu: goto label_25764c;
        case 0x257650u: goto label_257650;
        case 0x257654u: goto label_257654;
        case 0x257658u: goto label_257658;
        case 0x25765cu: goto label_25765c;
        case 0x257660u: goto label_257660;
        case 0x257664u: goto label_257664;
        case 0x257668u: goto label_257668;
        case 0x25766cu: goto label_25766c;
        case 0x257670u: goto label_257670;
        case 0x257674u: goto label_257674;
        case 0x257678u: goto label_257678;
        case 0x25767cu: goto label_25767c;
        case 0x257680u: goto label_257680;
        case 0x257684u: goto label_257684;
        case 0x257688u: goto label_257688;
        case 0x25768cu: goto label_25768c;
        case 0x257690u: goto label_257690;
        case 0x257694u: goto label_257694;
        case 0x257698u: goto label_257698;
        case 0x25769cu: goto label_25769c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576a4u: goto label_2576a4;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576acu: goto label_2576ac;
        case 0x2576b0u: goto label_2576b0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576bcu: goto label_2576bc;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c4u: goto label_2576c4;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576ccu: goto label_2576cc;
        case 0x2576d0u: goto label_2576d0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576d8u: goto label_2576d8;
        case 0x2576dcu: goto label_2576dc;
        case 0x2576e0u: goto label_2576e0;
        case 0x2576e4u: goto label_2576e4;
        case 0x2576e8u: goto label_2576e8;
        case 0x2576ecu: goto label_2576ec;
        case 0x2576f0u: goto label_2576f0;
        case 0x2576f4u: goto label_2576f4;
        case 0x2576f8u: goto label_2576f8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257700u: goto label_257700;
        case 0x257704u: goto label_257704;
        case 0x257708u: goto label_257708;
        case 0x25770cu: goto label_25770c;
        case 0x257710u: goto label_257710;
        case 0x257714u: goto label_257714;
        case 0x257718u: goto label_257718;
        case 0x25771cu: goto label_25771c;
        case 0x257720u: goto label_257720;
        case 0x257724u: goto label_257724;
        case 0x257728u: goto label_257728;
        case 0x25772cu: goto label_25772c;
        case 0x257730u: goto label_257730;
        case 0x257734u: goto label_257734;
        case 0x257738u: goto label_257738;
        case 0x25773cu: goto label_25773c;
        case 0x257740u: goto label_257740;
        case 0x257744u: goto label_257744;
        case 0x257748u: goto label_257748;
        case 0x25774cu: goto label_25774c;
        case 0x257750u: goto label_257750;
        case 0x257754u: goto label_257754;
        case 0x257758u: goto label_257758;
        case 0x25775cu: goto label_25775c;
        case 0x257760u: goto label_257760;
        case 0x257764u: goto label_257764;
        case 0x257768u: goto label_257768;
        case 0x25776cu: goto label_25776c;
        case 0x257770u: goto label_257770;
        case 0x257774u: goto label_257774;
        case 0x257778u: goto label_257778;
        case 0x25777cu: goto label_25777c;
        case 0x257780u: goto label_257780;
        case 0x257784u: goto label_257784;
        case 0x257788u: goto label_257788;
        case 0x25778cu: goto label_25778c;
        case 0x257790u: goto label_257790;
        case 0x257794u: goto label_257794;
        default: break;
    }

    ctx->pc = 0x256f58u;

label_256f58:
    // 0x256f58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x256f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_256f5c:
    // 0x256f5c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x256f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_256f60:
    // 0x256f60: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x256f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_256f64:
    // 0x256f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256f68:
    // 0x256f68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x256f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_256f6c:
    // 0x256f6c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x256f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_256f70:
    // 0x256f70: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x256f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_256f74:
    // 0x256f74: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x256f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_256f78:
    // 0x256f78: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x256f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_256f7c:
    // 0x256f7c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x256f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_256f80:
    // 0x256f80: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x256f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_256f84:
    // 0x256f84: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x256f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_256f88:
    // 0x256f88: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x256f88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_256f8c:
    // 0x256f8c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x256f8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_256f90:
    // 0x256f90: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x256f90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_256f94:
    // 0x256f94: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x256f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_256f98:
    // 0x256f98: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_256f9c:
    // 0x256f9c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x256f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_256fa0:
    // 0x256fa0: 0x40f809  jalr        $v0
label_256fa4:
    if (ctx->pc == 0x256FA4u) {
        ctx->pc = 0x256FA8u;
        goto label_256fa8;
    }
    ctx->pc = 0x256FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FA0u, 0x256FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256FA8u;
label_256fa8:
    // 0x256fa8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_256fac:
    if (ctx->pc == 0x256FACu) {
        ctx->pc = 0x256FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FA8u;
        // 0x256fac: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FB0u;
        goto label_256fb0;
    }
    ctx->pc = 0x256FA8u;
    {
        const bool branch_taken_0x256fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FA8u;
        // 0x256fac: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fa8) {
            ctx->pc = 0x256FD8u;
            goto label_256fd8;
        }
    }
    ctx->pc = 0x256FB0u;
label_256fb0:
    // 0x256fb0: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_256fb4:
    // 0x256fb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_256fb8:
    // 0x256fb8: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_256fbc:
    if (ctx->pc == 0x256FBCu) {
        ctx->pc = 0x256FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FB8u;
        // 0x256fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FC0u;
        goto label_256fc0;
    }
    ctx->pc = 0x256FB8u;
    {
        const bool branch_taken_0x256fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x256FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FB8u;
        // 0x256fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fb8) {
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x256FC0u;
label_256fc0:
    // 0x256fc0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_256fc4:
    // 0x256fc4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x256fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_256fc8:
    // 0x256fc8: 0x40f809  jalr        $v0
label_256fcc:
    if (ctx->pc == 0x256FCCu) {
        ctx->pc = 0x256FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FC8u;
        // 0x256fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FD0u;
        goto label_256fd0;
    }
    ctx->pc = 0x256FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256FD0u);
        ctx->pc = 0x256FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FC8u;
        // 0x256fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FC8u, 0x256FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256FD0u;
label_256fd0:
    // 0x256fd0: 0xc07305c  jal         func_1CC170
label_256fd4:
    if (ctx->pc == 0x256FD4u) {
        ctx->pc = 0x256FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FD0u;
        // 0x256fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FD8u;
        goto label_256fd8;
    }
    ctx->pc = 0x256FD0u;
    SET_GPR_U32(ctx, 31, 0x256FD8u);
    ctx->pc = 0x256FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FD0u;
    // 0x256fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC170u, 0x256FD0u, 0x256FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FD8u;
label_256fd8:
    // 0x256fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256fdc:
    // 0x256fdc: 0xc094516  jal         func_251458
label_256fe0:
    if (ctx->pc == 0x256FE0u) {
        ctx->pc = 0x256FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FDCu;
        // 0x256fe0: 0x3c120049  lui         $s2, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FE4u;
        goto label_256fe4;
    }
    ctx->pc = 0x256FDCu;
    SET_GPR_U32(ctx, 31, 0x256FE4u);
    ctx->pc = 0x256FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FDCu;
    // 0x256fe0: 0x3c120049  lui         $s2, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251458u, 0x256FDCu, 0x256FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FE4u;
label_256fe4:
    // 0x256fe4: 0x8e221100  lw          $v0, 0x1100($s1)
    ctx->pc = 0x256fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_256fe8:
    // 0x256fe8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_256fec:
    if (ctx->pc == 0x256FECu) {
        ctx->pc = 0x256FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FE8u;
        // 0x256fec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FF0u;
        goto label_256ff0;
    }
    ctx->pc = 0x256FE8u;
    {
        const bool branch_taken_0x256fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FE8u;
        // 0x256fec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fe8) {
            ctx->pc = 0x257038u;
            goto label_257038;
        }
    }
    ctx->pc = 0x256FF0u;
label_256ff0:
    // 0x256ff0: 0xc0d7394  jal         func_35CE50
label_256ff4:
    if (ctx->pc == 0x256FF4u) {
        ctx->pc = 0x256FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FF0u;
        // 0x256ff4: 0x262500f8  addiu       $a1, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256FF8u;
        goto label_256ff8;
    }
    ctx->pc = 0x256FF0u;
    SET_GPR_U32(ctx, 31, 0x256FF8u);
    ctx->pc = 0x256FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FF0u;
    // 0x256ff4: 0x262500f8  addiu       $a1, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x256FF0u, 0x256FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FF8u;
label_256ff8:
    // 0x256ff8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_256ffc:
    // 0x256ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_257000:
    // 0x257000: 0xc0d73cc  jal         func_35CF30
label_257004:
    if (ctx->pc == 0x257004u) {
        ctx->pc = 0x257004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257000u;
        // 0x257004: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257008u;
        goto label_257008;
    }
    ctx->pc = 0x257000u;
    SET_GPR_U32(ctx, 31, 0x257008u);
    ctx->pc = 0x257004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257000u;
    // 0x257004: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x257000u, 0x257008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257008u;
label_257008:
    // 0x257008: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25700c:
    // 0x25700c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_257010:
    if (ctx->pc == 0x257010u) {
        ctx->pc = 0x257010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25700Cu;
        // 0x257010: 0x26509a08  addiu       $s0, $s2, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257014u;
        goto label_257014;
    }
    ctx->pc = 0x25700Cu;
    {
        const bool branch_taken_0x25700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25700Cu;
        // 0x257010: 0x26509a08  addiu       $s0, $s2, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25700c) {
            ctx->pc = 0x25702Cu;
            goto label_25702c;
        }
    }
    ctx->pc = 0x257014u;
label_257014:
    // 0x257014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x257014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257018:
    // 0x257018: 0xc04785a  jal         func_11E168
label_25701c:
    if (ctx->pc == 0x25701Cu) {
        ctx->pc = 0x25701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257018u;
        // 0x25701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257020u;
        goto label_257020;
    }
    ctx->pc = 0x257018u;
    SET_GPR_U32(ctx, 31, 0x257020u);
    ctx->pc = 0x25701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257018u;
    // 0x25701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x257018u, 0x257020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257020u;
label_257020:
    // 0x257020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257024:
    // 0x257024: 0xc04785a  jal         func_11E168
label_257028:
    if (ctx->pc == 0x257028u) {
        ctx->pc = 0x257028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257024u;
        // 0x257028: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25702Cu;
        goto label_25702c;
    }
    ctx->pc = 0x257024u;
    SET_GPR_U32(ctx, 31, 0x25702Cu);
    ctx->pc = 0x257028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257024u;
    // 0x257028: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x257024u, 0x25702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25702Cu;
label_25702c:
    // 0x25702c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_257030:
    // 0x257030: 0xc0d7412  jal         func_35D048
label_257034:
    if (ctx->pc == 0x257034u) {
        ctx->pc = 0x257034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257030u;
        // 0x257034: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257038u;
        goto label_257038;
    }
    ctx->pc = 0x257030u;
    SET_GPR_U32(ctx, 31, 0x257038u);
    ctx->pc = 0x257034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257030u;
    // 0x257034: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x257030u, 0x257038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257038u;
label_257038:
    // 0x257038: 0x8622070a  lh          $v0, 0x70A($s1)
    ctx->pc = 0x257038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1802)));
label_25703c:
    // 0x25703c: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x25703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257040:
    // 0x257040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257044:
    // 0x257044: 0x0  nop
    ctx->pc = 0x257044u;
    // NOP
label_257048:
    // 0x257048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25704c:
    // 0x25704c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25704cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257050:
    // 0x257050: 0x0  nop
    ctx->pc = 0x257050u;
    // NOP
label_257054:
    // 0x257054: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_257058:
    if (ctx->pc == 0x257058u) {
        ctx->pc = 0x257058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257054u;
        // 0x257058: 0xc62110e4  lwc1        $f1, 0x10E4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25705Cu;
        goto label_25705c;
    }
    ctx->pc = 0x257054u;
    {
        const bool branch_taken_0x257054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257054) {
            ctx->pc = 0x257058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257054u;
            // 0x257058: 0xc62110e4  lwc1        $f1, 0x10E4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25706Cu;
            goto label_25706c;
        }
    }
    ctx->pc = 0x25705Cu;
label_25705c:
    // 0x25705c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25705cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_257060:
    // 0x257060: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x257060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_257064:
    // 0x257064: 0xa622070a  sh          $v0, 0x70A($s1)
    ctx->pc = 0x257064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1802), (uint16_t)GPR_U32(ctx, 2));
label_257068:
    // 0x257068: 0xc62110e4  lwc1        $f1, 0x10E4($s1)
    ctx->pc = 0x257068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25706c:
    // 0x25706c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25706cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_257070:
    // 0x257070: 0x0  nop
    ctx->pc = 0x257070u;
    // NOP
label_257074:
    // 0x257074: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x257074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257078:
    // 0x257078: 0x0  nop
    ctx->pc = 0x257078u;
    // NOP
label_25707c:
    // 0x25707c: 0x45000092  bc1f        . + 4 + (0x92 << 2)
label_257080:
    if (ctx->pc == 0x257080u) {
        ctx->pc = 0x257080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25707Cu;
        // 0x257080: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257084u;
        goto label_257084;
    }
    ctx->pc = 0x25707Cu;
    {
        const bool branch_taken_0x25707c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25707Cu;
        // 0x257080: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25707c) {
            ctx->pc = 0x2572C8u;
            goto label_2572c8;
        }
    }
    ctx->pc = 0x257084u;
label_257084:
    // 0x257084: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x257084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257088:
    // 0x257088: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25708c:
    // 0x25708c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25708cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257090:
    // 0x257090: 0x0  nop
    ctx->pc = 0x257090u;
    // NOP
label_257094:
    // 0x257094: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
label_257098:
    if (ctx->pc == 0x257098u) {
        ctx->pc = 0x257098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257094u;
        // 0x257098: 0xe62010e4  swc1        $f0, 0x10E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25709Cu;
        goto label_25709c;
    }
    ctx->pc = 0x257094u;
    {
        const bool branch_taken_0x257094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257094u;
        // 0x257098: 0xe62010e4  swc1        $f0, 0x10E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257094) {
            ctx->pc = 0x2572C8u;
            goto label_2572c8;
        }
    }
    ctx->pc = 0x25709Cu;
label_25709c:
    // 0x25709c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25709cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2570a0:
    // 0x2570a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2570a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2570a4:
    // 0x2570a4: 0xc0d7424  jal         func_35D090
label_2570a8:
    if (ctx->pc == 0x2570A8u) {
        ctx->pc = 0x2570A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570A4u;
        // 0x2570a8: 0x24a55470  addiu       $a1, $a1, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2570ACu;
        goto label_2570ac;
    }
    ctx->pc = 0x2570A4u;
    SET_GPR_U32(ctx, 31, 0x2570ACu);
    ctx->pc = 0x2570A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570A4u;
    // 0x2570a8: 0x24a55470  addiu       $a1, $a1, 0x5470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2570A4u, 0x2570ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570ACu;
label_2570ac:
    // 0x2570ac: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2570acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2570b0:
    // 0x2570b0: 0x262710f0  addiu       $a3, $s1, 0x10F0
    ctx->pc = 0x2570b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4336));
label_2570b4:
    // 0x2570b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2570b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2570b8:
    // 0x2570b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2570b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2570bc:
    // 0x2570bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2570bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2570c0:
    // 0x2570c0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2570c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570c4:
    // 0x2570c4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2570c8:
    // 0x2570c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2570c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2570cc:
    // 0x2570cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2570ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570d0:
    // 0x2570d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2570d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2570d4:
    // 0x2570d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2570d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2570d8:
    // 0x2570d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2570d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570dc:
    // 0x2570dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2570dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2570e0:
    // 0x2570e0: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x2570e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2570e4:
    // 0x2570e4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2570e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2570e8:
    // 0x2570e8: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2570e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2570ec:
    // 0x2570ec: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2570ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2570f0:
    // 0x2570f0: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2570f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2570f4:
    // 0x2570f4: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x2570f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2570f8:
    // 0x2570f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2570f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2570fc:
    // 0x2570fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2570fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_257100:
    // 0x257100: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x257100u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_257104:
    // 0x257104: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x257104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_257108:
    // 0x257108: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x257108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_25710c:
    // 0x25710c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25710cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257110:
    // 0x257110: 0x0  nop
    ctx->pc = 0x257110u;
    // NOP
label_257114:
    // 0x257114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x257114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257118:
    // 0x257118: 0x0  nop
    ctx->pc = 0x257118u;
    // NOP
label_25711c:
    // 0x25711c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_257120:
    if (ctx->pc == 0x257120u) {
        ctx->pc = 0x257120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25711Cu;
        // 0x257120: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257124u;
        goto label_257124;
    }
    ctx->pc = 0x25711Cu;
    {
        const bool branch_taken_0x25711c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25711Cu;
        // 0x257120: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25711c) {
            ctx->pc = 0x257184u;
            goto label_257184;
        }
    }
    ctx->pc = 0x257124u;
label_257124:
    // 0x257124: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x257124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257128:
    // 0x257128: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x257128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25712c:
    // 0x25712c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_257130:
    // 0x257130: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x257130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_257134:
    // 0x257134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257138:
    // 0x257138: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x257138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_25713c:
    // 0x25713c: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x25713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257140:
    // 0x257140: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x257140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_257144:
    // 0x257144: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x257144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_257148:
    // 0x257148: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x257148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_25714c:
    // 0x25714c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257150:
    // 0x257150: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x257150u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_257154:
    // 0x257154: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x257154u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_257158:
    // 0x257158: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25715c:
    // 0x25715c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x25715cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_257160:
    // 0x257160: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x257160u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_257164:
    // 0x257164: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x257164u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_257168:
    // 0x257168: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x257168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_25716c:
    // 0x25716c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25716cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_257170:
    // 0x257170: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x257170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_257174:
    // 0x257174: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x257174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257178:
    // 0x257178: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x257178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_25717c:
    // 0x25717c: 0x10000018  b           . + 4 + (0x18 << 2)
label_257180:
    if (ctx->pc == 0x257180u) {
        ctx->pc = 0x257180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25717Cu;
        // 0x257180: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257184u;
        goto label_257184;
    }
    ctx->pc = 0x25717Cu;
    {
        const bool branch_taken_0x25717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25717Cu;
        // 0x257180: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25717c) {
            ctx->pc = 0x2571E0u;
            goto label_2571e0;
        }
    }
    ctx->pc = 0x257184u;
label_257184:
    // 0x257184: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x257184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_257188:
    // 0x257188: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x257188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25718c:
    // 0x25718c: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x25718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_257190:
    // 0x257190: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x257190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_257194:
    // 0x257194: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x257194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257198:
    // 0x257198: 0xc62110f0  lwc1        $f1, 0x10F0($s1)
    ctx->pc = 0x257198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25719c:
    // 0x25719c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2571a0:
    // 0x2571a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2571a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2571a4:
    // 0x2571a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2571a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2571a8:
    // 0x2571a8: 0x0  nop
    ctx->pc = 0x2571a8u;
    // NOP
label_2571ac:
    // 0x2571ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2571acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2571b0:
    // 0x2571b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2571b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2571b4:
    // 0x2571b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2571b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2571b8:
    // 0x2571b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2571b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2571bc:
    // 0x2571bc: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2571bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2571c0:
    // 0x2571c0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2571c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2571c4:
    // 0x2571c4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2571c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2571c8:
    // 0x2571c8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2571c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2571cc:
    // 0x2571cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2571ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2571d0:
    // 0x2571d0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2571d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2571d4:
    // 0x2571d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2571d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2571d8:
    // 0x2571d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2571d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2571dc:
    // 0x2571dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2571dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2571e0:
    // 0x2571e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2571e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2571e4:
    // 0x2571e4: 0xc0d9886  jal         func_366218
label_2571e8:
    if (ctx->pc == 0x2571E8u) {
        ctx->pc = 0x2571E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571E4u;
        // 0x2571e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2571ECu;
        goto label_2571ec;
    }
    ctx->pc = 0x2571E4u;
    SET_GPR_U32(ctx, 31, 0x2571ECu);
    ctx->pc = 0x2571E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2571E4u;
    // 0x2571e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366218u, 0x2571E4u, 0x2571ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2571ECu;
label_2571ec:
    // 0x2571ec: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2571ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2571f0:
    // 0x2571f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2571f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2571f4:
    // 0x2571f4: 0x24704f20  addiu       $s0, $v1, 0x4F20
    ctx->pc = 0x2571f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20256));
label_2571f8:
    // 0x2571f8: 0x24a55480  addiu       $a1, $a1, 0x5480
    ctx->pc = 0x2571f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
label_2571fc:
    // 0x2571fc: 0xc0b0b82  jal         func_2C2E08
label_257200:
    if (ctx->pc == 0x257200u) {
        ctx->pc = 0x257200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571FCu;
        // 0x257200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257204u;
        goto label_257204;
    }
    ctx->pc = 0x2571FCu;
    SET_GPR_U32(ctx, 31, 0x257204u);
    ctx->pc = 0x257200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2571FCu;
    // 0x257200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x2571FCu, 0x257204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257204u;
label_257204:
    // 0x257204: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_257208:
    if (ctx->pc == 0x257208u) {
        ctx->pc = 0x257208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257204u;
        // 0x257208: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25720Cu;
        goto label_25720c;
    }
    ctx->pc = 0x257204u;
    {
        const bool branch_taken_0x257204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257204u;
        // 0x257208: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257204) {
            ctx->pc = 0x257230u;
            goto label_257230;
        }
    }
    ctx->pc = 0x25720Cu;
label_25720c:
    // 0x25720c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257210:
    // 0x257210: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x257210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_257214:
    // 0x257214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257218:
    // 0x257218: 0xc0b0a7a  jal         func_2C29E8
label_25721c:
    if (ctx->pc == 0x25721Cu) {
        ctx->pc = 0x25721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257218u;
        // 0x25721c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257220u;
        goto label_257220;
    }
    ctx->pc = 0x257218u;
    SET_GPR_U32(ctx, 31, 0x257220u);
    ctx->pc = 0x25721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257218u;
    // 0x25721c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x257218u, 0x257220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257220u;
label_257220:
    // 0x257220: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_257224:
    if (ctx->pc == 0x257224u) {
        ctx->pc = 0x257224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257220u;
        // 0x257224: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257228u;
        goto label_257228;
    }
    ctx->pc = 0x257220u;
    {
        const bool branch_taken_0x257220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257220) {
            ctx->pc = 0x257224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257220u;
            // 0x257224: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x257234u;
            goto label_257234;
        }
    }
    ctx->pc = 0x257228u;
label_257228:
    // 0x257228: 0xc0b0ef2  jal         func_2C3BC8
label_25722c:
    if (ctx->pc == 0x25722Cu) {
        ctx->pc = 0x25722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257228u;
        // 0x25722c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257230u;
        goto label_257230;
    }
    ctx->pc = 0x257228u;
    SET_GPR_U32(ctx, 31, 0x257230u);
    ctx->pc = 0x25722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257228u;
    // 0x25722c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x257228u, 0x257230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257230u;
label_257230:
    // 0x257230: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x257230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257234:
    // 0x257234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257238:
    // 0x257238: 0x0  nop
    ctx->pc = 0x257238u;
    // NOP
label_25723c:
    // 0x25723c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25723cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257240:
    // 0x257240: 0x0  nop
    ctx->pc = 0x257240u;
    // NOP
label_257244:
    // 0x257244: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_257248:
    if (ctx->pc == 0x257248u) {
        ctx->pc = 0x257248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257244u;
        // 0x257248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25724Cu;
        goto label_25724c;
    }
    ctx->pc = 0x257244u;
    {
        const bool branch_taken_0x257244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257244u;
        // 0x257248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257244) {
            ctx->pc = 0x2572C0u;
            goto label_2572c0;
        }
    }
    ctx->pc = 0x25724Cu;
label_25724c:
    // 0x25724c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_257250:
    // 0x257250: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_257254:
    // 0x257254: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x257254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
label_257258:
    // 0x257258: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x257258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_25725c:
    // 0x25725c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_257260:
    if (ctx->pc == 0x257260u) {
        ctx->pc = 0x257260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25725Cu;
        // 0x257260: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257264u;
        goto label_257264;
    }
    ctx->pc = 0x25725Cu;
    {
        const bool branch_taken_0x25725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25725c) {
            ctx->pc = 0x257260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25725Cu;
            // 0x257260: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2572ACu;
            goto label_2572ac;
        }
    }
    ctx->pc = 0x257264u;
label_257264:
    // 0x257264: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x257264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_257268:
    // 0x257268: 0xc06a0cc  jal         func_1A8330
label_25726c:
    if (ctx->pc == 0x25726Cu) {
        ctx->pc = 0x25726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257268u;
        // 0x25726c: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257270u;
        goto label_257270;
    }
    ctx->pc = 0x257268u;
    SET_GPR_U32(ctx, 31, 0x257270u);
    ctx->pc = 0x25726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257268u;
    // 0x25726c: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x257268u, 0x257270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257270u;
label_257270:
    // 0x257270: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x257270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_257274:
    // 0x257274: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x257274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_257278:
    // 0x257278: 0xc06a0cc  jal         func_1A8330
label_25727c:
    if (ctx->pc == 0x25727Cu) {
        ctx->pc = 0x25727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257278u;
        // 0x25727c: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257280u;
        goto label_257280;
    }
    ctx->pc = 0x257278u;
    SET_GPR_U32(ctx, 31, 0x257280u);
    ctx->pc = 0x25727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257278u;
    // 0x25727c: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x257278u, 0x257280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257280u;
label_257280:
    // 0x257280: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_257284:
    // 0x257284: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x257284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_257288:
    // 0x257288: 0xc06a0cc  jal         func_1A8330
label_25728c:
    if (ctx->pc == 0x25728Cu) {
        ctx->pc = 0x25728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257288u;
        // 0x25728c: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257290u;
        goto label_257290;
    }
    ctx->pc = 0x257288u;
    SET_GPR_U32(ctx, 31, 0x257290u);
    ctx->pc = 0x25728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257288u;
    // 0x25728c: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x257288u, 0x257290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257290u;
label_257290:
    // 0x257290: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x257290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_257294:
    // 0x257294: 0xc069b36  jal         func_1A6CD8
label_257298:
    if (ctx->pc == 0x257298u) {
        ctx->pc = 0x257298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257294u;
        // 0x257298: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25729Cu;
        goto label_25729c;
    }
    ctx->pc = 0x257294u;
    SET_GPR_U32(ctx, 31, 0x25729Cu);
    ctx->pc = 0x257298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257294u;
    // 0x257298: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x257294u, 0x25729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25729Cu;
label_25729c:
    // 0x25729c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x25729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2572a0:
    // 0x2572a0: 0xc06a23e  jal         func_1A88F8
label_2572a4:
    if (ctx->pc == 0x2572A4u) {
        ctx->pc = 0x2572A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572A0u;
        // 0x2572a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572A8u;
        goto label_2572a8;
    }
    ctx->pc = 0x2572A0u;
    SET_GPR_U32(ctx, 31, 0x2572A8u);
    ctx->pc = 0x2572A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572A0u;
    // 0x2572a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2572A0u, 0x2572A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572A8u;
label_2572a8:
    // 0x2572a8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2572a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2572ac:
    // 0x2572ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2572acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2572b0:
    // 0x2572b0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2572b4:
    // 0x2572b4: 0x40f809  jalr        $v0
label_2572b8:
    if (ctx->pc == 0x2572B8u) {
        ctx->pc = 0x2572B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572B4u;
        // 0x2572b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572BCu;
        goto label_2572bc;
    }
    ctx->pc = 0x2572B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2572BCu);
        ctx->pc = 0x2572B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572B4u;
        // 0x2572b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2572B4u, 0x2572BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2572BCu;
label_2572bc:
    // 0x2572bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2572bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2572c0:
    // 0x2572c0: 0xc0d7412  jal         func_35D048
label_2572c4:
    if (ctx->pc == 0x2572C4u) {
        ctx->pc = 0x2572C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572C0u;
        // 0x2572c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572C8u;
        goto label_2572c8;
    }
    ctx->pc = 0x2572C0u;
    SET_GPR_U32(ctx, 31, 0x2572C8u);
    ctx->pc = 0x2572C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572C0u;
    // 0x2572c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2572C0u, 0x2572C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572C8u;
label_2572c8:
    // 0x2572c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2572c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2572cc:
    // 0x2572cc: 0xc095e26  jal         func_257898
label_2572d0:
    if (ctx->pc == 0x2572D0u) {
        ctx->pc = 0x2572D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572CCu;
        // 0x2572d0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572D4u;
        goto label_2572d4;
    }
    ctx->pc = 0x2572CCu;
    SET_GPR_U32(ctx, 31, 0x2572D4u);
    ctx->pc = 0x2572D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572CCu;
    // 0x2572d0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257898u, 0x2572CCu, 0x2572D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572D4u;
label_2572d4:
    // 0x2572d4: 0xc095de6  jal         func_257798
label_2572d8:
    if (ctx->pc == 0x2572D8u) {
        ctx->pc = 0x2572D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572D4u;
        // 0x2572d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572DCu;
        goto label_2572dc;
    }
    ctx->pc = 0x2572D4u;
    SET_GPR_U32(ctx, 31, 0x2572DCu);
    ctx->pc = 0x2572D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572D4u;
    // 0x2572d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257798u, 0x2572D4u, 0x2572DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572DCu;
label_2572dc:
    // 0x2572dc: 0x8e03bd50  lw          $v1, -0x42B0($s0)
    ctx->pc = 0x2572dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_2572e0:
    // 0x2572e0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2572e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2572e4:
    // 0x2572e4: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x2572e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2572e8:
    // 0x2572e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2572ec:
    // 0x2572ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2572ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2572f0:
    // 0x2572f0: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x2572f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_2572f4:
    // 0x2572f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2572f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2572f8:
    // 0x2572f8: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x2572f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2572fc:
    // 0x2572fc: 0x8c930030  lw          $s3, 0x30($a0)
    ctx->pc = 0x2572fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_257300:
    // 0x257300: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x257300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257304:
    // 0x257304: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x257304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_257308:
    // 0x257308: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x257308u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25730c:
    // 0x25730c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_257310:
    // 0x257310: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x257310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257314:
    // 0x257314: 0x26449a08  addiu       $a0, $s2, -0x65F8
    ctx->pc = 0x257314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
label_257318:
    // 0x257318: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x257318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25731c:
    // 0x25731c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257320:
    // 0x257320: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x257320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257324:
    // 0x257324: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x257324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257328:
    // 0x257328: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x257328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25732c:
    // 0x25732c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x25732cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_257330:
    // 0x257330: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x257330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_257334:
    // 0x257334: 0xc04785a  jal         func_11E168
label_257338:
    if (ctx->pc == 0x257338u) {
        ctx->pc = 0x257338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257334u;
        // 0x257338: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25733Cu;
        goto label_25733c;
    }
    ctx->pc = 0x257334u;
    SET_GPR_U32(ctx, 31, 0x25733Cu);
    ctx->pc = 0x257338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257334u;
    // 0x257338: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x257334u, 0x25733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25733Cu;
label_25733c:
    // 0x25733c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257340:
    // 0x257340: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_257344:
    if (ctx->pc == 0x257344u) {
        ctx->pc = 0x257344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257340u;
        // 0x257344: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257348u;
        goto label_257348;
    }
    ctx->pc = 0x257340u;
    {
        const bool branch_taken_0x257340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257340u;
        // 0x257344: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257340) {
            ctx->pc = 0x25736Cu;
            goto label_25736c;
        }
    }
    ctx->pc = 0x257348u;
label_257348:
    // 0x257348: 0xc043cd0  jal         func_10F340
label_25734c:
    if (ctx->pc == 0x25734Cu) {
        ctx->pc = 0x25734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257348u;
        // 0x25734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257350u;
        goto label_257350;
    }
    ctx->pc = 0x257348u;
    SET_GPR_U32(ctx, 31, 0x257350u);
    ctx->pc = 0x25734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257348u;
    // 0x25734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F340u, 0x257348u, 0x257350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257350u;
label_257350:
    // 0x257350: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_257354:
    if (ctx->pc == 0x257354u) {
        ctx->pc = 0x257354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257350u;
        // 0x257354: 0x8e240fe8  lw          $a0, 0xFE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257358u;
        goto label_257358;
    }
    ctx->pc = 0x257350u;
    {
        const bool branch_taken_0x257350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257350) {
            ctx->pc = 0x257354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257350u;
            // 0x257354: 0x8e240fe8  lw          $a0, 0xFE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257370u;
            goto label_257370;
        }
    }
    ctx->pc = 0x257358u;
label_257358:
    // 0x257358: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x257358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_25735c:
    // 0x25735c: 0x10000003  b           . + 4 + (0x3 << 2)
label_257360:
    if (ctx->pc == 0x257360u) {
        ctx->pc = 0x257360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25735Cu;
        // 0x257360: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257364u;
        goto label_257364;
    }
    ctx->pc = 0x25735Cu;
    {
        const bool branch_taken_0x25735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25735Cu;
        // 0x257360: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25735c) {
            ctx->pc = 0x25736Cu;
            goto label_25736c;
        }
    }
    ctx->pc = 0x257364u;
label_257364:
    // 0x257364: 0x100000ac  b           . + 4 + (0xAC << 2)
label_257368:
    if (ctx->pc == 0x257368u) {
        ctx->pc = 0x257368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257364u;
        // 0x257368: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25736Cu;
        goto label_25736c;
    }
    ctx->pc = 0x257364u;
    {
        const bool branch_taken_0x257364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257364u;
        // 0x257368: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257364) {
            ctx->pc = 0x257618u;
            goto label_257618;
        }
    }
    ctx->pc = 0x25736Cu;
label_25736c:
    // 0x25736c: 0x8e240fe8  lw          $a0, 0xFE8($s1)
    ctx->pc = 0x25736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_257370:
    // 0x257370: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
label_257374:
    // 0x257374: 0xc06fa96  jal         func_1BEA58
label_257378:
    if (ctx->pc == 0x257378u) {
        ctx->pc = 0x257378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257374u;
        // 0x257378: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25737Cu;
        goto label_25737c;
    }
    ctx->pc = 0x257374u;
    SET_GPR_U32(ctx, 31, 0x25737Cu);
    ctx->pc = 0x257378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257374u;
    // 0x257378: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA58u, 0x257374u, 0x25737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25737Cu;
label_25737c:
    // 0x25737c: 0x164000c5  bnez        $s2, . + 4 + (0xC5 << 2)
label_257380:
    if (ctx->pc == 0x257380u) {
        ctx->pc = 0x257380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25737Cu;
        // 0x257380: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257384u;
        goto label_257384;
    }
    ctx->pc = 0x25737Cu;
    {
        const bool branch_taken_0x25737c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x257380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25737Cu;
        // 0x257380: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25737c) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x257384u;
label_257384:
    // 0x257384: 0x520000c4  beql        $s0, $zero, . + 4 + (0xC4 << 2)
label_257388:
    if (ctx->pc == 0x257388u) {
        ctx->pc = 0x257388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257384u;
        // 0x257388: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25738Cu;
        goto label_25738c;
    }
    ctx->pc = 0x257384u;
    {
        const bool branch_taken_0x257384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x257384) {
            ctx->pc = 0x257388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257384u;
            // 0x257388: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x25738Cu;
label_25738c:
    // 0x25738c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x25738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_257390:
    // 0x257390: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x257390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_257394:
    // 0x257394: 0x544000c0  bnel        $v0, $zero, . + 4 + (0xC0 << 2)
label_257398:
    if (ctx->pc == 0x257398u) {
        ctx->pc = 0x257398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257394u;
        // 0x257398: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25739Cu;
        goto label_25739c;
    }
    ctx->pc = 0x257394u;
    {
        const bool branch_taken_0x257394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257394) {
            ctx->pc = 0x257398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257394u;
            // 0x257398: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x25739Cu;
label_25739c:
    // 0x25739c: 0x526000be  beql        $s3, $zero, . + 4 + (0xBE << 2)
label_2573a0:
    if (ctx->pc == 0x2573A0u) {
        ctx->pc = 0x2573A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25739Cu;
        // 0x2573a0: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573A4u;
        goto label_2573a4;
    }
    ctx->pc = 0x25739Cu;
    {
        const bool branch_taken_0x25739c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25739c) {
            ctx->pc = 0x2573A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25739Cu;
            // 0x2573a0: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x2573A4u;
label_2573a4:
    // 0x2573a4: 0x8e22041c  lw          $v0, 0x41C($s1)
    ctx->pc = 0x2573a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1052)));
label_2573a8:
    // 0x2573a8: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
label_2573ac:
    if (ctx->pc == 0x2573ACu) {
        ctx->pc = 0x2573ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573A8u;
        // 0x2573ac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573B0u;
        goto label_2573b0;
    }
    ctx->pc = 0x2573A8u;
    {
        const bool branch_taken_0x2573a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573A8u;
        // 0x2573ac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573a8) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x2573B0u;
label_2573b0:
    // 0x2573b0: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2573b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2573b4:
    // 0x2573b4: 0x106400b7  beq         $v1, $a0, . + 4 + (0xB7 << 2)
label_2573b8:
    if (ctx->pc == 0x2573B8u) {
        ctx->pc = 0x2573B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573B4u;
        // 0x2573b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573BCu;
        goto label_2573bc;
    }
    ctx->pc = 0x2573B4u;
    {
        const bool branch_taken_0x2573b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2573B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573B4u;
        // 0x2573b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573b4) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x2573BCu;
label_2573bc:
    // 0x2573bc: 0x506200b6  beql        $v1, $v0, . + 4 + (0xB6 << 2)
label_2573c0:
    if (ctx->pc == 0x2573C0u) {
        ctx->pc = 0x2573C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573BCu;
        // 0x2573c0: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573C4u;
        goto label_2573c4;
    }
    ctx->pc = 0x2573BCu;
    {
        const bool branch_taken_0x2573bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2573bc) {
            ctx->pc = 0x2573C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2573BCu;
            // 0x2573c0: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x2573C4u;
label_2573c4:
    // 0x2573c4: 0x8e220430  lw          $v0, 0x430($s1)
    ctx->pc = 0x2573c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1072)));
label_2573c8:
    // 0x2573c8: 0x544000b3  bnel        $v0, $zero, . + 4 + (0xB3 << 2)
label_2573cc:
    if (ctx->pc == 0x2573CCu) {
        ctx->pc = 0x2573CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573C8u;
        // 0x2573cc: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573D0u;
        goto label_2573d0;
    }
    ctx->pc = 0x2573C8u;
    {
        const bool branch_taken_0x2573c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573c8) {
            ctx->pc = 0x2573CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2573C8u;
            // 0x2573cc: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x2573D0u;
label_2573d0:
    // 0x2573d0: 0x8ec2bd50  lw          $v0, -0x42B0($s6)
    ctx->pc = 0x2573d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
label_2573d4:
    // 0x2573d4: 0x8c430418  lw          $v1, 0x418($v0)
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
label_2573d8:
    // 0x2573d8: 0x506400af  beql        $v1, $a0, . + 4 + (0xAF << 2)
label_2573dc:
    if (ctx->pc == 0x2573DCu) {
        ctx->pc = 0x2573DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573D8u;
        // 0x2573dc: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2573E0u;
        goto label_2573e0;
    }
    ctx->pc = 0x2573D8u;
    {
        const bool branch_taken_0x2573d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2573d8) {
            ctx->pc = 0x2573DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2573D8u;
            // 0x2573dc: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x2573E0u;
label_2573e0:
    // 0x2573e0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2573e4:
    // 0x2573e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2573e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2573e8:
    // 0x2573e8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2573e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2573ec:
    // 0x2573ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2573ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2573f0:
    // 0x2573f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2573f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2573f4:
    // 0x2573f4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2573f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2573f8:
    // 0x2573f8: 0x46010044  c1          0x10044
    ctx->pc = 0x2573f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2573fc:
    // 0x2573fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2573fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_257400:
    // 0x257400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257404:
    // 0x257404: 0x0  nop
    ctx->pc = 0x257404u;
    // NOP
label_257408:
    // 0x257408: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25740c:
    // 0x25740c: 0x0  nop
    ctx->pc = 0x25740cu;
    // NOP
label_257410:
    // 0x257410: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
label_257414:
    if (ctx->pc == 0x257414u) {
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257418u;
        goto label_257418;
    }
    ctx->pc = 0x257410u;
    {
        const bool branch_taken_0x257410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257410) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x257418u;
label_257418:
    // 0x257418: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25741c:
    // 0x25741c: 0xc0f6a9a  jal         func_3DAA68
label_257420:
    if (ctx->pc == 0x257420u) {
        ctx->pc = 0x257420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25741Cu;
        // 0x257420: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257424u;
        goto label_257424;
    }
    ctx->pc = 0x25741Cu;
    SET_GPR_U32(ctx, 31, 0x257424u);
    ctx->pc = 0x257420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25741Cu;
    // 0x257420: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x25741Cu, 0x257424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257424u;
label_257424:
    // 0x257424: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x257424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_257428:
    // 0x257428: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x257428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25742c:
    // 0x25742c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_257430:
    // 0x257430: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x257430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_257434:
    // 0x257434: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x257434u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_257438:
    // 0x257438: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x257438u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_25743c:
    // 0x25743c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x25743cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_257440:
    // 0x257440: 0x46010044  c1          0x10044
    ctx->pc = 0x257440u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_257444:
    // 0x257444: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x257444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_257448:
    // 0x257448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25744c:
    // 0x25744c: 0x0  nop
    ctx->pc = 0x25744cu;
    // NOP
label_257450:
    // 0x257450: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257454:
    // 0x257454: 0x0  nop
    ctx->pc = 0x257454u;
    // NOP
label_257458:
    // 0x257458: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
label_25745c:
    if (ctx->pc == 0x25745Cu) {
        ctx->pc = 0x25745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257458u;
        // 0x25745c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257460u;
        goto label_257460;
    }
    ctx->pc = 0x257458u;
    {
        const bool branch_taken_0x257458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257458u;
        // 0x25745c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257458) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x257460u;
label_257460:
    // 0x257460: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x257460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_257464:
    // 0x257464: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x257464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257468:
    // 0x257468: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25746c:
    // 0x25746c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x25746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257470:
    // 0x257470: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x257470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_257474:
    // 0x257474: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x257474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_257478:
    // 0x257478: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x257478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25747c:
    // 0x25747c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25747cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_257480:
    // 0x257480: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x257480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257484:
    // 0x257484: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x257484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_257488:
    // 0x257488: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x257488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25748c:
    // 0x25748c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_257490:
    // 0x257490: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x257490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_257494:
    // 0x257494: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x257494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257498:
    // 0x257498: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x257498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25749c:
    // 0x25749c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25749cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2574a0:
    // 0x2574a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2574a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2574a4:
    // 0x2574a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2574a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2574a8:
    // 0x2574a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2574a8u;
    // VWAITQ (Q already resolved in this runtime)
label_2574ac:
    // 0x2574ac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2574acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2574b0:
    // 0x2574b0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2574b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2574b4:
    // 0x2574b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2574b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2574b8:
    // 0x2574b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2574b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2574bc:
    // 0x2574bc: 0x92720022  lbu         $s2, 0x22($s3)
    ctx->pc = 0x2574bcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_2574c0:
    // 0x2574c0: 0x245e0070  addiu       $fp, $v0, 0x70
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2574c4:
    // 0x2574c4: 0x2d2182a  slt         $v1, $s6, $s2
    ctx->pc = 0x2574c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2574c8:
    // 0x2574c8: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_2574cc:
    if (ctx->pc == 0x2574CCu) {
        ctx->pc = 0x2574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C8u;
        // 0x2574cc: 0x24570060  addiu       $s7, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2574D0u;
        goto label_2574d0;
    }
    ctx->pc = 0x2574C8u;
    {
        const bool branch_taken_0x2574c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C8u;
        // 0x2574cc: 0x24570060  addiu       $s7, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574c8) {
            ctx->pc = 0x257618u;
            goto label_257618;
        }
    }
    ctx->pc = 0x2574D0u;
label_2574d0:
    // 0x2574d0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2574d4:
    // 0x2574d4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2574d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2574d8:
    // 0x2574d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2574d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2574dc:
    // 0x2574dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2574dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2574e0:
    // 0x2574e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2574e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2574e4:
    // 0x2574e4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2574e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2574e8:
    // 0x2574e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2574e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2574ec:
    // 0x2574ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2574ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2574f0:
    // 0x2574f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2574f4:
    // 0x2574f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2574f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2574f8:
    // 0x2574f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2574f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2574fc:
    // 0x2574fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2574fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_257500:
    // 0x257500: 0xc04147a  jal         func_1051E8
label_257504:
    if (ctx->pc == 0x257504u) {
        ctx->pc = 0x257504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257500u;
        // 0x257504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257508u;
        goto label_257508;
    }
    ctx->pc = 0x257500u;
    SET_GPR_U32(ctx, 31, 0x257508u);
    ctx->pc = 0x257504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257500u;
    // 0x257504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x257500u, 0x257508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257508u;
label_257508:
    // 0x257508: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x257508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25750c:
    // 0x25750c: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x25750cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_257510:
    // 0x257510: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x257510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
label_257514:
    // 0x257514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_257518:
    // 0x257518: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_25751c:
    if (ctx->pc == 0x25751Cu) {
        ctx->pc = 0x25751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257518u;
        // 0x25751c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257520u;
        goto label_257520;
    }
    ctx->pc = 0x257518u;
    {
        const bool branch_taken_0x257518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257518) {
            ctx->pc = 0x25751Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257518u;
            // 0x25751c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25760Cu;
            goto label_25760c;
        }
    }
    ctx->pc = 0x257520u;
label_257520:
    // 0x257520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257524:
    // 0x257524: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x257524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257528:
    // 0x257528: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x257528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_25752c:
    // 0x25752c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25752cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257530:
    // 0x257530: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x257530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_257534:
    // 0x257534: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x257534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257538:
    // 0x257538: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x257538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25753c:
    // 0x25753c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x25753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257540:
    // 0x257540: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x257540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257544:
    // 0x257544: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x257544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_257548:
    // 0x257548: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x257548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_25754c:
    // 0x25754c: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x25754cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_257550:
    // 0x257550: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x257550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_257554:
    // 0x257554: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x257554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257558:
    // 0x257558: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x257558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25755c:
    // 0x25755c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x25755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_257560:
    // 0x257560: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x257560u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_257564:
    // 0x257564: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x257564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_257568:
    // 0x257568: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x257568u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_25756c:
    // 0x25756c: 0x46000004  c1          0x4
    ctx->pc = 0x25756cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_257570:
    // 0x257570: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x257570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257574:
    // 0x257574: 0x0  nop
    ctx->pc = 0x257574u;
    // NOP
label_257578:
    // 0x257578: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_25757c:
    if (ctx->pc == 0x25757Cu) {
        ctx->pc = 0x25757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257578u;
        // 0x25757c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257580u;
        goto label_257580;
    }
    ctx->pc = 0x257578u;
    {
        const bool branch_taken_0x257578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257578) {
            ctx->pc = 0x25757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257578u;
            // 0x25757c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25760Cu;
            goto label_25760c;
        }
    }
    ctx->pc = 0x257580u;
label_257580:
    // 0x257580: 0x0  nop
    ctx->pc = 0x257580u;
    // NOP
label_257584:
    // 0x257584: 0x0  nop
    ctx->pc = 0x257584u;
    // NOP
label_257588:
    // 0x257588: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x257588u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_25758c:
    // 0x25758c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25758cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_257590:
    // 0x257590: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x257590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_257594:
    // 0x257594: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257594u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_257598:
    // 0x257598: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x257598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25759c:
    // 0x25759c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x25759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2575a0:
    // 0x2575a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2575a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2575a4:
    // 0x2575a4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2575a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575a8:
    // 0x2575a8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2575a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575ac:
    // 0x2575ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2575acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2575b0:
    // 0x2575b0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2575b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575b4:
    // 0x2575b4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2575b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575b8:
    // 0x2575b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2575b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2575bc:
    // 0x2575bc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2575bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575c0:
    // 0x2575c0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2575c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575c4:
    // 0x2575c4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2575c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2575c8:
    // 0x2575c8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2575c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575cc:
    // 0x2575cc: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x2575ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575d0:
    // 0x2575d0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2575d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2575d4:
    // 0x2575d4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2575d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575d8:
    // 0x2575d8: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2575d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575dc:
    // 0x2575dc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2575dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2575e0:
    // 0x2575e0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2575e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2575e4:
    // 0x2575e4: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x2575e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2575e8:
    // 0x2575e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2575e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2575ec:
    // 0x2575ec: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2575ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2575f0:
    // 0x2575f0: 0x0  nop
    ctx->pc = 0x2575f0u;
    // NOP
label_2575f4:
    // 0x2575f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2575f8:
    if (ctx->pc == 0x2575F8u) {
        ctx->pc = 0x2575F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575F4u;
        // 0x2575f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575FCu;
        goto label_2575fc;
    }
    ctx->pc = 0x2575F4u;
    {
        const bool branch_taken_0x2575f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2575F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575F4u;
        // 0x2575f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575f4) {
            ctx->pc = 0x25760Cu;
            goto label_25760c;
        }
    }
    ctx->pc = 0x2575FCu;
label_2575fc:
    // 0x2575fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2575fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257600:
    // 0x257600: 0x0  nop
    ctx->pc = 0x257600u;
    // NOP
label_257604:
    // 0x257604: 0x4503ff57  bc1tl       . + 4 + (-0xA9 << 2)
label_257608:
    if (ctx->pc == 0x257608u) {
        ctx->pc = 0x257608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257604u;
        // 0x257608: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25760Cu;
        goto label_25760c;
    }
    ctx->pc = 0x257604u;
    {
        const bool branch_taken_0x257604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257604) {
            ctx->pc = 0x257608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257604u;
            // 0x257608: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257364;
        }
    }
    ctx->pc = 0x25760Cu;
label_25760c:
    // 0x25760c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x25760cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_257610:
    // 0x257610: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_257614:
    if (ctx->pc == 0x257614u) {
        ctx->pc = 0x257614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257610u;
        // 0x257614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257618u;
        goto label_257618;
    }
    ctx->pc = 0x257610u;
    {
        const bool branch_taken_0x257610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257610u;
        // 0x257614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257610) {
            ctx->pc = 0x257500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257500;
        }
    }
    ctx->pc = 0x257618u;
label_257618:
    // 0x257618: 0x52c0001f  beql        $s6, $zero, . + 4 + (0x1F << 2)
label_25761c:
    if (ctx->pc == 0x25761Cu) {
        ctx->pc = 0x25761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257618u;
        // 0x25761c: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257620u;
        goto label_257620;
    }
    ctx->pc = 0x257618u;
    {
        const bool branch_taken_0x257618 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x257618) {
            ctx->pc = 0x25761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257618u;
            // 0x25761c: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x257620u;
label_257620:
    // 0x257620: 0x12b4000d  beq         $s5, $s4, . + 4 + (0xD << 2)
label_257624:
    if (ctx->pc == 0x257624u) {
        ctx->pc = 0x257624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257620u;
        // 0x257624: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257628u;
        goto label_257628;
    }
    ctx->pc = 0x257620u;
    {
        const bool branch_taken_0x257620 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        ctx->pc = 0x257624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257620u;
        // 0x257624: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257620) {
            ctx->pc = 0x257658u;
            goto label_257658;
        }
    }
    ctx->pc = 0x257628u;
label_257628:
    // 0x257628: 0x92930022  lbu         $s3, 0x22($s4)
    ctx->pc = 0x257628u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_25762c:
    // 0x25762c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25762cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257630:
    // 0x257630: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x257630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_257634:
    // 0x257634: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_257638:
    if (ctx->pc == 0x257638u) {
        ctx->pc = 0x257638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257634u;
        // 0x257638: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25763Cu;
        goto label_25763c;
    }
    ctx->pc = 0x257634u;
    {
        const bool branch_taken_0x257634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257634u;
        // 0x257638: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257634) {
            ctx->pc = 0x257654u;
            goto label_257654;
        }
    }
    ctx->pc = 0x25763Cu;
label_25763c:
    // 0x25763c: 0xc04147a  jal         func_1051E8
label_257640:
    if (ctx->pc == 0x257640u) {
        ctx->pc = 0x257640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25763Cu;
        // 0x257640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257644u;
        goto label_257644;
    }
    ctx->pc = 0x25763Cu;
    SET_GPR_U32(ctx, 31, 0x257644u);
    ctx->pc = 0x257640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25763Cu;
    // 0x257640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x25763Cu, 0x257644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257644u;
label_257644:
    // 0x257644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257648:
    // 0x257648: 0x1475fff9  bne         $v1, $s5, . + 4 + (-0x7 << 2)
label_25764c:
    if (ctx->pc == 0x25764Cu) {
        ctx->pc = 0x25764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257648u;
        // 0x25764c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257650u;
        goto label_257650;
    }
    ctx->pc = 0x257648u;
    {
        const bool branch_taken_0x257648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x25764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257648u;
        // 0x25764c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257648) {
            ctx->pc = 0x257630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257630;
        }
    }
    ctx->pc = 0x257650u;
label_257650:
    // 0x257650: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257654:
    // 0x257654: 0x12b00a  movz        $s6, $zero, $s2
    ctx->pc = 0x257654u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_257658:
    // 0x257658: 0x52c0000f  beql        $s6, $zero, . + 4 + (0xF << 2)
label_25765c:
    if (ctx->pc == 0x25765Cu) {
        ctx->pc = 0x25765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257658u;
        // 0x25765c: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257660u;
        goto label_257660;
    }
    ctx->pc = 0x257658u;
    {
        const bool branch_taken_0x257658 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x257658) {
            ctx->pc = 0x25765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257658u;
            // 0x25765c: 0x8e300ff0  lw          $s0, 0xFF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x257660u;
label_257660:
    // 0x257660: 0xc08fde2  jal         func_23F788
label_257664:
    if (ctx->pc == 0x257664u) {
        ctx->pc = 0x257664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257660u;
        // 0x257664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257668u;
        goto label_257668;
    }
    ctx->pc = 0x257660u;
    SET_GPR_U32(ctx, 31, 0x257668u);
    ctx->pc = 0x257664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257660u;
    // 0x257664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x257660u, 0x257668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257668u;
label_257668:
    // 0x257668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25766c:
    // 0x25766c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25766cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257670:
    // 0x257670: 0xc093e46  jal         func_24F918
label_257674:
    if (ctx->pc == 0x257674u) {
        ctx->pc = 0x257674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257670u;
        // 0x257674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257678u;
        goto label_257678;
    }
    ctx->pc = 0x257670u;
    SET_GPR_U32(ctx, 31, 0x257678u);
    ctx->pc = 0x257674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257670u;
    // 0x257674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F918u, 0x257670u, 0x257678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257678u;
label_257678:
    // 0x257678: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x257678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25767c:
    // 0x25767c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257680:
    // 0x257680: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_257684:
    if (ctx->pc == 0x257684u) {
        ctx->pc = 0x257684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257680u;
        // 0x257684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257688u;
        goto label_257688;
    }
    ctx->pc = 0x257680u;
    {
        const bool branch_taken_0x257680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257680u;
        // 0x257684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257680) {
            ctx->pc = 0x257694u;
            goto label_257694;
        }
    }
    ctx->pc = 0x257688u;
label_257688:
    // 0x257688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x257688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25768c:
    // 0x25768c: 0xc093f84  jal         func_24FE10
label_257690:
    if (ctx->pc == 0x257690u) {
        ctx->pc = 0x257690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25768Cu;
        // 0x257690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257694u;
        goto label_257694;
    }
    ctx->pc = 0x25768Cu;
    SET_GPR_U32(ctx, 31, 0x257694u);
    ctx->pc = 0x257690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25768Cu;
    // 0x257690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE10u, 0x25768Cu, 0x257694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257694u;
label_257694:
    // 0x257694: 0x8e300ff0  lw          $s0, 0xFF0($s1)
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_257698:
    // 0x257698: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x257698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25769c:
    // 0x25769c: 0xc06e0f0  jal         func_1B83C0
label_2576a0:
    if (ctx->pc == 0x2576A0u) {
        ctx->pc = 0x2576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25769Cu;
        // 0x2576a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576A4u;
        goto label_2576a4;
    }
    ctx->pc = 0x25769Cu;
    SET_GPR_U32(ctx, 31, 0x2576A4u);
    ctx->pc = 0x2576A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25769Cu;
    // 0x2576a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x25769Cu, 0x2576A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576A4u;
label_2576a4:
    // 0x2576a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2576a8:
    if (ctx->pc == 0x2576A8u) {
        ctx->pc = 0x2576ACu;
        goto label_2576ac;
    }
    ctx->pc = 0x2576A4u;
    {
        const bool branch_taken_0x2576a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2576a4) {
            ctx->pc = 0x2576B4u;
            goto label_2576b4;
        }
    }
    ctx->pc = 0x2576ACu;
label_2576ac:
    // 0x2576ac: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_2576b0:
    // 0x2576b0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2576b0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2576b4:
    // 0x2576b4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2576b8:
    if (ctx->pc == 0x2576B8u) {
        ctx->pc = 0x2576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576B4u;
        // 0x2576b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576BCu;
        goto label_2576bc;
    }
    ctx->pc = 0x2576B4u;
    {
        const bool branch_taken_0x2576b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576B4u;
        // 0x2576b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576b4) {
            ctx->pc = 0x2576C8u;
            goto label_2576c8;
        }
    }
    ctx->pc = 0x2576BCu;
label_2576bc:
    // 0x2576bc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2576bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2576c0:
    // 0x2576c0: 0xc08fed2  jal         func_23FB48
label_2576c4:
    if (ctx->pc == 0x2576C4u) {
        ctx->pc = 0x2576C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576C0u;
        // 0x2576c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576C8u;
        goto label_2576c8;
    }
    ctx->pc = 0x2576C0u;
    SET_GPR_U32(ctx, 31, 0x2576C8u);
    ctx->pc = 0x2576C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576C0u;
    // 0x2576c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2576C0u, 0x2576C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576C8u;
label_2576c8:
    // 0x2576c8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2576c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2576cc:
    // 0x2576cc: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2576ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2576d0:
    // 0x2576d0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2576d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2576d4:
    // 0x2576d4: 0x908500a8  lbu         $a1, 0xA8($a0)
    ctx->pc = 0x2576d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_2576d8:
    // 0x2576d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2576dc:
    // 0x2576dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2576dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2576e0:
    // 0x2576e0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2576e4:
    if (ctx->pc == 0x2576E4u) {
        ctx->pc = 0x2576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576E0u;
        // 0x2576e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576E8u;
        goto label_2576e8;
    }
    ctx->pc = 0x2576E0u;
    {
        const bool branch_taken_0x2576e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576E0u;
        // 0x2576e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576e0) {
            ctx->pc = 0x257700u;
            goto label_257700;
        }
    }
    ctx->pc = 0x2576E8u;
label_2576e8:
    // 0x2576e8: 0x2442f80b  addiu       $v0, $v0, -0x7F5
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965259));
label_2576ec:
    // 0x2576ec: 0x2c420017  sltiu       $v0, $v0, 0x17
    ctx->pc = 0x2576ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_2576f0:
    // 0x2576f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2576f4:
    if (ctx->pc == 0x2576F4u) {
        ctx->pc = 0x2576F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576F0u;
        // 0x2576f4: 0x8e220430  lw          $v0, 0x430($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576F8u;
        goto label_2576f8;
    }
    ctx->pc = 0x2576F0u;
    {
        const bool branch_taken_0x2576f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2576f0) {
            ctx->pc = 0x2576F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2576F0u;
            // 0x2576f4: 0x8e220430  lw          $v0, 0x430($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257704u;
            goto label_257704;
        }
    }
    ctx->pc = 0x2576F8u;
label_2576f8:
    // 0x2576f8: 0xc09414a  jal         func_250528
label_2576fc:
    if (ctx->pc == 0x2576FCu) {
        ctx->pc = 0x2576FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576F8u;
        // 0x2576fc: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257700u;
        goto label_257700;
    }
    ctx->pc = 0x2576F8u;
    SET_GPR_U32(ctx, 31, 0x257700u);
    ctx->pc = 0x2576FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576F8u;
    // 0x2576fc: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250528u, 0x2576F8u, 0x257700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257700u;
label_257700:
    // 0x257700: 0x8e220430  lw          $v0, 0x430($s1)
    ctx->pc = 0x257700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1072)));
label_257704:
    // 0x257704: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_257708:
    if (ctx->pc == 0x257708u) {
        ctx->pc = 0x257708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257704u;
        // 0x257708: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25770Cu;
        goto label_25770c;
    }
    ctx->pc = 0x257704u;
    {
        const bool branch_taken_0x257704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257704u;
        // 0x257708: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257704) {
            ctx->pc = 0x257758u;
            goto label_257758;
        }
    }
    ctx->pc = 0x25770Cu;
label_25770c:
    // 0x25770c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x25770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_257710:
    // 0x257710: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_257714:
    // 0x257714: 0x2442ffb4  addiu       $v0, $v0, -0x4C
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
label_257718:
    // 0x257718: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x257718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_25771c:
    // 0x25771c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_257720:
    if (ctx->pc == 0x257720u) {
        ctx->pc = 0x257720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25771Cu;
        // 0x257720: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257724u;
        goto label_257724;
    }
    ctx->pc = 0x25771Cu;
    {
        const bool branch_taken_0x25771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25771c) {
            ctx->pc = 0x257720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25771Cu;
            // 0x257720: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25775Cu;
            goto label_25775c;
        }
    }
    ctx->pc = 0x257724u;
label_257724:
    // 0x257724: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_257728:
    // 0x257728: 0xc04952c  jal         func_1254B0
label_25772c:
    if (ctx->pc == 0x25772Cu) {
        ctx->pc = 0x25772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257728u;
        // 0x25772c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257730u;
        goto label_257730;
    }
    ctx->pc = 0x257728u;
    SET_GPR_U32(ctx, 31, 0x257730u);
    ctx->pc = 0x25772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257728u;
    // 0x25772c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B0u, 0x257728u, 0x257730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257730u;
label_257730:
    // 0x257730: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_257734:
    if (ctx->pc == 0x257734u) {
        ctx->pc = 0x257734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257730u;
        // 0x257734: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257738u;
        goto label_257738;
    }
    ctx->pc = 0x257730u;
    {
        const bool branch_taken_0x257730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257730u;
        // 0x257734: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257730) {
            ctx->pc = 0x257758u;
            goto label_257758;
        }
    }
    ctx->pc = 0x257738u;
label_257738:
    // 0x257738: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x257738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25773c:
    // 0x25773c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25773cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257740:
    // 0x257740: 0x0  nop
    ctx->pc = 0x257740u;
    // NOP
label_257744:
    // 0x257744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257748:
    // 0x257748: 0x0  nop
    ctx->pc = 0x257748u;
    // NOP
label_25774c:
    // 0x25774c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_257750:
    if (ctx->pc == 0x257750u) {
        ctx->pc = 0x257750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25774Cu;
        // 0x257750: 0xae200430  sw          $zero, 0x430($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257754u;
        goto label_257754;
    }
    ctx->pc = 0x25774Cu;
    {
        const bool branch_taken_0x25774c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25774c) {
            ctx->pc = 0x257750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25774Cu;
            // 0x257750: 0xae200430  sw          $zero, 0x430($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257758u;
            goto label_257758;
        }
    }
    ctx->pc = 0x257754u;
label_257754:
    // 0x257754: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x257754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_257758:
    // 0x257758: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x257758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_25775c:
    // 0x25775c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25775cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_257760:
    // 0x257760: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x257760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_257764:
    // 0x257764: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x257764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_257768:
    // 0x257768: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x257768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_25776c:
    // 0x25776c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x25776cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_257770:
    // 0x257770: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x257770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_257774:
    // 0x257774: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x257774u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_257778:
    // 0x257778: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x257778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_25777c:
    // 0x25777c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x25777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_257780:
    // 0x257780: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x257780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_257784:
    // 0x257784: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x257784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_257788:
    // 0x257788: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x257788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25778c:
    // 0x25778c: 0x3e00008  jr          $ra
label_257790:
    if (ctx->pc == 0x257790u) {
        ctx->pc = 0x257790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25778Cu;
        // 0x257790: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257794u;
        goto label_257794;
    }
    ctx->pc = 0x25778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25778Cu;
        // 0x257790: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257794u;
label_257794:
    // 0x257794: 0x0  nop
    ctx->pc = 0x257794u;
    // NOP
    ctx->pc = 0x257798u;
}
