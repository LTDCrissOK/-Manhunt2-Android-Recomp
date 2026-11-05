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

// Function: sub_001A01B8
// Address: 0x1a01b8 - 0x1a0a70
void sub_001A01B8_0x1a01b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A01B8_0x1a01b8");
#endif

    switch (ctx->pc) {
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        case 0x1a0228u: goto label_1a0228;
        case 0x1a022cu: goto label_1a022c;
        case 0x1a0230u: goto label_1a0230;
        case 0x1a0234u: goto label_1a0234;
        case 0x1a0238u: goto label_1a0238;
        case 0x1a023cu: goto label_1a023c;
        case 0x1a0240u: goto label_1a0240;
        case 0x1a0244u: goto label_1a0244;
        case 0x1a0248u: goto label_1a0248;
        case 0x1a024cu: goto label_1a024c;
        case 0x1a0250u: goto label_1a0250;
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0258u: goto label_1a0258;
        case 0x1a025cu: goto label_1a025c;
        case 0x1a0260u: goto label_1a0260;
        case 0x1a0264u: goto label_1a0264;
        case 0x1a0268u: goto label_1a0268;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a0270u: goto label_1a0270;
        case 0x1a0274u: goto label_1a0274;
        case 0x1a0278u: goto label_1a0278;
        case 0x1a027cu: goto label_1a027c;
        case 0x1a0280u: goto label_1a0280;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a0288u: goto label_1a0288;
        case 0x1a028cu: goto label_1a028c;
        case 0x1a0290u: goto label_1a0290;
        case 0x1a0294u: goto label_1a0294;
        case 0x1a0298u: goto label_1a0298;
        case 0x1a029cu: goto label_1a029c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02a4u: goto label_1a02a4;
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a02acu: goto label_1a02ac;
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02b8u: goto label_1a02b8;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c0u: goto label_1a02c0;
        case 0x1a02c4u: goto label_1a02c4;
        case 0x1a02c8u: goto label_1a02c8;
        case 0x1a02ccu: goto label_1a02cc;
        case 0x1a02d0u: goto label_1a02d0;
        case 0x1a02d4u: goto label_1a02d4;
        case 0x1a02d8u: goto label_1a02d8;
        case 0x1a02dcu: goto label_1a02dc;
        case 0x1a02e0u: goto label_1a02e0;
        case 0x1a02e4u: goto label_1a02e4;
        case 0x1a02e8u: goto label_1a02e8;
        case 0x1a02ecu: goto label_1a02ec;
        case 0x1a02f0u: goto label_1a02f0;
        case 0x1a02f4u: goto label_1a02f4;
        case 0x1a02f8u: goto label_1a02f8;
        case 0x1a02fcu: goto label_1a02fc;
        case 0x1a0300u: goto label_1a0300;
        case 0x1a0304u: goto label_1a0304;
        case 0x1a0308u: goto label_1a0308;
        case 0x1a030cu: goto label_1a030c;
        case 0x1a0310u: goto label_1a0310;
        case 0x1a0314u: goto label_1a0314;
        case 0x1a0318u: goto label_1a0318;
        case 0x1a031cu: goto label_1a031c;
        case 0x1a0320u: goto label_1a0320;
        case 0x1a0324u: goto label_1a0324;
        case 0x1a0328u: goto label_1a0328;
        case 0x1a032cu: goto label_1a032c;
        case 0x1a0330u: goto label_1a0330;
        case 0x1a0334u: goto label_1a0334;
        case 0x1a0338u: goto label_1a0338;
        case 0x1a033cu: goto label_1a033c;
        case 0x1a0340u: goto label_1a0340;
        case 0x1a0344u: goto label_1a0344;
        case 0x1a0348u: goto label_1a0348;
        case 0x1a034cu: goto label_1a034c;
        case 0x1a0350u: goto label_1a0350;
        case 0x1a0354u: goto label_1a0354;
        case 0x1a0358u: goto label_1a0358;
        case 0x1a035cu: goto label_1a035c;
        case 0x1a0360u: goto label_1a0360;
        case 0x1a0364u: goto label_1a0364;
        case 0x1a0368u: goto label_1a0368;
        case 0x1a036cu: goto label_1a036c;
        case 0x1a0370u: goto label_1a0370;
        case 0x1a0374u: goto label_1a0374;
        case 0x1a0378u: goto label_1a0378;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a0380u: goto label_1a0380;
        case 0x1a0384u: goto label_1a0384;
        case 0x1a0388u: goto label_1a0388;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a0390u: goto label_1a0390;
        case 0x1a0394u: goto label_1a0394;
        case 0x1a0398u: goto label_1a0398;
        case 0x1a039cu: goto label_1a039c;
        case 0x1a03a0u: goto label_1a03a0;
        case 0x1a03a4u: goto label_1a03a4;
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03acu: goto label_1a03ac;
        case 0x1a03b0u: goto label_1a03b0;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03bcu: goto label_1a03bc;
        case 0x1a03c0u: goto label_1a03c0;
        case 0x1a03c4u: goto label_1a03c4;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03ccu: goto label_1a03cc;
        case 0x1a03d0u: goto label_1a03d0;
        case 0x1a03d4u: goto label_1a03d4;
        case 0x1a03d8u: goto label_1a03d8;
        case 0x1a03dcu: goto label_1a03dc;
        case 0x1a03e0u: goto label_1a03e0;
        case 0x1a03e4u: goto label_1a03e4;
        case 0x1a03e8u: goto label_1a03e8;
        case 0x1a03ecu: goto label_1a03ec;
        case 0x1a03f0u: goto label_1a03f0;
        case 0x1a03f4u: goto label_1a03f4;
        case 0x1a03f8u: goto label_1a03f8;
        case 0x1a03fcu: goto label_1a03fc;
        case 0x1a0400u: goto label_1a0400;
        case 0x1a0404u: goto label_1a0404;
        case 0x1a0408u: goto label_1a0408;
        case 0x1a040cu: goto label_1a040c;
        case 0x1a0410u: goto label_1a0410;
        case 0x1a0414u: goto label_1a0414;
        case 0x1a0418u: goto label_1a0418;
        case 0x1a041cu: goto label_1a041c;
        case 0x1a0420u: goto label_1a0420;
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0428u: goto label_1a0428;
        case 0x1a042cu: goto label_1a042c;
        case 0x1a0430u: goto label_1a0430;
        case 0x1a0434u: goto label_1a0434;
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a0698u: goto label_1a0698;
        case 0x1a069cu: goto label_1a069c;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06a8u: goto label_1a06a8;
        case 0x1a06acu: goto label_1a06ac;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c4u: goto label_1a06c4;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06d0u: goto label_1a06d0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e4u: goto label_1a06e4;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a06f0u: goto label_1a06f0;
        case 0x1a06f4u: goto label_1a06f4;
        case 0x1a06f8u: goto label_1a06f8;
        case 0x1a06fcu: goto label_1a06fc;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0704u: goto label_1a0704;
        case 0x1a0708u: goto label_1a0708;
        case 0x1a070cu: goto label_1a070c;
        case 0x1a0710u: goto label_1a0710;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0718u: goto label_1a0718;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0728u: goto label_1a0728;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a0740u: goto label_1a0740;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0750u: goto label_1a0750;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0760u: goto label_1a0760;
        case 0x1a0764u: goto label_1a0764;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a076cu: goto label_1a076c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0774u: goto label_1a0774;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0780u: goto label_1a0780;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0788u: goto label_1a0788;
        case 0x1a078cu: goto label_1a078c;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a0794u: goto label_1a0794;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a079cu: goto label_1a079c;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07a4u: goto label_1a07a4;
        case 0x1a07a8u: goto label_1a07a8;
        case 0x1a07acu: goto label_1a07ac;
        case 0x1a07b0u: goto label_1a07b0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07b8u: goto label_1a07b8;
        case 0x1a07bcu: goto label_1a07bc;
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07c8u: goto label_1a07c8;
        case 0x1a07ccu: goto label_1a07cc;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d4u: goto label_1a07d4;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07e0u: goto label_1a07e0;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a07e8u: goto label_1a07e8;
        case 0x1a07ecu: goto label_1a07ec;
        case 0x1a07f0u: goto label_1a07f0;
        case 0x1a07f4u: goto label_1a07f4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a07fcu: goto label_1a07fc;
        case 0x1a0800u: goto label_1a0800;
        case 0x1a0804u: goto label_1a0804;
        case 0x1a0808u: goto label_1a0808;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0818u: goto label_1a0818;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0824u: goto label_1a0824;
        case 0x1a0828u: goto label_1a0828;
        case 0x1a082cu: goto label_1a082c;
        case 0x1a0830u: goto label_1a0830;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0838u: goto label_1a0838;
        case 0x1a083cu: goto label_1a083c;
        case 0x1a0840u: goto label_1a0840;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a084cu: goto label_1a084c;
        case 0x1a0850u: goto label_1a0850;
        case 0x1a0854u: goto label_1a0854;
        case 0x1a0858u: goto label_1a0858;
        case 0x1a085cu: goto label_1a085c;
        case 0x1a0860u: goto label_1a0860;
        case 0x1a0864u: goto label_1a0864;
        case 0x1a0868u: goto label_1a0868;
        case 0x1a086cu: goto label_1a086c;
        case 0x1a0870u: goto label_1a0870;
        case 0x1a0874u: goto label_1a0874;
        case 0x1a0878u: goto label_1a0878;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a0880u: goto label_1a0880;
        case 0x1a0884u: goto label_1a0884;
        case 0x1a0888u: goto label_1a0888;
        case 0x1a088cu: goto label_1a088c;
        case 0x1a0890u: goto label_1a0890;
        case 0x1a0894u: goto label_1a0894;
        case 0x1a0898u: goto label_1a0898;
        case 0x1a089cu: goto label_1a089c;
        case 0x1a08a0u: goto label_1a08a0;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08a8u: goto label_1a08a8;
        case 0x1a08acu: goto label_1a08ac;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08b4u: goto label_1a08b4;
        case 0x1a08b8u: goto label_1a08b8;
        case 0x1a08bcu: goto label_1a08bc;
        case 0x1a08c0u: goto label_1a08c0;
        case 0x1a08c4u: goto label_1a08c4;
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d0u: goto label_1a08d0;
        case 0x1a08d4u: goto label_1a08d4;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08dcu: goto label_1a08dc;
        case 0x1a08e0u: goto label_1a08e0;
        case 0x1a08e4u: goto label_1a08e4;
        case 0x1a08e8u: goto label_1a08e8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f0u: goto label_1a08f0;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a08f8u: goto label_1a08f8;
        case 0x1a08fcu: goto label_1a08fc;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0904u: goto label_1a0904;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a090cu: goto label_1a090c;
        case 0x1a0910u: goto label_1a0910;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0918u: goto label_1a0918;
        case 0x1a091cu: goto label_1a091c;
        case 0x1a0920u: goto label_1a0920;
        case 0x1a0924u: goto label_1a0924;
        case 0x1a0928u: goto label_1a0928;
        case 0x1a092cu: goto label_1a092c;
        case 0x1a0930u: goto label_1a0930;
        case 0x1a0934u: goto label_1a0934;
        case 0x1a0938u: goto label_1a0938;
        case 0x1a093cu: goto label_1a093c;
        case 0x1a0940u: goto label_1a0940;
        case 0x1a0944u: goto label_1a0944;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a094cu: goto label_1a094c;
        case 0x1a0950u: goto label_1a0950;
        case 0x1a0954u: goto label_1a0954;
        case 0x1a0958u: goto label_1a0958;
        case 0x1a095cu: goto label_1a095c;
        case 0x1a0960u: goto label_1a0960;
        case 0x1a0964u: goto label_1a0964;
        case 0x1a0968u: goto label_1a0968;
        case 0x1a096cu: goto label_1a096c;
        case 0x1a0970u: goto label_1a0970;
        case 0x1a0974u: goto label_1a0974;
        case 0x1a0978u: goto label_1a0978;
        case 0x1a097cu: goto label_1a097c;
        case 0x1a0980u: goto label_1a0980;
        case 0x1a0984u: goto label_1a0984;
        case 0x1a0988u: goto label_1a0988;
        case 0x1a098cu: goto label_1a098c;
        case 0x1a0990u: goto label_1a0990;
        case 0x1a0994u: goto label_1a0994;
        case 0x1a0998u: goto label_1a0998;
        case 0x1a099cu: goto label_1a099c;
        case 0x1a09a0u: goto label_1a09a0;
        case 0x1a09a4u: goto label_1a09a4;
        case 0x1a09a8u: goto label_1a09a8;
        case 0x1a09acu: goto label_1a09ac;
        case 0x1a09b0u: goto label_1a09b0;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09b8u: goto label_1a09b8;
        case 0x1a09bcu: goto label_1a09bc;
        case 0x1a09c0u: goto label_1a09c0;
        case 0x1a09c4u: goto label_1a09c4;
        case 0x1a09c8u: goto label_1a09c8;
        case 0x1a09ccu: goto label_1a09cc;
        case 0x1a09d0u: goto label_1a09d0;
        case 0x1a09d4u: goto label_1a09d4;
        case 0x1a09d8u: goto label_1a09d8;
        case 0x1a09dcu: goto label_1a09dc;
        case 0x1a09e0u: goto label_1a09e0;
        case 0x1a09e4u: goto label_1a09e4;
        case 0x1a09e8u: goto label_1a09e8;
        case 0x1a09ecu: goto label_1a09ec;
        case 0x1a09f0u: goto label_1a09f0;
        case 0x1a09f4u: goto label_1a09f4;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a09fcu: goto label_1a09fc;
        case 0x1a0a00u: goto label_1a0a00;
        case 0x1a0a04u: goto label_1a0a04;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a0cu: goto label_1a0a0c;
        case 0x1a0a10u: goto label_1a0a10;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a18u: goto label_1a0a18;
        case 0x1a0a1cu: goto label_1a0a1c;
        case 0x1a0a20u: goto label_1a0a20;
        case 0x1a0a24u: goto label_1a0a24;
        case 0x1a0a28u: goto label_1a0a28;
        case 0x1a0a2cu: goto label_1a0a2c;
        case 0x1a0a30u: goto label_1a0a30;
        case 0x1a0a34u: goto label_1a0a34;
        case 0x1a0a38u: goto label_1a0a38;
        case 0x1a0a3cu: goto label_1a0a3c;
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0a44u: goto label_1a0a44;
        case 0x1a0a48u: goto label_1a0a48;
        case 0x1a0a4cu: goto label_1a0a4c;
        case 0x1a0a50u: goto label_1a0a50;
        case 0x1a0a54u: goto label_1a0a54;
        case 0x1a0a58u: goto label_1a0a58;
        case 0x1a0a5cu: goto label_1a0a5c;
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a64u: goto label_1a0a64;
        case 0x1a0a68u: goto label_1a0a68;
        case 0x1a0a6cu: goto label_1a0a6c;
        default: break;
    }

    ctx->pc = 0x1a01b8u;

label_1a01b8:
    // 0x1a01b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a01b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a01bc:
    // 0x1a01bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a01bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a01c0:
    // 0x1a01c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a01c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a01c4:
    // 0x1a01c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a01c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a01c8:
    // 0x1a01c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a01cc:
    // 0x1a01cc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a01ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a01d0:
    // 0x1a01d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a01d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a01d4:
    // 0x1a01d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a01d8:
    // 0x1a01d8: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1a01dc:
    // 0x1a01dc: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_1a01e0:
    // 0x1a01e0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1a01e4:
    if (ctx->pc == 0x1A01E4u) {
        ctx->pc = 0x1A01E8u;
        goto label_1a01e8;
    }
    ctx->pc = 0x1A01E0u;
    {
        const bool branch_taken_0x1a01e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a01e0) {
            ctx->pc = 0x1A0214u;
            goto label_1a0214;
        }
    }
    ctx->pc = 0x1A01E8u;
label_1a01e8:
    // 0x1a01e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a01ec:
    // 0x1a01ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a01f0:
    // 0x1a01f0: 0x40f809  jalr        $v0
label_1a01f4:
    if (ctx->pc == 0x1A01F4u) {
        ctx->pc = 0x1A01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01F0u;
        // 0x1a01f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01F8u;
        goto label_1a01f8;
    }
    ctx->pc = 0x1A01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A01F8u);
        ctx->pc = 0x1A01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01F0u;
        // 0x1a01f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01F0u, 0x1A01F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A01F8u;
label_1a01f8:
    // 0x1a01f8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1a01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a01fc:
    // 0x1a01fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a01fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0200:
    // 0x1a0200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0204:
    // 0x1a0204: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x1a0204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a0208:
    // 0x1a0208: 0x8c451004  lw          $a1, 0x1004($v0)
    ctx->pc = 0x1a0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_1a020c:
    // 0x1a020c: 0xe0f809  jalr        $a3
label_1a0210:
    if (ctx->pc == 0x1A0210u) {
        ctx->pc = 0x1A0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A020Cu;
        // 0x1a0210: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0214u;
        goto label_1a0214;
    }
    ctx->pc = 0x1A020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A0214u);
        ctx->pc = 0x1A0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A020Cu;
        // 0x1a0210: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A020Cu, 0x1A0214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0214u;
label_1a0214:
    // 0x1a0214: 0xc061a4c  jal         func_186930
label_1a0218:
    if (ctx->pc == 0x1A0218u) {
        ctx->pc = 0x1A0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0214u;
        // 0x1a0218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A021Cu;
        goto label_1a021c;
    }
    ctx->pc = 0x1A0214u;
    SET_GPR_U32(ctx, 31, 0x1A021Cu);
    ctx->pc = 0x1A0218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0214u;
    // 0x1a0218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x1A0214u, 0x1A021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A021Cu;
label_1a021c:
    // 0x1a021c: 0xc061a26  jal         func_186898
label_1a0220:
    if (ctx->pc == 0x1A0220u) {
        ctx->pc = 0x1A0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A021Cu;
        // 0x1a0220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0224u;
        goto label_1a0224;
    }
    ctx->pc = 0x1A021Cu;
    SET_GPR_U32(ctx, 31, 0x1A0224u);
    ctx->pc = 0x1A0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A021Cu;
    // 0x1a0220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A021Cu, 0x1A0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0224u;
label_1a0224:
    // 0x1a0224: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a0224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a0228:
    // 0x1a0228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a022c:
    // 0x1a022c: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x1a022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0230:
    // 0x1a0230: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a0230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a0234:
    // 0x1a0234: 0x0  nop
    ctx->pc = 0x1a0234u;
    // NOP
label_1a0238:
    // 0x1a0238: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1a023c:
    if (ctx->pc == 0x1A023Cu) {
        ctx->pc = 0x1A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0238u;
        // 0x1a023c: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0240u;
        goto label_1a0240;
    }
    ctx->pc = 0x1A0238u;
    {
        const bool branch_taken_0x1a0238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0238) {
            ctx->pc = 0x1A023Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0238u;
            // 0x1a023c: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0260u;
            goto label_1a0260;
        }
    }
    ctx->pc = 0x1A0240u;
label_1a0240:
    // 0x1a0240: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x1a0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0244:
    // 0x1a0244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a0248:
    // 0x1a0248: 0x0  nop
    ctx->pc = 0x1a0248u;
    // NOP
label_1a024c:
    // 0x1a024c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a0250:
    if (ctx->pc == 0x1A0250u) {
        ctx->pc = 0x1A0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A024Cu;
        // 0x1a0250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0254u;
        goto label_1a0254;
    }
    ctx->pc = 0x1A024Cu;
    {
        const bool branch_taken_0x1a024c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A024Cu;
        // 0x1a0250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a024c) {
            ctx->pc = 0x1A025Cu;
            goto label_1a025c;
        }
    }
    ctx->pc = 0x1A0254u;
label_1a0254:
    // 0x1a0254: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a0258:
    if (ctx->pc == 0x1A0258u) {
        ctx->pc = 0x1A0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0254u;
        // 0x1a0258: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A025Cu;
        goto label_1a025c;
    }
    ctx->pc = 0x1A0254u;
    {
        const bool branch_taken_0x1a0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0254u;
        // 0x1a0258: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0254) {
            ctx->pc = 0x1A0260u;
            goto label_1a0260;
        }
    }
    ctx->pc = 0x1A025Cu;
label_1a025c:
    // 0x1a025c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1a0260:
    // 0x1a0260: 0xc067f56  jal         func_19FD58
label_1a0264:
    if (ctx->pc == 0x1A0264u) {
        ctx->pc = 0x1A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0260u;
        // 0x1a0264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0268u;
        goto label_1a0268;
    }
    ctx->pc = 0x1A0260u;
    SET_GPR_U32(ctx, 31, 0x1A0268u);
    ctx->pc = 0x1A0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0260u;
    // 0x1a0264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD58u, 0x1A0260u, 0x1A0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0268u;
label_1a0268:
    // 0x1a0268: 0xc08f68a  jal         func_23DA28
label_1a026c:
    if (ctx->pc == 0x1A026Cu) {
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0270u;
        goto label_1a0270;
    }
    ctx->pc = 0x1A0268u;
    SET_GPR_U32(ctx, 31, 0x1A0270u);
    ctx->pc = 0x1A026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0268u;
    // 0x1a026c: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x1A0268u, 0x1A0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0270u;
label_1a0270:
    // 0x1a0270: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1a0274:
    if (ctx->pc == 0x1A0274u) {
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24100013  addiu       $s0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0278u;
        goto label_1a0278;
    }
    ctx->pc = 0x1A0270u;
    {
        const bool branch_taken_0x1a0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24100013  addiu       $s0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0270) {
            ctx->pc = 0x1A0338u;
            goto label_1a0338;
        }
    }
    ctx->pc = 0x1A0278u;
label_1a0278:
    // 0x1a0278: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a027c:
    // 0x1a027c: 0x1050002a  beq         $v0, $s0, . + 4 + (0x2A << 2)
label_1a0280:
    if (ctx->pc == 0x1A0280u) {
        ctx->pc = 0x1A0284u;
        goto label_1a0284;
    }
    ctx->pc = 0x1A027Cu;
    {
        const bool branch_taken_0x1a027c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a027c) {
            ctx->pc = 0x1A0328u;
            goto label_1a0328;
        }
    }
    ctx->pc = 0x1A0284u;
label_1a0284:
    // 0x1a0284: 0xc0691d6  jal         func_1A4758
label_1a0288:
    if (ctx->pc == 0x1A0288u) {
        ctx->pc = 0x1A0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0284u;
        // 0x1a0288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A028Cu;
        goto label_1a028c;
    }
    ctx->pc = 0x1A0284u;
    SET_GPR_U32(ctx, 31, 0x1A028Cu);
    ctx->pc = 0x1A0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0284u;
    // 0x1a0288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A0284u, 0x1A028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A028Cu;
label_1a028c:
    // 0x1a028c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a0290:
    // 0x1a0290: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a0294:
    if (ctx->pc == 0x1A0294u) {
        ctx->pc = 0x1A0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0290u;
        // 0x1a0294: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0298u;
        goto label_1a0298;
    }
    ctx->pc = 0x1A0290u;
    {
        const bool branch_taken_0x1a0290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0290u;
        // 0x1a0294: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0290) {
            ctx->pc = 0x1A02A8u;
            goto label_1a02a8;
        }
    }
    ctx->pc = 0x1A0298u;
label_1a0298:
    // 0x1a0298: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a029c:
    // 0x1a029c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a02a0:
    // 0x1a02a0: 0x40f809  jalr        $v0
label_1a02a4:
    if (ctx->pc == 0x1A02A4u) {
        ctx->pc = 0x1A02A8u;
        goto label_1a02a8;
    }
    ctx->pc = 0x1A02A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A02A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02A0u, 0x1A02A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A02A8u;
label_1a02a8:
    // 0x1a02a8: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1a02ac:
    // 0x1a02ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a02acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a02b0:
    // 0x1a02b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a02b4:
    // 0x1a02b4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a02b8:
    // 0x1a02b8: 0xc06faee  jal         func_1BEBB8
label_1a02bc:
    if (ctx->pc == 0x1A02BCu) {
        ctx->pc = 0x1A02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02B8u;
        // 0x1a02bc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02C0u;
        goto label_1a02c0;
    }
    ctx->pc = 0x1A02B8u;
    SET_GPR_U32(ctx, 31, 0x1A02C0u);
    ctx->pc = 0x1A02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02B8u;
    // 0x1a02bc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A02B8u, 0x1A02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02C0u;
label_1a02c0:
    // 0x1a02c0: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1a02c4:
    // 0x1a02c4: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_1a02c8:
    // 0x1a02c8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_1a02cc:
    // 0x1a02cc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1a02ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a02d0:
    // 0x1a02d0: 0x2610f030  addiu       $s0, $s0, -0xFD0
    ctx->pc = 0x1a02d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963248));
label_1a02d4:
    // 0x1a02d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a02d8:
    // 0x1a02d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a02d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a02dc:
    // 0x1a02dc: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1a02dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_1a02e0:
    // 0x1a02e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a02e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a02e4:
    // 0x1a02e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a02e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a02e8:
    // 0x1a02e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a02ec:
    // 0x1a02ec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a02ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a02f0:
    // 0x1a02f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a02f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a02f4:
    // 0x1a02f4: 0x40f809  jalr        $v0
label_1a02f8:
    if (ctx->pc == 0x1A02F8u) {
        ctx->pc = 0x1A02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02F4u;
        // 0x1a02f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02FCu;
        goto label_1a02fc;
    }
    ctx->pc = 0x1A02F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A02FCu);
        ctx->pc = 0x1A02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02F4u;
        // 0x1a02f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02F4u, 0x1A02FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A02FCu;
label_1a02fc:
    // 0x1a02fc: 0xc061a16  jal         func_186858
label_1a0300:
    if (ctx->pc == 0x1A0300u) {
        ctx->pc = 0x1A0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02FCu;
        // 0x1a0300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0304u;
        goto label_1a0304;
    }
    ctx->pc = 0x1A02FCu;
    SET_GPR_U32(ctx, 31, 0x1A0304u);
    ctx->pc = 0x1A0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02FCu;
    // 0x1a0300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A02FCu, 0x1A0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0304u;
label_1a0304:
    // 0x1a0304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0308:
    // 0x1a0308: 0xc06ee66  jal         func_1BB998
label_1a030c:
    if (ctx->pc == 0x1A030Cu) {
        ctx->pc = 0x1A030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0308u;
        // 0x1a030c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0310u;
        goto label_1a0310;
    }
    ctx->pc = 0x1A0308u;
    SET_GPR_U32(ctx, 31, 0x1A0310u);
    ctx->pc = 0x1A030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0308u;
    // 0x1a030c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A0308u, 0x1A0310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0310u;
label_1a0310:
    // 0x1a0310: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a0310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0314:
    // 0x1a0314: 0xc0f71b8  jal         func_3DC6E0
label_1a0318:
    if (ctx->pc == 0x1A0318u) {
        ctx->pc = 0x1A0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0314u;
        // 0x1a0318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A031Cu;
        goto label_1a031c;
    }
    ctx->pc = 0x1A0314u;
    SET_GPR_U32(ctx, 31, 0x1A031Cu);
    ctx->pc = 0x1A0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0314u;
    // 0x1a0318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1A0314u, 0x1A031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A031Cu;
label_1a031c:
    // 0x1a031c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1a031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1a0320:
    // 0x1a0320: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_1a0324:
    // 0x1a0324: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a0324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a0328:
    // 0x1a0328: 0xc068906  jal         func_1A2418
label_1a032c:
    if (ctx->pc == 0x1A032Cu) {
        ctx->pc = 0x1A032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0328u;
        // 0x1a032c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0330u;
        goto label_1a0330;
    }
    ctx->pc = 0x1A0328u;
    SET_GPR_U32(ctx, 31, 0x1A0330u);
    ctx->pc = 0x1A032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0328u;
    // 0x1a032c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2418u, 0x1A0328u, 0x1A0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0x100001c9  b           . + 4 + (0x1C9 << 2)
label_1a0334:
    if (ctx->pc == 0x1A0334u) {
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0330u;
        // 0x1a0334: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0338u;
        goto label_1a0338;
    }
    ctx->pc = 0x1A0330u;
    {
        const bool branch_taken_0x1a0330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0330u;
        // 0x1a0334: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0330) {
            ctx->pc = 0x1A0A58u;
            goto label_1a0a58;
        }
    }
    ctx->pc = 0x1A0338u;
label_1a0338:
    // 0x1a0338: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a0338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a033c:
    // 0x1a033c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1a033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1a0340:
    // 0x1a0340: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1a0344:
    if (ctx->pc == 0x1A0344u) {
        ctx->pc = 0x1A0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0340u;
        // 0x1a0344: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0348u;
        goto label_1a0348;
    }
    ctx->pc = 0x1A0340u;
    {
        const bool branch_taken_0x1a0340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0340u;
        // 0x1a0344: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0340) {
            ctx->pc = 0x1A039Cu;
            goto label_1a039c;
        }
    }
    ctx->pc = 0x1A0348u;
label_1a0348:
    // 0x1a0348: 0xc06829e  jal         func_1A0A78
label_1a034c:
    if (ctx->pc == 0x1A034Cu) {
        ctx->pc = 0x1A034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0348u;
        // 0x1a034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0350u;
        goto label_1a0350;
    }
    ctx->pc = 0x1A0348u;
    SET_GPR_U32(ctx, 31, 0x1A0350u);
    ctx->pc = 0x1A034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0348u;
    // 0x1a034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0A78u, 0x1A0348u, 0x1A0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0350u;
label_1a0350:
    // 0x1a0350: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1a0354:
    if (ctx->pc == 0x1A0354u) {
        ctx->pc = 0x1A0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0350u;
        // 0x1a0354: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0358u;
        goto label_1a0358;
    }
    ctx->pc = 0x1A0350u;
    {
        const bool branch_taken_0x1a0350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0350) {
            ctx->pc = 0x1A0354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0350u;
            // 0x1a0354: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0398u;
            goto label_1a0398;
        }
    }
    ctx->pc = 0x1A0358u;
label_1a0358:
    // 0x1a0358: 0xc069126  jal         func_1A4498
label_1a035c:
    if (ctx->pc == 0x1A035Cu) {
        ctx->pc = 0x1A035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0358u;
        // 0x1a035c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0360u;
        goto label_1a0360;
    }
    ctx->pc = 0x1A0358u;
    SET_GPR_U32(ctx, 31, 0x1A0360u);
    ctx->pc = 0x1A035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0358u;
    // 0x1a035c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4498u, 0x1A0358u, 0x1A0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0360u;
label_1a0360:
    // 0x1a0360: 0xc061a12  jal         func_186848
label_1a0364:
    if (ctx->pc == 0x1A0364u) {
        ctx->pc = 0x1A0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0360u;
        // 0x1a0364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0368u;
        goto label_1a0368;
    }
    ctx->pc = 0x1A0360u;
    SET_GPR_U32(ctx, 31, 0x1A0368u);
    ctx->pc = 0x1A0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0360u;
    // 0x1a0364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A0360u, 0x1A0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0368u;
label_1a0368:
    // 0x1a0368: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a036c:
    // 0x1a036c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0370:
    // 0x1a0370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0374:
    // 0x1a0374: 0xc07026c  jal         func_1C09B0
label_1a0378:
    if (ctx->pc == 0x1A0378u) {
        ctx->pc = 0x1A0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0374u;
        // 0x1a0378: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A037Cu;
        goto label_1a037c;
    }
    ctx->pc = 0x1A0374u;
    SET_GPR_U32(ctx, 31, 0x1A037Cu);
    ctx->pc = 0x1A0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0374u;
    // 0x1a0378: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09B0u, 0x1A0374u, 0x1A037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A037Cu;
label_1a037c:
    // 0x1a037c: 0xc061a16  jal         func_186858
label_1a0380:
    if (ctx->pc == 0x1A0380u) {
        ctx->pc = 0x1A0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A037Cu;
        // 0x1a0380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0384u;
        goto label_1a0384;
    }
    ctx->pc = 0x1A037Cu;
    SET_GPR_U32(ctx, 31, 0x1A0384u);
    ctx->pc = 0x1A0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A037Cu;
    // 0x1a0380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A037Cu, 0x1A0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0384u;
label_1a0384:
    // 0x1a0384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a0388:
    // 0x1a0388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a038c:
    // 0x1a038c: 0x0  nop
    ctx->pc = 0x1a038cu;
    // NOP
label_1a0390:
    // 0x1a0390: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a0390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a0394:
    // 0x1a0394: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a0394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a0398:
    // 0x1a0398: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a039c:
    // 0x1a039c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1a03a0:
    if (ctx->pc == 0x1A03A0u) {
        ctx->pc = 0x1A03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A039Cu;
        // 0x1a03a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03A4u;
        goto label_1a03a4;
    }
    ctx->pc = 0x1A039Cu;
    {
        const bool branch_taken_0x1a039c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A039Cu;
        // 0x1a03a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a039c) {
            ctx->pc = 0x1A0414u;
            goto label_1a0414;
        }
    }
    ctx->pc = 0x1A03A4u;
label_1a03a4:
    // 0x1a03a4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a03a8:
    // 0x1a03a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a03ac:
    if (ctx->pc == 0x1A03ACu) {
        ctx->pc = 0x1A03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A8u;
        // 0x1a03ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03B0u;
        goto label_1a03b0;
    }
    ctx->pc = 0x1A03A8u;
    {
        const bool branch_taken_0x1a03a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A8u;
        // 0x1a03ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03a8) {
            ctx->pc = 0x1A03C4u;
            goto label_1a03c4;
        }
    }
    ctx->pc = 0x1A03B0u;
label_1a03b0:
    // 0x1a03b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a03b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a03b4:
    // 0x1a03b4: 0x0  nop
    ctx->pc = 0x1a03b4u;
    // NOP
label_1a03b8:
    // 0x1a03b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a03b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a03bc:
    // 0x1a03bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a03c0:
    if (ctx->pc == 0x1A03C0u) {
        ctx->pc = 0x1A03C4u;
        goto label_1a03c4;
    }
    ctx->pc = 0x1A03BCu;
    {
        const bool branch_taken_0x1a03bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a03bc) {
            ctx->pc = 0x1A03DCu;
            goto label_1a03dc;
        }
    }
    ctx->pc = 0x1A03C4u;
label_1a03c4:
    // 0x1a03c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a03c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a03c8:
    // 0x1a03c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a03c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a03cc:
    // 0x1a03cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a03ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a03d0:
    // 0x1a03d0: 0x0  nop
    ctx->pc = 0x1a03d0u;
    // NOP
label_1a03d4:
    // 0x1a03d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a03d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a03d8:
    // 0x1a03d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a03d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a03dc:
    // 0x1a03dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a03e0:
    // 0x1a03e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a03e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a03e4:
    // 0x1a03e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a03e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a03e8:
    // 0x1a03e8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1a03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a03ec:
    // 0x1a03ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a03ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a03f0:
    // 0x1a03f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a03f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a03f4:
    // 0x1a03f4: 0x0  nop
    ctx->pc = 0x1a03f4u;
    // NOP
label_1a03f8:
    // 0x1a03f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1a03fc:
    if (ctx->pc == 0x1A03FCu) {
        ctx->pc = 0x1A0400u;
        goto label_1a0400;
    }
    ctx->pc = 0x1A03F8u;
    {
        const bool branch_taken_0x1a03f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a03f8) {
            ctx->pc = 0x1A0414u;
            goto label_1a0414;
        }
    }
    ctx->pc = 0x1A0400u;
label_1a0400:
    // 0x1a0400: 0xc061a12  jal         func_186848
label_1a0404:
    if (ctx->pc == 0x1A0404u) {
        ctx->pc = 0x1A0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0400u;
        // 0x1a0404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0408u;
        goto label_1a0408;
    }
    ctx->pc = 0x1A0400u;
    SET_GPR_U32(ctx, 31, 0x1A0408u);
    ctx->pc = 0x1A0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0400u;
    // 0x1a0404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A0400u, 0x1A0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0408u;
label_1a0408:
    // 0x1a0408: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_1a040c:
    // 0x1a040c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1a0410:
    if (ctx->pc == 0x1A0410u) {
        ctx->pc = 0x1A0414u;
        goto label_1a0414;
    }
    ctx->pc = 0x1A040Cu;
    {
        const bool branch_taken_0x1a040c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a040c) {
            ctx->pc = 0x1A0430u;
            goto label_1a0430;
        }
    }
    ctx->pc = 0x1A0414u;
label_1a0414:
    // 0x1a0414: 0xc061a26  jal         func_186898
label_1a0418:
    if (ctx->pc == 0x1A0418u) {
        ctx->pc = 0x1A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0414u;
        // 0x1a0418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A041Cu;
        goto label_1a041c;
    }
    ctx->pc = 0x1A0414u;
    SET_GPR_U32(ctx, 31, 0x1A041Cu);
    ctx->pc = 0x1A0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0414u;
    // 0x1a0418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0414u, 0x1A041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A041Cu;
label_1a041c:
    // 0x1a041c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0420:
    // 0x1a0420: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a0420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1a0424:
    // 0x1a0424: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a0428:
    // 0x1a0428: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1a042c:
    if (ctx->pc == 0x1A042Cu) {
        ctx->pc = 0x1A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0428u;
        // 0x1a042c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0430u;
        goto label_1a0430;
    }
    ctx->pc = 0x1A0428u;
    {
        const bool branch_taken_0x1a0428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0428) {
            ctx->pc = 0x1A042Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0428u;
            // 0x1a042c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A043Cu;
            goto label_1a043c;
        }
    }
    ctx->pc = 0x1A0430u;
label_1a0430:
    // 0x1a0430: 0xc06938c  jal         func_1A4E30
label_1a0434:
    if (ctx->pc == 0x1A0434u) {
        ctx->pc = 0x1A0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0430u;
        // 0x1a0434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0438u;
        goto label_1a0438;
    }
    ctx->pc = 0x1A0430u;
    SET_GPR_U32(ctx, 31, 0x1A0438u);
    ctx->pc = 0x1A0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0430u;
    // 0x1a0434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E30u, 0x1A0430u, 0x1A0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0438u;
label_1a0438:
    // 0x1a0438: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a043c:
    // 0x1a043c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0440:
    // 0x1a0440: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a0440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_1a0444:
    // 0x1a0444: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1a0444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_1a0448:
    // 0x1a0448: 0xc0f6da6  jal         func_3DB698
label_1a044c:
    if (ctx->pc == 0x1A044Cu) {
        ctx->pc = 0x1A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0448u;
        // 0x1a044c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0450u;
        goto label_1a0450;
    }
    ctx->pc = 0x1A0448u;
    SET_GPR_U32(ctx, 31, 0x1A0450u);
    ctx->pc = 0x1A044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0448u;
    // 0x1a044c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A0448u, 0x1A0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0450u;
label_1a0450:
    // 0x1a0450: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_1a0454:
    if (ctx->pc == 0x1A0454u) {
        ctx->pc = 0x1A0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0450u;
        // 0x1a0454: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0458u;
        goto label_1a0458;
    }
    ctx->pc = 0x1A0450u;
    {
        const bool branch_taken_0x1a0450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0450u;
        // 0x1a0454: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0450) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0458u;
label_1a0458:
    // 0x1a0458: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a045c:
    // 0x1a045c: 0x106200c6  beq         $v1, $v0, . + 4 + (0xC6 << 2)
label_1a0460:
    if (ctx->pc == 0x1A0460u) {
        ctx->pc = 0x1A0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A045Cu;
        // 0x1a0460: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0464u;
        goto label_1a0464;
    }
    ctx->pc = 0x1A045Cu;
    {
        const bool branch_taken_0x1a045c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A045Cu;
        // 0x1a0460: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a045c) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0464u;
label_1a0464:
    // 0x1a0464: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a0464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0468:
    // 0x1a0468: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a046c:
    // 0x1a046c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a0470:
    if (ctx->pc == 0x1A0470u) {
        ctx->pc = 0x1A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A046Cu;
        // 0x1a0470: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0474u;
        goto label_1a0474;
    }
    ctx->pc = 0x1A046Cu;
    {
        const bool branch_taken_0x1a046c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A046Cu;
        // 0x1a0470: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a046c) {
            ctx->pc = 0x1A0488u;
            goto label_1a0488;
        }
    }
    ctx->pc = 0x1A0474u;
label_1a0474:
    // 0x1a0474: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0478:
    // 0x1a0478: 0x0  nop
    ctx->pc = 0x1a0478u;
    // NOP
label_1a047c:
    // 0x1a047c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a047cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a0480:
    // 0x1a0480: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0484:
    if (ctx->pc == 0x1A0484u) {
        ctx->pc = 0x1A0488u;
        goto label_1a0488;
    }
    ctx->pc = 0x1A0480u;
    {
        const bool branch_taken_0x1a0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0480) {
            ctx->pc = 0x1A04A0u;
            goto label_1a04a0;
        }
    }
    ctx->pc = 0x1A0488u;
label_1a0488:
    // 0x1a0488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a048c:
    // 0x1a048c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0490:
    // 0x1a0490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0494:
    // 0x1a0494: 0x0  nop
    ctx->pc = 0x1a0494u;
    // NOP
label_1a0498:
    // 0x1a0498: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a049c:
    // 0x1a049c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a049cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a04a0:
    // 0x1a04a0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a04a4:
    // 0x1a04a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a04a8:
    // 0x1a04a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a04a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a04ac:
    // 0x1a04ac: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x1a04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a04b0:
    // 0x1a04b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a04b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a04b4:
    // 0x1a04b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a04b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a04b8:
    // 0x1a04b8: 0x0  nop
    ctx->pc = 0x1a04b8u;
    // NOP
label_1a04bc:
    // 0x1a04bc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1a04c0:
    if (ctx->pc == 0x1A04C0u) {
        ctx->pc = 0x1A04C4u;
        goto label_1a04c4;
    }
    ctx->pc = 0x1A04BCu;
    {
        const bool branch_taken_0x1a04bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a04bc) {
            ctx->pc = 0x1A051Cu;
            goto label_1a051c;
        }
    }
    ctx->pc = 0x1A04C4u;
label_1a04c4:
    // 0x1a04c4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a04c8:
    // 0x1a04c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a04cc:
    if (ctx->pc == 0x1A04CCu) {
        ctx->pc = 0x1A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04C8u;
        // 0x1a04cc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04D0u;
        goto label_1a04d0;
    }
    ctx->pc = 0x1A04C8u;
    {
        const bool branch_taken_0x1a04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04C8u;
        // 0x1a04cc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04c8) {
            ctx->pc = 0x1A04E4u;
            goto label_1a04e4;
        }
    }
    ctx->pc = 0x1A04D0u;
label_1a04d0:
    // 0x1a04d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a04d4:
    // 0x1a04d4: 0x146200a8  bne         $v1, $v0, . + 4 + (0xA8 << 2)
label_1a04d8:
    if (ctx->pc == 0x1A04D8u) {
        ctx->pc = 0x1A04DCu;
        goto label_1a04dc;
    }
    ctx->pc = 0x1A04D4u;
    {
        const bool branch_taken_0x1a04d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a04d4) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A04DCu;
label_1a04dc:
    // 0x1a04dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a04e0:
    if (ctx->pc == 0x1A04E0u) {
        ctx->pc = 0x1A04E4u;
        goto label_1a04e4;
    }
    ctx->pc = 0x1A04DCu;
    {
        const bool branch_taken_0x1a04dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04dc) {
            ctx->pc = 0x1A050Cu;
            goto label_1a050c;
        }
    }
    ctx->pc = 0x1A04E4u;
label_1a04e4:
    // 0x1a04e4: 0xc061a1e  jal         func_186878
label_1a04e8:
    if (ctx->pc == 0x1A04E8u) {
        ctx->pc = 0x1A04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04E4u;
        // 0x1a04e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04ECu;
        goto label_1a04ec;
    }
    ctx->pc = 0x1A04E4u;
    SET_GPR_U32(ctx, 31, 0x1A04ECu);
    ctx->pc = 0x1A04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04E4u;
    // 0x1a04e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A04E4u, 0x1A04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04ECu;
label_1a04ec:
    // 0x1a04ec: 0xc06db42  jal         func_1B6D08
label_1a04f0:
    if (ctx->pc == 0x1A04F0u) {
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ECu;
        // 0x1a04f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04F4u;
        goto label_1a04f4;
    }
    ctx->pc = 0x1A04ECu;
    SET_GPR_U32(ctx, 31, 0x1A04F4u);
    ctx->pc = 0x1A04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04ECu;
    // 0x1a04f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1A04ECu, 0x1A04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04F4u;
label_1a04f4:
    // 0x1a04f4: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_1a04f8:
    if (ctx->pc == 0x1A04F8u) {
        ctx->pc = 0x1A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04F4u;
        // 0x1a04f8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04FCu;
        goto label_1a04fc;
    }
    ctx->pc = 0x1A04F4u;
    {
        const bool branch_taken_0x1a04f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04F4u;
        // 0x1a04f8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04f4) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A04FCu;
label_1a04fc:
    // 0x1a04fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a0500:
    // 0x1a0500: 0x1462009d  bne         $v1, $v0, . + 4 + (0x9D << 2)
label_1a0504:
    if (ctx->pc == 0x1A0504u) {
        ctx->pc = 0x1A0508u;
        goto label_1a0508;
    }
    ctx->pc = 0x1A0500u;
    {
        const bool branch_taken_0x1a0500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0500) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0508u;
label_1a0508:
    // 0x1a0508: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1a0508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_1a050c:
    // 0x1a050c: 0xc068f12  jal         func_1A3C48
label_1a0510:
    if (ctx->pc == 0x1A0510u) {
        ctx->pc = 0x1A0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A050Cu;
        // 0x1a0510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0514u;
        goto label_1a0514;
    }
    ctx->pc = 0x1A050Cu;
    SET_GPR_U32(ctx, 31, 0x1A0514u);
    ctx->pc = 0x1A0510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A050Cu;
    // 0x1a0510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1A050Cu, 0x1A0514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0514u;
label_1a0514:
    // 0x1a0514: 0x10000098  b           . + 4 + (0x98 << 2)
label_1a0518:
    if (ctx->pc == 0x1A0518u) {
        ctx->pc = 0x1A051Cu;
        goto label_1a051c;
    }
    ctx->pc = 0x1A0514u;
    {
        const bool branch_taken_0x1a0514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0514) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A051Cu;
label_1a051c:
    // 0x1a051c: 0xc061a1e  jal         func_186878
label_1a0520:
    if (ctx->pc == 0x1A0520u) {
        ctx->pc = 0x1A0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A051Cu;
        // 0x1a0520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0524u;
        goto label_1a0524;
    }
    ctx->pc = 0x1A051Cu;
    SET_GPR_U32(ctx, 31, 0x1A0524u);
    ctx->pc = 0x1A0520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A051Cu;
    // 0x1a0520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A051Cu, 0x1A0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0524u;
label_1a0524:
    // 0x1a0524: 0xc06db42  jal         func_1B6D08
label_1a0528:
    if (ctx->pc == 0x1A0528u) {
        ctx->pc = 0x1A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0524u;
        // 0x1a0528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A052Cu;
        goto label_1a052c;
    }
    ctx->pc = 0x1A0524u;
    SET_GPR_U32(ctx, 31, 0x1A052Cu);
    ctx->pc = 0x1A0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0524u;
    // 0x1a0528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1A0524u, 0x1A052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A052Cu;
label_1a052c:
    // 0x1a052c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1a0530:
    if (ctx->pc == 0x1A0530u) {
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0534u;
        goto label_1a0534;
    }
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A0600u;
            goto label_1a0600;
        }
    }
    ctx->pc = 0x1A0534u;
label_1a0534:
    // 0x1a0534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0538:
    // 0x1a0538: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_1a053c:
    // 0x1a053c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a0540:
    // 0x1a0540: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_1a0544:
    // 0x1a0544: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a0544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a0548:
    // 0x1a0548: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a054c:
    if (ctx->pc == 0x1A054Cu) {
        ctx->pc = 0x1A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0548u;
        // 0x1a054c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0550u;
        goto label_1a0550;
    }
    ctx->pc = 0x1A0548u;
    {
        const bool branch_taken_0x1a0548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0548u;
        // 0x1a054c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0548) {
            ctx->pc = 0x1A0584u;
            goto label_1a0584;
        }
    }
    ctx->pc = 0x1A0550u;
label_1a0550:
    // 0x1a0550: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a0554:
    // 0x1a0554: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_1a0558:
    if (ctx->pc == 0x1A0558u) {
        ctx->pc = 0x1A0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0554u;
        // 0x1a0558: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A055Cu;
        goto label_1a055c;
    }
    ctx->pc = 0x1A0554u;
    {
        const bool branch_taken_0x1a0554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0554) {
            ctx->pc = 0x1A0558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0554u;
            // 0x1a0558: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A055Cu;
label_1a055c:
    // 0x1a055c: 0xc0924a8  jal         func_2492A0
label_1a0560:
    if (ctx->pc == 0x1A0560u) {
        ctx->pc = 0x1A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A055Cu;
        // 0x1a0560: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0564u;
        goto label_1a0564;
    }
    ctx->pc = 0x1A055Cu;
    SET_GPR_U32(ctx, 31, 0x1A0564u);
    ctx->pc = 0x1A0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A055Cu;
    // 0x1a0560: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A055Cu, 0x1A0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0564u;
label_1a0564:
    // 0x1a0564: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1a0568:
    if (ctx->pc == 0x1A0568u) {
        ctx->pc = 0x1A0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0564u;
        // 0x1a0568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A056Cu;
        goto label_1a056c;
    }
    ctx->pc = 0x1A0564u;
    {
        const bool branch_taken_0x1a0564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0564) {
            ctx->pc = 0x1A0568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0564u;
            // 0x1a0568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A056Cu;
label_1a056c:
    // 0x1a056c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a0570:
    // 0x1a0570: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1a0574:
    // 0x1a0574: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a0578:
    if (ctx->pc == 0x1A0578u) {
        ctx->pc = 0x1A0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0574u;
        // 0x1a0578: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A057Cu;
        goto label_1a057c;
    }
    ctx->pc = 0x1A0574u;
    {
        const bool branch_taken_0x1a0574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0574u;
        // 0x1a0578: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0574) {
            ctx->pc = 0x1A0584u;
            goto label_1a0584;
        }
    }
    ctx->pc = 0x1A057Cu;
label_1a057c:
    // 0x1a057c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1a0580:
    if (ctx->pc == 0x1A0580u) {
        ctx->pc = 0x1A0584u;
        goto label_1a0584;
    }
    ctx->pc = 0x1A057Cu;
    {
        const bool branch_taken_0x1a057c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a057c) {
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A0584u;
label_1a0584:
    // 0x1a0584: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0588:
    // 0x1a0588: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_1a058c:
    if (ctx->pc == 0x1A058Cu) {
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0590u;
        goto label_1a0590;
    }
    ctx->pc = 0x1A0588u;
    {
        const bool branch_taken_0x1a0588 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0588) {
            ctx->pc = 0x1A0600u;
            goto label_1a0600;
        }
    }
    ctx->pc = 0x1A0590u;
label_1a0590:
    // 0x1a0590: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a0594:
    // 0x1a0594: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1a0594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1a0598:
    // 0x1a0598: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x1a0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
label_1a059c:
    // 0x1a059c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a05a0:
    if (ctx->pc == 0x1A05A0u) {
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A4u;
        goto label_1a05a4;
    }
    ctx->pc = 0x1A059Cu;
    {
        const bool branch_taken_0x1a059c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a059c) {
            ctx->pc = 0x1A05B8u;
            goto label_1a05b8;
        }
    }
    ctx->pc = 0x1A05A4u;
label_1a05a4:
    // 0x1a05a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a05a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a05a8:
    // 0x1a05a8: 0x0  nop
    ctx->pc = 0x1a05a8u;
    // NOP
label_1a05ac:
    // 0x1a05ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a05acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a05b0:
    // 0x1a05b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a05b4:
    if (ctx->pc == 0x1A05B4u) {
        ctx->pc = 0x1A05B8u;
        goto label_1a05b8;
    }
    ctx->pc = 0x1A05B0u;
    {
        const bool branch_taken_0x1a05b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05b0) {
            ctx->pc = 0x1A05D0u;
            goto label_1a05d0;
        }
    }
    ctx->pc = 0x1A05B8u;
label_1a05b8:
    // 0x1a05b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a05b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a05bc:
    // 0x1a05bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a05bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a05c0:
    // 0x1a05c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a05c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a05c4:
    // 0x1a05c4: 0x0  nop
    ctx->pc = 0x1a05c4u;
    // NOP
label_1a05c8:
    // 0x1a05c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a05c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a05cc:
    // 0x1a05cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a05ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a05d0:
    // 0x1a05d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a05d4:
    // 0x1a05d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a05d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a05d8:
    // 0x1a05d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a05d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a05dc:
    // 0x1a05dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a05dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a05e0:
    // 0x1a05e0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1a05e4:
    // 0x1a05e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a05e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a05e8:
    // 0x1a05e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a05e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a05ec:
    // 0x1a05ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a05ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a05f0:
    // 0x1a05f0: 0xc0690c8  jal         func_1A4320
label_1a05f4:
    if (ctx->pc == 0x1A05F4u) {
        ctx->pc = 0x1A05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05F0u;
        // 0x1a05f4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05F8u;
        goto label_1a05f8;
    }
    ctx->pc = 0x1A05F0u;
    SET_GPR_U32(ctx, 31, 0x1A05F8u);
    ctx->pc = 0x1A05F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05F0u;
    // 0x1a05f4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4320u, 0x1A05F0u, 0x1A05F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05F8u;
label_1a05f8:
    // 0x1a05f8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1a05fc:
    if (ctx->pc == 0x1A05FCu) {
        ctx->pc = 0x1A0600u;
        goto label_1a0600;
    }
    ctx->pc = 0x1A05F8u;
    {
        const bool branch_taken_0x1a05f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05f8) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0600u;
label_1a0600:
    // 0x1a0600: 0x8c62f020  lw          $v0, -0xFE0($v1)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963232)));
label_1a0604:
    // 0x1a0604: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a0604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a0608:
    // 0x1a0608: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_1a060c:
    if (ctx->pc == 0x1A060Cu) {
        ctx->pc = 0x1A0610u;
        goto label_1a0610;
    }
    ctx->pc = 0x1A0608u;
    {
        const bool branch_taken_0x1a0608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0608) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0610u;
label_1a0610:
    // 0x1a0610: 0xc061a1e  jal         func_186878
label_1a0614:
    if (ctx->pc == 0x1A0614u) {
        ctx->pc = 0x1A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0610u;
        // 0x1a0614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0618u;
        goto label_1a0618;
    }
    ctx->pc = 0x1A0610u;
    SET_GPR_U32(ctx, 31, 0x1A0618u);
    ctx->pc = 0x1A0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0610u;
    // 0x1a0614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A0610u, 0x1A0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0618u;
label_1a0618:
    // 0x1a0618: 0xc06db1c  jal         func_1B6C70
label_1a061c:
    if (ctx->pc == 0x1A061Cu) {
        ctx->pc = 0x1A061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0618u;
        // 0x1a061c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0620u;
        goto label_1a0620;
    }
    ctx->pc = 0x1A0618u;
    SET_GPR_U32(ctx, 31, 0x1A0620u);
    ctx->pc = 0x1A061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0618u;
    // 0x1a061c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C70u, 0x1A0618u, 0x1A0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0620u;
label_1a0620:
    // 0x1a0620: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_1a0624:
    if (ctx->pc == 0x1A0624u) {
        ctx->pc = 0x1A0628u;
        goto label_1a0628;
    }
    ctx->pc = 0x1A0620u;
    {
        const bool branch_taken_0x1a0620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0620) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0628u;
label_1a0628:
    // 0x1a0628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a0628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a062c:
    // 0x1a062c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a0630:
    // 0x1a0630: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a0630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a0634:
    // 0x1a0634: 0xc0b12b0  jal         func_2C4AC0
label_1a0638:
    if (ctx->pc == 0x1A0638u) {
        ctx->pc = 0x1A063Cu;
        goto label_1a063c;
    }
    ctx->pc = 0x1A0634u;
    SET_GPR_U32(ctx, 31, 0x1A063Cu);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A0634u, 0x1A063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A063Cu;
label_1a063c:
    // 0x1a063c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_1a0640:
    // 0x1a0640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a0644:
    // 0x1a0644: 0x0  nop
    ctx->pc = 0x1a0644u;
    // NOP
label_1a0648:
    // 0x1a0648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a064c:
    // 0x1a064c: 0x0  nop
    ctx->pc = 0x1a064cu;
    // NOP
label_1a0650:
    // 0x1a0650: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_1a0654:
    if (ctx->pc == 0x1A0654u) {
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0658u;
        goto label_1a0658;
    }
    ctx->pc = 0x1A0650u;
    {
        const bool branch_taken_0x1a0650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0650) {
            ctx->pc = 0x1A0654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0650u;
            // 0x1a0654: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A06B8u;
            goto label_1a06b8;
        }
    }
    ctx->pc = 0x1A0658u;
label_1a0658:
    // 0x1a0658: 0xc068f12  jal         func_1A3C48
label_1a065c:
    if (ctx->pc == 0x1A065Cu) {
        ctx->pc = 0x1A065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0658u;
        // 0x1a065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0660u;
        goto label_1a0660;
    }
    ctx->pc = 0x1A0658u;
    SET_GPR_U32(ctx, 31, 0x1A0660u);
    ctx->pc = 0x1A065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0658u;
    // 0x1a065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1A0658u, 0x1A0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0660u;
label_1a0660:
    // 0x1a0660: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1a0660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_1a0664:
    // 0x1a0664: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x1a0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
label_1a0668:
    // 0x1a0668: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a066c:
    if (ctx->pc == 0x1A066Cu) {
        ctx->pc = 0x1A066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0668u;
        // 0x1a066c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0670u;
        goto label_1a0670;
    }
    ctx->pc = 0x1A0668u;
    {
        const bool branch_taken_0x1a0668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0668u;
        // 0x1a066c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0668) {
            ctx->pc = 0x1A0684u;
            goto label_1a0684;
        }
    }
    ctx->pc = 0x1A0670u;
label_1a0670:
    // 0x1a0670: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0674:
    // 0x1a0674: 0x0  nop
    ctx->pc = 0x1a0674u;
    // NOP
label_1a0678:
    // 0x1a0678: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a067c:
    // 0x1a067c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0680:
    if (ctx->pc == 0x1A0680u) {
        ctx->pc = 0x1A0684u;
        goto label_1a0684;
    }
    ctx->pc = 0x1A067Cu;
    {
        const bool branch_taken_0x1a067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a067c) {
            ctx->pc = 0x1A069Cu;
            goto label_1a069c;
        }
    }
    ctx->pc = 0x1A0684u;
label_1a0684:
    // 0x1a0684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a0688:
    // 0x1a0688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a068c:
    // 0x1a068c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0690:
    // 0x1a0690: 0x0  nop
    ctx->pc = 0x1a0690u;
    // NOP
label_1a0694:
    // 0x1a0694: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a0698:
    // 0x1a0698: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a0698u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a069c:
    // 0x1a069c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a06a0:
    // 0x1a06a0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a06a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a06a4:
    // 0x1a06a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a06a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a06a8:
    // 0x1a06a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a06ac:
    // 0x1a06ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a06acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a06b0:
    // 0x1a06b0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1a06b4:
    if (ctx->pc == 0x1A06B4u) {
        ctx->pc = 0x1A06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B0u;
        // 0x1a06b4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06B8u;
        goto label_1a06b8;
    }
    ctx->pc = 0x1A06B0u;
    {
        const bool branch_taken_0x1a06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B0u;
        // 0x1a06b4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b0) {
            ctx->pc = 0x1A0770u;
            goto label_1a0770;
        }
    }
    ctx->pc = 0x1A06B8u;
label_1a06b8:
    // 0x1a06b8: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x1a06b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_1a06bc:
    // 0x1a06bc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a06c0:
    // 0x1a06c0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_1a06c4:
    // 0x1a06c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a06c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a06c8:
    // 0x1a06c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a06cc:
    if (ctx->pc == 0x1A06CCu) {
        ctx->pc = 0x1A06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06C8u;
        // 0x1a06cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06D0u;
        goto label_1a06d0;
    }
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06C8u;
        // 0x1a06cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A0704u;
            goto label_1a0704;
        }
    }
    ctx->pc = 0x1A06D0u;
label_1a06d0:
    // 0x1a06d0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a06d4:
    // 0x1a06d4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_1a06d8:
    if (ctx->pc == 0x1A06D8u) {
        ctx->pc = 0x1A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D4u;
        // 0x1a06d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06DCu;
        goto label_1a06dc;
    }
    ctx->pc = 0x1A06D4u;
    {
        const bool branch_taken_0x1a06d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a06d4) {
            ctx->pc = 0x1A06D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06D4u;
            // 0x1a06d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0708u;
            goto label_1a0708;
        }
    }
    ctx->pc = 0x1A06DCu;
label_1a06dc:
    // 0x1a06dc: 0xc0924a8  jal         func_2492A0
label_1a06e0:
    if (ctx->pc == 0x1A06E0u) {
        ctx->pc = 0x1A06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06DCu;
        // 0x1a06e0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06E4u;
        goto label_1a06e4;
    }
    ctx->pc = 0x1A06DCu;
    SET_GPR_U32(ctx, 31, 0x1A06E4u);
    ctx->pc = 0x1A06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06DCu;
    // 0x1a06e0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A06DCu, 0x1A06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06E4u;
label_1a06e4:
    // 0x1a06e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1a06e8:
    if (ctx->pc == 0x1A06E8u) {
        ctx->pc = 0x1A06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06E4u;
        // 0x1a06e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06ECu;
        goto label_1a06ec;
    }
    ctx->pc = 0x1A06E4u;
    {
        const bool branch_taken_0x1a06e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06e4) {
            ctx->pc = 0x1A06E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06E4u;
            // 0x1a06e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0708u;
            goto label_1a0708;
        }
    }
    ctx->pc = 0x1A06ECu;
label_1a06ec:
    // 0x1a06ec: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a06f0:
    // 0x1a06f0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1a06f4:
    // 0x1a06f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a06f8:
    if (ctx->pc == 0x1A06F8u) {
        ctx->pc = 0x1A06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06F4u;
        // 0x1a06f8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06FCu;
        goto label_1a06fc;
    }
    ctx->pc = 0x1A06F4u;
    {
        const bool branch_taken_0x1a06f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06F4u;
        // 0x1a06f8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06f4) {
            ctx->pc = 0x1A0704u;
            goto label_1a0704;
        }
    }
    ctx->pc = 0x1A06FCu;
label_1a06fc:
    // 0x1a06fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1a0700:
    if (ctx->pc == 0x1A0700u) {
        ctx->pc = 0x1A0704u;
        goto label_1a0704;
    }
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A0708u;
            goto label_1a0708;
        }
    }
    ctx->pc = 0x1A0704u;
label_1a0704:
    // 0x1a0704: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a0704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0708:
    // 0x1a0708: 0x1640001b  bnez        $s2, . + 4 + (0x1B << 2)
label_1a070c:
    if (ctx->pc == 0x1A070Cu) {
        ctx->pc = 0x1A0710u;
        goto label_1a0710;
    }
    ctx->pc = 0x1A0708u;
    {
        const bool branch_taken_0x1a0708 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0708) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0710u;
label_1a0710:
    // 0x1a0710: 0xc0690c8  jal         func_1A4320
label_1a0714:
    if (ctx->pc == 0x1A0714u) {
        ctx->pc = 0x1A0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0710u;
        // 0x1a0714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0718u;
        goto label_1a0718;
    }
    ctx->pc = 0x1A0710u;
    SET_GPR_U32(ctx, 31, 0x1A0718u);
    ctx->pc = 0x1A0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0710u;
    // 0x1a0714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4320u, 0x1A0710u, 0x1A0718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0718u;
label_1a0718:
    // 0x1a0718: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x1a0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
label_1a071c:
    // 0x1a071c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a0720:
    if (ctx->pc == 0x1A0720u) {
        ctx->pc = 0x1A0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A071Cu;
        // 0x1a0720: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0724u;
        goto label_1a0724;
    }
    ctx->pc = 0x1A071Cu;
    {
        const bool branch_taken_0x1a071c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A071Cu;
        // 0x1a0720: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a071c) {
            ctx->pc = 0x1A0738u;
            goto label_1a0738;
        }
    }
    ctx->pc = 0x1A0724u;
label_1a0724:
    // 0x1a0724: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0728:
    // 0x1a0728: 0x0  nop
    ctx->pc = 0x1a0728u;
    // NOP
label_1a072c:
    // 0x1a072c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a072cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a0730:
    // 0x1a0730: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0734:
    if (ctx->pc == 0x1A0734u) {
        ctx->pc = 0x1A0738u;
        goto label_1a0738;
    }
    ctx->pc = 0x1A0730u;
    {
        const bool branch_taken_0x1a0730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0730) {
            ctx->pc = 0x1A0750u;
            goto label_1a0750;
        }
    }
    ctx->pc = 0x1A0738u;
label_1a0738:
    // 0x1a0738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a073c:
    // 0x1a073c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0740:
    // 0x1a0740: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a0744:
    // 0x1a0744: 0x0  nop
    ctx->pc = 0x1a0744u;
    // NOP
label_1a0748:
    // 0x1a0748: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a074c:
    // 0x1a074c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a074cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a0750:
    // 0x1a0750: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a0754:
    // 0x1a0754: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a0758:
    // 0x1a0758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a075c:
    // 0x1a075c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a0760:
    // 0x1a0760: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
label_1a0764:
    // 0x1a0764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a0768:
    // 0x1a0768: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a076c:
    // 0x1a076c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1a076cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1a0770:
    // 0x1a0770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a0770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a0774:
    // 0x1a0774: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x1a0774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_1a0778:
    // 0x1a0778: 0xc067e00  jal         func_19F800
label_1a077c:
    if (ctx->pc == 0x1A077Cu) {
        ctx->pc = 0x1A077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0778u;
        // 0x1a077c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0780u;
        goto label_1a0780;
    }
    ctx->pc = 0x1A0778u;
    SET_GPR_U32(ctx, 31, 0x1A0780u);
    ctx->pc = 0x1A077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0778u;
    // 0x1a077c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F800u, 0x1A0778u, 0x1A0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0780u;
label_1a0780:
    // 0x1a0780: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1a0784:
    if (ctx->pc == 0x1A0784u) {
        ctx->pc = 0x1A0788u;
        goto label_1a0788;
    }
    ctx->pc = 0x1A0780u;
    {
        const bool branch_taken_0x1a0780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0780) {
            ctx->pc = 0x1A0878u;
            goto label_1a0878;
        }
    }
    ctx->pc = 0x1A0788u;
label_1a0788:
    // 0x1a0788: 0xc064c90  jal         func_193240
label_1a078c:
    if (ctx->pc == 0x1A078Cu) {
        ctx->pc = 0x1A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0788u;
        // 0x1a078c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0790u;
        goto label_1a0790;
    }
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193240u, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a0794:
    if (ctx->pc == 0x1A0794u) {
        ctx->pc = 0x1A0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0790u;
        // 0x1a0794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0798u;
        goto label_1a0798;
    }
    ctx->pc = 0x1A0790u;
    {
        const bool branch_taken_0x1a0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0790u;
        // 0x1a0794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0790) {
            ctx->pc = 0x1A07C8u;
            goto label_1a07c8;
        }
    }
    ctx->pc = 0x1A0798u;
label_1a0798:
    // 0x1a0798: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a079c:
    // 0x1a079c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a079cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a07a0:
    // 0x1a07a0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1a07a4:
    // 0x1a07a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a07a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1a07a8:
    // 0x1a07a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a07a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a07ac:
    // 0x1a07ac: 0xc0b12b0  jal         func_2C4AC0
label_1a07b0:
    if (ctx->pc == 0x1A07B0u) {
        ctx->pc = 0x1A07B4u;
        goto label_1a07b4;
    }
    ctx->pc = 0x1A07ACu;
    SET_GPR_U32(ctx, 31, 0x1A07B4u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A07ACu, 0x1A07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07B4u;
label_1a07b4:
    // 0x1a07b4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1a07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1a07b8:
    // 0x1a07b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a07b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a07bc:
    // 0x1a07bc: 0x2443fe90  addiu       $v1, $v0, -0x170
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_1a07c0:
    // 0x1a07c0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a07c4:
    if (ctx->pc == 0x1A07C4u) {
        ctx->pc = 0x1A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C0u;
        // 0x1a07c4: 0x9c46fe90  lwu         $a2, -0x170($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07C8u;
        goto label_1a07c8;
    }
    ctx->pc = 0x1A07C0u;
    {
        const bool branch_taken_0x1a07c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C0u;
        // 0x1a07c4: 0x9c46fe90  lwu         $a2, -0x170($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c0) {
            ctx->pc = 0x1A0854u;
            goto label_1a0854;
        }
    }
    ctx->pc = 0x1A07C8u;
label_1a07c8:
    // 0x1a07c8: 0xc0b1260  jal         func_2C4980
label_1a07cc:
    if (ctx->pc == 0x1A07CCu) {
        ctx->pc = 0x1A07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C8u;
        // 0x1a07cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07D0u;
        goto label_1a07d0;
    }
    ctx->pc = 0x1A07C8u;
    SET_GPR_U32(ctx, 31, 0x1A07D0u);
    ctx->pc = 0x1A07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07C8u;
    // 0x1a07cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1A07C8u, 0x1A07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07D0u;
label_1a07d0:
    // 0x1a07d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a07d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a07d4:
    // 0x1a07d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a07d8:
    // 0x1a07d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1a07dc:
    if (ctx->pc == 0x1A07DCu) {
        ctx->pc = 0x1A07E0u;
        goto label_1a07e0;
    }
    ctx->pc = 0x1A07D8u;
    {
        const bool branch_taken_0x1a07d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a07d8) {
            ctx->pc = 0x1A0828u;
            goto label_1a0828;
        }
    }
    ctx->pc = 0x1A07E0u;
label_1a07e0:
    // 0x1a07e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a07e4:
    if (ctx->pc == 0x1A07E4u) {
        ctx->pc = 0x1A07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07E0u;
        // 0x1a07e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07E8u;
        goto label_1a07e8;
    }
    ctx->pc = 0x1A07E0u;
    {
        const bool branch_taken_0x1a07e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07E0u;
        // 0x1a07e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07e0) {
            ctx->pc = 0x1A07F8u;
            goto label_1a07f8;
        }
    }
    ctx->pc = 0x1A07E8u;
label_1a07e8:
    // 0x1a07e8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1a07ec:
    if (ctx->pc == 0x1A07ECu) {
        ctx->pc = 0x1A07F0u;
        goto label_1a07f0;
    }
    ctx->pc = 0x1A07E8u;
    {
        const bool branch_taken_0x1a07e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a07e8) {
            ctx->pc = 0x1A0870u;
            goto label_1a0870;
        }
    }
    ctx->pc = 0x1A07F0u;
label_1a07f0:
    // 0x1a07f0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1a07f4:
    if (ctx->pc == 0x1A07F4u) {
        ctx->pc = 0x1A07F8u;
        goto label_1a07f8;
    }
    ctx->pc = 0x1A07F0u;
    {
        const bool branch_taken_0x1a07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07f0) {
            ctx->pc = 0x1A0878u;
            goto label_1a0878;
        }
    }
    ctx->pc = 0x1A07F8u;
label_1a07f8:
    // 0x1a07f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a07fc:
    // 0x1a07fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a07fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0800:
    // 0x1a0800: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1a0804:
    // 0x1a0804: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a0804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1a0808:
    // 0x1a0808: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a0808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a080c:
    // 0x1a080c: 0xc0b12b0  jal         func_2C4AC0
label_1a0810:
    if (ctx->pc == 0x1A0810u) {
        ctx->pc = 0x1A0814u;
        goto label_1a0814;
    }
    ctx->pc = 0x1A080Cu;
    SET_GPR_U32(ctx, 31, 0x1A0814u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A080Cu, 0x1A0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0814u;
label_1a0814:
    // 0x1a0814: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1a0814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1a0818:
    // 0x1a0818: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a0818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a081c:
    // 0x1a081c: 0x2443fe90  addiu       $v1, $v0, -0x170
    ctx->pc = 0x1a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_1a0820:
    // 0x1a0820: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a0824:
    if (ctx->pc == 0x1A0824u) {
        ctx->pc = 0x1A0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0820u;
        // 0x1a0824: 0x9c46fe90  lwu         $a2, -0x170($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0828u;
        goto label_1a0828;
    }
    ctx->pc = 0x1A0820u;
    {
        const bool branch_taken_0x1a0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0820u;
        // 0x1a0824: 0x9c46fe90  lwu         $a2, -0x170($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0820) {
            ctx->pc = 0x1A0854u;
            goto label_1a0854;
        }
    }
    ctx->pc = 0x1A0828u;
label_1a0828:
    // 0x1a0828: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1a082c:
    // 0x1a082c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a082cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a0830:
    // 0x1a0830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a0830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0834:
    // 0x1a0834: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a0838:
    // 0x1a0838: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a0838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a083c:
    // 0x1a083c: 0xc0b12b0  jal         func_2C4AC0
label_1a0840:
    if (ctx->pc == 0x1A0840u) {
        ctx->pc = 0x1A0844u;
        goto label_1a0844;
    }
    ctx->pc = 0x1A083Cu;
    SET_GPR_U32(ctx, 31, 0x1A0844u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A083Cu, 0x1A0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0844u;
label_1a0844:
    // 0x1a0844: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1a0848:
    // 0x1a0848: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a0848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a084c:
    // 0x1a084c: 0x2443fe98  addiu       $v1, $v0, -0x168
    ctx->pc = 0x1a084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
label_1a0850:
    // 0x1a0850: 0x9c46fe98  lwu         $a2, -0x168($v0)
    ctx->pc = 0x1a0850u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966936)));
label_1a0854:
    // 0x1a0854: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a0854u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a0858:
    // 0x1a0858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a085c:
    // 0x1a085c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a085cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1a0860:
    // 0x1a0860: 0xc06924e  jal         func_1A4938
label_1a0864:
    if (ctx->pc == 0x1A0864u) {
        ctx->pc = 0x1A0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0860u;
        // 0x1a0864: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0868u;
        goto label_1a0868;
    }
    ctx->pc = 0x1A0860u;
    SET_GPR_U32(ctx, 31, 0x1A0868u);
    ctx->pc = 0x1A0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0860u;
    // 0x1a0864: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A0860u, 0x1A0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0868u;
label_1a0868:
    // 0x1a0868: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a086c:
    if (ctx->pc == 0x1A086Cu) {
        ctx->pc = 0x1A0870u;
        goto label_1a0870;
    }
    ctx->pc = 0x1A0868u;
    {
        const bool branch_taken_0x1a0868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0868) {
            ctx->pc = 0x1A0878u;
            goto label_1a0878;
        }
    }
    ctx->pc = 0x1A0870u;
label_1a0870:
    // 0x1a0870: 0xc069052  jal         func_1A4148
label_1a0874:
    if (ctx->pc == 0x1A0874u) {
        ctx->pc = 0x1A0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0870u;
        // 0x1a0874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0878u;
        goto label_1a0878;
    }
    ctx->pc = 0x1A0870u;
    SET_GPR_U32(ctx, 31, 0x1A0878u);
    ctx->pc = 0x1A0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0870u;
    // 0x1a0874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4148u, 0x1A0870u, 0x1A0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0878u;
label_1a0878:
    // 0x1a0878: 0xc061a26  jal         func_186898
label_1a087c:
    if (ctx->pc == 0x1A087Cu) {
        ctx->pc = 0x1A087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0878u;
        // 0x1a087c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0880u;
        goto label_1a0880;
    }
    ctx->pc = 0x1A0878u;
    SET_GPR_U32(ctx, 31, 0x1A0880u);
    ctx->pc = 0x1A087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0878u;
    // 0x1a087c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0878u, 0x1A0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0880u;
label_1a0880:
    // 0x1a0880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0884:
    // 0x1a0884: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a0888:
    // 0x1a0888: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a0888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a088c:
    // 0x1a088c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1a0890:
    if (ctx->pc == 0x1A0890u) {
        ctx->pc = 0x1A0894u;
        goto label_1a0894;
    }
    ctx->pc = 0x1A088Cu;
    {
        const bool branch_taken_0x1a088c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a088c) {
            ctx->pc = 0x1A089Cu;
            goto label_1a089c;
        }
    }
    ctx->pc = 0x1A0894u;
label_1a0894:
    // 0x1a0894: 0xc068f12  jal         func_1A3C48
label_1a0898:
    if (ctx->pc == 0x1A0898u) {
        ctx->pc = 0x1A0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0894u;
        // 0x1a0898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A089Cu;
        goto label_1a089c;
    }
    ctx->pc = 0x1A0894u;
    SET_GPR_U32(ctx, 31, 0x1A089Cu);
    ctx->pc = 0x1A0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0894u;
    // 0x1a0898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1A0894u, 0x1A089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A089Cu;
label_1a089c:
    // 0x1a089c: 0xc06801a  jal         func_1A0068
label_1a08a0:
    if (ctx->pc == 0x1A08A0u) {
        ctx->pc = 0x1A08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A089Cu;
        // 0x1a08a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08A4u;
        goto label_1a08a4;
    }
    ctx->pc = 0x1A089Cu;
    SET_GPR_U32(ctx, 31, 0x1A08A4u);
    ctx->pc = 0x1A08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A089Cu;
    // 0x1a08a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0068u, 0x1A089Cu, 0x1A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08A4u;
label_1a08a4:
    // 0x1a08a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a08a8:
    if (ctx->pc == 0x1A08A8u) {
        ctx->pc = 0x1A08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08A4u;
        // 0x1a08a8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08ACu;
        goto label_1a08ac;
    }
    ctx->pc = 0x1A08A4u;
    {
        const bool branch_taken_0x1a08a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08a4) {
            ctx->pc = 0x1A08A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A08A4u;
            // 0x1a08a8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A08B8u;
            goto label_1a08b8;
        }
    }
    ctx->pc = 0x1A08ACu;
label_1a08ac:
    // 0x1a08ac: 0xc069052  jal         func_1A4148
label_1a08b0:
    if (ctx->pc == 0x1A08B0u) {
        ctx->pc = 0x1A08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08ACu;
        // 0x1a08b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08B4u;
        goto label_1a08b4;
    }
    ctx->pc = 0x1A08ACu;
    SET_GPR_U32(ctx, 31, 0x1A08B4u);
    ctx->pc = 0x1A08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08ACu;
    // 0x1a08b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4148u, 0x1A08ACu, 0x1A08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08B4u;
label_1a08b4:
    // 0x1a08b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a08b8:
    // 0x1a08b8: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x1a08b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1a08bc:
    // 0x1a08bc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_1a08c0:
    if (ctx->pc == 0x1A08C0u) {
        ctx->pc = 0x1A08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08BCu;
        // 0x1a08c0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08C4u;
        goto label_1a08c4;
    }
    ctx->pc = 0x1A08BCu;
    {
        const bool branch_taken_0x1a08bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08BCu;
        // 0x1a08c0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08bc) {
            ctx->pc = 0x1A0A2Cu;
            goto label_1a0a2c;
        }
    }
    ctx->pc = 0x1A08C4u;
label_1a08c4:
    // 0x1a08c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a08c8:
    // 0x1a08c8: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x1a08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
label_1a08cc:
    // 0x1a08cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a08d0:
    // 0x1a08d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a08d4:
    // 0x1a08d4: 0x800008  jr          $a0
label_1a08d8:
    if (ctx->pc == 0x1A08D8u) {
        ctx->pc = 0x1A08DCu;
        goto label_1a08dc;
    }
    ctx->pc = 0x1A08D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08ECu: goto label_1a08ec;
            case 0x1A08FCu: goto label_1a08fc;
            case 0x1A090Cu: goto label_1a090c;
            case 0x1A091Cu: goto label_1a091c;
            case 0x1A092Cu: goto label_1a092c;
            case 0x1A093Cu: goto label_1a093c;
            case 0x1A094Cu: goto label_1a094c;
            case 0x1A095Cu: goto label_1a095c;
            case 0x1A096Cu: goto label_1a096c;
            case 0x1A097Cu: goto label_1a097c;
            case 0x1A098Cu: goto label_1a098c;
            case 0x1A099Cu: goto label_1a099c;
            case 0x1A09ACu: goto label_1a09ac;
            case 0x1A09BCu: goto label_1a09bc;
            case 0x1A09CCu: goto label_1a09cc;
            case 0x1A09DCu: goto label_1a09dc;
            case 0x1A09ECu: goto label_1a09ec;
            case 0x1A09FCu: goto label_1a09fc;
            case 0x1A0A0Cu: goto label_1a0a0c;
            case 0x1A0A1Cu: goto label_1a0a1c;
            case 0x1A0A2Cu: goto label_1a0a2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A08D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A08DCu;
label_1a08dc:
    // 0x1a08dc: 0xc06854a  jal         func_1A1528
label_1a08e0:
    if (ctx->pc == 0x1A08E0u) {
        ctx->pc = 0x1A08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08DCu;
        // 0x1a08e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08E4u;
        goto label_1a08e4;
    }
    ctx->pc = 0x1A08DCu;
    SET_GPR_U32(ctx, 31, 0x1A08E4u);
    ctx->pc = 0x1A08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08DCu;
    // 0x1a08e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1528u, 0x1A08DCu, 0x1A08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08E4u;
label_1a08e4:
    // 0x1a08e4: 0x10000057  b           . + 4 + (0x57 << 2)
label_1a08e8:
    if (ctx->pc == 0x1A08E8u) {
        ctx->pc = 0x1A08ECu;
        goto label_1a08ec;
    }
    ctx->pc = 0x1A08E4u;
    {
        const bool branch_taken_0x1a08e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08e4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A08ECu;
label_1a08ec:
    // 0x1a08ec: 0xc06844c  jal         func_1A1130
label_1a08f0:
    if (ctx->pc == 0x1A08F0u) {
        ctx->pc = 0x1A08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08ECu;
        // 0x1a08f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08F4u;
        goto label_1a08f4;
    }
    ctx->pc = 0x1A08ECu;
    SET_GPR_U32(ctx, 31, 0x1A08F4u);
    ctx->pc = 0x1A08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08ECu;
    // 0x1a08f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1130u, 0x1A08ECu, 0x1A08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08F4u;
label_1a08f4:
    // 0x1a08f4: 0x10000053  b           . + 4 + (0x53 << 2)
label_1a08f8:
    if (ctx->pc == 0x1A08F8u) {
        ctx->pc = 0x1A08FCu;
        goto label_1a08fc;
    }
    ctx->pc = 0x1A08F4u;
    {
        const bool branch_taken_0x1a08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08f4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A08FCu;
label_1a08fc:
    // 0x1a08fc: 0xc0685e6  jal         func_1A1798
label_1a0900:
    if (ctx->pc == 0x1A0900u) {
        ctx->pc = 0x1A0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08FCu;
        // 0x1a0900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0904u;
        goto label_1a0904;
    }
    ctx->pc = 0x1A08FCu;
    SET_GPR_U32(ctx, 31, 0x1A0904u);
    ctx->pc = 0x1A0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08FCu;
    // 0x1a0900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1798u, 0x1A08FCu, 0x1A0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0904u;
label_1a0904:
    // 0x1a0904: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1a0908:
    if (ctx->pc == 0x1A0908u) {
        ctx->pc = 0x1A090Cu;
        goto label_1a090c;
    }
    ctx->pc = 0x1A0904u;
    {
        const bool branch_taken_0x1a0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0904) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A090Cu;
label_1a090c:
    // 0x1a090c: 0xc06867c  jal         func_1A19F0
label_1a0910:
    if (ctx->pc == 0x1A0910u) {
        ctx->pc = 0x1A0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A090Cu;
        // 0x1a0910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0914u;
        goto label_1a0914;
    }
    ctx->pc = 0x1A090Cu;
    SET_GPR_U32(ctx, 31, 0x1A0914u);
    ctx->pc = 0x1A0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A090Cu;
    // 0x1a0910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19F0u, 0x1A090Cu, 0x1A0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0914u;
label_1a0914:
    // 0x1a0914: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1a0918:
    if (ctx->pc == 0x1A0918u) {
        ctx->pc = 0x1A091Cu;
        goto label_1a091c;
    }
    ctx->pc = 0x1A0914u;
    {
        const bool branch_taken_0x1a0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0914) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A091Cu;
label_1a091c:
    // 0x1a091c: 0xc0686ca  jal         func_1A1B28
label_1a0920:
    if (ctx->pc == 0x1A0920u) {
        ctx->pc = 0x1A0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A091Cu;
        // 0x1a0920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0924u;
        goto label_1a0924;
    }
    ctx->pc = 0x1A091Cu;
    SET_GPR_U32(ctx, 31, 0x1A0924u);
    ctx->pc = 0x1A0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A091Cu;
    // 0x1a0920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B28u, 0x1A091Cu, 0x1A0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0924u;
label_1a0924:
    // 0x1a0924: 0x10000047  b           . + 4 + (0x47 << 2)
label_1a0928:
    if (ctx->pc == 0x1A0928u) {
        ctx->pc = 0x1A092Cu;
        goto label_1a092c;
    }
    ctx->pc = 0x1A0924u;
    {
        const bool branch_taken_0x1a0924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0924) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A092Cu;
label_1a092c:
    // 0x1a092c: 0xc06872c  jal         func_1A1CB0
label_1a0930:
    if (ctx->pc == 0x1A0930u) {
        ctx->pc = 0x1A0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A092Cu;
        // 0x1a0930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0934u;
        goto label_1a0934;
    }
    ctx->pc = 0x1A092Cu;
    SET_GPR_U32(ctx, 31, 0x1A0934u);
    ctx->pc = 0x1A0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A092Cu;
    // 0x1a0930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1CB0u, 0x1A092Cu, 0x1A0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0934u;
label_1a0934:
    // 0x1a0934: 0x10000043  b           . + 4 + (0x43 << 2)
label_1a0938:
    if (ctx->pc == 0x1A0938u) {
        ctx->pc = 0x1A093Cu;
        goto label_1a093c;
    }
    ctx->pc = 0x1A0934u;
    {
        const bool branch_taken_0x1a0934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0934) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A093Cu;
label_1a093c:
    // 0x1a093c: 0xc0687a6  jal         func_1A1E98
label_1a0940:
    if (ctx->pc == 0x1A0940u) {
        ctx->pc = 0x1A0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A093Cu;
        // 0x1a0940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0944u;
        goto label_1a0944;
    }
    ctx->pc = 0x1A093Cu;
    SET_GPR_U32(ctx, 31, 0x1A0944u);
    ctx->pc = 0x1A0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A093Cu;
    // 0x1a0940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1E98u, 0x1A093Cu, 0x1A0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0944u;
label_1a0944:
    // 0x1a0944: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1a0948:
    if (ctx->pc == 0x1A0948u) {
        ctx->pc = 0x1A094Cu;
        goto label_1a094c;
    }
    ctx->pc = 0x1A0944u;
    {
        const bool branch_taken_0x1a0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0944) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A094Cu;
label_1a094c:
    // 0x1a094c: 0xc0687da  jal         func_1A1F68
label_1a0950:
    if (ctx->pc == 0x1A0950u) {
        ctx->pc = 0x1A0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A094Cu;
        // 0x1a0950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0954u;
        goto label_1a0954;
    }
    ctx->pc = 0x1A094Cu;
    SET_GPR_U32(ctx, 31, 0x1A0954u);
    ctx->pc = 0x1A0950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A094Cu;
    // 0x1a0950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F68u, 0x1A094Cu, 0x1A0954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0954u;
label_1a0954:
    // 0x1a0954: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1a0958:
    if (ctx->pc == 0x1A0958u) {
        ctx->pc = 0x1A095Cu;
        goto label_1a095c;
    }
    ctx->pc = 0x1A0954u;
    {
        const bool branch_taken_0x1a0954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0954) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A095Cu;
label_1a095c:
    // 0x1a095c: 0xc0689fc  jal         func_1A27F0
label_1a0960:
    if (ctx->pc == 0x1A0960u) {
        ctx->pc = 0x1A0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A095Cu;
        // 0x1a0960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0964u;
        goto label_1a0964;
    }
    ctx->pc = 0x1A095Cu;
    SET_GPR_U32(ctx, 31, 0x1A0964u);
    ctx->pc = 0x1A0960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A095Cu;
    // 0x1a0960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A27F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A27F0u, 0x1A095Cu, 0x1A0964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0964u;
label_1a0964:
    // 0x1a0964: 0x10000037  b           . + 4 + (0x37 << 2)
label_1a0968:
    if (ctx->pc == 0x1A0968u) {
        ctx->pc = 0x1A096Cu;
        goto label_1a096c;
    }
    ctx->pc = 0x1A0964u;
    {
        const bool branch_taken_0x1a0964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0964) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A096Cu;
label_1a096c:
    // 0x1a096c: 0xc068a30  jal         func_1A28C0
label_1a0970:
    if (ctx->pc == 0x1A0970u) {
        ctx->pc = 0x1A0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A096Cu;
        // 0x1a0970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0974u;
        goto label_1a0974;
    }
    ctx->pc = 0x1A096Cu;
    SET_GPR_U32(ctx, 31, 0x1A0974u);
    ctx->pc = 0x1A0970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A096Cu;
    // 0x1a0970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A28C0u, 0x1A096Cu, 0x1A0974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0974u;
label_1a0974:
    // 0x1a0974: 0x10000033  b           . + 4 + (0x33 << 2)
label_1a0978:
    if (ctx->pc == 0x1A0978u) {
        ctx->pc = 0x1A097Cu;
        goto label_1a097c;
    }
    ctx->pc = 0x1A0974u;
    {
        const bool branch_taken_0x1a0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0974) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A097Cu;
label_1a097c:
    // 0x1a097c: 0xc068b58  jal         func_1A2D60
label_1a0980:
    if (ctx->pc == 0x1A0980u) {
        ctx->pc = 0x1A0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A097Cu;
        // 0x1a0980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0984u;
        goto label_1a0984;
    }
    ctx->pc = 0x1A097Cu;
    SET_GPR_U32(ctx, 31, 0x1A0984u);
    ctx->pc = 0x1A0980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A097Cu;
    // 0x1a0980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D60u, 0x1A097Cu, 0x1A0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0984u;
label_1a0984:
    // 0x1a0984: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1a0988:
    if (ctx->pc == 0x1A0988u) {
        ctx->pc = 0x1A098Cu;
        goto label_1a098c;
    }
    ctx->pc = 0x1A0984u;
    {
        const bool branch_taken_0x1a0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0984) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A098Cu;
label_1a098c:
    // 0x1a098c: 0xc068c74  jal         func_1A31D0
label_1a0990:
    if (ctx->pc == 0x1A0990u) {
        ctx->pc = 0x1A0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A098Cu;
        // 0x1a0990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0994u;
        goto label_1a0994;
    }
    ctx->pc = 0x1A098Cu;
    SET_GPR_U32(ctx, 31, 0x1A0994u);
    ctx->pc = 0x1A0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A098Cu;
    // 0x1a0990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31D0u, 0x1A098Cu, 0x1A0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0994u;
label_1a0994:
    // 0x1a0994: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1a0998:
    if (ctx->pc == 0x1A0998u) {
        ctx->pc = 0x1A099Cu;
        goto label_1a099c;
    }
    ctx->pc = 0x1A0994u;
    {
        const bool branch_taken_0x1a0994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0994) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A099Cu;
label_1a099c:
    // 0x1a099c: 0xc06883c  jal         func_1A20F0
label_1a09a0:
    if (ctx->pc == 0x1A09A0u) {
        ctx->pc = 0x1A09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A099Cu;
        // 0x1a09a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09A4u;
        goto label_1a09a4;
    }
    ctx->pc = 0x1A099Cu;
    SET_GPR_U32(ctx, 31, 0x1A09A4u);
    ctx->pc = 0x1A09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A099Cu;
    // 0x1a09a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A20F0u, 0x1A099Cu, 0x1A09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09A4u;
label_1a09a4:
    // 0x1a09a4: 0x10000027  b           . + 4 + (0x27 << 2)
label_1a09a8:
    if (ctx->pc == 0x1A09A8u) {
        ctx->pc = 0x1A09ACu;
        goto label_1a09ac;
    }
    ctx->pc = 0x1A09A4u;
    {
        const bool branch_taken_0x1a09a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09a4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09ACu;
label_1a09ac:
    // 0x1a09ac: 0xc068906  jal         func_1A2418
label_1a09b0:
    if (ctx->pc == 0x1A09B0u) {
        ctx->pc = 0x1A09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09ACu;
        // 0x1a09b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09B4u;
        goto label_1a09b4;
    }
    ctx->pc = 0x1A09ACu;
    SET_GPR_U32(ctx, 31, 0x1A09B4u);
    ctx->pc = 0x1A09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09ACu;
    // 0x1a09b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2418u, 0x1A09ACu, 0x1A09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09B4u;
label_1a09b4:
    // 0x1a09b4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a09b8:
    if (ctx->pc == 0x1A09B8u) {
        ctx->pc = 0x1A09BCu;
        goto label_1a09bc;
    }
    ctx->pc = 0x1A09B4u;
    {
        const bool branch_taken_0x1a09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09b4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09BCu;
label_1a09bc:
    // 0x1a09bc: 0xc0689aa  jal         func_1A26A8
label_1a09c0:
    if (ctx->pc == 0x1A09C0u) {
        ctx->pc = 0x1A09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09BCu;
        // 0x1a09c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09C4u;
        goto label_1a09c4;
    }
    ctx->pc = 0x1A09BCu;
    SET_GPR_U32(ctx, 31, 0x1A09C4u);
    ctx->pc = 0x1A09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09BCu;
    // 0x1a09c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A26A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A26A8u, 0x1A09BCu, 0x1A09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09C4u;
label_1a09c4:
    // 0x1a09c4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1a09c8:
    if (ctx->pc == 0x1A09C8u) {
        ctx->pc = 0x1A09CCu;
        goto label_1a09cc;
    }
    ctx->pc = 0x1A09C4u;
    {
        const bool branch_taken_0x1a09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09c4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09CCu;
label_1a09cc:
    // 0x1a09cc: 0xc0689c6  jal         func_1A2718
label_1a09d0:
    if (ctx->pc == 0x1A09D0u) {
        ctx->pc = 0x1A09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09CCu;
        // 0x1a09d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09D4u;
        goto label_1a09d4;
    }
    ctx->pc = 0x1A09CCu;
    SET_GPR_U32(ctx, 31, 0x1A09D4u);
    ctx->pc = 0x1A09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09CCu;
    // 0x1a09d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2718u, 0x1A09CCu, 0x1A09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09D4u;
label_1a09d4:
    // 0x1a09d4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a09d8:
    if (ctx->pc == 0x1A09D8u) {
        ctx->pc = 0x1A09DCu;
        goto label_1a09dc;
    }
    ctx->pc = 0x1A09D4u;
    {
        const bool branch_taken_0x1a09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09d4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09DCu;
label_1a09dc:
    // 0x1a09dc: 0xc0688cc  jal         func_1A2330
label_1a09e0:
    if (ctx->pc == 0x1A09E0u) {
        ctx->pc = 0x1A09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09DCu;
        // 0x1a09e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09E4u;
        goto label_1a09e4;
    }
    ctx->pc = 0x1A09DCu;
    SET_GPR_U32(ctx, 31, 0x1A09E4u);
    ctx->pc = 0x1A09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09DCu;
    // 0x1a09e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2330u, 0x1A09DCu, 0x1A09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09E4u;
label_1a09e4:
    // 0x1a09e4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a09e8:
    if (ctx->pc == 0x1A09E8u) {
        ctx->pc = 0x1A09ECu;
        goto label_1a09ec;
    }
    ctx->pc = 0x1A09E4u;
    {
        const bool branch_taken_0x1a09e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09e4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09ECu;
label_1a09ec:
    // 0x1a09ec: 0xc068cba  jal         func_1A32E8
label_1a09f0:
    if (ctx->pc == 0x1A09F0u) {
        ctx->pc = 0x1A09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09ECu;
        // 0x1a09f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09F4u;
        goto label_1a09f4;
    }
    ctx->pc = 0x1A09ECu;
    SET_GPR_U32(ctx, 31, 0x1A09F4u);
    ctx->pc = 0x1A09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09ECu;
    // 0x1a09f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A32E8u, 0x1A09ECu, 0x1A09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09F4u;
label_1a09f4:
    // 0x1a09f4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a09f8:
    if (ctx->pc == 0x1A09F8u) {
        ctx->pc = 0x1A09FCu;
        goto label_1a09fc;
    }
    ctx->pc = 0x1A09F4u;
    {
        const bool branch_taken_0x1a09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09f4) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A09FCu;
label_1a09fc:
    // 0x1a09fc: 0xc068cee  jal         func_1A33B8
label_1a0a00:
    if (ctx->pc == 0x1A0A00u) {
        ctx->pc = 0x1A0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09FCu;
        // 0x1a0a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A04u;
        goto label_1a0a04;
    }
    ctx->pc = 0x1A09FCu;
    SET_GPR_U32(ctx, 31, 0x1A0A04u);
    ctx->pc = 0x1A0A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09FCu;
    // 0x1a0a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A33B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A33B8u, 0x1A09FCu, 0x1A0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A04u;
label_1a0a04:
    // 0x1a0a04: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a0a08:
    if (ctx->pc == 0x1A0A08u) {
        ctx->pc = 0x1A0A0Cu;
        goto label_1a0a0c;
    }
    ctx->pc = 0x1A0A04u;
    {
        const bool branch_taken_0x1a0a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a04) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A0A0Cu;
label_1a0a0c:
    // 0x1a0a0c: 0xc068d7c  jal         func_1A35F0
label_1a0a10:
    if (ctx->pc == 0x1A0A10u) {
        ctx->pc = 0x1A0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A0Cu;
        // 0x1a0a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A14u;
        goto label_1a0a14;
    }
    ctx->pc = 0x1A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A14u);
    ctx->pc = 0x1A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A0Cu;
    // 0x1a0a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35F0u, 0x1A0A0Cu, 0x1A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A14u;
label_1a0a14:
    // 0x1a0a14: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a0a18:
    if (ctx->pc == 0x1A0A18u) {
        ctx->pc = 0x1A0A1Cu;
        goto label_1a0a1c;
    }
    ctx->pc = 0x1A0A14u;
    {
        const bool branch_taken_0x1a0a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a14) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A0A1Cu;
label_1a0a1c:
    // 0x1a0a1c: 0xc068e5e  jal         func_1A3978
label_1a0a20:
    if (ctx->pc == 0x1A0A20u) {
        ctx->pc = 0x1A0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A1Cu;
        // 0x1a0a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A24u;
        goto label_1a0a24;
    }
    ctx->pc = 0x1A0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A24u);
    ctx->pc = 0x1A0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A1Cu;
    // 0x1a0a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3978u, 0x1A0A1Cu, 0x1A0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A24u;
label_1a0a24:
    // 0x1a0a24: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0a28:
    if (ctx->pc == 0x1A0A28u) {
        ctx->pc = 0x1A0A2Cu;
        goto label_1a0a2c;
    }
    ctx->pc = 0x1A0A24u;
    {
        const bool branch_taken_0x1a0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a24) {
            ctx->pc = 0x1A0A44u;
            goto label_1a0a44;
        }
    }
    ctx->pc = 0x1A0A2Cu;
label_1a0a2c:
    // 0x1a0a2c: 0xc061a1e  jal         func_186878
label_1a0a30:
    if (ctx->pc == 0x1A0A30u) {
        ctx->pc = 0x1A0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A2Cu;
        // 0x1a0a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A34u;
        goto label_1a0a34;
    }
    ctx->pc = 0x1A0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A34u);
    ctx->pc = 0x1A0A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A2Cu;
    // 0x1a0a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A0A2Cu, 0x1A0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A34u;
label_1a0a34:
    // 0x1a0a34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0a38:
    // 0x1a0a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a3c:
    // 0x1a0a3c: 0xc06cdda  jal         func_1B3768
label_1a0a40:
    if (ctx->pc == 0x1A0A40u) {
        ctx->pc = 0x1A0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A3Cu;
        // 0x1a0a40: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A44u;
        goto label_1a0a44;
    }
    ctx->pc = 0x1A0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A44u);
    ctx->pc = 0x1A0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A3Cu;
    // 0x1a0a40: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A0A3Cu, 0x1A0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A44u;
label_1a0a44:
    // 0x1a0a44: 0xc061a26  jal         func_186898
label_1a0a48:
    if (ctx->pc == 0x1A0A48u) {
        ctx->pc = 0x1A0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A44u;
        // 0x1a0a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A4Cu;
        goto label_1a0a4c;
    }
    ctx->pc = 0x1A0A44u;
    SET_GPR_U32(ctx, 31, 0x1A0A4Cu);
    ctx->pc = 0x1A0A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A44u;
    // 0x1a0a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0A44u, 0x1A0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A4Cu;
label_1a0a4c:
    // 0x1a0a4c: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x1a0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a0a50:
    // 0x1a0a50: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x1a0a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_1a0a54:
    // 0x1a0a54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a0a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0a58:
    // 0x1a0a58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a0a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a0a5c:
    // 0x1a0a5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0a60:
    // 0x1a0a60: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a0a64:
    // 0x1a0a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0a68:
    // 0x1a0a68: 0x3e00008  jr          $ra
label_1a0a6c:
    if (ctx->pc == 0x1A0A6Cu) {
        ctx->pc = 0x1A0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A68u;
        // 0x1a0a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A70u;
        goto label_fallthrough_0x1a0a68;
    }
    ctx->pc = 0x1A0A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A68u;
        // 0x1a0a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0a68:
    ctx->pc = 0x1A0A70u;
}
